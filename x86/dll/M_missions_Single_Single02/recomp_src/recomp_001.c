#include "recomp.h"

/* FUN_10006b10 @ 0x10c16b10 (10 bytes, 5 insns) */
void f_10c16b10(void) {
  FTRACE(0x10c16b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16b11 mov ebp, esp */
  EBP = (ESP);
  /* 10c16b13 mov eax, dword ptr [0x10c3cc94] */
  EAX = (r32((uint32_t)(0x10c3cc94)));
  /* 10c16b18 pop ebp */
  EBP = (pop32());
  /* 10c16b19 ret  */
  ESPCHK(0x10c16b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b20 @ 0x10c16b20 (31 bytes, 11 insns) */
void f_10c16b20(void) {
  FTRACE(0x10c16b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16b21 mov ebp, esp */
  EBP = (ESP);
  /* 10c16b23 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16b2a jbe 0x10c16b30 */
  if ((C.cf||C.zf)) goto L_10c16b30;
  /* 10c16b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16b2e jmp 0x10c16b3d */
  goto L_10c16b3d;
L_10c16b30:;
  /* 10c16b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16b33 mov dword ptr [0x10c3cc94], eax */
  w32((uint32_t)(0x10c3cc94), (EAX));
  /* 10c16b38 mov eax, 1 */
  EAX = (0x1u);
L_10c16b3d:;
  /* 10c16b3d pop ebp */
  EBP = (pop32());
  /* 10c16b3e ret  */
  ESPCHK(0x10c16b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x10c16b40 (89 bytes, 20 insns) */
void f_10c16b40(void) {
  FTRACE(0x10c16b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16b41 mov ebp, esp */
  EBP = (ESP);
  /* 10c16b43 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10c16b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c16b4a mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c16b4f push eax */
  push32((uint32_t)(EAX));
  /* 10c16b50 call dword ptr [0x10c402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d0))), 0x10c16b56u);
  /* 10c16b56 mov dword ptr [0x10c3fda8], eax */
  w32((uint32_t)(0x10c3fda8), (EAX));
  /* 10c16b5b cmp dword ptr [0x10c3fda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16b62 jne 0x10c16b68 */
  if (!C.zf) goto L_10c16b68;
  /* 10c16b64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16b66 jmp 0x10c16b97 */
  goto L_10c16b97;
L_10c16b68:;
  /* 10c16b68 mov ecx, dword ptr [0x10c3fda8] */
  ECX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c16b6e mov dword ptr [0x10c3fd9c], ecx */
  w32((uint32_t)(0x10c3fd9c), (ECX));
  /* 10c16b74 mov dword ptr [0x10c3fda0], 0 */
  w32((uint32_t)(0x10c3fda0), (0x0u));
  /* 10c16b7e mov dword ptr [0x10c3fda4], 0 */
  w32((uint32_t)(0x10c3fda4), (0x0u));
  /* 10c16b88 mov dword ptr [0x10c3fd88], 0x10 */
  w32((uint32_t)(0x10c3fd88), (0x10u));
  /* 10c16b92 mov eax, 1 */
  EAX = (0x1u);
L_10c16b97:;
  /* 10c16b97 pop ebp */
  EBP = (pop32());
  /* 10c16b98 ret  */
  ESPCHK(0x10c16b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x10c16ba0 (85 bytes, 29 insns) */
void f_10c16ba0(void) {
  FTRACE(0x10c16ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10c16ba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16ba6 mov eax, dword ptr [0x10c3fda4] */
  EAX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c16bab imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c16bae mov ecx, dword ptr [0x10c3fda8] */
  ECX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c16bb4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16bb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c16bb9 mov edx, dword ptr [0x10c3fda8] */
  EDX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c16bbf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c16bc2:;
  /* 10c16bc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16bc5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16bc8 jae 0x10c16bef */
  if (!C.cf) goto L_10c16bef;
  /* 10c16bca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16bcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16bd0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16bd3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c16bd6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16bdd jae 0x10c16be4 */
  if (!C.cf) goto L_10c16be4;
  /* 10c16bdf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16be2 jmp 0x10c16bf1 */
  goto L_10c16bf1;
L_10c16be4:;
  /* 10c16be4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16be7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16bea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c16bed jmp 0x10c16bc2 */
  goto L_10c16bc2;
L_10c16bef:;
  /* 10c16bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c16bf1:;
  /* 10c16bf1 mov esp, ebp */
  ESP = (EBP);
  /* 10c16bf3 pop ebp */
  EBP = (pop32());
  /* 10c16bf4 ret  */
  ESPCHK(0x10c16ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c00 @ 0x10c16c00 (95 bytes, 33 insns) */
void f_10c16c00(void) {
  FTRACE(0x10c16c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16c01 mov ebp, esp */
  EBP = (ESP);
  /* 10c16c03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16c09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16c0c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16c0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c16c12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16c15 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c16c18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c16c1b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c16c20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16c23 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c16c25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16c28 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c16c2b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c16c2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c16c2f jne 0x10c16c51 */
  if (!C.zf) goto L_10c16c51;
  /* 10c16c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16c34 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10c16c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c16c39 jne 0x10c16c51 */
  if (!C.zf) goto L_10c16c51;
  /* 10c16c3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16c3e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c16c44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c16c46 je 0x10c16c51 */
  if (C.zf) goto L_10c16c51;
  /* 10c16c48 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10c16c4f jmp 0x10c16c58 */
  goto L_10c16c58;
L_10c16c51:;
  /* 10c16c51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c16c58:;
  /* 10c16c58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c16c5b mov esp, ebp */
  ESP = (EBP);
  /* 10c16c5d pop ebp */
  EBP = (pop32());
  /* 10c16c5e ret  */
  ESPCHK(0x10c16c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c60 @ 0x10c16c60 (1485 bytes, 453 insns) */
void f_10c16c60(void) {
  FTRACE(0x10c16c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16c61 mov ebp, esp */
  EBP = (ESP);
  /* 10c16c63 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16c66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16c69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c16c6c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10c16c6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16c72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16c75 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16c78 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c16c7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c16c7e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10c16c81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c16c84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16c87 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c16c8d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16c90 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10c16c97 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c16c9a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16c9d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16ca0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c16ca3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16ca6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c16ca8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16cab mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c16cae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16cb1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16cb4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10c16cb7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c16cba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c16cbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c16cbf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16cc2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10c16cc5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c16cc8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c16ccb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c16cce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c16cd0 jne 0x10c16df8 */
  if (!C.zf) goto L_10c16df8;
  /* 10c16cd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c16cd9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c16cdc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16cdf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c16ce2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16ce6 jbe 0x10c16cef */
  if ((C.cf||C.zf)) goto L_10c16cef;
  /* 10c16ce8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c16cef:;
  /* 10c16cef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c16cf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c16cf5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c16cf8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16cfb jne 0x10c16dd1 */
  if (!C.zf) goto L_10c16dd1;
  /* 10c16d01 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16d05 jae 0x10c16d66 */
  if (!C.cf) goto L_10c16d66;
  /* 10c16d07 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c16d0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c16d0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c16d11 not eax */
  EAX = (~(EAX));
  /* 10c16d13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16d16 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d19 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c16d1d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c16d1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16d22 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d25 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c16d29 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d2c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16d2f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c16d32 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c16d35 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d38 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16d3b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c16d3e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d41 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16d44 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c16d48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c16d4a jne 0x10c16d64 */
  if (!C.zf) goto L_10c16d64;
  /* 10c16d4c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c16d51 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c16d54 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c16d56 not eax */
  EAX = (~(EAX));
  /* 10c16d58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16d5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c16d5d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c16d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16d62 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c16d64:;
  /* 10c16d64 jmp 0x10c16dd1 */
  goto L_10c16dd1;
L_10c16d66:;
  /* 10c16d66 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c16d69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16d6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c16d71 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c16d73 not edx */
  EDX = (~(EDX));
  /* 10c16d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16d78 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d7b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c16d82 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16d84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16d87 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d8a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10c16d91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16d94 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16d97 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c16d9a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c16d9d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16da0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16da3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c16da6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16da9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16dac movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c16db0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c16db2 jne 0x10c16dd1 */
  if (!C.zf) goto L_10c16dd1;
  /* 10c16db4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c16db7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16dba mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c16dbf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c16dc1 not edx */
  EDX = (~(EDX));
  /* 10c16dc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16dc6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c16dc9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c16dcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16dce mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c16dd1:;
  /* 10c16dd1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c16dd4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c16dd7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c16dda mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c16ddd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c16de0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c16de3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c16de6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c16de9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c16dec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c16def mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c16df2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16df5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10c16df8:;
  /* 10c16df8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c16dfb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c16dfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16e01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c16e04 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16e08 jbe 0x10c16e11 */
  if ((C.cf||C.zf)) goto L_10c16e11;
  /* 10c16e0a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10c16e11:;
  /* 10c16e11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c16e14 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c16e17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c16e19 jne 0x10c16f75 */
  if (!C.zf) goto L_10c16f75;
  /* 10c16e1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16e22 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16e25 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10c16e28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c16e2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c16e2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16e31 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c16e34 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16e38 jbe 0x10c16e41 */
  if ((C.cf||C.zf)) goto L_10c16e41;
  /* 10c16e3a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10c16e41:;
  /* 10c16e41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c16e44 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16e47 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c16e4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c16e4d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c16e50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16e53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c16e56 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16e5a jbe 0x10c16e63 */
  if ((C.cf||C.zf)) goto L_10c16e63;
  /* 10c16e5c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10c16e63:;
  /* 10c16e63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c16e66 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16e69 je 0x10c16f6f */
  if (C.zf) goto L_10c16f6f;
  /* 10c16e6f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c16e72 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c16e75 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c16e78 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16e7b jne 0x10c16f51 */
  if (!C.zf) goto L_10c16f51;
  /* 10c16e81 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16e85 jae 0x10c16ee6 */
  if (!C.cf) goto L_10c16ee6;
  /* 10c16e87 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c16e8c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c16e8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c16e91 not edx */
  EDX = (~(EDX));
  /* 10c16e93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16e96 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16e99 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c16e9d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16e9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16ea2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16ea5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c16ea9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16eac add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16eaf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c16eb2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c16eb5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16eb8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16ebb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c16ebe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16ec1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16ec4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c16ec8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c16eca jne 0x10c16ee4 */
  if (!C.zf) goto L_10c16ee4;
  /* 10c16ecc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c16ed1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c16ed4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c16ed6 not edx */
  EDX = (~(EDX));
  /* 10c16ed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16edb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c16edd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c16edf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16ee2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c16ee4:;
  /* 10c16ee4 jmp 0x10c16f51 */
  goto L_10c16f51;
L_10c16ee6:;
  /* 10c16ee6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c16ee9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16eec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c16ef1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c16ef3 not eax */
  EAX = (~(EAX));
  /* 10c16ef5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16ef8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16efb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c16f02 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c16f04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16f07 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16f0a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c16f11 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16f14 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16f17 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c16f1a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c16f1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16f20 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16f23 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c16f26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16f29 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16f2c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c16f30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c16f32 jne 0x10c16f51 */
  if (!C.zf) goto L_10c16f51;
  /* 10c16f34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c16f37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16f3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c16f3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c16f41 not eax */
  EAX = (~(EAX));
  /* 10c16f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16f46 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c16f49 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c16f4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16f4e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c16f51:;
  /* 10c16f51 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c16f54 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c16f57 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c16f5a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c16f5d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c16f60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c16f63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c16f66 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c16f69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c16f6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10c16f6f:;
  /* 10c16f6f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c16f72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10c16f75:;
  /* 10c16f75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c16f78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c16f7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c16f7d jne 0x10c16f8b */
  if (!C.zf) goto L_10c16f8b;
  /* 10c16f7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c16f82 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16f85 je 0x10c1709b */
  if (C.zf) goto L_10c1709b;
L_10c16f8b:;
  /* 10c16f8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c16f8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16f91 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10c16f94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c16f97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16f9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c16f9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c16fa0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c16fa3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16fa6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c16fa9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c16fac mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c16faf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16fb2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c16fb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16fb8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c16fbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16fbe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c16fc1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16fc4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c16fc7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c16fca cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16fcd jne 0x10c1709b */
  if (!C.zf) goto L_10c1709b;
  /* 10c16fd3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16fd7 jae 0x10c17034 */
  if (!C.cf) goto L_10c17034;
  /* 10c16fd9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16fdc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16fdf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c16fe3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16fe6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16fe9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c16fec add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c16fef mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c16ff2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16ff5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c16ff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c16ffa jne 0x10c17012 */
  if (!C.zf) goto L_10c17012;
  /* 10c16ffc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17001 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17004 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17009 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1700b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1700d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17010 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c17012:;
  /* 10c17012 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17017 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1701a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c1701c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1701f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c17022 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c17026 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1702b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c1702e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c17032 jmp 0x10c1709b */
  goto L_10c1709b;
L_10c17034:;
  /* 10c17034 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c17037 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1703a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c1703e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c17041 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17044 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c17047 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c1704a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c1704d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17050 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c17053 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17055 jne 0x10c17072 */
  if (!C.zf) goto L_10c17072;
  /* 10c17057 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1705a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1705d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17062 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17067 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c1706a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1706c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1706f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c17072:;
  /* 10c17072 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17075 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17078 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c1707d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c1707f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17082 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c17085 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c1708c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1708e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17091 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10c17094 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10c1709b:;
  /* 10c1709b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1709e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c170a1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c170a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c170a6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c170a9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c170ac mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10c170af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c170b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c170b4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c170b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c170ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c170bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c170bf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c170c2 jne 0x10c17229 */
  if (!C.zf) goto L_10c17229;
  /* 10c170c8 cmp dword ptr [0x10c3fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c170cf je 0x10c17218 */
  if (C.zf) goto L_10c17218;
  /* 10c170d5 mov eax, dword ptr [0x10c3fd98] */
  EAX = (r32((uint32_t)(0x10c3fd98)));
  /* 10c170da shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10c170dd mov ecx, dword ptr [0x10c3fda0] */
  ECX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c170e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c170e6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c170e8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c170eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c170f0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c170f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c170f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c170f9 call dword ptr [0x10c402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b4))), 0x10c170ffu);
  /* 10c170ff mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17104 mov ecx, dword ptr [0x10c3fd98] */
  ECX = (r32((uint32_t)(0x10c3fd98)));
  /* 10c1710a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c1710c mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c17111 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c17114 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17116 mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1711c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c1711f mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c17124 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c17127 mov edx, dword ptr [0x10c3fd98] */
  EDX = (r32((uint32_t)(0x10c3fd98)));
  /* 10c1712d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10c17138 mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1713d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c17140 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10c17143 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c17146 mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1714b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1714e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10c17151 mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c17157 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c1715a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10c1715e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17160 jne 0x10c17176 */
  if (!C.zf) goto L_10c17176;
  /* 10c17162 mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c17168 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c1716b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10c1716d mov ecx, dword ptr [0x10c3fda0] */
  ECX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c17173 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10c17176:;
  /* 10c17176 mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1717c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17180 jne 0x10c17218 */
  if (!C.zf) goto L_10c17218;
  /* 10c17186 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c1718b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1718d mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c17192 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c17195 push ecx */
  push32((uint32_t)(ECX));
  /* 10c17196 call dword ptr [0x10c402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b4))), 0x10c1719cu);
  /* 10c1719c mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c171a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c171a5 push eax */
  push32((uint32_t)(EAX));
  /* 10c171a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c171a8 mov ecx, dword ptr [0x10c3fdac] */
  ECX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c171ae push ecx */
  push32((uint32_t)(ECX));
  /* 10c171af call dword ptr [0x10c402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b0))), 0x10c171b5u);
  /* 10c171b5 mov edx, dword ptr [0x10c3fda4] */
  EDX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c171bb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c171be mov eax, dword ptr [0x10c3fda8] */
  EAX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c171c3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c171c5 mov ecx, dword ptr [0x10c3fda0] */
  ECX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c171cb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c171ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c171d0 push eax */
  push32((uint32_t)(EAX));
  /* 10c171d1 mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c171d7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c171da push edx */
  push32((uint32_t)(EDX));
  /* 10c171db mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c171e0 push eax */
  push32((uint32_t)(EAX));
  /* 10c171e1 call 0x10c1a790 */
  push32(0x10c171e6u); f_10c1a790();
  /* 10c171e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c171e9 mov ecx, dword ptr [0x10c3fda4] */
  ECX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c171ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c171f2 mov dword ptr [0x10c3fda4], ecx */
  w32((uint32_t)(0x10c3fda4), (ECX));
  /* 10c171f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c171fb cmp edx, dword ptr [0x10c3fda0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17201 jbe 0x10c1720c */
  if ((C.cf||C.zf)) goto L_10c1720c;
  /* 10c17203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17206 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17209 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c1720c:;
  /* 10c1720c mov ecx, dword ptr [0x10c3fda8] */
  ECX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c17212 mov dword ptr [0x10c3fd9c], ecx */
  w32((uint32_t)(0x10c3fd9c), (ECX));
L_10c17218:;
  /* 10c17218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1721b mov dword ptr [0x10c3fda0], edx */
  w32((uint32_t)(0x10c3fda0), (EDX));
  /* 10c17221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17224 mov dword ptr [0x10c3fd98], eax */
  w32((uint32_t)(0x10c3fd98), (EAX));
L_10c17229:;
  /* 10c17229 mov esp, ebp */
  ESP = (EBP);
  /* 10c1722b pop ebp */
  EBP = (pop32());
  /* 10c1722c ret  */
  ESPCHK(0x10c16c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007230 @ 0x10c17230 (1334 bytes, 427 insns) */
void f_10c17230(void) {
  FTRACE(0x10c17230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c17230 push ebp */
  push32((uint32_t)(EBP));
  /* 10c17231 mov ebp, esp */
  EBP = (ESP);
  /* 10c17233 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17236 push esi */
  push32((uint32_t)(ESI));
  /* 10c17237 mov eax, dword ptr [0x10c3fda4] */
  EAX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c1723c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1723f mov ecx, dword ptr [0x10c3fda8] */
  ECX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c17245 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17247 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c1724a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1724d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17250 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c17253 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c17256 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17259 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c1725c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1725f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c17262 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17266 jge 0x10c1727c */
  if ((C.sf==C.of)) goto L_10c1727c;
  /* 10c17268 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1726b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1726e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17270 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c17273 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10c1727a jmp 0x10c17291 */
  goto L_10c17291;
L_10c1727c:;
  /* 10c1727c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c17283 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17286 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17289 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1728c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c1728e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10c17291:;
  /* 10c17291 mov ecx, dword ptr [0x10c3fd9c] */
  ECX = (r32((uint32_t)(0x10c3fd9c)));
  /* 10c17297 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10c1729a:;
  /* 10c1729a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1729d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c172a0 jae 0x10c172c6 */
  if (!C.cf) goto L_10c172c6;
  /* 10c172a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c172a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c172a8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10c172aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c172ad mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c172b0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10c172b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c172b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c172b7 je 0x10c172bb */
  if (C.zf) goto L_10c172bb;
  /* 10c172b9 jmp 0x10c172c6 */
  goto L_10c172c6;
L_10c172bb:;
  /* 10c172bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c172be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c172c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c172c4 jmp 0x10c1729a */
  goto L_10c1729a;
L_10c172c6:;
  /* 10c172c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c172c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c172cc jne 0x10c173ad */
  if (!C.zf) goto L_10c173ad;
  /* 10c172d2 mov eax, dword ptr [0x10c3fda8] */
  EAX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c172d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c172da:;
  /* 10c172da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c172dd cmp ecx, dword ptr [0x10c3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c172e3 jae 0x10c17309 */
  if (!C.cf) goto L_10c17309;
  /* 10c172e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c172e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c172eb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10c172ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c172f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c172f3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c172f6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c172f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c172fa je 0x10c172fe */
  if (C.zf) goto L_10c172fe;
  /* 10c172fc jmp 0x10c17309 */
  goto L_10c17309;
L_10c172fe:;
  /* 10c172fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17301 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17304 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c17307 jmp 0x10c172da */
  goto L_10c172da;
L_10c17309:;
  /* 10c17309 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1730c cmp ecx, dword ptr [0x10c3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17312 jne 0x10c173ad */
  if (!C.zf) goto L_10c173ad;
L_10c17318:;
  /* 10c17318 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1731b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1731e jae 0x10c17336 */
  if (!C.cf) goto L_10c17336;
  /* 10c17320 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17323 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17327 je 0x10c1732b */
  if (C.zf) goto L_10c1732b;
  /* 10c17329 jmp 0x10c17336 */
  goto L_10c17336;
L_10c1732b:;
  /* 10c1732b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1732e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17331 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c17334 jmp 0x10c17318 */
  goto L_10c17318;
L_10c17336:;
  /* 10c17336 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17339 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1733c jne 0x10c17387 */
  if (!C.zf) goto L_10c17387;
  /* 10c1733e mov eax, dword ptr [0x10c3fda8] */
  EAX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c17343 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c17346:;
  /* 10c17346 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17349 cmp ecx, dword ptr [0x10c3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1734f jae 0x10c17367 */
  if (!C.cf) goto L_10c17367;
  /* 10c17351 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17354 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17358 je 0x10c1735c */
  if (C.zf) goto L_10c1735c;
  /* 10c1735a jmp 0x10c17367 */
  goto L_10c17367;
L_10c1735c:;
  /* 10c1735c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1735f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17362 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c17365 jmp 0x10c17346 */
  goto L_10c17346;
L_10c17367:;
  /* 10c17367 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1736a cmp ecx, dword ptr [0x10c3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17370 jne 0x10c17387 */
  if (!C.zf) goto L_10c17387;
  /* 10c17372 call 0x10c17770 */
  push32(0x10c17377u); f_10c17770();
  /* 10c17377 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c1737a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1737e jne 0x10c17387 */
  if (!C.zf) goto L_10c17387;
  /* 10c17380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c17382 jmp 0x10c17761 */
  goto L_10c17761;
L_10c17387:;
  /* 10c17387 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1738a push edx */
  push32((uint32_t)(EDX));
  /* 10c1738b call 0x10c17880 */
  push32(0x10c17390u); f_10c17880();
  /* 10c17390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17393 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17396 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c17399 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c1739b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1739e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c173a1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c173a4 jne 0x10c173ad */
  if (!C.zf) goto L_10c173ad;
  /* 10c173a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c173a8 jmp 0x10c17761 */
  goto L_10c17761;
L_10c173ad:;
  /* 10c173ad mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c173b0 mov dword ptr [0x10c3fd9c], edx */
  w32((uint32_t)(0x10c3fd9c), (EDX));
  /* 10c173b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c173b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c173bc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10c173bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c173c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c173c4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c173c7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c173cb je 0x10c173f0 */
  if (C.zf) goto L_10c173f0;
  /* 10c173cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c173d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c173d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c173d6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10c173da mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c173dd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c173e0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10c173e3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10c173ea or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10c173ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c173ee jne 0x10c17425 */
  if (!C.zf) goto L_10c17425;
L_10c173f0:;
  /* 10c173f0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10c173f7:;
  /* 10c173f7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c173fa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c173fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c17400 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10c17404 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17407 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c1740a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10c1740d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10c17414 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10c17416 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17418 jne 0x10c17425 */
  if (!C.zf) goto L_10c17425;
  /* 10c1741a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1741d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17420 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c17423 jmp 0x10c173f7 */
  goto L_10c173f7;
L_10c17425:;
  /* 10c17425 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17428 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1742e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17431 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c17438 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1743b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c17442 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17445 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17448 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1744b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10c1744f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c17452 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17456 jne 0x10c17472 */
  if (!C.zf) goto L_10c17472;
  /* 10c17458 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10c1745f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17462 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17465 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c17468 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c1746f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10c17472:;
  /* 10c17472 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17476 jl 0x10c1748b */
  if ((C.sf!=C.of)) goto L_10c1748b;
  /* 10c17478 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1747b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c1747d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c17480 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17483 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17486 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c17489 jmp 0x10c17472 */
  goto L_10c17472;
L_10c1748b:;
  /* 10c1748b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1748e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17491 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10c17495 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c17498 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1749b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c1749d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c174a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c174a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c174a6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c174a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c174ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c174af cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c174b3 jle 0x10c174bc */
  if ((C.zf||C.sf!=C.of)) goto L_10c174bc;
  /* 10c174b5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10c174bc:;
  /* 10c174bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c174bf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c174c2 je 0x10c176e0 */
  if (C.zf) goto L_10c176e0;
  /* 10c174c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c174cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c174ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c174d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c174d4 jne 0x10c175aa */
  if (!C.zf) goto L_10c175aa;
  /* 10c174da cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c174de jge 0x10c1753f */
  if ((C.sf==C.of)) goto L_10c1753f;
  /* 10c174e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c174e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c174e8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c174ea not eax */
  EAX = (~(EAX));
  /* 10c174ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c174ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c174f2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c174f6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c174f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c174fb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c174fe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c17502 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17505 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17508 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c1750b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c1750e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17511 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17514 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c17517 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c1751a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1751d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c17521 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17523 jne 0x10c1753d */
  if (!C.zf) goto L_10c1753d;
  /* 10c17525 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c1752a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1752d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c1752f not eax */
  EAX = (~(EAX));
  /* 10c17531 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17534 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c17536 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c17538 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1753b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c1753d:;
  /* 10c1753d jmp 0x10c175aa */
  goto L_10c175aa;
L_10c1753f:;
  /* 10c1753f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17542 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17545 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c1754a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c1754c not edx */
  EDX = (~(EDX));
  /* 10c1754e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17551 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17554 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c1755b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1755d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17560 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17563 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10c1756a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c1756d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17570 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c17573 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c17576 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17579 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1757c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c1757f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17582 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17585 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c17589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1758b jne 0x10c175aa */
  if (!C.zf) goto L_10c175aa;
  /* 10c1758d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17590 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17593 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17598 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c1759a not edx */
  EDX = (~(EDX));
  /* 10c1759c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1759f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c175a2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c175a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c175a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c175aa:;
  /* 10c175aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c175b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c175b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c175b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c175bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175c2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c175c5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c175c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c175cc je 0x10c176e0 */
  if (C.zf) goto L_10c176e0;
  /* 10c175d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c175d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c175d8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10c175db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c175de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c175e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c175e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c175ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c175f0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c175f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c175f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175f9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c175fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c175ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17602 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17605 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c17608 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1760b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1760e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17611 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17614 jne 0x10c176e0 */
  if (!C.zf) goto L_10c176e0;
  /* 10c1761a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1761e jge 0x10c1767a */
  if ((C.sf==C.of)) goto L_10c1767a;
  /* 10c17620 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17623 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17626 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c1762a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c1762d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17630 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c17633 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c17635 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17638 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1763b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c1763e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17640 jne 0x10c17658 */
  if (!C.zf) goto L_10c17658;
  /* 10c17642 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17647 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1764a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c1764c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1764f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c17651 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c17653 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17656 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c17658:;
  /* 10c17658 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c1765d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17660 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17662 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17665 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17668 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c1766c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1766e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17671 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17674 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c17678 jmp 0x10c176e0 */
  goto L_10c176e0;
L_10c1767a:;
  /* 10c1767a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c1767d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17680 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c17684 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17687 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1768a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c1768d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c1768f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17692 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17695 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c17698 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1769a jne 0x10c176b7 */
  if (!C.zf) goto L_10c176b7;
  /* 10c1769c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1769f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c176a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c176a7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c176a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c176ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c176af or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c176b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c176b4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c176b7:;
  /* 10c176b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c176ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c176bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c176c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c176c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c176c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c176ca mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c176d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c176d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c176d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c176d9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10c176e0:;
  /* 10c176e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c176e4 je 0x10c176fa */
  if (C.zf) goto L_10c176fa;
  /* 10c176e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c176e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c176ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c176ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c176f1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c176f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c176f7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10c176fa:;
  /* 10c176fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c176fd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17700 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c17703 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17706 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17709 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1770c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1770e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17711 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17714 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17717 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1771a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10c1771d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17720 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c17722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17725 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c17727 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1772a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1772d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c1772f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17731 jne 0x10c17753 */
  if (!C.zf) goto L_10c17753;
  /* 10c17733 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17736 cmp eax, dword ptr [0x10c3fda0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1773c jne 0x10c17753 */
  if (!C.zf) goto L_10c17753;
  /* 10c1773e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17741 cmp ecx, dword ptr [0x10c3fd98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17747 jne 0x10c17753 */
  if (!C.zf) goto L_10c17753;
  /* 10c17749 mov dword ptr [0x10c3fda0], 0 */
  w32((uint32_t)(0x10c3fda0), (0x0u));
L_10c17753:;
  /* 10c17753 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10c17756 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17759 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c1775b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1775e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c17761:;
  /* 10c17761 pop esi */
  ESI = (pop32());
  /* 10c17762 mov esp, ebp */
  ESP = (EBP);
  /* 10c17764 pop ebp */
  EBP = (pop32());
  /* 10c17765 ret  */
  ESPCHK(0x10c17230u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x10c17770 (271 bytes, 78 insns) */
void f_10c17770(void) {
  FTRACE(0x10c17770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c17770 push ebp */
  push32((uint32_t)(EBP));
  /* 10c17771 mov ebp, esp */
  EBP = (ESP);
  /* 10c17773 push ecx */
  push32((uint32_t)(ECX));
  /* 10c17774 mov eax, dword ptr [0x10c3fda4] */
  EAX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c17779 cmp eax, dword ptr [0x10c3fd88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3fd88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1777f jne 0x10c177cb */
  if (!C.zf) goto L_10c177cb;
  /* 10c17781 mov ecx, dword ptr [0x10c3fd88] */
  ECX = (r32((uint32_t)(0x10c3fd88)));
  /* 10c17787 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1778a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1778d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1778e mov edx, dword ptr [0x10c3fda8] */
  EDX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c17794 push edx */
  push32((uint32_t)(EDX));
  /* 10c17795 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c17797 mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c1779c push eax */
  push32((uint32_t)(EAX));
  /* 10c1779d call dword ptr [0x10c402d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d4))), 0x10c177a3u);
  /* 10c177a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c177a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c177aa jne 0x10c177b3 */
  if (!C.zf) goto L_10c177b3;
  /* 10c177ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c177ae jmp 0x10c1787b */
  goto L_10c1787b;
L_10c177b3:;
  /* 10c177b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c177b6 mov dword ptr [0x10c3fda8], ecx */
  w32((uint32_t)(0x10c3fda8), (ECX));
  /* 10c177bc mov edx, dword ptr [0x10c3fd88] */
  EDX = (r32((uint32_t)(0x10c3fd88)));
  /* 10c177c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c177c5 mov dword ptr [0x10c3fd88], edx */
  w32((uint32_t)(0x10c3fd88), (EDX));
L_10c177cb:;
  /* 10c177cb mov eax, dword ptr [0x10c3fda4] */
  EAX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c177d0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c177d3 mov ecx, dword ptr [0x10c3fda8] */
  ECX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c177d9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c177db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c177de push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10c177e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c177e5 mov edx, dword ptr [0x10c3fdac] */
  EDX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c177eb push edx */
  push32((uint32_t)(EDX));
  /* 10c177ec call dword ptr [0x10c402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d0))), 0x10c177f2u);
  /* 10c177f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c177f5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10c177f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c177fb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c177ff jne 0x10c17805 */
  if (!C.zf) goto L_10c17805;
  /* 10c17801 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c17803 jmp 0x10c1787b */
  goto L_10c1787b;
L_10c17805:;
  /* 10c17805 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c17807 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10c1780c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10c17811 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c17813 call dword ptr [0x10c402d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d8))), 0x10c17819u);
  /* 10c17819 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1781c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10c1781f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17822 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17826 jne 0x10c17842 */
  if (!C.zf) goto L_10c17842;
  /* 10c17828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1782b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1782e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1782f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c17831 mov edx, dword ptr [0x10c3fdac] */
  EDX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c17837 push edx */
  push32((uint32_t)(EDX));
  /* 10c17838 call dword ptr [0x10c402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b0))), 0x10c1783eu);
  /* 10c1783e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c17840 jmp 0x10c1787b */
  goto L_10c1787b;
L_10c17842:;
  /* 10c17842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17845 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1784b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1784e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c17855 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17858 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10c1785f mov eax, dword ptr [0x10c3fda4] */
  EAX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c17864 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17867 mov dword ptr [0x10c3fda4], eax */
  w32((uint32_t)(0x10c3fda4), (EAX));
  /* 10c1786c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1786f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c17872 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10c17878 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1787b:;
  /* 10c1787b mov esp, ebp */
  ESP = (EBP);
  /* 10c1787d pop ebp */
  EBP = (pop32());
  /* 10c1787e ret  */
  ESPCHK(0x10c17770u, _esp0);
  ESP += 4; return;
}

/* FUN_10007880 @ 0x10c17880 (494 bytes, 149 insns) */
void f_10c17880(void) {
  FTRACE(0x10c17880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c17880 push ebp */
  push32((uint32_t)(EBP));
  /* 10c17881 mov ebp, esp */
  EBP = (ESP);
  /* 10c17883 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17889 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1788c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c1788f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17892 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c17895 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c17898 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10c1789f:;
  /* 10c1789f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c178a3 jl 0x10c178b8 */
  if ((C.sf!=C.of)) goto L_10c178b8;
  /* 10c178a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c178a8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c178aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c178ad mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c178b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c178b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c178b6 jmp 0x10c1789f */
  goto L_10c1789f;
L_10c178b8:;
  /* 10c178b8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c178bb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c178c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c178c4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c178cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c178ce mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c178d5 jmp 0x10c178e0 */
  goto L_10c178e0;
L_10c178d7:;
  /* 10c178d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c178da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c178dd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10c178e0:;
  /* 10c178e0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c178e4 jge 0x10c17906 */
  if ((C.sf==C.of)) goto L_10c17906;
  /* 10c178e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c178e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c178ec lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10c178ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c178f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c178f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c178f8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c178fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c178fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17901 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c17904 jmp 0x10c178d7 */
  goto L_10c178d7;
L_10c17906:;
  /* 10c17906 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17909 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c1790c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1790f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c17912 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17914 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c17917 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c17919 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c1791e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c17923 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17926 push edx */
  push32((uint32_t)(EDX));
  /* 10c17927 call dword ptr [0x10c402d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d8))), 0x10c1792du);
  /* 10c1792d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1792f jne 0x10c17939 */
  if (!C.zf) goto L_10c17939;
  /* 10c17931 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c17934 jmp 0x10c17a6a */
  goto L_10c17a6a;
L_10c17939:;
  /* 10c17939 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1793c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17941 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c17944 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17947 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1794a jmp 0x10c17958 */
  goto L_10c17958;
L_10c1794c:;
  /* 10c1794c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1794f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17955 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c17958:;
  /* 10c17958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1795b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1795e ja 0x10c179bd */
  if ((!C.cf&&!C.zf)) goto L_10c179bd;
  /* 10c17960 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17963 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10c1796a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1796d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10c17977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1797a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1797d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c17980 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17983 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10c17989 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1798c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17992 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17995 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c17998 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1799b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c179a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c179a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c179a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c179aa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c179af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c179b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c179b5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10c179bb jmp 0x10c1794c */
  goto L_10c1794c;
L_10c179bd:;
  /* 10c179bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c179c0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c179c6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c179c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c179cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c179cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c179d2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c179d5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c179d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c179db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c179de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c179e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c179e4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c179e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c179ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c179ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c179f0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c179f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c179f6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c179f9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c179fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c179ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17a02 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c17a05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17a08 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17a0b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10c17a13 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17a16 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17a19 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10c17a24 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17a27 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10c17a2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17a2e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10c17a31 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c17a34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17a37 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10c17a3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17a3c jne 0x10c17a4d */
  if (!C.zf) goto L_10c17a4d;
  /* 10c17a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17a41 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17a44 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c17a47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17a4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c17a4d:;
  /* 10c17a4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17a52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17a55 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17a57 not edx */
  EDX = (~(EDX));
  /* 10c17a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17a5c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c17a5f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17a64 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c17a67 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10c17a6a:;
  /* 10c17a6a mov esp, ebp */
  ESP = (EBP);
  /* 10c17a6c pop ebp */
  EBP = (pop32());
  /* 10c17a6d ret  */
  ESPCHK(0x10c17880u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a70 @ 0x10c17a70 (1515 bytes, 489 insns) */
void f_10c17a70(void) {
  FTRACE(0x10c17a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c17a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c17a71 mov ebp, esp */
  EBP = (ESP);
  /* 10c17a73 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17a76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c17a79 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17a7c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10c17a7e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c17a81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17a84 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c17a87 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c17a8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17a8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c17a90 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17a93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c17a96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c17a99 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10c17a9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c17a9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17aa2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c17aa8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17aab lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10c17ab2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c17ab5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c17ab8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17abb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c17abe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17ac1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c17ac3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17ac6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10c17ac9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17acc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17acf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c17ad2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17ad5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c17ad7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c17ada mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c17add cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17ae0 jle 0x10c17d96 */
  if ((C.zf||C.sf!=C.of)) goto L_10c17d96;
  /* 10c17ae6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17ae9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c17aec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17aee jne 0x10c17afb */
  if (!C.zf) goto L_10c17afb;
  /* 10c17af0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17af3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17af6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17af9 jle 0x10c17b02 */
  if ((C.zf||C.sf!=C.of)) goto L_10c17b02;
L_10c17afb:;
  /* 10c17afb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c17afd jmp 0x10c18057 */
  goto L_10c18057;
L_10c17b02:;
  /* 10c17b02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17b05 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c17b08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17b0b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c17b0e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17b12 jbe 0x10c17b1b */
  if ((C.cf||C.zf)) goto L_10c17b1b;
  /* 10c17b14 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c17b1b:;
  /* 10c17b1b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17b1e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17b21 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17b24 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17b27 jne 0x10c17bfd */
  if (!C.zf) goto L_10c17bfd;
  /* 10c17b2d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17b31 jae 0x10c17b92 */
  if (!C.cf) goto L_10c17b92;
  /* 10c17b33 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17b38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17b3b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17b3d not edx */
  EDX = (~(EDX));
  /* 10c17b3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17b42 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17b45 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c17b49 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c17b4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17b4e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17b51 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c17b55 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17b58 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17b5b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c17b5e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c17b61 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17b64 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17b67 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c17b6a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17b6d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17b70 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c17b74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17b76 jne 0x10c17b90 */
  if (!C.zf) goto L_10c17b90;
  /* 10c17b78 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17b7d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17b80 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17b82 not edx */
  EDX = (~(EDX));
  /* 10c17b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17b87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c17b89 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17b8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17b8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c17b90:;
  /* 10c17b90 jmp 0x10c17bfd */
  goto L_10c17bfd;
L_10c17b92:;
  /* 10c17b92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17b95 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17b98 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17b9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c17b9f not eax */
  EAX = (~(EAX));
  /* 10c17ba1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17ba4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17ba7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c17bae and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17bb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17bb3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17bb6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c17bbd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17bc0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17bc3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c17bc6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c17bc9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17bcc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17bcf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c17bd2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17bd5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17bd8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c17bdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17bde jne 0x10c17bfd */
  if (!C.zf) goto L_10c17bfd;
  /* 10c17be0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17be3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17be6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17beb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c17bed not eax */
  EAX = (~(EAX));
  /* 10c17bef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17bf2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17bf5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c17bf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17bfa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c17bfd:;
  /* 10c17bfd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c00 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c17c03 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17c09 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c17c0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c17c12 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c15 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c17c18 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c17c1b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17c1e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17c21 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17c24 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c17c27 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17c2b jle 0x10c17d77 */
  if ((C.zf||C.sf!=C.of)) goto L_10c17d77;
  /* 10c17c31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17c34 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17c37 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c17c3a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17c3d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c17c40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17c43 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c17c46 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17c4a jbe 0x10c17c53 */
  if ((C.cf||C.zf)) goto L_10c17c53;
  /* 10c17c4c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c17c53:;
  /* 10c17c53 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17c56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c17c59 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10c17c5c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c17c5f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c62 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17c65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17c68 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c17c6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17c71 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c17c74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17c77 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c7a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c17c7d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c80 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17c83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c86 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c17c89 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17c8f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17c92 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17c95 jne 0x10c17d63 */
  if (!C.zf) goto L_10c17d63;
  /* 10c17c9b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17c9f jae 0x10c17cfc */
  if (!C.cf) goto L_10c17cfc;
  /* 10c17ca1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17ca4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17ca7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c17cab mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17cae add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17cb1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c17cb4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c17cb7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17cba add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17cbd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c17cc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17cc2 jne 0x10c17cda */
  if (!C.zf) goto L_10c17cda;
  /* 10c17cc4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17cc9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17ccc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17cce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17cd1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c17cd3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17cd8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c17cda:;
  /* 10c17cda mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17cdf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17ce2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c17ce4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17ce7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17cea mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10c17cee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17cf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17cf3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17cf6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10c17cfa jmp 0x10c17d63 */
  goto L_10c17d63;
L_10c17cfc:;
  /* 10c17cfc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17cff add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17d02 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c17d06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17d09 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17d0c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c17d0f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c17d12 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17d15 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17d18 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10c17d1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17d1d jne 0x10c17d3a */
  if (!C.zf) goto L_10c17d3a;
  /* 10c17d1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17d22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17d25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17d2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17d2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17d32 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17d37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10c17d3a:;
  /* 10c17d3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17d3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17d40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17d45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c17d47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17d4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17d4d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c17d54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17d56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17d59 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17d5c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10c17d63:;
  /* 10c17d63 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17d66 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17d69 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c17d6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17d6e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17d71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17d74 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10c17d77:;
  /* 10c17d77 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c17d7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17d7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17d80 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c17d82 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c17d85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17d88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17d8b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17d8e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10c17d91 jmp 0x10c18052 */
  goto L_10c18052;
L_10c17d96:;
  /* 10c17d96 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c17d99 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17d9c jge 0x10c18052 */
  if ((C.sf==C.of)) goto L_10c18052;
  /* 10c17da2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c17da5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17da8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17dab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c17dad mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c17db0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17db3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17db6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17db9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10c17dbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17dbf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17dc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c17dc5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17dc8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17dcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c17dce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17dd1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c17dd4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17dd7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c17dda cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17dde jbe 0x10c17de7 */
  if ((C.cf||C.zf)) goto L_10c17de7;
  /* 10c17de0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c17de7:;
  /* 10c17de7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17dea and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c17ded test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17def jne 0x10c17f30 */
  if (!C.zf) goto L_10c17f30;
  /* 10c17df5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c17df8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10c17dfb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17dfe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c17e01 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17e05 jbe 0x10c17e0e */
  if ((C.cf||C.zf)) goto L_10c17e0e;
  /* 10c17e07 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10c17e0e:;
  /* 10c17e0e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17e11 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17e14 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17e17 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17e1a jne 0x10c17ef0 */
  if (!C.zf) goto L_10c17ef0;
  /* 10c17e20 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17e24 jae 0x10c17e85 */
  if (!C.cf) goto L_10c17e85;
  /* 10c17e26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17e2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17e2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17e30 not edx */
  EDX = (~(EDX));
  /* 10c17e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17e35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17e38 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c17e3c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c17e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17e41 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17e44 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c17e48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17e4b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17e4e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c17e51 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c17e54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17e57 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17e5a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10c17e5d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17e60 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17e63 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c17e67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17e69 jne 0x10c17e83 */
  if (!C.zf) goto L_10c17e83;
  /* 10c17e6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17e70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17e73 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17e75 not edx */
  EDX = (~(EDX));
  /* 10c17e77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17e7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c17e7c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17e7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17e81 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c17e83:;
  /* 10c17e83 jmp 0x10c17ef0 */
  goto L_10c17ef0;
L_10c17e85:;
  /* 10c17e85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17e88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17e8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17e90 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c17e92 not eax */
  EAX = (~(EAX));
  /* 10c17e94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17e97 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17e9a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10c17ea1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c17ea3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17ea6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17ea9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10c17eb0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17eb3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17eb6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10c17eb9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c17ebc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17ebf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17ec2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10c17ec5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17ec8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17ecb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c17ecf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c17ed1 jne 0x10c17ef0 */
  if (!C.zf) goto L_10c17ef0;
  /* 10c17ed3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c17ed6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17ed9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17ede shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c17ee0 not eax */
  EAX = (~(EAX));
  /* 10c17ee2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17ee5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c17ee8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c17eea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17eed mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c17ef0:;
  /* 10c17ef0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17ef3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c17ef6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17ef9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17efc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c17eff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17f02 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c17f05 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c17f08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c17f0b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c17f0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17f11 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17f14 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c17f17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c17f1a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c17f1d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c17f20 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c17f23 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17f27 jbe 0x10c17f30 */
  if ((C.cf||C.zf)) goto L_10c17f30;
  /* 10c17f29 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10c17f30:;
  /* 10c17f30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c17f33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c17f36 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10c17f39 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c17f3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17f3f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17f42 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17f45 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c17f48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17f4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17f4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c17f51 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c17f54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17f57 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c17f5a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17f5d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17f60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17f63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c17f66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17f69 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c17f6c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c17f6f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17f72 jne 0x10c1803e */
  if (!C.zf) goto L_10c1803e;
  /* 10c17f78 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c17f7c jae 0x10c17fd8 */
  if (!C.cf) goto L_10c17fd8;
  /* 10c17f7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17f81 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17f84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c17f88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17f8b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17f8e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c17f91 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c17f93 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17f96 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17f99 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c17f9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17f9e jne 0x10c17fb6 */
  if (!C.zf) goto L_10c17fb6;
  /* 10c17fa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c17fa5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c17fa8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c17faa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17fad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c17faf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c17fb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c17fb4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c17fb6:;
  /* 10c17fb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c17fbb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c17fbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c17fc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17fc3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17fc6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10c17fca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c17fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c17fcf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17fd2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10c17fd6 jmp 0x10c1803e */
  goto L_10c1803e;
L_10c17fd8:;
  /* 10c17fd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17fdb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17fde movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10c17fe2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17fe5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17fe8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c17feb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c17fed mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c17ff0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c17ff3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10c17ff6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c17ff8 jne 0x10c18015 */
  if (!C.zf) goto L_10c18015;
  /* 10c17ffa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c17ffd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c18000 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10c18005 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10c18007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1800a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c1800d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1800f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18012 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10c18015:;
  /* 10c18015 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18018 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1801b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c18020 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c18022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18025 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c18028 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10c1802f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18031 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18034 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c18037 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10c1803e:;
  /* 10c1803e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c18041 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c18044 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c18046 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c18049 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1804c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1804f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10c18052:;
  /* 10c18052 mov eax, 1 */
  EAX = (0x1u);
L_10c18057:;
  /* 10c18057 mov esp, ebp */
  ESP = (EBP);
  /* 10c18059 pop ebp */
  EBP = (pop32());
  /* 10c1805a ret  */
  ESPCHK(0x10c17a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008060 @ 0x10c18060 (304 bytes, 79 insns) */
void f_10c18060(void) {
  FTRACE(0x10c18060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c18060 push ebp */
  push32((uint32_t)(EBP));
  /* 10c18061 mov ebp, esp */
  EBP = (ESP);
  /* 10c18063 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18064 cmp dword ptr [0x10c3fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1806b je 0x10c1818c */
  if (C.zf) goto L_10c1818c;
  /* 10c18071 mov eax, dword ptr [0x10c3fd98] */
  EAX = (r32((uint32_t)(0x10c3fd98)));
  /* 10c18076 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10c18079 mov ecx, dword ptr [0x10c3fda0] */
  ECX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1807f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c18082 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18084 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c18087 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c1808c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c18091 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18094 push eax */
  push32((uint32_t)(EAX));
  /* 10c18095 call dword ptr [0x10c402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b4))), 0x10c1809bu);
  /* 10c1809b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c180a0 mov ecx, dword ptr [0x10c3fd98] */
  ECX = (r32((uint32_t)(0x10c3fd98)));
  /* 10c180a6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c180a8 mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c180ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c180b0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10c180b2 mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c180b8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c180bb mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c180c0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c180c3 mov edx, dword ptr [0x10c3fd98] */
  EDX = (r32((uint32_t)(0x10c3fd98)));
  /* 10c180c9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10c180d4 mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c180d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c180dc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10c180df sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c180e2 mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c180e7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c180ea mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10c180ed mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c180f3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c180f6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10c180fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c180fc jne 0x10c18112 */
  if (!C.zf) goto L_10c18112;
  /* 10c180fe mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c18104 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c18107 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10c18109 mov ecx, dword ptr [0x10c3fda0] */
  ECX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1810f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10c18112:;
  /* 10c18112 mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c18118 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1811c jne 0x10c18182 */
  if (!C.zf) goto L_10c18182;
  /* 10c1811e cmp dword ptr [0x10c3fda4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fda4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18125 jle 0x10c18182 */
  if ((C.zf||C.sf!=C.of)) goto L_10c18182;
  /* 10c18127 mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1812c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1812f push ecx */
  push32((uint32_t)(ECX));
  /* 10c18130 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c18132 mov edx, dword ptr [0x10c3fdac] */
  EDX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c18138 push edx */
  push32((uint32_t)(EDX));
  /* 10c18139 call dword ptr [0x10c402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b0))), 0x10c1813fu);
  /* 10c1813f mov eax, dword ptr [0x10c3fda4] */
  EAX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c18144 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c18147 mov ecx, dword ptr [0x10c3fda8] */
  ECX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c1814d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1814f mov edx, dword ptr [0x10c3fda0] */
  EDX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c18155 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18158 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1815a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1815b mov eax, dword ptr [0x10c3fda0] */
  EAX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c18160 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18163 push eax */
  push32((uint32_t)(EAX));
  /* 10c18164 mov ecx, dword ptr [0x10c3fda0] */
  ECX = (r32((uint32_t)(0x10c3fda0)));
  /* 10c1816a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1816b call 0x10c1a790 */
  push32(0x10c18170u); f_10c1a790();
  /* 10c18170 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18173 mov edx, dword ptr [0x10c3fda4] */
  EDX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c18179 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1817c mov dword ptr [0x10c3fda4], edx */
  w32((uint32_t)(0x10c3fda4), (EDX));
L_10c18182:;
  /* 10c18182 mov dword ptr [0x10c3fda0], 0 */
  w32((uint32_t)(0x10c3fda0), (0x0u));
L_10c1818c:;
  /* 10c1818c mov esp, ebp */
  ESP = (EBP);
  /* 10c1818e pop ebp */
  EBP = (pop32());
  /* 10c1818f ret  */
  ESPCHK(0x10c18060u, _esp0);
  ESP += 4; return;
}

/* FUN_10008190 @ 0x10c18190 (1565 bytes, 343 insns) */
void f_10c18190(void) {
  FTRACE(0x10c18190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c18190 push ebp */
  push32((uint32_t)(EBP));
  /* 10c18191 mov ebp, esp */
  EBP = (ESP);
  /* 10c18193 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c18199 mov eax, dword ptr [0x10c3fda4] */
  EAX = (r32((uint32_t)(0x10c3fda4)));
  /* 10c1819e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c181a1 push eax */
  push32((uint32_t)(EAX));
  /* 10c181a2 mov ecx, dword ptr [0x10c3fda8] */
  ECX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c181a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c181a9 call dword ptr [0x10c40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40288))), 0x10c181afu);
  /* 10c181af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c181b1 je 0x10c181bb */
  if (C.zf) goto L_10c181bb;
  /* 10c181b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c181b6 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c181bb:;
  /* 10c181bb mov edx, dword ptr [0x10c3fda8] */
  EDX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c181c1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10c181c7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10c181d1 jmp 0x10c181e2 */
  goto L_10c181e2;
L_10c181d3:;
  /* 10c181d3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10c181d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c181dc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10c181e2:;
  /* 10c181e2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10c181e8 cmp ecx, dword ptr [0x10c3fda4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c181ee jge 0x10c187a7 */
  if ((C.sf==C.of)) goto L_10c187a7;
  /* 10c181f4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c181fa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c181fd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10c18203 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10c18208 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c1820e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1820f call dword ptr [0x10c40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40288))), 0x10c18215u);
  /* 10c18215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c18217 je 0x10c18223 */
  if (C.zf) goto L_10c18223;
  /* 10c18219 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10c1821e jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c18223:;
  /* 10c18223 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c18229 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c1822c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10c18232 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c18238 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1823e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c18241 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c18247 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c1824a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1824d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10c18257 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10c18261 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c18268 jmp 0x10c18273 */
  goto L_10c18273;
L_10c1826a:;
  /* 10c1826a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1826d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18270 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c18273:;
  /* 10c18273 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18277 jge 0x10c1876b */
  if ((C.sf==C.of)) goto L_10c1876b;
  /* 10c1827d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10c18287 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10c18291 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10c1829b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10c182a5 jmp 0x10c182b6 */
  goto L_10c182b6;
L_10c182a7:;
  /* 10c182a7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c182ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c182b0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10c182b6:;
  /* 10c182b6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c182bd jge 0x10c182d2 */
  if ((C.sf==C.of)) goto L_10c182d2;
  /* 10c182bf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c182c5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10c182d0 jmp 0x10c182a7 */
  goto L_10c182a7;
L_10c182d2:;
  /* 10c182d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c182d6 jl 0x10c1870d */
  if ((C.sf!=C.of)) goto L_10c1870d;
  /* 10c182dc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c182e1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c182e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c182e8 call dword ptr [0x10c40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40288))), 0x10c182eeu);
  /* 10c182ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c182f0 je 0x10c182fc */
  if (C.zf) goto L_10c182fc;
  /* 10c182f2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10c182f7 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c182fc:;
  /* 10c182fc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c18302 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c18305 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10c1830f jmp 0x10c18320 */
  goto L_10c18320;
L_10c18311:;
  /* 10c18311 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10c18317 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1831a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10c18320:;
  /* 10c18320 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18327 jge 0x10c184a4 */
  if ((C.sf==C.of)) goto L_10c184a4;
  /* 10c1832d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18330 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18333 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10c18339 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c1833f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18345 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10c1834b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c18351 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18355 jne 0x10c18362 */
  if (!C.zf) goto L_10c18362;
  /* 10c18357 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10c1835d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18360 je 0x10c1836c */
  if (C.zf) goto L_10c1836c;
L_10c18362:;
  /* 10c18362 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10c18367 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c1836c:;
  /* 10c1836c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c18372 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c18374 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10c1837a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c18380 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10c18386 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10c1838c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1838f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c18391 je 0x10c183c9 */
  if (C.zf) goto L_10c183c9;
  /* 10c18393 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c18399 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1839c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10c183a2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c183ac jle 0x10c183b8 */
  if ((C.zf||C.sf!=C.of)) goto L_10c183b8;
  /* 10c183ae mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10c183b3 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c183b8:;
  /* 10c183b8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10c183be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c183c1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10c183c7 jmp 0x10c1840b */
  goto L_10c1840b;
L_10c183c9:;
  /* 10c183c9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c183cf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c183d2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c183d5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10c183db cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c183e2 jle 0x10c183ee */
  if ((C.zf||C.sf!=C.of)) goto L_10c183ee;
  /* 10c183e4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10c183ee:;
  /* 10c183ee mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c183f4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10c183fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c183fe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c18404 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10c1840b:;
  /* 10c1840b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18412 jl 0x10c1842d */
  if ((C.sf!=C.of)) goto L_10c1842d;
  /* 10c18414 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10c1841a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1841d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1841f jne 0x10c1842d */
  if (!C.zf) goto L_10c1842d;
  /* 10c18421 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1842b jle 0x10c18437 */
  if ((C.zf||C.sf!=C.of)) goto L_10c18437;
L_10c1842d:;
  /* 10c1842d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10c18432 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c18437:;
  /* 10c18437 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c1843d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18443 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c18446 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1844c je 0x10c18458 */
  if (C.zf) goto L_10c18458;
  /* 10c1844e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10c18453 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c18458:;
  /* 10c18458 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c1845e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18464 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10c1846a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c18470 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18476 jb 0x10c1836c */
  if (C.cf) goto L_10c1836c;
  /* 10c1847c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c18482 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18488 je 0x10c18494 */
  if (C.zf) goto L_10c18494;
  /* 10c1848a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10c1848f jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c18494:;
  /* 10c18494 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18497 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1849c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1849f jmp 0x10c18311 */
  goto L_10c18311;
L_10c184a4:;
  /* 10c184a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c184a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c184a9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c184af je 0x10c184bb */
  if (C.zf) goto L_10c184bb;
  /* 10c184b1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10c184b6 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c184bb:;
  /* 10c184bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c184be mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10c184c4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c184cb jmp 0x10c184d6 */
  goto L_10c184d6;
L_10c184cd:;
  /* 10c184cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c184d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c184d3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c184d6:;
  /* 10c184d6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c184da jge 0x10c1870d */
  if ((C.sf==C.of)) goto L_10c1870d;
  /* 10c184e0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10c184ea mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c184f0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10c184f6:;
  /* 10c184f6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c184fc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c184ff mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10c18505 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c1850b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18511 je 0x10c1863a */
  if (C.zf) goto L_10c1863a;
  /* 10c18517 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1851a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c18520 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18527 je 0x10c1863a */
  if (C.zf) goto L_10c1863a;
  /* 10c1852d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c18533 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18539 jb 0x10c1854e */
  if (C.cf) goto L_10c1854e;
  /* 10c1853b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c18541 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18546 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1854c jb 0x10c18558 */
  if (C.cf) goto L_10c18558;
L_10c1854e:;
  /* 10c1854e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10c18553 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c18558:;
  /* 10c18558 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c1855e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c18564 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10c1856a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10c18570 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18573 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c18576 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c18579 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1857e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10c18584:;
  /* 10c18584 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c18587 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1858d je 0x10c185ae */
  if (C.zf) goto L_10c185ae;
  /* 10c1858f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c18592 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18598 jne 0x10c1859c */
  if (!C.zf) goto L_10c1859c;
  /* 10c1859a jmp 0x10c185ae */
  goto L_10c185ae;
L_10c1859c:;
  /* 10c1859c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1859f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c185a1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10c185a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c185a7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c185a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c185ac jmp 0x10c18584 */
  goto L_10c18584;
L_10c185ae:;
  /* 10c185ae mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c185b1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c185b7 jne 0x10c185c3 */
  if (!C.zf) goto L_10c185c3;
  /* 10c185b9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10c185be jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c185c3:;
  /* 10c185c3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c185c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c185cb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c185ce sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c185d1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10c185d7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c185de jle 0x10c185ea */
  if ((C.zf||C.sf!=C.of)) goto L_10c185ea;
  /* 10c185e0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10c185ea:;
  /* 10c185ea mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10c185f0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c185f3 je 0x10c185ff */
  if (C.zf) goto L_10c185ff;
  /* 10c185f5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10c185fa jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c185ff:;
  /* 10c185ff mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c18605 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c18608 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1860e je 0x10c1861a */
  if (C.zf) goto L_10c1861a;
  /* 10c18610 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10c18615 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c1861a:;
  /* 10c1861a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10c18620 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10c18626 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c1862c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1862f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10c18635 jmp 0x10c184f6 */
  goto L_10c184f6;
L_10c1863a:;
  /* 10c1863a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18641 je 0x10c186b1 */
  if (C.zf) goto L_10c186b1;
  /* 10c18643 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18647 jge 0x10c1867b */
  if ((C.sf==C.of)) goto L_10c1867b;
  /* 10c18649 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c1864e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c18651 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c18653 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10c18659 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1865b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10c18661 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c18666 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c18669 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c1866b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10c18671 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18673 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10c18679 jmp 0x10c186b1 */
  goto L_10c186b1;
L_10c1867b:;
  /* 10c1867b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1867e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c18681 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c18686 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c18688 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10c1868e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18690 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10c18696 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c18699 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1869c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10c186a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10c186a3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10c186a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c186ab mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10c186b1:;
  /* 10c186b1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10c186b7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c186ba cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c186c0 jne 0x10c186d4 */
  if (!C.zf) goto L_10c186d4;
  /* 10c186c2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c186c5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10c186cb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c186d2 je 0x10c186de */
  if (C.zf) goto L_10c186de;
L_10c186d4:;
  /* 10c186d4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10c186d9 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c186de:;
  /* 10c186de mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c186e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c186e7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c186ed je 0x10c186f9 */
  if (C.zf) goto L_10c186f9;
  /* 10c186ef mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10c186f4 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c186f9:;
  /* 10c186f9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10c186ff add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18702 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10c18708 jmp 0x10c184cd */
  goto L_10c184cd;
L_10c1870d:;
  /* 10c1870d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18710 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c18716 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10c1871c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18720 jne 0x10c1873a */
  if (!C.zf) goto L_10c1873a;
  /* 10c18722 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18725 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10c1872b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10c18731 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18738 je 0x10c18741 */
  if (C.zf) goto L_10c18741;
L_10c1873a:;
  /* 10c1873a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10c1873f jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c18741:;
  /* 10c18741 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10c18747 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1874d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10c18753 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c18756 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1875b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c1875e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18761 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c18763 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c18766 jmp 0x10c1826a */
  goto L_10c1826a;
L_10c1876b:;
  /* 10c1876b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c18771 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10c18777 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18779 jne 0x10c1878c */
  if (!C.zf) goto L_10c1878c;
  /* 10c1877b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c18781 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10c18787 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1878a je 0x10c18793 */
  if (C.zf) goto L_10c18793;
L_10c1878c:;
  /* 10c1878c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10c18791 jmp 0x10c187a9 */
  goto L_10c187a9;
L_10c18793:;
  /* 10c18793 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10c18799 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1879c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10c187a2 jmp 0x10c181d3 */
  goto L_10c181d3;
L_10c187a7:;
  /* 10c187a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c187a9:;
  /* 10c187a9 mov esp, ebp */
  ESP = (EBP);
  /* 10c187ab pop ebp */
  EBP = (pop32());
  /* 10c187ac ret  */
  ESPCHK(0x10c18190u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b0 @ 0x10c187b0 (250 bytes, 92 insns) */
void f_10c187b0(void) {
  FTRACE(0x10c187b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c187b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c187b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c187b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c187b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c187b7 push esi */
  push32((uint32_t)(ESI));
  /* 10c187b8 push edi */
  push32((uint32_t)(EDI));
  /* 10c187b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c187bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c187bf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c187c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10c187c5:;
  /* 10c187c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c187c9 jne 0x10c187e9 */
  if (!C.zf) goto L_10c187e9;
  /* 10c187cb push 0x10c39dd4 */
  push32((uint32_t)(0x10c39dd4u));
  /* 10c187d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c187d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10c187d4 push 0x10c39dc8 */
  push32((uint32_t)(0x10c39dc8u));
  /* 10c187d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c187db call 0x10c11960 */
  push32(0x10c187e0u); f_10c11960();
  /* 10c187e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c187e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c187e6 jne 0x10c187e9 */
  if (!C.zf) goto L_10c187e9;
  /* 10c187e8 int3  */
  x86_unimpl("int3 @ 0x10c187e8");
L_10c187e9:;
  /* 10c187e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c187eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c187ed jne 0x10c187c5 */
  if (!C.zf) goto L_10c187c5;
L_10c187ef:;
  /* 10c187ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c187f3 jne 0x10c18813 */
  if (!C.zf) goto L_10c18813;
  /* 10c187f5 push 0x10c39db8 */
  push32((uint32_t)(0x10c39db8u));
  /* 10c187fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10c187fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c187fe push 0x10c39dc8 */
  push32((uint32_t)(0x10c39dc8u));
  /* 10c18803 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c18805 call 0x10c11960 */
  push32(0x10c1880au); f_10c11960();
  /* 10c1880a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1880d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18810 jne 0x10c18813 */
  if (!C.zf) goto L_10c18813;
  /* 10c18812 int3  */
  x86_unimpl("int3 @ 0x10c18812");
L_10c18813:;
  /* 10c18813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c18817 jne 0x10c187ef */
  if (!C.zf) goto L_10c187ef;
  /* 10c18819 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1881c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10c18823 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18829 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c1882c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1882f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18832 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c18834 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18837 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10c1883e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c18841 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18842 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c18845 push edx */
  push32((uint32_t)(EDX));
  /* 10c18846 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18849 push eax */
  push32((uint32_t)(EAX));
  /* 10c1884a call 0x10c19830 */
  push32(0x10c1884fu); f_10c19830();
  /* 10c1884f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18852 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c18855 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18858 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c1885b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1885e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18861 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c18864 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18867 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1886b jl 0x10c1888f */
  if ((C.sf!=C.of)) goto L_10c1888f;
  /* 10c1886d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18870 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c18872 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c18875 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c18877 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1887d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10c18880 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18883 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c18885 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18888 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1888b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c1888d jmp 0x10c188a0 */
  goto L_10c188a0;
L_10c1888f:;
  /* 10c1888f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18892 push edx */
  push32((uint32_t)(EDX));
  /* 10c18893 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c18895 call 0x10c195b0 */
  push32(0x10c1889au); f_10c195b0();
  /* 10c1889a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1889d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10c188a0:;
  /* 10c188a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c188a3 pop edi */
  EDI = (pop32());
  /* 10c188a4 pop esi */
  ESI = (pop32());
  /* 10c188a5 pop ebx */
  EBX = (pop32());
  /* 10c188a6 mov esp, ebp */
  ESP = (EBP);
  /* 10c188a8 pop ebp */
  EBP = (pop32());
  /* 10c188a9 ret  */
  ESPCHK(0x10c187b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088b0 @ 0x10c188b0 (183 bytes, 58 insns) */
void f_10c188b0(void) {
  FTRACE(0x10c188b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c188b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c188b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c188b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c188b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c188b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c188bc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c188c1 ja 0x10c188da */
  if ((!C.cf&&!C.zf)) goto L_10c188da;
  /* 10c188c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c188c6 mov edx, dword ptr [0x10c3cc98] */
  EDX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c188cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c188ce mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c188d2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10c188d5 jmp 0x10c18963 */
  goto L_10c18963;
L_10c188da:;
  /* 10c188da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c188dd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c188e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c188e6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c188ec mov edx, dword ptr [0x10c3cc98] */
  EDX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c188f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c188f4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c188f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c188fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c188ff je 0x10c18923 */
  if (C.zf) goto L_10c18923;
  /* 10c18901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18904 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c18907 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1890d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10c18910 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c18913 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10c18916 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10c1891a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10c18921 jmp 0x10c18934 */
  goto L_10c18934;
L_10c18923:;
  /* 10c18923 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c18926 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10c18929 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10c1892d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10c18934:;
  /* 10c18934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c18936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c18938 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1893a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10c1893d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1893e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18941 push edx */
  push32((uint32_t)(EDX));
  /* 10c18942 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c18945 push eax */
  push32((uint32_t)(EAX));
  /* 10c18946 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c18948 call 0x10c1aad0 */
  push32(0x10c1894du); f_10c1aad0();
  /* 10c1894d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18950 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c18952 jne 0x10c18958 */
  if (!C.zf) goto L_10c18958;
  /* 10c18954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18956 jmp 0x10c18963 */
  goto L_10c18963;
L_10c18958:;
  /* 10c18958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1895b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c18960 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10c18963:;
  /* 10c18963 mov esp, ebp */
  ESP = (EBP);
  /* 10c18965 pop ebp */
  EBP = (pop32());
  /* 10c18966 ret  */
  ESPCHK(0x10c188b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008970 @ 0x10c18970 (836 bytes, 238 insns) */
void f_10c18970(void) {
  FTRACE(0x10c18970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c18970 push ebp */
  push32((uint32_t)(EBP));
  /* 10c18971 mov ebp, esp */
  EBP = (ESP);
  /* 10c18973 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c18976 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c18978 call 0x10c162a0 */
  push32(0x10c1897du); f_10c162a0();
  /* 10c1897d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18983 push eax */
  push32((uint32_t)(EAX));
  /* 10c18984 call 0x10c18cc0 */
  push32(0x10c18989u); f_10c18cc0();
  /* 10c18989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1898c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c1898f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18992 cmp ecx, dword ptr [0x10c3fae4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18998 jne 0x10c189ab */
  if (!C.zf) goto L_10c189ab;
  /* 10c1899a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c1899c call 0x10c16340 */
  push32(0x10c189a1u); f_10c16340();
  /* 10c189a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c189a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c189a6 jmp 0x10c18cb0 */
  goto L_10c18cb0;
L_10c189ab:;
  /* 10c189ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c189af jne 0x10c189cc */
  if (!C.zf) goto L_10c189cc;
  /* 10c189b1 call 0x10c18da0 */
  push32(0x10c189b6u); f_10c18da0();
  /* 10c189b6 call 0x10c18e20 */
  push32(0x10c189bbu); f_10c18e20();
  /* 10c189bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c189bd call 0x10c16340 */
  push32(0x10c189c2u); f_10c16340();
  /* 10c189c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c189c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c189c7 jmp 0x10c18cb0 */
  goto L_10c18cb0;
L_10c189cc:;
  /* 10c189cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c189d3 jmp 0x10c189de */
  goto L_10c189de;
L_10c189d5:;
  /* 10c189d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c189d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c189db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c189de:;
  /* 10c189de cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c189e2 jae 0x10c18b2f */
  if (!C.cf) goto L_10c18b2f;
  /* 10c189e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c189eb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c189ee mov ecx, dword ptr [eax + 0x10c3ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10c3ceb8)));
  /* 10c189f4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c189f7 jne 0x10c18b2a */
  if (!C.zf) goto L_10c18b2a;
  /* 10c189fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c18a04 jmp 0x10c18a0f */
  goto L_10c18a0f;
L_10c18a06:;
  /* 10c18a06 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18a09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18a0c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10c18a0f:;
  /* 10c18a0f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18a16 jae 0x10c18a24 */
  if (!C.cf) goto L_10c18a24;
  /* 10c18a18 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18a1b mov byte ptr [eax + 0x10c3fc80], 0 */
  w8((uint32_t)(EAX + 0x10c3fc80), (0x0u));
  /* 10c18a22 jmp 0x10c18a06 */
  goto L_10c18a06;
L_10c18a24:;
  /* 10c18a24 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c18a2b jmp 0x10c18a36 */
  goto L_10c18a36;
L_10c18a2d:;
  /* 10c18a2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18a30 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18a33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c18a36:;
  /* 10c18a36 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18a3a jae 0x10c18ab7 */
  if (!C.cf) goto L_10c18ab7;
  /* 10c18a3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18a3f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c18a42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18a45 lea ecx, [edx + eax*8 + 0x10c3cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10c3cec8));
  /* 10c18a4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c18a4f jmp 0x10c18a5a */
  goto L_10c18a5a;
L_10c18a51:;
  /* 10c18a51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18a54 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18a57 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c18a5a:;
  /* 10c18a5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18a5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c18a5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c18a61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c18a63 je 0x10c18ab2 */
  if (C.zf) goto L_10c18ab2;
  /* 10c18a65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18a68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18a6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c18a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c18a6f je 0x10c18ab2 */
  if (C.zf) goto L_10c18ab2;
  /* 10c18a71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c18a76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c18a78 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c18a7b jmp 0x10c18a86 */
  goto L_10c18a86;
L_10c18a7d:;
  /* 10c18a7d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18a80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18a83 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c18a86:;
  /* 10c18a86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c18a89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c18a8b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c18a8e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18a91 ja 0x10c18ab0 */
  if ((!C.cf&&!C.zf)) goto L_10c18ab0;
  /* 10c18a93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18a96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18a99 mov dl, byte ptr [eax + 0x10c3fc81] */
  DL = (r8((uint32_t)(EAX + 0x10c3fc81)));
  /* 10c18a9f or dl, byte ptr [ecx + 0x10c3ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10c3ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10c18aa5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18aa8 mov byte ptr [eax + 0x10c3fc81], dl */
  w8((uint32_t)(EAX + 0x10c3fc81), (DL));
  /* 10c18aae jmp 0x10c18a7d */
  goto L_10c18a7d;
L_10c18ab0:;
  /* 10c18ab0 jmp 0x10c18a51 */
  goto L_10c18a51;
L_10c18ab2:;
  /* 10c18ab2 jmp 0x10c18a2d */
  goto L_10c18a2d;
L_10c18ab7:;
  /* 10c18ab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18aba mov dword ptr [0x10c3fae4], ecx */
  w32((uint32_t)(0x10c3fae4), (ECX));
  /* 10c18ac0 mov dword ptr [0x10c3fb6c], 1 */
  w32((uint32_t)(0x10c3fb6c), (0x1u));
  /* 10c18aca mov edx, dword ptr [0x10c3fae4] */
  EDX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c18ad0 push edx */
  push32((uint32_t)(EDX));
  /* 10c18ad1 call 0x10c18d20 */
  push32(0x10c18ad6u); f_10c18d20();
  /* 10c18ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18ad9 mov dword ptr [0x10c3fd84], eax */
  w32((uint32_t)(0x10c3fd84), (EAX));
  /* 10c18ade mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c18ae5 jmp 0x10c18af0 */
  goto L_10c18af0;
L_10c18ae7:;
  /* 10c18ae7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18aea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18aed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c18af0:;
  /* 10c18af0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18af4 jae 0x10c18b14 */
  if (!C.cf) goto L_10c18b14;
  /* 10c18af6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18af9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c18afc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18aff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18b02 mov cx, word ptr [ecx + eax*2 + 0x10c3cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10c3cebc)));
  /* 10c18b0a mov word ptr [edx*2 + 0x10c3fb60], cx */
  w16((uint32_t)(EDX*2 + 0x10c3fb60), (CX));
  /* 10c18b12 jmp 0x10c18ae7 */
  goto L_10c18ae7;
L_10c18b14:;
  /* 10c18b14 call 0x10c18e20 */
  push32(0x10c18b19u); f_10c18e20();
  /* 10c18b19 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c18b1b call 0x10c16340 */
  push32(0x10c18b20u); f_10c16340();
  /* 10c18b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18b25 jmp 0x10c18cb0 */
  goto L_10c18cb0;
L_10c18b2a:;
  /* 10c18b2a jmp 0x10c189d5 */
  goto L_10c189d5;
L_10c18b2f:;
  /* 10c18b2f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10c18b32 push edx */
  push32((uint32_t)(EDX));
  /* 10c18b33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18b36 push eax */
  push32((uint32_t)(EAX));
  /* 10c18b37 call dword ptr [0x10c402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402dc))), 0x10c18b3du);
  /* 10c18b3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18b40 jne 0x10c18c82 */
  if (!C.zf) goto L_10c18c82;
  /* 10c18b46 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c18b4d jmp 0x10c18b58 */
  goto L_10c18b58;
L_10c18b4f:;
  /* 10c18b4f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18b55 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10c18b58:;
  /* 10c18b58 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18b5f jae 0x10c18b6d */
  if (!C.cf) goto L_10c18b6d;
  /* 10c18b61 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18b64 mov byte ptr [edx + 0x10c3fc80], 0 */
  w8((uint32_t)(EDX + 0x10c3fc80), (0x0u));
  /* 10c18b6b jmp 0x10c18b4f */
  goto L_10c18b4f;
L_10c18b6d:;
  /* 10c18b6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18b70 mov dword ptr [0x10c3fae4], eax */
  w32((uint32_t)(0x10c3fae4), (EAX));
  /* 10c18b75 mov dword ptr [0x10c3fd84], 0 */
  w32((uint32_t)(0x10c3fd84), (0x0u));
  /* 10c18b7f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18b83 jbe 0x10c18c3e */
  if ((C.cf||C.zf)) goto L_10c18c3e;
  /* 10c18b89 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10c18b8c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10c18b8f jmp 0x10c18b9a */
  goto L_10c18b9a;
L_10c18b91:;
  /* 10c18b91 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c18b94 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18b97 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10c18b9a:;
  /* 10c18b9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c18b9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c18b9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c18ba1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c18ba3 je 0x10c18bec */
  if (C.zf) goto L_10c18bec;
  /* 10c18ba5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c18ba8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18baa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c18bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c18baf je 0x10c18bec */
  if (C.zf) goto L_10c18bec;
  /* 10c18bb1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c18bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c18bb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c18bb8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c18bbb jmp 0x10c18bc6 */
  goto L_10c18bc6;
L_10c18bbd:;
  /* 10c18bbd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18bc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18bc3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c18bc6:;
  /* 10c18bc6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c18bc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c18bcb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c18bce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18bd1 ja 0x10c18bea */
  if ((!C.cf&&!C.zf)) goto L_10c18bea;
  /* 10c18bd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18bd6 mov cl, byte ptr [eax + 0x10c3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c3fc81)));
  /* 10c18bdc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10c18bdf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18be2 mov byte ptr [edx + 0x10c3fc81], cl */
  w8((uint32_t)(EDX + 0x10c3fc81), (CL));
  /* 10c18be8 jmp 0x10c18bbd */
  goto L_10c18bbd;
L_10c18bea:;
  /* 10c18bea jmp 0x10c18b91 */
  goto L_10c18b91;
L_10c18bec:;
  /* 10c18bec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10c18bf3 jmp 0x10c18bfe */
  goto L_10c18bfe;
L_10c18bf5:;
  /* 10c18bf5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18bf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18bfb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c18bfe:;
  /* 10c18bfe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18c05 jae 0x10c18c1e */
  if (!C.cf) goto L_10c18c1e;
  /* 10c18c07 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18c0a mov dl, byte ptr [ecx + 0x10c3fc81] */
  DL = (r8((uint32_t)(ECX + 0x10c3fc81)));
  /* 10c18c10 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10c18c13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c18c16 mov byte ptr [eax + 0x10c3fc81], dl */
  w8((uint32_t)(EAX + 0x10c3fc81), (DL));
  /* 10c18c1c jmp 0x10c18bf5 */
  goto L_10c18bf5;
L_10c18c1e:;
  /* 10c18c1e mov ecx, dword ptr [0x10c3fae4] */
  ECX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c18c24 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18c25 call 0x10c18d20 */
  push32(0x10c18c2au); f_10c18d20();
  /* 10c18c2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18c2d mov dword ptr [0x10c3fd84], eax */
  w32((uint32_t)(0x10c3fd84), (EAX));
  /* 10c18c32 mov dword ptr [0x10c3fb6c], 1 */
  w32((uint32_t)(0x10c3fb6c), (0x1u));
  /* 10c18c3c jmp 0x10c18c48 */
  goto L_10c18c48;
L_10c18c3e:;
  /* 10c18c3e mov dword ptr [0x10c3fb6c], 0 */
  w32((uint32_t)(0x10c3fb6c), (0x0u));
L_10c18c48:;
  /* 10c18c48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c18c4f jmp 0x10c18c5a */
  goto L_10c18c5a;
L_10c18c51:;
  /* 10c18c51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18c54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18c57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c18c5a:;
  /* 10c18c5a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18c5e jae 0x10c18c6f */
  if (!C.cf) goto L_10c18c6f;
  /* 10c18c60 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c18c63 mov word ptr [eax*2 + 0x10c3fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10c3fb60), (0x0u));
  /* 10c18c6d jmp 0x10c18c51 */
  goto L_10c18c51;
L_10c18c6f:;
  /* 10c18c6f call 0x10c18e20 */
  push32(0x10c18c74u); f_10c18e20();
  /* 10c18c74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c18c76 call 0x10c16340 */
  push32(0x10c18c7bu); f_10c16340();
  /* 10c18c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18c7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18c80 jmp 0x10c18cb0 */
  goto L_10c18cb0;
L_10c18c82:;
  /* 10c18c82 cmp dword ptr [0x10c3e5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18c89 je 0x10c18ca3 */
  if (C.zf) goto L_10c18ca3;
  /* 10c18c8b call 0x10c18da0 */
  push32(0x10c18c90u); f_10c18da0();
  /* 10c18c90 call 0x10c18e20 */
  push32(0x10c18c95u); f_10c18e20();
  /* 10c18c95 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c18c97 call 0x10c16340 */
  push32(0x10c18c9cu); f_10c16340();
  /* 10c18c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c18ca1 jmp 0x10c18cb0 */
  goto L_10c18cb0;
L_10c18ca3:;
  /* 10c18ca3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c18ca5 call 0x10c16340 */
  push32(0x10c18caau); f_10c16340();
  /* 10c18caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18cad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c18cb0:;
  /* 10c18cb0 mov esp, ebp */
  ESP = (EBP);
  /* 10c18cb2 pop ebp */
  EBP = (pop32());
  /* 10c18cb3 ret  */
  ESPCHK(0x10c18970u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10c18cc0 (89 bytes, 21 insns) */
void f_10c18cc0(void) {
  FTRACE(0x10c18cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c18cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c18cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c18cc3 mov dword ptr [0x10c3e5f0], 0 */
  w32((uint32_t)(0x10c3e5f0), (0x0u));
  /* 10c18ccd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18cd1 jne 0x10c18ce5 */
  if (!C.zf) goto L_10c18ce5;
  /* 10c18cd3 mov dword ptr [0x10c3e5f0], 1 */
  w32((uint32_t)(0x10c3e5f0), (0x1u));
  /* 10c18cdd call dword ptr [0x10c402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402e4))), 0x10c18ce3u);
  /* 10c18ce3 jmp 0x10c18d17 */
  goto L_10c18d17;
L_10c18ce5:;
  /* 10c18ce5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18ce9 jne 0x10c18cfd */
  if (!C.zf) goto L_10c18cfd;
  /* 10c18ceb mov dword ptr [0x10c3e5f0], 1 */
  w32((uint32_t)(0x10c3e5f0), (0x1u));
  /* 10c18cf5 call dword ptr [0x10c402e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402e0))), 0x10c18cfbu);
  /* 10c18cfb jmp 0x10c18d17 */
  goto L_10c18d17;
L_10c18cfd:;
  /* 10c18cfd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18d01 jne 0x10c18d14 */
  if (!C.zf) goto L_10c18d14;
  /* 10c18d03 mov dword ptr [0x10c3e5f0], 1 */
  w32((uint32_t)(0x10c3e5f0), (0x1u));
  /* 10c18d0d mov eax, dword ptr [0x10c3e610] */
  EAX = (r32((uint32_t)(0x10c3e610)));
  /* 10c18d12 jmp 0x10c18d17 */
  goto L_10c18d17;
L_10c18d14:;
  /* 10c18d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10c18d17:;
  /* 10c18d17 pop ebp */
  EBP = (pop32());
  /* 10c18d18 ret  */
  ESPCHK(0x10c18cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d20 @ 0x10c18d20 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10c18d20(void) {
  FTRACE(0x10c18d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c18d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c18d21 mov ebp, esp */
  EBP = (ESP);
  /* 10c18d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c18d27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c18d2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18d2d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c18d33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c18d36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18d3a ja 0x10c18d6a */
  if ((!C.cf&&!C.zf)) goto L_10c18d6a;
  /* 10c18d3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18d3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c18d41 mov dl, byte ptr [eax + 0x10c18d84] */
  DL = (r8((uint32_t)(EAX + 0x10c18d84)));
  /* 10c18d47 jmp dword ptr [edx*4 + 0x10c18d70] */
  switch (EDX) {
    case 0: goto L_10c18d4e;
    case 1: goto L_10c18d55;
    case 2: goto L_10c18d5c;
    case 3: goto L_10c18d63;
    case 4: goto L_10c18d6a;
    default: x86_unimpl("switch@0x10c18d47 out of table"); return;
  }
L_10c18d4e:;
  /* 10c18d4e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10c18d53 jmp 0x10c18d6c */
  goto L_10c18d6c;
L_10c18d55:;
  /* 10c18d55 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10c18d5a jmp 0x10c18d6c */
  goto L_10c18d6c;
L_10c18d5c:;
  /* 10c18d5c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10c18d61 jmp 0x10c18d6c */
  goto L_10c18d6c;
L_10c18d63:;
  /* 10c18d63 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10c18d68 jmp 0x10c18d6c */
  goto L_10c18d6c;
L_10c18d6a:;
  /* 10c18d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c18d6c:;
  /* 10c18d6c mov esp, ebp */
  ESP = (EBP);
  /* 10c18d6e pop ebp */
  EBP = (pop32());
  /* 10c18d6f ret  */
  ESPCHK(0x10c18d20u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10c18da0 (116 bytes, 29 insns) */
void f_10c18da0(void) {
  FTRACE(0x10c18da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c18da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c18da1 mov ebp, esp */
  EBP = (ESP);
  /* 10c18da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18da4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c18dab jmp 0x10c18db6 */
  goto L_10c18db6;
L_10c18dad:;
  /* 10c18dad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18db0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18db3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c18db6:;
  /* 10c18db6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18dbd jge 0x10c18dcb */
  if ((C.sf==C.of)) goto L_10c18dcb;
  /* 10c18dbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18dc2 mov byte ptr [ecx + 0x10c3fc80], 0 */
  w8((uint32_t)(ECX + 0x10c3fc80), (0x0u));
  /* 10c18dc9 jmp 0x10c18dad */
  goto L_10c18dad;
L_10c18dcb:;
  /* 10c18dcb mov dword ptr [0x10c3fae4], 0 */
  w32((uint32_t)(0x10c3fae4), (0x0u));
  /* 10c18dd5 mov dword ptr [0x10c3fb6c], 0 */
  w32((uint32_t)(0x10c3fb6c), (0x0u));
  /* 10c18ddf mov dword ptr [0x10c3fd84], 0 */
  w32((uint32_t)(0x10c3fd84), (0x0u));
  /* 10c18de9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c18df0 jmp 0x10c18dfb */
  goto L_10c18dfb;
L_10c18df2:;
  /* 10c18df2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18df5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18df8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c18dfb:;
  /* 10c18dfb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18dff jge 0x10c18e10 */
  if ((C.sf==C.of)) goto L_10c18e10;
  /* 10c18e01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18e04 mov word ptr [eax*2 + 0x10c3fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10c3fb60), (0x0u));
  /* 10c18e0e jmp 0x10c18df2 */
  goto L_10c18df2;
L_10c18e10:;
  /* 10c18e10 mov esp, ebp */
  ESP = (EBP);
  /* 10c18e12 pop ebp */
  EBP = (pop32());
  /* 10c18e13 ret  */
  ESPCHK(0x10c18da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x10c18e20 (770 bytes, 175 insns) */
void f_10c18e20(void) {
  FTRACE(0x10c18e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c18e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c18e21 mov ebp, esp */
  EBP = (ESP);
  /* 10c18e23 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c18e29 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10c18e2f push eax */
  push32((uint32_t)(EAX));
  /* 10c18e30 mov ecx, dword ptr [0x10c3fae4] */
  ECX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c18e36 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18e37 call dword ptr [0x10c402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402dc))), 0x10c18e3du);
  /* 10c18e3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18e40 jne 0x10c19059 */
  if (!C.zf) goto L_10c19059;
  /* 10c18e46 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c18e50 jmp 0x10c18e61 */
  goto L_10c18e61;
L_10c18e52:;
  /* 10c18e52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18e58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18e5b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10c18e61:;
  /* 10c18e61 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18e6b jae 0x10c18e82 */
  if (!C.cf) goto L_10c18e82;
  /* 10c18e6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18e73 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10c18e79 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10c18e80 jmp 0x10c18e52 */
  goto L_10c18e52;
L_10c18e82:;
  /* 10c18e82 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10c18e89 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10c18e8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c18e92 jmp 0x10c18e9d */
  goto L_10c18e9d;
L_10c18e94:;
  /* 10c18e94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18e97 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18e9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c18e9d:;
  /* 10c18e9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18ea0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c18ea2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c18ea4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c18ea6 je 0x10c18ee8 */
  if (C.zf) goto L_10c18ee8;
  /* 10c18ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18eab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c18ead mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c18eaf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10c18eb5 jmp 0x10c18ec6 */
  goto L_10c18ec6;
L_10c18eb7:;
  /* 10c18eb7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18ebd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18ec0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10c18ec6:;
  /* 10c18ec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c18ec9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c18ecb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c18ece cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18ed4 ja 0x10c18ee6 */
  if ((!C.cf&&!C.zf)) goto L_10c18ee6;
  /* 10c18ed6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18edc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10c18ee4 jmp 0x10c18eb7 */
  goto L_10c18eb7;
L_10c18ee6:;
  /* 10c18ee6 jmp 0x10c18e94 */
  goto L_10c18e94;
L_10c18ee8:;
  /* 10c18ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c18eea mov eax, dword ptr [0x10c3fd84] */
  EAX = (r32((uint32_t)(0x10c3fd84)));
  /* 10c18eef push eax */
  push32((uint32_t)(EAX));
  /* 10c18ef0 mov ecx, dword ptr [0x10c3fae4] */
  ECX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c18ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18ef7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10c18efd push edx */
  push32((uint32_t)(EDX));
  /* 10c18efe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c18f03 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10c18f09 push eax */
  push32((uint32_t)(EAX));
  /* 10c18f0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c18f0c call 0x10c1aad0 */
  push32(0x10c18f11u); f_10c1aad0();
  /* 10c18f11 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18f14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c18f16 mov ecx, dword ptr [0x10c3fae4] */
  ECX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c18f1c push ecx */
  push32((uint32_t)(ECX));
  /* 10c18f1d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c18f22 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10c18f28 push edx */
  push32((uint32_t)(EDX));
  /* 10c18f29 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c18f2e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10c18f34 push eax */
  push32((uint32_t)(EAX));
  /* 10c18f35 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c18f3a mov ecx, dword ptr [0x10c3fd84] */
  ECX = (r32((uint32_t)(0x10c3fd84)));
  /* 10c18f40 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18f41 call 0x10c1ac90 */
  push32(0x10c18f46u); f_10c1ac90();
  /* 10c18f46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c18f4b mov edx, dword ptr [0x10c3fae4] */
  EDX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c18f51 push edx */
  push32((uint32_t)(EDX));
  /* 10c18f52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c18f57 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10c18f5d push eax */
  push32((uint32_t)(EAX));
  /* 10c18f5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c18f63 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10c18f69 push ecx */
  push32((uint32_t)(ECX));
  /* 10c18f6a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10c18f6f mov edx, dword ptr [0x10c3fd84] */
  EDX = (r32((uint32_t)(0x10c3fd84)));
  /* 10c18f75 push edx */
  push32((uint32_t)(EDX));
  /* 10c18f76 call 0x10c1ac90 */
  push32(0x10c18f7bu); f_10c1ac90();
  /* 10c18f7b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18f7e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c18f88 jmp 0x10c18f99 */
  goto L_10c18f99;
L_10c18f8a:;
  /* 10c18f8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18f90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c18f93 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10c18f99:;
  /* 10c18f99 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c18fa3 jae 0x10c19054 */
  if (!C.cf) goto L_10c19054;
  /* 10c18fa9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18faf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c18fb1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10c18fb9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c18fbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c18fbe je 0x10c18ff6 */
  if (C.zf) goto L_10c18ff6;
  /* 10c18fc0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18fc6 mov cl, byte ptr [eax + 0x10c3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c3fc81)));
  /* 10c18fcc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10c18fcf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18fd5 mov byte ptr [edx + 0x10c3fc81], cl */
  w8((uint32_t)(EDX + 0x10c3fc81), (CL));
  /* 10c18fdb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18fe1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18fe7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10c18fee mov byte ptr [eax + 0x10c3fb80], dl */
  w8((uint32_t)(EAX + 0x10c3fb80), (DL));
  /* 10c18ff4 jmp 0x10c1904f */
  goto L_10c1904f;
L_10c18ff6:;
  /* 10c18ff6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c18ffc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c18ffe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10c19006 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c19009 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1900b je 0x10c19042 */
  if (C.zf) goto L_10c19042;
  /* 10c1900d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c19013 mov al, byte ptr [edx + 0x10c3fc81] */
  AL = (r8((uint32_t)(EDX + 0x10c3fc81)));
  /* 10c19019 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c1901b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c19021 mov byte ptr [ecx + 0x10c3fc81], al */
  w8((uint32_t)(ECX + 0x10c3fc81), (AL));
  /* 10c19027 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c1902d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c19033 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10c1903a mov byte ptr [edx + 0x10c3fb80], cl */
  w8((uint32_t)(EDX + 0x10c3fb80), (CL));
  /* 10c19040 jmp 0x10c1904f */
  goto L_10c1904f;
L_10c19042:;
  /* 10c19042 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c19048 mov byte ptr [edx + 0x10c3fb80], 0 */
  w8((uint32_t)(EDX + 0x10c3fb80), (0x0u));
L_10c1904f:;
  /* 10c1904f jmp 0x10c18f8a */
  goto L_10c18f8a;
L_10c19054:;
  /* 10c19054 jmp 0x10c1911e */
  goto L_10c1911e;
L_10c19059:;
  /* 10c19059 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10c19063 jmp 0x10c19074 */
  goto L_10c19074;
L_10c19065:;
  /* 10c19065 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c1906b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1906e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10c19074:;
  /* 10c19074 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1907e jae 0x10c1911e */
  if (!C.cf) goto L_10c1911e;
  /* 10c19084 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1908b jb 0x10c190c8 */
  if (C.cf) goto L_10c190c8;
  /* 10c1908d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19094 ja 0x10c190c8 */
  if ((!C.cf&&!C.zf)) goto L_10c190c8;
  /* 10c19096 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c1909c mov dl, byte ptr [ecx + 0x10c3fc81] */
  DL = (r8((uint32_t)(ECX + 0x10c3fc81)));
  /* 10c190a2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10c190a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c190ab mov byte ptr [eax + 0x10c3fc81], dl */
  w8((uint32_t)(EAX + 0x10c3fc81), (DL));
  /* 10c190b1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c190b7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c190ba mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c190c0 mov byte ptr [edx + 0x10c3fb80], cl */
  w8((uint32_t)(EDX + 0x10c3fb80), (CL));
  /* 10c190c6 jmp 0x10c19119 */
  goto L_10c19119;
L_10c190c8:;
  /* 10c190c8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c190cf jb 0x10c1910c */
  if (C.cf) goto L_10c1910c;
  /* 10c190d1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c190d8 ja 0x10c1910c */
  if ((!C.cf&&!C.zf)) goto L_10c1910c;
  /* 10c190da mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c190e0 mov cl, byte ptr [eax + 0x10c3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c3fc81)));
  /* 10c190e6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c190e9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c190ef mov byte ptr [edx + 0x10c3fc81], cl */
  w8((uint32_t)(EDX + 0x10c3fc81), (CL));
  /* 10c190f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c190fb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c190fe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c19104 mov byte ptr [ecx + 0x10c3fb80], al */
  w8((uint32_t)(ECX + 0x10c3fb80), (AL));
  /* 10c1910a jmp 0x10c19119 */
  goto L_10c19119;
L_10c1910c:;
  /* 10c1910c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10c19112 mov byte ptr [edx + 0x10c3fb80], 0 */
  w8((uint32_t)(EDX + 0x10c3fb80), (0x0u));
L_10c19119:;
  /* 10c19119 jmp 0x10c19065 */
  goto L_10c19065;
L_10c1911e:;
  /* 10c1911e mov esp, ebp */
  ESP = (EBP);
  /* 10c19120 pop ebp */
  EBP = (pop32());
  /* 10c19121 ret  */
  ESPCHK(0x10c18e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x10c19130 (23 bytes, 9 insns) */
void f_10c19130(void) {
  FTRACE(0x10c19130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c19130 push ebp */
  push32((uint32_t)(EBP));
  /* 10c19131 mov ebp, esp */
  EBP = (ESP);
  /* 10c19133 cmp dword ptr [0x10c3fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1913a je 0x10c19143 */
  if (C.zf) goto L_10c19143;
  /* 10c1913c mov eax, dword ptr [0x10c3fae4] */
  EAX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c19141 jmp 0x10c19145 */
  goto L_10c19145;
L_10c19143:;
  /* 10c19143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c19145:;
  /* 10c19145 pop ebp */
  EBP = (pop32());
  /* 10c19146 ret  */
  ESPCHK(0x10c19130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009150 @ 0x10c19150 (34 bytes, 10 insns) */
void f_10c19150(void) {
  FTRACE(0x10c19150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c19150 push ebp */
  push32((uint32_t)(EBP));
  /* 10c19151 mov ebp, esp */
  EBP = (ESP);
  /* 10c19153 cmp dword ptr [0x10c3ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1915a jne 0x10c19170 */
  if (!C.zf) goto L_10c19170;
  /* 10c1915c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10c1915e call 0x10c18970 */
  push32(0x10c19163u); f_10c18970();
  /* 10c19163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19166 mov dword ptr [0x10c3ff30], 1 */
  w32((uint32_t)(0x10c3ff30), (0x1u));
L_10c19170:;
  /* 10c19170 pop ebp */
  EBP = (pop32());
  /* 10c19171 ret  */
  ESPCHK(0x10c19150u, _esp0);
  ESP += 4; return;
}

/* FUN_10009180 @ 0x10c19180 (664 bytes, 264 insns) [15 switch table(s)] */
void f_10c19180(void) {
  FTRACE(0x10c19180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c19180 push ebp */
  push32((uint32_t)(EBP));
  /* 10c19181 mov ebp, esp */
  EBP = (ESP);
  /* 10c19183 push edi */
  push32((uint32_t)(EDI));
  /* 10c19184 push esi */
  push32((uint32_t)(ESI));
  /* 10c19185 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19188 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1918b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1918e mov eax, ecx */
  EAX = (ECX);
  /* 10c19190 mov edx, ecx */
  EDX = (ECX);
  /* 10c19192 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19194 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19196 jbe 0x10c191a0 */
  if ((C.cf||C.zf)) goto L_10c191a0;
  /* 10c19198 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1919a jb 0x10c19318 */
  if (C.cf) goto L_10c19318;
L_10c191a0:;
  /* 10c191a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c191a6 jne 0x10c191bc */
  if (!C.zf) goto L_10c191bc;
  /* 10c191a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c191ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c191ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c191b1 jb 0x10c191dc */
  if (C.cf) goto L_10c191dc;
  /* 10c191b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c191b5 jmp dword ptr [edx*4 + 0x10c192c8] */
  switch (EDX) {
    case 0: goto L_10c192d8;
    case 1: goto L_10c192e0;
    case 2: goto L_10c192ec;
    case 3: goto L_10c19300;
    default: x86_unimpl("switch@0x10c191b5 out of table"); return;
  }
L_10c191bc:;
  /* 10c191bc mov eax, edi */
  EAX = (EDI);
  /* 10c191be mov edx, 3 */
  EDX = (0x3u);
  /* 10c191c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c191c6 jb 0x10c191d4 */
  if (C.cf) goto L_10c191d4;
  /* 10c191c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c191cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c191cd jmp dword ptr [eax*4 + 0x10c191e0] */
  switch (EAX) {
    case 1: goto L_10c191f0;
    case 2: goto L_10c1921c;
    case 3: goto L_10c19240;
    default: x86_unimpl("switch@0x10c191cd out of table"); return;
  }
L_10c191d4:;
  /* 10c191d4 jmp dword ptr [ecx*4 + 0x10c192d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10c192d8)))); return;
  /* 10c191db nop  */
  /* nop */
L_10c191dc:;
  /* 10c191dc jmp dword ptr [ecx*4 + 0x10c1925c] */
  switch (ECX) {
    case 0: goto L_10c192bf;
    case 1: goto L_10c192ac;
    case 2: goto L_10c192a4;
    case 3: goto L_10c1929c;
    case 4: goto L_10c19294;
    case 5: goto L_10c1928c;
    case 6: goto L_10c19284;
    case 7: goto L_10c1927c;
    default: x86_unimpl("switch@0x10c191dc out of table"); return;
  }
  /* 10c191e3 nop  */
  /* nop */
L_10c191f0:;
  /* 10c191f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c191f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c191f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c191f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c191f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c191fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c191ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c19202 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c19205 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19208 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1920b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1920e jb 0x10c191dc */
  if (C.cf) goto L_10c191dc;
  /* 10c19210 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c19212 jmp dword ptr [edx*4 + 0x10c192c8] */
  switch (EDX) {
    case 0: goto L_10c192d8;
    case 1: goto L_10c192e0;
    case 2: goto L_10c192ec;
    case 3: goto L_10c19300;
    default: x86_unimpl("switch@0x10c19212 out of table"); return;
  }
  /* 10c19219 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1921c:;
  /* 10c1921c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1921e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c19220 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c19222 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c19225 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c19228 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1922b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1922e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19231 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19234 jb 0x10c191dc */
  if (C.cf) goto L_10c191dc;
  /* 10c19236 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c19238 jmp dword ptr [edx*4 + 0x10c192c8] */
  switch (EDX) {
    case 0: goto L_10c192d8;
    case 1: goto L_10c192e0;
    case 2: goto L_10c192ec;
    case 3: goto L_10c19300;
    default: x86_unimpl("switch@0x10c19238 out of table"); return;
  }
  /* 10c1923f nop  */
  /* nop */
L_10c19240:;
  /* 10c19240 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c19242 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c19244 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c19246 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c19247 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1924a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c1924b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1924e jb 0x10c191dc */
  if (C.cf) goto L_10c191dc;
  /* 10c19250 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c19252 jmp dword ptr [edx*4 + 0x10c192c8] */
  switch (EDX) {
    case 0: goto L_10c192d8;
    case 1: goto L_10c192e0;
    case 2: goto L_10c192ec;
    case 3: goto L_10c19300;
    default: x86_unimpl("switch@0x10c19252 out of table"); return;
  }
  /* 10c19259 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1927c:;
  /* 10c1927c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10c19280 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10c19284:;
  /* 10c19284 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10c19288 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10c1928c:;
  /* 10c1928c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10c19290 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10c19294:;
  /* 10c19294 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10c19298 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10c1929c:;
  /* 10c1929c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10c192a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10c192a4:;
  /* 10c192a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10c192a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10c192ac:;
  /* 10c192ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10c192b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10c192b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c192bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c192bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c192bf:;
  /* 10c192bf jmp dword ptr [edx*4 + 0x10c192c8] */
  switch (EDX) {
    case 0: goto L_10c192d8;
    case 1: goto L_10c192e0;
    case 2: goto L_10c192ec;
    case 3: goto L_10c19300;
    default: x86_unimpl("switch@0x10c192bf out of table"); return;
  }
  /* 10c192c6 mov edi, edi */
  EDI = (EDI);
L_10c192d8:;
  /* 10c192d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c192db pop esi */
  ESI = (pop32());
  /* 10c192dc pop edi */
  EDI = (pop32());
  /* 10c192dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c192de ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
  /* 10c192df nop  */
  /* nop */
L_10c192e0:;
  /* 10c192e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c192e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c192e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c192e7 pop esi */
  ESI = (pop32());
  /* 10c192e8 pop edi */
  EDI = (pop32());
  /* 10c192e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c192ea ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
  /* 10c192eb nop  */
  /* nop */
L_10c192ec:;
  /* 10c192ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c192ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c192f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c192f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c192f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c192f9 pop esi */
  ESI = (pop32());
  /* 10c192fa pop edi */
  EDI = (pop32());
  /* 10c192fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c192fc ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
  /* 10c192fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c19300:;
  /* 10c19300 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c19302 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c19304 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c19307 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1930a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c1930d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c19310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c19313 pop esi */
  ESI = (pop32());
  /* 10c19314 pop edi */
  EDI = (pop32());
  /* 10c19315 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c19316 ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
  /* 10c19317 nop  */
  /* nop */
L_10c19318:;
  /* 10c19318 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10c1931c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10c19320 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c19326 jne 0x10c1934c */
  if (!C.zf) goto L_10c1934c;
  /* 10c19328 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1932b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1932e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19331 jb 0x10c19340 */
  if (C.cf) goto L_10c19340;
  /* 10c19333 std  */
  C.df=1;
  /* 10c19334 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c19336 cld  */
  C.df=0;
  /* 10c19337 jmp dword ptr [edx*4 + 0x10c19460] */
  switch (EDX) {
    case 0: goto L_10c19470;
    case 1: goto L_10c19478;
    case 2: goto L_10c19488;
    case 3: goto L_10c1949c;
    default: x86_unimpl("switch@0x10c19337 out of table"); return;
  }
  /* 10c1933e mov edi, edi */
  EDI = (EDI);
L_10c19340:;
  /* 10c19340 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c19342 jmp dword ptr [ecx*4 + 0x10c19410] */
  switch (ECX) {
    case 0: goto L_10c19457;
    default: x86_unimpl("switch@0x10c19342 out of table"); return;
  }
  /* 10c19349 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1934c:;
  /* 10c1934c mov eax, edi */
  EAX = (EDI);
  /* 10c1934e mov edx, 3 */
  EDX = (0x3u);
  /* 10c19353 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19356 jb 0x10c19364 */
  if (C.cf) goto L_10c19364;
  /* 10c19358 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1935b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1935d jmp dword ptr [eax*4 + 0x10c19368] */
  switch (EAX) {
    case 1: goto L_10c19378;
    case 2: goto L_10c19398;
    case 3: goto L_10c193c0;
    default: x86_unimpl("switch@0x10c1935d out of table"); return;
  }
L_10c19364:;
  /* 10c19364 jmp dword ptr [ecx*4 + 0x10c19460] */
  switch (ECX) {
    case 0: goto L_10c19470;
    case 1: goto L_10c19478;
    case 2: goto L_10c19488;
    case 3: goto L_10c1949c;
    default: x86_unimpl("switch@0x10c19364 out of table"); return;
  }
  /* 10c1936b nop  */
  /* nop */
L_10c19378:;
  /* 10c19378 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1937b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1937d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c19380 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10c19381 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c19384 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10c19385 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19388 jb 0x10c19340 */
  if (C.cf) goto L_10c19340;
  /* 10c1938a std  */
  C.df=1;
  /* 10c1938b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1938d cld  */
  C.df=0;
  /* 10c1938e jmp dword ptr [edx*4 + 0x10c19460] */
  switch (EDX) {
    case 0: goto L_10c19470;
    case 1: goto L_10c19478;
    case 2: goto L_10c19488;
    case 3: goto L_10c1949c;
    default: x86_unimpl("switch@0x10c1938e out of table"); return;
  }
  /* 10c19395 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c19398:;
  /* 10c19398 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1939b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1939d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c193a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c193a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c193a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c193a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c193ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c193af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c193b2 jb 0x10c19340 */
  if (C.cf) goto L_10c19340;
  /* 10c193b4 std  */
  C.df=1;
  /* 10c193b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c193b7 cld  */
  C.df=0;
  /* 10c193b8 jmp dword ptr [edx*4 + 0x10c19460] */
  switch (EDX) {
    case 0: goto L_10c19470;
    case 1: goto L_10c19478;
    case 2: goto L_10c19488;
    case 3: goto L_10c1949c;
    default: x86_unimpl("switch@0x10c193b8 out of table"); return;
  }
  /* 10c193bf nop  */
  /* nop */
L_10c193c0:;
  /* 10c193c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c193c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c193c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c193c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c193cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c193ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c193d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c193d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c193d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c193da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c193dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c193e0 jb 0x10c19340 */
  if (C.cf) goto L_10c19340;
  /* 10c193e6 std  */
  C.df=1;
  /* 10c193e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c193e9 cld  */
  C.df=0;
  /* 10c193ea jmp dword ptr [edx*4 + 0x10c19460] */
  switch (EDX) {
    case 0: goto L_10c19470;
    case 1: goto L_10c19478;
    case 2: goto L_10c19488;
    case 3: goto L_10c1949c;
    default: x86_unimpl("switch@0x10c193ea out of table"); return;
  }
  /* 10c193f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10c193f4 adc al, 0x94 */
  { uint32_t _a=(AL),_b=(0x94u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c193f6 rcl dword ptr [eax], 0x1c */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1cu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c193f9 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10c193fa rcl dword ptr [eax], 0x24 */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x24u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c193fd xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10c193fe rcl dword ptr [eax], 0x2c */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x2cu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c19401 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10c19402 rcl dword ptr [eax], 0x34 */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x34u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c19405 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10c19406 rcl dword ptr [eax], 0x3c */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x3cu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c19409 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10c1940a rcl dword ptr [eax], 0x44 */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x44u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c1940d xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10c19414 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10c19418 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10c1941c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10c19420 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10c19424 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10c19428 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10c1942c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10c19430 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10c19434 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10c19438 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10c1943c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10c19440 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10c19444 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10c19448 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10c1944c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c19453 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19455 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c19457:;
  /* 10c19457 jmp dword ptr [edx*4 + 0x10c19460] */
  switch (EDX) {
    case 0: goto L_10c19470;
    case 1: goto L_10c19478;
    case 2: goto L_10c19488;
    case 3: goto L_10c1949c;
    default: x86_unimpl("switch@0x10c19457 out of table"); return;
  }
  /* 10c1945e mov edi, edi */
  EDI = (EDI);
L_10c19470:;
  /* 10c19470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c19473 pop esi */
  ESI = (pop32());
  /* 10c19474 pop edi */
  EDI = (pop32());
  /* 10c19475 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c19476 ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
  /* 10c19477 nop  */
  /* nop */
L_10c19478:;
  /* 10c19478 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1947b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1947e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c19481 pop esi */
  ESI = (pop32());
  /* 10c19482 pop edi */
  EDI = (pop32());
  /* 10c19483 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c19484 ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
  /* 10c19485 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c19488:;
  /* 10c19488 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1948b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1948e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c19491 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c19494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c19497 pop esi */
  ESI = (pop32());
  /* 10c19498 pop edi */
  EDI = (pop32());
  /* 10c19499 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1949a ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
  /* 10c1949b nop  */
  /* nop */
L_10c1949c:;
  /* 10c1949c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1949f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c194a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c194a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c194a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c194ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c194ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c194b1 pop esi */
  ESI = (pop32());
  /* 10c194b2 pop edi */
  EDI = (pop32());
  /* 10c194b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c194b4 ret  */
  ESPCHK(0x10c19180u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10c194c0 (104 bytes, 43 insns) */
void f_10c194c0(void) {
  FTRACE(0x10c194c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c194c0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c194c1 push esi */
  push32((uint32_t)(ESI));
  /* 10c194c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10c194c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c194c8 jne 0x10c194e2 */
  if (!C.zf) goto L_10c194e2;
  /* 10c194ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c194ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c194d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c194d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c194d6 mov ebx, eax */
  EBX = (EAX);
  /* 10c194d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c194dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c194de mov edx, ebx */
  EDX = (EBX);
  /* 10c194e0 jmp 0x10c19523 */
  goto L_10c19523;
L_10c194e2:;
  /* 10c194e2 mov ecx, eax */
  ECX = (EAX);
  /* 10c194e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c194e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c194ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10c194f0:;
  /* 10c194f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c194f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10c194f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c194f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10c194f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c194fa jne 0x10c194f0 */
  if (!C.zf) goto L_10c194f0;
  /* 10c194fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c194fe mov esi, eax */
  ESI = (EAX);
  /* 10c19500 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c19504 mov ecx, eax */
  ECX = (EAX);
  /* 10c19506 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c1950a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c1950c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1950e jb 0x10c1951e */
  if (C.cf) goto L_10c1951e;
  /* 10c19510 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19514 ja 0x10c1951e */
  if ((!C.cf&&!C.zf)) goto L_10c1951e;
  /* 10c19516 jb 0x10c1951f */
  if (C.cf) goto L_10c1951f;
  /* 10c19518 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1951c jbe 0x10c1951f */
  if ((C.cf||C.zf)) goto L_10c1951f;
L_10c1951e:;
  /* 10c1951e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10c1951f:;
  /* 10c1951f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c19521 mov eax, esi */
  EAX = (ESI);
L_10c19523:;
  /* 10c19523 pop esi */
  ESI = (pop32());
  /* 10c19524 pop ebx */
  EBX = (pop32());
  /* 10c19525 ret 0x10 */
  ESPCHK(0x10c194c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10c19530 (117 bytes, 44 insns) */
void f_10c19530(void) {
  FTRACE(0x10c19530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c19530 push ebx */
  push32((uint32_t)(EBX));
  /* 10c19531 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10c19535 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c19537 jne 0x10c19551 */
  if (!C.zf) goto L_10c19551;
  /* 10c19539 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c1953d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c19541 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c19543 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c19545 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c19549 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c1954b mov eax, edx */
  EAX = (EDX);
  /* 10c1954d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1954f jmp 0x10c195a1 */
  goto L_10c195a1;
L_10c19551:;
  /* 10c19551 mov ecx, eax */
  ECX = (EAX);
  /* 10c19553 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c19557 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c1955b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10c1955f:;
  /* 10c1955f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c19561 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10c19563 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c19565 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10c19567 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c19569 jne 0x10c1955f */
  if (!C.zf) goto L_10c1955f;
  /* 10c1956b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c1956d mov ecx, eax */
  ECX = (EAX);
  /* 10c1956f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c19573 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10c19574 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c19578 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1957a jb 0x10c1958a */
  if (C.cf) goto L_10c1958a;
  /* 10c1957c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19580 ja 0x10c1958a */
  if ((!C.cf&&!C.zf)) goto L_10c1958a;
  /* 10c19582 jb 0x10c19592 */
  if (C.cf) goto L_10c19592;
  /* 10c19584 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19588 jbe 0x10c19592 */
  if ((C.cf||C.zf)) goto L_10c19592;
L_10c1958a:;
  /* 10c1958a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1958e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c19592:;
  /* 10c19592 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19596 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1959a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1959c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1959e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c195a1:;
  /* 10c195a1 pop ebx */
  EBX = (pop32());
  /* 10c195a2 ret 0x10 */
  ESPCHK(0x10c19530u, _esp0);
  ESP += 20; return;
}

/* FUN_100095b0 @ 0x10c195b0 (628 bytes, 214 insns) */
void f_10c195b0(void) {
  FTRACE(0x10c195b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c195b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c195b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c195b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c195b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c195b7 push esi */
  push32((uint32_t)(ESI));
  /* 10c195b8 push edi */
  push32((uint32_t)(EDI));
L_10c195b9:;
  /* 10c195b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c195bd jne 0x10c195dd */
  if (!C.zf) goto L_10c195dd;
  /* 10c195bf push 0x10c39e80 */
  push32((uint32_t)(0x10c39e80u));
  /* 10c195c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c195c6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10c195c8 push 0x10c39e74 */
  push32((uint32_t)(0x10c39e74u));
  /* 10c195cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c195cf call 0x10c11960 */
  push32(0x10c195d4u); f_10c11960();
  /* 10c195d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c195d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c195da jne 0x10c195dd */
  if (!C.zf) goto L_10c195dd;
  /* 10c195dc int3  */
  x86_unimpl("int3 @ 0x10c195dc");
L_10c195dd:;
  /* 10c195dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c195df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c195e1 jne 0x10c195b9 */
  if (!C.zf) goto L_10c195b9;
  /* 10c195e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c195e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c195e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c195ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c195ef mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c195f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c195f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c195f8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10c195fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c19600 je 0x10c1960f */
  if (C.zf) goto L_10c1960f;
  /* 10c19602 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19605 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c19608 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1960b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1960d je 0x10c19625 */
  if (C.zf) goto L_10c19625;
L_10c1960f:;
  /* 10c1960f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19612 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c19615 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c19617 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1961a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10c1961d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c19620 jmp 0x10c1981d */
  goto L_10c1981d;
L_10c19625:;
  /* 10c19625 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19628 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c1962b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1962e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19630 je 0x10c1967c */
  if (C.zf) goto L_10c1967c;
  /* 10c19632 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19635 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c1963c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1963f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c19642 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10c19645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19647 je 0x10c19665 */
  if (C.zf) goto L_10c19665;
  /* 10c19649 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1964c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1964f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c19652 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c19654 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19657 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1965a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1965d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19660 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c19663 jmp 0x10c1967c */
  goto L_10c1967c;
L_10c19665:;
  /* 10c19665 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19668 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1966b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1966e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19671 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c19674 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c19677 jmp 0x10c1981d */
  goto L_10c1981d;
L_10c1967c:;
  /* 10c1967c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1967f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c19682 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c19685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19688 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c1968b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1968e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c19691 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10c19694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19697 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c1969a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1969d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c196a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c196ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c196ae mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c196b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c196b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c196b7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10c196bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c196bf jne 0x10c196ef */
  if (!C.zf) goto L_10c196ef;
  /* 10c196c1 cmp dword ptr [ebp - 8], 0x10c3d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10c3d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c196c8 je 0x10c196d3 */
  if (C.zf) goto L_10c196d3;
  /* 10c196ca cmp dword ptr [ebp - 8], 0x10c3d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10c3d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c196d1 jne 0x10c196e3 */
  if (!C.zf) goto L_10c196e3;
L_10c196d3:;
  /* 10c196d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c196d6 push edx */
  push32((uint32_t)(EDX));
  /* 10c196d7 call 0x10c1b520 */
  push32(0x10c196dcu); f_10c1b520();
  /* 10c196dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c196df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c196e1 jne 0x10c196ef */
  if (!C.zf) goto L_10c196ef;
L_10c196e3:;
  /* 10c196e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c196e6 push eax */
  push32((uint32_t)(EAX));
  /* 10c196e7 call 0x10c1b450 */
  push32(0x10c196ecu); f_10c1b450();
  /* 10c196ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c196ef:;
  /* 10c196ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c196f2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c196f5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10c196fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c196fd je 0x10c197db */
  if (C.zf) goto L_10c197db;
L_10c19703:;
  /* 10c19703 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19706 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19709 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10c1970b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1970e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c19710 jge 0x10c19733 */
  if ((C.sf==C.of)) goto L_10c19733;
  /* 10c19712 push 0x10c39e34 */
  push32((uint32_t)(0x10c39e34u));
  /* 10c19717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c19719 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10c1971e push 0x10c39e74 */
  push32((uint32_t)(0x10c39e74u));
  /* 10c19723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c19725 call 0x10c11960 */
  push32(0x10c1972au); f_10c11960();
  /* 10c1972a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1972d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19730 jne 0x10c19733 */
  if (!C.zf) goto L_10c19733;
  /* 10c19732 int3  */
  x86_unimpl("int3 @ 0x10c19732");
L_10c19733:;
  /* 10c19733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c19735 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19737 jne 0x10c19703 */
  if (!C.zf) goto L_10c19703;
  /* 10c19739 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1973c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1973f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c19741 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19744 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c19747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1974a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c1974d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19750 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19753 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c19755 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19758 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c1975b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1975e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19761 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c19764 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19768 jle 0x10c19786 */
  if ((C.zf||C.sf!=C.of)) goto L_10c19786;
  /* 10c1976a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1976d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1976e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19771 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c19774 push eax */
  push32((uint32_t)(EAX));
  /* 10c19775 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c19778 push ecx */
  push32((uint32_t)(ECX));
  /* 10c19779 call 0x10c1b140 */
  push32(0x10c1977eu); f_10c1b140();
  /* 10c1977e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19781 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c19784 jmp 0x10c197ce */
  goto L_10c197ce;
L_10c19786:;
  /* 10c19786 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1978a je 0x10c197a9 */
  if (C.zf) goto L_10c197a9;
  /* 10c1978c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1978f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c19792 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c19795 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c19798 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1979b mov ecx, dword ptr [edx*4 + 0x10c3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c197a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c197a4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c197a7 jmp 0x10c197b0 */
  goto L_10c197b0;
L_10c197a9:;
  /* 10c197a9 mov dword ptr [ebp - 0x14], 0x10c3ca60 */
  w32((uint32_t)(EBP + -0x14), (0x10c3ca60u));
L_10c197b0:;
  /* 10c197b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c197b3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10c197b7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c197ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c197bc je 0x10c197ce */
  if (C.zf) goto L_10c197ce;
  /* 10c197be push 2 */
  push32((uint32_t)(0x2u));
  /* 10c197c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c197c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c197c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c197c6 call 0x10c1aff0 */
  push32(0x10c197cbu); f_10c1aff0();
  /* 10c197cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c197ce:;
  /* 10c197ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c197d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c197d4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c197d7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c197d9 jmp 0x10c197f9 */
  goto L_10c197f9;
L_10c197db:;
  /* 10c197db mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c197e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c197e5 push edx */
  push32((uint32_t)(EDX));
  /* 10c197e6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10c197e9 push eax */
  push32((uint32_t)(EAX));
  /* 10c197ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c197ed push ecx */
  push32((uint32_t)(ECX));
  /* 10c197ee call 0x10c1b140 */
  push32(0x10c197f3u); f_10c1b140();
  /* 10c197f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c197f6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c197f9:;
  /* 10c197f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c197fc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c197ff je 0x10c19815 */
  if (C.zf) goto L_10c19815;
  /* 10c19801 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19804 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c19807 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1980a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1980d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c19810 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c19813 jmp 0x10c1981d */
  goto L_10c1981d;
L_10c19815:;
  /* 10c19815 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c19818 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10c1981d:;
  /* 10c1981d pop edi */
  EDI = (pop32());
  /* 10c1981e pop esi */
  ESI = (pop32());
  /* 10c1981f pop ebx */
  EBX = (pop32());
  /* 10c19820 mov esp, ebp */
  ESP = (EBP);
  /* 10c19822 pop ebp */
  EBP = (pop32());
  /* 10c19823 ret  */
  ESPCHK(0x10c195b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009830 @ 0x10c19830 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10c19830(void) {
  FTRACE(0x10c19830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c19830 push ebp */
  push32((uint32_t)(EBP));
  /* 10c19831 mov ebp, esp */
  EBP = (ESP);
  /* 10c19833 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19839 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1983a push esi */
  push32((uint32_t)(ESI));
  /* 10c1983b push edi */
  push32((uint32_t)(EDI));
  /* 10c1983c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c19843 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10c1984d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10c19854:;
  /* 10c19854 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19857 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c19859 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10c1985c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19860 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19863 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19866 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c19869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1986b je 0x10c1a447 */
  if (C.zf) goto L_10c1a447;
  /* 10c19871 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19878 jl 0x10c1a447 */
  if ((C.sf!=C.of)) goto L_10c1a447;
  /* 10c1987e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19882 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19885 jl 0x10c198a6 */
  if ((C.sf!=C.of)) goto L_10c198a6;
  /* 10c19887 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c1988b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1988e jg 0x10c198a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c198a6;
  /* 10c19890 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19894 movsx ecx, byte ptr [eax + 0x10c39e6c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10c39e6c))));
  /* 10c1989b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1989e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10c198a4 jmp 0x10c198b0 */
  goto L_10c198b0;
L_10c198a6:;
  /* 10c198a6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10c198b0:;
  /* 10c198b0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10c198b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c198b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c198bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c198bf movsx edx, byte ptr [ecx + eax*8 + 0x10c39e8c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10c39e8c))));
  /* 10c198c7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10c198ca mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c198cd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c198d0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10c198d6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c198dd ja 0x10c1a442 */
  if ((!C.cf&&!C.zf)) goto L_10c1a442;
  /* 10c198e3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10c198e9 jmp dword ptr [ecx*4 + 0x10c1a454] */
  switch (ECX) {
    case 0: goto L_10c198f0;
    case 1: goto L_10c1998a;
    case 2: goto L_10c199cc;
    case 3: goto L_10c19a3b;
    case 4: goto L_10c19a93;
    case 5: goto L_10c19aa2;
    case 6: goto L_10c19aee;
    case 7: goto L_10c19b81;
    case 8: goto L_10c19a18;
    case 9: goto L_10c19a23;
    case 10: goto L_10c19a0e;
    case 11: goto L_10c19a03;
    case 12: goto L_10c19a2e;
    case 13: goto L_10c19a36;
    default: x86_unimpl("switch@0x10c198e9 out of table"); return;
  }
L_10c198f0:;
  /* 10c198f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c198f7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c198fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c19900 mov eax, dword ptr [0x10c3cc98] */
  EAX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c19905 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c19907 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c1990b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c19911 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c19913 je 0x10c1996d */
  if (C.zf) goto L_10c1996d;
  /* 10c19915 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10c1991b push edx */
  push32((uint32_t)(EDX));
  /* 10c1991c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1991f push eax */
  push32((uint32_t)(EAX));
  /* 10c19920 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19924 push ecx */
  push32((uint32_t)(ECX));
  /* 10c19925 call 0x10c1a560 */
  push32(0x10c1992au); f_10c1a560();
  /* 10c1992a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1992d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19930 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c19932 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10c19935 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19938 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1993b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c1993e:;
  /* 10c1993e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19942 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c19944 jne 0x10c19967 */
  if (!C.zf) goto L_10c19967;
  /* 10c19946 push 0x10c39f0c */
  push32((uint32_t)(0x10c39f0cu));
  /* 10c1994b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1994d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10c19952 push 0x10c39f00 */
  push32((uint32_t)(0x10c39f00u));
  /* 10c19957 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c19959 call 0x10c11960 */
  push32(0x10c1995eu); f_10c11960();
  /* 10c1995e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19961 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19964 jne 0x10c19967 */
  if (!C.zf) goto L_10c19967;
  /* 10c19966 int3  */
  x86_unimpl("int3 @ 0x10c19966");
L_10c19967:;
  /* 10c19967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c19969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1996b jne 0x10c1993e */
  if (!C.zf) goto L_10c1993e;
L_10c1996d:;
  /* 10c1996d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10c19973 push ecx */
  push32((uint32_t)(ECX));
  /* 10c19974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c19977 push edx */
  push32((uint32_t)(EDX));
  /* 10c19978 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c1997c push eax */
  push32((uint32_t)(EAX));
  /* 10c1997d call 0x10c1a560 */
  push32(0x10c19982u); f_10c1a560();
  /* 10c19982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19985 jmp 0x10c1a442 */
  goto L_10c1a442;
L_10c1998a:;
  /* 10c1998a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c19991 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19994 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10c1999a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10c199a0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10c199a6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c199ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c199af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c199b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10c199c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c199c7 jmp 0x10c1a442 */
  goto L_10c1a442;
L_10c199cc:;
  /* 10c199cc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c199d0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10c199d6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10c199dc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c199df mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10c199e5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c199ec ja 0x10c19a36 */
  if ((!C.cf&&!C.zf)) goto L_10c19a36;
  /* 10c199ee mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10c199f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c199f6 mov al, byte ptr [ecx + 0x10c1a48c] */
  AL = (r8((uint32_t)(ECX + 0x10c1a48c)));
  /* 10c199fc jmp dword ptr [eax*4 + 0x10c1a474] */
  switch (EAX) {
    case 0: goto L_10c19a18;
    case 1: goto L_10c19a23;
    case 2: goto L_10c19a0e;
    case 3: goto L_10c19a03;
    case 4: goto L_10c19a2e;
    case 5: goto L_10c19a36;
    default: x86_unimpl("switch@0x10c199fc out of table"); return;
  }
L_10c19a03:;
  /* 10c19a03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19a06 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c19a09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c19a0c jmp 0x10c19a36 */
  goto L_10c19a36;
L_10c19a0e:;
  /* 10c19a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19a11 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10c19a13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c19a16 jmp 0x10c19a36 */
  goto L_10c19a36;
L_10c19a18:;
  /* 10c19a18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19a1b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c19a1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c19a21 jmp 0x10c19a36 */
  goto L_10c19a36;
L_10c19a23:;
  /* 10c19a23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19a26 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10c19a29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c19a2c jmp 0x10c19a36 */
  goto L_10c19a36;
L_10c19a2e:;
  /* 10c19a2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19a31 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10c19a33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c19a36:;
  /* 10c19a36 jmp 0x10c1a442 */
  goto L_10c1a442;
L_10c19a3b:;
  /* 10c19a3b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19a3f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19a42 jne 0x10c19a77 */
  if (!C.zf) goto L_10c19a77;
  /* 10c19a44 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c19a47 push edx */
  push32((uint32_t)(EDX));
  /* 10c19a48 call 0x10c1a670 */
  push32(0x10c19a4du); f_10c1a670();
  /* 10c19a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19a50 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10c19a56 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19a5d jge 0x10c19a75 */
  if ((C.sf==C.of)) goto L_10c19a75;
  /* 10c19a5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19a62 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c19a64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c19a67 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c19a6d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c19a6f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10c19a75:;
  /* 10c19a75 jmp 0x10c19a8e */
  goto L_10c19a8e;
L_10c19a77:;
  /* 10c19a77 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c19a7d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c19a80 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19a84 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10c19a88 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10c19a8e:;
  /* 10c19a8e jmp 0x10c1a442 */
  goto L_10c1a442;
L_10c19a93:;
  /* 10c19a93 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10c19a9d jmp 0x10c1a442 */
  goto L_10c1a442;
L_10c19aa2:;
  /* 10c19aa2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19aa6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19aa9 jne 0x10c19ad2 */
  if (!C.zf) goto L_10c19ad2;
  /* 10c19aab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c19aae push eax */
  push32((uint32_t)(EAX));
  /* 10c19aaf call 0x10c1a670 */
  push32(0x10c19ab4u); f_10c1a670();
  /* 10c19ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19ab7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10c19abd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19ac4 jge 0x10c19ad0 */
  if ((C.sf==C.of)) goto L_10c19ad0;
  /* 10c19ac6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10c19ad0:;
  /* 10c19ad0 jmp 0x10c19ae9 */
  goto L_10c19ae9;
L_10c19ad2:;
  /* 10c19ad2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c19ad8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c19adb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19adf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c19ae3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10c19ae9:;
  /* 10c19ae9 jmp 0x10c1a442 */
  goto L_10c1a442;
L_10c19aee:;
  /* 10c19aee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19af2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10c19af8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10c19afe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19b01 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10c19b07 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19b0e ja 0x10c19b7c */
  if ((!C.cf&&!C.zf)) goto L_10c19b7c;
  /* 10c19b10 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10c19b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c19b18 mov al, byte ptr [ecx + 0x10c1a4b1] */
  AL = (r8((uint32_t)(ECX + 0x10c1a4b1)));
  /* 10c19b1e jmp dword ptr [eax*4 + 0x10c1a49d] */
  switch (EAX) {
    case 0: goto L_10c19b30;
    case 1: goto L_10c19b69;
    case 2: goto L_10c19b25;
    case 3: goto L_10c19b73;
    case 4: goto L_10c19b7c;
    default: x86_unimpl("switch@0x10c19b1e out of table"); return;
  }
L_10c19b25:;
  /* 10c19b25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19b28 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10c19b2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c19b2e jmp 0x10c19b7c */
  goto L_10c19b7c;
L_10c19b30:;
  /* 10c19b30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19b33 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c19b36 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19b39 jne 0x10c19b5b */
  if (!C.zf) goto L_10c19b5b;
  /* 10c19b3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19b3e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c19b42 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19b45 jne 0x10c19b5b */
  if (!C.zf) goto L_10c19b5b;
  /* 10c19b47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c19b4a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19b4d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c19b50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19b53 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c19b56 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c19b59 jmp 0x10c19b67 */
  goto L_10c19b67;
L_10c19b5b:;
  /* 10c19b5b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10c19b62 jmp 0x10c198f0 */
  goto L_10c198f0;
L_10c19b67:;
  /* 10c19b67 jmp 0x10c19b7c */
  goto L_10c19b7c;
L_10c19b69:;
  /* 10c19b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19b6c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10c19b6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c19b71 jmp 0x10c19b7c */
  goto L_10c19b7c;
L_10c19b73:;
  /* 10c19b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19b76 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c19b79 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c19b7c:;
  /* 10c19b7c jmp 0x10c1a442 */
  goto L_10c1a442;
L_10c19b81:;
  /* 10c19b81 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19b85 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10c19b8b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10c19b91 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19b94 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10c19b9a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19ba1 ja 0x10c1a267 */
  if ((!C.cf&&!C.zf)) goto L_10c1a267;
  /* 10c19ba7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10c19bad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c19baf mov cl, byte ptr [edx + 0x10c1a51c] */
  CL = (r8((uint32_t)(EDX + 0x10c1a51c)));
  /* 10c19bb5 jmp dword ptr [ecx*4 + 0x10c1a4e0] */
  switch (ECX) {
    case 0: goto L_10c19bbc;
    case 1: goto L_10c19e50;
    case 2: goto L_10c19ce0;
    case 3: goto L_10c19f89;
    case 4: goto L_10c19c4b;
    case 5: goto L_10c19bd1;
    case 6: goto L_10c19f5b;
    case 7: goto L_10c19e60;
    case 8: goto L_10c19e05;
    case 9: goto L_10c19fd5;
    case 10: goto L_10c19f7f;
    case 11: goto L_10c19cf6;
    case 12: goto L_10c19f73;
    case 13: goto L_10c19f95;
    case 14: goto L_10c1a267;
    default: x86_unimpl("switch@0x10c19bb5 out of table"); return;
  }
L_10c19bbc:;
  /* 10c19bbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19bbf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10c19bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19bc6 jne 0x10c19bd1 */
  if (!C.zf) goto L_10c19bd1;
  /* 10c19bc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19bcb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c19bce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c19bd1:;
  /* 10c19bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19bd4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10c19bda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c19bdc je 0x10c19c17 */
  if (C.zf) goto L_10c19c17;
  /* 10c19bde lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c19be1 push eax */
  push32((uint32_t)(EAX));
  /* 10c19be2 call 0x10c1a6b0 */
  push32(0x10c19be7u); f_10c1a6b0();
  /* 10c19be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19bea mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10c19bee mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10c19bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c19bf3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10c19bf9 push edx */
  push32((uint32_t)(EDX));
  /* 10c19bfa call 0x10c1b790 */
  push32(0x10c19bffu); f_10c1b790();
  /* 10c19bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19c02 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c19c05 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19c09 jge 0x10c19c15 */
  if ((C.sf==C.of)) goto L_10c19c15;
  /* 10c19c0b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10c19c15:;
  /* 10c19c15 jmp 0x10c19c3d */
  goto L_10c19c3d;
L_10c19c17:;
  /* 10c19c17 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c19c1a push eax */
  push32((uint32_t)(EAX));
  /* 10c19c1b call 0x10c1a670 */
  push32(0x10c19c20u); f_10c1a670();
  /* 10c19c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19c23 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10c19c2a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10c19c30 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10c19c36 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10c19c3d:;
  /* 10c19c3d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10c19c43 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c19c46 jmp 0x10c1a267 */
  goto L_10c1a267;
L_10c19c4b:;
  /* 10c19c4b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c19c4e push eax */
  push32((uint32_t)(EAX));
  /* 10c19c4f call 0x10c1a670 */
  push32(0x10c19c54u); f_10c1a670();
  /* 10c19c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19c57 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10c19c5d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19c64 je 0x10c19c72 */
  if (C.zf) goto L_10c19c72;
  /* 10c19c66 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c19c6c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19c70 jne 0x10c19c8c */
  if (!C.zf) goto L_10c19c8c;
L_10c19c72:;
  /* 10c19c72 mov edx, dword ptr [0x10c3cfb0] */
  EDX = (r32((uint32_t)(0x10c3cfb0)));
  /* 10c19c78 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c19c7b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19c7e push eax */
  push32((uint32_t)(EAX));
  /* 10c19c7f call 0x10c156d0 */
  push32(0x10c19c84u); f_10c156d0();
  /* 10c19c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19c87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c19c8a jmp 0x10c19cdb */
  goto L_10c19cdb;
L_10c19c8c:;
  /* 10c19c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19c8f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10c19c95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c19c97 je 0x10c19cbc */
  if (C.zf) goto L_10c19cbc;
  /* 10c19c99 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c19c9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c19ca2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c19ca5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c19cab movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10c19cae shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c19cb0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c19cb3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10c19cba jmp 0x10c19cdb */
  goto L_10c19cdb;
L_10c19cbc:;
  /* 10c19cbc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10c19cc3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c19cc9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c19ccc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c19ccf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10c19cd5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10c19cd8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c19cdb:;
  /* 10c19cdb jmp 0x10c1a267 */
  goto L_10c1a267;
L_10c19ce0:;
  /* 10c19ce0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19ce3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10c19ce9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c19ceb jne 0x10c19cf6 */
  if (!C.zf) goto L_10c19cf6;
  /* 10c19ced mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19cf0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c19cf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c19cf6:;
  /* 10c19cf6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19cfd jne 0x10c19d0b */
  if (!C.zf) goto L_10c19d0b;
  /* 10c19cff mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10c19d09 jmp 0x10c19d17 */
  goto L_10c19d17;
L_10c19d0b:;
  /* 10c19d0b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c19d11 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10c19d17:;
  /* 10c19d17 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10c19d1d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10c19d23 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c19d26 push edx */
  push32((uint32_t)(EDX));
  /* 10c19d27 call 0x10c1a670 */
  push32(0x10c19d2cu); f_10c1a670();
  /* 10c19d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19d2f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c19d32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19d35 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10c19d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19d3c je 0x10c19da6 */
  if (C.zf) goto L_10c19da6;
  /* 10c19d3e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19d42 jne 0x10c19d4d */
  if (!C.zf) goto L_10c19d4d;
  /* 10c19d44 mov ecx, dword ptr [0x10c3cfb4] */
  ECX = (r32((uint32_t)(0x10c3cfb4)));
  /* 10c19d4a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c19d4d:;
  /* 10c19d4d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10c19d54 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19d57 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10c19d5d:;
  /* 10c19d5d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c19d63 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c19d69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19d6c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10c19d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19d74 je 0x10c19d96 */
  if (C.zf) goto L_10c19d96;
  /* 10c19d76 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c19d7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c19d7e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10c19d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19d83 je 0x10c19d96 */
  if (C.zf) goto L_10c19d96;
  /* 10c19d85 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c19d8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19d8e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10c19d94 jmp 0x10c19d5d */
  goto L_10c19d5d;
L_10c19d96:;
  /* 10c19d96 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10c19d9c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19d9f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c19da1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10c19da4 jmp 0x10c19e00 */
  goto L_10c19e00;
L_10c19da6:;
  /* 10c19da6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19daa jne 0x10c19db4 */
  if (!C.zf) goto L_10c19db4;
  /* 10c19dac mov eax, dword ptr [0x10c3cfb0] */
  EAX = (r32((uint32_t)(0x10c3cfb0)));
  /* 10c19db1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10c19db4:;
  /* 10c19db4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19db7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10c19dbd:;
  /* 10c19dbd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c19dc3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10c19dc9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19dcc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10c19dd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c19dd4 je 0x10c19df4 */
  if (C.zf) goto L_10c19df4;
  /* 10c19dd6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c19ddc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c19ddf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c19de1 je 0x10c19df4 */
  if (C.zf) goto L_10c19df4;
  /* 10c19de3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c19de9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19dec mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10c19df2 jmp 0x10c19dbd */
  goto L_10c19dbd;
L_10c19df4:;
  /* 10c19df4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10c19dfa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19dfd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10c19e00:;
  /* 10c19e00 jmp 0x10c1a267 */
  goto L_10c1a267;
L_10c19e05:;
  /* 10c19e05 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c19e08 push edx */
  push32((uint32_t)(EDX));
  /* 10c19e09 call 0x10c1a670 */
  push32(0x10c19e0eu); f_10c1a670();
  /* 10c19e0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19e11 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10c19e17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19e1a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c19e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19e1f je 0x10c19e33 */
  if (C.zf) goto L_10c19e33;
  /* 10c19e21 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10c19e27 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10c19e2e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10c19e31 jmp 0x10c19e41 */
  goto L_10c19e41;
L_10c19e33:;
  /* 10c19e33 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10c19e39 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10c19e3f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10c19e41:;
  /* 10c19e41 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10c19e4b jmp 0x10c1a267 */
  goto L_10c1a267;
L_10c19e50:;
  /* 10c19e50 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c19e57 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10c19e5a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c19e5d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10c19e60:;
  /* 10c19e60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19e63 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10c19e65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c19e68 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10c19e6e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c19e71 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19e78 jge 0x10c19e86 */
  if ((C.sf==C.of)) goto L_10c19e86;
  /* 10c19e7a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10c19e84 jmp 0x10c19ea2 */
  goto L_10c19ea2;
L_10c19e86:;
  /* 10c19e86 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19e8d jne 0x10c19ea2 */
  if (!C.zf) goto L_10c19ea2;
  /* 10c19e8f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19e93 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19e96 jne 0x10c19ea2 */
  if (!C.zf) goto L_10c19ea2;
  /* 10c19e98 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10c19ea2:;
  /* 10c19ea2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c19ea5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19ea8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10c19eab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c19eae sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c19eb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c19eb3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c19eb6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10c19ebc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10c19ec2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c19ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c19ec6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c19ecc push edx */
  push32((uint32_t)(EDX));
  /* 10c19ecd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19ed1 push eax */
  push32((uint32_t)(EAX));
  /* 10c19ed2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c19ed6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10c19edc push edx */
  push32((uint32_t)(EDX));
  /* 10c19edd call dword ptr [0x10c3d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3d3a0))), 0x10c19ee3u);
  /* 10c19ee3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19ee9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c19eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19ef0 je 0x10c19f08 */
  if (C.zf) goto L_10c19f08;
  /* 10c19ef2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19ef9 jne 0x10c19f08 */
  if (!C.zf) goto L_10c19f08;
  /* 10c19efb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19efe push ecx */
  push32((uint32_t)(ECX));
  /* 10c19eff call dword ptr [0x10c3d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3d3ac))), 0x10c19f05u);
  /* 10c19f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c19f08:;
  /* 10c19f08 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10c19f0c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19f0f jne 0x10c19f2a */
  if (!C.zf) goto L_10c19f2a;
  /* 10c19f11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19f14 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c19f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19f1b jne 0x10c19f2a */
  if (!C.zf) goto L_10c19f2a;
  /* 10c19f1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10c19f21 call dword ptr [0x10c3d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3d3a4))), 0x10c19f27u);
  /* 10c19f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c19f2a:;
  /* 10c19f2a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19f2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c19f30 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c19f33 jne 0x10c19f47 */
  if (!C.zf) goto L_10c19f47;
  /* 10c19f35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19f38 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c19f3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c19f3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19f41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19f44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c19f47:;
  /* 10c19f47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c19f4a push eax */
  push32((uint32_t)(EAX));
  /* 10c19f4b call 0x10c156d0 */
  push32(0x10c19f50u); f_10c156d0();
  /* 10c19f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19f53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c19f56 jmp 0x10c1a267 */
  goto L_10c1a267;
L_10c19f5b:;
  /* 10c19f5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19f5e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10c19f61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c19f64 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10c19f6e jmp 0x10c19ff5 */
  goto L_10c19ff5;
L_10c19f73:;
  /* 10c19f73 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10c19f7d jmp 0x10c19ff5 */
  goto L_10c19ff5;
L_10c19f7f:;
  /* 10c19f7f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10c19f89:;
  /* 10c19f89 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10c19f93 jmp 0x10c19f9f */
  goto L_10c19f9f;
L_10c19f95:;
  /* 10c19f95 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10c19f9f:;
  /* 10c19f9f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10c19fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19fac and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10c19fb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c19fb4 je 0x10c19fd3 */
  if (C.zf) goto L_10c19fd3;
  /* 10c19fb6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10c19fbd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10c19fc3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c19fc6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10c19fcc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10c19fd3:;
  /* 10c19fd3 jmp 0x10c19ff5 */
  goto L_10c19ff5;
L_10c19fd5:;
  /* 10c19fd5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10c19fdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19fe2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10c19fe8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c19fea je 0x10c19ff5 */
  if (C.zf) goto L_10c19ff5;
  /* 10c19fec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19fef or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c19ff2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c19ff5:;
  /* 10c19ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c19ff8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c19ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c19fff je 0x10c1a01e */
  if (C.zf) goto L_10c1a01e;
  /* 10c1a001 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c1a004 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a005 call 0x10c1a690 */
  push32(0x10c1a00au); f_10c1a690();
  /* 10c1a00a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a00d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c1a013 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c1a019 jmp 0x10c1a0af */
  goto L_10c1a0af;
L_10c1a01e:;
  /* 10c1a01e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a021 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a024 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a026 je 0x10c1a070 */
  if (C.zf) goto L_10c1a070;
  /* 10c1a028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a02b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a02e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a030 je 0x10c1a050 */
  if (C.zf) goto L_10c1a050;
  /* 10c1a032 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c1a035 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a036 call 0x10c1a670 */
  push32(0x10c1a03bu); f_10c1a670();
  /* 10c1a03b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a03e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10c1a041 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1a042 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c1a048 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c1a04e jmp 0x10c1a06e */
  goto L_10c1a06e;
L_10c1a050:;
  /* 10c1a050 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c1a053 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a054 call 0x10c1a670 */
  push32(0x10c1a059u); f_10c1a670();
  /* 10c1a059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a05c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a061 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1a062 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c1a068 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10c1a06e:;
  /* 10c1a06e jmp 0x10c1a0af */
  goto L_10c1a0af;
L_10c1a070:;
  /* 10c1a070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a073 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a078 je 0x10c1a095 */
  if (C.zf) goto L_10c1a095;
  /* 10c1a07a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10c1a07d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a07e call 0x10c1a670 */
  push32(0x10c1a083u); f_10c1a670();
  /* 10c1a083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a086 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1a087 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c1a08d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10c1a093 jmp 0x10c1a0af */
  goto L_10c1a0af;
L_10c1a095:;
  /* 10c1a095 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10c1a098 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a099 call 0x10c1a670 */
  push32(0x10c1a09eu); f_10c1a670();
  /* 10c1a09e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a0a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1a0a3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10c1a0a9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10c1a0af:;
  /* 10c1a0af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a0b2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a0b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a0b7 je 0x10c1a0f7 */
  if (C.zf) goto L_10c1a0f7;
  /* 10c1a0b9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a0c0 jg 0x10c1a0f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1a0f7;
  /* 10c1a0c2 jl 0x10c1a0cd */
  if ((C.sf!=C.of)) goto L_10c1a0cd;
  /* 10c1a0c4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a0cb jae 0x10c1a0f7 */
  if (!C.cf) goto L_10c1a0f7;
L_10c1a0cd:;
  /* 10c1a0cd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10c1a0d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1a0d5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10c1a0db adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a0de neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1a0e0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c1a0e6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10c1a0ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a0ef or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c1a0f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1a0f5 jmp 0x10c1a10f */
  goto L_10c1a10f;
L_10c1a0f7:;
  /* 10c1a0f7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10c1a0fd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c1a103 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10c1a109 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10c1a10f:;
  /* 10c1a10f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a112 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a11a jne 0x10c1a137 */
  if (!C.zf) goto L_10c1a137;
  /* 10c1a11c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c1a122 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c1a128 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1a12b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c1a131 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10c1a137:;
  /* 10c1a137 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a13e jge 0x10c1a14c */
  if ((C.sf==C.of)) goto L_10c1a14c;
  /* 10c1a140 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10c1a14a jmp 0x10c1a155 */
  goto L_10c1a155;
L_10c1a14c:;
  /* 10c1a14c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a14f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a152 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c1a155:;
  /* 10c1a155 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c1a15b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a163 jne 0x10c1a16c */
  if (!C.zf) goto L_10c1a16c;
  /* 10c1a165 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c1a16c:;
  /* 10c1a16c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10c1a16f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c1a172:;
  /* 10c1a172 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c1a178 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10c1a17e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a181 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10c1a187 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a189 jg 0x10c1a19f */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1a19f;
  /* 10c1a18b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c1a191 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10c1a197 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1a199 je 0x10c1a220 */
  if (C.zf) goto L_10c1a220;
L_10c1a19f:;
  /* 10c1a19f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10c1a1a5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1a1a6 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a1a7 push eax */
  push32((uint32_t)(EAX));
  /* 10c1a1a8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c1a1ae push edx */
  push32((uint32_t)(EDX));
  /* 10c1a1af mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c1a1b5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1a1b6 call 0x10c19530 */
  push32(0x10c1a1bbu); f_10c19530();
  /* 10c1a1bb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a1be mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10c1a1c4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10c1a1ca cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1a1cb push edx */
  push32((uint32_t)(EDX));
  /* 10c1a1cc push eax */
  push32((uint32_t)(EAX));
  /* 10c1a1cd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10c1a1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a1d4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10c1a1da push edx */
  push32((uint32_t)(EDX));
  /* 10c1a1db call 0x10c194c0 */
  push32(0x10c1a1e0u); f_10c194c0();
  /* 10c1a1e0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10c1a1e6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10c1a1ec cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a1f3 jle 0x10c1a207 */
  if ((C.zf||C.sf!=C.of)) goto L_10c1a207;
  /* 10c1a1f5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10c1a1fb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a201 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10c1a207:;
  /* 10c1a207 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a20a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10c1a210 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10c1a212 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a215 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a218 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c1a21b jmp 0x10c1a172 */
  goto L_10c1a172;
L_10c1a220:;
  /* 10c1a220 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10c1a223 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a226 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c1a229 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a22c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a22f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c1a232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a235 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a23a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a23c je 0x10c1a267 */
  if (C.zf) goto L_10c1a267;
  /* 10c1a23e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a241 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1a244 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a247 jne 0x10c1a24f */
  if (!C.zf) goto L_10c1a24f;
  /* 10c1a249 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a24d jne 0x10c1a267 */
  if (!C.zf) goto L_10c1a267;
L_10c1a24f:;
  /* 10c1a24f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a252 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a255 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c1a258 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a25b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10c1a25e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1a261 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a264 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10c1a267:;
  /* 10c1a267 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a26e jne 0x10c1a442 */
  if (!C.zf) goto L_10c1a442;
  /* 10c1a274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a277 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a27c je 0x10c1a2cd */
  if (C.zf) goto L_10c1a2cd;
  /* 10c1a27e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a281 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1a287 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1a289 je 0x10c1a29b */
  if (C.zf) goto L_10c1a29b;
  /* 10c1a28b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10c1a292 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c1a299 jmp 0x10c1a2cd */
  goto L_10c1a2cd;
L_10c1a29b:;
  /* 10c1a29b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a29e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a2a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a2a3 je 0x10c1a2b5 */
  if (C.zf) goto L_10c1a2b5;
  /* 10c1a2a5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10c1a2ac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c1a2b3 jmp 0x10c1a2cd */
  goto L_10c1a2cd;
L_10c1a2b5:;
  /* 10c1a2b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a2b8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a2bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a2bd je 0x10c1a2cd */
  if (C.zf) goto L_10c1a2cd;
  /* 10c1a2bf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10c1a2c6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10c1a2cd:;
  /* 10c1a2cd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10c1a2d3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a2d6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a2d9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10c1a2df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a2e2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a2e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a2e7 jne 0x10c1a305 */
  if (!C.zf) goto L_10c1a305;
  /* 10c1a2e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c1a2ef push eax */
  push32((uint32_t)(EAX));
  /* 10c1a2f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a2f4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c1a2fa push edx */
  push32((uint32_t)(EDX));
  /* 10c1a2fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c1a2fd call 0x10c1a5e0 */
  push32(0x10c1a302u); f_10c1a5e0();
  /* 10c1a302 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1a305:;
  /* 10c1a305 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c1a30b push eax */
  push32((uint32_t)(EAX));
  /* 10c1a30c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a30f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a310 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1a313 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a314 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10c1a31a push eax */
  push32((uint32_t)(EAX));
  /* 10c1a31b call 0x10c1a620 */
  push32(0x10c1a320u); f_10c1a620();
  /* 10c1a320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a326 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1a329 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1a32b je 0x10c1a353 */
  if (C.zf) goto L_10c1a353;
  /* 10c1a32d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a330 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a333 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a335 jne 0x10c1a353 */
  if (!C.zf) goto L_10c1a353;
  /* 10c1a337 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c1a33d push eax */
  push32((uint32_t)(EAX));
  /* 10c1a33e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a341 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a342 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c1a348 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a349 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c1a34b call 0x10c1a5e0 */
  push32(0x10c1a350u); f_10c1a5e0();
  /* 10c1a350 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1a353:;
  /* 10c1a353 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a357 je 0x10c1a401 */
  if (C.zf) goto L_10c1a401;
  /* 10c1a35d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a361 jle 0x10c1a401 */
  if ((C.zf||C.sf!=C.of)) goto L_10c1a401;
  /* 10c1a367 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a36a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10c1a370 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1a373 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10c1a379:;
  /* 10c1a379 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10c1a37f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10c1a385 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a388 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10c1a38e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a390 je 0x10c1a3ff */
  if (C.zf) goto L_10c1a3ff;
  /* 10c1a392 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10c1a398 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c1a39b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10c1a3a2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10c1a3a9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1a3aa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10c1a3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a3b1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10c1a3b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a3ba mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10c1a3c0 call 0x10c1b790 */
  push32(0x10c1a3c5u); f_10c1b790();
  /* 10c1a3c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a3c8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10c1a3ce cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a3d5 jg 0x10c1a3d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1a3d9;
  /* 10c1a3d7 jmp 0x10c1a3ff */
  goto L_10c1a3ff;
L_10c1a3d9:;
  /* 10c1a3d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c1a3df push eax */
  push32((uint32_t)(EAX));
  /* 10c1a3e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a3e4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10c1a3ea push edx */
  push32((uint32_t)(EDX));
  /* 10c1a3eb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10c1a3f1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1a3f2 call 0x10c1a620 */
  push32(0x10c1a3f7u); f_10c1a620();
  /* 10c1a3f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a3fa jmp 0x10c1a379 */
  goto L_10c1a379;
L_10c1a3ff:;
  /* 10c1a3ff jmp 0x10c1a41c */
  goto L_10c1a41c;
L_10c1a401:;
  /* 10c1a401 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10c1a407 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a40b push edx */
  push32((uint32_t)(EDX));
  /* 10c1a40c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1a40f push eax */
  push32((uint32_t)(EAX));
  /* 10c1a410 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1a413 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a414 call 0x10c1a620 */
  push32(0x10c1a419u); f_10c1a620();
  /* 10c1a419 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1a41c:;
  /* 10c1a41c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a41f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a422 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1a424 je 0x10c1a442 */
  if (C.zf) goto L_10c1a442;
  /* 10c1a426 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10c1a42c push eax */
  push32((uint32_t)(EAX));
  /* 10c1a42d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a430 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a431 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10c1a437 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a438 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c1a43a call 0x10c1a5e0 */
  push32(0x10c1a43fu); f_10c1a5e0();
  /* 10c1a43f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1a442:;
  /* 10c1a442 jmp 0x10c19854 */
  goto L_10c19854;
L_10c1a447:;
  /* 10c1a447 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10c1a44d pop edi */
  EDI = (pop32());
  /* 10c1a44e pop esi */
  ESI = (pop32());
  /* 10c1a44f pop ebx */
  EBX = (pop32());
  /* 10c1a450 mov esp, ebp */
  ESP = (EBP);
  /* 10c1a452 pop ebp */
  EBP = (pop32());
  /* 10c1a453 ret  */
  ESPCHK(0x10c19830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a560 @ 0x10c1a560 (119 bytes, 44 insns) */
void f_10c1a560(void) {
  FTRACE(0x10c1a560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a560 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a561 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a563 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a564 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a567 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c1a56a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a56d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a570 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10c1a573 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a576 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a57a jl 0x10c1a5a2 */
  if ((C.sf!=C.of)) goto L_10c1a5a2;
  /* 10c1a57c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a57f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1a581 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c1a584 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c1a586 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10c1a58a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1a590 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1a593 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a596 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c1a598 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a59b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a59e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c1a5a0 jmp 0x10c1a5b5 */
  goto L_10c1a5b5;
L_10c1a5a2:;
  /* 10c1a5a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a5a5 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a5a9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1a5aa call 0x10c195b0 */
  push32(0x10c1a5afu); f_10c195b0();
  /* 10c1a5af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a5b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1a5b5:;
  /* 10c1a5b5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a5b9 jne 0x10c1a5c6 */
  if (!C.zf) goto L_10c1a5c6;
  /* 10c1a5bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1a5be mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c1a5c4 jmp 0x10c1a5d3 */
  goto L_10c1a5d3;
L_10c1a5c6:;
  /* 10c1a5c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1a5c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c1a5cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a5ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1a5d1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c1a5d3:;
  /* 10c1a5d3 mov esp, ebp */
  ESP = (EBP);
  /* 10c1a5d5 pop ebp */
  EBP = (pop32());
  /* 10c1a5d6 ret  */
  ESPCHK(0x10c1a560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x10c1a5e0 (53 bytes, 23 insns) */
void f_10c1a5e0(void) {
  FTRACE(0x10c1a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a5e1 mov ebp, esp */
  EBP = (ESP);
L_10c1a5e3:;
  /* 10c1a5e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a5e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a5e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a5ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c1a5ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a5f1 jle 0x10c1a613 */
  if ((C.zf||C.sf!=C.of)) goto L_10c1a613;
  /* 10c1a5f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1a5f6 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a5f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1a5fa push eax */
  push32((uint32_t)(EAX));
  /* 10c1a5fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a5fe push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a5ff call 0x10c1a560 */
  push32(0x10c1a604u); f_10c1a560();
  /* 10c1a604 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a607 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1a60a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a60d jne 0x10c1a611 */
  if (!C.zf) goto L_10c1a611;
  /* 10c1a60f jmp 0x10c1a613 */
  goto L_10c1a613;
L_10c1a611:;
  /* 10c1a611 jmp 0x10c1a5e3 */
  goto L_10c1a5e3;
L_10c1a613:;
  /* 10c1a613 pop ebp */
  EBP = (pop32());
  /* 10c1a614 ret  */
  ESPCHK(0x10c1a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x10c1a620 (74 bytes, 31 insns) */
void f_10c1a620(void) {
  FTRACE(0x10c1a620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a620 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a621 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a623 push ecx */
  push32((uint32_t)(ECX));
L_10c1a624:;
  /* 10c1a624 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a627 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a62a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a62d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c1a630 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1a632 jle 0x10c1a666 */
  if ((C.zf||C.sf!=C.of)) goto L_10c1a666;
  /* 10c1a634 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1a637 push edx */
  push32((uint32_t)(EDX));
  /* 10c1a638 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1a63b push eax */
  push32((uint32_t)(EAX));
  /* 10c1a63c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a63f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1a642 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1a645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a648 push eax */
  push32((uint32_t)(EAX));
  /* 10c1a649 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a64c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a64f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c1a652 call 0x10c1a560 */
  push32(0x10c1a657u); f_10c1a560();
  /* 10c1a657 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a65a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1a65d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a660 jne 0x10c1a664 */
  if (!C.zf) goto L_10c1a664;
  /* 10c1a662 jmp 0x10c1a666 */
  goto L_10c1a666;
L_10c1a664:;
  /* 10c1a664 jmp 0x10c1a624 */
  goto L_10c1a624;
L_10c1a666:;
  /* 10c1a666 mov esp, ebp */
  ESP = (EBP);
  /* 10c1a668 pop ebp */
  EBP = (pop32());
  /* 10c1a669 ret  */
  ESPCHK(0x10c1a620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x10c1a670 (26 bytes, 12 insns) */
void f_10c1a670(void) {
  FTRACE(0x10c1a670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a670 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a671 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a676 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1a678 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a67b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a67e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c1a680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a683 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1a685 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c1a688 pop ebp */
  EBP = (pop32());
  /* 10c1a689 ret  */
  ESPCHK(0x10c1a670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x10c1a690 (31 bytes, 14 insns) */
void f_10c1a690(void) {
  FTRACE(0x10c1a690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a690 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a691 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a696 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1a698 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a69e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c1a6a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a6a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1a6a5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a6a8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c1a6aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c1a6ad pop ebp */
  EBP = (pop32());
  /* 10c1a6ae ret  */
  ESPCHK(0x10c1a690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x10c1a6b0 (27 bytes, 12 insns) */
void f_10c1a6b0(void) {
  FTRACE(0x10c1a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a6b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a6b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1a6b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a6bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a6be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c1a6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a6c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1a6c5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10c1a6c9 pop ebp */
  EBP = (pop32());
  /* 10c1a6ca ret  */
  ESPCHK(0x10c1a6b0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10c1a6d0 (145 bytes, 42 insns) */
void f_10c1a6d0(void) {
  FTRACE(0x10c1a6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a6d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1a6d4 call 0x10c1a780 */
  push32(0x10c1a6d9u); f_10c1a780();
  /* 10c1a6d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a6dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c1a6de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1a6e5 jmp 0x10c1a6f0 */
  goto L_10c1a6f0;
L_10c1a6e7:;
  /* 10c1a6e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a6ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a6ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c1a6f0:;
  /* 10c1a6f0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a6f4 jae 0x10c1a71a */
  if (!C.cf) goto L_10c1a71a;
  /* 10c1a6f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a6f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a6fc cmp ecx, dword ptr [eax*8 + 0x10c3cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10c3cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a703 jne 0x10c1a718 */
  if (!C.zf) goto L_10c1a718;
  /* 10c1a705 call 0x10c1a770 */
  push32(0x10c1a70au); f_10c1a770();
  /* 10c1a70a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1a70d mov ecx, dword ptr [edx*8 + 0x10c3cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10c3cfbc)));
  /* 10c1a714 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c1a716 jmp 0x10c1a75d */
  goto L_10c1a75d;
L_10c1a718:;
  /* 10c1a718 jmp 0x10c1a6e7 */
  goto L_10c1a6e7;
L_10c1a71a:;
  /* 10c1a71a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a71e jb 0x10c1a733 */
  if (C.cf) goto L_10c1a733;
  /* 10c1a720 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a724 ja 0x10c1a733 */
  if ((!C.cf&&!C.zf)) goto L_10c1a733;
  /* 10c1a726 call 0x10c1a770 */
  push32(0x10c1a72bu); f_10c1a770();
  /* 10c1a72b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10c1a731 jmp 0x10c1a75d */
  goto L_10c1a75d;
L_10c1a733:;
  /* 10c1a733 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a73a jb 0x10c1a752 */
  if (C.cf) goto L_10c1a752;
  /* 10c1a73c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a743 ja 0x10c1a752 */
  if ((!C.cf&&!C.zf)) goto L_10c1a752;
  /* 10c1a745 call 0x10c1a770 */
  push32(0x10c1a74au); f_10c1a770();
  /* 10c1a74a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10c1a750 jmp 0x10c1a75d */
  goto L_10c1a75d;
L_10c1a752:;
  /* 10c1a752 call 0x10c1a770 */
  push32(0x10c1a757u); f_10c1a770();
  /* 10c1a757 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10c1a75d:;
  /* 10c1a75d mov esp, ebp */
  ESP = (EBP);
  /* 10c1a75f pop ebp */
  EBP = (pop32());
  /* 10c1a760 ret  */
  ESPCHK(0x10c1a6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x10c1a770 (13 bytes, 6 insns) */
void f_10c1a770(void) {
  FTRACE(0x10c1a770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a770 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a771 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a773 call 0x10c122e0 */
  push32(0x10c1a778u); f_10c122e0();
  /* 10c1a778 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a77b pop ebp */
  EBP = (pop32());
  /* 10c1a77c ret  */
  ESPCHK(0x10c1a770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a780 @ 0x10c1a780 (13 bytes, 6 insns) */
void f_10c1a780(void) {
  FTRACE(0x10c1a780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a780 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a781 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a783 call 0x10c122e0 */
  push32(0x10c1a788u); f_10c122e0();
  /* 10c1a788 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a78b pop ebp */
  EBP = (pop32());
  /* 10c1a78c ret  */
  ESPCHK(0x10c1a780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a790 @ 0x10c1a790 (664 bytes, 264 insns) [15 switch table(s)] */
void f_10c1a790(void) {
  FTRACE(0x10c1a790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1a790 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1a791 mov ebp, esp */
  EBP = (ESP);
  /* 10c1a793 push edi */
  push32((uint32_t)(EDI));
  /* 10c1a794 push esi */
  push32((uint32_t)(ESI));
  /* 10c1a795 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1a798 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1a79b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a79e mov eax, ecx */
  EAX = (ECX);
  /* 10c1a7a0 mov edx, ecx */
  EDX = (ECX);
  /* 10c1a7a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a7a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a7a6 jbe 0x10c1a7b0 */
  if ((C.cf||C.zf)) goto L_10c1a7b0;
  /* 10c1a7a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a7aa jb 0x10c1a928 */
  if (C.cf) goto L_10c1a928;
L_10c1a7b0:;
  /* 10c1a7b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c1a7b6 jne 0x10c1a7cc */
  if (!C.zf) goto L_10c1a7cc;
  /* 10c1a7b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a7bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a7be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a7c1 jb 0x10c1a7ec */
  if (C.cf) goto L_10c1a7ec;
  /* 10c1a7c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a7c5 jmp dword ptr [edx*4 + 0x10c1a8d8] */
  switch (EDX) {
    case 0: goto L_10c1a8e8;
    case 1: goto L_10c1a8f0;
    case 2: goto L_10c1a8fc;
    case 3: goto L_10c1a910;
    default: x86_unimpl("switch@0x10c1a7c5 out of table"); return;
  }
L_10c1a7cc:;
  /* 10c1a7cc mov eax, edi */
  EAX = (EDI);
  /* 10c1a7ce mov edx, 3 */
  EDX = (0x3u);
  /* 10c1a7d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a7d6 jb 0x10c1a7e4 */
  if (C.cf) goto L_10c1a7e4;
  /* 10c1a7d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a7db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a7dd jmp dword ptr [eax*4 + 0x10c1a7f0] */
  switch (EAX) {
    case 1: goto L_10c1a800;
    case 2: goto L_10c1a82c;
    case 3: goto L_10c1a850;
    default: x86_unimpl("switch@0x10c1a7dd out of table"); return;
  }
L_10c1a7e4:;
  /* 10c1a7e4 jmp dword ptr [ecx*4 + 0x10c1a8e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10c1a8e8)))); return;
  /* 10c1a7eb nop  */
  /* nop */
L_10c1a7ec:;
  /* 10c1a7ec jmp dword ptr [ecx*4 + 0x10c1a86c] */
  switch (ECX) {
    case 0: goto L_10c1a8cf;
    case 1: goto L_10c1a8bc;
    case 2: goto L_10c1a8b4;
    case 3: goto L_10c1a8ac;
    case 4: goto L_10c1a8a4;
    case 5: goto L_10c1a89c;
    case 6: goto L_10c1a894;
    case 7: goto L_10c1a88c;
    default: x86_unimpl("switch@0x10c1a7ec out of table"); return;
  }
  /* 10c1a7f3 nop  */
  /* nop */
L_10c1a800:;
  /* 10c1a800 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a802 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1a804 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1a806 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c1a809 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1a80c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c1a80f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a812 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c1a815 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a818 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a81b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a81e jb 0x10c1a7ec */
  if (C.cf) goto L_10c1a7ec;
  /* 10c1a820 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a822 jmp dword ptr [edx*4 + 0x10c1a8d8] */
  switch (EDX) {
    case 0: goto L_10c1a8e8;
    case 1: goto L_10c1a8f0;
    case 2: goto L_10c1a8fc;
    case 3: goto L_10c1a910;
    default: x86_unimpl("switch@0x10c1a822 out of table"); return;
  }
  /* 10c1a829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1a82c:;
  /* 10c1a82c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a82e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1a830 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1a832 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c1a835 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a838 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1a83b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a83e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a841 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a844 jb 0x10c1a7ec */
  if (C.cf) goto L_10c1a7ec;
  /* 10c1a846 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a848 jmp dword ptr [edx*4 + 0x10c1a8d8] */
  switch (EDX) {
    case 0: goto L_10c1a8e8;
    case 1: goto L_10c1a8f0;
    case 2: goto L_10c1a8fc;
    case 3: goto L_10c1a910;
    default: x86_unimpl("switch@0x10c1a848 out of table"); return;
  }
  /* 10c1a84f nop  */
  /* nop */
L_10c1a850:;
  /* 10c1a850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1a854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1a856 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c1a857 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a85a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c1a85b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a85e jb 0x10c1a7ec */
  if (C.cf) goto L_10c1a7ec;
  /* 10c1a860 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a862 jmp dword ptr [edx*4 + 0x10c1a8d8] */
  switch (EDX) {
    case 0: goto L_10c1a8e8;
    case 1: goto L_10c1a8f0;
    case 2: goto L_10c1a8fc;
    case 3: goto L_10c1a910;
    default: x86_unimpl("switch@0x10c1a862 out of table"); return;
  }
  /* 10c1a869 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1a88c:;
  /* 10c1a88c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10c1a890 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10c1a894:;
  /* 10c1a894 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10c1a898 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10c1a89c:;
  /* 10c1a89c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10c1a8a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10c1a8a4:;
  /* 10c1a8a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10c1a8a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10c1a8ac:;
  /* 10c1a8ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10c1a8b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10c1a8b4:;
  /* 10c1a8b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10c1a8b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10c1a8bc:;
  /* 10c1a8bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10c1a8c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10c1a8c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c1a8cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1a8cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c1a8cf:;
  /* 10c1a8cf jmp dword ptr [edx*4 + 0x10c1a8d8] */
  switch (EDX) {
    case 0: goto L_10c1a8e8;
    case 1: goto L_10c1a8f0;
    case 2: goto L_10c1a8fc;
    case 3: goto L_10c1a910;
    default: x86_unimpl("switch@0x10c1a8cf out of table"); return;
  }
  /* 10c1a8d6 mov edi, edi */
  EDI = (EDI);
L_10c1a8e8:;
  /* 10c1a8e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a8eb pop esi */
  ESI = (pop32());
  /* 10c1a8ec pop edi */
  EDI = (pop32());
  /* 10c1a8ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1a8ee ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
  /* 10c1a8ef nop  */
  /* nop */
L_10c1a8f0:;
  /* 10c1a8f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1a8f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1a8f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a8f7 pop esi */
  ESI = (pop32());
  /* 10c1a8f8 pop edi */
  EDI = (pop32());
  /* 10c1a8f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1a8fa ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
  /* 10c1a8fb nop  */
  /* nop */
L_10c1a8fc:;
  /* 10c1a8fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1a8fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1a900 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c1a903 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1a906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a909 pop esi */
  ESI = (pop32());
  /* 10c1a90a pop edi */
  EDI = (pop32());
  /* 10c1a90b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1a90c ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
  /* 10c1a90d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1a910:;
  /* 10c1a910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1a912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1a914 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c1a917 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1a91a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c1a91d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c1a920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1a923 pop esi */
  ESI = (pop32());
  /* 10c1a924 pop edi */
  EDI = (pop32());
  /* 10c1a925 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1a926 ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
  /* 10c1a927 nop  */
  /* nop */
L_10c1a928:;
  /* 10c1a928 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10c1a92c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10c1a930 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c1a936 jne 0x10c1a95c */
  if (!C.zf) goto L_10c1a95c;
  /* 10c1a938 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a93b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a93e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a941 jb 0x10c1a950 */
  if (C.cf) goto L_10c1a950;
  /* 10c1a943 std  */
  C.df=1;
  /* 10c1a944 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a946 cld  */
  C.df=0;
  /* 10c1a947 jmp dword ptr [edx*4 + 0x10c1aa70] */
  switch (EDX) {
    case 0: goto L_10c1aa80;
    case 1: goto L_10c1aa88;
    case 2: goto L_10c1aa98;
    case 3: goto L_10c1aaac;
    default: x86_unimpl("switch@0x10c1a947 out of table"); return;
  }
  /* 10c1a94e mov edi, edi */
  EDI = (EDI);
L_10c1a950:;
  /* 10c1a950 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1a952 jmp dword ptr [ecx*4 + 0x10c1aa20] */
  switch (ECX) {
    case 0: goto L_10c1aa67;
    default: x86_unimpl("switch@0x10c1a952 out of table"); return;
  }
  /* 10c1a959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1a95c:;
  /* 10c1a95c mov eax, edi */
  EAX = (EDI);
  /* 10c1a95e mov edx, 3 */
  EDX = (0x3u);
  /* 10c1a963 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a966 jb 0x10c1a974 */
  if (C.cf) goto L_10c1a974;
  /* 10c1a968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1a96b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a96d jmp dword ptr [eax*4 + 0x10c1a978] */
  switch (EAX) {
    case 1: goto L_10c1a988;
    case 2: goto L_10c1a9a8;
    case 3: goto L_10c1a9d0;
    default: x86_unimpl("switch@0x10c1a96d out of table"); return;
  }
L_10c1a974:;
  /* 10c1a974 jmp dword ptr [ecx*4 + 0x10c1aa70] */
  switch (ECX) {
    case 0: goto L_10c1aa80;
    case 1: goto L_10c1aa88;
    case 2: goto L_10c1aa98;
    case 3: goto L_10c1aaac;
    default: x86_unimpl("switch@0x10c1a974 out of table"); return;
  }
  /* 10c1a97b nop  */
  /* nop */
L_10c1a988:;
  /* 10c1a988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1a98b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a98d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1a990 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10c1a991 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a994 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10c1a995 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a998 jb 0x10c1a950 */
  if (C.cf) goto L_10c1a950;
  /* 10c1a99a std  */
  C.df=1;
  /* 10c1a99b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a99d cld  */
  C.df=0;
  /* 10c1a99e jmp dword ptr [edx*4 + 0x10c1aa70] */
  switch (EDX) {
    case 0: goto L_10c1aa80;
    case 1: goto L_10c1aa88;
    case 2: goto L_10c1aa98;
    case 3: goto L_10c1aaac;
    default: x86_unimpl("switch@0x10c1a99e out of table"); return;
  }
  /* 10c1a9a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1a9a8:;
  /* 10c1a9a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1a9ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a9ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1a9b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c1a9b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a9b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c1a9b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a9bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a9bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a9c2 jb 0x10c1a950 */
  if (C.cf) goto L_10c1a950;
  /* 10c1a9c4 std  */
  C.df=1;
  /* 10c1a9c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a9c7 cld  */
  C.df=0;
  /* 10c1a9c8 jmp dword ptr [edx*4 + 0x10c1aa70] */
  switch (EDX) {
    case 0: goto L_10c1aa80;
    case 1: goto L_10c1aa88;
    case 2: goto L_10c1aa98;
    case 3: goto L_10c1aaac;
    default: x86_unimpl("switch@0x10c1a9c8 out of table"); return;
  }
  /* 10c1a9cf nop  */
  /* nop */
L_10c1a9d0:;
  /* 10c1a9d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1a9d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1a9d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1a9d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c1a9db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c1a9de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c1a9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1a9e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1a9e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a9ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1a9ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1a9f0 jb 0x10c1a950 */
  if (C.cf) goto L_10c1a950;
  /* 10c1a9f6 std  */
  C.df=1;
  /* 10c1a9f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10c1a9f9 cld  */
  C.df=0;
  /* 10c1a9fa jmp dword ptr [edx*4 + 0x10c1aa70] */
  switch (EDX) {
    case 0: goto L_10c1aa80;
    case 1: goto L_10c1aa88;
    case 2: goto L_10c1aa98;
    case 3: goto L_10c1aaac;
    default: x86_unimpl("switch@0x10c1a9fa out of table"); return;
  }
  /* 10c1aa01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10c1aa04 and al, 0xaa */
  { uint32_t _r=(AL)&(0xaau); AL = (_r); fl_logic(_r,8); }
  /* 10c1aa06 rcl dword ptr [eax], 0x2c */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x2cu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c1aa09 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c1aa0a rcl dword ptr [eax], 0x34 */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x34u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c1aa0d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c1aa0e rcl dword ptr [eax], 0x3c */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x3cu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c1aa11 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c1aa12 rcl dword ptr [eax], 0x44 */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x44u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c1aa15 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c1aa16 rcl dword ptr [eax], 0x4c */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x4cu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c1aa19 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c1aa1a rcl dword ptr [eax], 0x54 */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x54u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10c1aa1d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c1aa24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10c1aa28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10c1aa2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10c1aa30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10c1aa34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10c1aa38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10c1aa3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10c1aa40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10c1aa44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10c1aa48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10c1aa4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10c1aa50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10c1aa54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10c1aa58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10c1aa5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10c1aa63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1aa65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c1aa67:;
  /* 10c1aa67 jmp dword ptr [edx*4 + 0x10c1aa70] */
  switch (EDX) {
    case 0: goto L_10c1aa80;
    case 1: goto L_10c1aa88;
    case 2: goto L_10c1aa98;
    case 3: goto L_10c1aaac;
    default: x86_unimpl("switch@0x10c1aa67 out of table"); return;
  }
  /* 10c1aa6e mov edi, edi */
  EDI = (EDI);
L_10c1aa80:;
  /* 10c1aa80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1aa83 pop esi */
  ESI = (pop32());
  /* 10c1aa84 pop edi */
  EDI = (pop32());
  /* 10c1aa85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1aa86 ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
  /* 10c1aa87 nop  */
  /* nop */
L_10c1aa88:;
  /* 10c1aa88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1aa8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1aa8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1aa91 pop esi */
  ESI = (pop32());
  /* 10c1aa92 pop edi */
  EDI = (pop32());
  /* 10c1aa93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1aa94 ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
  /* 10c1aa95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1aa98:;
  /* 10c1aa98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1aa9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1aa9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c1aaa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c1aaa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1aaa7 pop esi */
  ESI = (pop32());
  /* 10c1aaa8 pop edi */
  EDI = (pop32());
  /* 10c1aaa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1aaaa ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
  /* 10c1aaab nop  */
  /* nop */
L_10c1aaac:;
  /* 10c1aaac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10c1aaaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10c1aab2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10c1aab5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10c1aab8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10c1aabb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10c1aabe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1aac1 pop esi */
  ESI = (pop32());
  /* 10c1aac2 pop edi */
  EDI = (pop32());
  /* 10c1aac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1aac4 ret  */
  ESPCHK(0x10c1a790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aad0 @ 0x10c1aad0 (421 bytes, 148 insns) */
void f_10c1aad0(void) {
  FTRACE(0x10c1aad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1aad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1aad1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1aad3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c1aad5 push 0x10c39f28 */
  push32((uint32_t)(0x10c39f28u));
  /* 10c1aada push 0x10c1b9a8 */
  push32((uint32_t)(0x10c1b9a8u));
  /* 10c1aadf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c1aae5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1aae6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c1aaed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1aaf0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1aaf1 push esi */
  push32((uint32_t)(ESI));
  /* 10c1aaf2 push edi */
  push32((uint32_t)(EDI));
  /* 10c1aaf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c1aaf6 cmp dword ptr [0x10c3e5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1aafd jne 0x10c1ab4e */
  if (!C.zf) goto L_10c1ab4e;
  /* 10c1aaff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10c1ab02 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ab03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ab05 push 0x10c39f20 */
  push32((uint32_t)(0x10c39f20u));
  /* 10c1ab0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ab0c call dword ptr [0x10c402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f0))), 0x10c1ab12u);
  /* 10c1ab12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ab14 je 0x10c1ab22 */
  if (C.zf) goto L_10c1ab22;
  /* 10c1ab16 mov dword ptr [0x10c3e5f4], 1 */
  w32((uint32_t)(0x10c3e5f4), (0x1u));
  /* 10c1ab20 jmp 0x10c1ab4e */
  goto L_10c1ab4e;
L_10c1ab22:;
  /* 10c1ab22 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10c1ab25 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ab26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ab28 push 0x10c39f1c */
  push32((uint32_t)(0x10c39f1cu));
  /* 10c1ab2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ab2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ab31 call dword ptr [0x10c402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402ec))), 0x10c1ab37u);
  /* 10c1ab37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ab39 je 0x10c1ab47 */
  if (C.zf) goto L_10c1ab47;
  /* 10c1ab3b mov dword ptr [0x10c3e5f4], 2 */
  w32((uint32_t)(0x10c3e5f4), (0x2u));
  /* 10c1ab45 jmp 0x10c1ab4e */
  goto L_10c1ab4e;
L_10c1ab47:;
  /* 10c1ab47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ab49 jmp 0x10c1ac78 */
  goto L_10c1ac78;
L_10c1ab4e:;
  /* 10c1ab4e cmp dword ptr [0x10c3e5f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e5f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ab55 jne 0x10c1ab85 */
  if (!C.zf) goto L_10c1ab85;
  /* 10c1ab57 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ab5b jne 0x10c1ab66 */
  if (!C.zf) goto L_10c1ab66;
  /* 10c1ab5d mov edx, dword ptr [0x10c3e600] */
  EDX = (r32((uint32_t)(0x10c3e600)));
  /* 10c1ab63 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10c1ab66:;
  /* 10c1ab66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ab69 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ab6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ab6d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ab6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ab71 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ab72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ab75 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ab76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c1ab79 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ab7a call dword ptr [0x10c402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402ec))), 0x10c1ab80u);
  /* 10c1ab80 jmp 0x10c1ac78 */
  goto L_10c1ac78;
L_10c1ab85:;
  /* 10c1ab85 cmp dword ptr [0x10c3e5f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e5f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ab8c jne 0x10c1ac76 */
  if (!C.zf) goto L_10c1ac76;
  /* 10c1ab92 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ab96 jne 0x10c1aba1 */
  if (!C.zf) goto L_10c1aba1;
  /* 10c1ab98 mov edx, dword ptr [0x10c3e610] */
  EDX = (r32((uint32_t)(0x10c3e610)));
  /* 10c1ab9e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10c1aba1:;
  /* 10c1aba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1aba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1aba5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1aba8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1aba9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1abac push ecx */
  push32((uint32_t)(ECX));
  /* 10c1abad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c1abb0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1abb2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1abb4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1abb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1abba push edx */
  push32((uint32_t)(EDX));
  /* 10c1abbb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1abbe push eax */
  push32((uint32_t)(EAX));
  /* 10c1abbf call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c1abc5u);
  /* 10c1abc5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c1abc8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1abcc jne 0x10c1abd5 */
  if (!C.zf) goto L_10c1abd5;
  /* 10c1abce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1abd0 jmp 0x10c1ac78 */
  goto L_10c1ac78;
L_10c1abd5:;
  /* 10c1abd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1abdc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1abdf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c1abe1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1abe4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c1abe6 call 0x10c15a40 */
  push32(0x10c1abebu); f_10c15a40();
  /* 10c1abeb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10c1abee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c1abf1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1abf4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c1abf7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1abfa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10c1abfc push edx */
  push32((uint32_t)(EDX));
  /* 10c1abfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1abff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1ac02 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ac03 call 0x10c16610 */
  push32(0x10c1ac08u); f_10c16610();
  /* 10c1ac08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ac0b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c1ac12 jmp 0x10c1ac2b */
  goto L_10c1ac2b;
  /* 10c1ac14 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1ac19 ret  */
  ESPCHK(0x10c1aad0u, _esp0);
  ESP += 4; return;
  /* 10c1ac1a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1ac1d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c1ac24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c1ac2b:;
  /* 10c1ac2b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ac2f jne 0x10c1ac35 */
  if (!C.zf) goto L_10c1ac35;
  /* 10c1ac31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ac33 jmp 0x10c1ac78 */
  goto L_10c1ac78;
L_10c1ac35:;
  /* 10c1ac35 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1ac38 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ac39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1ac3c push edx */
  push32((uint32_t)(EDX));
  /* 10c1ac3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ac40 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ac41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ac44 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ac45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ac47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1ac4a push edx */
  push32((uint32_t)(EDX));
  /* 10c1ac4b call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c1ac51u);
  /* 10c1ac51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c1ac54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ac58 jne 0x10c1ac5e */
  if (!C.zf) goto L_10c1ac5e;
  /* 10c1ac5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ac5c jmp 0x10c1ac78 */
  goto L_10c1ac78;
L_10c1ac5e:;
  /* 10c1ac5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ac61 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ac62 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1ac65 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ac66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1ac69 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ac6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ac6d push eax */
  push32((uint32_t)(EAX));
  /* 10c1ac6e call dword ptr [0x10c402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f0))), 0x10c1ac74u);
  /* 10c1ac74 jmp 0x10c1ac78 */
  goto L_10c1ac78;
L_10c1ac76:;
  /* 10c1ac76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1ac78:;
  /* 10c1ac78 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10c1ac7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1ac7e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c1ac85 pop edi */
  EDI = (pop32());
  /* 10c1ac86 pop esi */
  ESI = (pop32());
  /* 10c1ac87 pop ebx */
  EBX = (pop32());
  /* 10c1ac88 mov esp, ebp */
  ESP = (EBP);
  /* 10c1ac8a pop ebp */
  EBP = (pop32());
  /* 10c1ac8b ret  */
  ESPCHK(0x10c1aad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac90 @ 0x10c1ac90 (727 bytes, 263 insns) */
void f_10c1ac90(void) {
  FTRACE(0x10c1ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ac91 mov ebp, esp */
  EBP = (ESP);
  /* 10c1ac93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c1ac95 push 0x10c39f38 */
  push32((uint32_t)(0x10c39f38u));
  /* 10c1ac9a push 0x10c1b9a8 */
  push32((uint32_t)(0x10c1b9a8u));
  /* 10c1ac9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c1aca5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1aca6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c1acad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1acb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1acb1 push esi */
  push32((uint32_t)(ESI));
  /* 10c1acb2 push edi */
  push32((uint32_t)(EDI));
  /* 10c1acb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c1acb6 cmp dword ptr [0x10c3e618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1acbd jne 0x10c1ad16 */
  if (!C.zf) goto L_10c1ad16;
  /* 10c1acbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1acc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1acc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1acc5 push 0x10c39f20 */
  push32((uint32_t)(0x10c39f20u));
  /* 10c1acca push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c1accf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1acd1 call dword ptr [0x10c402f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f8))), 0x10c1acd7u);
  /* 10c1acd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1acd9 je 0x10c1ace7 */
  if (C.zf) goto L_10c1ace7;
  /* 10c1acdb mov dword ptr [0x10c3e618], 1 */
  w32((uint32_t)(0x10c3e618), (0x1u));
  /* 10c1ace5 jmp 0x10c1ad16 */
  goto L_10c1ad16;
L_10c1ace7:;
  /* 10c1ace7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ace9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1aceb push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1aced push 0x10c39f1c */
  push32((uint32_t)(0x10c39f1cu));
  /* 10c1acf2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c1acf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1acf9 call dword ptr [0x10c402f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f4))), 0x10c1acffu);
  /* 10c1acff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ad01 je 0x10c1ad0f */
  if (C.zf) goto L_10c1ad0f;
  /* 10c1ad03 mov dword ptr [0x10c3e618], 2 */
  w32((uint32_t)(0x10c3e618), (0x2u));
  /* 10c1ad0d jmp 0x10c1ad16 */
  goto L_10c1ad16;
L_10c1ad0f:;
  /* 10c1ad0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ad11 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1ad16:;
  /* 10c1ad16 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ad1a jle 0x10c1ad2f */
  if ((C.zf||C.sf!=C.of)) goto L_10c1ad2f;
  /* 10c1ad1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ad1f push eax */
  push32((uint32_t)(EAX));
  /* 10c1ad20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ad23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ad24 call 0x10c1afa0 */
  push32(0x10c1ad29u); f_10c1afa0();
  /* 10c1ad29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ad2c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10c1ad2f:;
  /* 10c1ad2f cmp dword ptr [0x10c3e618], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e618))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ad36 jne 0x10c1ad5b */
  if (!C.zf) goto L_10c1ad5b;
  /* 10c1ad38 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c1ad3b push edx */
  push32((uint32_t)(EDX));
  /* 10c1ad3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1ad3f push eax */
  push32((uint32_t)(EAX));
  /* 10c1ad40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ad43 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ad44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ad47 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ad48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ad4b push eax */
  push32((uint32_t)(EAX));
  /* 10c1ad4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ad4f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ad50 call dword ptr [0x10c402f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f4))), 0x10c1ad56u);
  /* 10c1ad56 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1ad5b:;
  /* 10c1ad5b cmp dword ptr [0x10c3e618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ad62 jne 0x10c1af7f */
  if (!C.zf) goto L_10c1af7f;
  /* 10c1ad68 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ad6c jne 0x10c1ad77 */
  if (!C.zf) goto L_10c1ad77;
  /* 10c1ad6e mov edx, dword ptr [0x10c3e610] */
  EDX = (r32((uint32_t)(0x10c3e610)));
  /* 10c1ad74 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10c1ad77:;
  /* 10c1ad77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ad79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ad7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ad7e push eax */
  push32((uint32_t)(EAX));
  /* 10c1ad7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ad82 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ad83 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10c1ad86 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1ad88 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ad8a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1ad8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ad90 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ad91 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c1ad94 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ad95 call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c1ad9bu);
  /* 10c1ad9b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c1ad9e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ada2 jne 0x10c1adab */
  if (!C.zf) goto L_10c1adab;
  /* 10c1ada4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ada6 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1adab:;
  /* 10c1adab mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1adb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1adb5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c1adb7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1adba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c1adbc call 0x10c15a40 */
  push32(0x10c1adc1u); f_10c15a40();
  /* 10c1adc1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10c1adc4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c1adc7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1adca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c1adcd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c1add4 jmp 0x10c1aded */
  goto L_10c1aded;
  /* 10c1add6 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1addb ret  */
  ESPCHK(0x10c1ac90u, _esp0);
  ESP += 4; return;
  /* 10c1addc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1addf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c1ade6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c1aded:;
  /* 10c1aded cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1adf1 jne 0x10c1adfa */
  if (!C.zf) goto L_10c1adfa;
  /* 10c1adf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1adf5 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1adfa:;
  /* 10c1adfa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1adfd push edx */
  push32((uint32_t)(EDX));
  /* 10c1adfe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1ae01 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ae02 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ae05 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ae06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ae09 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ae0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ae0c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c1ae0f push eax */
  push32((uint32_t)(EAX));
  /* 10c1ae10 call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c1ae16u);
  /* 10c1ae16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ae18 jne 0x10c1ae21 */
  if (!C.zf) goto L_10c1ae21;
  /* 10c1ae1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ae1c jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1ae21:;
  /* 10c1ae21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ae23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ae25 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1ae28 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ae29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1ae2c push edx */
  push32((uint32_t)(EDX));
  /* 10c1ae2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ae30 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ae31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ae34 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ae35 call dword ptr [0x10c402f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f8))), 0x10c1ae3bu);
  /* 10c1ae3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c1ae3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ae42 jne 0x10c1ae4b */
  if (!C.zf) goto L_10c1ae4b;
  /* 10c1ae44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ae46 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1ae4b:;
  /* 10c1ae4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ae4e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1ae54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1ae56 je 0x10c1ae9b */
  if (C.zf) goto L_10c1ae9b;
  /* 10c1ae58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ae5c je 0x10c1ae96 */
  if (C.zf) goto L_10c1ae96;
  /* 10c1ae5e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1ae61 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ae64 jle 0x10c1ae6d */
  if ((C.zf||C.sf!=C.of)) goto L_10c1ae6d;
  /* 10c1ae66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ae68 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1ae6d:;
  /* 10c1ae6d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c1ae70 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ae71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1ae74 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ae75 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1ae78 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ae79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1ae7c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ae7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ae80 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ae81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ae84 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ae85 call dword ptr [0x10c402f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f8))), 0x10c1ae8bu);
  /* 10c1ae8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ae8d jne 0x10c1ae96 */
  if (!C.zf) goto L_10c1ae96;
  /* 10c1ae8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ae91 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1ae96:;
  /* 10c1ae96 jmp 0x10c1af7a */
  goto L_10c1af7a;
L_10c1ae9b:;
  /* 10c1ae9b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1ae9e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c1aea1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c1aea8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1aeab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c1aead add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1aeb0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c1aeb2 call 0x10c15a40 */
  push32(0x10c1aeb7u); f_10c15a40();
  /* 10c1aeb7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10c1aeba mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c1aebd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c1aec0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c1aec3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c1aeca jmp 0x10c1aee3 */
  goto L_10c1aee3;
  /* 10c1aecc mov eax, 1 */
  EAX = (0x1u);
  /* 10c1aed1 ret  */
  ESPCHK(0x10c1ac90u, _esp0);
  ESP += 4; return;
  /* 10c1aed2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1aed5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c1aedc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c1aee3:;
  /* 10c1aee3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1aee7 jne 0x10c1aef0 */
  if (!C.zf) goto L_10c1aef0;
  /* 10c1aee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1aeeb jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1aef0:;
  /* 10c1aef0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1aef3 push eax */
  push32((uint32_t)(EAX));
  /* 10c1aef4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1aef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1aef8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1aefb push edx */
  push32((uint32_t)(EDX));
  /* 10c1aefc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1aeff push eax */
  push32((uint32_t)(EAX));
  /* 10c1af00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1af03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1af04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1af07 push edx */
  push32((uint32_t)(EDX));
  /* 10c1af08 call dword ptr [0x10c402f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f8))), 0x10c1af0eu);
  /* 10c1af0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1af10 jne 0x10c1af16 */
  if (!C.zf) goto L_10c1af16;
  /* 10c1af12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1af14 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1af16:;
  /* 10c1af16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1af1a jne 0x10c1af4a */
  if (!C.zf) goto L_10c1af4a;
  /* 10c1af1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1af1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1af20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1af22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1af24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1af27 push eax */
  push32((uint32_t)(EAX));
  /* 10c1af28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1af2b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1af2c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c1af31 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c1af34 push edx */
  push32((uint32_t)(EDX));
  /* 10c1af35 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c1af3bu);
  /* 10c1af3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c1af3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1af42 jne 0x10c1af48 */
  if (!C.zf) goto L_10c1af48;
  /* 10c1af44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1af46 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1af48:;
  /* 10c1af48 jmp 0x10c1af7a */
  goto L_10c1af7a;
L_10c1af4a:;
  /* 10c1af4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1af4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1af4e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c1af51 push eax */
  push32((uint32_t)(EAX));
  /* 10c1af52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1af55 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1af56 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1af59 push edx */
  push32((uint32_t)(EDX));
  /* 10c1af5a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1af5d push eax */
  push32((uint32_t)(EAX));
  /* 10c1af5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c1af63 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c1af66 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1af67 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c1af6du);
  /* 10c1af6d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c1af70 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1af74 jne 0x10c1af7a */
  if (!C.zf) goto L_10c1af7a;
  /* 10c1af76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1af78 jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1af7a:;
  /* 10c1af7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1af7d jmp 0x10c1af81 */
  goto L_10c1af81;
L_10c1af7f:;
  /* 10c1af7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1af81:;
  /* 10c1af81 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10c1af84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1af87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c1af8e pop edi */
  EDI = (pop32());
  /* 10c1af8f pop esi */
  ESI = (pop32());
  /* 10c1af90 pop ebx */
  EBX = (pop32());
  /* 10c1af91 mov esp, ebp */
  ESP = (EBP);
  /* 10c1af93 pop ebp */
  EBP = (pop32());
  /* 10c1af94 ret  */
  ESPCHK(0x10c1ac90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afa0 @ 0x10c1afa0 (80 bytes, 32 insns) */
void f_10c1afa0(void) {
  FTRACE(0x10c1afa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1afa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1afa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1afa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1afa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1afa9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1afac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1afaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c1afb2:;
  /* 10c1afb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1afb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1afb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1afbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1afbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1afc0 je 0x10c1afd7 */
  if (C.zf) goto L_10c1afd7;
  /* 10c1afc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1afc5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1afc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1afca je 0x10c1afd7 */
  if (C.zf) goto L_10c1afd7;
  /* 10c1afcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1afcf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1afd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1afd5 jmp 0x10c1afb2 */
  goto L_10c1afb2;
L_10c1afd7:;
  /* 10c1afd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1afda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1afdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1afdf jne 0x10c1afe9 */
  if (!C.zf) goto L_10c1afe9;
  /* 10c1afe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1afe4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1afe7 jmp 0x10c1afec */
  goto L_10c1afec;
L_10c1afe9:;
  /* 10c1afe9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10c1afec:;
  /* 10c1afec mov esp, ebp */
  ESP = (EBP);
  /* 10c1afee pop ebp */
  EBP = (pop32());
  /* 10c1afef ret  */
  ESPCHK(0x10c1afa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aff0 @ 0x10c1aff0 (130 bytes, 43 insns) */
void f_10c1aff0(void) {
  FTRACE(0x10c1aff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1aff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1aff1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1aff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1aff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1aff7 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1affd jae 0x10c1b021 */
  if (!C.cf) goto L_10c1b021;
  /* 10c1afff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b002 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b005 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b008 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b00b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b00e mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1b015 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1b01a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b01d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1b01f jne 0x10c1b03c */
  if (!C.zf) goto L_10c1b03c;
L_10c1b021:;
  /* 10c1b021 call 0x10c1a770 */
  push32(0x10c1b026u); f_10c1a770();
  /* 10c1b026 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1b02c call 0x10c1a780 */
  push32(0x10c1b031u); f_10c1a780();
  /* 10c1b031 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1b037 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b03a jmp 0x10c1b06e */
  goto L_10c1b06e;
L_10c1b03c:;
  /* 10c1b03c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b03f push edx */
  push32((uint32_t)(EDX));
  /* 10c1b040 call 0x10c1bf90 */
  push32(0x10c1b045u); f_10c1bf90();
  /* 10c1b045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b048 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1b04b push eax */
  push32((uint32_t)(EAX));
  /* 10c1b04c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b04f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b053 push edx */
  push32((uint32_t)(EDX));
  /* 10c1b054 call 0x10c1b080 */
  push32(0x10c1b059u); f_10c1b080();
  /* 10c1b059 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b05c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1b05f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b062 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b063 call 0x10c1c020 */
  push32(0x10c1b068u); f_10c1c020();
  /* 10c1b068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b06b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1b06e:;
  /* 10c1b06e mov esp, ebp */
  ESP = (EBP);
  /* 10c1b070 pop ebp */
  EBP = (pop32());
  /* 10c1b071 ret  */
  ESPCHK(0x10c1aff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b080 @ 0x10c1b080 (178 bytes, 56 insns) */
void f_10c1b080(void) {
  FTRACE(0x10c1b080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b080 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b081 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b089 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b08a call 0x10c1be10 */
  push32(0x10c1b08fu); f_10c1be10();
  /* 10c1b08f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1b095 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b099 jne 0x10c1b0ae */
  if (!C.zf) goto L_10c1b0ae;
  /* 10c1b09b call 0x10c1a770 */
  push32(0x10c1b0a0u); f_10c1a770();
  /* 10c1b0a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1b0a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b0a9 jmp 0x10c1b12e */
  goto L_10c1b12e;
L_10c1b0ae:;
  /* 10c1b0ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1b0b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b0b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b0b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b0b7 push edx */
  push32((uint32_t)(EDX));
  /* 10c1b0b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1b0bb push eax */
  push32((uint32_t)(EAX));
  /* 10c1b0bc call dword ptr [0x10c402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402fc))), 0x10c1b0c2u);
  /* 10c1b0c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1b0c5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b0c9 jne 0x10c1b0d6 */
  if (!C.zf) goto L_10c1b0d6;
  /* 10c1b0cb call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c1b0d1u);
  /* 10c1b0d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1b0d4 jmp 0x10c1b0dd */
  goto L_10c1b0dd;
L_10c1b0d6:;
  /* 10c1b0d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c1b0dd:;
  /* 10c1b0dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b0e1 je 0x10c1b0f4 */
  if (C.zf) goto L_10c1b0f4;
  /* 10c1b0e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b0e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b0e7 call 0x10c1a6d0 */
  push32(0x10c1b0ecu); f_10c1a6d0();
  /* 10c1b0ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b0ef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b0f2 jmp 0x10c1b12e */
  goto L_10c1b12e;
L_10c1b0f4:;
  /* 10c1b0f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b0f7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c1b0fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b0fd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b100 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b103 mov ecx, dword ptr [edx*4 + 0x10c3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c1b10a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10c1b10e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10c1b111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b114 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1b117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b11a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b11d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b120 mov eax, dword ptr [eax*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1b127 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10c1b12b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c1b12e:;
  /* 10c1b12e mov esp, ebp */
  ESP = (EBP);
  /* 10c1b130 pop ebp */
  EBP = (pop32());
  /* 10c1b131 ret  */
  ESPCHK(0x10c1b080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x10c1b140 (130 bytes, 43 insns) */
void f_10c1b140(void) {
  FTRACE(0x10c1b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b140 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b141 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b143 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b144 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b147 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b14d jae 0x10c1b171 */
  if (!C.cf) goto L_10c1b171;
  /* 10c1b14f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b152 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b158 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b15b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b15e mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1b165 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1b16a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b16d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1b16f jne 0x10c1b18c */
  if (!C.zf) goto L_10c1b18c;
L_10c1b171:;
  /* 10c1b171 call 0x10c1a770 */
  push32(0x10c1b176u); f_10c1a770();
  /* 10c1b176 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1b17c call 0x10c1a780 */
  push32(0x10c1b181u); f_10c1a780();
  /* 10c1b181 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1b187 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b18a jmp 0x10c1b1be */
  goto L_10c1b1be;
L_10c1b18c:;
  /* 10c1b18c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b18f push edx */
  push32((uint32_t)(EDX));
  /* 10c1b190 call 0x10c1bf90 */
  push32(0x10c1b195u); f_10c1bf90();
  /* 10c1b195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b198 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1b19b push eax */
  push32((uint32_t)(EAX));
  /* 10c1b19c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b19f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b1a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b1a3 push edx */
  push32((uint32_t)(EDX));
  /* 10c1b1a4 call 0x10c1b1d0 */
  push32(0x10c1b1a9u); f_10c1b1d0();
  /* 10c1b1a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b1ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1b1af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b1b2 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b1b3 call 0x10c1c020 */
  push32(0x10c1b1b8u); f_10c1c020();
  /* 10c1b1b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b1bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1b1be:;
  /* 10c1b1be mov esp, ebp */
  ESP = (EBP);
  /* 10c1b1c0 pop ebp */
  EBP = (pop32());
  /* 10c1b1c1 ret  */
  ESPCHK(0x10c1b140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1d0 @ 0x10c1b1d0 (627 bytes, 182 insns) */
void f_10c1b1d0(void) {
  FTRACE(0x10c1b1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b1d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b1d3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b1d9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1b1e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1b1e3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10c1b1e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b1ed jne 0x10c1b1f6 */
  if (!C.zf) goto L_10c1b1f6;
  /* 10c1b1ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b1f1 jmp 0x10c1b43f */
  goto L_10c1b43f;
L_10c1b1f6:;
  /* 10c1b1f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b1f9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b1fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b1ff and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b202 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b205 mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1b20c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1b211 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b214 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1b216 je 0x10c1b228 */
  if (C.zf) goto L_10c1b228;
  /* 10c1b218 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1b21a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b21c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b21f push edx */
  push32((uint32_t)(EDX));
  /* 10c1b220 call 0x10c1b080 */
  push32(0x10c1b225u); f_10c1b080();
  /* 10c1b225 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1b228:;
  /* 10c1b228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b22b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1b22e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b231 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b234 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b237 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1b23e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c1b243 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1b24a je 0x10c1b35c */
  if (C.zf) goto L_10c1b35c;
  /* 10c1b250 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b253 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1b256 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c1b25d:;
  /* 10c1b25d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b260 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b263 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b266 jae 0x10c1b35a */
  if (!C.cf) goto L_10c1b35a;
  /* 10c1b26c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10c1b272 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c1b275:;
  /* 10c1b275 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b278 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10c1b27e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b280 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b286 jge 0x10c1b2e7 */
  if ((C.sf==C.of)) goto L_10c1b2e7;
  /* 10c1b288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b28b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b28e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b291 jae 0x10c1b2e7 */
  if (!C.cf) goto L_10c1b2e7;
  /* 10c1b293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b296 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c1b298 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10c1b29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b2a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b2a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1b2a7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10c1b2ae cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b2b1 jne 0x10c1b2d1 */
  if (!C.zf) goto L_10c1b2d1;
  /* 10c1b2b3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10c1b2b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b2bc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10c1b2c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b2c5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10c1b2c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b2cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b2ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c1b2d1:;
  /* 10c1b2d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b2d4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10c1b2da mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c1b2dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b2df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b2e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1b2e5 jmp 0x10c1b275 */
  goto L_10c1b275;
L_10c1b2e7:;
  /* 10c1b2e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b2e9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10c1b2ef push edx */
  push32((uint32_t)(EDX));
  /* 10c1b2f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b2f3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10c1b2f9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b2fb push eax */
  push32((uint32_t)(EAX));
  /* 10c1b2fc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10c1b302 push edx */
  push32((uint32_t)(EDX));
  /* 10c1b303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b306 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1b309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b30c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b30f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b312 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1b319 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10c1b31c push eax */
  push32((uint32_t)(EAX));
  /* 10c1b31d call dword ptr [0x10c40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40230))), 0x10c1b323u);
  /* 10c1b323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1b325 je 0x10c1b34a */
  if (C.zf) goto L_10c1b34a;
  /* 10c1b327 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1b32a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b330 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c1b333 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b336 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10c1b33c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b33e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b344 jge 0x10c1b348 */
  if ((C.sf==C.of)) goto L_10c1b348;
  /* 10c1b346 jmp 0x10c1b35a */
  goto L_10c1b35a;
L_10c1b348:;
  /* 10c1b348 jmp 0x10c1b355 */
  goto L_10c1b355;
L_10c1b34a:;
  /* 10c1b34a call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c1b350u);
  /* 10c1b350 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1b353 jmp 0x10c1b35a */
  goto L_10c1b35a;
L_10c1b355:;
  /* 10c1b355 jmp 0x10c1b25d */
  goto L_10c1b25d;
L_10c1b35a:;
  /* 10c1b35a jmp 0x10c1b3ac */
  goto L_10c1b3ac;
L_10c1b35c:;
  /* 10c1b35c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b35e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10c1b364 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b365 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1b368 push edx */
  push32((uint32_t)(EDX));
  /* 10c1b369 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b36c push eax */
  push32((uint32_t)(EAX));
  /* 10c1b36d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b370 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b376 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b379 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b37c mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1b383 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10c1b386 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b387 call dword ptr [0x10c40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40230))), 0x10c1b38du);
  /* 10c1b38d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1b38f je 0x10c1b3a3 */
  if (C.zf) goto L_10c1b3a3;
  /* 10c1b391 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c1b398 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10c1b39e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c1b3a1 jmp 0x10c1b3ac */
  goto L_10c1b3ac;
L_10c1b3a3:;
  /* 10c1b3a3 call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c1b3a9u);
  /* 10c1b3a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c1b3ac:;
  /* 10c1b3ac cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b3b0 jne 0x10c1b436 */
  if (!C.zf) goto L_10c1b436;
  /* 10c1b3b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b3ba je 0x10c1b3ea */
  if (C.zf) goto L_10c1b3ea;
  /* 10c1b3bc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b3c0 jne 0x10c1b3d9 */
  if (!C.zf) goto L_10c1b3d9;
  /* 10c1b3c2 call 0x10c1a770 */
  push32(0x10c1b3c7u); f_10c1a770();
  /* 10c1b3c7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1b3cd call 0x10c1a780 */
  push32(0x10c1b3d2u); f_10c1a780();
  /* 10c1b3d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1b3d5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c1b3d7 jmp 0x10c1b3e5 */
  goto L_10c1b3e5;
L_10c1b3d9:;
  /* 10c1b3d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1b3dc push edx */
  push32((uint32_t)(EDX));
  /* 10c1b3dd call 0x10c1a6d0 */
  push32(0x10c1b3e2u); f_10c1a6d0();
  /* 10c1b3e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1b3e5:;
  /* 10c1b3e5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b3e8 jmp 0x10c1b43f */
  goto L_10c1b43f;
L_10c1b3ea:;
  /* 10c1b3ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b3ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1b3f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b3f3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b3f6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b3f9 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1b400 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c1b405 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1b40a je 0x10c1b41b */
  if (C.zf) goto L_10c1b41b;
  /* 10c1b40c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b40f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1b412 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b415 jne 0x10c1b41b */
  if (!C.zf) goto L_10c1b41b;
  /* 10c1b417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b419 jmp 0x10c1b43f */
  goto L_10c1b43f;
L_10c1b41b:;
  /* 10c1b41b call 0x10c1a770 */
  push32(0x10c1b420u); f_10c1a770();
  /* 10c1b420 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10c1b426 call 0x10c1a780 */
  push32(0x10c1b42bu); f_10c1a780();
  /* 10c1b42b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1b431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b434 jmp 0x10c1b43f */
  goto L_10c1b43f;
L_10c1b436:;
  /* 10c1b436 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1b439 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10c1b43f:;
  /* 10c1b43f mov esp, ebp */
  ESP = (EBP);
  /* 10c1b441 pop ebp */
  EBP = (pop32());
  /* 10c1b442 ret  */
  ESPCHK(0x10c1b1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b450 @ 0x10c1b450 (199 bytes, 68 insns) */
void f_10c1b450(void) {
  FTRACE(0x10c1b450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b450 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b451 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b453 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b454 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1b455 push esi */
  push32((uint32_t)(ESI));
  /* 10c1b456 push edi */
  push32((uint32_t)(EDI));
L_10c1b457:;
  /* 10c1b457 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b45b jne 0x10c1b47b */
  if (!C.zf) goto L_10c1b47b;
  /* 10c1b45d push 0x10c39e80 */
  push32((uint32_t)(0x10c39e80u));
  /* 10c1b462 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b464 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10c1b466 push 0x10c39f50 */
  push32((uint32_t)(0x10c39f50u));
  /* 10c1b46b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1b46d call 0x10c11960 */
  push32(0x10c1b472u); f_10c11960();
  /* 10c1b472 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b475 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b478 jne 0x10c1b47b */
  if (!C.zf) goto L_10c1b47b;
  /* 10c1b47a int3  */
  x86_unimpl("int3 @ 0x10c1b47a");
L_10c1b47b:;
  /* 10c1b47b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b47d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1b47f jne 0x10c1b457 */
  if (!C.zf) goto L_10c1b457;
  /* 10c1b481 mov ecx, dword ptr [0x10c3e61c] */
  ECX = (r32((uint32_t)(0x10c3e61c)));
  /* 10c1b487 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b48a mov dword ptr [0x10c3e61c], ecx */
  w32((uint32_t)(0x10c3e61c), (ECX));
  /* 10c1b490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b493 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1b496 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10c1b498 push 0x10c39f50 */
  push32((uint32_t)(0x10c39f50u));
  /* 10c1b49d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1b49f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c1b4a4 call 0x10c128a0 */
  push32(0x10c1b4a9u); f_10c128a0();
  /* 10c1b4a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b4ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4af mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c1b4b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4b5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b4b9 je 0x10c1b4d6 */
  if (C.zf) goto L_10c1b4d6;
  /* 10c1b4bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4be mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1b4c1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1b4c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4c7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c1b4ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4cd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10c1b4d4 jmp 0x10c1b4fb */
  goto L_10c1b4fb;
L_10c1b4d6:;
  /* 10c1b4d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4d9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1b4dc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b4df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4e2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c1b4e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4e8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b4eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4ee mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10c1b4f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4f4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10c1b4fb:;
  /* 10c1b4fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b4fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b501 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c1b504 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c1b506 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b509 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c1b510 pop edi */
  EDI = (pop32());
  /* 10c1b511 pop esi */
  ESI = (pop32());
  /* 10c1b512 pop ebx */
  EBX = (pop32());
  /* 10c1b513 mov esp, ebp */
  ESP = (EBP);
  /* 10c1b515 pop ebp */
  EBP = (pop32());
  /* 10c1b516 ret  */
  ESPCHK(0x10c1b450u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10c1b520 (50 bytes, 17 insns) */
void f_10c1b520(void) {
  FTRACE(0x10c1b520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b520 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b521 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b526 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b52c jb 0x10c1b532 */
  if (C.cf) goto L_10c1b532;
  /* 10c1b52e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b530 jmp 0x10c1b550 */
  goto L_10c1b550;
L_10c1b532:;
  /* 10c1b532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b535 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b53b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b53e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b541 mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1b548 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1b54d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10c1b550:;
  /* 10c1b550 pop ebp */
  EBP = (pop32());
  /* 10c1b551 ret  */
  ESPCHK(0x10c1b520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b560 @ 0x10c1b560 (300 bytes, 80 insns) */
void f_10c1b560(void) {
  FTRACE(0x10c1b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b560 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b561 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b563 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b564 cmp dword ptr [0x10c3fae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b56b jne 0x10c1b579 */
  if (!C.zf) goto L_10c1b579;
  /* 10c1b56d mov dword ptr [0x10c3fae0], 0x200 */
  w32((uint32_t)(0x10c3fae0), (0x200u));
  /* 10c1b577 jmp 0x10c1b58c */
  goto L_10c1b58c;
L_10c1b579:;
  /* 10c1b579 cmp dword ptr [0x10c3fae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b580 jge 0x10c1b58c */
  if ((C.sf==C.of)) goto L_10c1b58c;
  /* 10c1b582 mov dword ptr [0x10c3fae0], 0x14 */
  w32((uint32_t)(0x10c3fae0), (0x14u));
L_10c1b58c:;
  /* 10c1b58c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10c1b591 push 0x10c39f5c */
  push32((uint32_t)(0x10c39f5cu));
  /* 10c1b596 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1b598 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c1b59a mov eax, dword ptr [0x10c3fae0] */
  EAX = (r32((uint32_t)(0x10c3fae0)));
  /* 10c1b59f push eax */
  push32((uint32_t)(EAX));
  /* 10c1b5a0 call 0x10c12cb0 */
  push32(0x10c1b5a5u); f_10c12cb0();
  /* 10c1b5a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b5a8 mov dword ptr [0x10c3e790], eax */
  w32((uint32_t)(0x10c3e790), (EAX));
  /* 10c1b5ad cmp dword ptr [0x10c3e790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b5b4 jne 0x10c1b5f5 */
  if (!C.zf) goto L_10c1b5f5;
  /* 10c1b5b6 mov dword ptr [0x10c3fae0], 0x14 */
  w32((uint32_t)(0x10c3fae0), (0x14u));
  /* 10c1b5c0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10c1b5c5 push 0x10c39f5c */
  push32((uint32_t)(0x10c39f5cu));
  /* 10c1b5ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1b5cc push 4 */
  push32((uint32_t)(0x4u));
  /* 10c1b5ce mov ecx, dword ptr [0x10c3fae0] */
  ECX = (r32((uint32_t)(0x10c3fae0)));
  /* 10c1b5d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b5d5 call 0x10c12cb0 */
  push32(0x10c1b5dau); f_10c12cb0();
  /* 10c1b5da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b5dd mov dword ptr [0x10c3e790], eax */
  w32((uint32_t)(0x10c3e790), (EAX));
  /* 10c1b5e2 cmp dword ptr [0x10c3e790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b5e9 jne 0x10c1b5f5 */
  if (!C.zf) goto L_10c1b5f5;
  /* 10c1b5eb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10c1b5ed call 0x10c11810 */
  push32(0x10c1b5f2u); f_10c11810();
  /* 10c1b5f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1b5f5:;
  /* 10c1b5f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1b5fc jmp 0x10c1b607 */
  goto L_10c1b607;
L_10c1b5fe:;
  /* 10c1b5fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b601 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c1b607:;
  /* 10c1b607 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b60b jge 0x10c1b626 */
  if ((C.sf==C.of)) goto L_10c1b626;
  /* 10c1b60d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b610 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1b613 add eax, 0x10c3d120 */
  { uint32_t _a=(EAX),_b=(0x10c3d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b618 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b61b mov edx, dword ptr [0x10c3e790] */
  EDX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1b621 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10c1b624 jmp 0x10c1b5fe */
  goto L_10c1b5fe;
L_10c1b626:;
  /* 10c1b626 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1b62d jmp 0x10c1b638 */
  goto L_10c1b638;
L_10c1b62f:;
  /* 10c1b62f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b632 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1b638:;
  /* 10c1b638 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b63c jge 0x10c1b688 */
  if ((C.sf==C.of)) goto L_10c1b688;
  /* 10c1b63e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b641 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b644 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b647 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b64a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b64d mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1b654 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b658 je 0x10c1b676 */
  if (C.zf) goto L_10c1b676;
  /* 10c1b65a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b65d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b660 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b663 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1b666 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1b669 mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1b670 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b674 jne 0x10c1b686 */
  if (!C.zf) goto L_10c1b686;
L_10c1b676:;
  /* 10c1b676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1b679 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1b67c mov dword ptr [ecx + 0x10c3d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10c3d130), (0xffffffffu));
L_10c1b686:;
  /* 10c1b686 jmp 0x10c1b62f */
  goto L_10c1b62f;
L_10c1b688:;
  /* 10c1b688 mov esp, ebp */
  ESP = (EBP);
  /* 10c1b68a pop ebp */
  EBP = (pop32());
  /* 10c1b68b ret  */
  ESPCHK(0x10c1b560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b690 @ 0x10c1b690 (26 bytes, 9 insns) */
void f_10c1b690(void) {
  FTRACE(0x10c1b690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b690 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b691 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b693 call 0x10c1c290 */
  push32(0x10c1b698u); f_10c1c290();
  /* 10c1b698 movsx eax, byte ptr [0x10c3e434] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10c3e434))));
  /* 10c1b69f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1b6a1 je 0x10c1b6a8 */
  if (C.zf) goto L_10c1b6a8;
  /* 10c1b6a3 call 0x10c1c050 */
  push32(0x10c1b6a8u); f_10c1c050();
L_10c1b6a8:;
  /* 10c1b6a8 pop ebp */
  EBP = (pop32());
  /* 10c1b6a9 ret  */
  ESPCHK(0x10c1b690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6b0 @ 0x10c1b6b0 (61 bytes, 20 insns) */
void f_10c1b6b0(void) {
  FTRACE(0x10c1b6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b6b3 cmp dword ptr [ebp + 8], 0x10c3d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c3d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b6ba jb 0x10c1b6de */
  if (C.cf) goto L_10c1b6de;
  /* 10c1b6bc cmp dword ptr [ebp + 8], 0x10c3d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c3d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b6c3 ja 0x10c1b6de */
  if ((!C.cf&&!C.zf)) goto L_10c1b6de;
  /* 10c1b6c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b6c8 sub eax, 0x10c3d120 */
  { uint32_t _a=(EAX),_b=(0x10c3d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b6cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1b6d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b6d3 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b6d4 call 0x10c162a0 */
  push32(0x10c1b6d9u); f_10c162a0();
  /* 10c1b6d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b6dc jmp 0x10c1b6eb */
  goto L_10c1b6eb;
L_10c1b6de:;
  /* 10c1b6de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b6e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b6e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b6e5 call dword ptr [0x10c402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c0))), 0x10c1b6ebu);
L_10c1b6eb:;
  /* 10c1b6eb pop ebp */
  EBP = (pop32());
  /* 10c1b6ec ret  */
  ESPCHK(0x10c1b6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x10c1b6f0 (41 bytes, 16 insns) */
void f_10c1b6f0(void) {
  FTRACE(0x10c1b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b6f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b6f7 jge 0x10c1b70a */
  if ((C.sf==C.of)) goto L_10c1b70a;
  /* 10c1b6f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b6fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b6ff push eax */
  push32((uint32_t)(EAX));
  /* 10c1b700 call 0x10c162a0 */
  push32(0x10c1b705u); f_10c162a0();
  /* 10c1b705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b708 jmp 0x10c1b717 */
  goto L_10c1b717;
L_10c1b70a:;
  /* 10c1b70a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b70d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b710 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b711 call dword ptr [0x10c402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c0))), 0x10c1b717u);
L_10c1b717:;
  /* 10c1b717 pop ebp */
  EBP = (pop32());
  /* 10c1b718 ret  */
  ESPCHK(0x10c1b6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x10c1b720 (61 bytes, 20 insns) */
void f_10c1b720(void) {
  FTRACE(0x10c1b720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b720 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b721 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b723 cmp dword ptr [ebp + 8], 0x10c3d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c3d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b72a jb 0x10c1b74e */
  if (C.cf) goto L_10c1b74e;
  /* 10c1b72c cmp dword ptr [ebp + 8], 0x10c3d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10c3d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b733 ja 0x10c1b74e */
  if ((!C.cf&&!C.zf)) goto L_10c1b74e;
  /* 10c1b735 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b738 sub eax, 0x10c3d120 */
  { uint32_t _a=(EAX),_b=(0x10c3d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b73d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1b740 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b743 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b744 call 0x10c16340 */
  push32(0x10c1b749u); f_10c16340();
  /* 10c1b749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b74c jmp 0x10c1b75b */
  goto L_10c1b75b;
L_10c1b74e:;
  /* 10c1b74e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b751 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b754 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b755 call dword ptr [0x10c402c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c4))), 0x10c1b75bu);
L_10c1b75b:;
  /* 10c1b75b pop ebp */
  EBP = (pop32());
  /* 10c1b75c ret  */
  ESPCHK(0x10c1b720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b760 @ 0x10c1b760 (41 bytes, 16 insns) */
void f_10c1b760(void) {
  FTRACE(0x10c1b760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b760 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b761 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b763 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b767 jge 0x10c1b77a */
  if ((C.sf==C.of)) goto L_10c1b77a;
  /* 10c1b769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b76c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b76f push eax */
  push32((uint32_t)(EAX));
  /* 10c1b770 call 0x10c16340 */
  push32(0x10c1b775u); f_10c16340();
  /* 10c1b775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b778 jmp 0x10c1b787 */
  goto L_10c1b787;
L_10c1b77a:;
  /* 10c1b77a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b77d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b780 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b781 call dword ptr [0x10c402c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c4))), 0x10c1b787u);
L_10c1b787:;
  /* 10c1b787 pop ebp */
  EBP = (pop32());
  /* 10c1b788 ret  */
  ESPCHK(0x10c1b760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b790 @ 0x10c1b790 (119 bytes, 34 insns) */
void f_10c1b790(void) {
  FTRACE(0x10c1b790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b790 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b791 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b796 push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c1b79b call dword ptr [0x10c40244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40244))), 0x10c1b7a1u);
  /* 10c1b7a1 cmp dword ptr [0x10c3e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b7a8 je 0x10c1b7c8 */
  if (C.zf) goto L_10c1b7c8;
  /* 10c1b7aa push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c1b7af call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c1b7b5u);
  /* 10c1b7b5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1b7b7 call 0x10c162a0 */
  push32(0x10c1b7bcu); f_10c162a0();
  /* 10c1b7bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b7bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c1b7c6 jmp 0x10c1b7cf */
  goto L_10c1b7cf;
L_10c1b7c8:;
  /* 10c1b7c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c1b7cf:;
  /* 10c1b7cf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10c1b7d3 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b7d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b7d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b7d8 call 0x10c1b810 */
  push32(0x10c1b7ddu); f_10c1b810();
  /* 10c1b7dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b7e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1b7e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b7e7 je 0x10c1b7f5 */
  if (C.zf) goto L_10c1b7f5;
  /* 10c1b7e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1b7eb call 0x10c16340 */
  push32(0x10c1b7f0u); f_10c16340();
  /* 10c1b7f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b7f3 jmp 0x10c1b800 */
  goto L_10c1b800;
L_10c1b7f5:;
  /* 10c1b7f5 push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c1b7fa call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c1b800u);
L_10c1b800:;
  /* 10c1b800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1b803 mov esp, ebp */
  ESP = (EBP);
  /* 10c1b805 pop ebp */
  EBP = (pop32());
  /* 10c1b806 ret  */
  ESPCHK(0x10c1b790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b810 @ 0x10c1b810 (160 bytes, 50 insns) */
void f_10c1b810(void) {
  FTRACE(0x10c1b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b810 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b811 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1b816 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b81a jne 0x10c1b823 */
  if (!C.zf) goto L_10c1b823;
  /* 10c1b81c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b81e jmp 0x10c1b8ac */
  goto L_10c1b8ac;
L_10c1b823:;
  /* 10c1b823 cmp dword ptr [0x10c3e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b82a jne 0x10c1b85a */
  if (!C.zf) goto L_10c1b85a;
  /* 10c1b82c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1b82f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b834 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b839 jle 0x10c1b84b */
  if ((C.zf||C.sf!=C.of)) goto L_10c1b84b;
  /* 10c1b83b call 0x10c1a770 */
  push32(0x10c1b840u); f_10c1a770();
  /* 10c1b840 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10c1b846 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b849 jmp 0x10c1b8ac */
  goto L_10c1b8ac;
L_10c1b84b:;
  /* 10c1b84b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b84e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10c1b851 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10c1b853 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1b858 jmp 0x10c1b8ac */
  goto L_10c1b8ac;
L_10c1b85a:;
  /* 10c1b85a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1b861 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c1b864 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b865 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b867 mov ecx, dword ptr [0x10c3cea4] */
  ECX = (r32((uint32_t)(0x10c3cea4)));
  /* 10c1b86d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b86e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b871 push edx */
  push32((uint32_t)(EDX));
  /* 10c1b872 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1b874 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10c1b877 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b878 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c1b87d mov ecx, dword ptr [0x10c3e610] */
  ECX = (r32((uint32_t)(0x10c3e610)));
  /* 10c1b883 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b884 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c1b88au);
  /* 10c1b88a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1b88d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b891 je 0x10c1b899 */
  if (C.zf) goto L_10c1b899;
  /* 10c1b893 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b897 je 0x10c1b8a9 */
  if (C.zf) goto L_10c1b8a9;
L_10c1b899:;
  /* 10c1b899 call 0x10c1a770 */
  push32(0x10c1b89eu); f_10c1a770();
  /* 10c1b89e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10c1b8a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1b8a7 jmp 0x10c1b8ac */
  goto L_10c1b8ac;
L_10c1b8a9:;
  /* 10c1b8a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1b8ac:;
  /* 10c1b8ac mov esp, ebp */
  ESP = (EBP);
  /* 10c1b8ae pop ebp */
  EBP = (pop32());
  /* 10c1b8af ret  */
  ESPCHK(0x10c1b810u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10c1b8b0 (32 bytes, 18 insns) */
void f_10c1b8b0(void) {
  FTRACE(0x10c1b8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1b8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1b8b4 push esi */
  push32((uint32_t)(ESI));
  /* 10c1b8b5 push edi */
  push32((uint32_t)(EDI));
  /* 10c1b8b6 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1b8b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b8b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1b8bb push 0x10c1b8c8 */
  push32((uint32_t)(0x10c1b8c8u));
  /* 10c1b8c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10c1b8c3 call 0x10c22ffc */
  push32(0x10c1b8c8u); f_10c22ffc();
  /* 10c1b8c8 pop ebp */
  EBP = (pop32());
  /* 10c1b8c9 pop edi */
  EDI = (pop32());
  /* 10c1b8ca pop esi */
  ESI = (pop32());
  /* 10c1b8cb pop ebx */
  EBX = (pop32());
  /* 10c1b8cc mov esp, ebp */
  ESP = (EBP);
  /* 10c1b8ce pop ebp */
  EBP = (pop32());
  /* 10c1b8cf ret  */
  ESPCHK(0x10c1b8b0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10c1b8f2 (104 bytes, 33 insns) */
void f_10c1b8f2(void) {
  FTRACE(0x10c1b8f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b8f2 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1b8f3 push esi */
  push32((uint32_t)(ESI));
  /* 10c1b8f4 push edi */
  push32((uint32_t)(EDI));
  /* 10c1b8f5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c1b8f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1b8fa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10c1b8fc push 0x10c1b8d0 */
  push32((uint32_t)(0x10c1b8d0u));
  /* 10c1b901 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10c1b908 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10c1b90f:;
  /* 10c1b90f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10c1b913 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c1b916 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1b919 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b91c je 0x10c1b94c */
  if (C.zf) goto L_10c1b94c;
  /* 10c1b91e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b922 je 0x10c1b94c */
  if (C.zf) goto L_10c1b94c;
  /* 10c1b924 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10c1b927 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10c1b92a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10c1b92e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10c1b931 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1b936 jne 0x10c1b94a */
  if (!C.zf) goto L_10c1b94a;
  /* 10c1b938 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10c1b93d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10c1b941 call 0x10c1b986 */
  push32(0x10c1b946u); f_10c1b986();
  /* 10c1b946 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10c1b94au);
L_10c1b94a:;
  /* 10c1b94a jmp 0x10c1b90f */
  goto L_10c1b90f;
L_10c1b94c:;
  /* 10c1b94c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10c1b953 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1b956 pop edi */
  EDI = (pop32());
  /* 10c1b957 pop esi */
  ESI = (pop32());
  /* 10c1b958 pop ebx */
  EBX = (pop32());
  /* 10c1b959 ret  */
  ESPCHK(0x10c1b8f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b986 @ 0x10c1b986 (24 bytes, 10 insns) */
void f_10c1b986(void) {
  FTRACE(0x10c1b986u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1b986 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1b987 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1b988 mov ebx, 0x10c3d3b8 */
  EBX = (0x10c3d3b8u);
  /* 10c1b98d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1b990 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10c1b993 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10c1b996 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10c1b999 pop ecx */
  ECX = (pop32());
  /* 10c1b99a pop ebx */
  EBX = (pop32());
  /* 10c1b99b ret 4 */
  ESPCHK(0x10c1b986u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba65 @ 0x10c1ba65 (27 bytes, 11 insns) */
void f_10c1ba65(void) {
  FTRACE(0x10c1ba65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ba65 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ba66 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c1ba6a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10c1ba6c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c1ba6f push eax */
  push32((uint32_t)(EAX));
  /* 10c1ba70 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c1ba73 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ba74 call 0x10c1b8f2 */
  push32(0x10c1ba79u); f_10c1b8f2();
  /* 10c1ba79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ba7c pop ebp */
  EBP = (pop32());
  /* 10c1ba7d ret 4 */
  ESPCHK(0x10c1ba65u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba80 @ 0x10c1ba80 (482 bytes, 138 insns) */
void f_10c1ba80(void) {
  FTRACE(0x10c1ba80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ba80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ba81 mov ebp, esp */
  EBP = (ESP);
  /* 10c1ba83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ba86 push esi */
  push32((uint32_t)(ESI));
  /* 10c1ba87 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10c1ba8e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10c1ba90 call 0x10c162a0 */
  push32(0x10c1ba95u); f_10c162a0();
  /* 10c1ba95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ba98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c1ba9f jmp 0x10c1baaa */
  goto L_10c1baaa;
L_10c1baa1:;
  /* 10c1baa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1baa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1baa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c1baaa:;
  /* 10c1baaa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1baae jge 0x10c1bc50 */
  if ((C.sf==C.of)) goto L_10c1bc50;
  /* 10c1bab4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bab7 cmp dword ptr [ecx*4 + 0x10c3fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c3fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1babf je 0x10c1bbb6 */
  if (C.zf) goto L_10c1bbb6;
  /* 10c1bac5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bac8 mov eax, dword ptr [edx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c1bacf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1bad2 jmp 0x10c1badd */
  goto L_10c1badd;
L_10c1bad4:;
  /* 10c1bad4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bad7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bada mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c1badd:;
  /* 10c1badd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bae0 mov eax, dword ptr [edx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c1bae7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1baec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1baef jae 0x10c1bba6 */
  if (!C.cf) goto L_10c1bba6;
  /* 10c1baf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1baf8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c1bafc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1baff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1bb01 jne 0x10c1bba1 */
  if (!C.zf) goto L_10c1bba1;
  /* 10c1bb07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb0a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bb0e jne 0x10c1bb49 */
  if (!C.zf) goto L_10c1bb49;
  /* 10c1bb10 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c1bb12 call 0x10c162a0 */
  push32(0x10c1bb17u); f_10c162a0();
  /* 10c1bb17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bb1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb1d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bb21 jne 0x10c1bb3f */
  if (!C.zf) goto L_10c1bb3f;
  /* 10c1bb23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb26 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bb29 push edx */
  push32((uint32_t)(EDX));
  /* 10c1bb2a call dword ptr [0x10c402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402bc))), 0x10c1bb30u);
  /* 10c1bb30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb33 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c1bb36 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bb39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb3c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10c1bb3f:;
  /* 10c1bb3f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c1bb41 call 0x10c16340 */
  push32(0x10c1bb46u); f_10c16340();
  /* 10c1bb46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1bb49:;
  /* 10c1bb49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bb4f push eax */
  push32((uint32_t)(EAX));
  /* 10c1bb50 call dword ptr [0x10c402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c0))), 0x10c1bb56u);
  /* 10c1bb56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb59 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10c1bb5d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1bb60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1bb62 je 0x10c1bb76 */
  if (C.zf) goto L_10c1bb76;
  /* 10c1bb64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb67 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bb6a push eax */
  push32((uint32_t)(EAX));
  /* 10c1bb6b call dword ptr [0x10c402c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c4))), 0x10c1bb71u);
  /* 10c1bb71 jmp 0x10c1bad4 */
  goto L_10c1bad4;
L_10c1bb76:;
  /* 10c1bb76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb79 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c1bb7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bb82 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1bb85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bb88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bb8b sub eax, dword ptr [edx*4 + 0x10c3fde0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10c3fde0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1bb92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1bb93 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10c1bb98 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c1bb9a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bb9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1bb9f jmp 0x10c1bba6 */
  goto L_10c1bba6;
L_10c1bba1:;
  /* 10c1bba1 jmp 0x10c1bad4 */
  goto L_10c1bad4;
L_10c1bba6:;
  /* 10c1bba6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bbaa je 0x10c1bbb1 */
  if (C.zf) goto L_10c1bbb1;
  /* 10c1bbac jmp 0x10c1bc50 */
  goto L_10c1bc50;
L_10c1bbb1:;
  /* 10c1bbb1 jmp 0x10c1bc4b */
  goto L_10c1bc4b;
L_10c1bbb6:;
  /* 10c1bbb6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10c1bbb8 push 0x10c39f64 */
  push32((uint32_t)(0x10c39f64u));
  /* 10c1bbbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1bbbf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c1bbc4 call 0x10c128a0 */
  push32(0x10c1bbc9u); f_10c128a0();
  /* 10c1bbc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bbcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1bbcf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bbd3 je 0x10c1bc49 */
  if (C.zf) goto L_10c1bc49;
  /* 10c1bbd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bbd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bbdb mov dword ptr [eax*4 + 0x10c3fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10c3fde0), (ECX));
  /* 10c1bbe2 mov edx, dword ptr [0x10c3ff1c] */
  EDX = (r32((uint32_t)(0x10c3ff1c)));
  /* 10c1bbe8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bbeb mov dword ptr [0x10c3ff1c], edx */
  w32((uint32_t)(0x10c3ff1c), (EDX));
  /* 10c1bbf1 jmp 0x10c1bbfc */
  goto L_10c1bbfc;
L_10c1bbf3:;
  /* 10c1bbf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bbf6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bbf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1bbfc:;
  /* 10c1bbfc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bbff mov edx, dword ptr [ecx*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1bc06 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bc0c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bc0f jae 0x10c1bc34 */
  if (!C.cf) goto L_10c1bc34;
  /* 10c1bc11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bc14 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c1bc18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bc1b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c1bc21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bc24 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c1bc28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bc2b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c1bc32 jmp 0x10c1bbf3 */
  goto L_10c1bbf3;
L_10c1bc34:;
  /* 10c1bc34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1bc37 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1bc3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1bc3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1bc40 push edx */
  push32((uint32_t)(EDX));
  /* 10c1bc41 call 0x10c1bf90 */
  push32(0x10c1bc46u); f_10c1bf90();
  /* 10c1bc46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1bc49:;
  /* 10c1bc49 jmp 0x10c1bc50 */
  goto L_10c1bc50;
L_10c1bc4b:;
  /* 10c1bc4b jmp 0x10c1baa1 */
  goto L_10c1baa1;
L_10c1bc50:;
  /* 10c1bc50 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10c1bc52 call 0x10c16340 */
  push32(0x10c1bc57u); f_10c16340();
  /* 10c1bc57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bc5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1bc5d pop esi */
  ESI = (pop32());
  /* 10c1bc5e mov esp, ebp */
  ESP = (EBP);
  /* 10c1bc60 pop ebp */
  EBP = (pop32());
  /* 10c1bc61 ret  */
  ESPCHK(0x10c1ba80u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10c1bc70 (183 bytes, 57 insns) */
void f_10c1bc70(void) {
  FTRACE(0x10c1bc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1bc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1bc71 mov ebp, esp */
  EBP = (ESP);
  /* 10c1bc73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1bc74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bc77 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bc7d jae 0x10c1bd0a */
  if (!C.cf) goto L_10c1bd0a;
  /* 10c1bc83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bc86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1bc89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bc8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1bc8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1bc92 mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1bc99 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bc9d jne 0x10c1bd0a */
  if (!C.zf) goto L_10c1bd0a;
  /* 10c1bc9f cmp dword ptr [0x10c3e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bca6 jne 0x10c1bcea */
  if (!C.zf) goto L_10c1bcea;
  /* 10c1bca8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bcab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1bcae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bcb2 je 0x10c1bcc2 */
  if (C.zf) goto L_10c1bcc2;
  /* 10c1bcb4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bcb8 je 0x10c1bcd0 */
  if (C.zf) goto L_10c1bcd0;
  /* 10c1bcba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bcbe je 0x10c1bcde */
  if (C.zf) goto L_10c1bcde;
  /* 10c1bcc0 jmp 0x10c1bcea */
  goto L_10c1bcea;
L_10c1bcc2:;
  /* 10c1bcc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1bcc5 push edx */
  push32((uint32_t)(EDX));
  /* 10c1bcc6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10c1bcc8 call dword ptr [0x10c40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40304))), 0x10c1bcceu);
  /* 10c1bcce jmp 0x10c1bcea */
  goto L_10c1bcea;
L_10c1bcd0:;
  /* 10c1bcd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1bcd3 push eax */
  push32((uint32_t)(EAX));
  /* 10c1bcd4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c1bcd6 call dword ptr [0x10c40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40304))), 0x10c1bcdcu);
  /* 10c1bcdc jmp 0x10c1bcea */
  goto L_10c1bcea;
L_10c1bcde:;
  /* 10c1bcde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1bce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1bce2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c1bce4 call dword ptr [0x10c40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40304))), 0x10c1bceau);
L_10c1bcea:;
  /* 10c1bcea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bced sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c1bcf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bcf3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1bcf6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1bcf9 mov ecx, dword ptr [edx*4 + 0x10c3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c1bd00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1bd03 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10c1bd06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1bd08 jmp 0x10c1bd23 */
  goto L_10c1bd23;
L_10c1bd0a:;
  /* 10c1bd0a call 0x10c1a770 */
  push32(0x10c1bd0fu); f_10c1a770();
  /* 10c1bd0f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1bd15 call 0x10c1a780 */
  push32(0x10c1bd1au); f_10c1a780();
  /* 10c1bd1a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1bd20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c1bd23:;
  /* 10c1bd23 mov esp, ebp */
  ESP = (EBP);
  /* 10c1bd25 pop ebp */
  EBP = (pop32());
  /* 10c1bd26 ret  */
  ESPCHK(0x10c1bc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd30 @ 0x10c1bd30 (216 bytes, 63 insns) */
void f_10c1bd30(void) {
  FTRACE(0x10c1bd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1bd30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1bd31 mov ebp, esp */
  EBP = (ESP);
  /* 10c1bd33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1bd34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bd37 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bd3d jae 0x10c1bdeb */
  if (!C.cf) goto L_10c1bdeb;
  /* 10c1bd43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bd46 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1bd49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bd4c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1bd4f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1bd52 mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1bd59 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1bd5e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1bd61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1bd63 je 0x10c1bdeb */
  if (C.zf) goto L_10c1bdeb;
  /* 10c1bd69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bd6c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c1bd6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bd72 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1bd75 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1bd78 mov ecx, dword ptr [edx*4 + 0x10c3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c1bd7f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bd83 je 0x10c1bdeb */
  if (C.zf) goto L_10c1bdeb;
  /* 10c1bd85 cmp dword ptr [0x10c3e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bd8c jne 0x10c1bdca */
  if (!C.zf) goto L_10c1bdca;
  /* 10c1bd8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bd91 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1bd94 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bd98 je 0x10c1bda8 */
  if (C.zf) goto L_10c1bda8;
  /* 10c1bd9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bd9e je 0x10c1bdb4 */
  if (C.zf) goto L_10c1bdb4;
  /* 10c1bda0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bda4 je 0x10c1bdc0 */
  if (C.zf) goto L_10c1bdc0;
  /* 10c1bda6 jmp 0x10c1bdca */
  goto L_10c1bdca;
L_10c1bda8:;
  /* 10c1bda8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1bdaa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10c1bdac call dword ptr [0x10c40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40304))), 0x10c1bdb2u);
  /* 10c1bdb2 jmp 0x10c1bdca */
  goto L_10c1bdca;
L_10c1bdb4:;
  /* 10c1bdb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1bdb6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c1bdb8 call dword ptr [0x10c40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40304))), 0x10c1bdbeu);
  /* 10c1bdbe jmp 0x10c1bdca */
  goto L_10c1bdca;
L_10c1bdc0:;
  /* 10c1bdc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1bdc2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c1bdc4 call dword ptr [0x10c40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40304))), 0x10c1bdcau);
L_10c1bdca:;
  /* 10c1bdca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bdcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1bdd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bdd3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1bdd6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1bdd9 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1bde0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10c1bde7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1bde9 jmp 0x10c1be04 */
  goto L_10c1be04;
L_10c1bdeb:;
  /* 10c1bdeb call 0x10c1a770 */
  push32(0x10c1bdf0u); f_10c1a770();
  /* 10c1bdf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1bdf6 call 0x10c1a780 */
  push32(0x10c1bdfbu); f_10c1a780();
  /* 10c1bdfb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1be01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c1be04:;
  /* 10c1be04 mov esp, ebp */
  ESP = (EBP);
  /* 10c1be06 pop ebp */
  EBP = (pop32());
  /* 10c1be07 ret  */
  ESPCHK(0x10c1bd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x10c1be10 (102 bytes, 30 insns) */
void f_10c1be10(void) {
  FTRACE(0x10c1be10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1be10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1be11 mov ebp, esp */
  EBP = (ESP);
  /* 10c1be13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1be16 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1be1c jae 0x10c1be5b */
  if (!C.cf) goto L_10c1be5b;
  /* 10c1be1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1be21 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1be24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1be27 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1be2a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1be2d mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1be34 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1be39 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1be3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1be3e je 0x10c1be5b */
  if (C.zf) goto L_10c1be5b;
  /* 10c1be40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1be43 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10c1be46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1be49 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1be4c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1be4f mov ecx, dword ptr [edx*4 + 0x10c3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c1be56 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10c1be59 jmp 0x10c1be74 */
  goto L_10c1be74;
L_10c1be5b:;
  /* 10c1be5b call 0x10c1a770 */
  push32(0x10c1be60u); f_10c1a770();
  /* 10c1be60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1be66 call 0x10c1a780 */
  push32(0x10c1be6bu); f_10c1a780();
  /* 10c1be6b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1be71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c1be74:;
  /* 10c1be74 pop ebp */
  EBP = (pop32());
  /* 10c1be75 ret  */
  ESPCHK(0x10c1be10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x10c1be80 (260 bytes, 83 insns) */
void f_10c1be80(void) {
  FTRACE(0x10c1be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1be80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1be81 mov ebp, esp */
  EBP = (ESP);
  /* 10c1be83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1be86 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c1be8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1be8d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1be90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1be92 je 0x10c1be9d */
  if (C.zf) goto L_10c1be9d;
  /* 10c1be94 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c1be97 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c1be9a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10c1be9d:;
  /* 10c1be9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1bea0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1bea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1bea8 je 0x10c1beb2 */
  if (C.zf) goto L_10c1beb2;
  /* 10c1beaa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c1bead or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10c1beaf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10c1beb2:;
  /* 10c1beb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1beb5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1bebb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1bebd je 0x10c1bec8 */
  if (C.zf) goto L_10c1bec8;
  /* 10c1bebf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c1bec2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10c1bec5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10c1bec8:;
  /* 10c1bec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1becb push eax */
  push32((uint32_t)(EAX));
  /* 10c1becc call dword ptr [0x10c4027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4027c))), 0x10c1bed2u);
  /* 10c1bed2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1bed5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bed9 jne 0x10c1bef2 */
  if (!C.zf) goto L_10c1bef2;
  /* 10c1bedb call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c1bee1u);
  /* 10c1bee1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1bee2 call 0x10c1a6d0 */
  push32(0x10c1bee7u); f_10c1a6d0();
  /* 10c1bee7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1beea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1beed jmp 0x10c1bf80 */
  goto L_10c1bf80;
L_10c1bef2:;
  /* 10c1bef2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bef6 jne 0x10c1bf03 */
  if (!C.zf) goto L_10c1bf03;
  /* 10c1bef8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c1befb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10c1befe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10c1bf01 jmp 0x10c1bf12 */
  goto L_10c1bf12;
L_10c1bf03:;
  /* 10c1bf03 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bf07 jne 0x10c1bf12 */
  if (!C.zf) goto L_10c1bf12;
  /* 10c1bf09 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c1bf0c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10c1bf0f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10c1bf12:;
  /* 10c1bf12 call 0x10c1ba80 */
  push32(0x10c1bf17u); f_10c1ba80();
  /* 10c1bf17 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1bf1a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bf1e jne 0x10c1bf3b */
  if (!C.zf) goto L_10c1bf3b;
  /* 10c1bf20 call 0x10c1a770 */
  push32(0x10c1bf25u); f_10c1a770();
  /* 10c1bf25 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10c1bf2b call 0x10c1a780 */
  push32(0x10c1bf30u); f_10c1a780();
  /* 10c1bf30 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1bf36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1bf39 jmp 0x10c1bf80 */
  goto L_10c1bf80;
L_10c1bf3b:;
  /* 10c1bf3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bf3e push eax */
  push32((uint32_t)(EAX));
  /* 10c1bf3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1bf42 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1bf43 call 0x10c1bc70 */
  push32(0x10c1bf48u); f_10c1bc70();
  /* 10c1bf48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bf4b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c1bf4e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10c1bf51 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10c1bf54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1bf57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1bf5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1bf5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1bf60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1bf63 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1bf6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c1bf6d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10c1bf71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1bf74 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1bf75 call 0x10c1c020 */
  push32(0x10c1bf7au); f_10c1c020();
  /* 10c1bf7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bf7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c1bf80:;
  /* 10c1bf80 mov esp, ebp */
  ESP = (EBP);
  /* 10c1bf82 pop ebp */
  EBP = (pop32());
  /* 10c1bf83 ret  */
  ESPCHK(0x10c1be80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x10c1bf90 (134 bytes, 44 insns) */
void f_10c1bf90(void) {
  FTRACE(0x10c1bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1bf91 mov ebp, esp */
  EBP = (ESP);
  /* 10c1bf93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1bf94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bf97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1bf9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bf9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1bfa0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1bfa3 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1bfaa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bfac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1bfaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bfb2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bfb6 jne 0x10c1bff1 */
  if (!C.zf) goto L_10c1bff1;
  /* 10c1bfb8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c1bfba call 0x10c162a0 */
  push32(0x10c1bfbfu); f_10c162a0();
  /* 10c1bfbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bfc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bfc5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1bfc9 jne 0x10c1bfe7 */
  if (!C.zf) goto L_10c1bfe7;
  /* 10c1bfcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bfce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bfd1 push edx */
  push32((uint32_t)(EDX));
  /* 10c1bfd2 call dword ptr [0x10c402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402bc))), 0x10c1bfd8u);
  /* 10c1bfd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bfdb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c1bfde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1bfe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1bfe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10c1bfe7:;
  /* 10c1bfe7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c1bfe9 call 0x10c16340 */
  push32(0x10c1bfeeu); f_10c16340();
  /* 10c1bfee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1bff1:;
  /* 10c1bff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bff4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1bff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1bffa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1bffd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c000 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1c007 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10c1c00b push eax */
  push32((uint32_t)(EAX));
  /* 10c1c00c call dword ptr [0x10c402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c0))), 0x10c1c012u);
  /* 10c1c012 mov esp, ebp */
  ESP = (EBP);
  /* 10c1c014 pop ebp */
  EBP = (pop32());
  /* 10c1c015 ret  */
  ESPCHK(0x10c1bf90u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10c1c020 (38 bytes, 13 insns) */
void f_10c1c020(void) {
  FTRACE(0x10c1c020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c020 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c021 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c026 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1c029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c02c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1c02f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c032 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1c039 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10c1c03d push eax */
  push32((uint32_t)(EAX));
  /* 10c1c03e call dword ptr [0x10c402c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c4))), 0x10c1c044u);
  /* 10c1c044 pop ebp */
  EBP = (pop32());
  /* 10c1c045 ret  */
  ESPCHK(0x10c1c020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c050 @ 0x10c1c050 (218 bytes, 63 insns) */
void f_10c1c050(void) {
  FTRACE(0x10c1c050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c050 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c051 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c056 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1c05d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c05f call 0x10c162a0 */
  push32(0x10c1c064u); f_10c162a0();
  /* 10c1c064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c067 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10c1c06e jmp 0x10c1c079 */
  goto L_10c1c079;
L_10c1c070:;
  /* 10c1c070 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c073 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c076 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c1c079:;
  /* 10c1c079 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c07c cmp ecx, dword ptr [0x10c3fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c082 jge 0x10c1c119 */
  if ((C.sf==C.of)) goto L_10c1c119;
  /* 10c1c088 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c08b mov eax, dword ptr [0x10c3e790] */
  EAX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c090 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c094 je 0x10c1c114 */
  if (C.zf) goto L_10c1c114;
  /* 10c1c096 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c099 mov edx, dword ptr [0x10c3e790] */
  EDX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c09f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c1c0a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1c0a5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1c0ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1c0ad je 0x10c1c0d1 */
  if (C.zf) goto L_10c1c0d1;
  /* 10c1c0af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c0b2 mov eax, dword ptr [0x10c3e790] */
  EAX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c0b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c1c0ba push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c0bb call 0x10c1ce40 */
  push32(0x10c1c0c0u); f_10c1ce40();
  /* 10c1c0c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c0c3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c0c6 je 0x10c1c0d1 */
  if (C.zf) goto L_10c1c0d1;
  /* 10c1c0c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c0cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c0ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c1c0d1:;
  /* 10c1c0d1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c0d5 jl 0x10c1c114 */
  if ((C.sf!=C.of)) goto L_10c1c114;
  /* 10c1c0d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c0da mov ecx, dword ptr [0x10c3e790] */
  ECX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c0e0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c1c0e3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c0e6 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c0e7 call dword ptr [0x10c40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40284))), 0x10c1c0edu);
  /* 10c1c0ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c0ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c0f2 mov ecx, dword ptr [0x10c3e790] */
  ECX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c0f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c1c0fb push edx */
  push32((uint32_t)(EDX));
  /* 10c1c0fc call 0x10c13330 */
  push32(0x10c1c101u); f_10c13330();
  /* 10c1c101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c104 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c107 mov ecx, dword ptr [0x10c3e790] */
  ECX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c10d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10c1c114:;
  /* 10c1c114 jmp 0x10c1c070 */
  goto L_10c1c070;
L_10c1c119:;
  /* 10c1c119 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c11b call 0x10c16340 */
  push32(0x10c1c120u); f_10c16340();
  /* 10c1c120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c126 mov esp, ebp */
  ESP = (EBP);
  /* 10c1c128 pop ebp */
  EBP = (pop32());
  /* 10c1c129 ret  */
  ESPCHK(0x10c1c050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x10c1c130 (68 bytes, 26 insns) */
void f_10c1c130(void) {
  FTRACE(0x10c1c130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c130 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c131 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c133 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c134 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c138 jne 0x10c1c146 */
  if (!C.zf) goto L_10c1c146;
  /* 10c1c13a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1c13c call 0x10c1c2a0 */
  push32(0x10c1c141u); f_10c1c2a0();
  /* 10c1c141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c144 jmp 0x10c1c170 */
  goto L_10c1c170;
L_10c1c146:;
  /* 10c1c146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c149 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c14a call 0x10c1b6b0 */
  push32(0x10c1c14fu); f_10c1b6b0();
  /* 10c1c14f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c155 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c156 call 0x10c1c180 */
  push32(0x10c1c15bu); f_10c1c180();
  /* 10c1c15b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c15e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1c161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c164 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c165 call 0x10c1b720 */
  push32(0x10c1c16au); f_10c1b720();
  /* 10c1c16a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c16d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1c170:;
  /* 10c1c170 mov esp, ebp */
  ESP = (EBP);
  /* 10c1c172 pop ebp */
  EBP = (pop32());
  /* 10c1c173 ret  */
  ESPCHK(0x10c1c130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x10c1c180 (65 bytes, 26 insns) */
void f_10c1c180(void) {
  FTRACE(0x10c1c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c180 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c181 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c186 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c187 call 0x10c1c1d0 */
  push32(0x10c1c18cu); f_10c1c1d0();
  /* 10c1c18c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c191 je 0x10c1c198 */
  if (C.zf) goto L_10c1c198;
  /* 10c1c193 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c196 jmp 0x10c1c1bf */
  goto L_10c1c1bf;
L_10c1c198:;
  /* 10c1c198 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c19b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1c19e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1c1a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1c1a6 je 0x10c1c1bd */
  if (C.zf) goto L_10c1c1bd;
  /* 10c1c1a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c1ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1c1ae push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c1af call 0x10c1cf90 */
  push32(0x10c1c1b4u); f_10c1cf90();
  /* 10c1c1b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c1b7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1c1b9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c1bb jmp 0x10c1c1bf */
  goto L_10c1c1bf;
L_10c1c1bd:;
  /* 10c1c1bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1c1bf:;
  /* 10c1c1bf pop ebp */
  EBP = (pop32());
  /* 10c1c1c0 ret  */
  ESPCHK(0x10c1c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d0 @ 0x10c1c1d0 (183 bytes, 62 insns) */
void f_10c1c1d0(void) {
  FTRACE(0x10c1c1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c1d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c1d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c1d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1c1dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c1e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1c1e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c1e6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1c1e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1c1ec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c1ef jne 0x10c1c26b */
  if (!C.zf) goto L_10c1c26b;
  /* 10c1c1f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c1f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1c1f7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1c1fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1c1ff je 0x10c1c26b */
  if (C.zf) goto L_10c1c26b;
  /* 10c1c201 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c207 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10c1c209 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c20c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1c20f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c213 jle 0x10c1c26b */
  if ((C.zf||C.sf!=C.of)) goto L_10c1c26b;
  /* 10c1c215 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c218 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c219 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c21c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c1c21f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c220 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c223 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c1c226 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c227 call 0x10c1b140 */
  push32(0x10c1c22cu); f_10c1b140();
  /* 10c1c22c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c22f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c232 jne 0x10c1c255 */
  if (!C.zf) goto L_10c1c255;
  /* 10c1c234 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c237 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1c23a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1c240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1c242 je 0x10c1c253 */
  if (C.zf) goto L_10c1c253;
  /* 10c1c244 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c247 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1c24a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1c24d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c250 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10c1c253:;
  /* 10c1c253 jmp 0x10c1c26b */
  goto L_10c1c26b;
L_10c1c255:;
  /* 10c1c255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c258 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1c25b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1c25e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c261 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10c1c264 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c1c26b:;
  /* 10c1c26b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c26e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c271 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c1c274 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1c276 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c279 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c1c280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c283 mov esp, ebp */
  ESP = (EBP);
  /* 10c1c285 pop ebp */
  EBP = (pop32());
  /* 10c1c286 ret  */
  ESPCHK(0x10c1c1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c290 @ 0x10c1c290 (15 bytes, 7 insns) */
void f_10c1c290(void) {
  FTRACE(0x10c1c290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c290 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c291 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c293 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1c295 call 0x10c1c2a0 */
  push32(0x10c1c29au); f_10c1c2a0();
  /* 10c1c29a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c29d pop ebp */
  EBP = (pop32());
  /* 10c1c29e ret  */
  ESPCHK(0x10c1c290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x10c1c2a0 (319 bytes, 94 insns) */
void f_10c1c2a0(void) {
  FTRACE(0x10c1c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c2a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c2a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1c2ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1c2b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c2b6 call 0x10c162a0 */
  push32(0x10c1c2bbu); f_10c162a0();
  /* 10c1c2bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c2be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c1c2c5 jmp 0x10c1c2d0 */
  goto L_10c1c2d0;
L_10c1c2c7:;
  /* 10c1c2c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c2ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c2cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c1c2d0:;
  /* 10c1c2d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c2d3 cmp ecx, dword ptr [0x10c3fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c2d9 jge 0x10c1c3c3 */
  if ((C.sf==C.of)) goto L_10c1c3c3;
  /* 10c1c2df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c2e2 mov eax, dword ptr [0x10c3e790] */
  EAX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c2e7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c2eb je 0x10c1c3be */
  if (C.zf) goto L_10c1c3be;
  /* 10c1c2f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c2f4 mov edx, dword ptr [0x10c3e790] */
  EDX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c2fa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c1c2fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1c300 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1c306 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1c308 je 0x10c1c3be */
  if (C.zf) goto L_10c1c3be;
  /* 10c1c30e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c311 mov eax, dword ptr [0x10c3e790] */
  EAX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c316 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c1c319 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c31a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c31d push edx */
  push32((uint32_t)(EDX));
  /* 10c1c31e call 0x10c1b6f0 */
  push32(0x10c1c323u); f_10c1b6f0();
  /* 10c1c323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c326 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c329 mov ecx, dword ptr [0x10c3e790] */
  ECX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c32f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c1c332 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c1c335 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c33a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c33c je 0x10c1c3a5 */
  if (C.zf) goto L_10c1c3a5;
  /* 10c1c33e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c342 jne 0x10c1c369 */
  if (!C.zf) goto L_10c1c369;
  /* 10c1c344 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c347 mov edx, dword ptr [0x10c3e790] */
  EDX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c34d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c1c350 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c351 call 0x10c1c180 */
  push32(0x10c1c356u); f_10c1c180();
  /* 10c1c356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c359 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c35c je 0x10c1c367 */
  if (C.zf) goto L_10c1c367;
  /* 10c1c35e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c361 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c364 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c1c367:;
  /* 10c1c367 jmp 0x10c1c3a5 */
  goto L_10c1c3a5;
L_10c1c369:;
  /* 10c1c369 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c36d jne 0x10c1c3a5 */
  if (!C.zf) goto L_10c1c3a5;
  /* 10c1c36f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c372 mov eax, dword ptr [0x10c3e790] */
  EAX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c377 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c1c37a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1c37d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1c380 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1c382 je 0x10c1c3a5 */
  if (C.zf) goto L_10c1c3a5;
  /* 10c1c384 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c387 mov ecx, dword ptr [0x10c3e790] */
  ECX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c38d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c1c390 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c391 call 0x10c1c180 */
  push32(0x10c1c396u); f_10c1c180();
  /* 10c1c396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c399 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c39c jne 0x10c1c3a5 */
  if (!C.zf) goto L_10c1c3a5;
  /* 10c1c39e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10c1c3a5:;
  /* 10c1c3a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c3a8 mov ecx, dword ptr [0x10c3e790] */
  ECX = (r32((uint32_t)(0x10c3e790)));
  /* 10c1c3ae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c1c3b1 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c3b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c3b5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c3b6 call 0x10c1b760 */
  push32(0x10c1c3bbu); f_10c1b760();
  /* 10c1c3bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1c3be:;
  /* 10c1c3be jmp 0x10c1c2c7 */
  goto L_10c1c2c7;
L_10c1c3c3:;
  /* 10c1c3c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c3c5 call 0x10c16340 */
  push32(0x10c1c3cau); f_10c16340();
  /* 10c1c3ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c3cd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c3d1 jne 0x10c1c3d8 */
  if (!C.zf) goto L_10c1c3d8;
  /* 10c1c3d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c3d6 jmp 0x10c1c3db */
  goto L_10c1c3db;
L_10c1c3d8:;
  /* 10c1c3d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c1c3db:;
  /* 10c1c3db mov esp, ebp */
  ESP = (EBP);
  /* 10c1c3dd pop ebp */
  EBP = (pop32());
  /* 10c1c3de ret  */
  ESPCHK(0x10c1c2a0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10c1c3e0 (15 bytes, 7 insns) */
void f_10c1c3e0(void) {
  FTRACE(0x10c1c3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c3e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c3e5 call 0x10c11810 */
  push32(0x10c1c3eau); f_10c11810();
  /* 10c1c3ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c3ed pop ebp */
  EBP = (pop32());
  /* 10c1c3ee ret  */
  ESPCHK(0x10c1c3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x10c1c3f0 (1007 bytes, 269 insns) */
void f_10c1c3f0(void) {
  FTRACE(0x10c1c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c3f3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c3f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c3fd jl 0x10c1c405 */
  if ((C.sf!=C.of)) goto L_10c1c405;
  /* 10c1c3ff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c403 jle 0x10c1c40c */
  if ((C.zf||C.sf!=C.of)) goto L_10c1c40c;
L_10c1c405:;
  /* 10c1c405 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c407 jmp 0x10c1c7db */
  goto L_10c1c7db;
L_10c1c40c:;
  /* 10c1c40c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1c40e call 0x10c162a0 */
  push32(0x10c1c413u); f_10c162a0();
  /* 10c1c413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c416 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c1c41d mov eax, dword ptr [0x10c3e77c] */
  EAX = (r32((uint32_t)(0x10c3e77c)));
  /* 10c1c422 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c425 mov dword ptr [0x10c3e77c], eax */
  w32((uint32_t)(0x10c3e77c), (EAX));
L_10c1c42a:;
  /* 10c1c42a cmp dword ptr [0x10c3e78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c431 je 0x10c1c43d */
  if (C.zf) goto L_10c1c43d;
  /* 10c1c433 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1c435 call dword ptr [0x10c402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402e8))), 0x10c1c43bu);
  /* 10c1c43b jmp 0x10c1c42a */
  goto L_10c1c42a;
L_10c1c43d:;
  /* 10c1c43d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c441 je 0x10c1c481 */
  if (C.zf) goto L_10c1c481;
  /* 10c1c443 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c447 je 0x10c1c461 */
  if (C.zf) goto L_10c1c461;
  /* 10c1c449 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1c44c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c44d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c450 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c451 call 0x10c1c7e0 */
  push32(0x10c1c456u); f_10c1c7e0();
  /* 10c1c456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c459 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10c1c45f jmp 0x10c1c473 */
  goto L_10c1c473;
L_10c1c461:;
  /* 10c1c461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c464 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c467 mov ecx, dword ptr [eax + 0x10c3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10c3d4dc)));
  /* 10c1c46d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10c1c473:;
  /* 10c1c473 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10c1c479 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1c47c jmp 0x10c1c7bb */
  goto L_10c1c7bb;
L_10c1c481:;
  /* 10c1c481 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10c1c488 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c1c48f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c493 je 0x10c1c7b3 */
  if (C.zf) goto L_10c1c7b3;
  /* 10c1c499 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1c49c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1c49f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c4a2 jne 0x10c1c6c4 */
  if (!C.zf) goto L_10c1c6c4;
  /* 10c1c4a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1c4ab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c1c4af cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c4b2 jne 0x10c1c6c4 */
  if (!C.zf) goto L_10c1c6c4;
  /* 10c1c4b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1c4bb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10c1c4bf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c4c2 jne 0x10c1c6c4 */
  if (!C.zf) goto L_10c1c6c4;
  /* 10c1c4c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1c4cb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10c1c4d1:;
  /* 10c1c4d1 push 0x10c39fb4 */
  push32((uint32_t)(0x10c39fb4u));
  /* 10c1c4d6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c1c4dc push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c4dd call 0x10c1e640 */
  push32(0x10c1c4e2u); f_10c1e640();
  /* 10c1c4e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c4e5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10c1c4eb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c4f2 je 0x10c1c51d */
  if (C.zf) goto L_10c1c51d;
  /* 10c1c4f4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c4fa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c500 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10c1c506 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c50d je 0x10c1c51d */
  if (C.zf) goto L_10c1c51d;
  /* 10c1c50f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c515 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1c518 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c51b jne 0x10c1c543 */
  if (!C.zf) goto L_10c1c543;
L_10c1c51d:;
  /* 10c1c51d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c521 je 0x10c1c53c */
  if (C.zf) goto L_10c1c53c;
  /* 10c1c523 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1c525 call 0x10c16340 */
  push32(0x10c1c52au); f_10c16340();
  /* 10c1c52a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c52d mov edx, dword ptr [0x10c3e77c] */
  EDX = (r32((uint32_t)(0x10c3e77c)));
  /* 10c1c533 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c536 mov dword ptr [0x10c3e77c], edx */
  w32((uint32_t)(0x10c3e77c), (EDX));
L_10c1c53c:;
  /* 10c1c53c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c53e jmp 0x10c1c7db */
  goto L_10c1c7db;
L_10c1c543:;
  /* 10c1c543 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c1c54a jmp 0x10c1c555 */
  goto L_10c1c555;
L_10c1c54c:;
  /* 10c1c54c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1c54f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c552 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c1c555:;
  /* 10c1c555 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c559 jg 0x10c1c5a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1c5a3;
  /* 10c1c55b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c1c561 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c562 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c1c568 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c569 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1c56c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c56f mov ecx, dword ptr [eax + 0x10c3d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10c3d4d8)));
  /* 10c1c575 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c576 call 0x10c1e600 */
  push32(0x10c1c57bu); f_10c1e600();
  /* 10c1c57b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c580 jne 0x10c1c5a1 */
  if (!C.zf) goto L_10c1c5a1;
  /* 10c1c582 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1c585 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c588 mov eax, dword ptr [edx + 0x10c3d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10c3d4d8)));
  /* 10c1c58e push eax */
  push32((uint32_t)(EAX));
  /* 10c1c58f call 0x10c156d0 */
  push32(0x10c1c594u); f_10c156d0();
  /* 10c1c594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c597 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c59d jne 0x10c1c5a1 */
  if (!C.zf) goto L_10c1c5a1;
  /* 10c1c59f jmp 0x10c1c5a3 */
  goto L_10c1c5a3;
L_10c1c5a1:;
  /* 10c1c5a1 jmp 0x10c1c54c */
  goto L_10c1c54c;
L_10c1c5a3:;
  /* 10c1c5a3 push 0x10c39fb0 */
  push32((uint32_t)(0x10c39fb0u));
  /* 10c1c5a8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c5ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c5b1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10c1c5b7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c5bd push edx */
  push32((uint32_t)(EDX));
  /* 10c1c5be call 0x10c1e5c0 */
  push32(0x10c1c5c3u); f_10c1e5c0();
  /* 10c1c5c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c5c6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10c1c5cc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c5d3 jne 0x10c1c609 */
  if (!C.zf) goto L_10c1c609;
  /* 10c1c5d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c5db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1c5de cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c5e1 je 0x10c1c609 */
  if (C.zf) goto L_10c1c609;
  /* 10c1c5e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c5e7 je 0x10c1c602 */
  if (C.zf) goto L_10c1c602;
  /* 10c1c5e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1c5eb call 0x10c16340 */
  push32(0x10c1c5f0u); f_10c16340();
  /* 10c1c5f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c5f3 mov edx, dword ptr [0x10c3e77c] */
  EDX = (r32((uint32_t)(0x10c3e77c)));
  /* 10c1c5f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c5fc mov dword ptr [0x10c3e77c], edx */
  w32((uint32_t)(0x10c3e77c), (EDX));
L_10c1c602:;
  /* 10c1c602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c604 jmp 0x10c1c7db */
  goto L_10c1c7db;
L_10c1c609:;
  /* 10c1c609 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c60d jg 0x10c1c65a */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1c65a;
  /* 10c1c60f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c1c615 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c616 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c61c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c61d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10c1c623 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c624 call 0x10c160c0 */
  push32(0x10c1c629u); f_10c160c0();
  /* 10c1c629 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c62c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c1c632 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10c1c63a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10c1c640 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c641 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1c644 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c645 call 0x10c1c7e0 */
  push32(0x10c1c64au); f_10c1c7e0();
  /* 10c1c64a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c64f je 0x10c1c65a */
  if (C.zf) goto L_10c1c65a;
  /* 10c1c651 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c657 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c1c65a:;
  /* 10c1c65a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c660 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c666 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10c1c66c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c1c672 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c1c675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c677 je 0x10c1c688 */
  if (C.zf) goto L_10c1c688;
  /* 10c1c679 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c1c67f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c682 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10c1c688:;
  /* 10c1c688 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c1c68e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c1c691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c693 jne 0x10c1c4d1 */
  if (!C.zf) goto L_10c1c4d1;
  /* 10c1c699 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c69d je 0x10c1c6ac */
  if (C.zf) goto L_10c1c6ac;
  /* 10c1c69f call 0x10c1c980 */
  push32(0x10c1c6a4u); f_10c1c980();
  /* 10c1c6a4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10c1c6aa jmp 0x10c1c6b6 */
  goto L_10c1c6b6;
L_10c1c6ac:;
  /* 10c1c6ac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10c1c6b6:;
  /* 10c1c6b6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10c1c6bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1c6bf jmp 0x10c1c7b1 */
  goto L_10c1c7b1;
L_10c1c6c4:;
  /* 10c1c6c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c6c7 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c6c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1c6ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1c6cc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10c1c6d2 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c6d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1c6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c6d7 call 0x10c1ca80 */
  push32(0x10c1c6dcu); f_10c1ca80();
  /* 10c1c6dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c6df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1c6e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c6e6 je 0x10c1c7b1 */
  if (C.zf) goto L_10c1c7b1;
  /* 10c1c6ec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1c6f3 jmp 0x10c1c6fe */
  goto L_10c1c6fe;
L_10c1c6f5:;
  /* 10c1c6f5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1c6f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c6fb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c1c6fe:;
  /* 10c1c6fe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c702 jg 0x10c1c760 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1c760;
  /* 10c1c704 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c708 je 0x10c1c75e */
  if (C.zf) goto L_10c1c75e;
  /* 10c1c70a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1c70d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c710 mov ecx, dword ptr [eax + 0x10c3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10c3d4dc)));
  /* 10c1c716 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c717 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10c1c71d push edx */
  push32((uint32_t)(EDX));
  /* 10c1c71e call 0x10c1e530 */
  push32(0x10c1c723u); f_10c1e530();
  /* 10c1c723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c728 je 0x10c1c755 */
  if (C.zf) goto L_10c1c755;
  /* 10c1c72a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10c1c730 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c731 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1c734 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c735 call 0x10c1c7e0 */
  push32(0x10c1c73au); f_10c1c7e0();
  /* 10c1c73a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c73d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c73f je 0x10c1c74c */
  if (C.zf) goto L_10c1c74c;
  /* 10c1c741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c744 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c747 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c1c74a jmp 0x10c1c753 */
  goto L_10c1c753;
L_10c1c74c:;
  /* 10c1c74c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10c1c753:;
  /* 10c1c753 jmp 0x10c1c75e */
  goto L_10c1c75e;
L_10c1c755:;
  /* 10c1c755 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c758 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c75b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c1c75e:;
  /* 10c1c75e jmp 0x10c1c6f5 */
  goto L_10c1c6f5;
L_10c1c760:;
  /* 10c1c760 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c764 je 0x10c1c78b */
  if (C.zf) goto L_10c1c78b;
  /* 10c1c766 call 0x10c1c980 */
  push32(0x10c1c76bu); f_10c1c980();
  /* 10c1c76b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1c76e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c770 mov ecx, dword ptr [0x10c3d4dc] */
  ECX = (r32((uint32_t)(0x10c3d4dc)));
  /* 10c1c776 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c777 call 0x10c13330 */
  push32(0x10c1c77cu); f_10c13330();
  /* 10c1c77c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c77f mov dword ptr [0x10c3d4dc], 0 */
  w32((uint32_t)(0x10c3d4dc), (0x0u));
  /* 10c1c789 jmp 0x10c1c7b1 */
  goto L_10c1c7b1;
L_10c1c78b:;
  /* 10c1c78b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c78f je 0x10c1c79e */
  if (C.zf) goto L_10c1c79e;
  /* 10c1c791 call 0x10c1c980 */
  push32(0x10c1c796u); f_10c1c980();
  /* 10c1c796 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10c1c79c jmp 0x10c1c7a8 */
  goto L_10c1c7a8;
L_10c1c79e:;
  /* 10c1c79e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10c1c7a8:;
  /* 10c1c7a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10c1c7ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c1c7b1:;
  /* 10c1c7b1 jmp 0x10c1c7bb */
  goto L_10c1c7bb;
L_10c1c7b3:;
  /* 10c1c7b3 call 0x10c1c980 */
  push32(0x10c1c7b8u); f_10c1c980();
  /* 10c1c7b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c1c7bb:;
  /* 10c1c7bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c7bf je 0x10c1c7d8 */
  if (C.zf) goto L_10c1c7d8;
  /* 10c1c7c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1c7c3 call 0x10c16340 */
  push32(0x10c1c7c8u); f_10c16340();
  /* 10c1c7c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c7cb mov eax, dword ptr [0x10c3e77c] */
  EAX = (r32((uint32_t)(0x10c3e77c)));
  /* 10c1c7d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c7d3 mov dword ptr [0x10c3e77c], eax */
  w32((uint32_t)(0x10c3e77c), (EAX));
L_10c1c7d8:;
  /* 10c1c7d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c1c7db:;
  /* 10c1c7db mov esp, ebp */
  ESP = (EBP);
  /* 10c1c7dd pop ebp */
  EBP = (pop32());
  /* 10c1c7de ret  */
  ESPCHK(0x10c1c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7e0 @ 0x10c1c7e0 (403 bytes, 117 insns) */
void f_10c1c7e0(void) {
  FTRACE(0x10c1c7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c7e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c7e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c7e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c7ec push eax */
  push32((uint32_t)(EAX));
  /* 10c1c7ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10c1c7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c7f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10c1c7fa push edx */
  push32((uint32_t)(EDX));
  /* 10c1c7fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10c1c801 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c802 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1c805 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c806 call 0x10c1ca80 */
  push32(0x10c1c80bu); f_10c1ca80();
  /* 10c1c80b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c80e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c810 jne 0x10c1c819 */
  if (!C.zf) goto L_10c1c819;
  /* 10c1c812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c814 jmp 0x10c1c96f */
  goto L_10c1c96f;
L_10c1c819:;
  /* 10c1c819 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10c1c81e push 0x10c39fb8 */
  push32((uint32_t)(0x10c39fb8u));
  /* 10c1c823 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c825 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10c1c82b push edx */
  push32((uint32_t)(EDX));
  /* 10c1c82c call 0x10c156d0 */
  push32(0x10c1c831u); f_10c156d0();
  /* 10c1c831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c834 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c837 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c838 call 0x10c128a0 */
  push32(0x10c1c83du); f_10c128a0();
  /* 10c1c83d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c840 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1c843 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c847 jne 0x10c1c850 */
  if (!C.zf) goto L_10c1c850;
  /* 10c1c849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c84b jmp 0x10c1c96f */
  goto L_10c1c96f;
L_10c1c850:;
  /* 10c1c850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c853 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c856 mov ecx, dword ptr [eax + 0x10c3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10c3d4dc)));
  /* 10c1c85c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1c85f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c862 mov eax, dword ptr [edx*4 + 0x10c3e5f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3e5f8)));
  /* 10c1c869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1c86c push 6 */
  push32((uint32_t)(0x6u));
  /* 10c1c86e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c871 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c874 add ecx, 0x10c3e648 */
  { uint32_t _a=(ECX),_b=(0x10c3e648u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c87a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c87b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10c1c87e push edx */
  push32((uint32_t)(EDX));
  /* 10c1c87f call 0x10c19180 */
  push32(0x10c1c884u); f_10c19180();
  /* 10c1c884 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c887 mov eax, dword ptr [0x10c3e610] */
  EAX = (r32((uint32_t)(0x10c3e610)));
  /* 10c1c88c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c1c88f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10c1c895 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c896 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c899 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c89a call 0x10c15850 */
  push32(0x10c1c89fu); f_10c15850();
  /* 10c1c89f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c8a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c8a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c8a8 mov dword ptr [ecx + 0x10c3d4dc], eax */
  w32((uint32_t)(ECX + 0x10c3d4dc), (EAX));
  /* 10c1c8ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10c1c8b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1c8ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c8bd mov dword ptr [eax*4 + 0x10c3e5f8], edx */
  w32((uint32_t)(EAX*4 + 0x10c3e5f8), (EDX));
  /* 10c1c8c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10c1c8c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10c1c8cc push ecx */
  push32((uint32_t)(ECX));
  /* 10c1c8cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c8d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c8d3 add edx, 0x10c3e648 */
  { uint32_t _a=(EDX),_b=(0x10c3e648u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c8d9 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c8da call 0x10c19180 */
  push32(0x10c1c8dfu); f_10c19180();
  /* 10c1c8df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c8e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c8e6 jne 0x10c1c8f3 */
  if (!C.zf) goto L_10c1c8f3;
  /* 10c1c8e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c8ee mov dword ptr [0x10c3e610], eax */
  w32((uint32_t)(0x10c3e610), (EAX));
L_10c1c8f3:;
  /* 10c1c8f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c8f7 jne 0x10c1c905 */
  if (!C.zf) goto L_10c1c905;
  /* 10c1c8f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c1c8ff mov dword ptr [0x10c3e614], ecx */
  w32((uint32_t)(0x10c3e614), (ECX));
L_10c1c905:;
  /* 10c1c905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c908 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c90b call dword ptr [edx + 0x10c3d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10c3d4e0))), 0x10c1c911u);
  /* 10c1c911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1c913 je 0x10c1c94c */
  if (C.zf) goto L_10c1c94c;
  /* 10c1c915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c918 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c91b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c91e mov dword ptr [eax + 0x10c3d4dc], ecx */
  w32((uint32_t)(EAX + 0x10c3d4dc), (ECX));
  /* 10c1c924 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c926 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1c929 push edx */
  push32((uint32_t)(EDX));
  /* 10c1c92a call 0x10c13330 */
  push32(0x10c1c92fu); f_10c13330();
  /* 10c1c92f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c932 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c938 mov dword ptr [eax*4 + 0x10c3e5f8], ecx */
  w32((uint32_t)(EAX*4 + 0x10c3e5f8), (ECX));
  /* 10c1c93f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1c942 mov dword ptr [0x10c3e610], edx */
  w32((uint32_t)(0x10c3e610), (EDX));
  /* 10c1c948 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1c94a jmp 0x10c1c96f */
  goto L_10c1c96f;
L_10c1c94c:;
  /* 10c1c94c cmp dword ptr [ebp - 0xc], 0x10c3d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10c3d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c953 je 0x10c1c963 */
  if (C.zf) goto L_10c1c963;
  /* 10c1c955 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c957 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1c95a push eax */
  push32((uint32_t)(EAX));
  /* 10c1c95b call 0x10c13330 */
  push32(0x10c1c960u); f_10c13330();
  /* 10c1c960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1c963:;
  /* 10c1c963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1c966 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c969 mov eax, dword ptr [ecx + 0x10c3d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10c3d4dc)));
L_10c1c96f:;
  /* 10c1c96f mov esp, ebp */
  ESP = (EBP);
  /* 10c1c971 pop ebp */
  EBP = (pop32());
  /* 10c1c972 ret  */
  ESPCHK(0x10c1c7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x10c1c980 (256 bytes, 72 insns) */
void f_10c1c980(void) {
  FTRACE(0x10c1c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1c980 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1c981 mov ebp, esp */
  EBP = (ESP);
  /* 10c1c983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1c986 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c1c98d cmp dword ptr [0x10c3d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1c994 jne 0x10c1c9b4 */
  if (!C.zf) goto L_10c1c9b4;
  /* 10c1c996 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10c1c99b push 0x10c39fb8 */
  push32((uint32_t)(0x10c39fb8u));
  /* 10c1c9a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1c9a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10c1c9a7 call 0x10c128a0 */
  push32(0x10c1c9acu); f_10c128a0();
  /* 10c1c9ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c9af mov dword ptr [0x10c3d4dc], eax */
  w32((uint32_t)(0x10c3d4dc), (EAX));
L_10c1c9b4:;
  /* 10c1c9b4 mov eax, dword ptr [0x10c3d4dc] */
  EAX = (r32((uint32_t)(0x10c3d4dc)));
  /* 10c1c9b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c1c9bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c1c9c3 jmp 0x10c1c9ce */
  goto L_10c1c9ce;
L_10c1c9c5:;
  /* 10c1c9c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c9c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c9cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c1c9ce:;
  /* 10c1c9ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c9d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c9d4 mov eax, dword ptr [edx + 0x10c3d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10c3d4dc)));
  /* 10c1c9da push eax */
  push32((uint32_t)(EAX));
  /* 10c1c9db push 0x10c39fc4 */
  push32((uint32_t)(0x10c39fc4u));
  /* 10c1c9e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1c9e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1c9e6 mov edx, dword ptr [ecx + 0x10c3d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10c3d4d8)));
  /* 10c1c9ec push edx */
  push32((uint32_t)(EDX));
  /* 10c1c9ed push 3 */
  push32((uint32_t)(0x3u));
  /* 10c1c9ef mov eax, dword ptr [0x10c3d4dc] */
  EAX = (r32((uint32_t)(0x10c3d4dc)));
  /* 10c1c9f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c1c9f5 call 0x10c1cc20 */
  push32(0x10c1c9fau); f_10c1cc20();
  /* 10c1c9fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1c9fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ca01 jge 0x10c1ca49 */
  if ((C.sf==C.of)) goto L_10c1ca49;
  /* 10c1ca03 push 0x10c39fb0 */
  push32((uint32_t)(0x10c39fb0u));
  /* 10c1ca08 mov ecx, dword ptr [0x10c3d4dc] */
  ECX = (r32((uint32_t)(0x10c3d4dc)));
  /* 10c1ca0e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ca0f call 0x10c15860 */
  push32(0x10c1ca14u); f_10c15860();
  /* 10c1ca14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ca17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1ca1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ca1d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1ca20 mov eax, dword ptr [edx + 0x10c3d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10c3d4dc)));
  /* 10c1ca26 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ca27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1ca2a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1ca2d mov edx, dword ptr [ecx + 0x10c3d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10c3d4dc)));
  /* 10c1ca33 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ca34 call 0x10c1e530 */
  push32(0x10c1ca39u); f_10c1e530();
  /* 10c1ca39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ca3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ca3e je 0x10c1ca47 */
  if (C.zf) goto L_10c1ca47;
  /* 10c1ca40 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c1ca47:;
  /* 10c1ca47 jmp 0x10c1ca77 */
  goto L_10c1ca77;
L_10c1ca49:;
  /* 10c1ca49 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ca4d jne 0x10c1ca56 */
  if (!C.zf) goto L_10c1ca56;
  /* 10c1ca4f mov eax, dword ptr [0x10c3d4dc] */
  EAX = (r32((uint32_t)(0x10c3d4dc)));
  /* 10c1ca54 jmp 0x10c1ca7c */
  goto L_10c1ca7c;
L_10c1ca56:;
  /* 10c1ca56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1ca58 mov eax, dword ptr [0x10c3d4dc] */
  EAX = (r32((uint32_t)(0x10c3d4dc)));
  /* 10c1ca5d push eax */
  push32((uint32_t)(EAX));
  /* 10c1ca5e call 0x10c13330 */
  push32(0x10c1ca63u); f_10c13330();
  /* 10c1ca63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ca66 mov dword ptr [0x10c3d4dc], 0 */
  w32((uint32_t)(0x10c3d4dc), (0x0u));
  /* 10c1ca70 mov eax, dword ptr [0x10c3d4f4] */
  EAX = (r32((uint32_t)(0x10c3d4f4)));
  /* 10c1ca75 jmp 0x10c1ca7c */
  goto L_10c1ca7c;
L_10c1ca77:;
  /* 10c1ca77 jmp 0x10c1c9c5 */
  goto L_10c1c9c5;
L_10c1ca7c:;
  /* 10c1ca7c mov esp, ebp */
  ESP = (EBP);
  /* 10c1ca7e pop ebp */
  EBP = (pop32());
  /* 10c1ca7f ret  */
  ESPCHK(0x10c1c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca80 @ 0x10c1ca80 (388 bytes, 115 insns) */
void f_10c1ca80(void) {
  FTRACE(0x10c1ca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ca80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ca81 mov ebp, esp */
  EBP = (ESP);
  /* 10c1ca83 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ca89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ca8d jne 0x10c1ca96 */
  if (!C.zf) goto L_10c1ca96;
  /* 10c1ca8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ca91 jmp 0x10c1cc00 */
  goto L_10c1cc00;
L_10c1ca96:;
  /* 10c1ca96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ca99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1ca9c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ca9f jne 0x10c1caf0 */
  if (!C.zf) goto L_10c1caf0;
  /* 10c1caa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1caa4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c1caa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1caaa jne 0x10c1caf0 */
  if (!C.zf) goto L_10c1caf0;
  /* 10c1caac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1caaf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10c1cab2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cab5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10c1cab9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cabd je 0x10c1cad9 */
  if (C.zf) goto L_10c1cad9;
  /* 10c1cabf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1cac2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10c1cac7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1caca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10c1cad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1cad3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10c1cad9:;
  /* 10c1cad9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cadd je 0x10c1cae8 */
  if (C.zf) goto L_10c1cae8;
  /* 10c1cadf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1cae2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c1cae8:;
  /* 10c1cae8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1caeb jmp 0x10c1cc00 */
  goto L_10c1cc00;
L_10c1caf0:;
  /* 10c1caf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1caf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1caf4 push 0x10c3d450 */
  push32((uint32_t)(0x10c3d450u));
  /* 10c1caf9 call 0x10c1e530 */
  push32(0x10c1cafeu); f_10c1e530();
  /* 10c1cafe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cb01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cb03 je 0x10c1cbb8 */
  if (C.zf) goto L_10c1cbb8;
  /* 10c1cb09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cb0c push edx */
  push32((uint32_t)(EDX));
  /* 10c1cb0d push 0x10c3d3cc */
  push32((uint32_t)(0x10c3d3ccu));
  /* 10c1cb12 call 0x10c1e530 */
  push32(0x10c1cb17u); f_10c1e530();
  /* 10c1cb17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cb1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cb1c je 0x10c1cbb8 */
  if (C.zf) goto L_10c1cbb8;
  /* 10c1cb22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cb25 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cb26 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10c1cb2c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cb2d call 0x10c1cc70 */
  push32(0x10c1cb32u); f_10c1cc70();
  /* 10c1cb32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cb35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cb37 je 0x10c1cb40 */
  if (C.zf) goto L_10c1cb40;
  /* 10c1cb39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cb3b jmp 0x10c1cc00 */
  goto L_10c1cc00;
L_10c1cb40:;
  /* 10c1cb40 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10c1cb46 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cb47 push 0x10c3e620 */
  push32((uint32_t)(0x10c3e620u));
  /* 10c1cb4c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10c1cb52 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cb53 call 0x10c1e680 */
  push32(0x10c1cb58u); f_10c1e680();
  /* 10c1cb58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cb5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cb5d jne 0x10c1cb66 */
  if (!C.zf) goto L_10c1cb66;
  /* 10c1cb5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cb61 jmp 0x10c1cc00 */
  goto L_10c1cc00;
L_10c1cb66:;
  /* 10c1cb66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1cb68 mov cx, word ptr [0x10c3e624] */
  CX = (r16((uint32_t)(0x10c3e624)));
  /* 10c1cb6f mov dword ptr [0x10c3e628], ecx */
  w32((uint32_t)(0x10c3e628), (ECX));
  /* 10c1cb75 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10c1cb7b push edx */
  push32((uint32_t)(EDX));
  /* 10c1cb7c push 0x10c3d450 */
  push32((uint32_t)(0x10c3d450u));
  /* 10c1cb81 call 0x10c1cdd0 */
  push32(0x10c1cb86u); f_10c1cdd0();
  /* 10c1cb86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cb89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cb8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1cb8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1cb91 je 0x10c1cba6 */
  if (C.zf) goto L_10c1cba6;
  /* 10c1cb93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cb96 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cb97 push 0x10c3d3cc */
  push32((uint32_t)(0x10c3d3ccu));
  /* 10c1cb9c call 0x10c15850 */
  push32(0x10c1cba1u); f_10c15850();
  /* 10c1cba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cba4 jmp 0x10c1cbb8 */
  goto L_10c1cbb8;
L_10c1cba6:;
  /* 10c1cba6 push 0x10c3d450 */
  push32((uint32_t)(0x10c3d450u));
  /* 10c1cbab push 0x10c3d3cc */
  push32((uint32_t)(0x10c3d3ccu));
  /* 10c1cbb0 call 0x10c15850 */
  push32(0x10c1cbb5u); f_10c15850();
  /* 10c1cbb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1cbb8:;
  /* 10c1cbb8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cbbc je 0x10c1cbd1 */
  if (C.zf) goto L_10c1cbd1;
  /* 10c1cbbe push 6 */
  push32((uint32_t)(0x6u));
  /* 10c1cbc0 push 0x10c3e620 */
  push32((uint32_t)(0x10c3e620u));
  /* 10c1cbc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1cbc8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cbc9 call 0x10c19180 */
  push32(0x10c1cbceu); f_10c19180();
  /* 10c1cbce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1cbd1:;
  /* 10c1cbd1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cbd5 je 0x10c1cbea */
  if (C.zf) goto L_10c1cbea;
  /* 10c1cbd7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c1cbd9 push 0x10c3e628 */
  push32((uint32_t)(0x10c3e628u));
  /* 10c1cbde mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1cbe1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cbe2 call 0x10c19180 */
  push32(0x10c1cbe7u); f_10c19180();
  /* 10c1cbe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1cbea:;
  /* 10c1cbea push 0x10c3d450 */
  push32((uint32_t)(0x10c3d450u));
  /* 10c1cbef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cbf2 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cbf3 call 0x10c15850 */
  push32(0x10c1cbf8u); f_10c15850();
  /* 10c1cbf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cbfb mov eax, 0x10c3d450 */
  EAX = (0x10c3d450u);
L_10c1cc00:;
  /* 10c1cc00 mov esp, ebp */
  ESP = (EBP);
  /* 10c1cc02 pop ebp */
  EBP = (pop32());
  /* 10c1cc03 ret  */
  ESPCHK(0x10c1ca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x10c1cc10 (7 bytes, 5 insns) */
void f_10c1cc10(void) {
  FTRACE(0x10c1cc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1cc10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1cc11 mov ebp, esp */
  EBP = (ESP);
  /* 10c1cc13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cc15 pop ebp */
  EBP = (pop32());
  /* 10c1cc16 ret  */
  ESPCHK(0x10c1cc10u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10c1cc20 (79 bytes, 28 insns) */
void f_10c1cc20(void) {
  FTRACE(0x10c1cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1cc21 mov ebp, esp */
  EBP = (ESP);
  /* 10c1cc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1cc26 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10c1cc29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1cc2c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1cc33 jmp 0x10c1cc3e */
  goto L_10c1cc3e;
L_10c1cc35:;
  /* 10c1cc35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cc38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cc3b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c1cc3e:;
  /* 10c1cc3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cc41 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cc44 jge 0x10c1cc64 */
  if ((C.sf==C.of)) goto L_10c1cc64;
  /* 10c1cc46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1cc49 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cc4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1cc4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1cc52 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c1cc55 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cc56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cc59 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cc5a call 0x10c15860 */
  push32(0x10c1cc5fu); f_10c15860();
  /* 10c1cc5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cc62 jmp 0x10c1cc35 */
  goto L_10c1cc35;
L_10c1cc64:;
  /* 10c1cc64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1cc6b mov esp, ebp */
  ESP = (EBP);
  /* 10c1cc6d pop ebp */
  EBP = (pop32());
  /* 10c1cc6e ret  */
  ESPCHK(0x10c1cc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc70 @ 0x10c1cc70 (349 bytes, 122 insns) */
void f_10c1cc70(void) {
  FTRACE(0x10c1cc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1cc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1cc71 mov ebp, esp */
  EBP = (ESP);
  /* 10c1cc73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1cc76 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10c1cc7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1cc7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cc80 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cc81 call 0x10c16610 */
  push32(0x10c1cc86u); f_10c16610();
  /* 10c1cc86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cc89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cc8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1cc8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1cc91 jne 0x10c1cc9a */
  if (!C.zf) goto L_10c1cc9a;
  /* 10c1cc93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cc95 jmp 0x10c1cdc9 */
  goto L_10c1cdc9;
L_10c1cc9a:;
  /* 10c1cc9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cc9d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1cca0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cca3 jne 0x10c1ccd0 */
  if (!C.zf) goto L_10c1ccd0;
  /* 10c1cca5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cca8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c1ccac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ccae je 0x10c1ccd0 */
  if (C.zf) goto L_10c1ccd0;
  /* 10c1ccb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ccb3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ccb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ccb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ccba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ccc0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ccc1 call 0x10c15850 */
  push32(0x10c1ccc6u); f_10c15850();
  /* 10c1ccc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ccc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cccb jmp 0x10c1cdc9 */
  goto L_10c1cdc9;
L_10c1ccd0:;
  /* 10c1ccd0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1ccd7 jmp 0x10c1cce2 */
  goto L_10c1cce2;
L_10c1ccd9:;
  /* 10c1ccd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1ccdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ccdf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1cce2:;
  /* 10c1cce2 push 0x10c39fc8 */
  push32((uint32_t)(0x10c39fc8u));
  /* 10c1cce7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ccea push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cceb call 0x10c1e5c0 */
  push32(0x10c1ccf0u); f_10c1e5c0();
  /* 10c1ccf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ccf3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1ccf6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ccfa jne 0x10c1cd04 */
  if (!C.zf) goto L_10c1cd04;
  /* 10c1ccfc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ccff jmp 0x10c1cdc9 */
  goto L_10c1cdc9;
L_10c1cd04:;
  /* 10c1cd04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cd07 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cd0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1cd0c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10c1cd0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd13 jne 0x10c1cd3a */
  if (!C.zf) goto L_10c1cd3a;
  /* 10c1cd15 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd19 jge 0x10c1cd3a */
  if ((C.sf==C.of)) goto L_10c1cd3a;
  /* 10c1cd1b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1cd1f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd22 je 0x10c1cd3a */
  if (C.zf) goto L_10c1cd3a;
  /* 10c1cd24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1cd27 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cd28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cd2b push eax */
  push32((uint32_t)(EAX));
  /* 10c1cd2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cd2f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cd30 call 0x10c160c0 */
  push32(0x10c1cd35u); f_10c160c0();
  /* 10c1cd35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cd38 jmp 0x10c1cda0 */
  goto L_10c1cda0;
L_10c1cd3a:;
  /* 10c1cd3a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd3e jne 0x10c1cd68 */
  if (!C.zf) goto L_10c1cd68;
  /* 10c1cd40 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd44 jge 0x10c1cd68 */
  if ((C.sf==C.of)) goto L_10c1cd68;
  /* 10c1cd46 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1cd4a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd4d je 0x10c1cd68 */
  if (C.zf) goto L_10c1cd68;
  /* 10c1cd4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1cd52 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cd53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cd56 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cd57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cd5a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cd5d push edx */
  push32((uint32_t)(EDX));
  /* 10c1cd5e call 0x10c160c0 */
  push32(0x10c1cd63u); f_10c160c0();
  /* 10c1cd63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cd66 jmp 0x10c1cda0 */
  goto L_10c1cda0;
L_10c1cd68:;
  /* 10c1cd68 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd6c jne 0x10c1cd9b */
  if (!C.zf) goto L_10c1cd9b;
  /* 10c1cd6e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1cd72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cd74 je 0x10c1cd7f */
  if (C.zf) goto L_10c1cd7f;
  /* 10c1cd76 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1cd7a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cd7d jne 0x10c1cd9b */
  if (!C.zf) goto L_10c1cd9b;
L_10c1cd7f:;
  /* 10c1cd7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1cd82 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cd83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cd86 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cd87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cd8a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cd90 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cd91 call 0x10c160c0 */
  push32(0x10c1cd96u); f_10c160c0();
  /* 10c1cd96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cd99 jmp 0x10c1cda0 */
  goto L_10c1cda0;
L_10c1cd9b:;
  /* 10c1cd9b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cd9e jmp 0x10c1cdc9 */
  goto L_10c1cdc9;
L_10c1cda0:;
  /* 10c1cda0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1cda4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cda7 jne 0x10c1cdab */
  if (!C.zf) goto L_10c1cdab;
  /* 10c1cda9 jmp 0x10c1cdc7 */
  goto L_10c1cdc7;
L_10c1cdab:;
  /* 10c1cdab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1cdaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cdb1 jne 0x10c1cdb5 */
  if (!C.zf) goto L_10c1cdb5;
  /* 10c1cdb3 jmp 0x10c1cdc7 */
  goto L_10c1cdc7;
L_10c1cdb5:;
  /* 10c1cdb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1cdb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cdbb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10c1cdbf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c1cdc2 jmp 0x10c1ccd9 */
  goto L_10c1ccd9;
L_10c1cdc7:;
  /* 10c1cdc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1cdc9:;
  /* 10c1cdc9 mov esp, ebp */
  ESP = (EBP);
  /* 10c1cdcb pop ebp */
  EBP = (pop32());
  /* 10c1cdcc ret  */
  ESPCHK(0x10c1cc70u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10c1cdd0 (101 bytes, 36 insns) */
void f_10c1cdd0(void) {
  FTRACE(0x10c1cdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1cdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1cdd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1cdd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cdd6 push eax */
  push32((uint32_t)(EAX));
  /* 10c1cdd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cdda push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cddb call 0x10c15850 */
  push32(0x10c1cde0u); f_10c15850();
  /* 10c1cde0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cde3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cde6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10c1cdea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cdec je 0x10c1ce08 */
  if (C.zf) goto L_10c1ce08;
  /* 10c1cdee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1cdf1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cdf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cdf5 push 0x10c39fd0 */
  push32((uint32_t)(0x10c39fd0u));
  /* 10c1cdfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1cdfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cdff push edx */
  push32((uint32_t)(EDX));
  /* 10c1ce00 call 0x10c1cc20 */
  push32(0x10c1ce05u); f_10c1cc20();
  /* 10c1ce05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1ce08:;
  /* 10c1ce08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ce0b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10c1ce12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1ce14 je 0x10c1ce33 */
  if (C.zf) goto L_10c1ce33;
  /* 10c1ce16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ce19 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ce1f push edx */
  push32((uint32_t)(EDX));
  /* 10c1ce20 push 0x10c39fcc */
  push32((uint32_t)(0x10c39fccu));
  /* 10c1ce25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1ce27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ce2a push eax */
  push32((uint32_t)(EAX));
  /* 10c1ce2b call 0x10c1cc20 */
  push32(0x10c1ce30u); f_10c1cc20();
  /* 10c1ce30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1ce33:;
  /* 10c1ce33 pop ebp */
  EBP = (pop32());
  /* 10c1ce34 ret  */
  ESPCHK(0x10c1cdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x10c1ce40 (130 bytes, 50 insns) */
void f_10c1ce40(void) {
  FTRACE(0x10c1ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ce41 mov ebp, esp */
  EBP = (ESP);
  /* 10c1ce43 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ce44 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1ce45 push esi */
  push32((uint32_t)(ESI));
  /* 10c1ce46 push edi */
  push32((uint32_t)(EDI));
  /* 10c1ce47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c1ce4e:;
  /* 10c1ce4e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ce52 jne 0x10c1ce72 */
  if (!C.zf) goto L_10c1ce72;
  /* 10c1ce54 push 0x10c39fe0 */
  push32((uint32_t)(0x10c39fe0u));
  /* 10c1ce59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ce5b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10c1ce5d push 0x10c39fd4 */
  push32((uint32_t)(0x10c39fd4u));
  /* 10c1ce62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1ce64 call 0x10c11960 */
  push32(0x10c1ce69u); f_10c11960();
  /* 10c1ce69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ce6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ce6f jne 0x10c1ce72 */
  if (!C.zf) goto L_10c1ce72;
  /* 10c1ce71 int3  */
  x86_unimpl("int3 @ 0x10c1ce71");
L_10c1ce72:;
  /* 10c1ce72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ce74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ce76 jne 0x10c1ce4e */
  if (!C.zf) goto L_10c1ce4e;
  /* 10c1ce78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ce7b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1ce7e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1ce81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1ce83 je 0x10c1ce91 */
  if (C.zf) goto L_10c1ce91;
  /* 10c1ce85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ce88 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10c1ce8f jmp 0x10c1ceb8 */
  goto L_10c1ceb8;
L_10c1ce91:;
  /* 10c1ce91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ce94 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ce95 call 0x10c1b6b0 */
  push32(0x10c1ce9au); f_10c1b6b0();
  /* 10c1ce9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ce9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cea0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cea1 call 0x10c1ced0 */
  push32(0x10c1cea6u); f_10c1ced0();
  /* 10c1cea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cea9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1ceac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ceaf push eax */
  push32((uint32_t)(EAX));
  /* 10c1ceb0 call 0x10c1b720 */
  push32(0x10c1ceb5u); f_10c1b720();
  /* 10c1ceb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1ceb8:;
  /* 10c1ceb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1cebb pop edi */
  EDI = (pop32());
  /* 10c1cebc pop esi */
  ESI = (pop32());
  /* 10c1cebd pop ebx */
  EBX = (pop32());
  /* 10c1cebe mov esp, ebp */
  ESP = (EBP);
  /* 10c1cec0 pop ebp */
  EBP = (pop32());
  /* 10c1cec1 ret  */
  ESPCHK(0x10c1ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x10c1ced0 (190 bytes, 67 insns) */
void f_10c1ced0(void) {
  FTRACE(0x10c1ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ced1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1ced3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ced6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1ced7 push esi */
  push32((uint32_t)(ESI));
  /* 10c1ced8 push edi */
  push32((uint32_t)(EDI));
  /* 10c1ced9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c1cee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cee3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c1cee6:;
  /* 10c1cee6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ceea jne 0x10c1cf0a */
  if (!C.zf) goto L_10c1cf0a;
  /* 10c1ceec push 0x10c39e80 */
  push32((uint32_t)(0x10c39e80u));
  /* 10c1cef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1cef3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10c1cef5 push 0x10c39fd4 */
  push32((uint32_t)(0x10c39fd4u));
  /* 10c1cefa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1cefc call 0x10c11960 */
  push32(0x10c1cf01u); f_10c11960();
  /* 10c1cf01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cf04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cf07 jne 0x10c1cf0a */
  if (!C.zf) goto L_10c1cf0a;
  /* 10c1cf09 int3  */
  x86_unimpl("int3 @ 0x10c1cf09");
L_10c1cf0a:;
  /* 10c1cf0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1cf0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1cf0e jne 0x10c1cee6 */
  if (!C.zf) goto L_10c1cee6;
  /* 10c1cf10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf13 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c1cf16 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cf1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cf1d je 0x10c1cf7a */
  if (C.zf) goto L_10c1cf7a;
  /* 10c1cf1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf22 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cf23 call 0x10c1c1d0 */
  push32(0x10c1cf28u); f_10c1c1d0();
  /* 10c1cf28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cf2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1cf2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf31 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cf32 call 0x10c1f550 */
  push32(0x10c1cf37u); f_10c1f550();
  /* 10c1cf37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cf3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1cf40 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cf41 call 0x10c1f420 */
  push32(0x10c1cf46u); f_10c1f420();
  /* 10c1cf46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cf49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1cf4b jge 0x10c1cf56 */
  if ((C.sf==C.of)) goto L_10c1cf56;
  /* 10c1cf4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c1cf54 jmp 0x10c1cf7a */
  goto L_10c1cf7a;
L_10c1cf56:;
  /* 10c1cf56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf59 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cf5d je 0x10c1cf7a */
  if (C.zf) goto L_10c1cf7a;
  /* 10c1cf5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1cf61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf64 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c1cf67 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cf68 call 0x10c13330 */
  push32(0x10c1cf6du); f_10c13330();
  /* 10c1cf6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cf70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf73 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10c1cf7a:;
  /* 10c1cf7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1cf7d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10c1cf84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1cf87 pop edi */
  EDI = (pop32());
  /* 10c1cf88 pop esi */
  ESI = (pop32());
  /* 10c1cf89 pop ebx */
  EBX = (pop32());
  /* 10c1cf8a mov esp, ebp */
  ESP = (EBP);
  /* 10c1cf8c pop ebp */
  EBP = (pop32());
  /* 10c1cf8d ret  */
  ESPCHK(0x10c1ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf90 @ 0x10c1cf90 (210 bytes, 63 insns) */
void f_10c1cf90(void) {
  FTRACE(0x10c1cf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1cf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1cf91 mov ebp, esp */
  EBP = (ESP);
  /* 10c1cf93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1cf94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cf97 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1cf9d jae 0x10c1cfc1 */
  if (!C.cf) goto L_10c1cfc1;
  /* 10c1cf9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cfa2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1cfa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cfa8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1cfab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1cfae mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1cfb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1cfba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1cfbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1cfbf jne 0x10c1cfd4 */
  if (!C.zf) goto L_10c1cfd4;
L_10c1cfc1:;
  /* 10c1cfc1 call 0x10c1a770 */
  push32(0x10c1cfc6u); f_10c1a770();
  /* 10c1cfc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1cfcc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cfcf jmp 0x10c1d05e */
  goto L_10c1d05e;
L_10c1cfd4:;
  /* 10c1cfd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cfd7 push edx */
  push32((uint32_t)(EDX));
  /* 10c1cfd8 call 0x10c1bf90 */
  push32(0x10c1cfddu); f_10c1bf90();
  /* 10c1cfdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1cfe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cfe3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1cfe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1cfe9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1cfec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1cfef mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1cff6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10c1cffb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1cffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1d000 je 0x10c1d03d */
  if (C.zf) goto L_10c1d03d;
  /* 10c1d002 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d005 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d006 call 0x10c1be10 */
  push32(0x10c1d00bu); f_10c1be10();
  /* 10c1d00b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d00e push eax */
  push32((uint32_t)(EAX));
  /* 10c1d00f call dword ptr [0x10c4030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4030c))), 0x10c1d015u);
  /* 10c1d015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1d017 jne 0x10c1d024 */
  if (!C.zf) goto L_10c1d024;
  /* 10c1d019 call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c1d01fu);
  /* 10c1d01f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1d022 jmp 0x10c1d02b */
  goto L_10c1d02b;
L_10c1d024:;
  /* 10c1d024 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c1d02b:;
  /* 10c1d02b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1d02f jne 0x10c1d033 */
  if (!C.zf) goto L_10c1d033;
  /* 10c1d031 jmp 0x10c1d04f */
  goto L_10c1d04f;
L_10c1d033:;
  /* 10c1d033 call 0x10c1a780 */
  push32(0x10c1d038u); f_10c1a780();
  /* 10c1d038 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d03b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c1d03d:;
  /* 10c1d03d call 0x10c1a770 */
  push32(0x10c1d042u); f_10c1a770();
  /* 10c1d042 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1d048 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c1d04f:;
  /* 10c1d04f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d052 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d053 call 0x10c1c020 */
  push32(0x10c1d058u); f_10c1c020();
  /* 10c1d058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d05b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1d05e:;
  /* 10c1d05e mov esp, ebp */
  ESP = (EBP);
  /* 10c1d060 pop ebp */
  EBP = (pop32());
  /* 10c1d061 ret  */
  ESPCHK(0x10c1cf90u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10c1d070 (219 bytes, 64 insns) */
void f_10c1d070(void) {
  FTRACE(0x10c1d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1d070 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1d071 mov ebp, esp */
  EBP = (ESP);
  /* 10c1d073 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d074 cmp dword ptr [0x10c3e60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1d07b je 0x10c1d111 */
  if (C.zf) goto L_10c1d111;
  /* 10c1d081 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10c1d083 push 0x10c39ff0 */
  push32((uint32_t)(0x10c39ff0u));
  /* 10c1d088 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d08a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10c1d08f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d091 call 0x10c12cb0 */
  push32(0x10c1d096u); f_10c12cb0();
  /* 10c1d096 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1d09c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1d0a0 jne 0x10c1d0ac */
  if (!C.zf) goto L_10c1d0ac;
  /* 10c1d0a2 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1d0a7 jmp 0x10c1d147 */
  goto L_10c1d147;
L_10c1d0ac:;
  /* 10c1d0ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d0af push eax */
  push32((uint32_t)(EAX));
  /* 10c1d0b0 call 0x10c1d150 */
  push32(0x10c1d0b5u); f_10c1d150();
  /* 10c1d0b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d0b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1d0ba je 0x10c1d0dd */
  if (C.zf) goto L_10c1d0dd;
  /* 10c1d0bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d0bf push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d0c0 call 0x10c1d6e0 */
  push32(0x10c1d0c5u); f_10c1d6e0();
  /* 10c1d0c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d0c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d0ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d0cd push edx */
  push32((uint32_t)(EDX));
  /* 10c1d0ce call 0x10c13330 */
  push32(0x10c1d0d3u); f_10c13330();
  /* 10c1d0d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d0d6 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1d0db jmp 0x10c1d147 */
  goto L_10c1d147;
L_10c1d0dd:;
  /* 10c1d0dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d0e0 mov dword ptr [0x10c3dc98], eax */
  w32((uint32_t)(0x10c3dc98), (EAX));
  /* 10c1d0e5 mov ecx, dword ptr [0x10c3e62c] */
  ECX = (r32((uint32_t)(0x10c3e62c)));
  /* 10c1d0eb push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d0ec call 0x10c1d6e0 */
  push32(0x10c1d0f1u); f_10c1d6e0();
  /* 10c1d0f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d0f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d0f6 mov edx, dword ptr [0x10c3e62c] */
  EDX = (r32((uint32_t)(0x10c3e62c)));
  /* 10c1d0fc push edx */
  push32((uint32_t)(EDX));
  /* 10c1d0fd call 0x10c13330 */
  push32(0x10c1d102u); f_10c13330();
  /* 10c1d102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d108 mov dword ptr [0x10c3e62c], eax */
  w32((uint32_t)(0x10c3e62c), (EAX));
  /* 10c1d10d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1d10f jmp 0x10c1d147 */
  goto L_10c1d147;
L_10c1d111:;
  /* 10c1d111 mov dword ptr [0x10c3dc98], 0x10c3dca0 */
  w32((uint32_t)(0x10c3dc98), (0x10c3dca0u));
  /* 10c1d11b mov ecx, dword ptr [0x10c3e62c] */
  ECX = (r32((uint32_t)(0x10c3e62c)));
  /* 10c1d121 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d122 call 0x10c1d6e0 */
  push32(0x10c1d127u); f_10c1d6e0();
  /* 10c1d127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d12a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d12c mov edx, dword ptr [0x10c3e62c] */
  EDX = (r32((uint32_t)(0x10c3e62c)));
  /* 10c1d132 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d133 call 0x10c13330 */
  push32(0x10c1d138u); f_10c13330();
  /* 10c1d138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d13b mov dword ptr [0x10c3e62c], 0 */
  w32((uint32_t)(0x10c3e62c), (0x0u));
  /* 10c1d145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1d147:;
  /* 10c1d147 mov esp, ebp */
  ESP = (EBP);
  /* 10c1d149 pop ebp */
  EBP = (pop32());
  /* 10c1d14a ret  */
  ESPCHK(0x10c1d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x10c1d150 (1423 bytes, 533 insns) */
void f_10c1d150(void) {
  FTRACE(0x10c1d150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1d150 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1d151 mov ebp, esp */
  EBP = (ESP);
  /* 10c1d153 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1d156 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c1d15d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1d15f mov ax, word ptr [0x10c3e666] */
  AX = (r16((uint32_t)(0x10c3e666)));
  /* 10c1d165 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1d168 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d16a mov cx, word ptr [0x10c3e668] */
  CX = (r16((uint32_t)(0x10c3e668)));
  /* 10c1d171 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1d174 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1d178 jne 0x10c1d182 */
  if (!C.zf) goto L_10c1d182;
  /* 10c1d17a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1d17d jmp 0x10c1d6db */
  goto L_10c1d6db;
L_10c1d182:;
  /* 10c1d182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d185 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d188 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d189 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10c1d18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d18e push eax */
  push32((uint32_t)(EAX));
  /* 10c1d18f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d191 call 0x10c20a60 */
  push32(0x10c1d196u); f_10c20a60();
  /* 10c1d196 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d19c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d19e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d1a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d1a4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d1a7 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d1a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10c1d1aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d1ad push eax */
  push32((uint32_t)(EAX));
  /* 10c1d1ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d1b0 call 0x10c20a60 */
  push32(0x10c1d1b5u); f_10c20a60();
  /* 10c1d1b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d1b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d1bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d1bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d1c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d1c3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d1c6 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d1c7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10c1d1c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d1cc push eax */
  push32((uint32_t)(EAX));
  /* 10c1d1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d1cf call 0x10c20a60 */
  push32(0x10c1d1d4u); f_10c20a60();
  /* 10c1d1d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d1d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d1da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d1dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d1df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d1e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d1e5 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d1e6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10c1d1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d1eb push eax */
  push32((uint32_t)(EAX));
  /* 10c1d1ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d1ee call 0x10c20a60 */
  push32(0x10c1d1f3u); f_10c20a60();
  /* 10c1d1f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d1f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d1f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d1fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d1fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d201 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d204 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d205 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10c1d207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d20a push eax */
  push32((uint32_t)(EAX));
  /* 10c1d20b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d20d call 0x10c20a60 */
  push32(0x10c1d212u); f_10c20a60();
  /* 10c1d212 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d218 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d21a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d21d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d220 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d223 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d224 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10c1d226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d229 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d22a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d22c call 0x10c20a60 */
  push32(0x10c1d231u); f_10c20a60();
  /* 10c1d231 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d234 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d237 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d239 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d23c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d23f push edx */
  push32((uint32_t)(EDX));
  /* 10c1d240 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10c1d242 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d245 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d248 call 0x10c20a60 */
  push32(0x10c1d24du); f_10c20a60();
  /* 10c1d24d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d250 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d253 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d255 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d258 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d25b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d25e push edx */
  push32((uint32_t)(EDX));
  /* 10c1d25f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10c1d261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d264 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d265 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d267 call 0x10c20a60 */
  push32(0x10c1d26cu); f_10c20a60();
  /* 10c1d26c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d26f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d272 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d274 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d27a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d27d push edx */
  push32((uint32_t)(EDX));
  /* 10c1d27e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10c1d280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d283 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d284 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d286 call 0x10c20a60 */
  push32(0x10c1d28bu); f_10c20a60();
  /* 10c1d28b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d28e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d291 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d293 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d296 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d299 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d29c push edx */
  push32((uint32_t)(EDX));
  /* 10c1d29d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10c1d29f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d2a2 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d2a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d2a5 call 0x10c20a60 */
  push32(0x10c1d2aau); f_10c20a60();
  /* 10c1d2aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d2ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d2b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d2b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d2b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d2b8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d2bb push edx */
  push32((uint32_t)(EDX));
  /* 10c1d2bc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10c1d2be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d2c1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d2c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d2c4 call 0x10c20a60 */
  push32(0x10c1d2c9u); f_10c20a60();
  /* 10c1d2c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d2cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d2cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d2d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d2d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d2d7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d2da push edx */
  push32((uint32_t)(EDX));
  /* 10c1d2db push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10c1d2dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d2e0 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d2e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d2e3 call 0x10c20a60 */
  push32(0x10c1d2e8u); f_10c20a60();
  /* 10c1d2e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d2eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d2ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d2f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d2f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d2f6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d2f9 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d2fa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10c1d2fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d2ff push eax */
  push32((uint32_t)(EAX));
  /* 10c1d300 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d302 call 0x10c20a60 */
  push32(0x10c1d307u); f_10c20a60();
  /* 10c1d307 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d30a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d30d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d30f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d315 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d318 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d319 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c1d31b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d31e push eax */
  push32((uint32_t)(EAX));
  /* 10c1d31f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d321 call 0x10c20a60 */
  push32(0x10c1d326u); f_10c20a60();
  /* 10c1d326 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d329 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d32c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d32e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d334 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d337 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d338 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10c1d33a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d33d push eax */
  push32((uint32_t)(EAX));
  /* 10c1d33e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d340 call 0x10c20a60 */
  push32(0x10c1d345u); f_10c20a60();
  /* 10c1d345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d348 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d34b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d34d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d350 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d353 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d356 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d357 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10c1d359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d35c push eax */
  push32((uint32_t)(EAX));
  /* 10c1d35d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d35f call 0x10c20a60 */
  push32(0x10c1d364u); f_10c20a60();
  /* 10c1d364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d367 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d36a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d36c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d372 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d375 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d376 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10c1d378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d37b push eax */
  push32((uint32_t)(EAX));
  /* 10c1d37c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d37e call 0x10c20a60 */
  push32(0x10c1d383u); f_10c20a60();
  /* 10c1d383 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d389 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d38b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d38e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d391 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d394 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d395 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10c1d397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d39a push eax */
  push32((uint32_t)(EAX));
  /* 10c1d39b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d39d call 0x10c20a60 */
  push32(0x10c1d3a2u); f_10c20a60();
  /* 10c1d3a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d3a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d3a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d3aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d3ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d3b0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d3b3 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d3b4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10c1d3b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d3b9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d3ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d3bc call 0x10c20a60 */
  push32(0x10c1d3c1u); f_10c20a60();
  /* 10c1d3c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d3c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d3c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d3cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d3cf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d3d2 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d3d3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10c1d3d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d3d8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d3d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d3db call 0x10c20a60 */
  push32(0x10c1d3e0u); f_10c20a60();
  /* 10c1d3e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d3e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d3e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d3e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d3eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d3ee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d3f1 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d3f2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10c1d3f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d3f7 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d3fa call 0x10c20a60 */
  push32(0x10c1d3ffu); f_10c20a60();
  /* 10c1d3ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d402 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d405 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d407 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d40a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d40d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d410 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d411 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10c1d413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d416 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d417 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d419 call 0x10c20a60 */
  push32(0x10c1d41eu); f_10c20a60();
  /* 10c1d41e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d421 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d424 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d426 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d429 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d42c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d42f push edx */
  push32((uint32_t)(EDX));
  /* 10c1d430 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10c1d432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d435 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d436 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d438 call 0x10c20a60 */
  push32(0x10c1d43du); f_10c20a60();
  /* 10c1d43d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d443 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d445 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d44b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d44e push edx */
  push32((uint32_t)(EDX));
  /* 10c1d44f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10c1d451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d454 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d455 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d457 call 0x10c20a60 */
  push32(0x10c1d45cu); f_10c20a60();
  /* 10c1d45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d45f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d462 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d464 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d46a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d46d push edx */
  push32((uint32_t)(EDX));
  /* 10c1d46e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10c1d470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d473 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d474 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d476 call 0x10c20a60 */
  push32(0x10c1d47bu); f_10c20a60();
  /* 10c1d47b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d47e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d481 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d483 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d486 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d489 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d48c push edx */
  push32((uint32_t)(EDX));
  /* 10c1d48d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10c1d48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d492 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d495 call 0x10c20a60 */
  push32(0x10c1d49au); f_10c20a60();
  /* 10c1d49a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d49d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d4a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d4a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d4a8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d4ab push edx */
  push32((uint32_t)(EDX));
  /* 10c1d4ac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10c1d4ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d4b1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d4b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d4b4 call 0x10c20a60 */
  push32(0x10c1d4b9u); f_10c20a60();
  /* 10c1d4b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d4bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d4bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d4c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d4c7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d4ca push edx */
  push32((uint32_t)(EDX));
  /* 10c1d4cb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10c1d4cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d4d0 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d4d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d4d3 call 0x10c20a60 */
  push32(0x10c1d4d8u); f_10c20a60();
  /* 10c1d4d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d4db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d4de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d4e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d4e6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d4e9 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d4ea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10c1d4ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d4ef push eax */
  push32((uint32_t)(EAX));
  /* 10c1d4f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d4f2 call 0x10c20a60 */
  push32(0x10c1d4f7u); f_10c20a60();
  /* 10c1d4f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d4fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d4fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d4ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d505 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d508 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d509 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10c1d50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d50e push eax */
  push32((uint32_t)(EAX));
  /* 10c1d50f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d511 call 0x10c20a60 */
  push32(0x10c1d516u); f_10c20a60();
  /* 10c1d516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d519 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d51c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d51e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d524 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d527 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d528 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10c1d52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d52d push eax */
  push32((uint32_t)(EAX));
  /* 10c1d52e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d530 call 0x10c20a60 */
  push32(0x10c1d535u); f_10c20a60();
  /* 10c1d535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d538 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d53b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d53d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d543 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d546 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d547 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10c1d549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d54c push eax */
  push32((uint32_t)(EAX));
  /* 10c1d54d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d54f call 0x10c20a60 */
  push32(0x10c1d554u); f_10c20a60();
  /* 10c1d554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d55a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d55c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d55f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d562 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d568 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d569 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10c1d56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d56e push eax */
  push32((uint32_t)(EAX));
  /* 10c1d56f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d571 call 0x10c20a60 */
  push32(0x10c1d576u); f_10c20a60();
  /* 10c1d576 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d579 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d57c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d57e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d584 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d58a push edx */
  push32((uint32_t)(EDX));
  /* 10c1d58b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10c1d58d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d590 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d591 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d593 call 0x10c20a60 */
  push32(0x10c1d598u); f_10c20a60();
  /* 10c1d598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d59b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d59e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d5a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d5a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d5a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d5ac push edx */
  push32((uint32_t)(EDX));
  /* 10c1d5ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c1d5af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d5b2 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d5b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d5b5 call 0x10c20a60 */
  push32(0x10c1d5bau); f_10c20a60();
  /* 10c1d5ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d5bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d5c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d5c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d5c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d5c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d5ce push edx */
  push32((uint32_t)(EDX));
  /* 10c1d5cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10c1d5d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d5d4 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d5d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d5d7 call 0x10c20a60 */
  push32(0x10c1d5dcu); f_10c20a60();
  /* 10c1d5dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d5df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d5e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d5e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d5e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d5ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d5f0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d5f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10c1d5f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d5f6 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d5f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d5f9 call 0x10c20a60 */
  push32(0x10c1d5feu); f_10c20a60();
  /* 10c1d5fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d601 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d604 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d606 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d609 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d60c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d612 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d613 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10c1d615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d618 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d619 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d61b call 0x10c20a60 */
  push32(0x10c1d620u); f_10c20a60();
  /* 10c1d620 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d623 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d626 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d628 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d62b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d62e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d634 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d635 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10c1d637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d63a push eax */
  push32((uint32_t)(EAX));
  /* 10c1d63b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d63d call 0x10c20a60 */
  push32(0x10c1d642u); f_10c20a60();
  /* 10c1d642 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d648 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d64a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d64d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d650 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d656 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d657 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10c1d659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1d65c push eax */
  push32((uint32_t)(EAX));
  /* 10c1d65d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d65f call 0x10c20a60 */
  push32(0x10c1d664u); f_10c20a60();
  /* 10c1d664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d667 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d66a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d66c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d66f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d672 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d678 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d679 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10c1d67b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1d67e push eax */
  push32((uint32_t)(EAX));
  /* 10c1d67f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d681 call 0x10c20a60 */
  push32(0x10c1d686u); f_10c20a60();
  /* 10c1d686 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d689 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d68c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d68e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d694 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d69a push edx */
  push32((uint32_t)(EDX));
  /* 10c1d69b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c1d69d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1d6a0 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d6a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d6a3 call 0x10c20a60 */
  push32(0x10c1d6a8u); f_10c20a60();
  /* 10c1d6a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d6ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d6ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d6b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d6b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d6b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d6bc push edx */
  push32((uint32_t)(EDX));
  /* 10c1d6bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10c1d6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1d6c5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d6c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1d6c8 call 0x10c20a60 */
  push32(0x10c1d6cdu); f_10c20a60();
  /* 10c1d6cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d6d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1d6d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1d6d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1d6d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10c1d6db:;
  /* 10c1d6db mov esp, ebp */
  ESP = (EBP);
  /* 10c1d6dd pop ebp */
  EBP = (pop32());
  /* 10c1d6de ret  */
  ESPCHK(0x10c1d150u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10c1d6e0 (779 bytes, 265 insns) */
void f_10c1d6e0(void) {
  FTRACE(0x10c1d6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1d6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1d6e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1d6e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1d6e7 jne 0x10c1d6ee */
  if (!C.zf) goto L_10c1d6ee;
  /* 10c1d6e9 jmp 0x10c1d9e9 */
  goto L_10c1d9e9;
L_10c1d6ee:;
  /* 10c1d6ee push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d6f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c1d6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d6f7 call 0x10c13330 */
  push32(0x10c1d6fcu); f_10c13330();
  /* 10c1d6fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d6ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d701 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d704 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c1d707 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d708 call 0x10c13330 */
  push32(0x10c1d70du); f_10c13330();
  /* 10c1d70d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d710 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d712 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d715 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1d718 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d719 call 0x10c13330 */
  push32(0x10c1d71eu); f_10c13330();
  /* 10c1d71e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d721 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d726 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1d729 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d72a call 0x10c13330 */
  push32(0x10c1d72fu); f_10c13330();
  /* 10c1d72f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d732 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d737 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c1d73a push eax */
  push32((uint32_t)(EAX));
  /* 10c1d73b call 0x10c13330 */
  push32(0x10c1d740u); f_10c13330();
  /* 10c1d740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d743 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d745 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d748 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c1d74b push edx */
  push32((uint32_t)(EDX));
  /* 10c1d74c call 0x10c13330 */
  push32(0x10c1d751u); f_10c13330();
  /* 10c1d751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d754 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d759 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1d75b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d75c call 0x10c13330 */
  push32(0x10c1d761u); f_10c13330();
  /* 10c1d761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d764 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d766 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d769 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10c1d76c push eax */
  push32((uint32_t)(EAX));
  /* 10c1d76d call 0x10c13330 */
  push32(0x10c1d772u); f_10c13330();
  /* 10c1d772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d775 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d77a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10c1d77d push edx */
  push32((uint32_t)(EDX));
  /* 10c1d77e call 0x10c13330 */
  push32(0x10c1d783u); f_10c13330();
  /* 10c1d783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d786 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d788 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d78b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10c1d78e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d78f call 0x10c13330 */
  push32(0x10c1d794u); f_10c13330();
  /* 10c1d794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d797 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d79c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10c1d79f push eax */
  push32((uint32_t)(EAX));
  /* 10c1d7a0 call 0x10c13330 */
  push32(0x10c1d7a5u); f_10c13330();
  /* 10c1d7a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d7a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d7aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d7ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10c1d7b0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d7b1 call 0x10c13330 */
  push32(0x10c1d7b6u); f_10c13330();
  /* 10c1d7b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d7b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d7bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d7be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10c1d7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d7c2 call 0x10c13330 */
  push32(0x10c1d7c7u); f_10c13330();
  /* 10c1d7c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d7ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d7cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d7cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c1d7d2 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d7d3 call 0x10c13330 */
  push32(0x10c1d7d8u); f_10c13330();
  /* 10c1d7d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d7db push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d7dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d7e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10c1d7e3 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d7e4 call 0x10c13330 */
  push32(0x10c1d7e9u); f_10c13330();
  /* 10c1d7e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d7ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d7ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d7f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10c1d7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d7f5 call 0x10c13330 */
  push32(0x10c1d7fau); f_10c13330();
  /* 10c1d7fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d7fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d802 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10c1d805 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d806 call 0x10c13330 */
  push32(0x10c1d80bu); f_10c13330();
  /* 10c1d80b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d80e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d810 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d813 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10c1d816 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d817 call 0x10c13330 */
  push32(0x10c1d81cu); f_10c13330();
  /* 10c1d81c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d81f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d824 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10c1d827 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d828 call 0x10c13330 */
  push32(0x10c1d82du); f_10c13330();
  /* 10c1d82d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d830 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d832 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d835 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10c1d838 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d839 call 0x10c13330 */
  push32(0x10c1d83eu); f_10c13330();
  /* 10c1d83e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d841 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d846 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c1d849 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d84a call 0x10c13330 */
  push32(0x10c1d84fu); f_10c13330();
  /* 10c1d84f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d852 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d857 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10c1d85a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d85b call 0x10c13330 */
  push32(0x10c1d860u); f_10c13330();
  /* 10c1d860 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d863 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d868 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10c1d86b push eax */
  push32((uint32_t)(EAX));
  /* 10c1d86c call 0x10c13330 */
  push32(0x10c1d871u); f_10c13330();
  /* 10c1d871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d874 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d876 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d879 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10c1d87c push edx */
  push32((uint32_t)(EDX));
  /* 10c1d87d call 0x10c13330 */
  push32(0x10c1d882u); f_10c13330();
  /* 10c1d882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d885 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d88a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10c1d88d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d88e call 0x10c13330 */
  push32(0x10c1d893u); f_10c13330();
  /* 10c1d893 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d896 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d89b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10c1d89e push eax */
  push32((uint32_t)(EAX));
  /* 10c1d89f call 0x10c13330 */
  push32(0x10c1d8a4u); f_10c13330();
  /* 10c1d8a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d8a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d8ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10c1d8af push edx */
  push32((uint32_t)(EDX));
  /* 10c1d8b0 call 0x10c13330 */
  push32(0x10c1d8b5u); f_10c13330();
  /* 10c1d8b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d8b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d8ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d8bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10c1d8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d8c1 call 0x10c13330 */
  push32(0x10c1d8c6u); f_10c13330();
  /* 10c1d8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d8c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d8ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10c1d8d1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d8d2 call 0x10c13330 */
  push32(0x10c1d8d7u); f_10c13330();
  /* 10c1d8d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d8da push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d8dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d8df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10c1d8e2 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d8e3 call 0x10c13330 */
  push32(0x10c1d8e8u); f_10c13330();
  /* 10c1d8e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d8eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d8ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d8f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10c1d8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d8f4 call 0x10c13330 */
  push32(0x10c1d8f9u); f_10c13330();
  /* 10c1d8f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d8fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d8fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d901 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10c1d904 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d905 call 0x10c13330 */
  push32(0x10c1d90au); f_10c13330();
  /* 10c1d90a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d90d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d90f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d912 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10c1d918 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d919 call 0x10c13330 */
  push32(0x10c1d91eu); f_10c13330();
  /* 10c1d91e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d921 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d926 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10c1d92c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d92d call 0x10c13330 */
  push32(0x10c1d932u); f_10c13330();
  /* 10c1d932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d935 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d93a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10c1d940 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d941 call 0x10c13330 */
  push32(0x10c1d946u); f_10c13330();
  /* 10c1d946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d949 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d94b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d94e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10c1d954 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d955 call 0x10c13330 */
  push32(0x10c1d95au); f_10c13330();
  /* 10c1d95a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d95d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d95f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d962 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10c1d968 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d969 call 0x10c13330 */
  push32(0x10c1d96eu); f_10c13330();
  /* 10c1d96e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d971 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d973 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d976 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10c1d97c push eax */
  push32((uint32_t)(EAX));
  /* 10c1d97d call 0x10c13330 */
  push32(0x10c1d982u); f_10c13330();
  /* 10c1d982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d985 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d987 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d98a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10c1d990 push edx */
  push32((uint32_t)(EDX));
  /* 10c1d991 call 0x10c13330 */
  push32(0x10c1d996u); f_10c13330();
  /* 10c1d996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d999 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d99b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d99e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10c1d9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d9a5 call 0x10c13330 */
  push32(0x10c1d9aau); f_10c13330();
  /* 10c1d9aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d9ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d9af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d9b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10c1d9b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1d9b9 call 0x10c13330 */
  push32(0x10c1d9beu); f_10c13330();
  /* 10c1d9be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d9c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d9c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d9c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10c1d9cc push edx */
  push32((uint32_t)(EDX));
  /* 10c1d9cd call 0x10c13330 */
  push32(0x10c1d9d2u); f_10c13330();
  /* 10c1d9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1d9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1d9d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1d9da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10c1d9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1d9e1 call 0x10c13330 */
  push32(0x10c1d9e6u); f_10c13330();
  /* 10c1d9e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1d9e9:;
  /* 10c1d9e9 pop ebp */
  EBP = (pop32());
  /* 10c1d9ea ret  */
  ESPCHK(0x10c1d6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9f0 @ 0x10c1d9f0 (678 bytes, 180 insns) */
void f_10c1d9f0(void) {
  FTRACE(0x10c1d9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1d9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1d9f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1d9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1d9f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1d9fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1d9ff mov ax, word ptr [0x10c3e662] */
  AX = (r16((uint32_t)(0x10c3e662)));
  /* 10c1da05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1da08 cmp dword ptr [0x10c3e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1da0f je 0x10c1db6a */
  if (C.zf) goto L_10c1db6a;
  /* 10c1da15 push 0x10c3e630 */
  push32((uint32_t)(0x10c3e630u));
  /* 10c1da1a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10c1da1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1da1f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1da20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1da22 call 0x10c20a60 */
  push32(0x10c1da27u); f_10c20a60();
  /* 10c1da27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1da2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1da2d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1da2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1da32 push 0x10c3e634 */
  push32((uint32_t)(0x10c3e634u));
  /* 10c1da37 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10c1da39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1da3c push eax */
  push32((uint32_t)(EAX));
  /* 10c1da3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1da3f call 0x10c20a60 */
  push32(0x10c1da44u); f_10c20a60();
  /* 10c1da44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1da47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1da4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1da4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1da4f push 0x10c3e638 */
  push32((uint32_t)(0x10c3e638u));
  /* 10c1da54 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c1da56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1da59 push edx */
  push32((uint32_t)(EDX));
  /* 10c1da5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1da5c call 0x10c20a60 */
  push32(0x10c1da61u); f_10c20a60();
  /* 10c1da61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1da64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1da67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1da69 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1da6c mov edx, dword ptr [0x10c3e638] */
  EDX = (r32((uint32_t)(0x10c3e638)));
  /* 10c1da72 push edx */
  push32((uint32_t)(EDX));
  /* 10c1da73 call 0x10c1dca0 */
  push32(0x10c1da78u); f_10c1dca0();
  /* 10c1da78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1da7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1da7f je 0x10c1dad9 */
  if (C.zf) goto L_10c1dad9;
  /* 10c1da81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1da83 mov eax, dword ptr [0x10c3e630] */
  EAX = (r32((uint32_t)(0x10c3e630)));
  /* 10c1da88 push eax */
  push32((uint32_t)(EAX));
  /* 10c1da89 call 0x10c13330 */
  push32(0x10c1da8eu); f_10c13330();
  /* 10c1da8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1da91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1da93 mov ecx, dword ptr [0x10c3e634] */
  ECX = (r32((uint32_t)(0x10c3e634)));
  /* 10c1da99 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1da9a call 0x10c13330 */
  push32(0x10c1da9fu); f_10c13330();
  /* 10c1da9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1daa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1daa4 mov edx, dword ptr [0x10c3e638] */
  EDX = (r32((uint32_t)(0x10c3e638)));
  /* 10c1daaa push edx */
  push32((uint32_t)(EDX));
  /* 10c1daab call 0x10c13330 */
  push32(0x10c1dab0u); f_10c13330();
  /* 10c1dab0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dab3 mov dword ptr [0x10c3e630], 0 */
  w32((uint32_t)(0x10c3e630), (0x0u));
  /* 10c1dabd mov dword ptr [0x10c3e634], 0 */
  w32((uint32_t)(0x10c3e634), (0x0u));
  /* 10c1dac7 mov dword ptr [0x10c3e638], 0 */
  w32((uint32_t)(0x10c3e638), (0x0u));
  /* 10c1dad1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1dad4 jmp 0x10c1dc92 */
  goto L_10c1dc92;
L_10c1dad9:;
  /* 10c1dad9 mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dade cmp dword ptr [eax], 0x10c3dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10c3dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dae4 je 0x10c1db20 */
  if (C.zf) goto L_10c1db20;
  /* 10c1dae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dae8 mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1daee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1daf0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1daf1 call 0x10c13330 */
  push32(0x10c1daf6u); f_10c13330();
  /* 10c1daf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1daf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dafb mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1db00 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c1db03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1db04 call 0x10c13330 */
  push32(0x10c1db09u); f_10c13330();
  /* 10c1db09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1db0c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1db0e mov edx, dword ptr [0x10c3dd88] */
  EDX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1db14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c1db17 push eax */
  push32((uint32_t)(EAX));
  /* 10c1db18 call 0x10c13330 */
  push32(0x10c1db1du); f_10c13330();
  /* 10c1db1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1db20:;
  /* 10c1db20 mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1db26 mov edx, dword ptr [0x10c3e630] */
  EDX = (r32((uint32_t)(0x10c3e630)));
  /* 10c1db2c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c1db2e mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1db33 mov ecx, dword ptr [0x10c3e634] */
  ECX = (r32((uint32_t)(0x10c3e634)));
  /* 10c1db39 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c1db3c mov edx, dword ptr [0x10c3dd88] */
  EDX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1db42 mov eax, dword ptr [0x10c3e638] */
  EAX = (r32((uint32_t)(0x10c3e638)));
  /* 10c1db47 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c1db4a mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1db50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1db52 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1db54 mov byte ptr [0x10c3cea8], al */
  w8((uint32_t)(0x10c3cea8), (AL));
  /* 10c1db59 mov dword ptr [0x10c3ceac], 1 */
  w32((uint32_t)(0x10c3ceac), (0x1u));
  /* 10c1db63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1db65 jmp 0x10c1dc92 */
  goto L_10c1dc92;
L_10c1db6a:;
  /* 10c1db6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1db6c mov ecx, dword ptr [0x10c3e630] */
  ECX = (r32((uint32_t)(0x10c3e630)));
  /* 10c1db72 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1db73 call 0x10c13330 */
  push32(0x10c1db78u); f_10c13330();
  /* 10c1db78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1db7b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1db7d mov edx, dword ptr [0x10c3e634] */
  EDX = (r32((uint32_t)(0x10c3e634)));
  /* 10c1db83 push edx */
  push32((uint32_t)(EDX));
  /* 10c1db84 call 0x10c13330 */
  push32(0x10c1db89u); f_10c13330();
  /* 10c1db89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1db8c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1db8e mov eax, dword ptr [0x10c3e638] */
  EAX = (r32((uint32_t)(0x10c3e638)));
  /* 10c1db93 push eax */
  push32((uint32_t)(EAX));
  /* 10c1db94 call 0x10c13330 */
  push32(0x10c1db99u); f_10c13330();
  /* 10c1db99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1db9c mov dword ptr [0x10c3e630], 0 */
  w32((uint32_t)(0x10c3e630), (0x0u));
  /* 10c1dba6 mov dword ptr [0x10c3e634], 0 */
  w32((uint32_t)(0x10c3e634), (0x0u));
  /* 10c1dbb0 mov dword ptr [0x10c3e638], 0 */
  w32((uint32_t)(0x10c3e638), (0x0u));
  /* 10c1dbba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10c1dbbf push 0x10c39ffc */
  push32((uint32_t)(0x10c39ffcu));
  /* 10c1dbc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dbc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dbc8 call 0x10c128a0 */
  push32(0x10c1dbcdu); f_10c128a0();
  /* 10c1dbcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dbd0 mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dbd6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c1dbd8 mov edx, dword ptr [0x10c3dd88] */
  EDX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dbde cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dbe1 jne 0x10c1dbeb */
  if (!C.zf) goto L_10c1dbeb;
  /* 10c1dbe3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1dbe6 jmp 0x10c1dc92 */
  goto L_10c1dc92;
L_10c1dbeb:;
  /* 10c1dbeb push 0x10c39fcc */
  push32((uint32_t)(0x10c39fccu));
  /* 10c1dbf0 mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dbf5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1dbf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1dbf8 call 0x10c15850 */
  push32(0x10c1dbfdu); f_10c15850();
  /* 10c1dbfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dc00 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10c1dc05 push 0x10c39ffc */
  push32((uint32_t)(0x10c39ffcu));
  /* 10c1dc0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dc0c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dc0e call 0x10c128a0 */
  push32(0x10c1dc13u); f_10c128a0();
  /* 10c1dc13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dc16 mov edx, dword ptr [0x10c3dd88] */
  EDX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dc1c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c1dc1f mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dc24 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dc28 jne 0x10c1dc2f */
  if (!C.zf) goto L_10c1dc2f;
  /* 10c1dc2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1dc2d jmp 0x10c1dc92 */
  goto L_10c1dc92;
L_10c1dc2f:;
  /* 10c1dc2f mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dc35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c1dc38 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c1dc3b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10c1dc40 push 0x10c39ffc */
  push32((uint32_t)(0x10c39ffcu));
  /* 10c1dc45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dc47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dc49 call 0x10c128a0 */
  push32(0x10c1dc4eu); f_10c128a0();
  /* 10c1dc4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dc51 mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dc57 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10c1dc5a mov edx, dword ptr [0x10c3dd88] */
  EDX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dc60 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dc64 jne 0x10c1dc6b */
  if (!C.zf) goto L_10c1dc6b;
  /* 10c1dc66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1dc69 jmp 0x10c1dc92 */
  goto L_10c1dc92;
L_10c1dc6b:;
  /* 10c1dc6b mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dc70 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c1dc73 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c1dc76 mov edx, dword ptr [0x10c3dd88] */
  EDX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dc7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c1dc7e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c1dc80 mov byte ptr [0x10c3cea8], cl */
  w8((uint32_t)(0x10c3cea8), (CL));
  /* 10c1dc86 mov dword ptr [0x10c3ceac], 1 */
  w32((uint32_t)(0x10c3ceac), (0x1u));
  /* 10c1dc90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1dc92:;
  /* 10c1dc92 mov esp, ebp */
  ESP = (EBP);
  /* 10c1dc94 pop ebp */
  EBP = (pop32());
  /* 10c1dc95 ret  */
  ESPCHK(0x10c1d9f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10c1dca0 (125 bytes, 49 insns) */
void f_10c1dca0(void) {
  FTRACE(0x10c1dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1dca1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1dca3 push ecx */
  push32((uint32_t)(ECX));
L_10c1dca4:;
  /* 10c1dca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dca7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1dcaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1dcac je 0x10c1dd19 */
  if (C.zf) goto L_10c1dd19;
  /* 10c1dcae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dcb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c1dcb4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dcb7 jl 0x10c1dcdd */
  if ((C.sf!=C.of)) goto L_10c1dcdd;
  /* 10c1dcb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dcbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1dcbf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dcc2 jg 0x10c1dcdd */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1dcdd;
  /* 10c1dcc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dcc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1dcca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1dccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dcd0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c1dcd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dcd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dcd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c1dcdb jmp 0x10c1dd17 */
  goto L_10c1dd17;
L_10c1dcdd:;
  /* 10c1dcdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dce0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1dce3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dce6 jne 0x10c1dd0e */
  if (!C.zf) goto L_10c1dd0e;
  /* 10c1dce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dceb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1dcee:;
  /* 10c1dcee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dcf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dcf4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c1dcf7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c1dcf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dcfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dcff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1dd02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dd05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c1dd08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1dd0a jne 0x10c1dcee */
  if (!C.zf) goto L_10c1dcee;
  /* 10c1dd0c jmp 0x10c1dd17 */
  goto L_10c1dd17;
L_10c1dd0e:;
  /* 10c1dd0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dd11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dd14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c1dd17:;
  /* 10c1dd17 jmp 0x10c1dca4 */
  goto L_10c1dca4;
L_10c1dd19:;
  /* 10c1dd19 mov esp, ebp */
  ESP = (EBP);
  /* 10c1dd1b pop ebp */
  EBP = (pop32());
  /* 10c1dd1c ret  */
  ESPCHK(0x10c1dca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd20 @ 0x10c1dd20 (304 bytes, 85 insns) */
void f_10c1dd20(void) {
  FTRACE(0x10c1dd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1dd20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1dd21 mov ebp, esp */
  EBP = (ESP);
  /* 10c1dd23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1dd24 cmp dword ptr [0x10c3e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dd2b je 0x10c1ddec */
  if (C.zf) goto L_10c1ddec;
  /* 10c1dd31 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10c1dd33 push 0x10c3a008 */
  push32((uint32_t)(0x10c3a008u));
  /* 10c1dd38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dd3a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c1dd3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1dd3e call 0x10c12cb0 */
  push32(0x10c1dd43u); f_10c12cb0();
  /* 10c1dd43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dd46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1dd49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1dd4d jne 0x10c1dd59 */
  if (!C.zf) goto L_10c1dd59;
  /* 10c1dd4f mov eax, 1 */
  EAX = (0x1u);
  /* 10c1dd54 jmp 0x10c1de4c */
  goto L_10c1de4c;
L_10c1dd59:;
  /* 10c1dd59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dd5c push eax */
  push32((uint32_t)(EAX));
  /* 10c1dd5d call 0x10c1de50 */
  push32(0x10c1dd62u); f_10c1de50();
  /* 10c1dd62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dd65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1dd67 je 0x10c1dd8d */
  if (C.zf) goto L_10c1dd8d;
  /* 10c1dd69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dd6c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1dd6d call 0x10c1e0e0 */
  push32(0x10c1dd72u); f_10c1e0e0();
  /* 10c1dd72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dd75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1dd77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dd7a push edx */
  push32((uint32_t)(EDX));
  /* 10c1dd7b call 0x10c13330 */
  push32(0x10c1dd80u); f_10c13330();
  /* 10c1dd80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dd83 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1dd88 jmp 0x10c1de4c */
  goto L_10c1de4c;
L_10c1dd8d:;
  /* 10c1dd8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dd90 mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dd96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1dd98 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1dd9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dd9d mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1dda3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c1dda6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c1dda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1ddac mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1ddb2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c1ddb5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10c1ddb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1ddbb mov dword ptr [0x10c3dd88], eax */
  w32((uint32_t)(0x10c3dd88), (EAX));
  /* 10c1ddc0 mov ecx, dword ptr [0x10c3e63c] */
  ECX = (r32((uint32_t)(0x10c3e63c)));
  /* 10c1ddc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ddc7 call 0x10c1e0e0 */
  push32(0x10c1ddccu); f_10c1e0e0();
  /* 10c1ddcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ddcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1ddd1 mov edx, dword ptr [0x10c3e63c] */
  EDX = (r32((uint32_t)(0x10c3e63c)));
  /* 10c1ddd7 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ddd8 call 0x10c13330 */
  push32(0x10c1ddddu); f_10c13330();
  /* 10c1dddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dde0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dde3 mov dword ptr [0x10c3e63c], eax */
  w32((uint32_t)(0x10c3e63c), (EAX));
  /* 10c1dde8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ddea jmp 0x10c1de4c */
  goto L_10c1de4c;
L_10c1ddec:;
  /* 10c1ddec mov ecx, dword ptr [0x10c3dd88] */
  ECX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1ddf2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1ddf4 mov dword ptr [0x10c3dd58], edx */
  w32((uint32_t)(0x10c3dd58), (EDX));
  /* 10c1ddfa mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1ddff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c1de02 mov dword ptr [0x10c3dd5c], ecx */
  w32((uint32_t)(0x10c3dd5c), (ECX));
  /* 10c1de08 mov edx, dword ptr [0x10c3dd88] */
  EDX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c1de0e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c1de11 mov dword ptr [0x10c3dd60], eax */
  w32((uint32_t)(0x10c3dd60), (EAX));
  /* 10c1de16 mov dword ptr [0x10c3dd88], 0x10c3dd58 */
  w32((uint32_t)(0x10c3dd88), (0x10c3dd58u));
  /* 10c1de20 mov ecx, dword ptr [0x10c3e63c] */
  ECX = (r32((uint32_t)(0x10c3e63c)));
  /* 10c1de26 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1de27 call 0x10c1e0e0 */
  push32(0x10c1de2cu); f_10c1e0e0();
  /* 10c1de2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1de2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1de31 mov edx, dword ptr [0x10c3e63c] */
  EDX = (r32((uint32_t)(0x10c3e63c)));
  /* 10c1de37 push edx */
  push32((uint32_t)(EDX));
  /* 10c1de38 call 0x10c13330 */
  push32(0x10c1de3du); f_10c13330();
  /* 10c1de3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1de40 mov dword ptr [0x10c3e63c], 0 */
  w32((uint32_t)(0x10c3e63c), (0x0u));
  /* 10c1de4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1de4c:;
  /* 10c1de4c mov esp, ebp */
  ESP = (EBP);
  /* 10c1de4e pop ebp */
  EBP = (pop32());
  /* 10c1de4f ret  */
  ESPCHK(0x10c1dd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de50 @ 0x10c1de50 (525 bytes, 200 insns) */
void f_10c1de50(void) {
  FTRACE(0x10c1de50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1de50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1de51 mov ebp, esp */
  EBP = (ESP);
  /* 10c1de53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1de56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1de5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1de5f mov ax, word ptr [0x10c3e65c] */
  AX = (r16((uint32_t)(0x10c3e65c)));
  /* 10c1de65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1de68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1de6c jne 0x10c1de76 */
  if (!C.zf) goto L_10c1de76;
  /* 10c1de6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1de71 jmp 0x10c1e059 */
  goto L_10c1e059;
L_10c1de76:;
  /* 10c1de76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1de79 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1de7c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1de7d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10c1de7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1de82 push edx */
  push32((uint32_t)(EDX));
  /* 10c1de83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1de85 call 0x10c20a60 */
  push32(0x10c1de8au); f_10c20a60();
  /* 10c1de8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1de8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1de90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1de92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1de95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1de98 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1de9b push edx */
  push32((uint32_t)(EDX));
  /* 10c1de9c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10c1de9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dea1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1dea2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1dea4 call 0x10c20a60 */
  push32(0x10c1dea9u); f_10c20a60();
  /* 10c1dea9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1deac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1deaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1deb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1deb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1deb7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1deba push edx */
  push32((uint32_t)(EDX));
  /* 10c1debb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c1debd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dec0 push eax */
  push32((uint32_t)(EAX));
  /* 10c1dec1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1dec3 call 0x10c20a60 */
  push32(0x10c1dec8u); f_10c20a60();
  /* 10c1dec8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1decb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1dece or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1ded0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1ded3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ded6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ded9 push edx */
  push32((uint32_t)(EDX));
  /* 10c1deda push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10c1dedc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dedf push eax */
  push32((uint32_t)(EAX));
  /* 10c1dee0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1dee2 call 0x10c20a60 */
  push32(0x10c1dee7u); f_10c20a60();
  /* 10c1dee7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1deea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1deed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1deef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1def2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1def5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1def8 push edx */
  push32((uint32_t)(EDX));
  /* 10c1def9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10c1defb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1defe push eax */
  push32((uint32_t)(EAX));
  /* 10c1deff push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1df01 call 0x10c20a60 */
  push32(0x10c1df06u); f_10c20a60();
  /* 10c1df06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1df0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1df0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1df11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1df14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c1df17 push eax */
  push32((uint32_t)(EAX));
  /* 10c1df18 call 0x10c1e060 */
  push32(0x10c1df1du); f_10c1e060();
  /* 10c1df1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1df23 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df26 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1df27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10c1df29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1df2c push edx */
  push32((uint32_t)(EDX));
  /* 10c1df2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1df2f call 0x10c20a60 */
  push32(0x10c1df34u); f_10c20a60();
  /* 10c1df34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1df3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1df3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1df3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1df42 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df45 push edx */
  push32((uint32_t)(EDX));
  /* 10c1df46 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10c1df48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1df4b push eax */
  push32((uint32_t)(EAX));
  /* 10c1df4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1df4e call 0x10c20a60 */
  push32(0x10c1df53u); f_10c20a60();
  /* 10c1df53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1df59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1df5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1df5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1df61 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df64 push edx */
  push32((uint32_t)(EDX));
  /* 10c1df65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10c1df67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1df6a push eax */
  push32((uint32_t)(EAX));
  /* 10c1df6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1df6d call 0x10c20a60 */
  push32(0x10c1df72u); f_10c20a60();
  /* 10c1df72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1df78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1df7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1df7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1df80 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df83 push edx */
  push32((uint32_t)(EDX));
  /* 10c1df84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c1df86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1df89 push eax */
  push32((uint32_t)(EAX));
  /* 10c1df8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1df8c call 0x10c20a60 */
  push32(0x10c1df91u); f_10c20a60();
  /* 10c1df91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1df94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1df97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1df99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1df9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1df9f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dfa2 push edx */
  push32((uint32_t)(EDX));
  /* 10c1dfa3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10c1dfa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dfa8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1dfa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1dfab call 0x10c20a60 */
  push32(0x10c1dfb0u); f_10c20a60();
  /* 10c1dfb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dfb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1dfb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1dfb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1dfbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dfbe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dfc1 push edx */
  push32((uint32_t)(EDX));
  /* 10c1dfc2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10c1dfc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dfc7 push eax */
  push32((uint32_t)(EAX));
  /* 10c1dfc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1dfca call 0x10c20a60 */
  push32(0x10c1dfcfu); f_10c20a60();
  /* 10c1dfcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dfd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1dfd5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1dfd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1dfda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dfdd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dfe0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1dfe1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10c1dfe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1dfe6 push eax */
  push32((uint32_t)(EAX));
  /* 10c1dfe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1dfe9 call 0x10c20a60 */
  push32(0x10c1dfeeu); f_10c20a60();
  /* 10c1dfee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1dff4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1dff6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1dff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1dffc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1dfff push edx */
  push32((uint32_t)(EDX));
  /* 10c1e000 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10c1e002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e005 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e006 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e008 call 0x10c20a60 */
  push32(0x10c1e00du); f_10c20a60();
  /* 10c1e00d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e010 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1e013 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e015 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1e018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e01b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e01e push edx */
  push32((uint32_t)(EDX));
  /* 10c1e01f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10c1e021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e024 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e025 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e027 call 0x10c20a60 */
  push32(0x10c1e02cu); f_10c20a60();
  /* 10c1e02c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e02f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1e032 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e034 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1e037 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e03a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e03d push edx */
  push32((uint32_t)(EDX));
  /* 10c1e03e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10c1e040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e043 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e044 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e046 call 0x10c20a60 */
  push32(0x10c1e04bu); f_10c20a60();
  /* 10c1e04b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e04e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1e051 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e053 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1e056 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c1e059:;
  /* 10c1e059 mov esp, ebp */
  ESP = (EBP);
  /* 10c1e05b pop ebp */
  EBP = (pop32());
  /* 10c1e05c ret  */
  ESPCHK(0x10c1de50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10c1e060 (125 bytes, 49 insns) */
void f_10c1e060(void) {
  FTRACE(0x10c1e060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e060 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e061 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e063 push ecx */
  push32((uint32_t)(ECX));
L_10c1e064:;
  /* 10c1e064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e067 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1e06a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1e06c je 0x10c1e0d9 */
  if (C.zf) goto L_10c1e0d9;
  /* 10c1e06e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e071 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c1e074 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e077 jl 0x10c1e09d */
  if ((C.sf!=C.of)) goto L_10c1e09d;
  /* 10c1e079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e07c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1e07f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e082 jg 0x10c1e09d */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1e09d;
  /* 10c1e084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e087 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1e08a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e08d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e090 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c1e092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e098 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c1e09b jmp 0x10c1e0d7 */
  goto L_10c1e0d7;
L_10c1e09d:;
  /* 10c1e09d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e0a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1e0a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e0a6 jne 0x10c1e0ce */
  if (!C.zf) goto L_10c1e0ce;
  /* 10c1e0a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e0ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1e0ae:;
  /* 10c1e0ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e0b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e0b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c1e0b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c1e0b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e0bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e0bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1e0c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e0c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c1e0c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e0ca jne 0x10c1e0ae */
  if (!C.zf) goto L_10c1e0ae;
  /* 10c1e0cc jmp 0x10c1e0d7 */
  goto L_10c1e0d7;
L_10c1e0ce:;
  /* 10c1e0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e0d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e0d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c1e0d7:;
  /* 10c1e0d7 jmp 0x10c1e064 */
  goto L_10c1e064;
L_10c1e0d9:;
  /* 10c1e0d9 mov esp, ebp */
  ESP = (EBP);
  /* 10c1e0db pop ebp */
  EBP = (pop32());
  /* 10c1e0dc ret  */
  ESPCHK(0x10c1e060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0e0 @ 0x10c1e0e0 (147 bytes, 52 insns) */
void f_10c1e0e0(void) {
  FTRACE(0x10c1e0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e0e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e0e7 jne 0x10c1e0ee */
  if (!C.zf) goto L_10c1e0ee;
  /* 10c1e0e9 jmp 0x10c1e171 */
  goto L_10c1e171;
L_10c1e0ee:;
  /* 10c1e0ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e0f1 cmp dword ptr [eax + 0xc], 0x10c3e698 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10c3e698u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e0f8 je 0x10c1e171 */
  if (C.zf) goto L_10c1e171;
  /* 10c1e0fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e0fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e0ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1e102 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e103 call 0x10c13330 */
  push32(0x10c1e108u); f_10c13330();
  /* 10c1e108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e10b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e10d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e110 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1e113 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e114 call 0x10c13330 */
  push32(0x10c1e119u); f_10c13330();
  /* 10c1e119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e11c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e11e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e121 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c1e124 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e125 call 0x10c13330 */
  push32(0x10c1e12au); f_10c13330();
  /* 10c1e12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e12d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e12f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e132 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c1e135 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e136 call 0x10c13330 */
  push32(0x10c1e13bu); f_10c13330();
  /* 10c1e13b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e13e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e143 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c1e146 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e147 call 0x10c13330 */
  push32(0x10c1e14cu); f_10c13330();
  /* 10c1e14c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e14f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e154 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10c1e157 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e158 call 0x10c13330 */
  push32(0x10c1e15du); f_10c13330();
  /* 10c1e15d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e160 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e165 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10c1e168 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e169 call 0x10c13330 */
  push32(0x10c1e16eu); f_10c13330();
  /* 10c1e16e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1e171:;
  /* 10c1e171 pop ebp */
  EBP = (pop32());
  /* 10c1e172 ret  */
  ESPCHK(0x10c1e0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x10c1e180 (928 bytes, 284 insns) */
void f_10c1e180(void) {
  FTRACE(0x10c1e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e180 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e181 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e183 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e186 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10c1e18d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10c1e194 cmp dword ptr [0x10c3e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e19b je 0x10c1e4d1 */
  if (C.zf) goto L_10c1e4d1;
  /* 10c1e1a1 cmp dword ptr [0x10c3e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e1a8 jne 0x10c1e1d0 */
  if (!C.zf) goto L_10c1e1d0;
  /* 10c1e1aa push 0x10c3e610 */
  push32((uint32_t)(0x10c3e610u));
  /* 10c1e1af push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10c1e1b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e1b6 mov ax, word ptr [0x10c3e654] */
  AX = (r16((uint32_t)(0x10c3e654)));
  /* 10c1e1bc push eax */
  push32((uint32_t)(EAX));
  /* 10c1e1bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e1bf call 0x10c20a60 */
  push32(0x10c1e1c4u); f_10c20a60();
  /* 10c1e1c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e1c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e1c9 je 0x10c1e1d0 */
  if (C.zf) goto L_10c1e1d0;
  /* 10c1e1cb jmp 0x10c1e492 */
  goto L_10c1e492;
L_10c1e1d0:;
  /* 10c1e1d0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10c1e1d2 push 0x10c3a014 */
  push32((uint32_t)(0x10c3a014u));
  /* 10c1e1d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e1d9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c1e1de call 0x10c128a0 */
  push32(0x10c1e1e3u); f_10c128a0();
  /* 10c1e1e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e1e6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c1e1e9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c1e1eb push 0x10c3a014 */
  push32((uint32_t)(0x10c3a014u));
  /* 10c1e1f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e1f2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c1e1f7 call 0x10c128a0 */
  push32(0x10c1e1fcu); f_10c128a0();
  /* 10c1e1fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e1ff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c1e202 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10c1e204 push 0x10c3a014 */
  push32((uint32_t)(0x10c3a014u));
  /* 10c1e209 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e20b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10c1e210 call 0x10c128a0 */
  push32(0x10c1e215u); f_10c128a0();
  /* 10c1e215 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e218 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10c1e21b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10c1e21d push 0x10c3a014 */
  push32((uint32_t)(0x10c3a014u));
  /* 10c1e222 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e224 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10c1e229 call 0x10c128a0 */
  push32(0x10c1e22eu); f_10c128a0();
  /* 10c1e22e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e231 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c1e234 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e238 je 0x10c1e24c */
  if (C.zf) goto L_10c1e24c;
  /* 10c1e23a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e23e je 0x10c1e24c */
  if (C.zf) goto L_10c1e24c;
  /* 10c1e240 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e244 je 0x10c1e24c */
  if (C.zf) goto L_10c1e24c;
  /* 10c1e246 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e24a jne 0x10c1e251 */
  if (!C.zf) goto L_10c1e251;
L_10c1e24c:;
  /* 10c1e24c jmp 0x10c1e492 */
  goto L_10c1e492;
L_10c1e251:;
  /* 10c1e251 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1e254 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c1e257 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c1e25e jmp 0x10c1e269 */
  goto L_10c1e269;
L_10c1e260:;
  /* 10c1e260 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1e263 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e266 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c1e269:;
  /* 10c1e269 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e270 jge 0x10c1e285 */
  if ((C.sf==C.of)) goto L_10c1e285;
  /* 10c1e272 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e275 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10c1e278 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c1e27a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e27d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e280 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c1e283 jmp 0x10c1e260 */
  goto L_10c1e260;
L_10c1e285:;
  /* 10c1e285 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10c1e288 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e289 mov ecx, dword ptr [0x10c3e610] */
  ECX = (r32((uint32_t)(0x10c3e610)));
  /* 10c1e28f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e290 call dword ptr [0x10c402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402dc))), 0x10c1e296u);
  /* 10c1e296 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e298 jne 0x10c1e29f */
  if (!C.zf) goto L_10c1e29f;
  /* 10c1e29a jmp 0x10c1e492 */
  goto L_10c1e492;
L_10c1e29f:;
  /* 10c1e29f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e2a3 jbe 0x10c1e2aa */
  if ((C.cf||C.zf)) goto L_10c1e2aa;
  /* 10c1e2a5 jmp 0x10c1e492 */
  goto L_10c1e492;
L_10c1e2aa:;
  /* 10c1e2aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1e2ad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1e2b3 mov dword ptr [0x10c3cea4], edx */
  w32((uint32_t)(0x10c3cea4), (EDX));
  /* 10c1e2b9 cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e2c0 jle 0x10c1e319 */
  if ((C.zf||C.sf!=C.of)) goto L_10c1e319;
  /* 10c1e2c2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10c1e2c5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c1e2c8 jmp 0x10c1e2d3 */
  goto L_10c1e2d3;
L_10c1e2ca:;
  /* 10c1e2ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e2cd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e2d0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10c1e2d3:;
  /* 10c1e2d3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e2d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e2d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1e2da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e2dc je 0x10c1e319 */
  if (C.zf) goto L_10c1e319;
  /* 10c1e2de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e2e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1e2e3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c1e2e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1e2e8 je 0x10c1e319 */
  if (C.zf) goto L_10c1e319;
  /* 10c1e2ea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e2ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e2ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c1e2f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c1e2f4 jmp 0x10c1e2ff */
  goto L_10c1e2ff;
L_10c1e2f6:;
  /* 10c1e2f6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1e2f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e2fc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10c1e2ff:;
  /* 10c1e2ff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e302 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e304 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c1e307 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e30a jg 0x10c1e317 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1e317;
  /* 10c1e30c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1e30f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e312 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c1e315 jmp 0x10c1e2f6 */
  goto L_10c1e2f6;
L_10c1e317:;
  /* 10c1e317 jmp 0x10c1e2ca */
  goto L_10c1e2ca;
L_10c1e319:;
  /* 10c1e319 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e31b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e31d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e31f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1e322 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e325 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e326 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c1e32b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1e32e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e32f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1e331 call 0x10c1aad0 */
  push32(0x10c1e336u); f_10c1aad0();
  /* 10c1e336 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e33b jne 0x10c1e342 */
  if (!C.zf) goto L_10c1e342;
  /* 10c1e33d jmp 0x10c1e492 */
  goto L_10c1e492;
L_10c1e342:;
  /* 10c1e342 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1e345 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10c1e34a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1e34d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c1e350 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c1e357 jmp 0x10c1e362 */
  goto L_10c1e362;
L_10c1e359:;
  /* 10c1e359 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1e35c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e35f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c1e362:;
  /* 10c1e362 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e369 jge 0x10c1e380 */
  if ((C.sf==C.of)) goto L_10c1e380;
  /* 10c1e36b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1e36e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10c1e372 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10c1e375 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1e378 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e37b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c1e37e jmp 0x10c1e359 */
  goto L_10c1e359;
L_10c1e380:;
  /* 10c1e380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e382 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1e384 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1e387 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e38a push edx */
  push32((uint32_t)(EDX));
  /* 10c1e38b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c1e390 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1e393 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e394 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1e396 call 0x10c20d00 */
  push32(0x10c1e39bu); f_10c20d00();
  /* 10c1e39b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e39e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e3a0 jne 0x10c1e3a7 */
  if (!C.zf) goto L_10c1e3a7;
  /* 10c1e3a2 jmp 0x10c1e492 */
  goto L_10c1e492;
L_10c1e3a7:;
  /* 10c1e3a7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1e3aa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10c1e3af cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e3b6 jle 0x10c1e413 */
  if ((C.zf||C.sf!=C.of)) goto L_10c1e413;
  /* 10c1e3b8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10c1e3bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c1e3be jmp 0x10c1e3c9 */
  goto L_10c1e3c9;
L_10c1e3c0:;
  /* 10c1e3c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e3c3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e3c6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10c1e3c9:;
  /* 10c1e3c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e3cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1e3ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c1e3d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1e3d2 je 0x10c1e413 */
  if (C.zf) goto L_10c1e413;
  /* 10c1e3d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e3d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e3d9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c1e3dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1e3de je 0x10c1e413 */
  if (C.zf) goto L_10c1e413;
  /* 10c1e3e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e3e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e3e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1e3e7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c1e3ea jmp 0x10c1e3f5 */
  goto L_10c1e3f5;
L_10c1e3ec:;
  /* 10c1e3ec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1e3ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e3f2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10c1e3f5:;
  /* 10c1e3f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1e3f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e3fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c1e3fd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e400 jg 0x10c1e411 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1e411;
  /* 10c1e402 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c1e405 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1e408 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10c1e40f jmp 0x10c1e3ec */
  goto L_10c1e3ec;
L_10c1e411:;
  /* 10c1e411 jmp 0x10c1e3c0 */
  goto L_10c1e3c0;
L_10c1e413:;
  /* 10c1e413 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1e416 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e419 mov dword ptr [0x10c3cc98], eax */
  w32((uint32_t)(0x10c3cc98), (EAX));
  /* 10c1e41e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1e421 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e424 mov dword ptr [0x10c3cc9c], ecx */
  w32((uint32_t)(0x10c3cc9c), (ECX));
  /* 10c1e42a cmp dword ptr [0x10c3e640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e431 je 0x10c1e444 */
  if (C.zf) goto L_10c1e444;
  /* 10c1e433 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e435 mov edx, dword ptr [0x10c3e640] */
  EDX = (r32((uint32_t)(0x10c3e640)));
  /* 10c1e43b push edx */
  push32((uint32_t)(EDX));
  /* 10c1e43c call 0x10c13330 */
  push32(0x10c1e441u); f_10c13330();
  /* 10c1e441 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1e444:;
  /* 10c1e444 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1e447 mov dword ptr [0x10c3e640], eax */
  w32((uint32_t)(0x10c3e640), (EAX));
  /* 10c1e44c cmp dword ptr [0x10c3e644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e453 je 0x10c1e466 */
  if (C.zf) goto L_10c1e466;
  /* 10c1e455 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e457 mov ecx, dword ptr [0x10c3e644] */
  ECX = (r32((uint32_t)(0x10c3e644)));
  /* 10c1e45d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e45e call 0x10c13330 */
  push32(0x10c1e463u); f_10c13330();
  /* 10c1e463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1e466:;
  /* 10c1e466 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1e469 mov dword ptr [0x10c3e644], edx */
  w32((uint32_t)(0x10c3e644), (EDX));
  /* 10c1e46f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e471 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1e474 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e475 call 0x10c13330 */
  push32(0x10c1e47au); f_10c13330();
  /* 10c1e47a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e47d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e47f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1e482 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e483 call 0x10c13330 */
  push32(0x10c1e488u); f_10c13330();
  /* 10c1e488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e48b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e48d jmp 0x10c1e51c */
  goto L_10c1e51c;
L_10c1e492:;
  /* 10c1e492 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e494 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c1e497 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e498 call 0x10c13330 */
  push32(0x10c1e49du); f_10c13330();
  /* 10c1e49d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e4a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e4a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c1e4a5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e4a6 call 0x10c13330 */
  push32(0x10c1e4abu); f_10c13330();
  /* 10c1e4ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e4ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e4b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c1e4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e4b4 call 0x10c13330 */
  push32(0x10c1e4b9u); f_10c13330();
  /* 10c1e4b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e4bc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e4be mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c1e4c1 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e4c2 call 0x10c13330 */
  push32(0x10c1e4c7u); f_10c13330();
  /* 10c1e4c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e4ca mov eax, 1 */
  EAX = (0x1u);
  /* 10c1e4cf jmp 0x10c1e51c */
  goto L_10c1e51c;
L_10c1e4d1:;
  /* 10c1e4d1 mov dword ptr [0x10c3cc98], 0x10c3cca2 */
  w32((uint32_t)(0x10c3cc98), (0x10c3cca2u));
  /* 10c1e4db mov dword ptr [0x10c3cc9c], 0x10c3cca2 */
  w32((uint32_t)(0x10c3cc9c), (0x10c3cca2u));
  /* 10c1e4e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e4e7 mov eax, dword ptr [0x10c3e640] */
  EAX = (r32((uint32_t)(0x10c3e640)));
  /* 10c1e4ec push eax */
  push32((uint32_t)(EAX));
  /* 10c1e4ed call 0x10c13330 */
  push32(0x10c1e4f2u); f_10c13330();
  /* 10c1e4f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e4f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1e4f7 mov ecx, dword ptr [0x10c3e644] */
  ECX = (r32((uint32_t)(0x10c3e644)));
  /* 10c1e4fd push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e4fe call 0x10c13330 */
  push32(0x10c1e503u); f_10c13330();
  /* 10c1e503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e506 mov dword ptr [0x10c3e640], 0 */
  w32((uint32_t)(0x10c3e640), (0x0u));
  /* 10c1e510 mov dword ptr [0x10c3e644], 0 */
  w32((uint32_t)(0x10c3e644), (0x0u));
  /* 10c1e51a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1e51c:;
  /* 10c1e51c mov esp, ebp */
  ESP = (EBP);
  /* 10c1e51e pop ebp */
  EBP = (pop32());
  /* 10c1e51f ret  */
  ESPCHK(0x10c1e180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x10c1e520 (7 bytes, 5 insns) */
void f_10c1e520(void) {
  FTRACE(0x10c1e520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e520 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e521 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e525 pop ebp */
  EBP = (pop32());
  /* 10c1e526 ret  */
  ESPCHK(0x10c1e520u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10c1e530 (129 bytes, 56 insns) */
void f_10c1e530(void) {
  FTRACE(0x10c1e530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e530 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c1e534 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c1e538 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10c1e53e jne 0x10c1e57c */
  if (!C.zf) goto L_10c1e57c;
L_10c1e540:;
  /* 10c1e540 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c1e542 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e544 jne 0x10c1e574 */
  if (!C.zf) goto L_10c1e574;
  /* 10c1e546 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e548 je 0x10c1e570 */
  if (C.zf) goto L_10c1e570;
  /* 10c1e54a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e54d jne 0x10c1e574 */
  if (!C.zf) goto L_10c1e574;
  /* 10c1e54f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c1e551 je 0x10c1e570 */
  if (C.zf) goto L_10c1e570;
  /* 10c1e553 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c1e556 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e559 jne 0x10c1e574 */
  if (!C.zf) goto L_10c1e574;
  /* 10c1e55b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e55d je 0x10c1e570 */
  if (C.zf) goto L_10c1e570;
  /* 10c1e55f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e562 jne 0x10c1e574 */
  if (!C.zf) goto L_10c1e574;
  /* 10c1e564 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e567 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e56a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c1e56c jne 0x10c1e540 */
  if (!C.zf) goto L_10c1e540;
  /* 10c1e56e mov edi, edi */
  EDI = (EDI);
L_10c1e570:;
  /* 10c1e570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e572 ret  */
  ESPCHK(0x10c1e530u, _esp0);
  ESP += 4; return;
  /* 10c1e573 nop  */
  /* nop */
L_10c1e574:;
  /* 10c1e574 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e576 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c1e578 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10c1e579 ret  */
  ESPCHK(0x10c1e530u, _esp0);
  ESP += 4; return;
  /* 10c1e57a mov edi, edi */
  EDI = (EDI);
L_10c1e57c:;
  /* 10c1e57c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10c1e582 je 0x10c1e598 */
  if (C.zf) goto L_10c1e598;
  /* 10c1e584 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1e586 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c1e587 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e589 jne 0x10c1e574 */
  if (!C.zf) goto L_10c1e574;
  /* 10c1e58b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c1e58c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e58e je 0x10c1e570 */
  if (C.zf) goto L_10c1e570;
  /* 10c1e590 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10c1e596 je 0x10c1e540 */
  if (C.zf) goto L_10c1e540;
L_10c1e598:;
  /* 10c1e598 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10c1e59b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e59e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e5a0 jne 0x10c1e574 */
  if (!C.zf) goto L_10c1e574;
  /* 10c1e5a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e5a4 je 0x10c1e570 */
  if (C.zf) goto L_10c1e570;
  /* 10c1e5a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e5a9 jne 0x10c1e574 */
  if (!C.zf) goto L_10c1e574;
  /* 10c1e5ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c1e5ad je 0x10c1e570 */
  if (C.zf) goto L_10c1e570;
  /* 10c1e5af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e5b2 jmp 0x10c1e540 */
  goto L_10c1e540;
}

/* FUN_1000e5c0 @ 0x10c1e5c0 (62 bytes, 35 insns) */
void f_10c1e5c0(void) {
  FTRACE(0x10c1e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e5c3 push esi */
  push32((uint32_t)(ESI));
  /* 10c1e5c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e5c6 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5c7 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5c9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5ca push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5cb push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5cc push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5cd push eax */
  push32((uint32_t)(EAX));
  /* 10c1e5ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1e5d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1e5d4:;
  /* 10c1e5d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1e5d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e5d8 je 0x10c1e5e1 */
  if (C.zf) goto L_10c1e5e1;
  /* 10c1e5da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c1e5db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10c1e5db");
  /* 10c1e5df jmp 0x10c1e5d4 */
  goto L_10c1e5d4;
L_10c1e5e1:;
  /* 10c1e5e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e5e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e5e7 nop  */
  /* nop */
L_10c1e5e8:;
  /* 10c1e5e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c1e5e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1e5eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e5ed je 0x10c1e5f6 */
  if (C.zf) goto L_10c1e5f6;
  /* 10c1e5ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c1e5f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10c1e5f0");
  /* 10c1e5f4 jae 0x10c1e5e8 */
  if (!C.cf) goto L_10c1e5e8;
L_10c1e5f6:;
  /* 10c1e5f6 mov eax, ecx */
  EAX = (ECX);
  /* 10c1e5f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e5fb pop esi */
  ESI = (pop32());
  /* 10c1e5fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1e5fd ret  */
  ESPCHK(0x10c1e5c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10c1e600 (56 bytes, 31 insns) */
void f_10c1e600(void) {
  FTRACE(0x10c1e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e600 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e601 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e603 push edi */
  push32((uint32_t)(EDI));
  /* 10c1e604 push esi */
  push32((uint32_t)(ESI));
  /* 10c1e605 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1e606 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1e609 jecxz 0x10c1e631 */
  x86_unimpl("jecxz @ 0x10c1e609");
  /* 10c1e60b mov ebx, ecx */
  EBX = (ECX);
  /* 10c1e60d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e610 mov esi, edi */
  ESI = (EDI);
  /* 10c1e612 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e614 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10c1e616 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1e618 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e61a mov edi, esi */
  EDI = (ESI);
  /* 10c1e61c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1e61f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10c1e621 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10c1e624 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e626 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1e629 ja 0x10c1e62f */
  if ((!C.cf&&!C.zf)) goto L_10c1e62f;
  /* 10c1e62b je 0x10c1e631 */
  if (C.zf) goto L_10c1e631;
  /* 10c1e62d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c1e62e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10c1e62f:;
  /* 10c1e62f not ecx */
  ECX = (~(ECX));
L_10c1e631:;
  /* 10c1e631 mov eax, ecx */
  EAX = (ECX);
  /* 10c1e633 pop ebx */
  EBX = (pop32());
  /* 10c1e634 pop esi */
  ESI = (pop32());
  /* 10c1e635 pop edi */
  EDI = (pop32());
  /* 10c1e636 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1e637 ret  */
  ESPCHK(0x10c1e600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e640 @ 0x10c1e640 (58 bytes, 32 insns) */
void f_10c1e640(void) {
  FTRACE(0x10c1e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e640 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e641 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e643 push esi */
  push32((uint32_t)(ESI));
  /* 10c1e644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e646 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e647 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e648 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e649 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e64a push eax */
  push32((uint32_t)(EAX));
  /* 10c1e64b push eax */
  push32((uint32_t)(EAX));
  /* 10c1e64c push eax */
  push32((uint32_t)(EAX));
  /* 10c1e64d push eax */
  push32((uint32_t)(EAX));
  /* 10c1e64e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1e651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c1e654:;
  /* 10c1e654 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1e656 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e658 je 0x10c1e661 */
  if (C.zf) goto L_10c1e661;
  /* 10c1e65a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c1e65b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10c1e65b");
  /* 10c1e65f jmp 0x10c1e654 */
  goto L_10c1e654;
L_10c1e661:;
  /* 10c1e661 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10c1e664:;
  /* 10c1e664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c1e666 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c1e668 je 0x10c1e674 */
  if (C.zf) goto L_10c1e674;
  /* 10c1e66a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c1e66b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10c1e66b");
  /* 10c1e66f jae 0x10c1e664 */
  if (!C.cf) goto L_10c1e664;
  /* 10c1e671 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10c1e674:;
  /* 10c1e674 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e677 pop esi */
  ESI = (pop32());
  /* 10c1e678 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c1e679 ret  */
  ESPCHK(0x10c1e640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x10c1e680 (512 bytes, 147 insns) */
void f_10c1e680(void) {
  FTRACE(0x10c1e680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e680 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e681 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e686 cmp dword ptr [0x10c3e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e68d jne 0x10c1e6b2 */
  if (!C.zf) goto L_10c1e6b2;
  /* 10c1e68f call 0x10c1f150 */
  push32(0x10c1e694u); f_10c1f150();
  /* 10c1e694 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e696 je 0x10c1e6a2 */
  if (C.zf) goto L_10c1e6a2;
  /* 10c1e698 mov eax, dword ptr [0x10c40308] */
  EAX = (r32((uint32_t)(0x10c40308)));
  /* 10c1e69d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1e6a0 jmp 0x10c1e6a9 */
  goto L_10c1e6a9;
L_10c1e6a2:;
  /* 10c1e6a2 mov dword ptr [ebp - 8], 0x10c1f1a0 */
  w32((uint32_t)(EBP + -0x8), (0x10c1f1a0u));
L_10c1e6a9:;
  /* 10c1e6a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1e6ac mov dword ptr [0x10c3e68c], ecx */
  w32((uint32_t)(0x10c3e68c), (ECX));
L_10c1e6b2:;
  /* 10c1e6b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e6b6 jne 0x10c1e6c2 */
  if (!C.zf) goto L_10c1e6c2;
  /* 10c1e6b8 call 0x10c1efa0 */
  push32(0x10c1e6bdu); f_10c1efa0();
  /* 10c1e6bd jmp 0x10c1e78e */
  goto L_10c1e78e;
L_10c1e6c2:;
  /* 10c1e6c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e6c5 mov dword ptr [0x10c3e67c], edx */
  w32((uint32_t)(0x10c3e67c), (EDX));
  /* 10c1e6cb cmp dword ptr [0x10c3e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e6d2 je 0x10c1e6f4 */
  if (C.zf) goto L_10c1e6f4;
  /* 10c1e6d4 mov eax, dword ptr [0x10c3e67c] */
  EAX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1e6d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1e6dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1e6de je 0x10c1e6f4 */
  if (C.zf) goto L_10c1e6f4;
  /* 10c1e6e0 push 0x10c3e67c */
  push32((uint32_t)(0x10c3e67cu));
  /* 10c1e6e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c1e6e7 push 0x10c3da90 */
  push32((uint32_t)(0x10c3da90u));
  /* 10c1e6ec call 0x10c1e880 */
  push32(0x10c1e6f1u); f_10c1e880();
  /* 10c1e6f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1e6f4:;
  /* 10c1e6f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e6f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e6fa mov dword ptr [0x10c3e680], edx */
  w32((uint32_t)(0x10c3e680), (EDX));
  /* 10c1e700 cmp dword ptr [0x10c3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e707 je 0x10c1e729 */
  if (C.zf) goto L_10c1e729;
  /* 10c1e709 mov eax, dword ptr [0x10c3e680] */
  EAX = (r32((uint32_t)(0x10c3e680)));
  /* 10c1e70e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1e711 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1e713 je 0x10c1e729 */
  if (C.zf) goto L_10c1e729;
  /* 10c1e715 push 0x10c3e680 */
  push32((uint32_t)(0x10c3e680u));
  /* 10c1e71a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c1e71c push 0x10c3d9d8 */
  push32((uint32_t)(0x10c3d9d8u));
  /* 10c1e721 call 0x10c1e880 */
  push32(0x10c1e726u); f_10c1e880();
  /* 10c1e726 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1e729:;
  /* 10c1e729 mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
  /* 10c1e733 cmp dword ptr [0x10c3e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e73a je 0x10c1e76d */
  if (C.zf) goto L_10c1e76d;
  /* 10c1e73c mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1e742 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c1e745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e747 je 0x10c1e76d */
  if (C.zf) goto L_10c1e76d;
  /* 10c1e749 cmp dword ptr [0x10c3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e750 je 0x10c1e766 */
  if (C.zf) goto L_10c1e766;
  /* 10c1e752 mov ecx, dword ptr [0x10c3e680] */
  ECX = (r32((uint32_t)(0x10c3e680)));
  /* 10c1e758 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1e75b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1e75d je 0x10c1e766 */
  if (C.zf) goto L_10c1e766;
  /* 10c1e75f call 0x10c1e910 */
  push32(0x10c1e764u); f_10c1e910();
  /* 10c1e764 jmp 0x10c1e76b */
  goto L_10c1e76b;
L_10c1e766:;
  /* 10c1e766 call 0x10c1ed00 */
  push32(0x10c1e76bu); f_10c1ed00();
L_10c1e76b:;
  /* 10c1e76b jmp 0x10c1e78e */
  goto L_10c1e78e;
L_10c1e76d:;
  /* 10c1e76d cmp dword ptr [0x10c3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e774 je 0x10c1e789 */
  if (C.zf) goto L_10c1e789;
  /* 10c1e776 mov eax, dword ptr [0x10c3e680] */
  EAX = (r32((uint32_t)(0x10c3e680)));
  /* 10c1e77b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1e77e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1e780 je 0x10c1e789 */
  if (C.zf) goto L_10c1e789;
  /* 10c1e782 call 0x10c1eea0 */
  push32(0x10c1e787u); f_10c1eea0();
  /* 10c1e787 jmp 0x10c1e78e */
  goto L_10c1e78e;
L_10c1e789:;
  /* 10c1e789 call 0x10c1efa0 */
  push32(0x10c1e78eu); f_10c1efa0();
L_10c1e78e:;
  /* 10c1e78e cmp dword ptr [0x10c3e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e795 jne 0x10c1e79e */
  if (!C.zf) goto L_10c1e79e;
  /* 10c1e797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e799 jmp 0x10c1e87c */
  goto L_10c1e87c;
L_10c1e79e:;
  /* 10c1e79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e7a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e7a7 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e7a8 call 0x10c1efd0 */
  push32(0x10c1e7adu); f_10c1efd0();
  /* 10c1e7ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e7b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1e7b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e7b7 je 0x10c1e7cc */
  if (C.zf) goto L_10c1e7cc;
  /* 10c1e7b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e7bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e7c1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e7c2 call dword ptr [0x10c40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40314))), 0x10c1e7c8u);
  /* 10c1e7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e7ca jne 0x10c1e7d3 */
  if (!C.zf) goto L_10c1e7d3;
L_10c1e7cc:;
  /* 10c1e7cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e7ce jmp 0x10c1e87c */
  goto L_10c1e87c;
L_10c1e7d3:;
  /* 10c1e7d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1e7d5 mov ecx, dword ptr [0x10c3e66c] */
  ECX = (r32((uint32_t)(0x10c3e66c)));
  /* 10c1e7db push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e7dc call dword ptr [0x10c40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40310))), 0x10c1e7e2u);
  /* 10c1e7e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e7e4 jne 0x10c1e7ed */
  if (!C.zf) goto L_10c1e7ed;
  /* 10c1e7e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e7e8 jmp 0x10c1e87c */
  goto L_10c1e87c;
L_10c1e7ed:;
  /* 10c1e7ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e7f1 je 0x10c1e818 */
  if (C.zf) goto L_10c1e818;
  /* 10c1e7f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1e7f6 mov ax, word ptr [0x10c3e66c] */
  AX = (r16((uint32_t)(0x10c3e66c)));
  /* 10c1e7fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10c1e7ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1e802 mov dx, word ptr [0x10c3e688] */
  DX = (r16((uint32_t)(0x10c3e688)));
  /* 10c1e809 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10c1e80d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1e810 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10c1e814 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10c1e818:;
  /* 10c1e818 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e81c je 0x10c1e877 */
  if (C.zf) goto L_10c1e877;
  /* 10c1e81e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c1e820 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1e823 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e824 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10c1e829 mov eax, dword ptr [0x10c3e66c] */
  EAX = (r32((uint32_t)(0x10c3e66c)));
  /* 10c1e82e push eax */
  push32((uint32_t)(EAX));
  /* 10c1e82f call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1e835u);
  /* 10c1e835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e837 jne 0x10c1e83d */
  if (!C.zf) goto L_10c1e83d;
  /* 10c1e839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e83b jmp 0x10c1e87c */
  goto L_10c1e87c;
L_10c1e83d:;
  /* 10c1e83d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10c1e83f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1e842 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e845 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e846 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10c1e84b mov edx, dword ptr [0x10c3e688] */
  EDX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1e851 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e852 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1e858u);
  /* 10c1e858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e85a jne 0x10c1e860 */
  if (!C.zf) goto L_10c1e860;
  /* 10c1e85c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e85e jmp 0x10c1e87c */
  goto L_10c1e87c;
L_10c1e860:;
  /* 10c1e860 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c1e862 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1e865 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e86a push eax */
  push32((uint32_t)(EAX));
  /* 10c1e86b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e86e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e86f call 0x10c153e0 */
  push32(0x10c1e874u); f_10c153e0();
  /* 10c1e874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1e877:;
  /* 10c1e877 mov eax, 1 */
  EAX = (0x1u);
L_10c1e87c:;
  /* 10c1e87c mov esp, ebp */
  ESP = (EBP);
  /* 10c1e87e pop ebp */
  EBP = (pop32());
  /* 10c1e87f ret  */
  ESPCHK(0x10c1e680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e880 @ 0x10c1e880 (130 bytes, 47 insns) */
void f_10c1e880(void) {
  FTRACE(0x10c1e880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e880 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e881 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e886 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c1e88d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10c1e894:;
  /* 10c1e894 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1e897 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e89a jg 0x10c1e8fe */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1e8fe;
  /* 10c1e89c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e8a0 je 0x10c1e8fe */
  if (C.zf) goto L_10c1e8fe;
  /* 10c1e8a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1e8a5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e8a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1e8a9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e8ab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c1e8ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1e8b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e8b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e8b6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10c1e8b9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e8ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1e8bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1e8bf push edx */
  push32((uint32_t)(EDX));
  /* 10c1e8c0 call 0x10c20f70 */
  push32(0x10c1e8c5u); f_10c20f70();
  /* 10c1e8c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e8c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1e8cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e8cf jne 0x10c1e8e2 */
  if (!C.zf) goto L_10c1e8e2;
  /* 10c1e8d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e8d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e8d7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10c1e8db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1e8de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1e8e0 jmp 0x10c1e8fc */
  goto L_10c1e8fc;
L_10c1e8e2:;
  /* 10c1e8e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e8e6 jge 0x10c1e8f3 */
  if ((C.sf==C.of)) goto L_10c1e8f3;
  /* 10c1e8e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e8eb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e8ee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c1e8f1 jmp 0x10c1e8fc */
  goto L_10c1e8fc;
L_10c1e8f3:;
  /* 10c1e8f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e8f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e8f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c1e8fc:;
  /* 10c1e8fc jmp 0x10c1e894 */
  goto L_10c1e894;
L_10c1e8fe:;
  /* 10c1e8fe mov esp, ebp */
  ESP = (EBP);
  /* 10c1e900 pop ebp */
  EBP = (pop32());
  /* 10c1e901 ret  */
  ESPCHK(0x10c1e880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e910 @ 0x10c1e910 (186 bytes, 50 insns) */
void f_10c1e910(void) {
  FTRACE(0x10c1e910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e910 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e911 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e913 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e914 mov eax, dword ptr [0x10c3e67c] */
  EAX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1e919 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e91a call 0x10c156d0 */
  push32(0x10c1e91fu); f_10c156d0();
  /* 10c1e91f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e922 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e924 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e927 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c1e92a mov dword ptr [0x10c3e678], ecx */
  w32((uint32_t)(0x10c3e678), (ECX));
  /* 10c1e930 mov edx, dword ptr [0x10c3e680] */
  EDX = (r32((uint32_t)(0x10c3e680)));
  /* 10c1e936 push edx */
  push32((uint32_t)(EDX));
  /* 10c1e937 call 0x10c156d0 */
  push32(0x10c1e93cu); f_10c156d0();
  /* 10c1e93c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e93f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e941 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e944 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c1e947 mov dword ptr [0x10c3e670], ecx */
  w32((uint32_t)(0x10c3e670), (ECX));
  /* 10c1e94d mov dword ptr [0x10c3e66c], 0 */
  w32((uint32_t)(0x10c3e66c), (0x0u));
  /* 10c1e957 cmp dword ptr [0x10c3e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1e95e je 0x10c1e969 */
  if (C.zf) goto L_10c1e969;
  /* 10c1e960 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c1e967 jmp 0x10c1e97b */
  goto L_10c1e97b;
L_10c1e969:;
  /* 10c1e969 mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1e96f push edx */
  push32((uint32_t)(EDX));
  /* 10c1e970 call 0x10c1f3b0 */
  push32(0x10c1e975u); f_10c1f3b0();
  /* 10c1e975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e978 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1e97b:;
  /* 10c1e97b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1e97e mov dword ptr [0x10c3e674], eax */
  w32((uint32_t)(0x10c3e674), (EAX));
  /* 10c1e983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1e985 push 0x10c1e9d0 */
  push32((uint32_t)(0x10c1e9d0u));
  /* 10c1e98a call dword ptr [0x10c40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40318))), 0x10c1e990u);
  /* 10c1e990 mov ecx, dword ptr [0x10c3e684] */
  ECX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1e996 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1e99c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1e99e je 0x10c1e9bc */
  if (C.zf) goto L_10c1e9bc;
  /* 10c1e9a0 mov edx, dword ptr [0x10c3e684] */
  EDX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1e9a6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1e9ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1e9ae je 0x10c1e9bc */
  if (C.zf) goto L_10c1e9bc;
  /* 10c1e9b0 mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1e9b5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1e9b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1e9ba jne 0x10c1e9c6 */
  if (!C.zf) goto L_10c1e9c6;
L_10c1e9bc:;
  /* 10c1e9bc mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
L_10c1e9c6:;
  /* 10c1e9c6 mov esp, ebp */
  ESP = (EBP);
  /* 10c1e9c8 pop ebp */
  EBP = (pop32());
  /* 10c1e9c9 ret  */
  ESPCHK(0x10c1e910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9d0 @ 0x10c1e9d0 (804 bytes, 220 insns) */
void f_10c1e9d0(void) {
  FTRACE(0x10c1e9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1e9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1e9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1e9d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1e9d9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1e9da call 0x10c1f330 */
  push32(0x10c1e9dfu); f_10c1f330();
  /* 10c1e9df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1e9e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c1e9e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c1e9e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c1e9ea push ecx */
  push32((uint32_t)(ECX));
  /* 10c1e9eb mov edx, dword ptr [0x10c3e670] */
  EDX = (r32((uint32_t)(0x10c3e670)));
  /* 10c1e9f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1e9f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1e9f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1e9fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ea01 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ea02 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ea05 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ea06 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1ea0cu);
  /* 10c1ea0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ea0e jne 0x10c1ea24 */
  if (!C.zf) goto L_10c1ea24;
  /* 10c1ea10 mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
  /* 10c1ea1a mov eax, 1 */
  EAX = (0x1u);
  /* 10c1ea1f jmp 0x10c1ecee */
  goto L_10c1ecee;
L_10c1ea24:;
  /* 10c1ea24 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c1ea27 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ea28 mov edx, dword ptr [0x10c3e680] */
  EDX = (r32((uint32_t)(0x10c3e680)));
  /* 10c1ea2e push edx */
  push32((uint32_t)(EDX));
  /* 10c1ea2f call 0x10c20f70 */
  push32(0x10c1ea34u); f_10c20f70();
  /* 10c1ea34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ea37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ea39 jne 0x10c1eb5f */
  if (!C.zf) goto L_10c1eb5f;
  /* 10c1ea3f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c1ea41 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c1ea44 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ea45 mov ecx, dword ptr [0x10c3e678] */
  ECX = (r32((uint32_t)(0x10c3e678)));
  /* 10c1ea4b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1ea4d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ea4f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1ea55 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ea5b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ea5c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ea5f push edx */
  push32((uint32_t)(EDX));
  /* 10c1ea60 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1ea66u);
  /* 10c1ea66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ea68 jne 0x10c1ea7e */
  if (!C.zf) goto L_10c1ea7e;
  /* 10c1ea6a mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
  /* 10c1ea74 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1ea79 jmp 0x10c1ecee */
  goto L_10c1ecee;
L_10c1ea7e:;
  /* 10c1ea7e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c1ea81 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ea82 mov ecx, dword ptr [0x10c3e67c] */
  ECX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1ea88 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ea89 call 0x10c20f70 */
  push32(0x10c1ea8eu); f_10c20f70();
  /* 10c1ea8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ea91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ea93 jne 0x10c1eac0 */
  if (!C.zf) goto L_10c1eac0;
  /* 10c1ea95 mov edx, dword ptr [0x10c3e684] */
  EDX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ea9b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1eaa1 mov dword ptr [0x10c3e684], edx */
  w32((uint32_t)(0x10c3e684), (EDX));
  /* 10c1eaa7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1eaaa mov dword ptr [0x10c3e688], eax */
  w32((uint32_t)(0x10c3e688), (EAX));
  /* 10c1eaaf mov ecx, dword ptr [0x10c3e688] */
  ECX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1eab5 mov dword ptr [0x10c3e66c], ecx */
  w32((uint32_t)(0x10c3e66c), (ECX));
  /* 10c1eabb jmp 0x10c1eb5f */
  goto L_10c1eb5f;
L_10c1eac0:;
  /* 10c1eac0 mov edx, dword ptr [0x10c3e684] */
  EDX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1eac6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1eac9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1eacb jne 0x10c1eb5f */
  if (!C.zf) goto L_10c1eb5f;
  /* 10c1ead1 cmp dword ptr [0x10c3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ead8 je 0x10c1eb2d */
  if (C.zf) goto L_10c1eb2d;
  /* 10c1eada mov eax, dword ptr [0x10c3e674] */
  EAX = (r32((uint32_t)(0x10c3e674)));
  /* 10c1eadf push eax */
  push32((uint32_t)(EAX));
  /* 10c1eae0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c1eae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1eae4 mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1eaea push edx */
  push32((uint32_t)(EDX));
  /* 10c1eaeb call 0x10c21040 */
  push32(0x10c1eaf0u); f_10c21040();
  /* 10c1eaf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1eaf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1eaf5 jne 0x10c1eb2d */
  if (!C.zf) goto L_10c1eb2d;
  /* 10c1eaf7 mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1eafc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10c1eafe mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
  /* 10c1eb03 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1eb06 mov dword ptr [0x10c3e688], ecx */
  w32((uint32_t)(0x10c3e688), (ECX));
  /* 10c1eb0c mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1eb12 push edx */
  push32((uint32_t)(EDX));
  /* 10c1eb13 call 0x10c156d0 */
  push32(0x10c1eb18u); f_10c156d0();
  /* 10c1eb18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1eb1b cmp eax, dword ptr [0x10c3e674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3e674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1eb21 jne 0x10c1eb2b */
  if (!C.zf) goto L_10c1eb2b;
  /* 10c1eb23 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1eb26 mov dword ptr [0x10c3e66c], eax */
  w32((uint32_t)(0x10c3e66c), (EAX));
L_10c1eb2b:;
  /* 10c1eb2b jmp 0x10c1eb5f */
  goto L_10c1eb5f;
L_10c1eb2d:;
  /* 10c1eb2d mov ecx, dword ptr [0x10c3e684] */
  ECX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1eb33 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1eb36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1eb38 jne 0x10c1eb5f */
  if (!C.zf) goto L_10c1eb5f;
  /* 10c1eb3a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1eb3d push edx */
  push32((uint32_t)(EDX));
  /* 10c1eb3e call 0x10c1f070 */
  push32(0x10c1eb43u); f_10c1f070();
  /* 10c1eb43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1eb46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1eb48 je 0x10c1eb5f */
  if (C.zf) goto L_10c1eb5f;
  /* 10c1eb4a mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1eb4f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10c1eb51 mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
  /* 10c1eb56 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1eb59 mov dword ptr [0x10c3e688], ecx */
  w32((uint32_t)(0x10c3e688), (ECX));
L_10c1eb5f:;
  /* 10c1eb5f mov edx, dword ptr [0x10c3e684] */
  EDX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1eb65 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1eb6b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1eb71 je 0x10c1ece1 */
  if (C.zf) goto L_10c1ece1;
  /* 10c1eb77 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c1eb79 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c1eb7c push eax */
  push32((uint32_t)(EAX));
  /* 10c1eb7d mov ecx, dword ptr [0x10c3e678] */
  ECX = (r32((uint32_t)(0x10c3e678)));
  /* 10c1eb83 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1eb85 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1eb87 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1eb8d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1eb93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1eb94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1eb97 push edx */
  push32((uint32_t)(EDX));
  /* 10c1eb98 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1eb9eu);
  /* 10c1eb9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1eba0 jne 0x10c1ebb6 */
  if (!C.zf) goto L_10c1ebb6;
  /* 10c1eba2 mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
  /* 10c1ebac mov eax, 1 */
  EAX = (0x1u);
  /* 10c1ebb1 jmp 0x10c1ecee */
  goto L_10c1ecee;
L_10c1ebb6:;
  /* 10c1ebb6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c1ebb9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ebba mov ecx, dword ptr [0x10c3e67c] */
  ECX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1ebc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ebc1 call 0x10c20f70 */
  push32(0x10c1ebc6u); f_10c20f70();
  /* 10c1ebc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ebc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ebcb jne 0x10c1ec80 */
  if (!C.zf) goto L_10c1ec80;
  /* 10c1ebd1 mov edx, dword ptr [0x10c3e684] */
  EDX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ebd7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10c1ebda mov dword ptr [0x10c3e684], edx */
  w32((uint32_t)(0x10c3e684), (EDX));
  /* 10c1ebe0 cmp dword ptr [0x10c3e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ebe7 je 0x10c1ec0a */
  if (C.zf) goto L_10c1ec0a;
  /* 10c1ebe9 mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ebee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c1ebf1 mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
  /* 10c1ebf6 cmp dword ptr [0x10c3e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ebfd jne 0x10c1ec08 */
  if (!C.zf) goto L_10c1ec08;
  /* 10c1ebff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ec02 mov dword ptr [0x10c3e66c], ecx */
  w32((uint32_t)(0x10c3e66c), (ECX));
L_10c1ec08:;
  /* 10c1ec08 jmp 0x10c1ec7e */
  goto L_10c1ec7e;
L_10c1ec0a:;
  /* 10c1ec0a cmp dword ptr [0x10c3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ec11 je 0x10c1ec5f */
  if (C.zf) goto L_10c1ec5f;
  /* 10c1ec13 mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1ec19 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ec1a call 0x10c156d0 */
  push32(0x10c1ec1fu); f_10c156d0();
  /* 10c1ec1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ec22 cmp eax, dword ptr [0x10c3e674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3e674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ec28 jne 0x10c1ec5f */
  if (!C.zf) goto L_10c1ec5f;
  /* 10c1ec2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ec2c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ec2f push eax */
  push32((uint32_t)(EAX));
  /* 10c1ec30 call 0x10c1f0c0 */
  push32(0x10c1ec35u); f_10c1f0c0();
  /* 10c1ec35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ec38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ec3a je 0x10c1ec5d */
  if (C.zf) goto L_10c1ec5d;
  /* 10c1ec3c mov ecx, dword ptr [0x10c3e684] */
  ECX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ec42 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10c1ec45 mov dword ptr [0x10c3e684], ecx */
  w32((uint32_t)(0x10c3e684), (ECX));
  /* 10c1ec4b cmp dword ptr [0x10c3e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ec52 jne 0x10c1ec5d */
  if (!C.zf) goto L_10c1ec5d;
  /* 10c1ec54 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ec57 mov dword ptr [0x10c3e66c], edx */
  w32((uint32_t)(0x10c3e66c), (EDX));
L_10c1ec5d:;
  /* 10c1ec5d jmp 0x10c1ec7e */
  goto L_10c1ec7e;
L_10c1ec5f:;
  /* 10c1ec5f mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ec64 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c1ec67 mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
  /* 10c1ec6c cmp dword ptr [0x10c3e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ec73 jne 0x10c1ec7e */
  if (!C.zf) goto L_10c1ec7e;
  /* 10c1ec75 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ec78 mov dword ptr [0x10c3e66c], ecx */
  w32((uint32_t)(0x10c3e66c), (ECX));
L_10c1ec7e:;
  /* 10c1ec7e jmp 0x10c1ece1 */
  goto L_10c1ece1;
L_10c1ec80:;
  /* 10c1ec80 cmp dword ptr [0x10c3e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ec87 jne 0x10c1ece1 */
  if (!C.zf) goto L_10c1ece1;
  /* 10c1ec89 cmp dword ptr [0x10c3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ec90 je 0x10c1ece1 */
  if (C.zf) goto L_10c1ece1;
  /* 10c1ec92 mov edx, dword ptr [0x10c3e674] */
  EDX = (r32((uint32_t)(0x10c3e674)));
  /* 10c1ec98 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ec99 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10c1ec9c push eax */
  push32((uint32_t)(EAX));
  /* 10c1ec9d mov ecx, dword ptr [0x10c3e67c] */
  ECX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1eca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1eca4 call 0x10c21040 */
  push32(0x10c1eca9u); f_10c21040();
  /* 10c1eca9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ecac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ecae jne 0x10c1ece1 */
  if (!C.zf) goto L_10c1ece1;
  /* 10c1ecb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ecb2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ecb5 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ecb6 call 0x10c1f0c0 */
  push32(0x10c1ecbbu); f_10c1f0c0();
  /* 10c1ecbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ecbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ecc0 je 0x10c1ece1 */
  if (C.zf) goto L_10c1ece1;
  /* 10c1ecc2 mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ecc7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10c1ecca mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
  /* 10c1eccf cmp dword ptr [0x10c3e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ecd6 jne 0x10c1ece1 */
  if (!C.zf) goto L_10c1ece1;
  /* 10c1ecd8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ecdb mov dword ptr [0x10c3e66c], ecx */
  w32((uint32_t)(0x10c3e66c), (ECX));
L_10c1ece1:;
  /* 10c1ece1 mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ece6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ece9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1eceb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1eced inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c1ecee:;
  /* 10c1ecee mov esp, ebp */
  ESP = (EBP);
  /* 10c1ecf0 pop ebp */
  EBP = (pop32());
  /* 10c1ecf1 ret 4 */
  ESPCHK(0x10c1e9d0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ed00 @ 0x10c1ed00 (116 bytes, 33 insns) */
void f_10c1ed00(void) {
  FTRACE(0x10c1ed00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ed00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ed01 mov ebp, esp */
  EBP = (ESP);
  /* 10c1ed03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ed04 mov eax, dword ptr [0x10c3e67c] */
  EAX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1ed09 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ed0a call 0x10c156d0 */
  push32(0x10c1ed0fu); f_10c156d0();
  /* 10c1ed0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ed12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1ed14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ed17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c1ed1a mov dword ptr [0x10c3e678], ecx */
  w32((uint32_t)(0x10c3e678), (ECX));
  /* 10c1ed20 cmp dword ptr [0x10c3e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ed27 je 0x10c1ed32 */
  if (C.zf) goto L_10c1ed32;
  /* 10c1ed29 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c1ed30 jmp 0x10c1ed44 */
  goto L_10c1ed44;
L_10c1ed32:;
  /* 10c1ed32 mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1ed38 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ed39 call 0x10c1f3b0 */
  push32(0x10c1ed3eu); f_10c1f3b0();
  /* 10c1ed3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ed41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1ed44:;
  /* 10c1ed44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1ed47 mov dword ptr [0x10c3e674], eax */
  w32((uint32_t)(0x10c3e674), (EAX));
  /* 10c1ed4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1ed4e push 0x10c1ed80 */
  push32((uint32_t)(0x10c1ed80u));
  /* 10c1ed53 call dword ptr [0x10c40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40318))), 0x10c1ed59u);
  /* 10c1ed59 mov ecx, dword ptr [0x10c3e684] */
  ECX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ed5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1ed62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1ed64 jne 0x10c1ed70 */
  if (!C.zf) goto L_10c1ed70;
  /* 10c1ed66 mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
L_10c1ed70:;
  /* 10c1ed70 mov esp, ebp */
  ESP = (EBP);
  /* 10c1ed72 pop ebp */
  EBP = (pop32());
  /* 10c1ed73 ret  */
  ESPCHK(0x10c1ed00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed80 @ 0x10c1ed80 (287 bytes, 86 insns) */
void f_10c1ed80(void) {
  FTRACE(0x10c1ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1ed81 mov ebp, esp */
  EBP = (ESP);
  /* 10c1ed83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ed86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1ed89 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ed8a call 0x10c1f330 */
  push32(0x10c1ed8fu); f_10c1f330();
  /* 10c1ed8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ed92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c1ed95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c1ed97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c1ed9a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ed9b mov edx, dword ptr [0x10c3e678] */
  EDX = (r32((uint32_t)(0x10c3e678)));
  /* 10c1eda1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1eda3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1eda5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1edab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1edb1 push edx */
  push32((uint32_t)(EDX));
  /* 10c1edb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1edb5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1edb6 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1edbcu);
  /* 10c1edbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1edbe jne 0x10c1edd4 */
  if (!C.zf) goto L_10c1edd4;
  /* 10c1edc0 mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
  /* 10c1edca mov eax, 1 */
  EAX = (0x1u);
  /* 10c1edcf jmp 0x10c1ee99 */
  goto L_10c1ee99;
L_10c1edd4:;
  /* 10c1edd4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c1edd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1edd8 mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1edde push edx */
  push32((uint32_t)(EDX));
  /* 10c1eddf call 0x10c20f70 */
  push32(0x10c1ede4u); f_10c20f70();
  /* 10c1ede4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ede7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ede9 jne 0x10c1ee29 */
  if (!C.zf) goto L_10c1ee29;
  /* 10c1edeb cmp dword ptr [0x10c3e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1edf2 jne 0x10c1ee06 */
  if (!C.zf) goto L_10c1ee06;
  /* 10c1edf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1edf6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1edf9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1edfa call 0x10c1f0c0 */
  push32(0x10c1edffu); f_10c1f0c0();
  /* 10c1edff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ee02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ee04 je 0x10c1ee27 */
  if (C.zf) goto L_10c1ee27;
L_10c1ee06:;
  /* 10c1ee06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ee09 mov dword ptr [0x10c3e688], ecx */
  w32((uint32_t)(0x10c3e688), (ECX));
  /* 10c1ee0f mov edx, dword ptr [0x10c3e688] */
  EDX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1ee15 mov dword ptr [0x10c3e66c], edx */
  w32((uint32_t)(0x10c3e66c), (EDX));
  /* 10c1ee1b mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ee20 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c1ee22 mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
L_10c1ee27:;
  /* 10c1ee27 jmp 0x10c1ee8c */
  goto L_10c1ee8c;
L_10c1ee29:;
  /* 10c1ee29 cmp dword ptr [0x10c3e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ee30 jne 0x10c1ee8c */
  if (!C.zf) goto L_10c1ee8c;
  /* 10c1ee32 cmp dword ptr [0x10c3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ee39 je 0x10c1ee8c */
  if (C.zf) goto L_10c1ee8c;
  /* 10c1ee3b mov ecx, dword ptr [0x10c3e674] */
  ECX = (r32((uint32_t)(0x10c3e674)));
  /* 10c1ee41 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ee42 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10c1ee45 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ee46 mov eax, dword ptr [0x10c3e67c] */
  EAX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1ee4b push eax */
  push32((uint32_t)(EAX));
  /* 10c1ee4c call 0x10c21040 */
  push32(0x10c1ee51u); f_10c21040();
  /* 10c1ee51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ee54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ee56 jne 0x10c1ee8c */
  if (!C.zf) goto L_10c1ee8c;
  /* 10c1ee58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1ee5a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ee5d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ee5e call 0x10c1f0c0 */
  push32(0x10c1ee63u); f_10c1f0c0();
  /* 10c1ee63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ee66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ee68 je 0x10c1ee8c */
  if (C.zf) goto L_10c1ee8c;
  /* 10c1ee6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ee6d mov dword ptr [0x10c3e688], edx */
  w32((uint32_t)(0x10c3e688), (EDX));
  /* 10c1ee73 mov eax, dword ptr [0x10c3e688] */
  EAX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1ee78 mov dword ptr [0x10c3e66c], eax */
  w32((uint32_t)(0x10c3e66c), (EAX));
  /* 10c1ee7d mov ecx, dword ptr [0x10c3e684] */
  ECX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ee83 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1ee86 mov dword ptr [0x10c3e684], ecx */
  w32((uint32_t)(0x10c3e684), (ECX));
L_10c1ee8c:;
  /* 10c1ee8c mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ee91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ee94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1ee96 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ee98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c1ee99:;
  /* 10c1ee99 mov esp, ebp */
  ESP = (EBP);
  /* 10c1ee9b pop ebp */
  EBP = (pop32());
  /* 10c1ee9c ret 4 */
  ESPCHK(0x10c1ed80u, _esp0);
  ESP += 8; return;
}

/* FUN_1000eea0 @ 0x10c1eea0 (69 bytes, 20 insns) */
void f_10c1eea0(void) {
  FTRACE(0x10c1eea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1eea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1eea1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1eea3 mov eax, dword ptr [0x10c3e680] */
  EAX = (r32((uint32_t)(0x10c3e680)));
  /* 10c1eea8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1eea9 call 0x10c156d0 */
  push32(0x10c1eeaeu); f_10c156d0();
  /* 10c1eeae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1eeb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1eeb3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1eeb6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10c1eeb9 mov dword ptr [0x10c3e670], ecx */
  w32((uint32_t)(0x10c3e670), (ECX));
  /* 10c1eebf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1eec1 push 0x10c1eef0 */
  push32((uint32_t)(0x10c1eef0u));
  /* 10c1eec6 call dword ptr [0x10c40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40318))), 0x10c1eeccu);
  /* 10c1eecc mov edx, dword ptr [0x10c3e684] */
  EDX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1eed2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1eed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1eed7 jne 0x10c1eee3 */
  if (!C.zf) goto L_10c1eee3;
  /* 10c1eed9 mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
L_10c1eee3:;
  /* 10c1eee3 pop ebp */
  EBP = (pop32());
  /* 10c1eee4 ret  */
  ESPCHK(0x10c1eea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eef0 @ 0x10c1eef0 (172 bytes, 54 insns) */
void f_10c1eef0(void) {
  FTRACE(0x10c1eef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1eef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1eef1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1eef3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1eef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1eef9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1eefa call 0x10c1f330 */
  push32(0x10c1eeffu); f_10c1f330();
  /* 10c1eeff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ef02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10c1ef05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c1ef07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c1ef0a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ef0b mov edx, dword ptr [0x10c3e670] */
  EDX = (r32((uint32_t)(0x10c3e670)));
  /* 10c1ef11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1ef13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ef15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1ef1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ef21 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ef22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ef25 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ef26 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1ef2cu);
  /* 10c1ef2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ef2e jne 0x10c1ef41 */
  if (!C.zf) goto L_10c1ef41;
  /* 10c1ef30 mov dword ptr [0x10c3e684], 0 */
  w32((uint32_t)(0x10c3e684), (0x0u));
  /* 10c1ef3a mov eax, 1 */
  EAX = (0x1u);
  /* 10c1ef3f jmp 0x10c1ef96 */
  goto L_10c1ef96;
L_10c1ef41:;
  /* 10c1ef41 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10c1ef44 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ef45 mov edx, dword ptr [0x10c3e680] */
  EDX = (r32((uint32_t)(0x10c3e680)));
  /* 10c1ef4b push edx */
  push32((uint32_t)(EDX));
  /* 10c1ef4c call 0x10c20f70 */
  push32(0x10c1ef51u); f_10c20f70();
  /* 10c1ef51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ef54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ef56 jne 0x10c1ef89 */
  if (!C.zf) goto L_10c1ef89;
  /* 10c1ef58 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ef5b push eax */
  push32((uint32_t)(EAX));
  /* 10c1ef5c call 0x10c1f070 */
  push32(0x10c1ef61u); f_10c1f070();
  /* 10c1ef61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ef64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1ef66 je 0x10c1ef89 */
  if (C.zf) goto L_10c1ef89;
  /* 10c1ef68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10c1ef6b mov dword ptr [0x10c3e688], ecx */
  w32((uint32_t)(0x10c3e688), (ECX));
  /* 10c1ef71 mov edx, dword ptr [0x10c3e688] */
  EDX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1ef77 mov dword ptr [0x10c3e66c], edx */
  w32((uint32_t)(0x10c3e66c), (EDX));
  /* 10c1ef7d mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ef82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10c1ef84 mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
L_10c1ef89:;
  /* 10c1ef89 mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1ef8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1ef91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1ef93 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ef95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10c1ef96:;
  /* 10c1ef96 mov esp, ebp */
  ESP = (EBP);
  /* 10c1ef98 pop ebp */
  EBP = (pop32());
  /* 10c1ef99 ret 4 */
  ESPCHK(0x10c1eef0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efa0 @ 0x10c1efa0 (43 bytes, 11 insns) */
void f_10c1efa0(void) {
  FTRACE(0x10c1efa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1efa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1efa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1efa3 mov eax, dword ptr [0x10c3e684] */
  EAX = (r32((uint32_t)(0x10c3e684)));
  /* 10c1efa8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1efad mov dword ptr [0x10c3e684], eax */
  w32((uint32_t)(0x10c3e684), (EAX));
  /* 10c1efb2 call dword ptr [0x10c4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4031c))), 0x10c1efb8u);
  /* 10c1efb8 mov dword ptr [0x10c3e688], eax */
  w32((uint32_t)(0x10c3e688), (EAX));
  /* 10c1efbd mov ecx, dword ptr [0x10c3e688] */
  ECX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1efc3 mov dword ptr [0x10c3e66c], ecx */
  w32((uint32_t)(0x10c3e66c), (ECX));
  /* 10c1efc9 pop ebp */
  EBP = (pop32());
  /* 10c1efca ret  */
  ESPCHK(0x10c1efa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efd0 @ 0x10c1efd0 (155 bytes, 57 insns) */
void f_10c1efd0(void) {
  FTRACE(0x10c1efd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1efd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1efd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1efd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1efd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1efda je 0x10c1effb */
  if (C.zf) goto L_10c1effb;
  /* 10c1efdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1efdf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1efe2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1efe4 je 0x10c1effb */
  if (C.zf) goto L_10c1effb;
  /* 10c1efe6 push 0x10c3a6a4 */
  push32((uint32_t)(0x10c3a6a4u));
  /* 10c1efeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1efee push edx */
  push32((uint32_t)(EDX));
  /* 10c1efef call 0x10c1e530 */
  push32(0x10c1eff4u); f_10c1e530();
  /* 10c1eff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1eff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1eff9 jne 0x10c1f023 */
  if (!C.zf) goto L_10c1f023;
L_10c1effb:;
  /* 10c1effb push 8 */
  push32((uint32_t)(0x8u));
  /* 10c1effd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c1f000 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f001 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10c1f006 mov ecx, dword ptr [0x10c3e688] */
  ECX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1f00c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f00d call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1f013u);
  /* 10c1f013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1f015 jne 0x10c1f01b */
  if (!C.zf) goto L_10c1f01b;
  /* 10c1f017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f019 jmp 0x10c1f067 */
  goto L_10c1f067;
L_10c1f01b:;
  /* 10c1f01b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10c1f01e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c1f021 jmp 0x10c1f05b */
  goto L_10c1f05b;
L_10c1f023:;
  /* 10c1f023 push 0x10c3a6a0 */
  push32((uint32_t)(0x10c3a6a0u));
  /* 10c1f028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f02b push eax */
  push32((uint32_t)(EAX));
  /* 10c1f02c call 0x10c1e530 */
  push32(0x10c1f031u); f_10c1e530();
  /* 10c1f031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1f036 jne 0x10c1f05b */
  if (!C.zf) goto L_10c1f05b;
  /* 10c1f038 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c1f03a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10c1f03d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f03e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c1f040 mov edx, dword ptr [0x10c3e688] */
  EDX = (r32((uint32_t)(0x10c3e688)));
  /* 10c1f046 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f047 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1f04du);
  /* 10c1f04d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1f04f jne 0x10c1f055 */
  if (!C.zf) goto L_10c1f055;
  /* 10c1f051 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f053 jmp 0x10c1f067 */
  goto L_10c1f067;
L_10c1f055:;
  /* 10c1f055 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c1f058 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c1f05b:;
  /* 10c1f05b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f05e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f05f call 0x10c21150 */
  push32(0x10c1f064u); f_10c21150();
  /* 10c1f064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1f067:;
  /* 10c1f067 mov esp, ebp */
  ESP = (EBP);
  /* 10c1f069 pop ebp */
  EBP = (pop32());
  /* 10c1f06a ret  */
  ESPCHK(0x10c1efd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f070 @ 0x10c1f070 (79 bytes, 26 insns) */
void f_10c1f070(void) {
  FTRACE(0x10c1f070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f070 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f071 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f076 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10c1f07a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10c1f07e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1f085 jmp 0x10c1f090 */
  goto L_10c1f090;
L_10c1f087:;
  /* 10c1f087 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f08a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f08d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c1f090:;
  /* 10c1f090 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f094 jae 0x10c1f0b6 */
  if (!C.cf) goto L_10c1f0b6;
  /* 10c1f096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f099 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1f09f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f0a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1f0a4 mov cx, word ptr [eax*2 + 0x10c3d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10c3d9c4)));
  /* 10c1f0ac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f0ae jne 0x10c1f0b4 */
  if (!C.zf) goto L_10c1f0b4;
  /* 10c1f0b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f0b2 jmp 0x10c1f0bb */
  goto L_10c1f0bb;
L_10c1f0b4:;
  /* 10c1f0b4 jmp 0x10c1f087 */
  goto L_10c1f087;
L_10c1f0b6:;
  /* 10c1f0b6 mov eax, 1 */
  EAX = (0x1u);
L_10c1f0bb:;
  /* 10c1f0bb mov esp, ebp */
  ESP = (EBP);
  /* 10c1f0bd pop ebp */
  EBP = (pop32());
  /* 10c1f0be ret  */
  ESPCHK(0x10c1f070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0c0 @ 0x10c1f0c0 (135 bytes, 48 insns) */
void f_10c1f0c0(void) {
  FTRACE(0x10c1f0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f0c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f0c6 push esi */
  push32((uint32_t)(ESI));
  /* 10c1f0c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f0ca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f0cf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f0d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f0d9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10c1f0dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f0e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1f0e4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10c1f0e6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10c1f0e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f0ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1f0ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f0ef push edx */
  push32((uint32_t)(EDX));
  /* 10c1f0f0 call dword ptr [0x10c3e68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e68c))), 0x10c1f0f6u);
  /* 10c1f0f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1f0f8 jne 0x10c1f0fe */
  if (!C.zf) goto L_10c1f0fe;
  /* 10c1f0fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f0fc jmp 0x10c1f142 */
  goto L_10c1f142;
L_10c1f0fe:;
  /* 10c1f0fe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10c1f101 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f102 call 0x10c1f330 */
  push32(0x10c1f107u); f_10c1f330();
  /* 10c1f107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f10a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f10d je 0x10c1f13d */
  if (C.zf) goto L_10c1f13d;
  /* 10c1f10f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f113 je 0x10c1f13d */
  if (C.zf) goto L_10c1f13d;
  /* 10c1f115 mov ecx, dword ptr [0x10c3e67c] */
  ECX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1f11b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f11c call 0x10c1f3b0 */
  push32(0x10c1f121u); f_10c1f3b0();
  /* 10c1f121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f124 mov esi, eax */
  ESI = (EAX);
  /* 10c1f126 mov edx, dword ptr [0x10c3e67c] */
  EDX = (r32((uint32_t)(0x10c3e67c)));
  /* 10c1f12c push edx */
  push32((uint32_t)(EDX));
  /* 10c1f12d call 0x10c156d0 */
  push32(0x10c1f132u); f_10c156d0();
  /* 10c1f132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f135 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f137 jne 0x10c1f13d */
  if (!C.zf) goto L_10c1f13d;
  /* 10c1f139 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f13b jmp 0x10c1f142 */
  goto L_10c1f142;
L_10c1f13d:;
  /* 10c1f13d mov eax, 1 */
  EAX = (0x1u);
L_10c1f142:;
  /* 10c1f142 pop esi */
  ESI = (pop32());
  /* 10c1f143 mov esp, ebp */
  ESP = (EBP);
  /* 10c1f145 pop ebp */
  EBP = (pop32());
  /* 10c1f146 ret  */
  ESPCHK(0x10c1f0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f150 @ 0x10c1f150 (77 bytes, 18 insns) */
void f_10c1f150(void) {
  FTRACE(0x10c1f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f150 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f151 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f153 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f159 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10c1f163 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10c1f169 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f16a call dword ptr [0x10c40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40320))), 0x10c1f170u);
  /* 10c1f170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1f172 je 0x10c1f189 */
  if (C.zf) goto L_10c1f189;
  /* 10c1f174 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f17b jne 0x10c1f189 */
  if (!C.zf) goto L_10c1f189;
  /* 10c1f17d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10c1f187 jmp 0x10c1f193 */
  goto L_10c1f193;
L_10c1f189:;
  /* 10c1f189 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10c1f193:;
  /* 10c1f193 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10c1f199 mov esp, ebp */
  ESP = (EBP);
  /* 10c1f19b pop ebp */
  EBP = (pop32());
  /* 10c1f19c ret  */
  ESPCHK(0x10c1f150u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10c1f1a0 (388 bytes, 118 insns) */
void f_10c1f1a0(void) {
  FTRACE(0x10c1f1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f1a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f1a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f1a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f1ad mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10c1f1b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c1f1bb:;
  /* 10c1f1bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f1be cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f1c1 jg 0x10c1f308 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1f308;
  /* 10c1f1c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f1ca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f1cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1f1ce sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f1d0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c1f1d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1f1d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f1d8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f1de cmp edx, dword ptr [ecx + 0x10c3d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10c3d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f1e4 jne 0x10c1f2de */
  if (!C.zf) goto L_10c1f2de;
  /* 10c1f1ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1f1ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c1f1f0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f1f4 ja 0x10c1f217 */
  if ((!C.cf&&!C.zf)) goto L_10c1f217;
  /* 10c1f1f6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f1fa je 0x10c1f289 */
  if (C.zf) goto L_10c1f289;
  /* 10c1f200 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f204 je 0x10c1f234 */
  if (C.zf) goto L_10c1f234;
  /* 10c1f206 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f20a je 0x10c1f256 */
  if (C.zf) goto L_10c1f256;
  /* 10c1f20c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f210 je 0x10c1f278 */
  if (C.zf) goto L_10c1f278;
  /* 10c1f212 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f217:;
  /* 10c1f217 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f21e je 0x10c1f245 */
  if (C.zf) goto L_10c1f245;
  /* 10c1f220 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f227 je 0x10c1f267 */
  if (C.zf) goto L_10c1f267;
  /* 10c1f229 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f230 je 0x10c1f29a */
  if (C.zf) goto L_10c1f29a;
  /* 10c1f232 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f234:;
  /* 10c1f234 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f237 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f23a add ecx, 0x10c3d524 */
  { uint32_t _a=(ECX),_b=(0x10c3d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f240 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1f243 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f245:;
  /* 10c1f245 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f248 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f24b mov eax, dword ptr [edx + 0x10c3d52c] */
  EAX = (r32((uint32_t)(EDX + 0x10c3d52c)));
  /* 10c1f251 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1f254 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f256:;
  /* 10c1f256 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f259 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f25c add ecx, 0x10c3d530 */
  { uint32_t _a=(ECX),_b=(0x10c3d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f262 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1f265 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f267:;
  /* 10c1f267 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f26a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f26d mov eax, dword ptr [edx + 0x10c3d534] */
  EAX = (r32((uint32_t)(EDX + 0x10c3d534)));
  /* 10c1f273 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1f276 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f278:;
  /* 10c1f278 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f27b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f27e add ecx, 0x10c3d538 */
  { uint32_t _a=(ECX),_b=(0x10c3d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f284 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1f287 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f289:;
  /* 10c1f289 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f28c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f28f add edx, 0x10c3d53c */
  { uint32_t _a=(EDX),_b=(0x10c3d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f295 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1f298 jmp 0x10c1f2a8 */
  goto L_10c1f2a8;
L_10c1f29a:;
  /* 10c1f29a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f29d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f2a0 add eax, 0x10c3d544 */
  { uint32_t _a=(EAX),_b=(0x10c3d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f2a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c1f2a8:;
  /* 10c1f2a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f2ac je 0x10c1f2b4 */
  if (C.zf) goto L_10c1f2b4;
  /* 10c1f2ae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f2b2 jge 0x10c1f2b6 */
  if ((C.sf==C.of)) goto L_10c1f2b6;
L_10c1f2b4:;
  /* 10c1f2b4 jmp 0x10c1f308 */
  goto L_10c1f308;
L_10c1f2b6:;
  /* 10c1f2b6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1f2b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f2bc push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f2bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f2c0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f2c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1f2c4 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f2c5 call 0x10c160c0 */
  push32(0x10c1f2cau); f_10c160c0();
  /* 10c1f2ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f2cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1f2d0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f2d3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10c1f2d7 mov eax, 1 */
  EAX = (0x1u);
  /* 10c1f2dc jmp 0x10c1f31e */
  goto L_10c1f31e;
L_10c1f2de:;
  /* 10c1f2de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f2e1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f2e7 cmp eax, dword ptr [edx + 0x10c3d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10c3d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f2ed jae 0x10c1f2fa */
  if (!C.cf) goto L_10c1f2fa;
  /* 10c1f2ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f2f2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f2f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1f2f8 jmp 0x10c1f303 */
  goto L_10c1f303;
L_10c1f2fa:;
  /* 10c1f2fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f2fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f300 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c1f303:;
  /* 10c1f303 jmp 0x10c1f1bb */
  goto L_10c1f1bb;
L_10c1f308:;
  /* 10c1f308 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1f30b push eax */
  push32((uint32_t)(EAX));
  /* 10c1f30c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1f30f push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f310 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1f313 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f317 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f318 call dword ptr [0x10c40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40308))), 0x10c1f31eu);
L_10c1f31e:;
  /* 10c1f31e mov esp, ebp */
  ESP = (EBP);
  /* 10c1f320 pop ebp */
  EBP = (pop32());
  /* 10c1f321 ret 0x10 */
  ESPCHK(0x10c1f1a0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f330 @ 0x10c1f330 (118 bytes, 42 insns) */
void f_10c1f330(void) {
  FTRACE(0x10c1f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f330 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f331 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c1f33d:;
  /* 10c1f33d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f340 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c1f342 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10c1f345 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1f349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f34c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f34f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c1f352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1f354 je 0x10c1f39f */
  if (C.zf) goto L_10c1f39f;
  /* 10c1f356 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1f35a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f35d jl 0x10c1f372 */
  if ((C.sf!=C.of)) goto L_10c1f372;
  /* 10c1f35f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1f363 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f366 jg 0x10c1f372 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1f372;
  /* 10c1f368 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c1f36b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c1f36d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10c1f370 jmp 0x10c1f38c */
  goto L_10c1f38c;
L_10c1f372:;
  /* 10c1f372 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1f376 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f379 jl 0x10c1f38c */
  if ((C.sf!=C.of)) goto L_10c1f38c;
  /* 10c1f37b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1f37f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f382 jg 0x10c1f38c */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1f38c;
  /* 10c1f384 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c1f387 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c1f389 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10c1f38c:;
  /* 10c1f38c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f38f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10c1f392 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c1f396 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c1f39a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1f39d jmp 0x10c1f33d */
  goto L_10c1f33d;
L_10c1f39f:;
  /* 10c1f39f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f3a2 mov esp, ebp */
  ESP = (EBP);
  /* 10c1f3a4 pop ebp */
  EBP = (pop32());
  /* 10c1f3a5 ret  */
  ESPCHK(0x10c1f330u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10c1f3b0 (101 bytes, 36 insns) */
void f_10c1f3b0(void) {
  FTRACE(0x10c1f3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f3b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f3b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1f3bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f3c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c1f3c2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10c1f3c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f3c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f3cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10c1f3ce:;
  /* 10c1f3ce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c1f3d2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f3d5 jl 0x10c1f3e0 */
  if ((C.sf!=C.of)) goto L_10c1f3e0;
  /* 10c1f3d7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c1f3db cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f3de jle 0x10c1f3f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10c1f3f2;
L_10c1f3e0:;
  /* 10c1f3e0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c1f3e4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f3e7 jl 0x10c1f40e */
  if ((C.sf!=C.of)) goto L_10c1f40e;
  /* 10c1f3e9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10c1f3ed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f3f0 jg 0x10c1f40e */
  if ((!C.zf&&C.sf==C.of)) goto L_10c1f40e;
L_10c1f3f2:;
  /* 10c1f3f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f3f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f3f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1f3fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f3fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1f400 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10c1f403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f406 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f409 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c1f40c jmp 0x10c1f3ce */
  goto L_10c1f3ce;
L_10c1f40e:;
  /* 10c1f40e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f411 mov esp, ebp */
  ESP = (EBP);
  /* 10c1f413 pop ebp */
  EBP = (pop32());
  /* 10c1f414 ret  */
  ESPCHK(0x10c1f3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f420 @ 0x10c1f420 (122 bytes, 39 insns) */
void f_10c1f420(void) {
  FTRACE(0x10c1f420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f420 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f421 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f423 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f427 cmp eax, dword ptr [0x10c3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f42d jae 0x10c1f451 */
  if (!C.cf) goto L_10c1f451;
  /* 10c1f42f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f432 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10c1f435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f438 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1f43b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f43e mov eax, dword ptr [ecx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1f445 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10c1f44a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1f44d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1f44f jne 0x10c1f46c */
  if (!C.zf) goto L_10c1f46c;
L_10c1f451:;
  /* 10c1f451 call 0x10c1a770 */
  push32(0x10c1f456u); f_10c1a770();
  /* 10c1f456 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10c1f45c call 0x10c1a780 */
  push32(0x10c1f461u); f_10c1a780();
  /* 10c1f461 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1f467 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f46a jmp 0x10c1f496 */
  goto L_10c1f496;
L_10c1f46c:;
  /* 10c1f46c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f46f push edx */
  push32((uint32_t)(EDX));
  /* 10c1f470 call 0x10c1bf90 */
  push32(0x10c1f475u); f_10c1bf90();
  /* 10c1f475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f47b push eax */
  push32((uint32_t)(EAX));
  /* 10c1f47c call 0x10c1f4a0 */
  push32(0x10c1f481u); f_10c1f4a0();
  /* 10c1f481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f484 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1f487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f48a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f48b call 0x10c1c020 */
  push32(0x10c1f490u); f_10c1c020();
  /* 10c1f490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1f496:;
  /* 10c1f496 mov esp, ebp */
  ESP = (EBP);
  /* 10c1f498 pop ebp */
  EBP = (pop32());
  /* 10c1f499 ret  */
  ESPCHK(0x10c1f420u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10c1f4a0 (170 bytes, 59 insns) */
void f_10c1f4a0(void) {
  FTRACE(0x10c1f4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f4a4 push esi */
  push32((uint32_t)(ESI));
  /* 10c1f4a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f4a8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f4a9 call 0x10c1be10 */
  push32(0x10c1f4aeu); f_10c1be10();
  /* 10c1f4ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f4b1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f4b4 je 0x10c1f4f3 */
  if (C.zf) goto L_10c1f4f3;
  /* 10c1f4b6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f4ba je 0x10c1f4c2 */
  if (C.zf) goto L_10c1f4c2;
  /* 10c1f4bc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f4c0 jne 0x10c1f4dc */
  if (!C.zf) goto L_10c1f4dc;
L_10c1f4c2:;
  /* 10c1f4c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1f4c4 call 0x10c1be10 */
  push32(0x10c1f4c9u); f_10c1be10();
  /* 10c1f4c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f4cc mov esi, eax */
  ESI = (EAX);
  /* 10c1f4ce push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1f4d0 call 0x10c1be10 */
  push32(0x10c1f4d5u); f_10c1be10();
  /* 10c1f4d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f4d8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f4da je 0x10c1f4f3 */
  if (C.zf) goto L_10c1f4f3;
L_10c1f4dc:;
  /* 10c1f4dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f4df push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f4e0 call 0x10c1be10 */
  push32(0x10c1f4e5u); f_10c1be10();
  /* 10c1f4e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f4e8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f4e9 call dword ptr [0x10c40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40324))), 0x10c1f4efu);
  /* 10c1f4ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1f4f1 je 0x10c1f4fc */
  if (C.zf) goto L_10c1f4fc;
L_10c1f4f3:;
  /* 10c1f4f3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1f4fa jmp 0x10c1f505 */
  goto L_10c1f505;
L_10c1f4fc:;
  /* 10c1f4fc call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c1f502u);
  /* 10c1f502 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1f505:;
  /* 10c1f505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f508 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f509 call 0x10c1bd30 */
  push32(0x10c1f50eu); f_10c1bd30();
  /* 10c1f50e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f514 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c1f517 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f51a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1f51d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1f520 mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1f527 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10c1f52c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f530 je 0x10c1f543 */
  if (C.zf) goto L_10c1f543;
  /* 10c1f532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f535 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f536 call 0x10c1a6d0 */
  push32(0x10c1f53bu); f_10c1a6d0();
  /* 10c1f53b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f53e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f541 jmp 0x10c1f545 */
  goto L_10c1f545;
L_10c1f543:;
  /* 10c1f543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1f545:;
  /* 10c1f545 pop esi */
  ESI = (pop32());
  /* 10c1f546 mov esp, ebp */
  ESP = (EBP);
  /* 10c1f548 pop ebp */
  EBP = (pop32());
  /* 10c1f549 ret  */
  ESPCHK(0x10c1f4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f550 @ 0x10c1f550 (146 bytes, 52 insns) */
void f_10c1f550(void) {
  FTRACE(0x10c1f550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f550 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f551 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f553 push ebx */
  push32((uint32_t)(EBX));
  /* 10c1f554 push esi */
  push32((uint32_t)(ESI));
  /* 10c1f555 push edi */
  push32((uint32_t)(EDI));
L_10c1f556:;
  /* 10c1f556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f55a jne 0x10c1f57a */
  if (!C.zf) goto L_10c1f57a;
  /* 10c1f55c push 0x10c39fe0 */
  push32((uint32_t)(0x10c39fe0u));
  /* 10c1f561 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1f563 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10c1f565 push 0x10c3a6a8 */
  push32((uint32_t)(0x10c3a6a8u));
  /* 10c1f56a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1f56c call 0x10c11960 */
  push32(0x10c1f571u); f_10c11960();
  /* 10c1f571 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f577 jne 0x10c1f57a */
  if (!C.zf) goto L_10c1f57a;
  /* 10c1f579 int3  */
  x86_unimpl("int3 @ 0x10c1f579");
L_10c1f57a:;
  /* 10c1f57a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1f57c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1f57e jne 0x10c1f556 */
  if (!C.zf) goto L_10c1f556;
  /* 10c1f580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f583 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1f586 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1f58c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1f58e je 0x10c1f5dd */
  if (C.zf) goto L_10c1f5dd;
  /* 10c1f590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f593 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1f596 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1f599 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1f59b je 0x10c1f5dd */
  if (C.zf) goto L_10c1f5dd;
  /* 10c1f59d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1f59f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f5a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c1f5a5 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f5a6 call 0x10c13330 */
  push32(0x10c1f5abu); f_10c13330();
  /* 10c1f5ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f5b1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1f5b4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1f5ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f5bd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10c1f5c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f5c3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10c1f5c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f5cc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c1f5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1f5d6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10c1f5dd:;
  /* 10c1f5dd pop edi */
  EDI = (pop32());
  /* 10c1f5de pop esi */
  ESI = (pop32());
  /* 10c1f5df pop ebx */
  EBX = (pop32());
  /* 10c1f5e0 pop ebp */
  EBP = (pop32());
  /* 10c1f5e1 ret  */
  ESPCHK(0x10c1f550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x10c1f5f0 (289 bytes, 97 insns) */
void f_10c1f5f0(void) {
  FTRACE(0x10c1f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f5f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f5f6 push esi */
  push32((uint32_t)(ESI));
  /* 10c1f5f7 mov eax, dword ptr [0x10c3dc98] */
  EAX = (r32((uint32_t)(0x10c3dc98)));
  /* 10c1f5fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1f5ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1f606 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f60d jmp 0x10c1f618 */
  goto L_10c1f618;
L_10c1f60f:;
  /* 10c1f60f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f612 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f615 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c1f618:;
  /* 10c1f618 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f61c jae 0x10c1f651 */
  if (!C.cf) goto L_10c1f651;
  /* 10c1f61e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f621 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f624 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c1f627 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f628 call 0x10c156d0 */
  push32(0x10c1f62du); f_10c156d0();
  /* 10c1f62d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f630 mov esi, eax */
  ESI = (EAX);
  /* 10c1f632 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f635 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f638 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10c1f63c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f63d call 0x10c156d0 */
  push32(0x10c1f642u); f_10c156d0();
  /* 10c1f642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f645 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f648 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c1f64c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1f64f jmp 0x10c1f60f */
  goto L_10c1f60f;
L_10c1f651:;
  /* 10c1f651 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f657 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f658 call 0x10c12880 */
  push32(0x10c1f65du); f_10c12880();
  /* 10c1f65d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f660 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1f663 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f667 je 0x10c1f709 */
  if (C.zf) goto L_10c1f709;
  /* 10c1f66d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f670 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c1f673 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f67a jmp 0x10c1f685 */
  goto L_10c1f685;
L_10c1f67c:;
  /* 10c1f67c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f67f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f682 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c1f685:;
  /* 10c1f685 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f689 jae 0x10c1f6fa */
  if (!C.cf) goto L_10c1f6fa;
  /* 10c1f68b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f68e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10c1f691 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f694 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f697 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c1f69a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f69d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f6a0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c1f6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f6a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f6a7 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f6a8 call 0x10c15850 */
  push32(0x10c1f6adu); f_10c15850();
  /* 10c1f6ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f6b0 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f6b1 call 0x10c156d0 */
  push32(0x10c1f6b6u); f_10c156d0();
  /* 10c1f6b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f6b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f6bc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f6be mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c1f6c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f6c4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10c1f6c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f6ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f6cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c1f6d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f6d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f6d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10c1f6da push eax */
  push32((uint32_t)(EAX));
  /* 10c1f6db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f6de push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f6df call 0x10c15850 */
  push32(0x10c1f6e4u); f_10c15850();
  /* 10c1f6e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f6e7 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f6e8 call 0x10c156d0 */
  push32(0x10c1f6edu); f_10c156d0();
  /* 10c1f6ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f6f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f6f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f6f5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c1f6f8 jmp 0x10c1f67c */
  goto L_10c1f67c;
L_10c1f6fa:;
  /* 10c1f6fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f6fd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c1f700 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f703 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f706 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c1f709:;
  /* 10c1f709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f70c pop esi */
  ESI = (pop32());
  /* 10c1f70d mov esp, ebp */
  ESP = (EBP);
  /* 10c1f70f pop ebp */
  EBP = (pop32());
  /* 10c1f710 ret  */
  ESPCHK(0x10c1f5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f720 @ 0x10c1f720 (291 bytes, 97 insns) */
void f_10c1f720(void) {
  FTRACE(0x10c1f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f720 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f721 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f726 push esi */
  push32((uint32_t)(ESI));
  /* 10c1f727 mov eax, dword ptr [0x10c3dc98] */
  EAX = (r32((uint32_t)(0x10c3dc98)));
  /* 10c1f72c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1f72f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1f736 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f73d jmp 0x10c1f748 */
  goto L_10c1f748;
L_10c1f73f:;
  /* 10c1f73f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f742 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f745 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c1f748:;
  /* 10c1f748 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f74c jae 0x10c1f782 */
  if (!C.cf) goto L_10c1f782;
  /* 10c1f74e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f751 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f754 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10c1f758 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f759 call 0x10c156d0 */
  push32(0x10c1f75eu); f_10c156d0();
  /* 10c1f75e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f761 mov esi, eax */
  ESI = (EAX);
  /* 10c1f763 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f766 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f769 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10c1f76d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f76e call 0x10c156d0 */
  push32(0x10c1f773u); f_10c156d0();
  /* 10c1f773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f776 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f779 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c1f77d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1f780 jmp 0x10c1f73f */
  goto L_10c1f73f;
L_10c1f782:;
  /* 10c1f782 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f785 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f788 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f789 call 0x10c12880 */
  push32(0x10c1f78eu); f_10c12880();
  /* 10c1f78e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f791 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1f794 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f798 je 0x10c1f83b */
  if (C.zf) goto L_10c1f83b;
  /* 10c1f79e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f7a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c1f7a4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f7ab jmp 0x10c1f7b6 */
  goto L_10c1f7b6;
L_10c1f7ad:;
  /* 10c1f7ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f7b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f7b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c1f7b6:;
  /* 10c1f7b6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f7ba jae 0x10c1f82c */
  if (!C.cf) goto L_10c1f82c;
  /* 10c1f7bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f7bf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10c1f7c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f7c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f7c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c1f7cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f7ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f7d1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10c1f7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f7d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f7d9 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f7da call 0x10c15850 */
  push32(0x10c1f7dfu); f_10c15850();
  /* 10c1f7df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f7e2 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f7e3 call 0x10c156d0 */
  push32(0x10c1f7e8u); f_10c156d0();
  /* 10c1f7e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f7eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f7ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f7f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c1f7f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f7f6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10c1f7f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f7fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f7ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c1f802 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f805 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f808 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c1f80c push eax */
  push32((uint32_t)(EAX));
  /* 10c1f80d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f810 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f811 call 0x10c15850 */
  push32(0x10c1f816u); f_10c15850();
  /* 10c1f816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f819 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f81a call 0x10c156d0 */
  push32(0x10c1f81fu); f_10c156d0();
  /* 10c1f81f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f822 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f825 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f827 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c1f82a jmp 0x10c1f7ad */
  goto L_10c1f7ad;
L_10c1f82c:;
  /* 10c1f82c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f82f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c1f832 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f838 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c1f83b:;
  /* 10c1f83b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f83e pop esi */
  ESI = (pop32());
  /* 10c1f83f mov esp, ebp */
  ESP = (EBP);
  /* 10c1f841 pop ebp */
  EBP = (pop32());
  /* 10c1f842 ret  */
  ESPCHK(0x10c1f720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f850 @ 0x10c1f850 (878 bytes, 273 insns) */
void f_10c1f850(void) {
  FTRACE(0x10c1f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1f850 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1f851 mov ebp, esp */
  EBP = (ESP);
  /* 10c1f853 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1f856 push esi */
  push32((uint32_t)(ESI));
  /* 10c1f857 mov eax, dword ptr [0x10c3dc98] */
  EAX = (r32((uint32_t)(0x10c3dc98)));
  /* 10c1f85c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1f85f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1f866 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f86d jmp 0x10c1f878 */
  goto L_10c1f878;
L_10c1f86f:;
  /* 10c1f86f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f872 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f875 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c1f878:;
  /* 10c1f878 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f87c jae 0x10c1f8b1 */
  if (!C.cf) goto L_10c1f8b1;
  /* 10c1f87e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f884 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10c1f887 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f888 call 0x10c156d0 */
  push32(0x10c1f88du); f_10c156d0();
  /* 10c1f88d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f890 mov esi, eax */
  ESI = (EAX);
  /* 10c1f892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f895 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f898 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10c1f89c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f89d call 0x10c156d0 */
  push32(0x10c1f8a2u); f_10c156d0();
  /* 10c1f8a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f8a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f8a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c1f8ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1f8af jmp 0x10c1f86f */
  goto L_10c1f86f;
L_10c1f8b1:;
  /* 10c1f8b1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f8b8 jmp 0x10c1f8c3 */
  goto L_10c1f8c3;
L_10c1f8ba:;
  /* 10c1f8ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f8bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f8c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c1f8c3:;
  /* 10c1f8c3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f8c7 jae 0x10c1f8fd */
  if (!C.cf) goto L_10c1f8fd;
  /* 10c1f8c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f8cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f8cf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c1f8d3 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f8d4 call 0x10c156d0 */
  push32(0x10c1f8d9u); f_10c156d0();
  /* 10c1f8d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f8dc mov esi, eax */
  ESI = (EAX);
  /* 10c1f8de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f8e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f8e4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c1f8e8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f8e9 call 0x10c156d0 */
  push32(0x10c1f8eeu); f_10c156d0();
  /* 10c1f8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f8f1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f8f4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c1f8f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c1f8fb jmp 0x10c1f8ba */
  goto L_10c1f8ba;
L_10c1f8fd:;
  /* 10c1f8fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f900 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10c1f906 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f907 call 0x10c156d0 */
  push32(0x10c1f90cu); f_10c156d0();
  /* 10c1f90c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f90f mov esi, eax */
  ESI = (EAX);
  /* 10c1f911 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f914 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10c1f91a push edx */
  push32((uint32_t)(EDX));
  /* 10c1f91b call 0x10c156d0 */
  push32(0x10c1f920u); f_10c156d0();
  /* 10c1f920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f923 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f926 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10c1f92a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1f92d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f930 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10c1f936 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f937 call 0x10c156d0 */
  push32(0x10c1f93cu); f_10c156d0();
  /* 10c1f93c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f93f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f942 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c1f946 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1f949 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f94c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10c1f952 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f953 call 0x10c156d0 */
  push32(0x10c1f958u); f_10c156d0();
  /* 10c1f958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f95b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f95e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c1f962 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1f965 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f968 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10c1f96e push edx */
  push32((uint32_t)(EDX));
  /* 10c1f96f call 0x10c156d0 */
  push32(0x10c1f974u); f_10c156d0();
  /* 10c1f974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f977 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f97a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c1f97e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c1f981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1f984 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f989 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f98a call 0x10c12880 */
  push32(0x10c1f98fu); f_10c12880();
  /* 10c1f98f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f992 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1f995 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f999 je 0x10c1fbb6 */
  if (C.zf) goto L_10c1fbb6;
  /* 10c1f99f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f9a2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c1f9a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f9a8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f9ae mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c1f9b1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10c1f9b6 mov eax, dword ptr [0x10c3dc98] */
  EAX = (r32((uint32_t)(0x10c3dc98)));
  /* 10c1f9bb push eax */
  push32((uint32_t)(EAX));
  /* 10c1f9bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1f9bf push ecx */
  push32((uint32_t)(ECX));
  /* 10c1f9c0 call 0x10c19180 */
  push32(0x10c1f9c5u); f_10c19180();
  /* 10c1f9c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f9c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1f9cf jmp 0x10c1f9da */
  goto L_10c1f9da;
L_10c1f9d1:;
  /* 10c1f9d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f9d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1f9d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c1f9da:;
  /* 10c1f9da cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1f9de jae 0x10c1fa4e */
  if (!C.cf) goto L_10c1fa4e;
  /* 10c1f9e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f9e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1f9e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f9e9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10c1f9ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1f9ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1f9f2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c1f9f5 push edx */
  push32((uint32_t)(EDX));
  /* 10c1f9f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1f9f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c1f9fa call 0x10c15850 */
  push32(0x10c1f9ffu); f_10c15850();
  /* 10c1f9ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fa02 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fa03 call 0x10c156d0 */
  push32(0x10c1fa08u); f_10c156d0();
  /* 10c1fa08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fa0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fa0e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c1fa12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c1fa15 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1fa18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1fa1b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fa1e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10c1fa22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1fa25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fa28 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10c1fa2c push edx */
  push32((uint32_t)(EDX));
  /* 10c1fa2d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fa30 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fa31 call 0x10c15850 */
  push32(0x10c1fa36u); f_10c15850();
  /* 10c1fa36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fa39 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fa3a call 0x10c156d0 */
  push32(0x10c1fa3fu); f_10c156d0();
  /* 10c1fa3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fa42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fa45 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c1fa49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c1fa4c jmp 0x10c1f9d1 */
  goto L_10c1f9d1;
L_10c1fa4e:;
  /* 10c1fa4e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c1fa55 jmp 0x10c1fa60 */
  goto L_10c1fa60;
L_10c1fa57:;
  /* 10c1fa57 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1fa5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fa5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c1fa60:;
  /* 10c1fa60 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fa64 jae 0x10c1fad6 */
  if (!C.cf) goto L_10c1fad6;
  /* 10c1fa66 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1fa69 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1fa6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fa6f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10c1fa73 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1fa76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fa79 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c1fa7d push eax */
  push32((uint32_t)(EAX));
  /* 10c1fa7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fa81 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fa82 call 0x10c15850 */
  push32(0x10c1fa87u); f_10c15850();
  /* 10c1fa87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fa8a push eax */
  push32((uint32_t)(EAX));
  /* 10c1fa8b call 0x10c156d0 */
  push32(0x10c1fa90u); f_10c156d0();
  /* 10c1fa90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fa93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fa96 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c1fa9a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c1fa9d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1faa0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1faa3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1faa6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10c1faaa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1faad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fab0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c1fab4 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fab5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fab8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fab9 call 0x10c15850 */
  push32(0x10c1fabeu); f_10c15850();
  /* 10c1fabe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fac1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fac2 call 0x10c156d0 */
  push32(0x10c1fac7u); f_10c156d0();
  /* 10c1fac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1faca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1facd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c1fad1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c1fad4 jmp 0x10c1fa57 */
  goto L_10c1fa57;
L_10c1fad6:;
  /* 10c1fad6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1fad9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fadc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10c1fae2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fae5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10c1faeb push ecx */
  push32((uint32_t)(ECX));
  /* 10c1faec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1faef push edx */
  push32((uint32_t)(EDX));
  /* 10c1faf0 call 0x10c15850 */
  push32(0x10c1faf5u); f_10c15850();
  /* 10c1faf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1faf8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1faf9 call 0x10c156d0 */
  push32(0x10c1fafeu); f_10c156d0();
  /* 10c1fafe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fb01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb04 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c1fb08 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c1fb0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1fb0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb11 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10c1fb17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fb1a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10c1fb20 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fb21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb24 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fb25 call 0x10c15850 */
  push32(0x10c1fb2au); f_10c15850();
  /* 10c1fb2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fb2d push eax */
  push32((uint32_t)(EAX));
  /* 10c1fb2e call 0x10c156d0 */
  push32(0x10c1fb33u); f_10c156d0();
  /* 10c1fb33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fb36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb39 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c1fb3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c1fb40 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1fb43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb46 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10c1fb4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fb4f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10c1fb55 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fb56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb59 push edx */
  push32((uint32_t)(EDX));
  /* 10c1fb5a call 0x10c15850 */
  push32(0x10c1fb5fu); f_10c15850();
  /* 10c1fb5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fb62 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fb63 call 0x10c156d0 */
  push32(0x10c1fb68u); f_10c156d0();
  /* 10c1fb68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fb6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb6e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c1fb72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c1fb75 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1fb78 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb7b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10c1fb81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fb84 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10c1fb8a push eax */
  push32((uint32_t)(EAX));
  /* 10c1fb8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fb8e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fb8f call 0x10c15850 */
  push32(0x10c1fb94u); f_10c15850();
  /* 10c1fb94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fb97 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fb98 call 0x10c156d0 */
  push32(0x10c1fb9du); f_10c156d0();
  /* 10c1fb9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fba0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fba3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10c1fba7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c1fbaa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c1fbad mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1fbb0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10c1fbb6:;
  /* 10c1fbb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1fbb9 pop esi */
  ESI = (pop32());
  /* 10c1fbba mov esp, ebp */
  ESP = (EBP);
  /* 10c1fbbc pop ebp */
  EBP = (pop32());
  /* 10c1fbbd ret  */
  ESPCHK(0x10c1f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbc0 @ 0x10c1fbc0 (31 bytes, 15 insns) */
void f_10c1fbc0(void) {
  FTRACE(0x10c1fbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1fbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1fbc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1fbc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1fbc5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fbc8 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fbc9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fbcc push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fbcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fbd0 push edx */
  push32((uint32_t)(EDX));
  /* 10c1fbd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1fbd4 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fbd5 call 0x10c1fbe0 */
  push32(0x10c1fbdau); f_10c1fbe0();
  /* 10c1fbda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fbdd pop ebp */
  EBP = (pop32());
  /* 10c1fbde ret  */
  ESPCHK(0x10c1fbc0u, _esp0);
  ESP += 4; return;
}

