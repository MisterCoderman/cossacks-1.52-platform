#include "recomp.h"

/* FUN_10006ce0 @ 0x10e16ce0 (116 bytes, 34 insns) */
void f_10e16ce0(void) {
  FTRACE(0x10e16ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10e16ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16ce4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10e16ceb push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16ced call 0x10e16500 */
  push32(0x10e16cf2u); f_10e16500();
  /* 10e16cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16cf5 call 0x10e183f0 */
  push32(0x10e16cfau); f_10e183f0();
  /* 10e16cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e16cfc jge 0x10e16d05 */
  if ((C.sf==C.of)) goto L_10e16d05;
  /* 10e16cfe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10e16d05:;
  /* 10e16d05 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16d07 call 0x10e165a0 */
  push32(0x10e16d0cu); f_10e165a0();
  /* 10e16d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e16d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e16d13 mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e16d18 push eax */
  push32((uint32_t)(EAX));
  /* 10e16d19 call dword ptr [0x10e402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402bc))), 0x10e16d1fu);
  /* 10e16d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e16d21 jne 0x10e16d4d */
  if (!C.zf) goto L_10e16d4d;
  /* 10e16d23 call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e16d29u);
  /* 10e16d29 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16d2c jne 0x10e16d46 */
  if (!C.zf) goto L_10e16d46;
  /* 10e16d2e call 0x10e1a9e0 */
  push32(0x10e16d33u); f_10e1a9e0();
  /* 10e16d33 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10e16d39 call 0x10e1a9d0 */
  push32(0x10e16d3eu); f_10e1a9d0();
  /* 10e16d3e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10e16d44 jmp 0x10e16d4d */
  goto L_10e16d4d;
L_10e16d46:;
  /* 10e16d46 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10e16d4d:;
  /* 10e16d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16d50 mov esp, ebp */
  ESP = (EBP);
  /* 10e16d52 pop ebp */
  EBP = (pop32());
  /* 10e16d53 ret  */
  ESPCHK(0x10e16ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d60 @ 0x10e16d60 (10 bytes, 5 insns) */
void f_10e16d60(void) {
  FTRACE(0x10e16d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16d61 mov ebp, esp */
  EBP = (ESP);
  /* 10e16d63 call 0x10e16ce0 */
  push32(0x10e16d68u); f_10e16ce0();
  /* 10e16d68 pop ebp */
  EBP = (pop32());
  /* 10e16d69 ret  */
  ESPCHK(0x10e16d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x10e16d70 (10 bytes, 5 insns) */
void f_10e16d70(void) {
  FTRACE(0x10e16d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16d71 mov ebp, esp */
  EBP = (ESP);
  /* 10e16d73 mov eax, dword ptr [0x10e3cc94] */
  EAX = (r32((uint32_t)(0x10e3cc94)));
  /* 10e16d78 pop ebp */
  EBP = (pop32());
  /* 10e16d79 ret  */
  ESPCHK(0x10e16d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d80 @ 0x10e16d80 (31 bytes, 11 insns) */
void f_10e16d80(void) {
  FTRACE(0x10e16d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16d81 mov ebp, esp */
  EBP = (ESP);
  /* 10e16d83 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16d8a jbe 0x10e16d90 */
  if ((C.cf||C.zf)) goto L_10e16d90;
  /* 10e16d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e16d8e jmp 0x10e16d9d */
  goto L_10e16d9d;
L_10e16d90:;
  /* 10e16d90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16d93 mov dword ptr [0x10e3cc94], eax */
  w32((uint32_t)(0x10e3cc94), (EAX));
  /* 10e16d98 mov eax, 1 */
  EAX = (0x1u);
L_10e16d9d:;
  /* 10e16d9d pop ebp */
  EBP = (pop32());
  /* 10e16d9e ret  */
  ESPCHK(0x10e16d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x10e16da0 (89 bytes, 20 insns) */
void f_10e16da0(void) {
  FTRACE(0x10e16da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16da1 mov ebp, esp */
  EBP = (ESP);
  /* 10e16da3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10e16da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e16daa mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e16daf push eax */
  push32((uint32_t)(EAX));
  /* 10e16db0 call dword ptr [0x10e402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402fc))), 0x10e16db6u);
  /* 10e16db6 mov dword ptr [0x10e3fda8], eax */
  w32((uint32_t)(0x10e3fda8), (EAX));
  /* 10e16dbb cmp dword ptr [0x10e3fda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16dc2 jne 0x10e16dc8 */
  if (!C.zf) goto L_10e16dc8;
  /* 10e16dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e16dc6 jmp 0x10e16df7 */
  goto L_10e16df7;
L_10e16dc8:;
  /* 10e16dc8 mov ecx, dword ptr [0x10e3fda8] */
  ECX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e16dce mov dword ptr [0x10e3fd9c], ecx */
  w32((uint32_t)(0x10e3fd9c), (ECX));
  /* 10e16dd4 mov dword ptr [0x10e3fda0], 0 */
  w32((uint32_t)(0x10e3fda0), (0x0u));
  /* 10e16dde mov dword ptr [0x10e3fda4], 0 */
  w32((uint32_t)(0x10e3fda4), (0x0u));
  /* 10e16de8 mov dword ptr [0x10e3fd88], 0x10 */
  w32((uint32_t)(0x10e3fd88), (0x10u));
  /* 10e16df2 mov eax, 1 */
  EAX = (0x1u);
L_10e16df7:;
  /* 10e16df7 pop ebp */
  EBP = (pop32());
  /* 10e16df8 ret  */
  ESPCHK(0x10e16da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e00 @ 0x10e16e00 (85 bytes, 29 insns) */
void f_10e16e00(void) {
  FTRACE(0x10e16e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16e01 mov ebp, esp */
  EBP = (ESP);
  /* 10e16e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16e06 mov eax, dword ptr [0x10e3fda4] */
  EAX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e16e0b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e16e0e mov ecx, dword ptr [0x10e3fda8] */
  ECX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e16e14 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16e16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e16e19 mov edx, dword ptr [0x10e3fda8] */
  EDX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e16e1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e16e22:;
  /* 10e16e22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16e25 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16e28 jae 0x10e16e4f */
  if (!C.cf) goto L_10e16e4f;
  /* 10e16e2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16e2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16e30 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16e33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e16e36 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16e3d jae 0x10e16e44 */
  if (!C.cf) goto L_10e16e44;
  /* 10e16e3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16e42 jmp 0x10e16e51 */
  goto L_10e16e51;
L_10e16e44:;
  /* 10e16e44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16e47 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16e4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e16e4d jmp 0x10e16e22 */
  goto L_10e16e22;
L_10e16e4f:;
  /* 10e16e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e16e51:;
  /* 10e16e51 mov esp, ebp */
  ESP = (EBP);
  /* 10e16e53 pop ebp */
  EBP = (pop32());
  /* 10e16e54 ret  */
  ESPCHK(0x10e16e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x10e16e60 (95 bytes, 33 insns) */
void f_10e16e60(void) {
  FTRACE(0x10e16e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16e61 mov ebp, esp */
  EBP = (ESP);
  /* 10e16e63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16e69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16e6c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16e6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e16e72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16e75 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e16e78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e16e7b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e16e80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16e83 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e16e85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16e88 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e16e8b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e16e8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e16e8f jne 0x10e16eb1 */
  if (!C.zf) goto L_10e16eb1;
  /* 10e16e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16e94 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10e16e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e16e99 jne 0x10e16eb1 */
  if (!C.zf) goto L_10e16eb1;
  /* 10e16e9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16e9e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e16ea4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e16ea6 je 0x10e16eb1 */
  if (C.zf) goto L_10e16eb1;
  /* 10e16ea8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10e16eaf jmp 0x10e16eb8 */
  goto L_10e16eb8;
L_10e16eb1:;
  /* 10e16eb1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e16eb8:;
  /* 10e16eb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e16ebb mov esp, ebp */
  ESP = (EBP);
  /* 10e16ebd pop ebp */
  EBP = (pop32());
  /* 10e16ebe ret  */
  ESPCHK(0x10e16e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x10e16ec0 (1485 bytes, 453 insns) */
void f_10e16ec0(void) {
  FTRACE(0x10e16ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10e16ec3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16ec9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e16ecc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10e16ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16ed2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16ed5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16ed8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e16edb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16ede shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10e16ee1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e16ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16ee7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e16eed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16ef0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10e16ef7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e16efa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16efd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16f00 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e16f03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e16f06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e16f08 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16f0b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e16f0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e16f11 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16f14 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10e16f17 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e16f1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e16f1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e16f1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e16f22 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10e16f25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e16f28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e16f2b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e16f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e16f30 jne 0x10e17058 */
  if (!C.zf) goto L_10e17058;
  /* 10e16f36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e16f39 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e16f3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16f3f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e16f42 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16f46 jbe 0x10e16f4f */
  if ((C.cf||C.zf)) goto L_10e16f4f;
  /* 10e16f48 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e16f4f:;
  /* 10e16f4f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e16f52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e16f55 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e16f58 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16f5b jne 0x10e17031 */
  if (!C.zf) goto L_10e17031;
  /* 10e16f61 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16f65 jae 0x10e16fc6 */
  if (!C.cf) goto L_10e16fc6;
  /* 10e16f67 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e16f6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e16f6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e16f71 not eax */
  EAX = (~(EAX));
  /* 10e16f73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16f76 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16f79 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e16f7d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e16f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16f82 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16f85 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e16f89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16f8c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16f8f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e16f92 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e16f95 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16f98 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16f9b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e16f9e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16fa1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16fa4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e16fa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e16faa jne 0x10e16fc4 */
  if (!C.zf) goto L_10e16fc4;
  /* 10e16fac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e16fb1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e16fb4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e16fb6 not eax */
  EAX = (~(EAX));
  /* 10e16fb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16fbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e16fbd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e16fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16fc2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e16fc4:;
  /* 10e16fc4 jmp 0x10e17031 */
  goto L_10e17031;
L_10e16fc6:;
  /* 10e16fc6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e16fc9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16fcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e16fd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e16fd3 not edx */
  EDX = (~(EDX));
  /* 10e16fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16fd8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16fdb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e16fe2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e16fe4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16fe7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16fea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10e16ff1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e16ff4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16ff7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e16ffa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e16ffd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17000 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17003 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e17006 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17009 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1700c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e17010 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e17012 jne 0x10e17031 */
  if (!C.zf) goto L_10e17031;
  /* 10e17014 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e17017 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1701a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e1701f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17021 not edx */
  EDX = (~(EDX));
  /* 10e17023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17026 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17029 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1702b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1702e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e17031:;
  /* 10e17031 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17034 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e17037 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e1703a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e1703d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e17040 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17043 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17046 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17049 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1704c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e1704f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17052 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17055 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10e17058:;
  /* 10e17058 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1705b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e1705e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17061 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e17064 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17068 jbe 0x10e17071 */
  if ((C.cf||C.zf)) goto L_10e17071;
  /* 10e1706a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10e17071:;
  /* 10e17071 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e17074 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e17077 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e17079 jne 0x10e171d5 */
  if (!C.zf) goto L_10e171d5;
  /* 10e1707f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17082 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17085 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10e17088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1708b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e1708e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17091 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e17094 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17098 jbe 0x10e170a1 */
  if ((C.cf||C.zf)) goto L_10e170a1;
  /* 10e1709a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10e170a1:;
  /* 10e170a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e170a4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e170a7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e170aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e170ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e170b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e170b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e170b6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e170ba jbe 0x10e170c3 */
  if ((C.cf||C.zf)) goto L_10e170c3;
  /* 10e170bc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10e170c3:;
  /* 10e170c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e170c6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e170c9 je 0x10e171cf */
  if (C.zf) goto L_10e171cf;
  /* 10e170cf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e170d2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e170d5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e170d8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e170db jne 0x10e171b1 */
  if (!C.zf) goto L_10e171b1;
  /* 10e170e1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e170e5 jae 0x10e17146 */
  if (!C.cf) goto L_10e17146;
  /* 10e170e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e170ec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e170ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e170f1 not edx */
  EDX = (~(EDX));
  /* 10e170f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e170f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e170f9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e170fd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e170ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17102 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17105 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e17109 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e1710c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1710f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e17112 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e17115 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17118 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1711b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e1711e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17121 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17124 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e17128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1712a jne 0x10e17144 */
  if (!C.zf) goto L_10e17144;
  /* 10e1712c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17131 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17134 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17136 not edx */
  EDX = (~(EDX));
  /* 10e17138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1713b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1713d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1713f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17142 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e17144:;
  /* 10e17144 jmp 0x10e171b1 */
  goto L_10e171b1;
L_10e17146:;
  /* 10e17146 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17149 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1714c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17151 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e17153 not eax */
  EAX = (~(EAX));
  /* 10e17155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17158 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e1715b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e17162 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17167 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e1716a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e17171 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17174 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17177 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e1717a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e1717d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17180 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17183 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e17186 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17189 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1718c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e17190 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e17192 jne 0x10e171b1 */
  if (!C.zf) goto L_10e171b1;
  /* 10e17194 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17197 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1719a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e1719f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e171a1 not eax */
  EAX = (~(EAX));
  /* 10e171a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e171a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e171a9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e171ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e171ae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e171b1:;
  /* 10e171b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e171b4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e171b7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e171ba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e171bd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e171c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e171c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e171c6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e171c9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e171cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10e171cf:;
  /* 10e171cf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e171d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10e171d5:;
  /* 10e171d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e171d8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e171db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e171dd jne 0x10e171eb */
  if (!C.zf) goto L_10e171eb;
  /* 10e171df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e171e2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e171e5 je 0x10e172fb */
  if (C.zf) goto L_10e172fb;
L_10e171eb:;
  /* 10e171eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e171ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e171f1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10e171f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e171f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e171fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e171fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17200 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e17203 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17206 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17209 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e1720c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1720f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17212 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e17215 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17218 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1721b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1721e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e17221 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17224 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17227 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1722a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1722d jne 0x10e172fb */
  if (!C.zf) goto L_10e172fb;
  /* 10e17233 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17237 jae 0x10e17294 */
  if (!C.cf) goto L_10e17294;
  /* 10e17239 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e1723c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1723f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e17243 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17246 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17249 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e1724c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e1724f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17252 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17255 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e17258 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1725a jne 0x10e17272 */
  if (!C.zf) goto L_10e17272;
  /* 10e1725c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17261 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17264 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1726b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1726d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17270 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e17272:;
  /* 10e17272 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17277 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1727a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e1727c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1727f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17282 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e17286 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1728b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e1728e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e17292 jmp 0x10e172fb */
  goto L_10e172fb;
L_10e17294:;
  /* 10e17294 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e17297 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1729a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e1729e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e172a1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e172a4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e172a7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e172aa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e172ad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e172b0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e172b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e172b5 jne 0x10e172d2 */
  if (!C.zf) goto L_10e172d2;
  /* 10e172b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e172ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e172bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e172c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e172c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e172c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e172ca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e172cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e172cf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e172d2:;
  /* 10e172d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e172d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e172d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e172dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e172df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e172e2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e172e5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e172ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e172ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e172f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e172f4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10e172fb:;
  /* 10e172fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e172fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17301 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e17303 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17306 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17309 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1730c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10e1730f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e17312 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e17314 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17317 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1731a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e1731c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1731f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17322 jne 0x10e17489 */
  if (!C.zf) goto L_10e17489;
  /* 10e17328 cmp dword ptr [0x10e3fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1732f je 0x10e17478 */
  if (C.zf) goto L_10e17478;
  /* 10e17335 mov eax, dword ptr [0x10e3fd98] */
  EAX = (r32((uint32_t)(0x10e3fd98)));
  /* 10e1733a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10e1733d mov ecx, dword ptr [0x10e3fda0] */
  ECX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e17343 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e17346 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17348 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e1734b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e17350 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e17355 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17358 push eax */
  push32((uint32_t)(EAX));
  /* 10e17359 call dword ptr [0x10e402e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e0))), 0x10e1735fu);
  /* 10e1735f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17364 mov ecx, dword ptr [0x10e3fd98] */
  ECX = (r32((uint32_t)(0x10e3fd98)));
  /* 10e1736a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e1736c mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e17371 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e17374 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17376 mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e1737c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e1737f mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e17384 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e17387 mov edx, dword ptr [0x10e3fd98] */
  EDX = (r32((uint32_t)(0x10e3fd98)));
  /* 10e1738d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10e17398 mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e1739d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e173a0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10e173a3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e173a6 mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e173ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e173ae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10e173b1 mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e173b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e173ba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10e173be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e173c0 jne 0x10e173d6 */
  if (!C.zf) goto L_10e173d6;
  /* 10e173c2 mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e173c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e173cb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10e173cd mov ecx, dword ptr [0x10e3fda0] */
  ECX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e173d3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10e173d6:;
  /* 10e173d6 mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e173dc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e173e0 jne 0x10e17478 */
  if (!C.zf) goto L_10e17478;
  /* 10e173e6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e173eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e173ed mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e173f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e173f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e173f6 call dword ptr [0x10e402e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e0))), 0x10e173fcu);
  /* 10e173fc mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e17402 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e17405 push eax */
  push32((uint32_t)(EAX));
  /* 10e17406 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e17408 mov ecx, dword ptr [0x10e3fdac] */
  ECX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e1740e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1740f call dword ptr [0x10e402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402dc))), 0x10e17415u);
  /* 10e17415 mov edx, dword ptr [0x10e3fda4] */
  EDX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e1741b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1741e mov eax, dword ptr [0x10e3fda8] */
  EAX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e17423 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17425 mov ecx, dword ptr [0x10e3fda0] */
  ECX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e1742b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1742e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17430 push eax */
  push32((uint32_t)(EAX));
  /* 10e17431 mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e17437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1743a push edx */
  push32((uint32_t)(EDX));
  /* 10e1743b mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e17440 push eax */
  push32((uint32_t)(EAX));
  /* 10e17441 call 0x10e1a9f0 */
  push32(0x10e17446u); f_10e1a9f0();
  /* 10e17446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17449 mov ecx, dword ptr [0x10e3fda4] */
  ECX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e1744f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17452 mov dword ptr [0x10e3fda4], ecx */
  w32((uint32_t)(0x10e3fda4), (ECX));
  /* 10e17458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1745b cmp edx, dword ptr [0x10e3fda0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17461 jbe 0x10e1746c */
  if ((C.cf||C.zf)) goto L_10e1746c;
  /* 10e17463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17466 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17469 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e1746c:;
  /* 10e1746c mov ecx, dword ptr [0x10e3fda8] */
  ECX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e17472 mov dword ptr [0x10e3fd9c], ecx */
  w32((uint32_t)(0x10e3fd9c), (ECX));
L_10e17478:;
  /* 10e17478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1747b mov dword ptr [0x10e3fda0], edx */
  w32((uint32_t)(0x10e3fda0), (EDX));
  /* 10e17481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17484 mov dword ptr [0x10e3fd98], eax */
  w32((uint32_t)(0x10e3fd98), (EAX));
L_10e17489:;
  /* 10e17489 mov esp, ebp */
  ESP = (EBP);
  /* 10e1748b pop ebp */
  EBP = (pop32());
  /* 10e1748c ret  */
  ESPCHK(0x10e16ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x10e17490 (1334 bytes, 427 insns) */
void f_10e17490(void) {
  FTRACE(0x10e17490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e17490 push ebp */
  push32((uint32_t)(EBP));
  /* 10e17491 mov ebp, esp */
  EBP = (ESP);
  /* 10e17493 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17496 push esi */
  push32((uint32_t)(ESI));
  /* 10e17497 mov eax, dword ptr [0x10e3fda4] */
  EAX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e1749c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1749f mov ecx, dword ptr [0x10e3fda8] */
  ECX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e174a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e174a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e174aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e174ad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e174b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e174b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e174b6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e174b9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e174bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e174bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e174c2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e174c6 jge 0x10e174dc */
  if ((C.sf==C.of)) goto L_10e174dc;
  /* 10e174c8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e174cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e174ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e174d0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e174d3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10e174da jmp 0x10e174f1 */
  goto L_10e174f1;
L_10e174dc:;
  /* 10e174dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e174e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e174e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e174e9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e174ec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e174ee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10e174f1:;
  /* 10e174f1 mov ecx, dword ptr [0x10e3fd9c] */
  ECX = (r32((uint32_t)(0x10e3fd9c)));
  /* 10e174f7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10e174fa:;
  /* 10e174fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e174fd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17500 jae 0x10e17526 */
  if (!C.cf) goto L_10e17526;
  /* 10e17502 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17505 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e17508 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10e1750a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1750d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e17510 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10e17513 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e17517 je 0x10e1751b */
  if (C.zf) goto L_10e1751b;
  /* 10e17519 jmp 0x10e17526 */
  goto L_10e17526;
L_10e1751b:;
  /* 10e1751b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1751e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17521 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e17524 jmp 0x10e174fa */
  goto L_10e174fa;
L_10e17526:;
  /* 10e17526 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17529 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1752c jne 0x10e1760d */
  if (!C.zf) goto L_10e1760d;
  /* 10e17532 mov eax, dword ptr [0x10e3fda8] */
  EAX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e17537 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e1753a:;
  /* 10e1753a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1753d cmp ecx, dword ptr [0x10e3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17543 jae 0x10e17569 */
  if (!C.cf) goto L_10e17569;
  /* 10e17545 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17548 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1754b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10e1754d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17550 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e17553 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e17556 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1755a je 0x10e1755e */
  if (C.zf) goto L_10e1755e;
  /* 10e1755c jmp 0x10e17569 */
  goto L_10e17569;
L_10e1755e:;
  /* 10e1755e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17561 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17564 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e17567 jmp 0x10e1753a */
  goto L_10e1753a;
L_10e17569:;
  /* 10e17569 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1756c cmp ecx, dword ptr [0x10e3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17572 jne 0x10e1760d */
  if (!C.zf) goto L_10e1760d;
L_10e17578:;
  /* 10e17578 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1757b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1757e jae 0x10e17596 */
  if (!C.cf) goto L_10e17596;
  /* 10e17580 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17583 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17587 je 0x10e1758b */
  if (C.zf) goto L_10e1758b;
  /* 10e17589 jmp 0x10e17596 */
  goto L_10e17596;
L_10e1758b:;
  /* 10e1758b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1758e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17591 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e17594 jmp 0x10e17578 */
  goto L_10e17578;
L_10e17596:;
  /* 10e17596 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17599 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1759c jne 0x10e175e7 */
  if (!C.zf) goto L_10e175e7;
  /* 10e1759e mov eax, dword ptr [0x10e3fda8] */
  EAX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e175a3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e175a6:;
  /* 10e175a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e175a9 cmp ecx, dword ptr [0x10e3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e175af jae 0x10e175c7 */
  if (!C.cf) goto L_10e175c7;
  /* 10e175b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e175b4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e175b8 je 0x10e175bc */
  if (C.zf) goto L_10e175bc;
  /* 10e175ba jmp 0x10e175c7 */
  goto L_10e175c7;
L_10e175bc:;
  /* 10e175bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e175bf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e175c2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e175c5 jmp 0x10e175a6 */
  goto L_10e175a6;
L_10e175c7:;
  /* 10e175c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e175ca cmp ecx, dword ptr [0x10e3fd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e175d0 jne 0x10e175e7 */
  if (!C.zf) goto L_10e175e7;
  /* 10e175d2 call 0x10e179d0 */
  push32(0x10e175d7u); f_10e179d0();
  /* 10e175d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e175da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e175de jne 0x10e175e7 */
  if (!C.zf) goto L_10e175e7;
  /* 10e175e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e175e2 jmp 0x10e179c1 */
  goto L_10e179c1;
L_10e175e7:;
  /* 10e175e7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e175ea push edx */
  push32((uint32_t)(EDX));
  /* 10e175eb call 0x10e17ae0 */
  push32(0x10e175f0u); f_10e17ae0();
  /* 10e175f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e175f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e175f6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e175f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e175fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e175fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e17601 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17604 jne 0x10e1760d */
  if (!C.zf) goto L_10e1760d;
  /* 10e17606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17608 jmp 0x10e179c1 */
  goto L_10e179c1;
L_10e1760d:;
  /* 10e1760d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17610 mov dword ptr [0x10e3fd9c], edx */
  w32((uint32_t)(0x10e3fd9c), (EDX));
  /* 10e17616 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17619 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1761c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10e1761f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17622 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e17624 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e17627 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1762b je 0x10e17650 */
  if (C.zf) goto L_10e17650;
  /* 10e1762d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17630 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17633 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e17636 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10e1763a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1763d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17640 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10e17643 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10e1764a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10e1764c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1764e jne 0x10e17685 */
  if (!C.zf) goto L_10e17685;
L_10e17650:;
  /* 10e17650 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10e17657:;
  /* 10e17657 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1765a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e1765d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e17660 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10e17664 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17667 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e1766a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10e1766d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10e17674 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10e17676 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e17678 jne 0x10e17685 */
  if (!C.zf) goto L_10e17685;
  /* 10e1767a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1767d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17680 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e17683 jmp 0x10e17657 */
  goto L_10e17657;
L_10e17685:;
  /* 10e17685 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17688 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1768e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17691 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e17698 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1769b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e176a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e176a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e176a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e176ab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10e176af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e176b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e176b6 jne 0x10e176d2 */
  if (!C.zf) goto L_10e176d2;
  /* 10e176b8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10e176bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e176c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e176c5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e176c8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e176cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10e176d2:;
  /* 10e176d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e176d6 jl 0x10e176eb */
  if ((C.sf!=C.of)) goto L_10e176eb;
  /* 10e176d8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e176db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e176dd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e176e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e176e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e176e6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e176e9 jmp 0x10e176d2 */
  goto L_10e176d2;
L_10e176eb:;
  /* 10e176eb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e176ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e176f1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10e176f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e176f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e176fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e176fd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17700 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e17703 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e17706 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e17709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1770c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e1770f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17713 jle 0x10e1771c */
  if ((C.zf||C.sf!=C.of)) goto L_10e1771c;
  /* 10e17715 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10e1771c:;
  /* 10e1771c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1771f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17722 je 0x10e17940 */
  if (C.zf) goto L_10e17940;
  /* 10e17728 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1772b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1772e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17731 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17734 jne 0x10e1780a */
  if (!C.zf) goto L_10e1780a;
  /* 10e1773a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1773e jge 0x10e1779f */
  if ((C.sf==C.of)) goto L_10e1779f;
  /* 10e17740 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17745 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17748 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e1774a not eax */
  EAX = (~(EAX));
  /* 10e1774c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1774f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17752 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e17756 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17758 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1775b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e1775e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e17762 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17765 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17768 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e1776b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e1776e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17771 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17774 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e17777 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e1777a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1777d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e17781 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e17783 jne 0x10e1779d */
  if (!C.zf) goto L_10e1779d;
  /* 10e17785 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e1778a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1778d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e1778f not eax */
  EAX = (~(EAX));
  /* 10e17791 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17794 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e17796 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e17798 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1779b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e1779d:;
  /* 10e1779d jmp 0x10e1780a */
  goto L_10e1780a;
L_10e1779f:;
  /* 10e1779f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e177a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e177a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e177aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e177ac not edx */
  EDX = (~(EDX));
  /* 10e177ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e177b1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e177b4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e177bb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e177bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e177c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e177c3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10e177ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e177cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e177d0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e177d3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e177d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e177d9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e177dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e177df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e177e2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e177e5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e177e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e177eb jne 0x10e1780a */
  if (!C.zf) goto L_10e1780a;
  /* 10e177ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e177f0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e177f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e177f8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e177fa not edx */
  EDX = (~(EDX));
  /* 10e177fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e177ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17802 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17804 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17807 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e1780a:;
  /* 10e1780a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1780d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e17810 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17813 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e17816 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e17819 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1781c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1781f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17822 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e17825 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e17828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1782c je 0x10e17940 */
  if (C.zf) goto L_10e17940;
  /* 10e17832 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17838 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10e1783b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1783e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e17844 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e1784a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1784d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e17850 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e17853 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e17856 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17859 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e1785c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1785f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17862 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17865 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e17868 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1786b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1786e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17871 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17874 jne 0x10e17940 */
  if (!C.zf) goto L_10e17940;
  /* 10e1787a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1787e jge 0x10e178da */
  if ((C.sf==C.of)) goto L_10e178da;
  /* 10e17880 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17883 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17886 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e1788a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e1788d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17890 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e17893 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e17895 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17898 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1789b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e1789e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e178a0 jne 0x10e178b8 */
  if (!C.zf) goto L_10e178b8;
  /* 10e178a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e178a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e178aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e178ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e178af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e178b1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e178b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e178b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e178b8:;
  /* 10e178b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e178bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e178c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e178c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e178c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e178c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e178cc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e178ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e178d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e178d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e178d8 jmp 0x10e17940 */
  goto L_10e17940;
L_10e178da:;
  /* 10e178da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e178dd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e178e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e178e4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e178e7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e178ea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e178ed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e178ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e178f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e178f5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e178f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e178fa jne 0x10e17917 */
  if (!C.zf) goto L_10e17917;
  /* 10e178fc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e178ff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17902 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17907 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e17909 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1790c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1790f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e17911 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17914 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e17917:;
  /* 10e17917 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1791a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1791d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17922 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17924 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17927 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e1792a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e17931 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17933 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17936 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e17939 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10e17940:;
  /* 10e17940 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17944 je 0x10e1795a */
  if (C.zf) goto L_10e1795a;
  /* 10e17946 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1794c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e1794e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17951 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17954 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e17957 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10e1795a:;
  /* 10e1795a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1795d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17960 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e17963 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17966 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17969 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1796c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e1796e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17971 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17974 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17977 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1797a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10e1797d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17980 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e17982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17985 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e17987 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1798a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1798d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e1798f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e17991 jne 0x10e179b3 */
  if (!C.zf) goto L_10e179b3;
  /* 10e17993 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17996 cmp eax, dword ptr [0x10e3fda0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1799c jne 0x10e179b3 */
  if (!C.zf) goto L_10e179b3;
  /* 10e1799e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e179a1 cmp ecx, dword ptr [0x10e3fd98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e179a7 jne 0x10e179b3 */
  if (!C.zf) goto L_10e179b3;
  /* 10e179a9 mov dword ptr [0x10e3fda0], 0 */
  w32((uint32_t)(0x10e3fda0), (0x0u));
L_10e179b3:;
  /* 10e179b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e179b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e179b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e179bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e179be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e179c1:;
  /* 10e179c1 pop esi */
  ESI = (pop32());
  /* 10e179c2 mov esp, ebp */
  ESP = (EBP);
  /* 10e179c4 pop ebp */
  EBP = (pop32());
  /* 10e179c5 ret  */
  ESPCHK(0x10e17490u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x10e179d0 (271 bytes, 78 insns) */
void f_10e179d0(void) {
  FTRACE(0x10e179d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e179d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e179d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e179d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e179d4 mov eax, dword ptr [0x10e3fda4] */
  EAX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e179d9 cmp eax, dword ptr [0x10e3fd88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3fd88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e179df jne 0x10e17a2b */
  if (!C.zf) goto L_10e17a2b;
  /* 10e179e1 mov ecx, dword ptr [0x10e3fd88] */
  ECX = (r32((uint32_t)(0x10e3fd88)));
  /* 10e179e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e179ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e179ed push ecx */
  push32((uint32_t)(ECX));
  /* 10e179ee mov edx, dword ptr [0x10e3fda8] */
  EDX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e179f4 push edx */
  push32((uint32_t)(EDX));
  /* 10e179f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e179f7 mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e179fc push eax */
  push32((uint32_t)(EAX));
  /* 10e179fd call dword ptr [0x10e40300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40300))), 0x10e17a03u);
  /* 10e17a03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e17a06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17a0a jne 0x10e17a13 */
  if (!C.zf) goto L_10e17a13;
  /* 10e17a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17a0e jmp 0x10e17adb */
  goto L_10e17adb;
L_10e17a13:;
  /* 10e17a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17a16 mov dword ptr [0x10e3fda8], ecx */
  w32((uint32_t)(0x10e3fda8), (ECX));
  /* 10e17a1c mov edx, dword ptr [0x10e3fd88] */
  EDX = (r32((uint32_t)(0x10e3fd88)));
  /* 10e17a22 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17a25 mov dword ptr [0x10e3fd88], edx */
  w32((uint32_t)(0x10e3fd88), (EDX));
L_10e17a2b:;
  /* 10e17a2b mov eax, dword ptr [0x10e3fda4] */
  EAX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e17a30 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e17a33 mov ecx, dword ptr [0x10e3fda8] */
  ECX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e17a39 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17a3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e17a3e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10e17a43 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e17a45 mov edx, dword ptr [0x10e3fdac] */
  EDX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e17a4b push edx */
  push32((uint32_t)(EDX));
  /* 10e17a4c call dword ptr [0x10e402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402fc))), 0x10e17a52u);
  /* 10e17a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17a55 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10e17a58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17a5b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17a5f jne 0x10e17a65 */
  if (!C.zf) goto L_10e17a65;
  /* 10e17a61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17a63 jmp 0x10e17adb */
  goto L_10e17adb;
L_10e17a65:;
  /* 10e17a65 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e17a67 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10e17a6c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10e17a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e17a73 call dword ptr [0x10e40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40304))), 0x10e17a79u);
  /* 10e17a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17a7c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10e17a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17a82 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17a86 jne 0x10e17aa2 */
  if (!C.zf) goto L_10e17aa2;
  /* 10e17a88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17a8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e17a8e push ecx */
  push32((uint32_t)(ECX));
  /* 10e17a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e17a91 mov edx, dword ptr [0x10e3fdac] */
  EDX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e17a97 push edx */
  push32((uint32_t)(EDX));
  /* 10e17a98 call dword ptr [0x10e402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402dc))), 0x10e17a9eu);
  /* 10e17a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17aa0 jmp 0x10e17adb */
  goto L_10e17adb;
L_10e17aa2:;
  /* 10e17aa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17aa5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e17aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17aae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e17ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17ab8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10e17abf mov eax, dword ptr [0x10e3fda4] */
  EAX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e17ac4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17ac7 mov dword ptr [0x10e3fda4], eax */
  w32((uint32_t)(0x10e3fda4), (EAX));
  /* 10e17acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17acf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e17ad2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10e17ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e17adb:;
  /* 10e17adb mov esp, ebp */
  ESP = (EBP);
  /* 10e17add pop ebp */
  EBP = (pop32());
  /* 10e17ade ret  */
  ESPCHK(0x10e179d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ae0 @ 0x10e17ae0 (494 bytes, 149 insns) */
void f_10e17ae0(void) {
  FTRACE(0x10e17ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e17ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e17ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10e17ae3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17ae9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e17aec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e17aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17af2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e17af5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e17af8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10e17aff:;
  /* 10e17aff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17b03 jl 0x10e17b18 */
  if ((C.sf!=C.of)) goto L_10e17b18;
  /* 10e17b05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e17b08 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e17b0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e17b0d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17b10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17b13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e17b16 jmp 0x10e17aff */
  goto L_10e17aff;
L_10e17b18:;
  /* 10e17b18 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17b1b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e17b21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17b24 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e17b2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e17b2e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e17b35 jmp 0x10e17b40 */
  goto L_10e17b40;
L_10e17b37:;
  /* 10e17b37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17b3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17b3d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10e17b40:;
  /* 10e17b40 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17b44 jge 0x10e17b66 */
  if ((C.sf==C.of)) goto L_10e17b66;
  /* 10e17b46 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17b49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e17b4c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10e17b4f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e17b52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17b55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17b58 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e17b5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17b5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17b61 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e17b64 jmp 0x10e17b37 */
  goto L_10e17b37;
L_10e17b66:;
  /* 10e17b66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17b69 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e17b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17b6f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e17b72 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17b74 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e17b77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e17b79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e17b7e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e17b83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17b86 push edx */
  push32((uint32_t)(EDX));
  /* 10e17b87 call dword ptr [0x10e40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40304))), 0x10e17b8du);
  /* 10e17b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e17b8f jne 0x10e17b99 */
  if (!C.zf) goto L_10e17b99;
  /* 10e17b91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e17b94 jmp 0x10e17cca */
  goto L_10e17cca;
L_10e17b99:;
  /* 10e17b99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17b9c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17ba1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e17ba4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17ba7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e17baa jmp 0x10e17bb8 */
  goto L_10e17bb8;
L_10e17bac:;
  /* 10e17bac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17baf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17bb5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e17bb8:;
  /* 10e17bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17bbb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17bbe ja 0x10e17c1d */
  if ((!C.cf&&!C.zf)) goto L_10e17c1d;
  /* 10e17bc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17bc3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10e17bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17bcd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10e17bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17bda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17bdd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e17be0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17be3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10e17be9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17bec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17bf2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17bf5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e17bf8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17bfb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17c01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17c04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e17c07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17c0a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17c0f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e17c12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e17c15 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10e17c1b jmp 0x10e17bac */
  goto L_10e17bac;
L_10e17c1d:;
  /* 10e17c1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e17c20 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17c26 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e17c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17c2c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17c2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17c32 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e17c35 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17c38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e17c3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e17c3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17c41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17c44 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e17c47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17c4a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17c4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17c50 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e17c53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17c56 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e17c59 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e17c5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17c5f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17c62 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e17c65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17c68 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17c6b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10e17c73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17c76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17c79 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10e17c84 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17c87 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10e17c8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17c8e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10e17c91 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e17c94 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17c97 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10e17c9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e17c9c jne 0x10e17cad */
  if (!C.zf) goto L_10e17cad;
  /* 10e17c9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17ca1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17ca4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e17ca7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17caa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e17cad:;
  /* 10e17cad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17cb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17cb5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17cb7 not edx */
  EDX = (~(EDX));
  /* 10e17cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17cbc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e17cbf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17cc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17cc4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e17cc7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10e17cca:;
  /* 10e17cca mov esp, ebp */
  ESP = (EBP);
  /* 10e17ccc pop ebp */
  EBP = (pop32());
  /* 10e17ccd ret  */
  ESPCHK(0x10e17ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd0 @ 0x10e17cd0 (1515 bytes, 489 insns) */
void f_10e17cd0(void) {
  FTRACE(0x10e17cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e17cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e17cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e17cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17cd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e17cd9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17cdc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10e17cde mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e17ce1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17ce4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e17ce7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e17cea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17ced mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e17cf0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17cf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e17cf6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e17cf9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e17cfc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e17cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17d02 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e17d08 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17d0b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e17d12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e17d15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e17d18 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17d1b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e17d1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17d21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e17d23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17d26 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e17d29 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17d2c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17d2f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e17d32 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17d35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e17d37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e17d3a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17d3d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17d40 jle 0x10e17ff6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e17ff6;
  /* 10e17d46 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17d49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e17d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e17d4e jne 0x10e17d5b */
  if (!C.zf) goto L_10e17d5b;
  /* 10e17d50 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17d53 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17d56 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17d59 jle 0x10e17d62 */
  if ((C.zf||C.sf!=C.of)) goto L_10e17d62;
L_10e17d5b:;
  /* 10e17d5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17d5d jmp 0x10e182b7 */
  goto L_10e182b7;
L_10e17d62:;
  /* 10e17d62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17d65 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e17d68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17d6b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e17d6e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17d72 jbe 0x10e17d7b */
  if ((C.cf||C.zf)) goto L_10e17d7b;
  /* 10e17d74 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e17d7b:;
  /* 10e17d7b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17d7e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17d81 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17d84 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17d87 jne 0x10e17e5d */
  if (!C.zf) goto L_10e17e5d;
  /* 10e17d8d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17d91 jae 0x10e17df2 */
  if (!C.cf) goto L_10e17df2;
  /* 10e17d93 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17d98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17d9b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17d9d not edx */
  EDX = (~(EDX));
  /* 10e17d9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17da2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17da5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e17da9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e17dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17dae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17db1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e17db5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17db8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17dbb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e17dbe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e17dc1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17dc4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17dc7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e17dca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17dcd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17dd0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e17dd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e17dd6 jne 0x10e17df0 */
  if (!C.zf) goto L_10e17df0;
  /* 10e17dd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17ddd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17de0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17de2 not edx */
  EDX = (~(EDX));
  /* 10e17de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e17de9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17dee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e17df0:;
  /* 10e17df0 jmp 0x10e17e5d */
  goto L_10e17e5d;
L_10e17df2:;
  /* 10e17df2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17df5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17df8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17dfd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e17dff not eax */
  EAX = (~(EAX));
  /* 10e17e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17e04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17e07 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e17e0e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17e10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17e13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17e16 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e17e1d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17e20 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17e23 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e17e26 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e17e29 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17e2c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17e2f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e17e32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17e35 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17e38 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e17e3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e17e3e jne 0x10e17e5d */
  if (!C.zf) goto L_10e17e5d;
  /* 10e17e40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17e43 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17e46 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17e4b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e17e4d not eax */
  EAX = (~(EAX));
  /* 10e17e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17e52 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17e55 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e17e57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17e5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e17e5d:;
  /* 10e17e5d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17e60 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e17e63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17e66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17e69 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e17e6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17e6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e17e72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17e75 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e17e78 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e17e7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e17e7e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17e81 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17e84 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e17e87 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17e8b jle 0x10e17fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e17fd7;
  /* 10e17e91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17e94 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17e97 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e17e9a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17e9d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e17ea0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17ea3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e17ea6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17eaa jbe 0x10e17eb3 */
  if ((C.cf||C.zf)) goto L_10e17eb3;
  /* 10e17eac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e17eb3:;
  /* 10e17eb3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17eb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e17eb9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10e17ebc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e17ebf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17ec2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17ec5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17ec8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e17ecb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17ece mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17ed1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e17ed4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e17ed7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17eda mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e17edd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17ee0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17ee3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17ee6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e17ee9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17eec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17eef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e17ef2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17ef5 jne 0x10e17fc3 */
  if (!C.zf) goto L_10e17fc3;
  /* 10e17efb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17eff jae 0x10e17f5c */
  if (!C.cf) goto L_10e17f5c;
  /* 10e17f01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f04 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17f07 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e17f0b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f0e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17f11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e17f14 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e17f17 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f1a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17f1d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e17f20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e17f22 jne 0x10e17f3a */
  if (!C.zf) goto L_10e17f3a;
  /* 10e17f24 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17f29 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17f2c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17f31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e17f33 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17f38 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e17f3a:;
  /* 10e17f3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17f3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17f42 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e17f44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17f47 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f4a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e17f4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17f50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17f53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f56 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e17f5a jmp 0x10e17fc3 */
  goto L_10e17fc3;
L_10e17f5c:;
  /* 10e17f5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f5f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17f62 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e17f66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f69 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17f6c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e17f6f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e17f72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17f75 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17f78 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e17f7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e17f7d jne 0x10e17f9a */
  if (!C.zf) goto L_10e17f9a;
  /* 10e17f7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17f82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17f85 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e17f8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e17f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17f8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e17f92 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17f94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e17f97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e17f9a:;
  /* 10e17f9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e17f9d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e17fa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e17fa5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e17fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17faa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17fad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e17fb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e17fb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e17fb9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e17fbc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10e17fc3:;
  /* 10e17fc3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17fc6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17fc9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e17fcb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e17fce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17fd1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e17fd4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10e17fd7:;
  /* 10e17fd7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17fda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17fdd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17fe0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e17fe2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17fe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17fe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e17feb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e17fee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10e17ff1 jmp 0x10e182b2 */
  goto L_10e182b2;
L_10e17ff6:;
  /* 10e17ff6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e17ff9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e17ffc jge 0x10e182b2 */
  if ((C.sf==C.of)) goto L_10e182b2;
  /* 10e18002 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e18005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18008 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1800b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e1800d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e18010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18013 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e18016 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18019 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10e1801c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1801f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18022 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e18025 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18028 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1802b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e1802e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18031 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e18034 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18037 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e1803a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1803e jbe 0x10e18047 */
  if ((C.cf||C.zf)) goto L_10e18047;
  /* 10e18040 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e18047:;
  /* 10e18047 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1804a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1804d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1804f jne 0x10e18190 */
  if (!C.zf) goto L_10e18190;
  /* 10e18055 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e18058 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e1805b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1805e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e18061 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18065 jbe 0x10e1806e */
  if ((C.cf||C.zf)) goto L_10e1806e;
  /* 10e18067 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e1806e:;
  /* 10e1806e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e18071 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e18074 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e18077 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1807a jne 0x10e18150 */
  if (!C.zf) goto L_10e18150;
  /* 10e18080 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18084 jae 0x10e180e5 */
  if (!C.cf) goto L_10e180e5;
  /* 10e18086 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e1808b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1808e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e18090 not edx */
  EDX = (~(EDX));
  /* 10e18092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18095 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18098 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e1809c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1809e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e180a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e180a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e180a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e180ab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e180ae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e180b1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e180b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e180b7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e180ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e180bd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e180c0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e180c3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e180c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e180c9 jne 0x10e180e3 */
  if (!C.zf) goto L_10e180e3;
  /* 10e180cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e180d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e180d3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e180d5 not edx */
  EDX = (~(EDX));
  /* 10e180d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e180da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e180dc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e180de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e180e1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e180e3:;
  /* 10e180e3 jmp 0x10e18150 */
  goto L_10e18150;
L_10e180e5:;
  /* 10e180e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e180e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e180eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e180f0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e180f2 not eax */
  EAX = (~(EAX));
  /* 10e180f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e180f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e180fa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e18101 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e18103 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18106 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18109 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e18110 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18113 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18116 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e18119 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e1811c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1811f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18122 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e18125 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18128 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1812b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e1812f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e18131 jne 0x10e18150 */
  if (!C.zf) goto L_10e18150;
  /* 10e18133 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e18136 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18139 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e1813e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e18140 not eax */
  EAX = (~(EAX));
  /* 10e18142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18145 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e18148 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1814a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1814d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e18150:;
  /* 10e18150 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e18153 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e18156 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e18159 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e1815c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e1815f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e18162 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e18165 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e18168 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e1816b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e1816e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18171 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18174 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e18177 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1817a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e1817d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18180 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e18183 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18187 jbe 0x10e18190 */
  if ((C.cf||C.zf)) goto L_10e18190;
  /* 10e18189 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e18190:;
  /* 10e18190 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18193 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18196 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10e18199 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e1819c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1819f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e181a2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e181a5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e181a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e181ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e181ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e181b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e181b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e181b7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e181ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e181bd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e181c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e181c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e181c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e181c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e181cc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e181cf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e181d2 jne 0x10e1829e */
  if (!C.zf) goto L_10e1829e;
  /* 10e181d8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e181dc jae 0x10e18238 */
  if (!C.cf) goto L_10e18238;
  /* 10e181de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e181e1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e181e4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e181e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e181eb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e181ee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e181f1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e181f3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e181f6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e181f9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e181fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e181fe jne 0x10e18216 */
  if (!C.zf) goto L_10e18216;
  /* 10e18200 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e18205 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18208 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e1820a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1820d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1820f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e18211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18214 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e18216:;
  /* 10e18216 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e1821b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1821e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e18220 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18223 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18226 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e1822a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1822c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1822f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18232 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e18236 jmp 0x10e1829e */
  goto L_10e1829e;
L_10e18238:;
  /* 10e18238 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1823b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1823e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e18242 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18245 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18248 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e1824b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e1824d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18250 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18253 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e18256 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e18258 jne 0x10e18275 */
  if (!C.zf) goto L_10e18275;
  /* 10e1825a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1825d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18260 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e18265 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e18267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1826a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1826d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1826f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18272 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e18275:;
  /* 10e18275 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18278 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1827b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e18280 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e18282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18285 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18288 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e1828f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18291 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18294 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e18297 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10e1829e:;
  /* 10e1829e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e182a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e182a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e182a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e182a9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e182ac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e182af mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10e182b2:;
  /* 10e182b2 mov eax, 1 */
  EAX = (0x1u);
L_10e182b7:;
  /* 10e182b7 mov esp, ebp */
  ESP = (EBP);
  /* 10e182b9 pop ebp */
  EBP = (pop32());
  /* 10e182ba ret  */
  ESPCHK(0x10e17cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082c0 @ 0x10e182c0 (304 bytes, 79 insns) */
void f_10e182c0(void) {
  FTRACE(0x10e182c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e182c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e182c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e182c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e182c4 cmp dword ptr [0x10e3fda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e182cb je 0x10e183ec */
  if (C.zf) goto L_10e183ec;
  /* 10e182d1 mov eax, dword ptr [0x10e3fd98] */
  EAX = (r32((uint32_t)(0x10e3fd98)));
  /* 10e182d6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10e182d9 mov ecx, dword ptr [0x10e3fda0] */
  ECX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e182df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e182e2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e182e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e182e7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e182ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e182f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e182f4 push eax */
  push32((uint32_t)(EAX));
  /* 10e182f5 call dword ptr [0x10e402e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e0))), 0x10e182fbu);
  /* 10e182fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e18300 mov ecx, dword ptr [0x10e3fd98] */
  ECX = (r32((uint32_t)(0x10e3fd98)));
  /* 10e18306 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e18308 mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e1830d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e18310 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e18312 mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e18318 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e1831b mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e18320 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e18323 mov edx, dword ptr [0x10e3fd98] */
  EDX = (r32((uint32_t)(0x10e3fd98)));
  /* 10e18329 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10e18334 mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e18339 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1833c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10e1833f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e18342 mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e18347 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1834a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10e1834d mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e18353 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e18356 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10e1835a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1835c jne 0x10e18372 */
  if (!C.zf) goto L_10e18372;
  /* 10e1835e mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e18364 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e18367 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10e18369 mov ecx, dword ptr [0x10e3fda0] */
  ECX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e1836f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10e18372:;
  /* 10e18372 mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e18378 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1837c jne 0x10e183e2 */
  if (!C.zf) goto L_10e183e2;
  /* 10e1837e cmp dword ptr [0x10e3fda4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fda4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18385 jle 0x10e183e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e183e2;
  /* 10e18387 mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e1838c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1838f push ecx */
  push32((uint32_t)(ECX));
  /* 10e18390 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e18392 mov edx, dword ptr [0x10e3fdac] */
  EDX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e18398 push edx */
  push32((uint32_t)(EDX));
  /* 10e18399 call dword ptr [0x10e402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402dc))), 0x10e1839fu);
  /* 10e1839f mov eax, dword ptr [0x10e3fda4] */
  EAX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e183a4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e183a7 mov ecx, dword ptr [0x10e3fda8] */
  ECX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e183ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e183af mov edx, dword ptr [0x10e3fda0] */
  EDX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e183b5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e183b8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e183ba push ecx */
  push32((uint32_t)(ECX));
  /* 10e183bb mov eax, dword ptr [0x10e3fda0] */
  EAX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e183c0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e183c3 push eax */
  push32((uint32_t)(EAX));
  /* 10e183c4 mov ecx, dword ptr [0x10e3fda0] */
  ECX = (r32((uint32_t)(0x10e3fda0)));
  /* 10e183ca push ecx */
  push32((uint32_t)(ECX));
  /* 10e183cb call 0x10e1a9f0 */
  push32(0x10e183d0u); f_10e1a9f0();
  /* 10e183d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e183d3 mov edx, dword ptr [0x10e3fda4] */
  EDX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e183d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e183dc mov dword ptr [0x10e3fda4], edx */
  w32((uint32_t)(0x10e3fda4), (EDX));
L_10e183e2:;
  /* 10e183e2 mov dword ptr [0x10e3fda0], 0 */
  w32((uint32_t)(0x10e3fda0), (0x0u));
L_10e183ec:;
  /* 10e183ec mov esp, ebp */
  ESP = (EBP);
  /* 10e183ee pop ebp */
  EBP = (pop32());
  /* 10e183ef ret  */
  ESPCHK(0x10e182c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x10e183f0 (1565 bytes, 343 insns) */
void f_10e183f0(void) {
  FTRACE(0x10e183f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e183f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e183f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e183f3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e183f9 mov eax, dword ptr [0x10e3fda4] */
  EAX = (r32((uint32_t)(0x10e3fda4)));
  /* 10e183fe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e18401 push eax */
  push32((uint32_t)(EAX));
  /* 10e18402 mov ecx, dword ptr [0x10e3fda8] */
  ECX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e18408 push ecx */
  push32((uint32_t)(ECX));
  /* 10e18409 call dword ptr [0x10e402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b4))), 0x10e1840fu);
  /* 10e1840f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18411 je 0x10e1841b */
  if (C.zf) goto L_10e1841b;
  /* 10e18413 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e18416 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e1841b:;
  /* 10e1841b mov edx, dword ptr [0x10e3fda8] */
  EDX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e18421 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10e18427 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10e18431 jmp 0x10e18442 */
  goto L_10e18442;
L_10e18433:;
  /* 10e18433 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10e18439 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1843c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10e18442:;
  /* 10e18442 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10e18448 cmp ecx, dword ptr [0x10e3fda4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1844e jge 0x10e18a07 */
  if ((C.sf==C.of)) goto L_10e18a07;
  /* 10e18454 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e1845a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e1845d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10e18463 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10e18468 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e1846e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1846f call dword ptr [0x10e402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b4))), 0x10e18475u);
  /* 10e18475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18477 je 0x10e18483 */
  if (C.zf) goto L_10e18483;
  /* 10e18479 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10e1847e jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e18483:;
  /* 10e18483 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e18489 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e1848c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10e18492 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e18498 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1849e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e184a1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e184a7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e184aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e184ad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10e184b7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10e184c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e184c8 jmp 0x10e184d3 */
  goto L_10e184d3;
L_10e184ca:;
  /* 10e184ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e184cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e184d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e184d3:;
  /* 10e184d3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e184d7 jge 0x10e189cb */
  if ((C.sf==C.of)) goto L_10e189cb;
  /* 10e184dd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10e184e7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10e184f1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10e184fb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10e18505 jmp 0x10e18516 */
  goto L_10e18516;
L_10e18507:;
  /* 10e18507 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e1850d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18510 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10e18516:;
  /* 10e18516 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1851d jge 0x10e18532 */
  if ((C.sf==C.of)) goto L_10e18532;
  /* 10e1851f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e18525 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10e18530 jmp 0x10e18507 */
  goto L_10e18507;
L_10e18532:;
  /* 10e18532 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18536 jl 0x10e1896d */
  if ((C.sf!=C.of)) goto L_10e1896d;
  /* 10e1853c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e18541 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e18547 push ecx */
  push32((uint32_t)(ECX));
  /* 10e18548 call dword ptr [0x10e402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b4))), 0x10e1854eu);
  /* 10e1854e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18550 je 0x10e1855c */
  if (C.zf) goto L_10e1855c;
  /* 10e18552 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10e18557 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e1855c:;
  /* 10e1855c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e18562 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e18565 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10e1856f jmp 0x10e18580 */
  goto L_10e18580;
L_10e18571:;
  /* 10e18571 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10e18577 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1857a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10e18580:;
  /* 10e18580 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18587 jge 0x10e18704 */
  if ((C.sf==C.of)) goto L_10e18704;
  /* 10e1858d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18590 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18593 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10e18599 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e1859f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e185a5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10e185ab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e185b1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e185b5 jne 0x10e185c2 */
  if (!C.zf) goto L_10e185c2;
  /* 10e185b7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10e185bd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e185c0 je 0x10e185cc */
  if (C.zf) goto L_10e185cc;
L_10e185c2:;
  /* 10e185c2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10e185c7 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e185cc:;
  /* 10e185cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e185d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e185d4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10e185da mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e185e0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10e185e6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10e185ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e185ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e185f1 je 0x10e18629 */
  if (C.zf) goto L_10e18629;
  /* 10e185f3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e185f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e185fc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10e18602 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1860c jle 0x10e18618 */
  if ((C.zf||C.sf!=C.of)) goto L_10e18618;
  /* 10e1860e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10e18613 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e18618:;
  /* 10e18618 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10e1861e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18621 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10e18627 jmp 0x10e1866b */
  goto L_10e1866b;
L_10e18629:;
  /* 10e18629 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e1862f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e18632 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18635 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10e1863b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18642 jle 0x10e1864e */
  if ((C.zf||C.sf!=C.of)) goto L_10e1864e;
  /* 10e18644 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10e1864e:;
  /* 10e1864e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e18654 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10e1865b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1865e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e18664 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10e1866b:;
  /* 10e1866b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18672 jl 0x10e1868d */
  if ((C.sf!=C.of)) goto L_10e1868d;
  /* 10e18674 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e1867a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1867d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1867f jne 0x10e1868d */
  if (!C.zf) goto L_10e1868d;
  /* 10e18681 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1868b jle 0x10e18697 */
  if ((C.zf||C.sf!=C.of)) goto L_10e18697;
L_10e1868d:;
  /* 10e1868d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10e18692 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e18697:;
  /* 10e18697 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e1869d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e186a3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e186a6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e186ac je 0x10e186b8 */
  if (C.zf) goto L_10e186b8;
  /* 10e186ae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10e186b3 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e186b8:;
  /* 10e186b8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e186be add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e186c4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10e186ca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e186d0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e186d6 jb 0x10e185cc */
  if (C.cf) goto L_10e185cc;
  /* 10e186dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e186e2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e186e8 je 0x10e186f4 */
  if (C.zf) goto L_10e186f4;
  /* 10e186ea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10e186ef jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e186f4:;
  /* 10e186f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e186f7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e186fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e186ff jmp 0x10e18571 */
  goto L_10e18571;
L_10e18704:;
  /* 10e18704 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e18707 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e18709 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1870f je 0x10e1871b */
  if (C.zf) goto L_10e1871b;
  /* 10e18711 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10e18716 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e1871b:;
  /* 10e1871b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1871e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10e18724 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e1872b jmp 0x10e18736 */
  goto L_10e18736;
L_10e1872d:;
  /* 10e1872d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e18730 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18733 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e18736:;
  /* 10e18736 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1873a jge 0x10e1896d */
  if ((C.sf==C.of)) goto L_10e1896d;
  /* 10e18740 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10e1874a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e18750 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10e18756:;
  /* 10e18756 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e1875c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e1875f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10e18765 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e1876b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18771 je 0x10e1889a */
  if (C.zf) goto L_10e1889a;
  /* 10e18777 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1877a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e18780 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18787 je 0x10e1889a */
  if (C.zf) goto L_10e1889a;
  /* 10e1878d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e18793 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18799 jb 0x10e187ae */
  if (C.cf) goto L_10e187ae;
  /* 10e1879b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e187a1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e187a6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e187ac jb 0x10e187b8 */
  if (C.cf) goto L_10e187b8;
L_10e187ae:;
  /* 10e187ae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10e187b3 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e187b8:;
  /* 10e187b8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e187be and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e187c4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10e187ca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10e187d0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e187d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e187d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e187d9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e187de mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10e187e4:;
  /* 10e187e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e187e7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e187ed je 0x10e1880e */
  if (C.zf) goto L_10e1880e;
  /* 10e187ef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e187f2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e187f8 jne 0x10e187fc */
  if (!C.zf) goto L_10e187fc;
  /* 10e187fa jmp 0x10e1880e */
  goto L_10e1880e;
L_10e187fc:;
  /* 10e187fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e187ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e18801 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10e18804 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e18807 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18809 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e1880c jmp 0x10e187e4 */
  goto L_10e187e4;
L_10e1880e:;
  /* 10e1880e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e18811 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18817 jne 0x10e18823 */
  if (!C.zf) goto L_10e18823;
  /* 10e18819 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10e1881e jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e18823:;
  /* 10e18823 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e18829 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1882b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e1882e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18831 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10e18837 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1883e jle 0x10e1884a */
  if ((C.zf||C.sf!=C.of)) goto L_10e1884a;
  /* 10e18840 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10e1884a:;
  /* 10e1884a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e18850 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18853 je 0x10e1885f */
  if (C.zf) goto L_10e1885f;
  /* 10e18855 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10e1885a jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e1885f:;
  /* 10e1885f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e18865 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e18868 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1886e je 0x10e1887a */
  if (C.zf) goto L_10e1887a;
  /* 10e18870 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10e18875 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e1887a:;
  /* 10e1887a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e18880 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10e18886 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e1888c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1888f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10e18895 jmp 0x10e18756 */
  goto L_10e18756;
L_10e1889a:;
  /* 10e1889a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e188a1 je 0x10e18911 */
  if (C.zf) goto L_10e18911;
  /* 10e188a3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e188a7 jge 0x10e188db */
  if ((C.sf==C.of)) goto L_10e188db;
  /* 10e188a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e188ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e188b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e188b3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10e188b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e188bb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10e188c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e188c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e188c9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e188cb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10e188d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e188d3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10e188d9 jmp 0x10e18911 */
  goto L_10e18911;
L_10e188db:;
  /* 10e188db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e188de sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e188e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e188e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e188e8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10e188ee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e188f0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10e188f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e188f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e188fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e18901 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e18903 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10e18909 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1890b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10e18911:;
  /* 10e18911 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e18917 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1891a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18920 jne 0x10e18934 */
  if (!C.zf) goto L_10e18934;
  /* 10e18922 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e18925 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e1892b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18932 je 0x10e1893e */
  if (C.zf) goto L_10e1893e;
L_10e18934:;
  /* 10e18934 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10e18939 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e1893e:;
  /* 10e1893e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e18944 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e18947 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1894d je 0x10e18959 */
  if (C.zf) goto L_10e18959;
  /* 10e1894f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10e18954 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e18959:;
  /* 10e18959 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e1895f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18962 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10e18968 jmp 0x10e1872d */
  goto L_10e1872d;
L_10e1896d:;
  /* 10e1896d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18970 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e18976 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10e1897c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18980 jne 0x10e1899a */
  if (!C.zf) goto L_10e1899a;
  /* 10e18982 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18985 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e1898b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10e18991 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18998 je 0x10e189a1 */
  if (C.zf) goto L_10e189a1;
L_10e1899a:;
  /* 10e1899a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10e1899f jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e189a1:;
  /* 10e189a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e189a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e189ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10e189b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e189b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e189bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e189be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e189c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e189c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e189c6 jmp 0x10e184ca */
  goto L_10e184ca;
L_10e189cb:;
  /* 10e189cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e189d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10e189d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e189d9 jne 0x10e189ec */
  if (!C.zf) goto L_10e189ec;
  /* 10e189db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e189e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10e189e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e189ea je 0x10e189f3 */
  if (C.zf) goto L_10e189f3;
L_10e189ec:;
  /* 10e189ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10e189f1 jmp 0x10e18a09 */
  goto L_10e18a09;
L_10e189f3:;
  /* 10e189f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e189f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e189fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10e18a02 jmp 0x10e18433 */
  goto L_10e18433;
L_10e18a07:;
  /* 10e18a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e18a09:;
  /* 10e18a09 mov esp, ebp */
  ESP = (EBP);
  /* 10e18a0b pop ebp */
  EBP = (pop32());
  /* 10e18a0c ret  */
  ESPCHK(0x10e183f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a10 @ 0x10e18a10 (250 bytes, 92 insns) */
void f_10e18a10(void) {
  FTRACE(0x10e18a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e18a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e18a11 mov ebp, esp */
  EBP = (ESP);
  /* 10e18a13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18a16 push ebx */
  push32((uint32_t)(EBX));
  /* 10e18a17 push esi */
  push32((uint32_t)(ESI));
  /* 10e18a18 push edi */
  push32((uint32_t)(EDI));
  /* 10e18a19 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e18a1c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e18a1f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e18a22 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10e18a25:;
  /* 10e18a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18a29 jne 0x10e18a49 */
  if (!C.zf) goto L_10e18a49;
  /* 10e18a2b push 0x10e39dec */
  push32((uint32_t)(0x10e39decu));
  /* 10e18a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e18a32 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10e18a34 push 0x10e39de0 */
  push32((uint32_t)(0x10e39de0u));
  /* 10e18a39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e18a3b call 0x10e11bc0 */
  push32(0x10e18a40u); f_10e11bc0();
  /* 10e18a40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18a43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18a46 jne 0x10e18a49 */
  if (!C.zf) goto L_10e18a49;
  /* 10e18a48 int3  */
  x86_unimpl("int3 @ 0x10e18a48");
L_10e18a49:;
  /* 10e18a49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e18a4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e18a4d jne 0x10e18a25 */
  if (!C.zf) goto L_10e18a25;
L_10e18a4f:;
  /* 10e18a4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18a53 jne 0x10e18a73 */
  if (!C.zf) goto L_10e18a73;
  /* 10e18a55 push 0x10e39dd0 */
  push32((uint32_t)(0x10e39dd0u));
  /* 10e18a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e18a5c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e18a5e push 0x10e39de0 */
  push32((uint32_t)(0x10e39de0u));
  /* 10e18a63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e18a65 call 0x10e11bc0 */
  push32(0x10e18a6au); f_10e11bc0();
  /* 10e18a6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18a6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18a70 jne 0x10e18a73 */
  if (!C.zf) goto L_10e18a73;
  /* 10e18a72 int3  */
  x86_unimpl("int3 @ 0x10e18a72");
L_10e18a73:;
  /* 10e18a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18a77 jne 0x10e18a4f */
  if (!C.zf) goto L_10e18a4f;
  /* 10e18a79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18a7c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10e18a83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18a89 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e18a8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18a92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e18a94 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18a97 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10e18a9e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e18aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e18aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e18aa5 push edx */
  push32((uint32_t)(EDX));
  /* 10e18aa6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18aa9 push eax */
  push32((uint32_t)(EAX));
  /* 10e18aaa call 0x10e19a90 */
  push32(0x10e18aafu); f_10e19a90();
  /* 10e18aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18ab2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e18ab5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18ab8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e18abb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18abe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18ac1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e18ac4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18ac7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18acb jl 0x10e18aef */
  if ((C.sf!=C.of)) goto L_10e18aef;
  /* 10e18acd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18ad0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e18ad2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e18ad5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e18ad7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e18add mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e18ae0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18ae3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e18ae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18ae8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18aeb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e18aed jmp 0x10e18b00 */
  goto L_10e18b00;
L_10e18aef:;
  /* 10e18aef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18af2 push edx */
  push32((uint32_t)(EDX));
  /* 10e18af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e18af5 call 0x10e19810 */
  push32(0x10e18afau); f_10e19810();
  /* 10e18afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18afd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10e18b00:;
  /* 10e18b00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18b03 pop edi */
  EDI = (pop32());
  /* 10e18b04 pop esi */
  ESI = (pop32());
  /* 10e18b05 pop ebx */
  EBX = (pop32());
  /* 10e18b06 mov esp, ebp */
  ESP = (EBP);
  /* 10e18b08 pop ebp */
  EBP = (pop32());
  /* 10e18b09 ret  */
  ESPCHK(0x10e18a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x10e18b10 (183 bytes, 58 insns) */
void f_10e18b10(void) {
  FTRACE(0x10e18b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e18b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e18b11 mov ebp, esp */
  EBP = (ESP);
  /* 10e18b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18b1c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18b21 ja 0x10e18b3a */
  if ((!C.cf&&!C.zf)) goto L_10e18b3a;
  /* 10e18b23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18b26 mov edx, dword ptr [0x10e3cc98] */
  EDX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e18b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18b2e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e18b32 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10e18b35 jmp 0x10e18bc3 */
  goto L_10e18bc3;
L_10e18b3a:;
  /* 10e18b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18b3d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e18b40 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e18b46 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e18b4c mov edx, dword ptr [0x10e3cc98] */
  EDX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e18b52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18b54 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e18b58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e18b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18b5f je 0x10e18b83 */
  if (C.zf) goto L_10e18b83;
  /* 10e18b61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18b64 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e18b67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e18b6d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10e18b70 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e18b73 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10e18b76 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10e18b7a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10e18b81 jmp 0x10e18b94 */
  goto L_10e18b94;
L_10e18b83:;
  /* 10e18b83 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e18b86 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10e18b89 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10e18b8d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10e18b94:;
  /* 10e18b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e18b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e18b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e18b9a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10e18b9d push ecx */
  push32((uint32_t)(ECX));
  /* 10e18b9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18ba1 push edx */
  push32((uint32_t)(EDX));
  /* 10e18ba2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e18ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10e18ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e18ba8 call 0x10e1ad30 */
  push32(0x10e18badu); f_10e1ad30();
  /* 10e18bad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18bb2 jne 0x10e18bb8 */
  if (!C.zf) goto L_10e18bb8;
  /* 10e18bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18bb6 jmp 0x10e18bc3 */
  goto L_10e18bc3;
L_10e18bb8:;
  /* 10e18bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18bbb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e18bc0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10e18bc3:;
  /* 10e18bc3 mov esp, ebp */
  ESP = (EBP);
  /* 10e18bc5 pop ebp */
  EBP = (pop32());
  /* 10e18bc6 ret  */
  ESPCHK(0x10e18b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd0 @ 0x10e18bd0 (836 bytes, 238 insns) */
void f_10e18bd0(void) {
  FTRACE(0x10e18bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e18bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e18bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e18bd3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18bd6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e18bd8 call 0x10e16500 */
  push32(0x10e18bddu); f_10e16500();
  /* 10e18bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18be3 push eax */
  push32((uint32_t)(EAX));
  /* 10e18be4 call 0x10e18f20 */
  push32(0x10e18be9u); f_10e18f20();
  /* 10e18be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18bec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e18bef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18bf2 cmp ecx, dword ptr [0x10e3fae4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18bf8 jne 0x10e18c0b */
  if (!C.zf) goto L_10e18c0b;
  /* 10e18bfa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e18bfc call 0x10e165a0 */
  push32(0x10e18c01u); f_10e165a0();
  /* 10e18c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18c06 jmp 0x10e18f10 */
  goto L_10e18f10;
L_10e18c0b:;
  /* 10e18c0b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18c0f jne 0x10e18c2c */
  if (!C.zf) goto L_10e18c2c;
  /* 10e18c11 call 0x10e19000 */
  push32(0x10e18c16u); f_10e19000();
  /* 10e18c16 call 0x10e19080 */
  push32(0x10e18c1bu); f_10e19080();
  /* 10e18c1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e18c1d call 0x10e165a0 */
  push32(0x10e18c22u); f_10e165a0();
  /* 10e18c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18c25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18c27 jmp 0x10e18f10 */
  goto L_10e18f10;
L_10e18c2c:;
  /* 10e18c2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e18c33 jmp 0x10e18c3e */
  goto L_10e18c3e;
L_10e18c35:;
  /* 10e18c35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18c3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e18c3e:;
  /* 10e18c3e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18c42 jae 0x10e18d8f */
  if (!C.cf) goto L_10e18d8f;
  /* 10e18c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18c4b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e18c4e mov ecx, dword ptr [eax + 0x10e3ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10e3ceb8)));
  /* 10e18c54 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18c57 jne 0x10e18d8a */
  if (!C.zf) goto L_10e18d8a;
  /* 10e18c5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e18c64 jmp 0x10e18c6f */
  goto L_10e18c6f;
L_10e18c66:;
  /* 10e18c66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18c69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18c6c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10e18c6f:;
  /* 10e18c6f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18c76 jae 0x10e18c84 */
  if (!C.cf) goto L_10e18c84;
  /* 10e18c78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18c7b mov byte ptr [eax + 0x10e3fc80], 0 */
  w8((uint32_t)(EAX + 0x10e3fc80), (0x0u));
  /* 10e18c82 jmp 0x10e18c66 */
  goto L_10e18c66;
L_10e18c84:;
  /* 10e18c84 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e18c8b jmp 0x10e18c96 */
  goto L_10e18c96;
L_10e18c8d:;
  /* 10e18c8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18c90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18c93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e18c96:;
  /* 10e18c96 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18c9a jae 0x10e18d17 */
  if (!C.cf) goto L_10e18d17;
  /* 10e18c9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18c9f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e18ca2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18ca5 lea ecx, [edx + eax*8 + 0x10e3cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10e3cec8));
  /* 10e18cac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e18caf jmp 0x10e18cba */
  goto L_10e18cba;
L_10e18cb1:;
  /* 10e18cb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18cb4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18cb7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e18cba:;
  /* 10e18cba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18cbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e18cbf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e18cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e18cc3 je 0x10e18d12 */
  if (C.zf) goto L_10e18d12;
  /* 10e18cc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18cca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e18ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18ccf je 0x10e18d12 */
  if (C.zf) goto L_10e18d12;
  /* 10e18cd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e18cd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e18cd8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e18cdb jmp 0x10e18ce6 */
  goto L_10e18ce6;
L_10e18cdd:;
  /* 10e18cdd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18ce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18ce3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e18ce6:;
  /* 10e18ce6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e18ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e18ceb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e18cee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18cf1 ja 0x10e18d10 */
  if ((!C.cf&&!C.zf)) goto L_10e18d10;
  /* 10e18cf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18cf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18cf9 mov dl, byte ptr [eax + 0x10e3fc81] */
  DL = (r8((uint32_t)(EAX + 0x10e3fc81)));
  /* 10e18cff or dl, byte ptr [ecx + 0x10e3ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10e3ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10e18d05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18d08 mov byte ptr [eax + 0x10e3fc81], dl */
  w8((uint32_t)(EAX + 0x10e3fc81), (DL));
  /* 10e18d0e jmp 0x10e18cdd */
  goto L_10e18cdd;
L_10e18d10:;
  /* 10e18d10 jmp 0x10e18cb1 */
  goto L_10e18cb1;
L_10e18d12:;
  /* 10e18d12 jmp 0x10e18c8d */
  goto L_10e18c8d;
L_10e18d17:;
  /* 10e18d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18d1a mov dword ptr [0x10e3fae4], ecx */
  w32((uint32_t)(0x10e3fae4), (ECX));
  /* 10e18d20 mov dword ptr [0x10e3fb6c], 1 */
  w32((uint32_t)(0x10e3fb6c), (0x1u));
  /* 10e18d2a mov edx, dword ptr [0x10e3fae4] */
  EDX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e18d30 push edx */
  push32((uint32_t)(EDX));
  /* 10e18d31 call 0x10e18f80 */
  push32(0x10e18d36u); f_10e18f80();
  /* 10e18d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18d39 mov dword ptr [0x10e3fd84], eax */
  w32((uint32_t)(0x10e3fd84), (EAX));
  /* 10e18d3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e18d45 jmp 0x10e18d50 */
  goto L_10e18d50;
L_10e18d47:;
  /* 10e18d47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18d4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e18d50:;
  /* 10e18d50 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18d54 jae 0x10e18d74 */
  if (!C.cf) goto L_10e18d74;
  /* 10e18d56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18d59 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e18d5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18d5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18d62 mov cx, word ptr [ecx + eax*2 + 0x10e3cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10e3cebc)));
  /* 10e18d6a mov word ptr [edx*2 + 0x10e3fb60], cx */
  w16((uint32_t)(EDX*2 + 0x10e3fb60), (CX));
  /* 10e18d72 jmp 0x10e18d47 */
  goto L_10e18d47;
L_10e18d74:;
  /* 10e18d74 call 0x10e19080 */
  push32(0x10e18d79u); f_10e19080();
  /* 10e18d79 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e18d7b call 0x10e165a0 */
  push32(0x10e18d80u); f_10e165a0();
  /* 10e18d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18d85 jmp 0x10e18f10 */
  goto L_10e18f10;
L_10e18d8a:;
  /* 10e18d8a jmp 0x10e18c35 */
  goto L_10e18c35;
L_10e18d8f:;
  /* 10e18d8f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10e18d92 push edx */
  push32((uint32_t)(EDX));
  /* 10e18d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18d96 push eax */
  push32((uint32_t)(EAX));
  /* 10e18d97 call dword ptr [0x10e40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40308))), 0x10e18d9du);
  /* 10e18d9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18da0 jne 0x10e18ee2 */
  if (!C.zf) goto L_10e18ee2;
  /* 10e18da6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e18dad jmp 0x10e18db8 */
  goto L_10e18db8;
L_10e18daf:;
  /* 10e18daf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18db5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10e18db8:;
  /* 10e18db8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18dbf jae 0x10e18dcd */
  if (!C.cf) goto L_10e18dcd;
  /* 10e18dc1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18dc4 mov byte ptr [edx + 0x10e3fc80], 0 */
  w8((uint32_t)(EDX + 0x10e3fc80), (0x0u));
  /* 10e18dcb jmp 0x10e18daf */
  goto L_10e18daf;
L_10e18dcd:;
  /* 10e18dcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18dd0 mov dword ptr [0x10e3fae4], eax */
  w32((uint32_t)(0x10e3fae4), (EAX));
  /* 10e18dd5 mov dword ptr [0x10e3fd84], 0 */
  w32((uint32_t)(0x10e3fd84), (0x0u));
  /* 10e18ddf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18de3 jbe 0x10e18e9e */
  if ((C.cf||C.zf)) goto L_10e18e9e;
  /* 10e18de9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10e18dec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10e18def jmp 0x10e18dfa */
  goto L_10e18dfa;
L_10e18df1:;
  /* 10e18df1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18df4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18df7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10e18dfa:;
  /* 10e18dfa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18dfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e18dff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e18e01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e18e03 je 0x10e18e4c */
  if (C.zf) goto L_10e18e4c;
  /* 10e18e05 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18e0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e18e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e18e0f je 0x10e18e4c */
  if (C.zf) goto L_10e18e4c;
  /* 10e18e11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e18e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e18e18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e18e1b jmp 0x10e18e26 */
  goto L_10e18e26;
L_10e18e1d:;
  /* 10e18e1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18e20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18e23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e18e26:;
  /* 10e18e26 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e18e29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e18e2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e18e2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18e31 ja 0x10e18e4a */
  if ((!C.cf&&!C.zf)) goto L_10e18e4a;
  /* 10e18e33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18e36 mov cl, byte ptr [eax + 0x10e3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10e3fc81)));
  /* 10e18e3c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10e18e3f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18e42 mov byte ptr [edx + 0x10e3fc81], cl */
  w8((uint32_t)(EDX + 0x10e3fc81), (CL));
  /* 10e18e48 jmp 0x10e18e1d */
  goto L_10e18e1d;
L_10e18e4a:;
  /* 10e18e4a jmp 0x10e18df1 */
  goto L_10e18df1;
L_10e18e4c:;
  /* 10e18e4c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10e18e53 jmp 0x10e18e5e */
  goto L_10e18e5e;
L_10e18e55:;
  /* 10e18e55 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18e58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18e5b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e18e5e:;
  /* 10e18e5e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18e65 jae 0x10e18e7e */
  if (!C.cf) goto L_10e18e7e;
  /* 10e18e67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18e6a mov dl, byte ptr [ecx + 0x10e3fc81] */
  DL = (r8((uint32_t)(ECX + 0x10e3fc81)));
  /* 10e18e70 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10e18e73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e18e76 mov byte ptr [eax + 0x10e3fc81], dl */
  w8((uint32_t)(EAX + 0x10e3fc81), (DL));
  /* 10e18e7c jmp 0x10e18e55 */
  goto L_10e18e55;
L_10e18e7e:;
  /* 10e18e7e mov ecx, dword ptr [0x10e3fae4] */
  ECX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e18e84 push ecx */
  push32((uint32_t)(ECX));
  /* 10e18e85 call 0x10e18f80 */
  push32(0x10e18e8au); f_10e18f80();
  /* 10e18e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18e8d mov dword ptr [0x10e3fd84], eax */
  w32((uint32_t)(0x10e3fd84), (EAX));
  /* 10e18e92 mov dword ptr [0x10e3fb6c], 1 */
  w32((uint32_t)(0x10e3fb6c), (0x1u));
  /* 10e18e9c jmp 0x10e18ea8 */
  goto L_10e18ea8;
L_10e18e9e:;
  /* 10e18e9e mov dword ptr [0x10e3fb6c], 0 */
  w32((uint32_t)(0x10e3fb6c), (0x0u));
L_10e18ea8:;
  /* 10e18ea8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e18eaf jmp 0x10e18eba */
  goto L_10e18eba;
L_10e18eb1:;
  /* 10e18eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18eb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18eb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e18eba:;
  /* 10e18eba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18ebe jae 0x10e18ecf */
  if (!C.cf) goto L_10e18ecf;
  /* 10e18ec0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e18ec3 mov word ptr [eax*2 + 0x10e3fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10e3fb60), (0x0u));
  /* 10e18ecd jmp 0x10e18eb1 */
  goto L_10e18eb1;
L_10e18ecf:;
  /* 10e18ecf call 0x10e19080 */
  push32(0x10e18ed4u); f_10e19080();
  /* 10e18ed4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e18ed6 call 0x10e165a0 */
  push32(0x10e18edbu); f_10e165a0();
  /* 10e18edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18ede xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18ee0 jmp 0x10e18f10 */
  goto L_10e18f10;
L_10e18ee2:;
  /* 10e18ee2 cmp dword ptr [0x10e3e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18ee9 je 0x10e18f03 */
  if (C.zf) goto L_10e18f03;
  /* 10e18eeb call 0x10e19000 */
  push32(0x10e18ef0u); f_10e19000();
  /* 10e18ef0 call 0x10e19080 */
  push32(0x10e18ef5u); f_10e19080();
  /* 10e18ef5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e18ef7 call 0x10e165a0 */
  push32(0x10e18efcu); f_10e165a0();
  /* 10e18efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e18f01 jmp 0x10e18f10 */
  goto L_10e18f10;
L_10e18f03:;
  /* 10e18f03 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e18f05 call 0x10e165a0 */
  push32(0x10e18f0au); f_10e165a0();
  /* 10e18f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e18f0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e18f10:;
  /* 10e18f10 mov esp, ebp */
  ESP = (EBP);
  /* 10e18f12 pop ebp */
  EBP = (pop32());
  /* 10e18f13 ret  */
  ESPCHK(0x10e18bd0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10e18f20 (89 bytes, 21 insns) */
void f_10e18f20(void) {
  FTRACE(0x10e18f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e18f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e18f21 mov ebp, esp */
  EBP = (ESP);
  /* 10e18f23 mov dword ptr [0x10e3e5f8], 0 */
  w32((uint32_t)(0x10e3e5f8), (0x0u));
  /* 10e18f2d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18f31 jne 0x10e18f45 */
  if (!C.zf) goto L_10e18f45;
  /* 10e18f33 mov dword ptr [0x10e3e5f8], 1 */
  w32((uint32_t)(0x10e3e5f8), (0x1u));
  /* 10e18f3d call dword ptr [0x10e40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40310))), 0x10e18f43u);
  /* 10e18f43 jmp 0x10e18f77 */
  goto L_10e18f77;
L_10e18f45:;
  /* 10e18f45 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18f49 jne 0x10e18f5d */
  if (!C.zf) goto L_10e18f5d;
  /* 10e18f4b mov dword ptr [0x10e3e5f8], 1 */
  w32((uint32_t)(0x10e3e5f8), (0x1u));
  /* 10e18f55 call dword ptr [0x10e4030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4030c))), 0x10e18f5bu);
  /* 10e18f5b jmp 0x10e18f77 */
  goto L_10e18f77;
L_10e18f5d:;
  /* 10e18f5d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18f61 jne 0x10e18f74 */
  if (!C.zf) goto L_10e18f74;
  /* 10e18f63 mov dword ptr [0x10e3e5f8], 1 */
  w32((uint32_t)(0x10e3e5f8), (0x1u));
  /* 10e18f6d mov eax, dword ptr [0x10e3e618] */
  EAX = (r32((uint32_t)(0x10e3e618)));
  /* 10e18f72 jmp 0x10e18f77 */
  goto L_10e18f77;
L_10e18f74:;
  /* 10e18f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10e18f77:;
  /* 10e18f77 pop ebp */
  EBP = (pop32());
  /* 10e18f78 ret  */
  ESPCHK(0x10e18f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f80 @ 0x10e18f80 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10e18f80(void) {
  FTRACE(0x10e18f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e18f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e18f81 mov ebp, esp */
  EBP = (ESP);
  /* 10e18f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e18f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e18f87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e18f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18f8d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e18f93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e18f96 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e18f9a ja 0x10e18fca */
  if ((!C.cf&&!C.zf)) goto L_10e18fca;
  /* 10e18f9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e18f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e18fa1 mov dl, byte ptr [eax + 0x10e18fe4] */
  DL = (r8((uint32_t)(EAX + 0x10e18fe4)));
  /* 10e18fa7 jmp dword ptr [edx*4 + 0x10e18fd0] */
  switch (EDX) {
    case 0: goto L_10e18fae;
    case 1: goto L_10e18fb5;
    case 2: goto L_10e18fbc;
    case 3: goto L_10e18fc3;
    case 4: goto L_10e18fca;
    default: x86_unimpl("switch@0x10e18fa7 out of table"); return;
  }
L_10e18fae:;
  /* 10e18fae mov eax, 0x411 */
  EAX = (0x411u);
  /* 10e18fb3 jmp 0x10e18fcc */
  goto L_10e18fcc;
L_10e18fb5:;
  /* 10e18fb5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10e18fba jmp 0x10e18fcc */
  goto L_10e18fcc;
L_10e18fbc:;
  /* 10e18fbc mov eax, 0x412 */
  EAX = (0x412u);
  /* 10e18fc1 jmp 0x10e18fcc */
  goto L_10e18fcc;
L_10e18fc3:;
  /* 10e18fc3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10e18fc8 jmp 0x10e18fcc */
  goto L_10e18fcc;
L_10e18fca:;
  /* 10e18fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e18fcc:;
  /* 10e18fcc mov esp, ebp */
  ESP = (EBP);
  /* 10e18fce pop ebp */
  EBP = (pop32());
  /* 10e18fcf ret  */
  ESPCHK(0x10e18f80u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10e19000 (116 bytes, 29 insns) */
void f_10e19000(void) {
  FTRACE(0x10e19000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e19000 push ebp */
  push32((uint32_t)(EBP));
  /* 10e19001 mov ebp, esp */
  EBP = (ESP);
  /* 10e19003 push ecx */
  push32((uint32_t)(ECX));
  /* 10e19004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1900b jmp 0x10e19016 */
  goto L_10e19016;
L_10e1900d:;
  /* 10e1900d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e19016:;
  /* 10e19016 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1901d jge 0x10e1902b */
  if ((C.sf==C.of)) goto L_10e1902b;
  /* 10e1901f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19022 mov byte ptr [ecx + 0x10e3fc80], 0 */
  w8((uint32_t)(ECX + 0x10e3fc80), (0x0u));
  /* 10e19029 jmp 0x10e1900d */
  goto L_10e1900d;
L_10e1902b:;
  /* 10e1902b mov dword ptr [0x10e3fae4], 0 */
  w32((uint32_t)(0x10e3fae4), (0x0u));
  /* 10e19035 mov dword ptr [0x10e3fb6c], 0 */
  w32((uint32_t)(0x10e3fb6c), (0x0u));
  /* 10e1903f mov dword ptr [0x10e3fd84], 0 */
  w32((uint32_t)(0x10e3fd84), (0x0u));
  /* 10e19049 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e19050 jmp 0x10e1905b */
  goto L_10e1905b;
L_10e19052:;
  /* 10e19052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19055 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19058 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e1905b:;
  /* 10e1905b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1905f jge 0x10e19070 */
  if ((C.sf==C.of)) goto L_10e19070;
  /* 10e19061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19064 mov word ptr [eax*2 + 0x10e3fb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10e3fb60), (0x0u));
  /* 10e1906e jmp 0x10e19052 */
  goto L_10e19052;
L_10e19070:;
  /* 10e19070 mov esp, ebp */
  ESP = (EBP);
  /* 10e19072 pop ebp */
  EBP = (pop32());
  /* 10e19073 ret  */
  ESPCHK(0x10e19000u, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x10e19080 (770 bytes, 175 insns) */
void f_10e19080(void) {
  FTRACE(0x10e19080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e19080 push ebp */
  push32((uint32_t)(EBP));
  /* 10e19081 mov ebp, esp */
  EBP = (ESP);
  /* 10e19083 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19089 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10e1908f push eax */
  push32((uint32_t)(EAX));
  /* 10e19090 mov ecx, dword ptr [0x10e3fae4] */
  ECX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e19096 push ecx */
  push32((uint32_t)(ECX));
  /* 10e19097 call dword ptr [0x10e40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40308))), 0x10e1909du);
  /* 10e1909d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e190a0 jne 0x10e192b9 */
  if (!C.zf) goto L_10e192b9;
  /* 10e190a6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e190b0 jmp 0x10e190c1 */
  goto L_10e190c1;
L_10e190b2:;
  /* 10e190b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e190b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e190bb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10e190c1:;
  /* 10e190c1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e190cb jae 0x10e190e2 */
  if (!C.cf) goto L_10e190e2;
  /* 10e190cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e190d3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10e190d9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10e190e0 jmp 0x10e190b2 */
  goto L_10e190b2;
L_10e190e2:;
  /* 10e190e2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10e190e9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10e190ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e190f2 jmp 0x10e190fd */
  goto L_10e190fd;
L_10e190f4:;
  /* 10e190f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e190f7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e190fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e190fd:;
  /* 10e190fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19100 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e19102 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e19104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e19106 je 0x10e19148 */
  if (C.zf) goto L_10e19148;
  /* 10e19108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1910b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1910d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e1910f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10e19115 jmp 0x10e19126 */
  goto L_10e19126;
L_10e19117:;
  /* 10e19117 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1911d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19120 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10e19126:;
  /* 10e19126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19129 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1912b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e1912e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19134 ja 0x10e19146 */
  if ((!C.cf&&!C.zf)) goto L_10e19146;
  /* 10e19136 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1913c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10e19144 jmp 0x10e19117 */
  goto L_10e19117;
L_10e19146:;
  /* 10e19146 jmp 0x10e190f4 */
  goto L_10e190f4;
L_10e19148:;
  /* 10e19148 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1914a mov eax, dword ptr [0x10e3fd84] */
  EAX = (r32((uint32_t)(0x10e3fd84)));
  /* 10e1914f push eax */
  push32((uint32_t)(EAX));
  /* 10e19150 mov ecx, dword ptr [0x10e3fae4] */
  ECX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e19156 push ecx */
  push32((uint32_t)(ECX));
  /* 10e19157 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10e1915d push edx */
  push32((uint32_t)(EDX));
  /* 10e1915e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e19163 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10e19169 push eax */
  push32((uint32_t)(EAX));
  /* 10e1916a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1916c call 0x10e1ad30 */
  push32(0x10e19171u); f_10e1ad30();
  /* 10e19171 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19174 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e19176 mov ecx, dword ptr [0x10e3fae4] */
  ECX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e1917c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1917d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e19182 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10e19188 push edx */
  push32((uint32_t)(EDX));
  /* 10e19189 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e1918e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10e19194 push eax */
  push32((uint32_t)(EAX));
  /* 10e19195 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e1919a mov ecx, dword ptr [0x10e3fd84] */
  ECX = (r32((uint32_t)(0x10e3fd84)));
  /* 10e191a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e191a1 call 0x10e1aef0 */
  push32(0x10e191a6u); f_10e1aef0();
  /* 10e191a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e191a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e191ab mov edx, dword ptr [0x10e3fae4] */
  EDX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e191b1 push edx */
  push32((uint32_t)(EDX));
  /* 10e191b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e191b7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10e191bd push eax */
  push32((uint32_t)(EAX));
  /* 10e191be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e191c3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10e191c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e191ca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10e191cf mov edx, dword ptr [0x10e3fd84] */
  EDX = (r32((uint32_t)(0x10e3fd84)));
  /* 10e191d5 push edx */
  push32((uint32_t)(EDX));
  /* 10e191d6 call 0x10e1aef0 */
  push32(0x10e191dbu); f_10e1aef0();
  /* 10e191db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e191de mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e191e8 jmp 0x10e191f9 */
  goto L_10e191f9;
L_10e191ea:;
  /* 10e191ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e191f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e191f3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10e191f9:;
  /* 10e191f9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19203 jae 0x10e192b4 */
  if (!C.cf) goto L_10e192b4;
  /* 10e19209 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1920f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e19211 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10e19219 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1921c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1921e je 0x10e19256 */
  if (C.zf) goto L_10e19256;
  /* 10e19220 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19226 mov cl, byte ptr [eax + 0x10e3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10e3fc81)));
  /* 10e1922c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10e1922f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19235 mov byte ptr [edx + 0x10e3fc81], cl */
  w8((uint32_t)(EDX + 0x10e3fc81), (CL));
  /* 10e1923b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19241 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19247 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10e1924e mov byte ptr [eax + 0x10e3fb80], dl */
  w8((uint32_t)(EAX + 0x10e3fb80), (DL));
  /* 10e19254 jmp 0x10e192af */
  goto L_10e192af;
L_10e19256:;
  /* 10e19256 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1925c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1925e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10e19266 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e19269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1926b je 0x10e192a2 */
  if (C.zf) goto L_10e192a2;
  /* 10e1926d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19273 mov al, byte ptr [edx + 0x10e3fc81] */
  AL = (r8((uint32_t)(EDX + 0x10e3fc81)));
  /* 10e19279 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e1927b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19281 mov byte ptr [ecx + 0x10e3fc81], al */
  w8((uint32_t)(ECX + 0x10e3fc81), (AL));
  /* 10e19287 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1928d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19293 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10e1929a mov byte ptr [edx + 0x10e3fb80], cl */
  w8((uint32_t)(EDX + 0x10e3fb80), (CL));
  /* 10e192a0 jmp 0x10e192af */
  goto L_10e192af;
L_10e192a2:;
  /* 10e192a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e192a8 mov byte ptr [edx + 0x10e3fb80], 0 */
  w8((uint32_t)(EDX + 0x10e3fb80), (0x0u));
L_10e192af:;
  /* 10e192af jmp 0x10e191ea */
  goto L_10e191ea;
L_10e192b4:;
  /* 10e192b4 jmp 0x10e1937e */
  goto L_10e1937e;
L_10e192b9:;
  /* 10e192b9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e192c3 jmp 0x10e192d4 */
  goto L_10e192d4;
L_10e192c5:;
  /* 10e192c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e192cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e192ce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10e192d4:;
  /* 10e192d4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e192de jae 0x10e1937e */
  if (!C.cf) goto L_10e1937e;
  /* 10e192e4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e192eb jb 0x10e19328 */
  if (C.cf) goto L_10e19328;
  /* 10e192ed cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e192f4 ja 0x10e19328 */
  if ((!C.cf&&!C.zf)) goto L_10e19328;
  /* 10e192f6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e192fc mov dl, byte ptr [ecx + 0x10e3fc81] */
  DL = (r8((uint32_t)(ECX + 0x10e3fc81)));
  /* 10e19302 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10e19305 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1930b mov byte ptr [eax + 0x10e3fc81], dl */
  w8((uint32_t)(EAX + 0x10e3fc81), (DL));
  /* 10e19311 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19317 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1931a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19320 mov byte ptr [edx + 0x10e3fb80], cl */
  w8((uint32_t)(EDX + 0x10e3fb80), (CL));
  /* 10e19326 jmp 0x10e19379 */
  goto L_10e19379;
L_10e19328:;
  /* 10e19328 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1932f jb 0x10e1936c */
  if (C.cf) goto L_10e1936c;
  /* 10e19331 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19338 ja 0x10e1936c */
  if ((!C.cf&&!C.zf)) goto L_10e1936c;
  /* 10e1933a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19340 mov cl, byte ptr [eax + 0x10e3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10e3fc81)));
  /* 10e19346 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e19349 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1934f mov byte ptr [edx + 0x10e3fc81], cl */
  w8((uint32_t)(EDX + 0x10e3fc81), (CL));
  /* 10e19355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e1935b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1935e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19364 mov byte ptr [ecx + 0x10e3fb80], al */
  w8((uint32_t)(ECX + 0x10e3fb80), (AL));
  /* 10e1936a jmp 0x10e19379 */
  goto L_10e19379;
L_10e1936c:;
  /* 10e1936c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e19372 mov byte ptr [edx + 0x10e3fb80], 0 */
  w8((uint32_t)(EDX + 0x10e3fb80), (0x0u));
L_10e19379:;
  /* 10e19379 jmp 0x10e192c5 */
  goto L_10e192c5;
L_10e1937e:;
  /* 10e1937e mov esp, ebp */
  ESP = (EBP);
  /* 10e19380 pop ebp */
  EBP = (pop32());
  /* 10e19381 ret  */
  ESPCHK(0x10e19080u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x10e19390 (23 bytes, 9 insns) */
void f_10e19390(void) {
  FTRACE(0x10e19390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e19390 push ebp */
  push32((uint32_t)(EBP));
  /* 10e19391 mov ebp, esp */
  EBP = (ESP);
  /* 10e19393 cmp dword ptr [0x10e3fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1939a je 0x10e193a3 */
  if (C.zf) goto L_10e193a3;
  /* 10e1939c mov eax, dword ptr [0x10e3fae4] */
  EAX = (r32((uint32_t)(0x10e3fae4)));
  /* 10e193a1 jmp 0x10e193a5 */
  goto L_10e193a5;
L_10e193a3:;
  /* 10e193a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e193a5:;
  /* 10e193a5 pop ebp */
  EBP = (pop32());
  /* 10e193a6 ret  */
  ESPCHK(0x10e19390u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x10e193b0 (34 bytes, 10 insns) */
void f_10e193b0(void) {
  FTRACE(0x10e193b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e193b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e193b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e193b3 cmp dword ptr [0x10e3ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e193ba jne 0x10e193d0 */
  if (!C.zf) goto L_10e193d0;
  /* 10e193bc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10e193be call 0x10e18bd0 */
  push32(0x10e193c3u); f_10e18bd0();
  /* 10e193c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e193c6 mov dword ptr [0x10e3ff30], 1 */
  w32((uint32_t)(0x10e3ff30), (0x1u));
L_10e193d0:;
  /* 10e193d0 pop ebp */
  EBP = (pop32());
  /* 10e193d1 ret  */
  ESPCHK(0x10e193b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x10e193e0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10e193e0(void) {
  FTRACE(0x10e193e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e193e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e193e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e193e3 push edi */
  push32((uint32_t)(EDI));
  /* 10e193e4 push esi */
  push32((uint32_t)(ESI));
  /* 10e193e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e193e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e193eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e193ee mov eax, ecx */
  EAX = (ECX);
  /* 10e193f0 mov edx, ecx */
  EDX = (ECX);
  /* 10e193f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e193f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e193f6 jbe 0x10e19400 */
  if ((C.cf||C.zf)) goto L_10e19400;
  /* 10e193f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e193fa jb 0x10e19578 */
  if (C.cf) goto L_10e19578;
L_10e19400:;
  /* 10e19400 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e19406 jne 0x10e1941c */
  if (!C.zf) goto L_10e1941c;
  /* 10e19408 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1940b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1940e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19411 jb 0x10e1943c */
  if (C.cf) goto L_10e1943c;
  /* 10e19413 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e19415 jmp dword ptr [edx*4 + 0x10e19528] */
  switch (EDX) {
    case 0: goto L_10e19538;
    case 1: goto L_10e19540;
    case 2: goto L_10e1954c;
    case 3: goto L_10e19560;
    default: x86_unimpl("switch@0x10e19415 out of table"); return;
  }
L_10e1941c:;
  /* 10e1941c mov eax, edi */
  EAX = (EDI);
  /* 10e1941e mov edx, 3 */
  EDX = (0x3u);
  /* 10e19423 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19426 jb 0x10e19434 */
  if (C.cf) goto L_10e19434;
  /* 10e19428 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1942b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1942d jmp dword ptr [eax*4 + 0x10e19440] */
  switch (EAX) {
    case 1: goto L_10e19450;
    case 2: goto L_10e1947c;
    case 3: goto L_10e194a0;
    default: x86_unimpl("switch@0x10e1942d out of table"); return;
  }
L_10e19434:;
  /* 10e19434 jmp dword ptr [ecx*4 + 0x10e19538] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10e19538)))); return;
  /* 10e1943b nop  */
  /* nop */
L_10e1943c:;
  /* 10e1943c jmp dword ptr [ecx*4 + 0x10e194bc] */
  switch (ECX) {
    case 0: goto L_10e1951f;
    case 1: goto L_10e1950c;
    case 2: goto L_10e19504;
    case 3: goto L_10e194fc;
    case 4: goto L_10e194f4;
    case 5: goto L_10e194ec;
    case 6: goto L_10e194e4;
    case 7: goto L_10e194dc;
    default: x86_unimpl("switch@0x10e1943c out of table"); return;
  }
  /* 10e19443 nop  */
  /* nop */
L_10e19450:;
  /* 10e19450 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e19452 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e19454 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e19456 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e19459 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1945c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1945f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e19462 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e19465 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19468 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1946b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1946e jb 0x10e1943c */
  if (C.cf) goto L_10e1943c;
  /* 10e19470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e19472 jmp dword ptr [edx*4 + 0x10e19528] */
  switch (EDX) {
    case 0: goto L_10e19538;
    case 1: goto L_10e19540;
    case 2: goto L_10e1954c;
    case 3: goto L_10e19560;
    default: x86_unimpl("switch@0x10e19472 out of table"); return;
  }
  /* 10e19479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1947c:;
  /* 10e1947c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1947e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e19480 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e19482 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e19485 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e19488 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1948b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1948e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19491 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19494 jb 0x10e1943c */
  if (C.cf) goto L_10e1943c;
  /* 10e19496 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e19498 jmp dword ptr [edx*4 + 0x10e19528] */
  switch (EDX) {
    case 0: goto L_10e19538;
    case 1: goto L_10e19540;
    case 2: goto L_10e1954c;
    case 3: goto L_10e19560;
    default: x86_unimpl("switch@0x10e19498 out of table"); return;
  }
  /* 10e1949f nop  */
  /* nop */
L_10e194a0:;
  /* 10e194a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e194a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e194a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e194a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e194a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e194aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e194ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e194ae jb 0x10e1943c */
  if (C.cf) goto L_10e1943c;
  /* 10e194b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e194b2 jmp dword ptr [edx*4 + 0x10e19528] */
  switch (EDX) {
    case 0: goto L_10e19538;
    case 1: goto L_10e19540;
    case 2: goto L_10e1954c;
    case 3: goto L_10e19560;
    default: x86_unimpl("switch@0x10e194b2 out of table"); return;
  }
  /* 10e194b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e194dc:;
  /* 10e194dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10e194e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10e194e4:;
  /* 10e194e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10e194e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10e194ec:;
  /* 10e194ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10e194f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10e194f4:;
  /* 10e194f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10e194f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10e194fc:;
  /* 10e194fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10e19500 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10e19504:;
  /* 10e19504 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10e19508 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10e1950c:;
  /* 10e1950c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10e19510 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10e19514 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e1951b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1951d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e1951f:;
  /* 10e1951f jmp dword ptr [edx*4 + 0x10e19528] */
  switch (EDX) {
    case 0: goto L_10e19538;
    case 1: goto L_10e19540;
    case 2: goto L_10e1954c;
    case 3: goto L_10e19560;
    default: x86_unimpl("switch@0x10e1951f out of table"); return;
  }
  /* 10e19526 mov edi, edi */
  EDI = (EDI);
L_10e19538:;
  /* 10e19538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1953b pop esi */
  ESI = (pop32());
  /* 10e1953c pop edi */
  EDI = (pop32());
  /* 10e1953d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1953e ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
  /* 10e1953f nop  */
  /* nop */
L_10e19540:;
  /* 10e19540 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e19542 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e19544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e19547 pop esi */
  ESI = (pop32());
  /* 10e19548 pop edi */
  EDI = (pop32());
  /* 10e19549 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1954a ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
  /* 10e1954b nop  */
  /* nop */
L_10e1954c:;
  /* 10e1954c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1954e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e19550 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e19553 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e19556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e19559 pop esi */
  ESI = (pop32());
  /* 10e1955a pop edi */
  EDI = (pop32());
  /* 10e1955b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1955c ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
  /* 10e1955d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e19560:;
  /* 10e19560 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e19562 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e19564 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e19567 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1956a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1956d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e19570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e19573 pop esi */
  ESI = (pop32());
  /* 10e19574 pop edi */
  EDI = (pop32());
  /* 10e19575 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e19576 ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
  /* 10e19577 nop  */
  /* nop */
L_10e19578:;
  /* 10e19578 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10e1957c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10e19580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e19586 jne 0x10e195ac */
  if (!C.zf) goto L_10e195ac;
  /* 10e19588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1958b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1958e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19591 jb 0x10e195a0 */
  if (C.cf) goto L_10e195a0;
  /* 10e19593 std  */
  C.df=1;
  /* 10e19594 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e19596 cld  */
  C.df=0;
  /* 10e19597 jmp dword ptr [edx*4 + 0x10e196c0] */
  switch (EDX) {
    case 0: goto L_10e196d0;
    case 1: goto L_10e196d8;
    case 2: goto L_10e196e8;
    case 3: goto L_10e196fc;
    default: x86_unimpl("switch@0x10e19597 out of table"); return;
  }
  /* 10e1959e mov edi, edi */
  EDI = (EDI);
L_10e195a0:;
  /* 10e195a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e195a2 jmp dword ptr [ecx*4 + 0x10e19670] */
  switch (ECX) {
    case 0: goto L_10e196b7;
    default: x86_unimpl("switch@0x10e195a2 out of table"); return;
  }
  /* 10e195a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e195ac:;
  /* 10e195ac mov eax, edi */
  EAX = (EDI);
  /* 10e195ae mov edx, 3 */
  EDX = (0x3u);
  /* 10e195b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e195b6 jb 0x10e195c4 */
  if (C.cf) goto L_10e195c4;
  /* 10e195b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e195bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e195bd jmp dword ptr [eax*4 + 0x10e195c8] */
  switch (EAX) {
    case 1: goto L_10e195d8;
    case 2: goto L_10e195f8;
    case 3: goto L_10e19620;
    default: x86_unimpl("switch@0x10e195bd out of table"); return;
  }
L_10e195c4:;
  /* 10e195c4 jmp dword ptr [ecx*4 + 0x10e196c0] */
  switch (ECX) {
    case 0: goto L_10e196d0;
    case 1: goto L_10e196d8;
    case 2: goto L_10e196e8;
    case 3: goto L_10e196fc;
    default: x86_unimpl("switch@0x10e195c4 out of table"); return;
  }
  /* 10e195cb nop  */
  /* nop */
L_10e195d8:;
  /* 10e195d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e195db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e195dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e195e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10e195e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e195e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10e195e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e195e8 jb 0x10e195a0 */
  if (C.cf) goto L_10e195a0;
  /* 10e195ea std  */
  C.df=1;
  /* 10e195eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e195ed cld  */
  C.df=0;
  /* 10e195ee jmp dword ptr [edx*4 + 0x10e196c0] */
  switch (EDX) {
    case 0: goto L_10e196d0;
    case 1: goto L_10e196d8;
    case 2: goto L_10e196e8;
    case 3: goto L_10e196fc;
    default: x86_unimpl("switch@0x10e195ee out of table"); return;
  }
  /* 10e195f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e195f8:;
  /* 10e195f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e195fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e195fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e19600 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e19603 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e19606 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e19609 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1960c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1960f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19612 jb 0x10e195a0 */
  if (C.cf) goto L_10e195a0;
  /* 10e19614 std  */
  C.df=1;
  /* 10e19615 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e19617 cld  */
  C.df=0;
  /* 10e19618 jmp dword ptr [edx*4 + 0x10e196c0] */
  switch (EDX) {
    case 0: goto L_10e196d0;
    case 1: goto L_10e196d8;
    case 2: goto L_10e196e8;
    case 3: goto L_10e196fc;
    default: x86_unimpl("switch@0x10e19618 out of table"); return;
  }
  /* 10e1961f nop  */
  /* nop */
L_10e19620:;
  /* 10e19620 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e19623 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e19625 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e19628 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1962b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e1962e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e19631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e19634 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e19637 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1963a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1963d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19640 jb 0x10e195a0 */
  if (C.cf) goto L_10e195a0;
  /* 10e19646 std  */
  C.df=1;
  /* 10e19647 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e19649 cld  */
  C.df=0;
  /* 10e1964a jmp dword ptr [edx*4 + 0x10e196c0] */
  switch (EDX) {
    case 0: goto L_10e196d0;
    case 1: goto L_10e196d8;
    case 2: goto L_10e196e8;
    case 3: goto L_10e196fc;
    default: x86_unimpl("switch@0x10e1964a out of table"); return;
  }
  /* 10e19651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10e19654 je 0x10e195ec */
  if (C.zf) goto L_10e195ec;
  /* 10e19656 loope 0x10e19668 */
  x86_unimpl("loope @ 0x10e19656");
  /* 10e19658 jl 0x10e195f0 */
  if ((C.sf!=C.of)) goto L_10e195f0;
  /* 10e1965a loope 0x10e1966c */
  x86_unimpl("loope @ 0x10e1965a");
  /* 10e1965c test byte ptr [esi - 0x6973ef1f], dl */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x6973ef1f)))&(DL); fl_logic(_r,8); }
  /* 10e19662 loope 0x10e19674 */
  x86_unimpl("loope @ 0x10e19662");
  /* 10e19664 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10e19665 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 10e19666 loope 0x10e19678 */
  x86_unimpl("loope @ 0x10e19666");
  /* 10e19668 pushfd  */
  x86_unimpl("pushfd @ 0x10e19668");
  /* 10e19669 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 10e1966a loope 0x10e1967c */
  x86_unimpl("loope @ 0x10e1966a");
  /* 10e1966c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10e1966d xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 10e1966e loope 0x10e19680 */
  x86_unimpl("loope @ 0x10e1966e");
  /* 10e19674 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10e19678 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10e1967c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10e19680 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10e19684 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10e19688 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10e1968c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10e19690 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10e19694 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10e19698 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10e1969c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10e196a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10e196a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10e196a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10e196ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e196b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e196b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e196b7:;
  /* 10e196b7 jmp dword ptr [edx*4 + 0x10e196c0] */
  switch (EDX) {
    case 0: goto L_10e196d0;
    case 1: goto L_10e196d8;
    case 2: goto L_10e196e8;
    case 3: goto L_10e196fc;
    default: x86_unimpl("switch@0x10e196b7 out of table"); return;
  }
  /* 10e196be mov edi, edi */
  EDI = (EDI);
L_10e196d0:;
  /* 10e196d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e196d3 pop esi */
  ESI = (pop32());
  /* 10e196d4 pop edi */
  EDI = (pop32());
  /* 10e196d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e196d6 ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
  /* 10e196d7 nop  */
  /* nop */
L_10e196d8:;
  /* 10e196d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e196db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e196de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e196e1 pop esi */
  ESI = (pop32());
  /* 10e196e2 pop edi */
  EDI = (pop32());
  /* 10e196e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e196e4 ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
  /* 10e196e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e196e8:;
  /* 10e196e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e196eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e196ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e196f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e196f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e196f7 pop esi */
  ESI = (pop32());
  /* 10e196f8 pop edi */
  EDI = (pop32());
  /* 10e196f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e196fa ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
  /* 10e196fb nop  */
  /* nop */
L_10e196fc:;
  /* 10e196fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e196ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e19702 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e19705 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e19708 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e1970b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1970e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e19711 pop esi */
  ESI = (pop32());
  /* 10e19712 pop edi */
  EDI = (pop32());
  /* 10e19713 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e19714 ret  */
  ESPCHK(0x10e193e0u, _esp0);
  ESP += 4; return;
L_10e195ec: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10e195ec (unresolved jump table)"); return;
L_10e195f0: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10e195f0 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x10e19720 (104 bytes, 43 insns) */
void f_10e19720(void) {
  FTRACE(0x10e19720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e19720 push ebx */
  push32((uint32_t)(EBX));
  /* 10e19721 push esi */
  push32((uint32_t)(ESI));
  /* 10e19722 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10e19726 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e19728 jne 0x10e19742 */
  if (!C.zf) goto L_10e19742;
  /* 10e1972a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e1972e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e19732 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e19734 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e19736 mov ebx, eax */
  EBX = (EAX);
  /* 10e19738 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e1973c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e1973e mov edx, ebx */
  EDX = (EBX);
  /* 10e19740 jmp 0x10e19783 */
  goto L_10e19783;
L_10e19742:;
  /* 10e19742 mov ecx, eax */
  ECX = (EAX);
  /* 10e19744 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e19748 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e1974c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10e19750:;
  /* 10e19750 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e19752 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10e19754 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e19756 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10e19758 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1975a jne 0x10e19750 */
  if (!C.zf) goto L_10e19750;
  /* 10e1975c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e1975e mov esi, eax */
  ESI = (EAX);
  /* 10e19760 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e19764 mov ecx, eax */
  ECX = (EAX);
  /* 10e19766 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e1976a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e1976c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1976e jb 0x10e1977e */
  if (C.cf) goto L_10e1977e;
  /* 10e19770 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19774 ja 0x10e1977e */
  if ((!C.cf&&!C.zf)) goto L_10e1977e;
  /* 10e19776 jb 0x10e1977f */
  if (C.cf) goto L_10e1977f;
  /* 10e19778 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1977c jbe 0x10e1977f */
  if ((C.cf||C.zf)) goto L_10e1977f;
L_10e1977e:;
  /* 10e1977e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10e1977f:;
  /* 10e1977f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e19781 mov eax, esi */
  EAX = (ESI);
L_10e19783:;
  /* 10e19783 pop esi */
  ESI = (pop32());
  /* 10e19784 pop ebx */
  EBX = (pop32());
  /* 10e19785 ret 0x10 */
  ESPCHK(0x10e19720u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10e19790 (117 bytes, 44 insns) */
void f_10e19790(void) {
  FTRACE(0x10e19790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e19790 push ebx */
  push32((uint32_t)(EBX));
  /* 10e19791 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e19795 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e19797 jne 0x10e197b1 */
  if (!C.zf) goto L_10e197b1;
  /* 10e19799 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e1979d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e197a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e197a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e197a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e197a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e197ab mov eax, edx */
  EAX = (EDX);
  /* 10e197ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e197af jmp 0x10e19801 */
  goto L_10e19801;
L_10e197b1:;
  /* 10e197b1 mov ecx, eax */
  ECX = (EAX);
  /* 10e197b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e197b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e197bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10e197bf:;
  /* 10e197bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e197c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10e197c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e197c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10e197c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e197c9 jne 0x10e197bf */
  if (!C.zf) goto L_10e197bf;
  /* 10e197cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e197cd mov ecx, eax */
  ECX = (EAX);
  /* 10e197cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e197d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10e197d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e197d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e197da jb 0x10e197ea */
  if (C.cf) goto L_10e197ea;
  /* 10e197dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e197e0 ja 0x10e197ea */
  if ((!C.cf&&!C.zf)) goto L_10e197ea;
  /* 10e197e2 jb 0x10e197f2 */
  if (C.cf) goto L_10e197f2;
  /* 10e197e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e197e8 jbe 0x10e197f2 */
  if ((C.cf||C.zf)) goto L_10e197f2;
L_10e197ea:;
  /* 10e197ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e197ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e197f2:;
  /* 10e197f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e197f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e197fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e197fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e197fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e19801:;
  /* 10e19801 pop ebx */
  EBX = (pop32());
  /* 10e19802 ret 0x10 */
  ESPCHK(0x10e19790u, _esp0);
  ESP += 20; return;
}

/* FUN_10009810 @ 0x10e19810 (628 bytes, 214 insns) */
void f_10e19810(void) {
  FTRACE(0x10e19810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e19810 push ebp */
  push32((uint32_t)(EBP));
  /* 10e19811 mov ebp, esp */
  EBP = (ESP);
  /* 10e19813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19816 push ebx */
  push32((uint32_t)(EBX));
  /* 10e19817 push esi */
  push32((uint32_t)(ESI));
  /* 10e19818 push edi */
  push32((uint32_t)(EDI));
L_10e19819:;
  /* 10e19819 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1981d jne 0x10e1983d */
  if (!C.zf) goto L_10e1983d;
  /* 10e1981f push 0x10e39e98 */
  push32((uint32_t)(0x10e39e98u));
  /* 10e19824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e19826 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10e19828 push 0x10e39e8c */
  push32((uint32_t)(0x10e39e8cu));
  /* 10e1982d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1982f call 0x10e11bc0 */
  push32(0x10e19834u); f_10e11bc0();
  /* 10e19834 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19837 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1983a jne 0x10e1983d */
  if (!C.zf) goto L_10e1983d;
  /* 10e1983c int3  */
  x86_unimpl("int3 @ 0x10e1983c");
L_10e1983d:;
  /* 10e1983d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1983f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19841 jne 0x10e19819 */
  if (!C.zf) goto L_10e19819;
  /* 10e19843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19846 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e19849 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1984c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e1984f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e19852 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19855 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e19858 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1985e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e19860 je 0x10e1986f */
  if (C.zf) goto L_10e1986f;
  /* 10e19862 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19865 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e19868 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1986b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1986d je 0x10e19885 */
  if (C.zf) goto L_10e19885;
L_10e1986f:;
  /* 10e1986f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19872 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e19875 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e19877 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1987a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10e1987d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e19880 jmp 0x10e19a7d */
  goto L_10e19a7d;
L_10e19885:;
  /* 10e19885 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19888 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e1988b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1988e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19890 je 0x10e198dc */
  if (C.zf) goto L_10e198dc;
  /* 10e19892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19895 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e1989c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1989f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e198a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10e198a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e198a7 je 0x10e198c5 */
  if (C.zf) goto L_10e198c5;
  /* 10e198a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198af mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e198b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e198b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e198ba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10e198bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198c0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e198c3 jmp 0x10e198dc */
  goto L_10e198dc;
L_10e198c5:;
  /* 10e198c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198c8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e198cb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10e198ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198d1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e198d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e198d7 jmp 0x10e19a7d */
  goto L_10e19a7d;
L_10e198dc:;
  /* 10e198dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e198e2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e198e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198e8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e198eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198ee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e198f1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10e198f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198f7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e198fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e198fd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e19904 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1990b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1990e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e19911 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19914 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e19917 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1991d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1991f jne 0x10e1994f */
  if (!C.zf) goto L_10e1994f;
  /* 10e19921 cmp dword ptr [ebp - 8], 0x10e3d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10e3d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19928 je 0x10e19933 */
  if (C.zf) goto L_10e19933;
  /* 10e1992a cmp dword ptr [ebp - 8], 0x10e3d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10e3d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19931 jne 0x10e19943 */
  if (!C.zf) goto L_10e19943;
L_10e19933:;
  /* 10e19933 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e19936 push edx */
  push32((uint32_t)(EDX));
  /* 10e19937 call 0x10e1b780 */
  push32(0x10e1993cu); f_10e1b780();
  /* 10e1993c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1993f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19941 jne 0x10e1994f */
  if (!C.zf) goto L_10e1994f;
L_10e19943:;
  /* 10e19943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19946 push eax */
  push32((uint32_t)(EAX));
  /* 10e19947 call 0x10e1b6b0 */
  push32(0x10e1994cu); f_10e1b6b0();
  /* 10e1994c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1994f:;
  /* 10e1994f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19952 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e19955 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1995b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1995d je 0x10e19a3b */
  if (C.zf) goto L_10e19a3b;
L_10e19963:;
  /* 10e19963 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19966 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19969 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10e1996b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1996e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e19970 jge 0x10e19993 */
  if ((C.sf==C.of)) goto L_10e19993;
  /* 10e19972 push 0x10e39e4c */
  push32((uint32_t)(0x10e39e4cu));
  /* 10e19977 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e19979 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10e1997e push 0x10e39e8c */
  push32((uint32_t)(0x10e39e8cu));
  /* 10e19983 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e19985 call 0x10e11bc0 */
  push32(0x10e1998au); f_10e11bc0();
  /* 10e1998a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1998d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19990 jne 0x10e19993 */
  if (!C.zf) goto L_10e19993;
  /* 10e19992 int3  */
  x86_unimpl("int3 @ 0x10e19992");
L_10e19993:;
  /* 10e19993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e19995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19997 jne 0x10e19963 */
  if (!C.zf) goto L_10e19963;
  /* 10e19999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1999c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1999f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e199a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e199a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e199a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e199aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e199ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e199b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e199b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e199b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e199b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e199bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e199be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e199c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e199c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e199c8 jle 0x10e199e6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e199e6;
  /* 10e199ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e199cd push ecx */
  push32((uint32_t)(ECX));
  /* 10e199ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e199d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e199d4 push eax */
  push32((uint32_t)(EAX));
  /* 10e199d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e199d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e199d9 call 0x10e1b3a0 */
  push32(0x10e199deu); f_10e1b3a0();
  /* 10e199de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e199e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e199e4 jmp 0x10e19a2e */
  goto L_10e19a2e;
L_10e199e6:;
  /* 10e199e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e199ea je 0x10e19a09 */
  if (C.zf) goto L_10e19a09;
  /* 10e199ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e199ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e199f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e199f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e199f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e199fb mov ecx, dword ptr [edx*4 + 0x10e3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e19a02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19a04 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e19a07 jmp 0x10e19a10 */
  goto L_10e19a10;
L_10e19a09:;
  /* 10e19a09 mov dword ptr [ebp - 0x14], 0x10e3ca60 */
  w32((uint32_t)(EBP + -0x14), (0x10e3ca60u));
L_10e19a10:;
  /* 10e19a10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e19a13 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10e19a17 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e19a1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19a1c je 0x10e19a2e */
  if (C.zf) goto L_10e19a2e;
  /* 10e19a1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e19a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e19a22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e19a25 push ecx */
  push32((uint32_t)(ECX));
  /* 10e19a26 call 0x10e1b250 */
  push32(0x10e19a2bu); f_10e1b250();
  /* 10e19a2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e19a2e:;
  /* 10e19a2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19a31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e19a34 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e19a37 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e19a39 jmp 0x10e19a59 */
  goto L_10e19a59;
L_10e19a3b:;
  /* 10e19a3b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e19a42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19a45 push edx */
  push32((uint32_t)(EDX));
  /* 10e19a46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10e19a49 push eax */
  push32((uint32_t)(EAX));
  /* 10e19a4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e19a4d push ecx */
  push32((uint32_t)(ECX));
  /* 10e19a4e call 0x10e1b3a0 */
  push32(0x10e19a53u); f_10e1b3a0();
  /* 10e19a53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19a56 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e19a59:;
  /* 10e19a59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e19a5c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19a5f je 0x10e19a75 */
  if (C.zf) goto L_10e19a75;
  /* 10e19a61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19a64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e19a67 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e19a6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19a6d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e19a70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e19a73 jmp 0x10e19a7d */
  goto L_10e19a7d;
L_10e19a75:;
  /* 10e19a75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e19a78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10e19a7d:;
  /* 10e19a7d pop edi */
  EDI = (pop32());
  /* 10e19a7e pop esi */
  ESI = (pop32());
  /* 10e19a7f pop ebx */
  EBX = (pop32());
  /* 10e19a80 mov esp, ebp */
  ESP = (EBP);
  /* 10e19a82 pop ebp */
  EBP = (pop32());
  /* 10e19a83 ret  */
  ESPCHK(0x10e19810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a90 @ 0x10e19a90 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10e19a90(void) {
  FTRACE(0x10e19a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e19a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e19a91 mov ebp, esp */
  EBP = (ESP);
  /* 10e19a93 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19a99 push ebx */
  push32((uint32_t)(EBX));
  /* 10e19a9a push esi */
  push32((uint32_t)(ESI));
  /* 10e19a9b push edi */
  push32((uint32_t)(EDI));
  /* 10e19a9c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e19aa3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10e19aad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10e19ab4:;
  /* 10e19ab4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19ab7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e19ab9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10e19abc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19ac0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19ac3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19ac6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e19ac9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e19acb je 0x10e1a6a7 */
  if (C.zf) goto L_10e1a6a7;
  /* 10e19ad1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19ad8 jl 0x10e1a6a7 */
  if ((C.sf!=C.of)) goto L_10e1a6a7;
  /* 10e19ade movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19ae2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19ae5 jl 0x10e19b06 */
  if ((C.sf!=C.of)) goto L_10e19b06;
  /* 10e19ae7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19aeb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19aee jg 0x10e19b06 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e19b06;
  /* 10e19af0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19af4 movsx ecx, byte ptr [eax + 0x10e39e84] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10e39e84))));
  /* 10e19afb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10e19afe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10e19b04 jmp 0x10e19b10 */
  goto L_10e19b10;
L_10e19b06:;
  /* 10e19b06 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10e19b10:;
  /* 10e19b10 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10e19b16 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e19b19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e19b1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e19b1f movsx edx, byte ptr [ecx + eax*8 + 0x10e39ea4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10e39ea4))));
  /* 10e19b27 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e19b2a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e19b2d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e19b30 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10e19b36 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19b3d ja 0x10e1a6a2 */
  if ((!C.cf&&!C.zf)) goto L_10e1a6a2;
  /* 10e19b43 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10e19b49 jmp dword ptr [ecx*4 + 0x10e1a6b4] */
  switch (ECX) {
    case 0: goto L_10e19b50;
    case 1: goto L_10e19bea;
    case 2: goto L_10e19c2c;
    case 3: goto L_10e19c9b;
    case 4: goto L_10e19cf3;
    case 5: goto L_10e19d02;
    case 6: goto L_10e19d4e;
    case 7: goto L_10e19de1;
    case 8: goto L_10e19c78;
    case 9: goto L_10e19c83;
    case 10: goto L_10e19c6e;
    case 11: goto L_10e19c63;
    case 12: goto L_10e19c8e;
    case 13: goto L_10e19c96;
    default: x86_unimpl("switch@0x10e19b49 out of table"); return;
  }
L_10e19b50:;
  /* 10e19b50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e19b57 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e19b5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e19b60 mov eax, dword ptr [0x10e3cc98] */
  EAX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e19b65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e19b67 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e19b6b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e19b71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e19b73 je 0x10e19bcd */
  if (C.zf) goto L_10e19bcd;
  /* 10e19b75 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10e19b7b push edx */
  push32((uint32_t)(EDX));
  /* 10e19b7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e19b7f push eax */
  push32((uint32_t)(EAX));
  /* 10e19b80 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19b84 push ecx */
  push32((uint32_t)(ECX));
  /* 10e19b85 call 0x10e1a7c0 */
  push32(0x10e19b8au); f_10e1a7c0();
  /* 10e19b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19b8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19b90 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e19b92 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10e19b95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19b98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19b9b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e19b9e:;
  /* 10e19b9e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19ba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e19ba4 jne 0x10e19bc7 */
  if (!C.zf) goto L_10e19bc7;
  /* 10e19ba6 push 0x10e39f24 */
  push32((uint32_t)(0x10e39f24u));
  /* 10e19bab push 0 */
  push32((uint32_t)(0x0u));
  /* 10e19bad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10e19bb2 push 0x10e39f18 */
  push32((uint32_t)(0x10e39f18u));
  /* 10e19bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e19bb9 call 0x10e11bc0 */
  push32(0x10e19bbeu); f_10e11bc0();
  /* 10e19bbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19bc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19bc4 jne 0x10e19bc7 */
  if (!C.zf) goto L_10e19bc7;
  /* 10e19bc6 int3  */
  x86_unimpl("int3 @ 0x10e19bc6");
L_10e19bc7:;
  /* 10e19bc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e19bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19bcb jne 0x10e19b9e */
  if (!C.zf) goto L_10e19b9e;
L_10e19bcd:;
  /* 10e19bcd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10e19bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e19bd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e19bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10e19bd8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19bdc push eax */
  push32((uint32_t)(EAX));
  /* 10e19bdd call 0x10e1a7c0 */
  push32(0x10e19be2u); f_10e1a7c0();
  /* 10e19be2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19be5 jmp 0x10e1a6a2 */
  goto L_10e1a6a2;
L_10e19bea:;
  /* 10e19bea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e19bf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e19bf4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10e19bfa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10e19c00 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10e19c06 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e19c0c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e19c0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e19c16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10e19c20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e19c27 jmp 0x10e1a6a2 */
  goto L_10e1a6a2;
L_10e19c2c:;
  /* 10e19c2c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19c30 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10e19c36 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10e19c3c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19c3f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10e19c45 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19c4c ja 0x10e19c96 */
  if ((!C.cf&&!C.zf)) goto L_10e19c96;
  /* 10e19c4e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10e19c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e19c56 mov al, byte ptr [ecx + 0x10e1a6ec] */
  AL = (r8((uint32_t)(ECX + 0x10e1a6ec)));
  /* 10e19c5c jmp dword ptr [eax*4 + 0x10e1a6d4] */
  switch (EAX) {
    case 0: goto L_10e19c78;
    case 1: goto L_10e19c83;
    case 2: goto L_10e19c6e;
    case 3: goto L_10e19c63;
    case 4: goto L_10e19c8e;
    case 5: goto L_10e19c96;
    default: x86_unimpl("switch@0x10e19c5c out of table"); return;
  }
L_10e19c63:;
  /* 10e19c63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19c66 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e19c69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e19c6c jmp 0x10e19c96 */
  goto L_10e19c96;
L_10e19c6e:;
  /* 10e19c6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19c71 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10e19c73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e19c76 jmp 0x10e19c96 */
  goto L_10e19c96;
L_10e19c78:;
  /* 10e19c78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19c7b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e19c7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e19c81 jmp 0x10e19c96 */
  goto L_10e19c96;
L_10e19c83:;
  /* 10e19c83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19c86 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10e19c89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e19c8c jmp 0x10e19c96 */
  goto L_10e19c96;
L_10e19c8e:;
  /* 10e19c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19c91 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10e19c93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e19c96:;
  /* 10e19c96 jmp 0x10e1a6a2 */
  goto L_10e1a6a2;
L_10e19c9b:;
  /* 10e19c9b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19c9f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19ca2 jne 0x10e19cd7 */
  if (!C.zf) goto L_10e19cd7;
  /* 10e19ca4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e19ca7 push edx */
  push32((uint32_t)(EDX));
  /* 10e19ca8 call 0x10e1a8d0 */
  push32(0x10e19cadu); f_10e1a8d0();
  /* 10e19cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19cb0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10e19cb6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19cbd jge 0x10e19cd5 */
  if ((C.sf==C.of)) goto L_10e19cd5;
  /* 10e19cbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19cc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e19cc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e19cc7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e19ccd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e19ccf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10e19cd5:;
  /* 10e19cd5 jmp 0x10e19cee */
  goto L_10e19cee;
L_10e19cd7:;
  /* 10e19cd7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e19cdd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e19ce0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19ce4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10e19ce8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10e19cee:;
  /* 10e19cee jmp 0x10e1a6a2 */
  goto L_10e1a6a2;
L_10e19cf3:;
  /* 10e19cf3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10e19cfd jmp 0x10e1a6a2 */
  goto L_10e1a6a2;
L_10e19d02:;
  /* 10e19d02 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19d06 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19d09 jne 0x10e19d32 */
  if (!C.zf) goto L_10e19d32;
  /* 10e19d0b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e19d0e push eax */
  push32((uint32_t)(EAX));
  /* 10e19d0f call 0x10e1a8d0 */
  push32(0x10e19d14u); f_10e1a8d0();
  /* 10e19d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19d17 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10e19d1d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19d24 jge 0x10e19d30 */
  if ((C.sf==C.of)) goto L_10e19d30;
  /* 10e19d26 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10e19d30:;
  /* 10e19d30 jmp 0x10e19d49 */
  goto L_10e19d49;
L_10e19d32:;
  /* 10e19d32 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e19d38 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e19d3b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19d3f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e19d43 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10e19d49:;
  /* 10e19d49 jmp 0x10e1a6a2 */
  goto L_10e1a6a2;
L_10e19d4e:;
  /* 10e19d4e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19d52 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10e19d58 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10e19d5e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19d61 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10e19d67 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19d6e ja 0x10e19ddc */
  if ((!C.cf&&!C.zf)) goto L_10e19ddc;
  /* 10e19d70 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10e19d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e19d78 mov al, byte ptr [ecx + 0x10e1a711] */
  AL = (r8((uint32_t)(ECX + 0x10e1a711)));
  /* 10e19d7e jmp dword ptr [eax*4 + 0x10e1a6fd] */
  switch (EAX) {
    case 0: goto L_10e19d90;
    case 1: goto L_10e19dc9;
    case 2: goto L_10e19d85;
    case 3: goto L_10e19dd3;
    case 4: goto L_10e19ddc;
    default: x86_unimpl("switch@0x10e19d7e out of table"); return;
  }
L_10e19d85:;
  /* 10e19d85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19d88 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10e19d8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e19d8e jmp 0x10e19ddc */
  goto L_10e19ddc;
L_10e19d90:;
  /* 10e19d90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19d93 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e19d96 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19d99 jne 0x10e19dbb */
  if (!C.zf) goto L_10e19dbb;
  /* 10e19d9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19d9e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e19da2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19da5 jne 0x10e19dbb */
  if (!C.zf) goto L_10e19dbb;
  /* 10e19da7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e19daa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19dad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e19db0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19db3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e19db6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e19db9 jmp 0x10e19dc7 */
  goto L_10e19dc7;
L_10e19dbb:;
  /* 10e19dbb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10e19dc2 jmp 0x10e19b50 */
  goto L_10e19b50;
L_10e19dc7:;
  /* 10e19dc7 jmp 0x10e19ddc */
  goto L_10e19ddc;
L_10e19dc9:;
  /* 10e19dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19dcc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e19dce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e19dd1 jmp 0x10e19ddc */
  goto L_10e19ddc;
L_10e19dd3:;
  /* 10e19dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19dd6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e19dd9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e19ddc:;
  /* 10e19ddc jmp 0x10e1a6a2 */
  goto L_10e1a6a2;
L_10e19de1:;
  /* 10e19de1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e19de5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10e19deb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10e19df1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19df4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10e19dfa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19e01 ja 0x10e1a4c7 */
  if ((!C.cf&&!C.zf)) goto L_10e1a4c7;
  /* 10e19e07 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10e19e0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e19e0f mov cl, byte ptr [edx + 0x10e1a77c] */
  CL = (r8((uint32_t)(EDX + 0x10e1a77c)));
  /* 10e19e15 jmp dword ptr [ecx*4 + 0x10e1a740] */
  switch (ECX) {
    case 0: goto L_10e19e1c;
    case 1: goto L_10e1a0b0;
    case 2: goto L_10e19f40;
    case 3: goto L_10e1a1e9;
    case 4: goto L_10e19eab;
    case 5: goto L_10e19e31;
    case 6: goto L_10e1a1bb;
    case 7: goto L_10e1a0c0;
    case 8: goto L_10e1a065;
    case 9: goto L_10e1a235;
    case 10: goto L_10e1a1df;
    case 11: goto L_10e19f56;
    case 12: goto L_10e1a1d3;
    case 13: goto L_10e1a1f5;
    case 14: goto L_10e1a4c7;
    default: x86_unimpl("switch@0x10e19e15 out of table"); return;
  }
L_10e19e1c:;
  /* 10e19e1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19e1f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10e19e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19e26 jne 0x10e19e31 */
  if (!C.zf) goto L_10e19e31;
  /* 10e19e28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19e2b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e19e2e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e19e31:;
  /* 10e19e31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19e34 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10e19e3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e19e3c je 0x10e19e77 */
  if (C.zf) goto L_10e19e77;
  /* 10e19e3e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e19e41 push eax */
  push32((uint32_t)(EAX));
  /* 10e19e42 call 0x10e1a910 */
  push32(0x10e19e47u); f_10e1a910();
  /* 10e19e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19e4a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10e19e4e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10e19e52 push ecx */
  push32((uint32_t)(ECX));
  /* 10e19e53 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10e19e59 push edx */
  push32((uint32_t)(EDX));
  /* 10e19e5a call 0x10e1b9f0 */
  push32(0x10e19e5fu); f_10e1b9f0();
  /* 10e19e5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19e62 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e19e65 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19e69 jge 0x10e19e75 */
  if ((C.sf==C.of)) goto L_10e19e75;
  /* 10e19e6b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10e19e75:;
  /* 10e19e75 jmp 0x10e19e9d */
  goto L_10e19e9d;
L_10e19e77:;
  /* 10e19e77 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e19e7a push eax */
  push32((uint32_t)(EAX));
  /* 10e19e7b call 0x10e1a8d0 */
  push32(0x10e19e80u); f_10e1a8d0();
  /* 10e19e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19e83 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10e19e8a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10e19e90 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10e19e96 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10e19e9d:;
  /* 10e19e9d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10e19ea3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e19ea6 jmp 0x10e1a4c7 */
  goto L_10e1a4c7;
L_10e19eab:;
  /* 10e19eab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e19eae push eax */
  push32((uint32_t)(EAX));
  /* 10e19eaf call 0x10e1a8d0 */
  push32(0x10e19eb4u); f_10e1a8d0();
  /* 10e19eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19eb7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10e19ebd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19ec4 je 0x10e19ed2 */
  if (C.zf) goto L_10e19ed2;
  /* 10e19ec6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e19ecc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19ed0 jne 0x10e19eec */
  if (!C.zf) goto L_10e19eec;
L_10e19ed2:;
  /* 10e19ed2 mov edx, dword ptr [0x10e3cfb0] */
  EDX = (r32((uint32_t)(0x10e3cfb0)));
  /* 10e19ed8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e19edb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e19ede push eax */
  push32((uint32_t)(EAX));
  /* 10e19edf call 0x10e15930 */
  push32(0x10e19ee4u); f_10e15930();
  /* 10e19ee4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19ee7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e19eea jmp 0x10e19f3b */
  goto L_10e19f3b;
L_10e19eec:;
  /* 10e19eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19eef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10e19ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e19ef7 je 0x10e19f1c */
  if (C.zf) goto L_10e19f1c;
  /* 10e19ef9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e19eff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e19f02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e19f05 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e19f0b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10e19f0e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e19f10 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e19f13 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10e19f1a jmp 0x10e19f3b */
  goto L_10e19f3b;
L_10e19f1c:;
  /* 10e19f1c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e19f23 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e19f29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e19f2c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e19f2f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e19f35 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10e19f38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e19f3b:;
  /* 10e19f3b jmp 0x10e1a4c7 */
  goto L_10e1a4c7;
L_10e19f40:;
  /* 10e19f40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19f43 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10e19f49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e19f4b jne 0x10e19f56 */
  if (!C.zf) goto L_10e19f56;
  /* 10e19f4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19f50 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e19f53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e19f56:;
  /* 10e19f56 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19f5d jne 0x10e19f6b */
  if (!C.zf) goto L_10e19f6b;
  /* 10e19f5f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10e19f69 jmp 0x10e19f77 */
  goto L_10e19f77;
L_10e19f6b:;
  /* 10e19f6b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e19f71 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10e19f77:;
  /* 10e19f77 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10e19f7d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10e19f83 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e19f86 push edx */
  push32((uint32_t)(EDX));
  /* 10e19f87 call 0x10e1a8d0 */
  push32(0x10e19f8cu); f_10e1a8d0();
  /* 10e19f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19f8f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e19f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e19f95 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10e19f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19f9c je 0x10e1a006 */
  if (C.zf) goto L_10e1a006;
  /* 10e19f9e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e19fa2 jne 0x10e19fad */
  if (!C.zf) goto L_10e19fad;
  /* 10e19fa4 mov ecx, dword ptr [0x10e3cfb4] */
  ECX = (r32((uint32_t)(0x10e3cfb4)));
  /* 10e19faa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e19fad:;
  /* 10e19fad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10e19fb4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e19fb7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10e19fbd:;
  /* 10e19fbd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e19fc3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e19fc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19fcc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10e19fd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19fd4 je 0x10e19ff6 */
  if (C.zf) goto L_10e19ff6;
  /* 10e19fd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e19fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e19fde mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10e19fe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e19fe3 je 0x10e19ff6 */
  if (C.zf) goto L_10e19ff6;
  /* 10e19fe5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e19feb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e19fee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10e19ff4 jmp 0x10e19fbd */
  goto L_10e19fbd;
L_10e19ff6:;
  /* 10e19ff6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e19ffc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e19fff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e1a001 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e1a004 jmp 0x10e1a060 */
  goto L_10e1a060;
L_10e1a006:;
  /* 10e1a006 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a00a jne 0x10e1a014 */
  if (!C.zf) goto L_10e1a014;
  /* 10e1a00c mov eax, dword ptr [0x10e3cfb0] */
  EAX = (r32((uint32_t)(0x10e3cfb0)));
  /* 10e1a011 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10e1a014:;
  /* 10e1a014 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a017 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10e1a01d:;
  /* 10e1a01d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e1a023 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e1a029 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a02c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10e1a032 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a034 je 0x10e1a054 */
  if (C.zf) goto L_10e1a054;
  /* 10e1a036 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e1a03c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1a03f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a041 je 0x10e1a054 */
  if (C.zf) goto L_10e1a054;
  /* 10e1a043 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e1a049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a04c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10e1a052 jmp 0x10e1a01d */
  goto L_10e1a01d;
L_10e1a054:;
  /* 10e1a054 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e1a05a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a05d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10e1a060:;
  /* 10e1a060 jmp 0x10e1a4c7 */
  goto L_10e1a4c7;
L_10e1a065:;
  /* 10e1a065 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e1a068 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a069 call 0x10e1a8d0 */
  push32(0x10e1a06eu); f_10e1a8d0();
  /* 10e1a06e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a071 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10e1a077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a07a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a07f je 0x10e1a093 */
  if (C.zf) goto L_10e1a093;
  /* 10e1a081 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10e1a087 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10e1a08e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10e1a091 jmp 0x10e1a0a1 */
  goto L_10e1a0a1;
L_10e1a093:;
  /* 10e1a093 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10e1a099 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10e1a09f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10e1a0a1:;
  /* 10e1a0a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10e1a0ab jmp 0x10e1a4c7 */
  goto L_10e1a4c7;
L_10e1a0b0:;
  /* 10e1a0b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e1a0b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10e1a0ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e1a0bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10e1a0c0:;
  /* 10e1a0c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a0c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10e1a0c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1a0c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10e1a0ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e1a0d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a0d8 jge 0x10e1a0e6 */
  if ((C.sf==C.of)) goto L_10e1a0e6;
  /* 10e1a0da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10e1a0e4 jmp 0x10e1a102 */
  goto L_10e1a102;
L_10e1a0e6:;
  /* 10e1a0e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a0ed jne 0x10e1a102 */
  if (!C.zf) goto L_10e1a102;
  /* 10e1a0ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e1a0f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a0f6 jne 0x10e1a102 */
  if (!C.zf) goto L_10e1a102;
  /* 10e1a0f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10e1a102:;
  /* 10e1a102 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a105 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a108 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10e1a10b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a10e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a111 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1a113 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1a116 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10e1a11c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10e1a122 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1a125 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a126 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e1a12c push edx */
  push32((uint32_t)(EDX));
  /* 10e1a12d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e1a131 push eax */
  push32((uint32_t)(EAX));
  /* 10e1a132 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a135 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a136 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10e1a13c push edx */
  push32((uint32_t)(EDX));
  /* 10e1a13d call dword ptr [0x10e3d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3d3a0))), 0x10e1a143u);
  /* 10e1a143 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a149 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a14e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a150 je 0x10e1a168 */
  if (C.zf) goto L_10e1a168;
  /* 10e1a152 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a159 jne 0x10e1a168 */
  if (!C.zf) goto L_10e1a168;
  /* 10e1a15b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a15e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a15f call dword ptr [0x10e3d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3d3ac))), 0x10e1a165u);
  /* 10e1a165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1a168:;
  /* 10e1a168 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e1a16c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a16f jne 0x10e1a18a */
  if (!C.zf) goto L_10e1a18a;
  /* 10e1a171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a174 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a17b jne 0x10e1a18a */
  if (!C.zf) goto L_10e1a18a;
  /* 10e1a17d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a180 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a181 call dword ptr [0x10e3d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3d3a4))), 0x10e1a187u);
  /* 10e1a187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1a18a:;
  /* 10e1a18a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a18d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1a190 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a193 jne 0x10e1a1a7 */
  if (!C.zf) goto L_10e1a1a7;
  /* 10e1a195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a198 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e1a19b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1a19e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a1a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a1a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e1a1a7:;
  /* 10e1a1a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a1aa push eax */
  push32((uint32_t)(EAX));
  /* 10e1a1ab call 0x10e15930 */
  push32(0x10e1a1b0u); f_10e15930();
  /* 10e1a1b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a1b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e1a1b6 jmp 0x10e1a4c7 */
  goto L_10e1a4c7;
L_10e1a1bb:;
  /* 10e1a1bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a1be or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a1c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1a1c4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10e1a1ce jmp 0x10e1a255 */
  goto L_10e1a255;
L_10e1a1d3:;
  /* 10e1a1d3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10e1a1dd jmp 0x10e1a255 */
  goto L_10e1a255;
L_10e1a1df:;
  /* 10e1a1df mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10e1a1e9:;
  /* 10e1a1e9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10e1a1f3 jmp 0x10e1a1ff */
  goto L_10e1a1ff;
L_10e1a1f5:;
  /* 10e1a1f5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10e1a1ff:;
  /* 10e1a1ff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10e1a209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a20c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a214 je 0x10e1a233 */
  if (C.zf) goto L_10e1a233;
  /* 10e1a216 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10e1a21d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10e1a223 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a226 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10e1a22c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10e1a233:;
  /* 10e1a233 jmp 0x10e1a255 */
  goto L_10e1a255;
L_10e1a235:;
  /* 10e1a235 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10e1a23f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a242 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1a24a je 0x10e1a255 */
  if (C.zf) goto L_10e1a255;
  /* 10e1a24c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a24f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e1a252 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e1a255:;
  /* 10e1a255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a258 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a25f je 0x10e1a27e */
  if (C.zf) goto L_10e1a27e;
  /* 10e1a261 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e1a264 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a265 call 0x10e1a8f0 */
  push32(0x10e1a26au); f_10e1a8f0();
  /* 10e1a26a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a26d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e1a273 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e1a279 jmp 0x10e1a30f */
  goto L_10e1a30f;
L_10e1a27e:;
  /* 10e1a27e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a281 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a284 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a286 je 0x10e1a2d0 */
  if (C.zf) goto L_10e1a2d0;
  /* 10e1a288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a28b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a28e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a290 je 0x10e1a2b0 */
  if (C.zf) goto L_10e1a2b0;
  /* 10e1a292 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e1a295 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a296 call 0x10e1a8d0 */
  push32(0x10e1a29bu); f_10e1a8d0();
  /* 10e1a29b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a29e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10e1a2a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1a2a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e1a2a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e1a2ae jmp 0x10e1a2ce */
  goto L_10e1a2ce;
L_10e1a2b0:;
  /* 10e1a2b0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e1a2b3 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a2b4 call 0x10e1a8d0 */
  push32(0x10e1a2b9u); f_10e1a8d0();
  /* 10e1a2b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a2bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a2c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1a2c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e1a2c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10e1a2ce:;
  /* 10e1a2ce jmp 0x10e1a30f */
  goto L_10e1a30f;
L_10e1a2d0:;
  /* 10e1a2d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a2d3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a2d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a2d8 je 0x10e1a2f5 */
  if (C.zf) goto L_10e1a2f5;
  /* 10e1a2da lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e1a2dd push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a2de call 0x10e1a8d0 */
  push32(0x10e1a2e3u); f_10e1a8d0();
  /* 10e1a2e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a2e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1a2e7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e1a2ed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e1a2f3 jmp 0x10e1a30f */
  goto L_10e1a30f;
L_10e1a2f5:;
  /* 10e1a2f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e1a2f8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a2f9 call 0x10e1a8d0 */
  push32(0x10e1a2feu); f_10e1a8d0();
  /* 10e1a2fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a301 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a303 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e1a309 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10e1a30f:;
  /* 10e1a30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a312 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a315 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a317 je 0x10e1a357 */
  if (C.zf) goto L_10e1a357;
  /* 10e1a319 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a320 jg 0x10e1a357 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1a357;
  /* 10e1a322 jl 0x10e1a32d */
  if ((C.sf!=C.of)) goto L_10e1a32d;
  /* 10e1a324 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a32b jae 0x10e1a357 */
  if (!C.cf) goto L_10e1a357;
L_10e1a32d:;
  /* 10e1a32d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10e1a333 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1a335 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10e1a33b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a33e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1a340 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e1a346 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10e1a34c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a34f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e1a352 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1a355 jmp 0x10e1a36f */
  goto L_10e1a36f;
L_10e1a357:;
  /* 10e1a357 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10e1a35d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e1a363 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10e1a369 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10e1a36f:;
  /* 10e1a36f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a372 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a378 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a37a jne 0x10e1a397 */
  if (!C.zf) goto L_10e1a397;
  /* 10e1a37c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e1a382 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e1a388 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a38b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e1a391 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10e1a397:;
  /* 10e1a397 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a39e jge 0x10e1a3ac */
  if ((C.sf==C.of)) goto L_10e1a3ac;
  /* 10e1a3a0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10e1a3aa jmp 0x10e1a3b5 */
  goto L_10e1a3b5;
L_10e1a3ac:;
  /* 10e1a3ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a3af and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a3b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e1a3b5:;
  /* 10e1a3b5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e1a3bb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a3c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a3c3 jne 0x10e1a3cc */
  if (!C.zf) goto L_10e1a3cc;
  /* 10e1a3c5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e1a3cc:;
  /* 10e1a3cc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10e1a3cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e1a3d2:;
  /* 10e1a3d2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e1a3d8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e1a3de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a3e1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10e1a3e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a3e9 jg 0x10e1a3ff */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1a3ff;
  /* 10e1a3eb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e1a3f1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a3f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1a3f9 je 0x10e1a480 */
  if (C.zf) goto L_10e1a480;
L_10e1a3ff:;
  /* 10e1a3ff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10e1a405 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1a406 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a407 push eax */
  push32((uint32_t)(EAX));
  /* 10e1a408 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e1a40e push edx */
  push32((uint32_t)(EDX));
  /* 10e1a40f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e1a415 push eax */
  push32((uint32_t)(EAX));
  /* 10e1a416 call 0x10e19790 */
  push32(0x10e1a41bu); f_10e19790();
  /* 10e1a41b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a41e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10e1a424 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10e1a42a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1a42b push edx */
  push32((uint32_t)(EDX));
  /* 10e1a42c push eax */
  push32((uint32_t)(EAX));
  /* 10e1a42d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e1a433 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a434 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e1a43a push edx */
  push32((uint32_t)(EDX));
  /* 10e1a43b call 0x10e19720 */
  push32(0x10e1a440u); f_10e19720();
  /* 10e1a440 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e1a446 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10e1a44c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a453 jle 0x10e1a467 */
  if ((C.zf||C.sf!=C.of)) goto L_10e1a467;
  /* 10e1a455 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10e1a45b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a461 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10e1a467:;
  /* 10e1a467 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a46a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10e1a470 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10e1a472 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a475 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a478 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e1a47b jmp 0x10e1a3d2 */
  goto L_10e1a3d2;
L_10e1a480:;
  /* 10e1a480 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10e1a483 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a486 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e1a489 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a48c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a48f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e1a492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a495 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a49a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a49c je 0x10e1a4c7 */
  if (C.zf) goto L_10e1a4c7;
  /* 10e1a49e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a4a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1a4a4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a4a7 jne 0x10e1a4af */
  if (!C.zf) goto L_10e1a4af;
  /* 10e1a4a9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a4ad jne 0x10e1a4c7 */
  if (!C.zf) goto L_10e1a4c7;
L_10e1a4af:;
  /* 10e1a4af mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a4b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a4b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e1a4b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a4bb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10e1a4be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1a4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a4c4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10e1a4c7:;
  /* 10e1a4c7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a4ce jne 0x10e1a6a2 */
  if (!C.zf) goto L_10e1a6a2;
  /* 10e1a4d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a4d7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a4da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a4dc je 0x10e1a52d */
  if (C.zf) goto L_10e1a52d;
  /* 10e1a4de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a4e1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a4e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1a4e9 je 0x10e1a4fb */
  if (C.zf) goto L_10e1a4fb;
  /* 10e1a4eb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10e1a4f2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e1a4f9 jmp 0x10e1a52d */
  goto L_10e1a52d;
L_10e1a4fb:;
  /* 10e1a4fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a4fe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a503 je 0x10e1a515 */
  if (C.zf) goto L_10e1a515;
  /* 10e1a505 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10e1a50c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e1a513 jmp 0x10e1a52d */
  goto L_10e1a52d;
L_10e1a515:;
  /* 10e1a515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a518 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1a51b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a51d je 0x10e1a52d */
  if (C.zf) goto L_10e1a52d;
  /* 10e1a51f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10e1a526 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10e1a52d:;
  /* 10e1a52d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e1a533 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a536 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a539 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10e1a53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a542 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a545 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a547 jne 0x10e1a565 */
  if (!C.zf) goto L_10e1a565;
  /* 10e1a549 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e1a54f push eax */
  push32((uint32_t)(EAX));
  /* 10e1a550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a553 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a554 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e1a55a push edx */
  push32((uint32_t)(EDX));
  /* 10e1a55b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e1a55d call 0x10e1a840 */
  push32(0x10e1a562u); f_10e1a840();
  /* 10e1a562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1a565:;
  /* 10e1a565 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e1a56b push eax */
  push32((uint32_t)(EAX));
  /* 10e1a56c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a56f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a570 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1a573 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a574 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10e1a57a push eax */
  push32((uint32_t)(EAX));
  /* 10e1a57b call 0x10e1a880 */
  push32(0x10e1a580u); f_10e1a880();
  /* 10e1a580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a586 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1a58b je 0x10e1a5b3 */
  if (C.zf) goto L_10e1a5b3;
  /* 10e1a58d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a590 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a593 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a595 jne 0x10e1a5b3 */
  if (!C.zf) goto L_10e1a5b3;
  /* 10e1a597 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e1a59d push eax */
  push32((uint32_t)(EAX));
  /* 10e1a59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a5a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a5a2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e1a5a8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a5a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e1a5ab call 0x10e1a840 */
  push32(0x10e1a5b0u); f_10e1a840();
  /* 10e1a5b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1a5b3:;
  /* 10e1a5b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a5b7 je 0x10e1a661 */
  if (C.zf) goto L_10e1a661;
  /* 10e1a5bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a5c1 jle 0x10e1a661 */
  if ((C.zf||C.sf!=C.of)) goto L_10e1a661;
  /* 10e1a5c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a5ca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10e1a5d0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1a5d3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10e1a5d9:;
  /* 10e1a5d9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10e1a5df mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10e1a5e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a5e8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10e1a5ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a5f0 je 0x10e1a65f */
  if (C.zf) goto L_10e1a65f;
  /* 10e1a5f2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10e1a5f8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e1a5fb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10e1a602 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10e1a609 push eax */
  push32((uint32_t)(EAX));
  /* 10e1a60a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10e1a610 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a611 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10e1a617 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a61a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10e1a620 call 0x10e1b9f0 */
  push32(0x10e1a625u); f_10e1b9f0();
  /* 10e1a625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a628 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10e1a62e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a635 jg 0x10e1a639 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1a639;
  /* 10e1a637 jmp 0x10e1a65f */
  goto L_10e1a65f;
L_10e1a639:;
  /* 10e1a639 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e1a63f push eax */
  push32((uint32_t)(EAX));
  /* 10e1a640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a643 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a644 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10e1a64a push edx */
  push32((uint32_t)(EDX));
  /* 10e1a64b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10e1a651 push eax */
  push32((uint32_t)(EAX));
  /* 10e1a652 call 0x10e1a880 */
  push32(0x10e1a657u); f_10e1a880();
  /* 10e1a657 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a65a jmp 0x10e1a5d9 */
  goto L_10e1a5d9;
L_10e1a65f:;
  /* 10e1a65f jmp 0x10e1a67c */
  goto L_10e1a67c;
L_10e1a661:;
  /* 10e1a661 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10e1a667 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a66b push edx */
  push32((uint32_t)(EDX));
  /* 10e1a66c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1a66f push eax */
  push32((uint32_t)(EAX));
  /* 10e1a670 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1a673 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a674 call 0x10e1a880 */
  push32(0x10e1a679u); f_10e1a880();
  /* 10e1a679 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1a67c:;
  /* 10e1a67c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a67f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1a682 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1a684 je 0x10e1a6a2 */
  if (C.zf) goto L_10e1a6a2;
  /* 10e1a686 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e1a68c push eax */
  push32((uint32_t)(EAX));
  /* 10e1a68d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a690 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a691 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e1a697 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a698 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e1a69a call 0x10e1a840 */
  push32(0x10e1a69fu); f_10e1a840();
  /* 10e1a69f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1a6a2:;
  /* 10e1a6a2 jmp 0x10e19ab4 */
  goto L_10e19ab4;
L_10e1a6a7:;
  /* 10e1a6a7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10e1a6ad pop edi */
  EDI = (pop32());
  /* 10e1a6ae pop esi */
  ESI = (pop32());
  /* 10e1a6af pop ebx */
  EBX = (pop32());
  /* 10e1a6b0 mov esp, ebp */
  ESP = (EBP);
  /* 10e1a6b2 pop ebp */
  EBP = (pop32());
  /* 10e1a6b3 ret  */
  ESPCHK(0x10e19a90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x10e1a7c0 (119 bytes, 44 insns) */
void f_10e1a7c0(void) {
  FTRACE(0x10e1a7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a7c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a7c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a7c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e1a7ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a7cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a7d0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e1a7d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a7d6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a7da jl 0x10e1a802 */
  if ((C.sf!=C.of)) goto L_10e1a802;
  /* 10e1a7dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a7df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1a7e1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e1a7e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e1a7e6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10e1a7ea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1a7f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1a7f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a7f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e1a7f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a7fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a7fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e1a800 jmp 0x10e1a815 */
  goto L_10e1a815;
L_10e1a802:;
  /* 10e1a802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a805 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a809 push eax */
  push32((uint32_t)(EAX));
  /* 10e1a80a call 0x10e19810 */
  push32(0x10e1a80fu); f_10e19810();
  /* 10e1a80f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1a815:;
  /* 10e1a815 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a819 jne 0x10e1a826 */
  if (!C.zf) goto L_10e1a826;
  /* 10e1a81b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a81e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e1a824 jmp 0x10e1a833 */
  goto L_10e1a833;
L_10e1a826:;
  /* 10e1a826 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a829 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e1a82b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a82e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a831 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e1a833:;
  /* 10e1a833 mov esp, ebp */
  ESP = (EBP);
  /* 10e1a835 pop ebp */
  EBP = (pop32());
  /* 10e1a836 ret  */
  ESPCHK(0x10e1a7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a840 @ 0x10e1a840 (53 bytes, 23 insns) */
void f_10e1a840(void) {
  FTRACE(0x10e1a840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a840 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a841 mov ebp, esp */
  EBP = (ESP);
L_10e1a843:;
  /* 10e1a843 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a846 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a849 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a84c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e1a84f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a851 jle 0x10e1a873 */
  if ((C.zf||C.sf!=C.of)) goto L_10e1a873;
  /* 10e1a853 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1a856 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a857 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a85a push eax */
  push32((uint32_t)(EAX));
  /* 10e1a85b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a85e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a85f call 0x10e1a7c0 */
  push32(0x10e1a864u); f_10e1a7c0();
  /* 10e1a864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1a86a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a86d jne 0x10e1a871 */
  if (!C.zf) goto L_10e1a871;
  /* 10e1a86f jmp 0x10e1a873 */
  goto L_10e1a873;
L_10e1a871:;
  /* 10e1a871 jmp 0x10e1a843 */
  goto L_10e1a843;
L_10e1a873:;
  /* 10e1a873 pop ebp */
  EBP = (pop32());
  /* 10e1a874 ret  */
  ESPCHK(0x10e1a840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x10e1a880 (74 bytes, 31 insns) */
void f_10e1a880(void) {
  FTRACE(0x10e1a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a880 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a881 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a883 push ecx */
  push32((uint32_t)(ECX));
L_10e1a884:;
  /* 10e1a884 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a887 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a88a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a88d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e1a890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1a892 jle 0x10e1a8c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e1a8c6;
  /* 10e1a894 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1a897 push edx */
  push32((uint32_t)(EDX));
  /* 10e1a898 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a89b push eax */
  push32((uint32_t)(EAX));
  /* 10e1a89c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a89f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1a8a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1a8a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a8a8 push eax */
  push32((uint32_t)(EAX));
  /* 10e1a8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a8ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a8af mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e1a8b2 call 0x10e1a7c0 */
  push32(0x10e1a8b7u); f_10e1a7c0();
  /* 10e1a8b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a8ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1a8bd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a8c0 jne 0x10e1a8c4 */
  if (!C.zf) goto L_10e1a8c4;
  /* 10e1a8c2 jmp 0x10e1a8c6 */
  goto L_10e1a8c6;
L_10e1a8c4:;
  /* 10e1a8c4 jmp 0x10e1a884 */
  goto L_10e1a884;
L_10e1a8c6:;
  /* 10e1a8c6 mov esp, ebp */
  ESP = (EBP);
  /* 10e1a8c8 pop ebp */
  EBP = (pop32());
  /* 10e1a8c9 ret  */
  ESPCHK(0x10e1a880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8d0 @ 0x10e1a8d0 (26 bytes, 12 insns) */
void f_10e1a8d0(void) {
  FTRACE(0x10e1a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a8d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a8d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1a8d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a8de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e1a8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a8e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1a8e5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e1a8e8 pop ebp */
  EBP = (pop32());
  /* 10e1a8e9 ret  */
  ESPCHK(0x10e1a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8f0 @ 0x10e1a8f0 (31 bytes, 14 insns) */
void f_10e1a8f0(void) {
  FTRACE(0x10e1a8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a8f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a8f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a8f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1a8f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a8fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a8fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e1a900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a903 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1a905 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1a908 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e1a90a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1a90d pop ebp */
  EBP = (pop32());
  /* 10e1a90e ret  */
  ESPCHK(0x10e1a8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x10e1a910 (27 bytes, 12 insns) */
void f_10e1a910(void) {
  FTRACE(0x10e1a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a910 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a911 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a916 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1a918 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a91b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a91e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e1a920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a923 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1a925 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10e1a929 pop ebp */
  EBP = (pop32());
  /* 10e1a92a ret  */
  ESPCHK(0x10e1a910u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10e1a930 (145 bytes, 42 insns) */
void f_10e1a930(void) {
  FTRACE(0x10e1a930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a930 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a931 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a933 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1a934 call 0x10e1a9e0 */
  push32(0x10e1a939u); f_10e1a9e0();
  /* 10e1a939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a93c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e1a93e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1a945 jmp 0x10e1a950 */
  goto L_10e1a950;
L_10e1a947:;
  /* 10e1a947 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a94a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a94d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e1a950:;
  /* 10e1a950 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a954 jae 0x10e1a97a */
  if (!C.cf) goto L_10e1a97a;
  /* 10e1a956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a95c cmp ecx, dword ptr [eax*8 + 0x10e3cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10e3cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a963 jne 0x10e1a978 */
  if (!C.zf) goto L_10e1a978;
  /* 10e1a965 call 0x10e1a9d0 */
  push32(0x10e1a96au); f_10e1a9d0();
  /* 10e1a96a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1a96d mov ecx, dword ptr [edx*8 + 0x10e3cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10e3cfbc)));
  /* 10e1a974 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e1a976 jmp 0x10e1a9bd */
  goto L_10e1a9bd;
L_10e1a978:;
  /* 10e1a978 jmp 0x10e1a947 */
  goto L_10e1a947;
L_10e1a97a:;
  /* 10e1a97a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a97e jb 0x10e1a993 */
  if (C.cf) goto L_10e1a993;
  /* 10e1a980 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a984 ja 0x10e1a993 */
  if ((!C.cf&&!C.zf)) goto L_10e1a993;
  /* 10e1a986 call 0x10e1a9d0 */
  push32(0x10e1a98bu); f_10e1a9d0();
  /* 10e1a98b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10e1a991 jmp 0x10e1a9bd */
  goto L_10e1a9bd;
L_10e1a993:;
  /* 10e1a993 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a99a jb 0x10e1a9b2 */
  if (C.cf) goto L_10e1a9b2;
  /* 10e1a99c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1a9a3 ja 0x10e1a9b2 */
  if ((!C.cf&&!C.zf)) goto L_10e1a9b2;
  /* 10e1a9a5 call 0x10e1a9d0 */
  push32(0x10e1a9aau); f_10e1a9d0();
  /* 10e1a9aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10e1a9b0 jmp 0x10e1a9bd */
  goto L_10e1a9bd;
L_10e1a9b2:;
  /* 10e1a9b2 call 0x10e1a9d0 */
  push32(0x10e1a9b7u); f_10e1a9d0();
  /* 10e1a9b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10e1a9bd:;
  /* 10e1a9bd mov esp, ebp */
  ESP = (EBP);
  /* 10e1a9bf pop ebp */
  EBP = (pop32());
  /* 10e1a9c0 ret  */
  ESPCHK(0x10e1a930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9d0 @ 0x10e1a9d0 (13 bytes, 6 insns) */
void f_10e1a9d0(void) {
  FTRACE(0x10e1a9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a9d3 call 0x10e12540 */
  push32(0x10e1a9d8u); f_10e12540();
  /* 10e1a9d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a9db pop ebp */
  EBP = (pop32());
  /* 10e1a9dc ret  */
  ESPCHK(0x10e1a9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9e0 @ 0x10e1a9e0 (13 bytes, 6 insns) */
void f_10e1a9e0(void) {
  FTRACE(0x10e1a9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a9e3 call 0x10e12540 */
  push32(0x10e1a9e8u); f_10e12540();
  /* 10e1a9e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1a9eb pop ebp */
  EBP = (pop32());
  /* 10e1a9ec ret  */
  ESPCHK(0x10e1a9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9f0 @ 0x10e1a9f0 (664 bytes, 262 insns) [15 switch table(s)] */
void f_10e1a9f0(void) {
  FTRACE(0x10e1a9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1a9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1a9f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1a9f3 push edi */
  push32((uint32_t)(EDI));
  /* 10e1a9f4 push esi */
  push32((uint32_t)(ESI));
  /* 10e1a9f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1a9f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1a9fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1a9fe mov eax, ecx */
  EAX = (ECX);
  /* 10e1aa00 mov edx, ecx */
  EDX = (ECX);
  /* 10e1aa02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1aa04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aa06 jbe 0x10e1aa10 */
  if ((C.cf||C.zf)) goto L_10e1aa10;
  /* 10e1aa08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aa0a jb 0x10e1ab88 */
  if (C.cf) goto L_10e1ab88;
L_10e1aa10:;
  /* 10e1aa10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e1aa16 jne 0x10e1aa2c */
  if (!C.zf) goto L_10e1aa2c;
  /* 10e1aa18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1aa1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1aa1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aa21 jb 0x10e1aa4c */
  if (C.cf) goto L_10e1aa4c;
  /* 10e1aa23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1aa25 jmp dword ptr [edx*4 + 0x10e1ab38] */
  switch (EDX) {
    case 0: goto L_10e1ab48;
    case 1: goto L_10e1ab50;
    case 2: goto L_10e1ab5c;
    case 3: goto L_10e1ab70;
    default: x86_unimpl("switch@0x10e1aa25 out of table"); return;
  }
L_10e1aa2c:;
  /* 10e1aa2c mov eax, edi */
  EAX = (EDI);
  /* 10e1aa2e mov edx, 3 */
  EDX = (0x3u);
  /* 10e1aa33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1aa36 jb 0x10e1aa44 */
  if (C.cf) goto L_10e1aa44;
  /* 10e1aa38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1aa3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1aa3d jmp dword ptr [eax*4 + 0x10e1aa50] */
  switch (EAX) {
    case 1: goto L_10e1aa60;
    case 2: goto L_10e1aa8c;
    case 3: goto L_10e1aab0;
    default: x86_unimpl("switch@0x10e1aa3d out of table"); return;
  }
L_10e1aa44:;
  /* 10e1aa44 jmp dword ptr [ecx*4 + 0x10e1ab48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10e1ab48)))); return;
  /* 10e1aa4b nop  */
  /* nop */
L_10e1aa4c:;
  /* 10e1aa4c jmp dword ptr [ecx*4 + 0x10e1aacc] */
  switch (ECX) {
    case 0: goto L_10e1ab2f;
    case 1: goto L_10e1ab1c;
    case 2: goto L_10e1ab14;
    case 3: goto L_10e1ab0c;
    case 4: goto L_10e1ab04;
    case 5: goto L_10e1aafc;
    case 6: goto L_10e1aaf4;
    case 7: goto L_10e1aaec;
    default: x86_unimpl("switch@0x10e1aa4c out of table"); return;
  }
  /* 10e1aa53 nop  */
  /* nop */
L_10e1aa60:;
  /* 10e1aa60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1aa62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1aa64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1aa66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e1aa69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1aa6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1aa6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1aa72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e1aa75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1aa78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1aa7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aa7e jb 0x10e1aa4c */
  if (C.cf) goto L_10e1aa4c;
  /* 10e1aa80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1aa82 jmp dword ptr [edx*4 + 0x10e1ab38] */
  switch (EDX) {
    case 0: goto L_10e1ab48;
    case 1: goto L_10e1ab50;
    case 2: goto L_10e1ab5c;
    case 3: goto L_10e1ab70;
    default: x86_unimpl("switch@0x10e1aa82 out of table"); return;
  }
  /* 10e1aa89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1aa8c:;
  /* 10e1aa8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1aa8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1aa90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1aa92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e1aa95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1aa98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1aa9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1aa9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1aaa1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aaa4 jb 0x10e1aa4c */
  if (C.cf) goto L_10e1aa4c;
  /* 10e1aaa6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1aaa8 jmp dword ptr [edx*4 + 0x10e1ab38] */
  switch (EDX) {
    case 0: goto L_10e1ab48;
    case 1: goto L_10e1ab50;
    case 2: goto L_10e1ab5c;
    case 3: goto L_10e1ab70;
    default: x86_unimpl("switch@0x10e1aaa8 out of table"); return;
  }
  /* 10e1aaaf nop  */
  /* nop */
L_10e1aab0:;
  /* 10e1aab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1aab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1aab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1aab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e1aab7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1aaba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e1aabb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aabe jb 0x10e1aa4c */
  if (C.cf) goto L_10e1aa4c;
  /* 10e1aac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1aac2 jmp dword ptr [edx*4 + 0x10e1ab38] */
  switch (EDX) {
    case 0: goto L_10e1ab48;
    case 1: goto L_10e1ab50;
    case 2: goto L_10e1ab5c;
    case 3: goto L_10e1ab70;
    default: x86_unimpl("switch@0x10e1aac2 out of table"); return;
  }
  /* 10e1aac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1aaec:;
  /* 10e1aaec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10e1aaf0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10e1aaf4:;
  /* 10e1aaf4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10e1aaf8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10e1aafc:;
  /* 10e1aafc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10e1ab00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10e1ab04:;
  /* 10e1ab04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10e1ab08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10e1ab0c:;
  /* 10e1ab0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10e1ab10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10e1ab14:;
  /* 10e1ab14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10e1ab18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10e1ab1c:;
  /* 10e1ab1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10e1ab20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10e1ab24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e1ab2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ab2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e1ab2f:;
  /* 10e1ab2f jmp dword ptr [edx*4 + 0x10e1ab38] */
  switch (EDX) {
    case 0: goto L_10e1ab48;
    case 1: goto L_10e1ab50;
    case 2: goto L_10e1ab5c;
    case 3: goto L_10e1ab70;
    default: x86_unimpl("switch@0x10e1ab2f out of table"); return;
  }
  /* 10e1ab36 mov edi, edi */
  EDI = (EDI);
L_10e1ab48:;
  /* 10e1ab48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ab4b pop esi */
  ESI = (pop32());
  /* 10e1ab4c pop edi */
  EDI = (pop32());
  /* 10e1ab4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1ab4e ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
  /* 10e1ab4f nop  */
  /* nop */
L_10e1ab50:;
  /* 10e1ab50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1ab52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1ab54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ab57 pop esi */
  ESI = (pop32());
  /* 10e1ab58 pop edi */
  EDI = (pop32());
  /* 10e1ab59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1ab5a ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
  /* 10e1ab5b nop  */
  /* nop */
L_10e1ab5c:;
  /* 10e1ab5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1ab5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1ab60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e1ab63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1ab66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ab69 pop esi */
  ESI = (pop32());
  /* 10e1ab6a pop edi */
  EDI = (pop32());
  /* 10e1ab6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1ab6c ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
  /* 10e1ab6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1ab70:;
  /* 10e1ab70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1ab72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1ab74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e1ab77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1ab7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1ab7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e1ab80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ab83 pop esi */
  ESI = (pop32());
  /* 10e1ab84 pop edi */
  EDI = (pop32());
  /* 10e1ab85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1ab86 ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
  /* 10e1ab87 nop  */
  /* nop */
L_10e1ab88:;
  /* 10e1ab88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10e1ab8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10e1ab90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e1ab96 jne 0x10e1abbc */
  if (!C.zf) goto L_10e1abbc;
  /* 10e1ab98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1ab9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ab9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aba1 jb 0x10e1abb0 */
  if (C.cf) goto L_10e1abb0;
  /* 10e1aba3 std  */
  C.df=1;
  /* 10e1aba4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1aba6 cld  */
  C.df=0;
  /* 10e1aba7 jmp dword ptr [edx*4 + 0x10e1acd0] */
  switch (EDX) {
    case 0: goto L_10e1ace0;
    case 1: goto L_10e1ace8;
    case 2: goto L_10e1acf8;
    case 3: goto L_10e1ad0c;
    default: x86_unimpl("switch@0x10e1aba7 out of table"); return;
  }
  /* 10e1abae mov edi, edi */
  EDI = (EDI);
L_10e1abb0:;
  /* 10e1abb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1abb2 jmp dword ptr [ecx*4 + 0x10e1ac80] */
  switch (ECX) {
    case 0: goto L_10e1acc7;
    default: x86_unimpl("switch@0x10e1abb2 out of table"); return;
  }
  /* 10e1abb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1abbc:;
  /* 10e1abbc mov eax, edi */
  EAX = (EDI);
  /* 10e1abbe mov edx, 3 */
  EDX = (0x3u);
  /* 10e1abc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1abc6 jb 0x10e1abd4 */
  if (C.cf) goto L_10e1abd4;
  /* 10e1abc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1abcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1abcd jmp dword ptr [eax*4 + 0x10e1abd8] */
  switch (EAX) {
    case 1: goto L_10e1abe8;
    case 2: goto L_10e1ac08;
    case 3: goto L_10e1ac30;
    default: x86_unimpl("switch@0x10e1abcd out of table"); return;
  }
L_10e1abd4:;
  /* 10e1abd4 jmp dword ptr [ecx*4 + 0x10e1acd0] */
  switch (ECX) {
    case 0: goto L_10e1ace0;
    case 1: goto L_10e1ace8;
    case 2: goto L_10e1acf8;
    case 3: goto L_10e1ad0c;
    default: x86_unimpl("switch@0x10e1abd4 out of table"); return;
  }
  /* 10e1abdb nop  */
  /* nop */
L_10e1abe8:;
  /* 10e1abe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e1abeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1abed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e1abf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10e1abf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1abf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10e1abf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1abf8 jb 0x10e1abb0 */
  if (C.cf) goto L_10e1abb0;
  /* 10e1abfa std  */
  C.df=1;
  /* 10e1abfb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1abfd cld  */
  C.df=0;
  /* 10e1abfe jmp dword ptr [edx*4 + 0x10e1acd0] */
  switch (EDX) {
    case 0: goto L_10e1ace0;
    case 1: goto L_10e1ace8;
    case 2: goto L_10e1acf8;
    case 3: goto L_10e1ad0c;
    default: x86_unimpl("switch@0x10e1abfe out of table"); return;
  }
  /* 10e1ac05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1ac08:;
  /* 10e1ac08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e1ac0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ac0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e1ac10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1ac13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1ac16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e1ac19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ac1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ac1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ac22 jb 0x10e1abb0 */
  if (C.cf) goto L_10e1abb0;
  /* 10e1ac24 std  */
  C.df=1;
  /* 10e1ac25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1ac27 cld  */
  C.df=0;
  /* 10e1ac28 jmp dword ptr [edx*4 + 0x10e1acd0] */
  switch (EDX) {
    case 0: goto L_10e1ace0;
    case 1: goto L_10e1ace8;
    case 2: goto L_10e1acf8;
    case 3: goto L_10e1ad0c;
    default: x86_unimpl("switch@0x10e1ac28 out of table"); return;
  }
  /* 10e1ac2f nop  */
  /* nop */
L_10e1ac30:;
  /* 10e1ac30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e1ac33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ac35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e1ac38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1ac3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e1ac3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e1ac41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1ac44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1ac47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ac4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ac4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ac50 jb 0x10e1abb0 */
  if (C.cf) goto L_10e1abb0;
  /* 10e1ac56 std  */
  C.df=1;
  /* 10e1ac57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e1ac59 cld  */
  C.df=0;
  /* 10e1ac5a jmp dword ptr [edx*4 + 0x10e1acd0] */
  switch (EDX) {
    case 0: goto L_10e1ace0;
    case 1: goto L_10e1ace8;
    case 2: goto L_10e1acf8;
    case 3: goto L_10e1ad0c;
    default: x86_unimpl("switch@0x10e1ac5a out of table"); return;
  }
  /* 10e1ac61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10e1ac64 test byte ptr [ecx - 0x1e5373f0], ch */
  { uint32_t _r=(r8((uint32_t)(ECX + -0x1e5373f0)))&(C.c.b.h); fl_logic(_r,8); }
  /* 10e1ac6b adc byte ptr [esp + ebp*4 - 0x5363ef1f], dl */
  { uint32_t _a=(r8((uint32_t)(ESP + EBP*4 + -0x5363ef1f))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EBP*4 + -0x5363ef1f), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e1ac72 loope 0x10e1ac84 */
  x86_unimpl("loope @ 0x10e1ac72");
  /* 10e1ac74 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10e1ac75 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10e1ac76 loope 0x10e1ac88 */
  x86_unimpl("loope @ 0x10e1ac76");
  /* 10e1ac78 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10e1ac79 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10e1ac7a loope 0x10e1ac8c */
  x86_unimpl("loope @ 0x10e1ac7a");
  /* 10e1ac7c mov ah, 0xac */
  AH = (0xacu);
  /* 10e1ac7e loope 0x10e1ac90 */
  x86_unimpl("loope @ 0x10e1ac7e");
  /* 10e1ac84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10e1ac88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10e1ac8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10e1ac90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10e1ac94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10e1ac98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10e1ac9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10e1aca0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10e1aca4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10e1aca8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10e1acac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10e1acb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10e1acb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10e1acb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10e1acbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e1acc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1acc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e1acc7:;
  /* 10e1acc7 jmp dword ptr [edx*4 + 0x10e1acd0] */
  switch (EDX) {
    case 0: goto L_10e1ace0;
    case 1: goto L_10e1ace8;
    case 2: goto L_10e1acf8;
    case 3: goto L_10e1ad0c;
    default: x86_unimpl("switch@0x10e1acc7 out of table"); return;
  }
  /* 10e1acce mov edi, edi */
  EDI = (EDI);
L_10e1ace0:;
  /* 10e1ace0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ace3 pop esi */
  ESI = (pop32());
  /* 10e1ace4 pop edi */
  EDI = (pop32());
  /* 10e1ace5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1ace6 ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
  /* 10e1ace7 nop  */
  /* nop */
L_10e1ace8:;
  /* 10e1ace8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e1aceb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e1acee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1acf1 pop esi */
  ESI = (pop32());
  /* 10e1acf2 pop edi */
  EDI = (pop32());
  /* 10e1acf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1acf4 ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
  /* 10e1acf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1acf8:;
  /* 10e1acf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e1acfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e1acfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1ad01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e1ad04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ad07 pop esi */
  ESI = (pop32());
  /* 10e1ad08 pop edi */
  EDI = (pop32());
  /* 10e1ad09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1ad0a ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
  /* 10e1ad0b nop  */
  /* nop */
L_10e1ad0c:;
  /* 10e1ad0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e1ad0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e1ad12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e1ad15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e1ad18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e1ad1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e1ad1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ad21 pop esi */
  ESI = (pop32());
  /* 10e1ad22 pop edi */
  EDI = (pop32());
  /* 10e1ad23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1ad24 ret  */
  ESPCHK(0x10e1a9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad30 @ 0x10e1ad30 (421 bytes, 148 insns) */
void f_10e1ad30(void) {
  FTRACE(0x10e1ad30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ad30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ad31 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ad33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e1ad35 push 0x10e39f40 */
  push32((uint32_t)(0x10e39f40u));
  /* 10e1ad3a push 0x10e1bc08 */
  push32((uint32_t)(0x10e1bc08u));
  /* 10e1ad3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e1ad45 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ad46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e1ad4d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ad50 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1ad51 push esi */
  push32((uint32_t)(ESI));
  /* 10e1ad52 push edi */
  push32((uint32_t)(EDI));
  /* 10e1ad53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e1ad56 cmp dword ptr [0x10e3e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ad5d jne 0x10e1adae */
  if (!C.zf) goto L_10e1adae;
  /* 10e1ad5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10e1ad62 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ad63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1ad65 push 0x10e39f38 */
  push32((uint32_t)(0x10e39f38u));
  /* 10e1ad6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1ad6c call dword ptr [0x10e4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4031c))), 0x10e1ad72u);
  /* 10e1ad72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ad74 je 0x10e1ad82 */
  if (C.zf) goto L_10e1ad82;
  /* 10e1ad76 mov dword ptr [0x10e3e5fc], 1 */
  w32((uint32_t)(0x10e3e5fc), (0x1u));
  /* 10e1ad80 jmp 0x10e1adae */
  goto L_10e1adae;
L_10e1ad82:;
  /* 10e1ad82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10e1ad85 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ad86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1ad88 push 0x10e39f34 */
  push32((uint32_t)(0x10e39f34u));
  /* 10e1ad8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1ad8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1ad91 call dword ptr [0x10e40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40318))), 0x10e1ad97u);
  /* 10e1ad97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ad99 je 0x10e1ada7 */
  if (C.zf) goto L_10e1ada7;
  /* 10e1ad9b mov dword ptr [0x10e3e5fc], 2 */
  w32((uint32_t)(0x10e3e5fc), (0x2u));
  /* 10e1ada5 jmp 0x10e1adae */
  goto L_10e1adae;
L_10e1ada7:;
  /* 10e1ada7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ada9 jmp 0x10e1aed8 */
  goto L_10e1aed8;
L_10e1adae:;
  /* 10e1adae cmp dword ptr [0x10e3e5fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e5fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1adb5 jne 0x10e1ade5 */
  if (!C.zf) goto L_10e1ade5;
  /* 10e1adb7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1adbb jne 0x10e1adc6 */
  if (!C.zf) goto L_10e1adc6;
  /* 10e1adbd mov edx, dword ptr [0x10e3e608] */
  EDX = (r32((uint32_t)(0x10e3e608)));
  /* 10e1adc3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10e1adc6:;
  /* 10e1adc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1adc9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1adca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1adcd push ecx */
  push32((uint32_t)(ECX));
  /* 10e1adce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1add1 push edx */
  push32((uint32_t)(EDX));
  /* 10e1add2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1add5 push eax */
  push32((uint32_t)(EAX));
  /* 10e1add6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e1add9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1adda call dword ptr [0x10e40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40318))), 0x10e1ade0u);
  /* 10e1ade0 jmp 0x10e1aed8 */
  goto L_10e1aed8;
L_10e1ade5:;
  /* 10e1ade5 cmp dword ptr [0x10e3e5fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e5fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1adec jne 0x10e1aed6 */
  if (!C.zf) goto L_10e1aed6;
  /* 10e1adf2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1adf6 jne 0x10e1ae01 */
  if (!C.zf) goto L_10e1ae01;
  /* 10e1adf8 mov edx, dword ptr [0x10e3e618] */
  EDX = (r32((uint32_t)(0x10e3e618)));
  /* 10e1adfe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10e1ae01:;
  /* 10e1ae01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1ae03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1ae05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ae08 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ae09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ae0c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ae0d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e1ae10 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1ae12 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ae14 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ae17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ae1a push edx */
  push32((uint32_t)(EDX));
  /* 10e1ae1b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1ae1e push eax */
  push32((uint32_t)(EAX));
  /* 10e1ae1f call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e1ae25u);
  /* 10e1ae25 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e1ae28 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ae2c jne 0x10e1ae35 */
  if (!C.zf) goto L_10e1ae35;
  /* 10e1ae2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ae30 jmp 0x10e1aed8 */
  goto L_10e1aed8;
L_10e1ae35:;
  /* 10e1ae35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1ae3c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1ae3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e1ae41 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ae44 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e1ae46 call 0x10e15ca0 */
  push32(0x10e1ae4bu); f_10e15ca0();
  /* 10e1ae4b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10e1ae4e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e1ae51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1ae54 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e1ae57 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1ae5a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e1ae5c push edx */
  push32((uint32_t)(EDX));
  /* 10e1ae5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1ae5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1ae62 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ae63 call 0x10e16870 */
  push32(0x10e1ae68u); f_10e16870();
  /* 10e1ae68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ae6b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e1ae72 jmp 0x10e1ae8b */
  goto L_10e1ae8b;
  /* 10e1ae74 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1ae79 ret  */
  ESPCHK(0x10e1ad30u, _esp0);
  ESP += 4; return;
  /* 10e1ae7a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1ae7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e1ae84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e1ae8b:;
  /* 10e1ae8b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ae8f jne 0x10e1ae95 */
  if (!C.zf) goto L_10e1ae95;
  /* 10e1ae91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ae93 jmp 0x10e1aed8 */
  goto L_10e1aed8;
L_10e1ae95:;
  /* 10e1ae95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1ae98 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ae99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1ae9c push edx */
  push32((uint32_t)(EDX));
  /* 10e1ae9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1aea0 push eax */
  push32((uint32_t)(EAX));
  /* 10e1aea1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1aea4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1aea5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1aea7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1aeaa push edx */
  push32((uint32_t)(EDX));
  /* 10e1aeab call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e1aeb1u);
  /* 10e1aeb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e1aeb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1aeb8 jne 0x10e1aebe */
  if (!C.zf) goto L_10e1aebe;
  /* 10e1aeba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1aebc jmp 0x10e1aed8 */
  goto L_10e1aed8;
L_10e1aebe:;
  /* 10e1aebe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1aec1 push eax */
  push32((uint32_t)(EAX));
  /* 10e1aec2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1aec5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1aec6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1aec9 push edx */
  push32((uint32_t)(EDX));
  /* 10e1aeca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1aecd push eax */
  push32((uint32_t)(EAX));
  /* 10e1aece call dword ptr [0x10e4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4031c))), 0x10e1aed4u);
  /* 10e1aed4 jmp 0x10e1aed8 */
  goto L_10e1aed8;
L_10e1aed6:;
  /* 10e1aed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1aed8:;
  /* 10e1aed8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10e1aedb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1aede mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e1aee5 pop edi */
  EDI = (pop32());
  /* 10e1aee6 pop esi */
  ESI = (pop32());
  /* 10e1aee7 pop ebx */
  EBX = (pop32());
  /* 10e1aee8 mov esp, ebp */
  ESP = (EBP);
  /* 10e1aeea pop ebp */
  EBP = (pop32());
  /* 10e1aeeb ret  */
  ESPCHK(0x10e1ad30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aef0 @ 0x10e1aef0 (727 bytes, 263 insns) */
void f_10e1aef0(void) {
  FTRACE(0x10e1aef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1aef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1aef1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1aef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e1aef5 push 0x10e39f50 */
  push32((uint32_t)(0x10e39f50u));
  /* 10e1aefa push 0x10e1bc08 */
  push32((uint32_t)(0x10e1bc08u));
  /* 10e1aeff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e1af05 push eax */
  push32((uint32_t)(EAX));
  /* 10e1af06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e1af0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1af10 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1af11 push esi */
  push32((uint32_t)(ESI));
  /* 10e1af12 push edi */
  push32((uint32_t)(EDI));
  /* 10e1af13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e1af16 cmp dword ptr [0x10e3e620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1af1d jne 0x10e1af76 */
  if (!C.zf) goto L_10e1af76;
  /* 10e1af1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1af21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1af23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1af25 push 0x10e39f38 */
  push32((uint32_t)(0x10e39f38u));
  /* 10e1af2a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e1af2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1af31 call dword ptr [0x10e40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40324))), 0x10e1af37u);
  /* 10e1af37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1af39 je 0x10e1af47 */
  if (C.zf) goto L_10e1af47;
  /* 10e1af3b mov dword ptr [0x10e3e620], 1 */
  w32((uint32_t)(0x10e3e620), (0x1u));
  /* 10e1af45 jmp 0x10e1af76 */
  goto L_10e1af76;
L_10e1af47:;
  /* 10e1af47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1af49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1af4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1af4d push 0x10e39f34 */
  push32((uint32_t)(0x10e39f34u));
  /* 10e1af52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e1af57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1af59 call dword ptr [0x10e40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40320))), 0x10e1af5fu);
  /* 10e1af5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1af61 je 0x10e1af6f */
  if (C.zf) goto L_10e1af6f;
  /* 10e1af63 mov dword ptr [0x10e3e620], 2 */
  w32((uint32_t)(0x10e3e620), (0x2u));
  /* 10e1af6d jmp 0x10e1af76 */
  goto L_10e1af76;
L_10e1af6f:;
  /* 10e1af6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1af71 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1af76:;
  /* 10e1af76 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1af7a jle 0x10e1af8f */
  if ((C.zf||C.sf!=C.of)) goto L_10e1af8f;
  /* 10e1af7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1af7f push eax */
  push32((uint32_t)(EAX));
  /* 10e1af80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1af83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1af84 call 0x10e1b200 */
  push32(0x10e1af89u); f_10e1b200();
  /* 10e1af89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1af8c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10e1af8f:;
  /* 10e1af8f cmp dword ptr [0x10e3e620], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e620))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1af96 jne 0x10e1afbb */
  if (!C.zf) goto L_10e1afbb;
  /* 10e1af98 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e1af9b push edx */
  push32((uint32_t)(EDX));
  /* 10e1af9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1af9f push eax */
  push32((uint32_t)(EAX));
  /* 10e1afa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1afa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1afa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1afa7 push edx */
  push32((uint32_t)(EDX));
  /* 10e1afa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1afab push eax */
  push32((uint32_t)(EAX));
  /* 10e1afac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1afaf push ecx */
  push32((uint32_t)(ECX));
  /* 10e1afb0 call dword ptr [0x10e40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40320))), 0x10e1afb6u);
  /* 10e1afb6 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1afbb:;
  /* 10e1afbb cmp dword ptr [0x10e3e620], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e620))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1afc2 jne 0x10e1b1df */
  if (!C.zf) goto L_10e1b1df;
  /* 10e1afc8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1afcc jne 0x10e1afd7 */
  if (!C.zf) goto L_10e1afd7;
  /* 10e1afce mov edx, dword ptr [0x10e3e618] */
  EDX = (r32((uint32_t)(0x10e3e618)));
  /* 10e1afd4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10e1afd7:;
  /* 10e1afd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1afd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1afdb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1afde push eax */
  push32((uint32_t)(EAX));
  /* 10e1afdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1afe2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1afe3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10e1afe6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1afe8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1afea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1afed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1aff0 push edx */
  push32((uint32_t)(EDX));
  /* 10e1aff1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e1aff4 push eax */
  push32((uint32_t)(EAX));
  /* 10e1aff5 call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e1affbu);
  /* 10e1affb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e1affe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b002 jne 0x10e1b00b */
  if (!C.zf) goto L_10e1b00b;
  /* 10e1b004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b006 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b00b:;
  /* 10e1b00b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1b012 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1b015 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e1b017 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b01a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e1b01c call 0x10e15ca0 */
  push32(0x10e1b021u); f_10e15ca0();
  /* 10e1b021 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10e1b024 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e1b027 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1b02a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e1b02d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e1b034 jmp 0x10e1b04d */
  goto L_10e1b04d;
  /* 10e1b036 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1b03b ret  */
  ESPCHK(0x10e1aef0u, _esp0);
  ESP += 4; return;
  /* 10e1b03c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1b03f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e1b046 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e1b04d:;
  /* 10e1b04d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b051 jne 0x10e1b05a */
  if (!C.zf) goto L_10e1b05a;
  /* 10e1b053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b055 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b05a:;
  /* 10e1b05a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1b05d push edx */
  push32((uint32_t)(EDX));
  /* 10e1b05e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1b061 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b062 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1b065 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b066 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1b069 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b06a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1b06c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e1b06f push eax */
  push32((uint32_t)(EAX));
  /* 10e1b070 call dword ptr [0x10e40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40314))), 0x10e1b076u);
  /* 10e1b076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b078 jne 0x10e1b081 */
  if (!C.zf) goto L_10e1b081;
  /* 10e1b07a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b07c jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b081:;
  /* 10e1b081 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b085 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1b088 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b089 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1b08c push edx */
  push32((uint32_t)(EDX));
  /* 10e1b08d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b090 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b094 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b095 call dword ptr [0x10e40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40324))), 0x10e1b09bu);
  /* 10e1b09b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e1b09e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b0a2 jne 0x10e1b0ab */
  if (!C.zf) goto L_10e1b0ab;
  /* 10e1b0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b0a6 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b0ab:;
  /* 10e1b0ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b0ae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b0b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1b0b6 je 0x10e1b0fb */
  if (C.zf) goto L_10e1b0fb;
  /* 10e1b0b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b0bc je 0x10e1b0f6 */
  if (C.zf) goto L_10e1b0f6;
  /* 10e1b0be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1b0c1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b0c4 jle 0x10e1b0cd */
  if ((C.zf||C.sf!=C.of)) goto L_10e1b0cd;
  /* 10e1b0c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b0c8 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b0cd:;
  /* 10e1b0cd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e1b0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b0d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1b0d4 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b0d5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1b0d8 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b0d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1b0dc push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b0dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b0e0 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b0e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b0e4 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b0e5 call dword ptr [0x10e40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40324))), 0x10e1b0ebu);
  /* 10e1b0eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b0ed jne 0x10e1b0f6 */
  if (!C.zf) goto L_10e1b0f6;
  /* 10e1b0ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b0f1 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b0f6:;
  /* 10e1b0f6 jmp 0x10e1b1da */
  goto L_10e1b1da;
L_10e1b0fb:;
  /* 10e1b0fb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1b0fe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e1b101 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e1b108 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1b10b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e1b10d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b110 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e1b112 call 0x10e15ca0 */
  push32(0x10e1b117u); f_10e15ca0();
  /* 10e1b117 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10e1b11a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e1b11d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e1b120 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e1b123 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e1b12a jmp 0x10e1b143 */
  goto L_10e1b143;
  /* 10e1b12c mov eax, 1 */
  EAX = (0x1u);
  /* 10e1b131 ret  */
  ESPCHK(0x10e1aef0u, _esp0);
  ESP += 4; return;
  /* 10e1b132 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1b135 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e1b13c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e1b143:;
  /* 10e1b143 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b147 jne 0x10e1b150 */
  if (!C.zf) goto L_10e1b150;
  /* 10e1b149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b14b jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b150:;
  /* 10e1b150 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1b153 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b154 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1b157 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b158 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1b15b push edx */
  push32((uint32_t)(EDX));
  /* 10e1b15c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1b15f push eax */
  push32((uint32_t)(EAX));
  /* 10e1b160 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b163 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b167 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b168 call dword ptr [0x10e40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40324))), 0x10e1b16eu);
  /* 10e1b16e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b170 jne 0x10e1b176 */
  if (!C.zf) goto L_10e1b176;
  /* 10e1b172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b174 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b176:;
  /* 10e1b176 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b17a jne 0x10e1b1aa */
  if (!C.zf) goto L_10e1b1aa;
  /* 10e1b17c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b17e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b180 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b182 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b184 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1b187 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b188 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1b18b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b18c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e1b191 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e1b194 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b195 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e1b19bu);
  /* 10e1b19b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e1b19e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b1a2 jne 0x10e1b1a8 */
  if (!C.zf) goto L_10e1b1a8;
  /* 10e1b1a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b1a6 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b1a8:;
  /* 10e1b1a8 jmp 0x10e1b1da */
  goto L_10e1b1da;
L_10e1b1aa:;
  /* 10e1b1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b1ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b1ae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e1b1b1 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b1b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1b1b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b1b6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1b1b9 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b1ba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1b1bd push eax */
  push32((uint32_t)(EAX));
  /* 10e1b1be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e1b1c3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e1b1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b1c7 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e1b1cdu);
  /* 10e1b1cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e1b1d0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b1d4 jne 0x10e1b1da */
  if (!C.zf) goto L_10e1b1da;
  /* 10e1b1d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b1d8 jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b1da:;
  /* 10e1b1da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1b1dd jmp 0x10e1b1e1 */
  goto L_10e1b1e1;
L_10e1b1df:;
  /* 10e1b1df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1b1e1:;
  /* 10e1b1e1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10e1b1e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1b1e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e1b1ee pop edi */
  EDI = (pop32());
  /* 10e1b1ef pop esi */
  ESI = (pop32());
  /* 10e1b1f0 pop ebx */
  EBX = (pop32());
  /* 10e1b1f1 mov esp, ebp */
  ESP = (EBP);
  /* 10e1b1f3 pop ebp */
  EBP = (pop32());
  /* 10e1b1f4 ret  */
  ESPCHK(0x10e1aef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x10e1b200 (80 bytes, 32 insns) */
void f_10e1b200(void) {
  FTRACE(0x10e1b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b200 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b201 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b209 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1b20c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b20f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e1b212:;
  /* 10e1b212 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b218 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b21b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1b21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1b220 je 0x10e1b237 */
  if (C.zf) goto L_10e1b237;
  /* 10e1b222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b225 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1b228 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1b22a je 0x10e1b237 */
  if (C.zf) goto L_10e1b237;
  /* 10e1b22c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b22f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b232 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1b235 jmp 0x10e1b212 */
  goto L_10e1b212;
L_10e1b237:;
  /* 10e1b237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b23a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1b23d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1b23f jne 0x10e1b249 */
  if (!C.zf) goto L_10e1b249;
  /* 10e1b241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b244 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b247 jmp 0x10e1b24c */
  goto L_10e1b24c;
L_10e1b249:;
  /* 10e1b249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10e1b24c:;
  /* 10e1b24c mov esp, ebp */
  ESP = (EBP);
  /* 10e1b24e pop ebp */
  EBP = (pop32());
  /* 10e1b24f ret  */
  ESPCHK(0x10e1b200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x10e1b250 (130 bytes, 43 insns) */
void f_10e1b250(void) {
  FTRACE(0x10e1b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b250 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b251 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b253 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b257 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b25d jae 0x10e1b281 */
  if (!C.cf) goto L_10e1b281;
  /* 10e1b25f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b262 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b268 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b26b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b26e mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1b275 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1b27a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b27d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1b27f jne 0x10e1b29c */
  if (!C.zf) goto L_10e1b29c;
L_10e1b281:;
  /* 10e1b281 call 0x10e1a9d0 */
  push32(0x10e1b286u); f_10e1a9d0();
  /* 10e1b286 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1b28c call 0x10e1a9e0 */
  push32(0x10e1b291u); f_10e1a9e0();
  /* 10e1b291 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1b297 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b29a jmp 0x10e1b2ce */
  goto L_10e1b2ce;
L_10e1b29c:;
  /* 10e1b29c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b29f push edx */
  push32((uint32_t)(EDX));
  /* 10e1b2a0 call 0x10e1c1f0 */
  push32(0x10e1b2a5u); f_10e1c1f0();
  /* 10e1b2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b2a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1b2ab push eax */
  push32((uint32_t)(EAX));
  /* 10e1b2ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b2af push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b2b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b2b3 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b2b4 call 0x10e1b2e0 */
  push32(0x10e1b2b9u); f_10e1b2e0();
  /* 10e1b2b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b2bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1b2bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b2c2 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b2c3 call 0x10e1c280 */
  push32(0x10e1b2c8u); f_10e1c280();
  /* 10e1b2c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e1b2ce:;
  /* 10e1b2ce mov esp, ebp */
  ESP = (EBP);
  /* 10e1b2d0 pop ebp */
  EBP = (pop32());
  /* 10e1b2d1 ret  */
  ESPCHK(0x10e1b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2e0 @ 0x10e1b2e0 (178 bytes, 56 insns) */
void f_10e1b2e0(void) {
  FTRACE(0x10e1b2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b2e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b2e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b2e9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b2ea call 0x10e1c070 */
  push32(0x10e1b2efu); f_10e1c070();
  /* 10e1b2ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b2f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1b2f5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b2f9 jne 0x10e1b30e */
  if (!C.zf) goto L_10e1b30e;
  /* 10e1b2fb call 0x10e1a9d0 */
  push32(0x10e1b300u); f_10e1a9d0();
  /* 10e1b300 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1b306 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b309 jmp 0x10e1b38e */
  goto L_10e1b38e;
L_10e1b30e:;
  /* 10e1b30e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1b311 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b312 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b314 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b317 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1b31b push eax */
  push32((uint32_t)(EAX));
  /* 10e1b31c call dword ptr [0x10e40328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40328))), 0x10e1b322u);
  /* 10e1b322 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1b325 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b329 jne 0x10e1b336 */
  if (!C.zf) goto L_10e1b336;
  /* 10e1b32b call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e1b331u);
  /* 10e1b331 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1b334 jmp 0x10e1b33d */
  goto L_10e1b33d;
L_10e1b336:;
  /* 10e1b336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e1b33d:;
  /* 10e1b33d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b341 je 0x10e1b354 */
  if (C.zf) goto L_10e1b354;
  /* 10e1b343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b346 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b347 call 0x10e1a930 */
  push32(0x10e1b34cu); f_10e1a930();
  /* 10e1b34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b34f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b352 jmp 0x10e1b38e */
  goto L_10e1b38e;
L_10e1b354:;
  /* 10e1b354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b357 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e1b35a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b35d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b360 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b363 mov ecx, dword ptr [edx*4 + 0x10e3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e1b36a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10e1b36e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10e1b371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b374 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1b377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b37a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b37d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b380 mov eax, dword ptr [eax*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1b387 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10e1b38b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e1b38e:;
  /* 10e1b38e mov esp, ebp */
  ESP = (EBP);
  /* 10e1b390 pop ebp */
  EBP = (pop32());
  /* 10e1b391 ret  */
  ESPCHK(0x10e1b2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3a0 @ 0x10e1b3a0 (130 bytes, 43 insns) */
void f_10e1b3a0(void) {
  FTRACE(0x10e1b3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b3a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b3a7 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b3ad jae 0x10e1b3d1 */
  if (!C.cf) goto L_10e1b3d1;
  /* 10e1b3af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b3b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b3b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b3b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b3bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b3be mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1b3c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1b3ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b3cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1b3cf jne 0x10e1b3ec */
  if (!C.zf) goto L_10e1b3ec;
L_10e1b3d1:;
  /* 10e1b3d1 call 0x10e1a9d0 */
  push32(0x10e1b3d6u); f_10e1a9d0();
  /* 10e1b3d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1b3dc call 0x10e1a9e0 */
  push32(0x10e1b3e1u); f_10e1a9e0();
  /* 10e1b3e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1b3e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b3ea jmp 0x10e1b41e */
  goto L_10e1b41e;
L_10e1b3ec:;
  /* 10e1b3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b3ef push edx */
  push32((uint32_t)(EDX));
  /* 10e1b3f0 call 0x10e1c1f0 */
  push32(0x10e1b3f5u); f_10e1c1f0();
  /* 10e1b3f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b3f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1b3fb push eax */
  push32((uint32_t)(EAX));
  /* 10e1b3fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b3ff push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b403 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b404 call 0x10e1b430 */
  push32(0x10e1b409u); f_10e1b430();
  /* 10e1b409 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b40c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1b40f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b412 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b413 call 0x10e1c280 */
  push32(0x10e1b418u); f_10e1c280();
  /* 10e1b418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b41b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e1b41e:;
  /* 10e1b41e mov esp, ebp */
  ESP = (EBP);
  /* 10e1b420 pop ebp */
  EBP = (pop32());
  /* 10e1b421 ret  */
  ESPCHK(0x10e1b3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b430 @ 0x10e1b430 (627 bytes, 182 insns) */
void f_10e1b430(void) {
  FTRACE(0x10e1b430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b430 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b431 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b433 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b439 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1b440 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1b443 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10e1b449 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b44d jne 0x10e1b456 */
  if (!C.zf) goto L_10e1b456;
  /* 10e1b44f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b451 jmp 0x10e1b69f */
  goto L_10e1b69f;
L_10e1b456:;
  /* 10e1b456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b459 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b45c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b45f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b462 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b465 mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1b46c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1b471 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b474 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1b476 je 0x10e1b488 */
  if (C.zf) goto L_10e1b488;
  /* 10e1b478 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1b47a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b47c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b47f push edx */
  push32((uint32_t)(EDX));
  /* 10e1b480 call 0x10e1b2e0 */
  push32(0x10e1b485u); f_10e1b2e0();
  /* 10e1b485 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1b488:;
  /* 10e1b488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b48b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1b48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b491 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b494 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b497 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1b49e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e1b4a3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b4a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b4aa je 0x10e1b5bc */
  if (C.zf) goto L_10e1b5bc;
  /* 10e1b4b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b4b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1b4b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e1b4bd:;
  /* 10e1b4bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b4c0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b4c3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b4c6 jae 0x10e1b5ba */
  if (!C.cf) goto L_10e1b5ba;
  /* 10e1b4cc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10e1b4d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e1b4d5:;
  /* 10e1b4d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b4d8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10e1b4de sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b4e0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b4e6 jge 0x10e1b547 */
  if ((C.sf==C.of)) goto L_10e1b547;
  /* 10e1b4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b4eb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b4ee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b4f1 jae 0x10e1b547 */
  if (!C.cf) goto L_10e1b547;
  /* 10e1b4f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b4f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1b4f8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10e1b4fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b501 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b504 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1b507 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10e1b50e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b511 jne 0x10e1b531 */
  if (!C.zf) goto L_10e1b531;
  /* 10e1b513 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10e1b519 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b51c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10e1b522 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b525 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10e1b528 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b52b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b52e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e1b531:;
  /* 10e1b531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b534 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10e1b53a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e1b53c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b53f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b542 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1b545 jmp 0x10e1b4d5 */
  goto L_10e1b4d5;
L_10e1b547:;
  /* 10e1b547 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b549 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10e1b54f push edx */
  push32((uint32_t)(EDX));
  /* 10e1b550 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b553 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10e1b559 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b55b push eax */
  push32((uint32_t)(EAX));
  /* 10e1b55c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10e1b562 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b566 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1b569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b56c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b56f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b572 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1b579 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10e1b57c push eax */
  push32((uint32_t)(EAX));
  /* 10e1b57d call dword ptr [0x10e4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4025c))), 0x10e1b583u);
  /* 10e1b583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b585 je 0x10e1b5aa */
  if (C.zf) goto L_10e1b5aa;
  /* 10e1b587 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1b58a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b590 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e1b593 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1b596 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10e1b59c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b59e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b5a4 jge 0x10e1b5a8 */
  if ((C.sf==C.of)) goto L_10e1b5a8;
  /* 10e1b5a6 jmp 0x10e1b5ba */
  goto L_10e1b5ba;
L_10e1b5a8:;
  /* 10e1b5a8 jmp 0x10e1b5b5 */
  goto L_10e1b5b5;
L_10e1b5aa:;
  /* 10e1b5aa call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e1b5b0u);
  /* 10e1b5b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1b5b3 jmp 0x10e1b5ba */
  goto L_10e1b5ba;
L_10e1b5b5:;
  /* 10e1b5b5 jmp 0x10e1b4bd */
  goto L_10e1b4bd;
L_10e1b5ba:;
  /* 10e1b5ba jmp 0x10e1b60c */
  goto L_10e1b60c;
L_10e1b5bc:;
  /* 10e1b5bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b5be lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10e1b5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b5c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1b5c8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1b5c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b5cc push eax */
  push32((uint32_t)(EAX));
  /* 10e1b5cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b5d0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b5d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b5d6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b5d9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b5dc mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1b5e3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10e1b5e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b5e7 call dword ptr [0x10e4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4025c))), 0x10e1b5edu);
  /* 10e1b5ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b5ef je 0x10e1b603 */
  if (C.zf) goto L_10e1b603;
  /* 10e1b5f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e1b5f8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10e1b5fe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e1b601 jmp 0x10e1b60c */
  goto L_10e1b60c;
L_10e1b603:;
  /* 10e1b603 call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e1b609u);
  /* 10e1b609 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e1b60c:;
  /* 10e1b60c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b610 jne 0x10e1b696 */
  if (!C.zf) goto L_10e1b696;
  /* 10e1b616 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b61a je 0x10e1b64a */
  if (C.zf) goto L_10e1b64a;
  /* 10e1b61c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b620 jne 0x10e1b639 */
  if (!C.zf) goto L_10e1b639;
  /* 10e1b622 call 0x10e1a9d0 */
  push32(0x10e1b627u); f_10e1a9d0();
  /* 10e1b627 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1b62d call 0x10e1a9e0 */
  push32(0x10e1b632u); f_10e1a9e0();
  /* 10e1b632 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1b635 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e1b637 jmp 0x10e1b645 */
  goto L_10e1b645;
L_10e1b639:;
  /* 10e1b639 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1b63c push edx */
  push32((uint32_t)(EDX));
  /* 10e1b63d call 0x10e1a930 */
  push32(0x10e1b642u); f_10e1a930();
  /* 10e1b642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1b645:;
  /* 10e1b645 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b648 jmp 0x10e1b69f */
  goto L_10e1b69f;
L_10e1b64a:;
  /* 10e1b64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b64d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1b650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b653 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b656 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b659 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1b660 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e1b665 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b66a je 0x10e1b67b */
  if (C.zf) goto L_10e1b67b;
  /* 10e1b66c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b66f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1b672 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b675 jne 0x10e1b67b */
  if (!C.zf) goto L_10e1b67b;
  /* 10e1b677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b679 jmp 0x10e1b69f */
  goto L_10e1b69f;
L_10e1b67b:;
  /* 10e1b67b call 0x10e1a9d0 */
  push32(0x10e1b680u); f_10e1a9d0();
  /* 10e1b680 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10e1b686 call 0x10e1a9e0 */
  push32(0x10e1b68bu); f_10e1a9e0();
  /* 10e1b68b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1b691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b694 jmp 0x10e1b69f */
  goto L_10e1b69f;
L_10e1b696:;
  /* 10e1b696 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1b699 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10e1b69f:;
  /* 10e1b69f mov esp, ebp */
  ESP = (EBP);
  /* 10e1b6a1 pop ebp */
  EBP = (pop32());
  /* 10e1b6a2 ret  */
  ESPCHK(0x10e1b430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6b0 @ 0x10e1b6b0 (199 bytes, 68 insns) */
void f_10e1b6b0(void) {
  FTRACE(0x10e1b6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b6b4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1b6b5 push esi */
  push32((uint32_t)(ESI));
  /* 10e1b6b6 push edi */
  push32((uint32_t)(EDI));
L_10e1b6b7:;
  /* 10e1b6b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b6bb jne 0x10e1b6db */
  if (!C.zf) goto L_10e1b6db;
  /* 10e1b6bd push 0x10e39e98 */
  push32((uint32_t)(0x10e39e98u));
  /* 10e1b6c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1b6c4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e1b6c6 push 0x10e39f68 */
  push32((uint32_t)(0x10e39f68u));
  /* 10e1b6cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1b6cd call 0x10e11bc0 */
  push32(0x10e1b6d2u); f_10e11bc0();
  /* 10e1b6d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b6d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b6d8 jne 0x10e1b6db */
  if (!C.zf) goto L_10e1b6db;
  /* 10e1b6da int3  */
  x86_unimpl("int3 @ 0x10e1b6da");
L_10e1b6db:;
  /* 10e1b6db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b6dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b6df jne 0x10e1b6b7 */
  if (!C.zf) goto L_10e1b6b7;
  /* 10e1b6e1 mov ecx, dword ptr [0x10e3e624] */
  ECX = (r32((uint32_t)(0x10e3e624)));
  /* 10e1b6e7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b6ea mov dword ptr [0x10e3e624], ecx */
  w32((uint32_t)(0x10e3e624), (ECX));
  /* 10e1b6f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b6f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1b6f6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10e1b6f8 push 0x10e39f68 */
  push32((uint32_t)(0x10e39f68u));
  /* 10e1b6fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1b6ff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e1b704 call 0x10e12b00 */
  push32(0x10e1b709u); f_10e12b00();
  /* 10e1b709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b70c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e1b712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b715 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b719 je 0x10e1b736 */
  if (C.zf) goto L_10e1b736;
  /* 10e1b71b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b71e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1b721 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1b724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b727 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e1b72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b72d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10e1b734 jmp 0x10e1b75b */
  goto L_10e1b75b;
L_10e1b736:;
  /* 10e1b736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b739 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1b73c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b742 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e1b745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b748 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b74b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b74e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e1b751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b754 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10e1b75b:;
  /* 10e1b75b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b75e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b761 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e1b764 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e1b766 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b769 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e1b770 pop edi */
  EDI = (pop32());
  /* 10e1b771 pop esi */
  ESI = (pop32());
  /* 10e1b772 pop ebx */
  EBX = (pop32());
  /* 10e1b773 mov esp, ebp */
  ESP = (EBP);
  /* 10e1b775 pop ebp */
  EBP = (pop32());
  /* 10e1b776 ret  */
  ESPCHK(0x10e1b6b0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10e1b780 (50 bytes, 17 insns) */
void f_10e1b780(void) {
  FTRACE(0x10e1b780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b780 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b781 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b786 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b78c jb 0x10e1b792 */
  if (C.cf) goto L_10e1b792;
  /* 10e1b78e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1b790 jmp 0x10e1b7b0 */
  goto L_10e1b7b0;
L_10e1b792:;
  /* 10e1b792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b795 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b79b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b79e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b7a1 mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1b7a8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1b7ad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10e1b7b0:;
  /* 10e1b7b0 pop ebp */
  EBP = (pop32());
  /* 10e1b7b1 ret  */
  ESPCHK(0x10e1b780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c0 @ 0x10e1b7c0 (300 bytes, 80 insns) */
void f_10e1b7c0(void) {
  FTRACE(0x10e1b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b7c4 cmp dword ptr [0x10e3fae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b7cb jne 0x10e1b7d9 */
  if (!C.zf) goto L_10e1b7d9;
  /* 10e1b7cd mov dword ptr [0x10e3fae0], 0x200 */
  w32((uint32_t)(0x10e3fae0), (0x200u));
  /* 10e1b7d7 jmp 0x10e1b7ec */
  goto L_10e1b7ec;
L_10e1b7d9:;
  /* 10e1b7d9 cmp dword ptr [0x10e3fae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b7e0 jge 0x10e1b7ec */
  if ((C.sf==C.of)) goto L_10e1b7ec;
  /* 10e1b7e2 mov dword ptr [0x10e3fae0], 0x14 */
  w32((uint32_t)(0x10e3fae0), (0x14u));
L_10e1b7ec:;
  /* 10e1b7ec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10e1b7f1 push 0x10e39f74 */
  push32((uint32_t)(0x10e39f74u));
  /* 10e1b7f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1b7f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e1b7fa mov eax, dword ptr [0x10e3fae0] */
  EAX = (r32((uint32_t)(0x10e3fae0)));
  /* 10e1b7ff push eax */
  push32((uint32_t)(EAX));
  /* 10e1b800 call 0x10e12f10 */
  push32(0x10e1b805u); f_10e12f10();
  /* 10e1b805 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b808 mov dword ptr [0x10e3e798], eax */
  w32((uint32_t)(0x10e3e798), (EAX));
  /* 10e1b80d cmp dword ptr [0x10e3e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b814 jne 0x10e1b855 */
  if (!C.zf) goto L_10e1b855;
  /* 10e1b816 mov dword ptr [0x10e3fae0], 0x14 */
  w32((uint32_t)(0x10e3fae0), (0x14u));
  /* 10e1b820 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10e1b825 push 0x10e39f74 */
  push32((uint32_t)(0x10e39f74u));
  /* 10e1b82a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1b82c push 4 */
  push32((uint32_t)(0x4u));
  /* 10e1b82e mov ecx, dword ptr [0x10e3fae0] */
  ECX = (r32((uint32_t)(0x10e3fae0)));
  /* 10e1b834 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b835 call 0x10e12f10 */
  push32(0x10e1b83au); f_10e12f10();
  /* 10e1b83a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b83d mov dword ptr [0x10e3e798], eax */
  w32((uint32_t)(0x10e3e798), (EAX));
  /* 10e1b842 cmp dword ptr [0x10e3e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b849 jne 0x10e1b855 */
  if (!C.zf) goto L_10e1b855;
  /* 10e1b84b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10e1b84d call 0x10e11a70 */
  push32(0x10e1b852u); f_10e11a70();
  /* 10e1b852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1b855:;
  /* 10e1b855 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1b85c jmp 0x10e1b867 */
  goto L_10e1b867;
L_10e1b85e:;
  /* 10e1b85e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b861 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b864 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e1b867:;
  /* 10e1b867 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b86b jge 0x10e1b886 */
  if ((C.sf==C.of)) goto L_10e1b886;
  /* 10e1b86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b870 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1b873 add eax, 0x10e3d120 */
  { uint32_t _a=(EAX),_b=(0x10e3d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b878 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b87b mov edx, dword ptr [0x10e3e798] */
  EDX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1b881 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10e1b884 jmp 0x10e1b85e */
  goto L_10e1b85e;
L_10e1b886:;
  /* 10e1b886 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1b88d jmp 0x10e1b898 */
  goto L_10e1b898;
L_10e1b88f:;
  /* 10e1b88f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b892 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b895 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1b898:;
  /* 10e1b898 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b89c jge 0x10e1b8e8 */
  if ((C.sf==C.of)) goto L_10e1b8e8;
  /* 10e1b89e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b8a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b8a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b8a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b8aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b8ad mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1b8b4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b8b8 je 0x10e1b8d6 */
  if (C.zf) goto L_10e1b8d6;
  /* 10e1b8ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b8bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b8c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b8c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1b8c6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1b8c9 mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1b8d0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b8d4 jne 0x10e1b8e6 */
  if (!C.zf) goto L_10e1b8e6;
L_10e1b8d6:;
  /* 10e1b8d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1b8d9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1b8dc mov dword ptr [ecx + 0x10e3d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10e3d130), (0xffffffffu));
L_10e1b8e6:;
  /* 10e1b8e6 jmp 0x10e1b88f */
  goto L_10e1b88f;
L_10e1b8e8:;
  /* 10e1b8e8 mov esp, ebp */
  ESP = (EBP);
  /* 10e1b8ea pop ebp */
  EBP = (pop32());
  /* 10e1b8eb ret  */
  ESPCHK(0x10e1b7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x10e1b8f0 (26 bytes, 9 insns) */
void f_10e1b8f0(void) {
  FTRACE(0x10e1b8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b8f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b8f3 call 0x10e1c4f0 */
  push32(0x10e1b8f8u); f_10e1c4f0();
  /* 10e1b8f8 movsx eax, byte ptr [0x10e3e440] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10e3e440))));
  /* 10e1b8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1b901 je 0x10e1b908 */
  if (C.zf) goto L_10e1b908;
  /* 10e1b903 call 0x10e1c2b0 */
  push32(0x10e1b908u); f_10e1c2b0();
L_10e1b908:;
  /* 10e1b908 pop ebp */
  EBP = (pop32());
  /* 10e1b909 ret  */
  ESPCHK(0x10e1b8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b910 @ 0x10e1b910 (61 bytes, 20 insns) */
void f_10e1b910(void) {
  FTRACE(0x10e1b910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b910 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b911 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b913 cmp dword ptr [ebp + 8], 0x10e3d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e3d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b91a jb 0x10e1b93e */
  if (C.cf) goto L_10e1b93e;
  /* 10e1b91c cmp dword ptr [ebp + 8], 0x10e3d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e3d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b923 ja 0x10e1b93e */
  if ((!C.cf&&!C.zf)) goto L_10e1b93e;
  /* 10e1b925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b928 sub eax, 0x10e3d120 */
  { uint32_t _a=(EAX),_b=(0x10e3d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1b930 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b933 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b934 call 0x10e16500 */
  push32(0x10e1b939u); f_10e16500();
  /* 10e1b939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b93c jmp 0x10e1b94b */
  goto L_10e1b94b;
L_10e1b93e:;
  /* 10e1b93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b941 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b944 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b945 call dword ptr [0x10e402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402ec))), 0x10e1b94bu);
L_10e1b94b:;
  /* 10e1b94b pop ebp */
  EBP = (pop32());
  /* 10e1b94c ret  */
  ESPCHK(0x10e1b910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x10e1b950 (41 bytes, 16 insns) */
void f_10e1b950(void) {
  FTRACE(0x10e1b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b950 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b951 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b953 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b957 jge 0x10e1b96a */
  if ((C.sf==C.of)) goto L_10e1b96a;
  /* 10e1b959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b95c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b95f push eax */
  push32((uint32_t)(EAX));
  /* 10e1b960 call 0x10e16500 */
  push32(0x10e1b965u); f_10e16500();
  /* 10e1b965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b968 jmp 0x10e1b977 */
  goto L_10e1b977;
L_10e1b96a:;
  /* 10e1b96a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b96d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b970 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b971 call dword ptr [0x10e402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402ec))), 0x10e1b977u);
L_10e1b977:;
  /* 10e1b977 pop ebp */
  EBP = (pop32());
  /* 10e1b978 ret  */
  ESPCHK(0x10e1b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b980 @ 0x10e1b980 (61 bytes, 20 insns) */
void f_10e1b980(void) {
  FTRACE(0x10e1b980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b980 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b981 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b983 cmp dword ptr [ebp + 8], 0x10e3d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e3d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b98a jb 0x10e1b9ae */
  if (C.cf) goto L_10e1b9ae;
  /* 10e1b98c cmp dword ptr [ebp + 8], 0x10e3d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e3d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b993 ja 0x10e1b9ae */
  if ((!C.cf&&!C.zf)) goto L_10e1b9ae;
  /* 10e1b995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b998 sub eax, 0x10e3d120 */
  { uint32_t _a=(EAX),_b=(0x10e3d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b99d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1b9a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b9a3 push eax */
  push32((uint32_t)(EAX));
  /* 10e1b9a4 call 0x10e165a0 */
  push32(0x10e1b9a9u); f_10e165a0();
  /* 10e1b9a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b9ac jmp 0x10e1b9bb */
  goto L_10e1b9bb;
L_10e1b9ae:;
  /* 10e1b9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b9b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b9b5 call dword ptr [0x10e402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402f0))), 0x10e1b9bbu);
L_10e1b9bb:;
  /* 10e1b9bb pop ebp */
  EBP = (pop32());
  /* 10e1b9bc ret  */
  ESPCHK(0x10e1b980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c0 @ 0x10e1b9c0 (41 bytes, 16 insns) */
void f_10e1b9c0(void) {
  FTRACE(0x10e1b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b9c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1b9c7 jge 0x10e1b9da */
  if ((C.sf==C.of)) goto L_10e1b9da;
  /* 10e1b9c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1b9cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b9cf push eax */
  push32((uint32_t)(EAX));
  /* 10e1b9d0 call 0x10e165a0 */
  push32(0x10e1b9d5u); f_10e165a0();
  /* 10e1b9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b9d8 jmp 0x10e1b9e7 */
  goto L_10e1b9e7;
L_10e1b9da:;
  /* 10e1b9da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1b9dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1b9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1b9e1 call dword ptr [0x10e402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402f0))), 0x10e1b9e7u);
L_10e1b9e7:;
  /* 10e1b9e7 pop ebp */
  EBP = (pop32());
  /* 10e1b9e8 ret  */
  ESPCHK(0x10e1b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x10e1b9f0 (119 bytes, 34 insns) */
void f_10e1b9f0(void) {
  FTRACE(0x10e1b9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1b9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1b9f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1b9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1b9f6 push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e1b9fb call dword ptr [0x10e40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40270))), 0x10e1ba01u);
  /* 10e1ba01 cmp dword ptr [0x10e3e784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ba08 je 0x10e1ba28 */
  if (C.zf) goto L_10e1ba28;
  /* 10e1ba0a push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e1ba0f call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e1ba15u);
  /* 10e1ba15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1ba17 call 0x10e16500 */
  push32(0x10e1ba1cu); f_10e16500();
  /* 10e1ba1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ba1f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e1ba26 jmp 0x10e1ba2f */
  goto L_10e1ba2f;
L_10e1ba28:;
  /* 10e1ba28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e1ba2f:;
  /* 10e1ba2f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10e1ba33 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ba34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ba37 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ba38 call 0x10e1ba70 */
  push32(0x10e1ba3du); f_10e1ba70();
  /* 10e1ba3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ba40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1ba43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ba47 je 0x10e1ba55 */
  if (C.zf) goto L_10e1ba55;
  /* 10e1ba49 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1ba4b call 0x10e165a0 */
  push32(0x10e1ba50u); f_10e165a0();
  /* 10e1ba50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ba53 jmp 0x10e1ba60 */
  goto L_10e1ba60;
L_10e1ba55:;
  /* 10e1ba55 push 0x10e3e794 */
  push32((uint32_t)(0x10e3e794u));
  /* 10e1ba5a call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e1ba60u);
L_10e1ba60:;
  /* 10e1ba60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1ba63 mov esp, ebp */
  ESP = (EBP);
  /* 10e1ba65 pop ebp */
  EBP = (pop32());
  /* 10e1ba66 ret  */
  ESPCHK(0x10e1b9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba70 @ 0x10e1ba70 (160 bytes, 50 insns) */
void f_10e1ba70(void) {
  FTRACE(0x10e1ba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ba70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ba71 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ba73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ba76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ba7a jne 0x10e1ba83 */
  if (!C.zf) goto L_10e1ba83;
  /* 10e1ba7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ba7e jmp 0x10e1bb0c */
  goto L_10e1bb0c;
L_10e1ba83:;
  /* 10e1ba83 cmp dword ptr [0x10e3e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ba8a jne 0x10e1baba */
  if (!C.zf) goto L_10e1baba;
  /* 10e1ba8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ba8f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ba94 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ba99 jle 0x10e1baab */
  if ((C.zf||C.sf!=C.of)) goto L_10e1baab;
  /* 10e1ba9b call 0x10e1a9d0 */
  push32(0x10e1baa0u); f_10e1a9d0();
  /* 10e1baa0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10e1baa6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1baa9 jmp 0x10e1bb0c */
  goto L_10e1bb0c;
L_10e1baab:;
  /* 10e1baab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1baae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10e1bab1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10e1bab3 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1bab8 jmp 0x10e1bb0c */
  goto L_10e1bb0c;
L_10e1baba:;
  /* 10e1baba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1bac1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e1bac4 push eax */
  push32((uint32_t)(EAX));
  /* 10e1bac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1bac7 mov ecx, dword ptr [0x10e3cea4] */
  ECX = (r32((uint32_t)(0x10e3cea4)));
  /* 10e1bacd push ecx */
  push32((uint32_t)(ECX));
  /* 10e1bace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bad1 push edx */
  push32((uint32_t)(EDX));
  /* 10e1bad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1bad4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10e1bad7 push eax */
  push32((uint32_t)(EAX));
  /* 10e1bad8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e1badd mov ecx, dword ptr [0x10e3e618] */
  ECX = (r32((uint32_t)(0x10e3e618)));
  /* 10e1bae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1bae4 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e1baeau);
  /* 10e1baea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1baed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1baf1 je 0x10e1baf9 */
  if (C.zf) goto L_10e1baf9;
  /* 10e1baf3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1baf7 je 0x10e1bb09 */
  if (C.zf) goto L_10e1bb09;
L_10e1baf9:;
  /* 10e1baf9 call 0x10e1a9d0 */
  push32(0x10e1bafeu); f_10e1a9d0();
  /* 10e1bafe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10e1bb04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1bb07 jmp 0x10e1bb0c */
  goto L_10e1bb0c;
L_10e1bb09:;
  /* 10e1bb09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e1bb0c:;
  /* 10e1bb0c mov esp, ebp */
  ESP = (EBP);
  /* 10e1bb0e pop ebp */
  EBP = (pop32());
  /* 10e1bb0f ret  */
  ESPCHK(0x10e1ba70u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10e1bb10 (32 bytes, 18 insns) */
void f_10e1bb10(void) {
  FTRACE(0x10e1bb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1bb10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1bb11 mov ebp, esp */
  EBP = (ESP);
  /* 10e1bb13 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1bb14 push esi */
  push32((uint32_t)(ESI));
  /* 10e1bb15 push edi */
  push32((uint32_t)(EDI));
  /* 10e1bb16 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1bb17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1bb19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1bb1b push 0x10e1bb28 */
  push32((uint32_t)(0x10e1bb28u));
  /* 10e1bb20 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10e1bb23 call 0x10e2325c */
  push32(0x10e1bb28u); f_10e2325c();
  /* 10e1bb28 pop ebp */
  EBP = (pop32());
  /* 10e1bb29 pop edi */
  EDI = (pop32());
  /* 10e1bb2a pop esi */
  ESI = (pop32());
  /* 10e1bb2b pop ebx */
  EBX = (pop32());
  /* 10e1bb2c mov esp, ebp */
  ESP = (EBP);
  /* 10e1bb2e pop ebp */
  EBP = (pop32());
  /* 10e1bb2f ret  */
  ESPCHK(0x10e1bb10u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10e1bb52 (104 bytes, 33 insns) */
void f_10e1bb52(void) {
  FTRACE(0x10e1bb52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1bb52 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1bb53 push esi */
  push32((uint32_t)(ESI));
  /* 10e1bb54 push edi */
  push32((uint32_t)(EDI));
  /* 10e1bb55 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e1bb59 push eax */
  push32((uint32_t)(EAX));
  /* 10e1bb5a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10e1bb5c push 0x10e1bb30 */
  push32((uint32_t)(0x10e1bb30u));
  /* 10e1bb61 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10e1bb68 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10e1bb6f:;
  /* 10e1bb6f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10e1bb73 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1bb76 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1bb79 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bb7c je 0x10e1bbac */
  if (C.zf) goto L_10e1bbac;
  /* 10e1bb7e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bb82 je 0x10e1bbac */
  if (C.zf) goto L_10e1bbac;
  /* 10e1bb84 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10e1bb87 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10e1bb8a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10e1bb8e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10e1bb91 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bb96 jne 0x10e1bbaa */
  if (!C.zf) goto L_10e1bbaa;
  /* 10e1bb98 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10e1bb9d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10e1bba1 call 0x10e1bbe6 */
  push32(0x10e1bba6u); f_10e1bbe6();
  /* 10e1bba6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10e1bbaau);
L_10e1bbaa:;
  /* 10e1bbaa jmp 0x10e1bb6f */
  goto L_10e1bb6f;
L_10e1bbac:;
  /* 10e1bbac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10e1bbb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bbb6 pop edi */
  EDI = (pop32());
  /* 10e1bbb7 pop esi */
  ESI = (pop32());
  /* 10e1bbb8 pop ebx */
  EBX = (pop32());
  /* 10e1bbb9 ret  */
  ESPCHK(0x10e1bb52u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbe6 @ 0x10e1bbe6 (24 bytes, 10 insns) */
void f_10e1bbe6(void) {
  FTRACE(0x10e1bbe6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1bbe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1bbe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1bbe8 mov ebx, 0x10e3d3b8 */
  EBX = (0x10e3d3b8u);
  /* 10e1bbed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bbf0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10e1bbf3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10e1bbf6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10e1bbf9 pop ecx */
  ECX = (pop32());
  /* 10e1bbfa pop ebx */
  EBX = (pop32());
  /* 10e1bbfb ret 4 */
  ESPCHK(0x10e1bbe6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bcc5 @ 0x10e1bcc5 (27 bytes, 11 insns) */
void f_10e1bcc5(void) {
  FTRACE(0x10e1bcc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1bcc5 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1bcc6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e1bcca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10e1bccc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e1bccf push eax */
  push32((uint32_t)(EAX));
  /* 10e1bcd0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e1bcd3 push eax */
  push32((uint32_t)(EAX));
  /* 10e1bcd4 call 0x10e1bb52 */
  push32(0x10e1bcd9u); f_10e1bb52();
  /* 10e1bcd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bcdc pop ebp */
  EBP = (pop32());
  /* 10e1bcdd ret 4 */
  ESPCHK(0x10e1bcc5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bce0 @ 0x10e1bce0 (482 bytes, 138 insns) */
void f_10e1bce0(void) {
  FTRACE(0x10e1bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1bce1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1bce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1bce6 push esi */
  push32((uint32_t)(ESI));
  /* 10e1bce7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10e1bcee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10e1bcf0 call 0x10e16500 */
  push32(0x10e1bcf5u); f_10e16500();
  /* 10e1bcf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bcf8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e1bcff jmp 0x10e1bd0a */
  goto L_10e1bd0a;
L_10e1bd01:;
  /* 10e1bd01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1bd04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bd07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e1bd0a:;
  /* 10e1bd0a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bd0e jge 0x10e1beb0 */
  if ((C.sf==C.of)) goto L_10e1beb0;
  /* 10e1bd14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1bd17 cmp dword ptr [ecx*4 + 0x10e3fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e3fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bd1f je 0x10e1be16 */
  if (C.zf) goto L_10e1be16;
  /* 10e1bd25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1bd28 mov eax, dword ptr [edx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e1bd2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1bd32 jmp 0x10e1bd3d */
  goto L_10e1bd3d;
L_10e1bd34:;
  /* 10e1bd34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bd37 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bd3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e1bd3d:;
  /* 10e1bd3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1bd40 mov eax, dword ptr [edx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e1bd47 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bd4c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bd4f jae 0x10e1be06 */
  if (!C.cf) goto L_10e1be06;
  /* 10e1bd55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bd58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e1bd5c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1bd5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1bd61 jne 0x10e1be01 */
  if (!C.zf) goto L_10e1be01;
  /* 10e1bd67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bd6a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bd6e jne 0x10e1bda9 */
  if (!C.zf) goto L_10e1bda9;
  /* 10e1bd70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e1bd72 call 0x10e16500 */
  push32(0x10e1bd77u); f_10e16500();
  /* 10e1bd77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bd7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bd7d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bd81 jne 0x10e1bd9f */
  if (!C.zf) goto L_10e1bd9f;
  /* 10e1bd83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bd86 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bd89 push edx */
  push32((uint32_t)(EDX));
  /* 10e1bd8a call dword ptr [0x10e402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e8))), 0x10e1bd90u);
  /* 10e1bd90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bd93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1bd96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bd99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bd9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10e1bd9f:;
  /* 10e1bd9f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e1bda1 call 0x10e165a0 */
  push32(0x10e1bda6u); f_10e165a0();
  /* 10e1bda6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1bda9:;
  /* 10e1bda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bdac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bdaf push eax */
  push32((uint32_t)(EAX));
  /* 10e1bdb0 call dword ptr [0x10e402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402ec))), 0x10e1bdb6u);
  /* 10e1bdb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bdb9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e1bdbd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1bdc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1bdc2 je 0x10e1bdd6 */
  if (C.zf) goto L_10e1bdd6;
  /* 10e1bdc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bdc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bdca push eax */
  push32((uint32_t)(EAX));
  /* 10e1bdcb call dword ptr [0x10e402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402f0))), 0x10e1bdd1u);
  /* 10e1bdd1 jmp 0x10e1bd34 */
  goto L_10e1bd34;
L_10e1bdd6:;
  /* 10e1bdd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bdd9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e1bddf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1bde2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1bde5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1bde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1bdeb sub eax, dword ptr [edx*4 + 0x10e3fde0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10e3fde0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1bdf2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1bdf3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10e1bdf8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e1bdfa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1bdfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1bdff jmp 0x10e1be06 */
  goto L_10e1be06;
L_10e1be01:;
  /* 10e1be01 jmp 0x10e1bd34 */
  goto L_10e1bd34;
L_10e1be06:;
  /* 10e1be06 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1be0a je 0x10e1be11 */
  if (C.zf) goto L_10e1be11;
  /* 10e1be0c jmp 0x10e1beb0 */
  goto L_10e1beb0;
L_10e1be11:;
  /* 10e1be11 jmp 0x10e1beab */
  goto L_10e1beab;
L_10e1be16:;
  /* 10e1be16 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10e1be18 push 0x10e39f7c */
  push32((uint32_t)(0x10e39f7cu));
  /* 10e1be1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1be1f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e1be24 call 0x10e12b00 */
  push32(0x10e1be29u); f_10e12b00();
  /* 10e1be29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1be2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1be2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1be33 je 0x10e1bea9 */
  if (C.zf) goto L_10e1bea9;
  /* 10e1be35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1be38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1be3b mov dword ptr [eax*4 + 0x10e3fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10e3fde0), (ECX));
  /* 10e1be42 mov edx, dword ptr [0x10e3ff1c] */
  EDX = (r32((uint32_t)(0x10e3ff1c)));
  /* 10e1be48 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1be4b mov dword ptr [0x10e3ff1c], edx */
  w32((uint32_t)(0x10e3ff1c), (EDX));
  /* 10e1be51 jmp 0x10e1be5c */
  goto L_10e1be5c;
L_10e1be53:;
  /* 10e1be53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1be56 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1be59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1be5c:;
  /* 10e1be5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1be5f mov edx, dword ptr [ecx*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1be66 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1be6c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1be6f jae 0x10e1be94 */
  if (!C.cf) goto L_10e1be94;
  /* 10e1be71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1be74 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e1be78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1be7b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e1be81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1be84 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e1be88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1be8b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e1be92 jmp 0x10e1be53 */
  goto L_10e1be53;
L_10e1be94:;
  /* 10e1be94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1be97 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1be9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1be9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1bea0 push edx */
  push32((uint32_t)(EDX));
  /* 10e1bea1 call 0x10e1c1f0 */
  push32(0x10e1bea6u); f_10e1c1f0();
  /* 10e1bea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1bea9:;
  /* 10e1bea9 jmp 0x10e1beb0 */
  goto L_10e1beb0;
L_10e1beab:;
  /* 10e1beab jmp 0x10e1bd01 */
  goto L_10e1bd01;
L_10e1beb0:;
  /* 10e1beb0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10e1beb2 call 0x10e165a0 */
  push32(0x10e1beb7u); f_10e165a0();
  /* 10e1beb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1beba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1bebd pop esi */
  ESI = (pop32());
  /* 10e1bebe mov esp, ebp */
  ESP = (EBP);
  /* 10e1bec0 pop ebp */
  EBP = (pop32());
  /* 10e1bec1 ret  */
  ESPCHK(0x10e1bce0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10e1bed0 (183 bytes, 57 insns) */
void f_10e1bed0(void) {
  FTRACE(0x10e1bed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1bed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1bed1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1bed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1bed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bed7 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bedd jae 0x10e1bf6a */
  if (!C.cf) goto L_10e1bf6a;
  /* 10e1bee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bee6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1bee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1beec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1beef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1bef2 mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1bef9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1befd jne 0x10e1bf6a */
  if (!C.zf) goto L_10e1bf6a;
  /* 10e1beff cmp dword ptr [0x10e3e400], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e400))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bf06 jne 0x10e1bf4a */
  if (!C.zf) goto L_10e1bf4a;
  /* 10e1bf08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bf0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1bf0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bf12 je 0x10e1bf22 */
  if (C.zf) goto L_10e1bf22;
  /* 10e1bf14 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bf18 je 0x10e1bf30 */
  if (C.zf) goto L_10e1bf30;
  /* 10e1bf1a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bf1e je 0x10e1bf3e */
  if (C.zf) goto L_10e1bf3e;
  /* 10e1bf20 jmp 0x10e1bf4a */
  goto L_10e1bf4a;
L_10e1bf22:;
  /* 10e1bf22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1bf25 push edx */
  push32((uint32_t)(EDX));
  /* 10e1bf26 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10e1bf28 call dword ptr [0x10e40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40330))), 0x10e1bf2eu);
  /* 10e1bf2e jmp 0x10e1bf4a */
  goto L_10e1bf4a;
L_10e1bf30:;
  /* 10e1bf30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1bf33 push eax */
  push32((uint32_t)(EAX));
  /* 10e1bf34 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e1bf36 call dword ptr [0x10e40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40330))), 0x10e1bf3cu);
  /* 10e1bf3c jmp 0x10e1bf4a */
  goto L_10e1bf4a;
L_10e1bf3e:;
  /* 10e1bf3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1bf41 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1bf42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e1bf44 call dword ptr [0x10e40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40330))), 0x10e1bf4au);
L_10e1bf4a:;
  /* 10e1bf4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bf4d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e1bf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bf53 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1bf56 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1bf59 mov ecx, dword ptr [edx*4 + 0x10e3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e1bf60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1bf63 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10e1bf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1bf68 jmp 0x10e1bf83 */
  goto L_10e1bf83;
L_10e1bf6a:;
  /* 10e1bf6a call 0x10e1a9d0 */
  push32(0x10e1bf6fu); f_10e1a9d0();
  /* 10e1bf6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1bf75 call 0x10e1a9e0 */
  push32(0x10e1bf7au); f_10e1a9e0();
  /* 10e1bf7a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1bf80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e1bf83:;
  /* 10e1bf83 mov esp, ebp */
  ESP = (EBP);
  /* 10e1bf85 pop ebp */
  EBP = (pop32());
  /* 10e1bf86 ret  */
  ESPCHK(0x10e1bed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x10e1bf90 (216 bytes, 63 insns) */
void f_10e1bf90(void) {
  FTRACE(0x10e1bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1bf91 mov ebp, esp */
  EBP = (ESP);
  /* 10e1bf93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1bf94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bf97 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bf9d jae 0x10e1c04b */
  if (!C.cf) goto L_10e1c04b;
  /* 10e1bfa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bfa6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1bfa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bfac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1bfaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1bfb2 mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1bfb9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1bfbe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1bfc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1bfc3 je 0x10e1c04b */
  if (C.zf) goto L_10e1c04b;
  /* 10e1bfc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bfcc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e1bfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bfd2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1bfd5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1bfd8 mov ecx, dword ptr [edx*4 + 0x10e3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e1bfdf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bfe3 je 0x10e1c04b */
  if (C.zf) goto L_10e1c04b;
  /* 10e1bfe5 cmp dword ptr [0x10e3e400], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e400))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bfec jne 0x10e1c02a */
  if (!C.zf) goto L_10e1c02a;
  /* 10e1bfee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1bff1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1bff4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bff8 je 0x10e1c008 */
  if (C.zf) goto L_10e1c008;
  /* 10e1bffa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1bffe je 0x10e1c014 */
  if (C.zf) goto L_10e1c014;
  /* 10e1c000 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c004 je 0x10e1c020 */
  if (C.zf) goto L_10e1c020;
  /* 10e1c006 jmp 0x10e1c02a */
  goto L_10e1c02a;
L_10e1c008:;
  /* 10e1c008 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1c00a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10e1c00c call dword ptr [0x10e40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40330))), 0x10e1c012u);
  /* 10e1c012 jmp 0x10e1c02a */
  goto L_10e1c02a;
L_10e1c014:;
  /* 10e1c014 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1c016 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e1c018 call dword ptr [0x10e40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40330))), 0x10e1c01eu);
  /* 10e1c01e jmp 0x10e1c02a */
  goto L_10e1c02a;
L_10e1c020:;
  /* 10e1c020 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1c022 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e1c024 call dword ptr [0x10e40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40330))), 0x10e1c02au);
L_10e1c02a:;
  /* 10e1c02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c02d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1c030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c033 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c036 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c039 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1c040 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10e1c047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c049 jmp 0x10e1c064 */
  goto L_10e1c064;
L_10e1c04b:;
  /* 10e1c04b call 0x10e1a9d0 */
  push32(0x10e1c050u); f_10e1a9d0();
  /* 10e1c050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1c056 call 0x10e1a9e0 */
  push32(0x10e1c05bu); f_10e1a9e0();
  /* 10e1c05b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1c061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e1c064:;
  /* 10e1c064 mov esp, ebp */
  ESP = (EBP);
  /* 10e1c066 pop ebp */
  EBP = (pop32());
  /* 10e1c067 ret  */
  ESPCHK(0x10e1bf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x10e1c070 (102 bytes, 30 insns) */
void f_10e1c070(void) {
  FTRACE(0x10e1c070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c070 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c071 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c076 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c07c jae 0x10e1c0bb */
  if (!C.cf) goto L_10e1c0bb;
  /* 10e1c07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c081 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1c084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c087 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1c08a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c08d mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1c094 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1c099 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c09c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1c09e je 0x10e1c0bb */
  if (C.zf) goto L_10e1c0bb;
  /* 10e1c0a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c0a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e1c0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c0ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c0af mov ecx, dword ptr [edx*4 + 0x10e3fde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e1c0b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10e1c0b9 jmp 0x10e1c0d4 */
  goto L_10e1c0d4;
L_10e1c0bb:;
  /* 10e1c0bb call 0x10e1a9d0 */
  push32(0x10e1c0c0u); f_10e1a9d0();
  /* 10e1c0c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1c0c6 call 0x10e1a9e0 */
  push32(0x10e1c0cbu); f_10e1a9e0();
  /* 10e1c0cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1c0d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e1c0d4:;
  /* 10e1c0d4 pop ebp */
  EBP = (pop32());
  /* 10e1c0d5 ret  */
  ESPCHK(0x10e1c070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e0 @ 0x10e1c0e0 (260 bytes, 83 insns) */
void f_10e1c0e0(void) {
  FTRACE(0x10e1c0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c0e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c0e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e1c0ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c0ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c0f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c0f2 je 0x10e1c0fd */
  if (C.zf) goto L_10e1c0fd;
  /* 10e1c0f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e1c0f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e1c0fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10e1c0fd:;
  /* 10e1c0fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c100 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1c106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1c108 je 0x10e1c112 */
  if (C.zf) goto L_10e1c112;
  /* 10e1c10a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e1c10d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10e1c10f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10e1c112:;
  /* 10e1c112 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c115 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c11b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1c11d je 0x10e1c128 */
  if (C.zf) goto L_10e1c128;
  /* 10e1c11f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e1c122 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10e1c125 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10e1c128:;
  /* 10e1c128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c12b push eax */
  push32((uint32_t)(EAX));
  /* 10e1c12c call dword ptr [0x10e402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402a8))), 0x10e1c132u);
  /* 10e1c132 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1c135 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c139 jne 0x10e1c152 */
  if (!C.zf) goto L_10e1c152;
  /* 10e1c13b call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e1c141u);
  /* 10e1c141 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c142 call 0x10e1a930 */
  push32(0x10e1c147u); f_10e1a930();
  /* 10e1c147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c14a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c14d jmp 0x10e1c1e0 */
  goto L_10e1c1e0;
L_10e1c152:;
  /* 10e1c152 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c156 jne 0x10e1c163 */
  if (!C.zf) goto L_10e1c163;
  /* 10e1c158 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e1c15b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10e1c15e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10e1c161 jmp 0x10e1c172 */
  goto L_10e1c172;
L_10e1c163:;
  /* 10e1c163 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c167 jne 0x10e1c172 */
  if (!C.zf) goto L_10e1c172;
  /* 10e1c169 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e1c16c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10e1c16f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10e1c172:;
  /* 10e1c172 call 0x10e1bce0 */
  push32(0x10e1c177u); f_10e1bce0();
  /* 10e1c177 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1c17a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c17e jne 0x10e1c19b */
  if (!C.zf) goto L_10e1c19b;
  /* 10e1c180 call 0x10e1a9d0 */
  push32(0x10e1c185u); f_10e1a9d0();
  /* 10e1c185 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10e1c18b call 0x10e1a9e0 */
  push32(0x10e1c190u); f_10e1a9e0();
  /* 10e1c190 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1c196 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c199 jmp 0x10e1c1e0 */
  goto L_10e1c1e0;
L_10e1c19b:;
  /* 10e1c19b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c19e push eax */
  push32((uint32_t)(EAX));
  /* 10e1c19f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c1a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c1a3 call 0x10e1bed0 */
  push32(0x10e1c1a8u); f_10e1bed0();
  /* 10e1c1a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c1ab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e1c1ae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10e1c1b1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10e1c1b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c1b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1c1ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c1bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c1c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c1c3 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1c1ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e1c1cd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10e1c1d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c1d5 call 0x10e1c280 */
  push32(0x10e1c1dau); f_10e1c280();
  /* 10e1c1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c1dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e1c1e0:;
  /* 10e1c1e0 mov esp, ebp */
  ESP = (EBP);
  /* 10e1c1e2 pop ebp */
  EBP = (pop32());
  /* 10e1c1e3 ret  */
  ESPCHK(0x10e1c0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f0 @ 0x10e1c1f0 (134 bytes, 44 insns) */
void f_10e1c1f0(void) {
  FTRACE(0x10e1c1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c1f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c1f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1c1fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c1fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c200 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c203 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1c20a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c20c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1c20f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c212 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c216 jne 0x10e1c251 */
  if (!C.zf) goto L_10e1c251;
  /* 10e1c218 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e1c21a call 0x10e16500 */
  push32(0x10e1c21fu); f_10e16500();
  /* 10e1c21f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c225 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c229 jne 0x10e1c247 */
  if (!C.zf) goto L_10e1c247;
  /* 10e1c22b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c22e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c231 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c232 call dword ptr [0x10e402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e8))), 0x10e1c238u);
  /* 10e1c238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c23b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1c23e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c244 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10e1c247:;
  /* 10e1c247 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e1c249 call 0x10e165a0 */
  push32(0x10e1c24eu); f_10e165a0();
  /* 10e1c24e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1c251:;
  /* 10e1c251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c254 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1c257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c25a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c25d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c260 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1c267 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10e1c26b push eax */
  push32((uint32_t)(EAX));
  /* 10e1c26c call dword ptr [0x10e402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402ec))), 0x10e1c272u);
  /* 10e1c272 mov esp, ebp */
  ESP = (EBP);
  /* 10e1c274 pop ebp */
  EBP = (pop32());
  /* 10e1c275 ret  */
  ESPCHK(0x10e1c1f0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10e1c280 (38 bytes, 13 insns) */
void f_10e1c280(void) {
  FTRACE(0x10e1c280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c280 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c281 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c286 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1c289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c28c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c28f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c292 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1c299 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10e1c29d push eax */
  push32((uint32_t)(EAX));
  /* 10e1c29e call dword ptr [0x10e402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402f0))), 0x10e1c2a4u);
  /* 10e1c2a4 pop ebp */
  EBP = (pop32());
  /* 10e1c2a5 ret  */
  ESPCHK(0x10e1c280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x10e1c2b0 (218 bytes, 63 insns) */
void f_10e1c2b0(void) {
  FTRACE(0x10e1c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c2b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c2b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1c2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1c2bf call 0x10e16500 */
  push32(0x10e1c2c4u); f_10e16500();
  /* 10e1c2c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c2c7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10e1c2ce jmp 0x10e1c2d9 */
  goto L_10e1c2d9;
L_10e1c2d0:;
  /* 10e1c2d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c2d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c2d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e1c2d9:;
  /* 10e1c2d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c2dc cmp ecx, dword ptr [0x10e3fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c2e2 jge 0x10e1c379 */
  if ((C.sf==C.of)) goto L_10e1c379;
  /* 10e1c2e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c2eb mov eax, dword ptr [0x10e3e798] */
  EAX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c2f0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c2f4 je 0x10e1c374 */
  if (C.zf) goto L_10e1c374;
  /* 10e1c2f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c2f9 mov edx, dword ptr [0x10e3e798] */
  EDX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c2ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e1c302 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1c305 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c30b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1c30d je 0x10e1c331 */
  if (C.zf) goto L_10e1c331;
  /* 10e1c30f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c312 mov eax, dword ptr [0x10e3e798] */
  EAX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c317 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e1c31a push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c31b call 0x10e1d0a0 */
  push32(0x10e1c320u); f_10e1d0a0();
  /* 10e1c320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c323 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c326 je 0x10e1c331 */
  if (C.zf) goto L_10e1c331;
  /* 10e1c328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c32b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c32e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e1c331:;
  /* 10e1c331 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c335 jl 0x10e1c374 */
  if ((C.sf!=C.of)) goto L_10e1c374;
  /* 10e1c337 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c33a mov ecx, dword ptr [0x10e3e798] */
  ECX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c340 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e1c343 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c346 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c347 call dword ptr [0x10e402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b0))), 0x10e1c34du);
  /* 10e1c34d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1c34f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c352 mov ecx, dword ptr [0x10e3e798] */
  ECX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c358 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e1c35b push edx */
  push32((uint32_t)(EDX));
  /* 10e1c35c call 0x10e13590 */
  push32(0x10e1c361u); f_10e13590();
  /* 10e1c361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c364 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c367 mov ecx, dword ptr [0x10e3e798] */
  ECX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c36d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10e1c374:;
  /* 10e1c374 jmp 0x10e1c2d0 */
  goto L_10e1c2d0;
L_10e1c379:;
  /* 10e1c379 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1c37b call 0x10e165a0 */
  push32(0x10e1c380u); f_10e165a0();
  /* 10e1c380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c386 mov esp, ebp */
  ESP = (EBP);
  /* 10e1c388 pop ebp */
  EBP = (pop32());
  /* 10e1c389 ret  */
  ESPCHK(0x10e1c2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x10e1c390 (68 bytes, 26 insns) */
void f_10e1c390(void) {
  FTRACE(0x10e1c390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c390 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c391 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c393 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c394 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c398 jne 0x10e1c3a6 */
  if (!C.zf) goto L_10e1c3a6;
  /* 10e1c39a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1c39c call 0x10e1c500 */
  push32(0x10e1c3a1u); f_10e1c500();
  /* 10e1c3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c3a4 jmp 0x10e1c3d0 */
  goto L_10e1c3d0;
L_10e1c3a6:;
  /* 10e1c3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c3a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c3aa call 0x10e1b910 */
  push32(0x10e1c3afu); f_10e1b910();
  /* 10e1c3af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c3b6 call 0x10e1c3e0 */
  push32(0x10e1c3bbu); f_10e1c3e0();
  /* 10e1c3bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c3be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1c3c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c3c4 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c3c5 call 0x10e1b980 */
  push32(0x10e1c3cau); f_10e1b980();
  /* 10e1c3ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c3cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e1c3d0:;
  /* 10e1c3d0 mov esp, ebp */
  ESP = (EBP);
  /* 10e1c3d2 pop ebp */
  EBP = (pop32());
  /* 10e1c3d3 ret  */
  ESPCHK(0x10e1c390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e0 @ 0x10e1c3e0 (65 bytes, 26 insns) */
void f_10e1c3e0(void) {
  FTRACE(0x10e1c3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c3e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c3e6 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c3e7 call 0x10e1c430 */
  push32(0x10e1c3ecu); f_10e1c430();
  /* 10e1c3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c3f1 je 0x10e1c3f8 */
  if (C.zf) goto L_10e1c3f8;
  /* 10e1c3f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c3f6 jmp 0x10e1c41f */
  goto L_10e1c41f;
L_10e1c3f8:;
  /* 10e1c3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1c3fe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1c404 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1c406 je 0x10e1c41d */
  if (C.zf) goto L_10e1c41d;
  /* 10e1c408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c40b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1c40e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c40f call 0x10e1d1f0 */
  push32(0x10e1c414u); f_10e1d1f0();
  /* 10e1c414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c417 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1c419 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c41b jmp 0x10e1c41f */
  goto L_10e1c41f;
L_10e1c41d:;
  /* 10e1c41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1c41f:;
  /* 10e1c41f pop ebp */
  EBP = (pop32());
  /* 10e1c420 ret  */
  ESPCHK(0x10e1c3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x10e1c430 (183 bytes, 62 insns) */
void f_10e1c430(void) {
  FTRACE(0x10e1c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c430 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c431 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c436 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1c43d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c440 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1c443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c446 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1c449 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1c44c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c44f jne 0x10e1c4cb */
  if (!C.zf) goto L_10e1c4cb;
  /* 10e1c451 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c454 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1c457 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c45d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1c45f je 0x10e1c4cb */
  if (C.zf) goto L_10e1c4cb;
  /* 10e1c461 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c467 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10e1c469 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c46c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1c46f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c473 jle 0x10e1c4cb */
  if ((C.zf||C.sf!=C.of)) goto L_10e1c4cb;
  /* 10e1c475 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c478 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c479 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c47c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1c47f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c480 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c483 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e1c486 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c487 call 0x10e1b3a0 */
  push32(0x10e1c48cu); f_10e1b3a0();
  /* 10e1c48c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c48f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c492 jne 0x10e1c4b5 */
  if (!C.zf) goto L_10e1c4b5;
  /* 10e1c494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c497 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1c49a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1c4a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1c4a2 je 0x10e1c4b3 */
  if (C.zf) goto L_10e1c4b3;
  /* 10e1c4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c4a7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1c4aa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c4ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c4b0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10e1c4b3:;
  /* 10e1c4b3 jmp 0x10e1c4cb */
  goto L_10e1c4cb;
L_10e1c4b5:;
  /* 10e1c4b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c4b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1c4bb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c4be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c4c1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e1c4c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e1c4cb:;
  /* 10e1c4cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c4ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c4d1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e1c4d4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e1c4d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1c4d9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e1c4e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c4e3 mov esp, ebp */
  ESP = (EBP);
  /* 10e1c4e5 pop ebp */
  EBP = (pop32());
  /* 10e1c4e6 ret  */
  ESPCHK(0x10e1c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4f0 @ 0x10e1c4f0 (15 bytes, 7 insns) */
void f_10e1c4f0(void) {
  FTRACE(0x10e1c4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c4f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c4f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1c4f5 call 0x10e1c500 */
  push32(0x10e1c4fau); f_10e1c500();
  /* 10e1c4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c4fd pop ebp */
  EBP = (pop32());
  /* 10e1c4fe ret  */
  ESPCHK(0x10e1c4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c500 @ 0x10e1c500 (319 bytes, 94 insns) */
void f_10e1c500(void) {
  FTRACE(0x10e1c500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c500 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c501 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c506 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1c50d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1c514 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1c516 call 0x10e16500 */
  push32(0x10e1c51bu); f_10e16500();
  /* 10e1c51b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c51e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e1c525 jmp 0x10e1c530 */
  goto L_10e1c530;
L_10e1c527:;
  /* 10e1c527 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c52a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c52d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e1c530:;
  /* 10e1c530 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c533 cmp ecx, dword ptr [0x10e3fae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3fae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c539 jge 0x10e1c623 */
  if ((C.sf==C.of)) goto L_10e1c623;
  /* 10e1c53f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c542 mov eax, dword ptr [0x10e3e798] */
  EAX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c547 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c54b je 0x10e1c61e */
  if (C.zf) goto L_10e1c61e;
  /* 10e1c551 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c554 mov edx, dword ptr [0x10e3e798] */
  EDX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c55a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e1c55d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1c560 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1c566 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1c568 je 0x10e1c61e */
  if (C.zf) goto L_10e1c61e;
  /* 10e1c56e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c571 mov eax, dword ptr [0x10e3e798] */
  EAX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c576 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e1c579 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c57a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c57d push edx */
  push32((uint32_t)(EDX));
  /* 10e1c57e call 0x10e1b950 */
  push32(0x10e1c583u); f_10e1b950();
  /* 10e1c583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c586 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c589 mov ecx, dword ptr [0x10e3e798] */
  ECX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c58f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e1c592 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e1c595 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c59a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c59c je 0x10e1c605 */
  if (C.zf) goto L_10e1c605;
  /* 10e1c59e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c5a2 jne 0x10e1c5c9 */
  if (!C.zf) goto L_10e1c5c9;
  /* 10e1c5a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c5a7 mov edx, dword ptr [0x10e3e798] */
  EDX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c5ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e1c5b0 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c5b1 call 0x10e1c3e0 */
  push32(0x10e1c5b6u); f_10e1c3e0();
  /* 10e1c5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c5b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c5bc je 0x10e1c5c7 */
  if (C.zf) goto L_10e1c5c7;
  /* 10e1c5be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c5c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c5c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e1c5c7:;
  /* 10e1c5c7 jmp 0x10e1c605 */
  goto L_10e1c605;
L_10e1c5c9:;
  /* 10e1c5c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c5cd jne 0x10e1c605 */
  if (!C.zf) goto L_10e1c605;
  /* 10e1c5cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c5d2 mov eax, dword ptr [0x10e3e798] */
  EAX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c5d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e1c5da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1c5dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1c5e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1c5e2 je 0x10e1c605 */
  if (C.zf) goto L_10e1c605;
  /* 10e1c5e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c5e7 mov ecx, dword ptr [0x10e3e798] */
  ECX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c5ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e1c5f0 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c5f1 call 0x10e1c3e0 */
  push32(0x10e1c5f6u); f_10e1c3e0();
  /* 10e1c5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c5f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c5fc jne 0x10e1c605 */
  if (!C.zf) goto L_10e1c605;
  /* 10e1c5fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10e1c605:;
  /* 10e1c605 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c608 mov ecx, dword ptr [0x10e3e798] */
  ECX = (r32((uint32_t)(0x10e3e798)));
  /* 10e1c60e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e1c611 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c612 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c615 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c616 call 0x10e1b9c0 */
  push32(0x10e1c61bu); f_10e1b9c0();
  /* 10e1c61b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1c61e:;
  /* 10e1c61e jmp 0x10e1c527 */
  goto L_10e1c527;
L_10e1c623:;
  /* 10e1c623 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1c625 call 0x10e165a0 */
  push32(0x10e1c62au); f_10e165a0();
  /* 10e1c62a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c62d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c631 jne 0x10e1c638 */
  if (!C.zf) goto L_10e1c638;
  /* 10e1c633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1c636 jmp 0x10e1c63b */
  goto L_10e1c63b;
L_10e1c638:;
  /* 10e1c638 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e1c63b:;
  /* 10e1c63b mov esp, ebp */
  ESP = (EBP);
  /* 10e1c63d pop ebp */
  EBP = (pop32());
  /* 10e1c63e ret  */
  ESPCHK(0x10e1c500u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10e1c640 (15 bytes, 7 insns) */
void f_10e1c640(void) {
  FTRACE(0x10e1c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c640 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c641 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c643 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1c645 call 0x10e11a70 */
  push32(0x10e1c64au); f_10e11a70();
  /* 10e1c64a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c64d pop ebp */
  EBP = (pop32());
  /* 10e1c64e ret  */
  ESPCHK(0x10e1c640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c650 @ 0x10e1c650 (1007 bytes, 269 insns) */
void f_10e1c650(void) {
  FTRACE(0x10e1c650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1c650 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1c651 mov ebp, esp */
  EBP = (ESP);
  /* 10e1c653 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c65d jl 0x10e1c665 */
  if ((C.sf!=C.of)) goto L_10e1c665;
  /* 10e1c65f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c663 jle 0x10e1c66c */
  if ((C.zf||C.sf!=C.of)) goto L_10e1c66c;
L_10e1c665:;
  /* 10e1c665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c667 jmp 0x10e1ca3b */
  goto L_10e1ca3b;
L_10e1c66c:;
  /* 10e1c66c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1c66e call 0x10e16500 */
  push32(0x10e1c673u); f_10e16500();
  /* 10e1c673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c676 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e1c67d mov eax, dword ptr [0x10e3e784] */
  EAX = (r32((uint32_t)(0x10e3e784)));
  /* 10e1c682 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c685 mov dword ptr [0x10e3e784], eax */
  w32((uint32_t)(0x10e3e784), (EAX));
L_10e1c68a:;
  /* 10e1c68a cmp dword ptr [0x10e3e794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c691 je 0x10e1c69d */
  if (C.zf) goto L_10e1c69d;
  /* 10e1c693 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1c695 call dword ptr [0x10e40334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40334))), 0x10e1c69bu);
  /* 10e1c69b jmp 0x10e1c68a */
  goto L_10e1c68a;
L_10e1c69d:;
  /* 10e1c69d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c6a1 je 0x10e1c6e1 */
  if (C.zf) goto L_10e1c6e1;
  /* 10e1c6a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c6a7 je 0x10e1c6c1 */
  if (C.zf) goto L_10e1c6c1;
  /* 10e1c6a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c6ac push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c6b0 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c6b1 call 0x10e1ca40 */
  push32(0x10e1c6b6u); f_10e1ca40();
  /* 10e1c6b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c6b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10e1c6bf jmp 0x10e1c6d3 */
  goto L_10e1c6d3;
L_10e1c6c1:;
  /* 10e1c6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c6c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c6c7 mov ecx, dword ptr [eax + 0x10e3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10e3d4dc)));
  /* 10e1c6cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10e1c6d3:;
  /* 10e1c6d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10e1c6d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1c6dc jmp 0x10e1ca1b */
  goto L_10e1ca1b;
L_10e1c6e1:;
  /* 10e1c6e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10e1c6e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e1c6ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c6f3 je 0x10e1ca13 */
  if (C.zf) goto L_10e1ca13;
  /* 10e1c6f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c6fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1c6ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c702 jne 0x10e1c924 */
  if (!C.zf) goto L_10e1c924;
  /* 10e1c708 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c70b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e1c70f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c712 jne 0x10e1c924 */
  if (!C.zf) goto L_10e1c924;
  /* 10e1c718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c71b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10e1c71f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c722 jne 0x10e1c924 */
  if (!C.zf) goto L_10e1c924;
  /* 10e1c728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c72b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10e1c731:;
  /* 10e1c731 push 0x10e39fcc */
  push32((uint32_t)(0x10e39fccu));
  /* 10e1c736 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e1c73c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c73d call 0x10e1e8a0 */
  push32(0x10e1c742u); f_10e1e8a0();
  /* 10e1c742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c745 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10e1c74b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c752 je 0x10e1c77d */
  if (C.zf) goto L_10e1c77d;
  /* 10e1c754 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1c75a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c760 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10e1c766 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c76d je 0x10e1c77d */
  if (C.zf) goto L_10e1c77d;
  /* 10e1c76f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1c775 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1c778 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c77b jne 0x10e1c7a3 */
  if (!C.zf) goto L_10e1c7a3;
L_10e1c77d:;
  /* 10e1c77d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c781 je 0x10e1c79c */
  if (C.zf) goto L_10e1c79c;
  /* 10e1c783 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1c785 call 0x10e165a0 */
  push32(0x10e1c78au); f_10e165a0();
  /* 10e1c78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c78d mov edx, dword ptr [0x10e3e784] */
  EDX = (r32((uint32_t)(0x10e3e784)));
  /* 10e1c793 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c796 mov dword ptr [0x10e3e784], edx */
  w32((uint32_t)(0x10e3e784), (EDX));
L_10e1c79c:;
  /* 10e1c79c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c79e jmp 0x10e1ca3b */
  goto L_10e1ca3b;
L_10e1c7a3:;
  /* 10e1c7a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e1c7aa jmp 0x10e1c7b5 */
  goto L_10e1c7b5;
L_10e1c7ac:;
  /* 10e1c7ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1c7af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c7b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e1c7b5:;
  /* 10e1c7b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c7b9 jg 0x10e1c803 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1c803;
  /* 10e1c7bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e1c7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c7c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e1c7c8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c7c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1c7cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c7cf mov ecx, dword ptr [eax + 0x10e3d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10e3d4d8)));
  /* 10e1c7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c7d6 call 0x10e1e860 */
  push32(0x10e1c7dbu); f_10e1e860();
  /* 10e1c7db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c7de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c7e0 jne 0x10e1c801 */
  if (!C.zf) goto L_10e1c801;
  /* 10e1c7e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1c7e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c7e8 mov eax, dword ptr [edx + 0x10e3d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10e3d4d8)));
  /* 10e1c7ee push eax */
  push32((uint32_t)(EAX));
  /* 10e1c7ef call 0x10e15930 */
  push32(0x10e1c7f4u); f_10e15930();
  /* 10e1c7f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c7f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c7fd jne 0x10e1c801 */
  if (!C.zf) goto L_10e1c801;
  /* 10e1c7ff jmp 0x10e1c803 */
  goto L_10e1c803;
L_10e1c801:;
  /* 10e1c801 jmp 0x10e1c7ac */
  goto L_10e1c7ac;
L_10e1c803:;
  /* 10e1c803 push 0x10e39fc8 */
  push32((uint32_t)(0x10e39fc8u));
  /* 10e1c808 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1c80e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c811 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10e1c817 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1c81d push edx */
  push32((uint32_t)(EDX));
  /* 10e1c81e call 0x10e1e820 */
  push32(0x10e1c823u); f_10e1e820();
  /* 10e1c823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c826 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10e1c82c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c833 jne 0x10e1c869 */
  if (!C.zf) goto L_10e1c869;
  /* 10e1c835 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1c83b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1c83e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c841 je 0x10e1c869 */
  if (C.zf) goto L_10e1c869;
  /* 10e1c843 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c847 je 0x10e1c862 */
  if (C.zf) goto L_10e1c862;
  /* 10e1c849 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1c84b call 0x10e165a0 */
  push32(0x10e1c850u); f_10e165a0();
  /* 10e1c850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c853 mov edx, dword ptr [0x10e3e784] */
  EDX = (r32((uint32_t)(0x10e3e784)));
  /* 10e1c859 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1c85c mov dword ptr [0x10e3e784], edx */
  w32((uint32_t)(0x10e3e784), (EDX));
L_10e1c862:;
  /* 10e1c862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1c864 jmp 0x10e1ca3b */
  goto L_10e1ca3b;
L_10e1c869:;
  /* 10e1c869 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c86d jg 0x10e1c8ba */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1c8ba;
  /* 10e1c86f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e1c875 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c876 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1c87c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c87d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10e1c883 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c884 call 0x10e16320 */
  push32(0x10e1c889u); f_10e16320();
  /* 10e1c889 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c88c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e1c892 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10e1c89a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10e1c8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c8a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1c8a4 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c8a5 call 0x10e1ca40 */
  push32(0x10e1c8aau); f_10e1ca40();
  /* 10e1c8aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c8ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c8af je 0x10e1c8ba */
  if (C.zf) goto L_10e1c8ba;
  /* 10e1c8b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c8b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c8b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e1c8ba:;
  /* 10e1c8ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1c8c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c8c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10e1c8cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e1c8d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1c8d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c8d7 je 0x10e1c8e8 */
  if (C.zf) goto L_10e1c8e8;
  /* 10e1c8d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e1c8df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c8e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10e1c8e8:;
  /* 10e1c8e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e1c8ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1c8f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c8f3 jne 0x10e1c731 */
  if (!C.zf) goto L_10e1c731;
  /* 10e1c8f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c8fd je 0x10e1c90c */
  if (C.zf) goto L_10e1c90c;
  /* 10e1c8ff call 0x10e1cbe0 */
  push32(0x10e1c904u); f_10e1cbe0();
  /* 10e1c904 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10e1c90a jmp 0x10e1c916 */
  goto L_10e1c916;
L_10e1c90c:;
  /* 10e1c90c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10e1c916:;
  /* 10e1c916 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10e1c91c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1c91f jmp 0x10e1ca11 */
  goto L_10e1ca11;
L_10e1c924:;
  /* 10e1c924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1c927 push edx */
  push32((uint32_t)(EDX));
  /* 10e1c928 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1c92a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1c92c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10e1c932 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1c936 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c937 call 0x10e1cce0 */
  push32(0x10e1c93cu); f_10e1cce0();
  /* 10e1c93c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c93f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1c942 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c946 je 0x10e1ca11 */
  if (C.zf) goto L_10e1ca11;
  /* 10e1c94c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1c953 jmp 0x10e1c95e */
  goto L_10e1c95e;
L_10e1c955:;
  /* 10e1c955 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1c958 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c95b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e1c95e:;
  /* 10e1c95e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c962 jg 0x10e1c9c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1c9c0;
  /* 10e1c964 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c968 je 0x10e1c9be */
  if (C.zf) goto L_10e1c9be;
  /* 10e1c96a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1c96d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1c970 mov ecx, dword ptr [eax + 0x10e3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10e3d4dc)));
  /* 10e1c976 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c977 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10e1c97d push edx */
  push32((uint32_t)(EDX));
  /* 10e1c97e call 0x10e1e790 */
  push32(0x10e1c983u); f_10e1e790();
  /* 10e1c983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c988 je 0x10e1c9b5 */
  if (C.zf) goto L_10e1c9b5;
  /* 10e1c98a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10e1c990 push eax */
  push32((uint32_t)(EAX));
  /* 10e1c991 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1c994 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c995 call 0x10e1ca40 */
  push32(0x10e1c99au); f_10e1ca40();
  /* 10e1c99a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1c99f je 0x10e1c9ac */
  if (C.zf) goto L_10e1c9ac;
  /* 10e1c9a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c9a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c9a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e1c9aa jmp 0x10e1c9b3 */
  goto L_10e1c9b3;
L_10e1c9ac:;
  /* 10e1c9ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10e1c9b3:;
  /* 10e1c9b3 jmp 0x10e1c9be */
  goto L_10e1c9be;
L_10e1c9b5:;
  /* 10e1c9b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1c9b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c9bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e1c9be:;
  /* 10e1c9be jmp 0x10e1c955 */
  goto L_10e1c955;
L_10e1c9c0:;
  /* 10e1c9c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c9c4 je 0x10e1c9eb */
  if (C.zf) goto L_10e1c9eb;
  /* 10e1c9c6 call 0x10e1cbe0 */
  push32(0x10e1c9cbu); f_10e1cbe0();
  /* 10e1c9cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1c9ce push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1c9d0 mov ecx, dword ptr [0x10e3d4dc] */
  ECX = (r32((uint32_t)(0x10e3d4dc)));
  /* 10e1c9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1c9d7 call 0x10e13590 */
  push32(0x10e1c9dcu); f_10e13590();
  /* 10e1c9dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1c9df mov dword ptr [0x10e3d4dc], 0 */
  w32((uint32_t)(0x10e3d4dc), (0x0u));
  /* 10e1c9e9 jmp 0x10e1ca11 */
  goto L_10e1ca11;
L_10e1c9eb:;
  /* 10e1c9eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1c9ef je 0x10e1c9fe */
  if (C.zf) goto L_10e1c9fe;
  /* 10e1c9f1 call 0x10e1cbe0 */
  push32(0x10e1c9f6u); f_10e1cbe0();
  /* 10e1c9f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10e1c9fc jmp 0x10e1ca08 */
  goto L_10e1ca08;
L_10e1c9fe:;
  /* 10e1c9fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10e1ca08:;
  /* 10e1ca08 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10e1ca0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e1ca11:;
  /* 10e1ca11 jmp 0x10e1ca1b */
  goto L_10e1ca1b;
L_10e1ca13:;
  /* 10e1ca13 call 0x10e1cbe0 */
  push32(0x10e1ca18u); f_10e1cbe0();
  /* 10e1ca18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e1ca1b:;
  /* 10e1ca1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ca1f je 0x10e1ca38 */
  if (C.zf) goto L_10e1ca38;
  /* 10e1ca21 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e1ca23 call 0x10e165a0 */
  push32(0x10e1ca28u); f_10e165a0();
  /* 10e1ca28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ca2b mov eax, dword ptr [0x10e3e784] */
  EAX = (r32((uint32_t)(0x10e3e784)));
  /* 10e1ca30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ca33 mov dword ptr [0x10e3e784], eax */
  w32((uint32_t)(0x10e3e784), (EAX));
L_10e1ca38:;
  /* 10e1ca38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e1ca3b:;
  /* 10e1ca3b mov esp, ebp */
  ESP = (EBP);
  /* 10e1ca3d pop ebp */
  EBP = (pop32());
  /* 10e1ca3e ret  */
  ESPCHK(0x10e1c650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca40 @ 0x10e1ca40 (403 bytes, 117 insns) */
void f_10e1ca40(void) {
  FTRACE(0x10e1ca40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ca40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ca41 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ca43 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ca49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ca4c push eax */
  push32((uint32_t)(EAX));
  /* 10e1ca4d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10e1ca53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ca54 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10e1ca5a push edx */
  push32((uint32_t)(EDX));
  /* 10e1ca5b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10e1ca61 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ca62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ca65 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ca66 call 0x10e1cce0 */
  push32(0x10e1ca6bu); f_10e1cce0();
  /* 10e1ca6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ca6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ca70 jne 0x10e1ca79 */
  if (!C.zf) goto L_10e1ca79;
  /* 10e1ca72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ca74 jmp 0x10e1cbcf */
  goto L_10e1cbcf;
L_10e1ca79:;
  /* 10e1ca79 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10e1ca7e push 0x10e39fd0 */
  push32((uint32_t)(0x10e39fd0u));
  /* 10e1ca83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1ca85 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10e1ca8b push edx */
  push32((uint32_t)(EDX));
  /* 10e1ca8c call 0x10e15930 */
  push32(0x10e1ca91u); f_10e15930();
  /* 10e1ca91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ca94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ca97 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ca98 call 0x10e12b00 */
  push32(0x10e1ca9du); f_10e12b00();
  /* 10e1ca9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1caa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1caa3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1caa7 jne 0x10e1cab0 */
  if (!C.zf) goto L_10e1cab0;
  /* 10e1caa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1caab jmp 0x10e1cbcf */
  goto L_10e1cbcf;
L_10e1cab0:;
  /* 10e1cab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cab3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cab6 mov ecx, dword ptr [eax + 0x10e3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10e3d4dc)));
  /* 10e1cabc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1cabf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cac2 mov eax, dword ptr [edx*4 + 0x10e3e600] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3e600)));
  /* 10e1cac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1cacc push 6 */
  push32((uint32_t)(0x6u));
  /* 10e1cace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cad1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cad4 add ecx, 0x10e3e650 */
  { uint32_t _a=(ECX),_b=(0x10e3e650u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cada push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cadb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10e1cade push edx */
  push32((uint32_t)(EDX));
  /* 10e1cadf call 0x10e193e0 */
  push32(0x10e1cae4u); f_10e193e0();
  /* 10e1cae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cae7 mov eax, dword ptr [0x10e3e618] */
  EAX = (r32((uint32_t)(0x10e3e618)));
  /* 10e1caec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e1caef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10e1caf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1caf6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1caf9 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cafa call 0x10e15ab0 */
  push32(0x10e1caffu); f_10e15ab0();
  /* 10e1caff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cb02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cb05 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cb08 mov dword ptr [ecx + 0x10e3d4dc], eax */
  w32((uint32_t)(ECX + 0x10e3d4dc), (EAX));
  /* 10e1cb0e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10e1cb14 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1cb1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cb1d mov dword ptr [eax*4 + 0x10e3e600], edx */
  w32((uint32_t)(EAX*4 + 0x10e3e600), (EDX));
  /* 10e1cb24 push 6 */
  push32((uint32_t)(0x6u));
  /* 10e1cb26 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10e1cb2c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cb2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cb30 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cb33 add edx, 0x10e3e650 */
  { uint32_t _a=(EDX),_b=(0x10e3e650u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cb39 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cb3a call 0x10e193e0 */
  push32(0x10e1cb3fu); f_10e193e0();
  /* 10e1cb3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cb42 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cb46 jne 0x10e1cb53 */
  if (!C.zf) goto L_10e1cb53;
  /* 10e1cb48 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1cb4e mov dword ptr [0x10e3e618], eax */
  w32((uint32_t)(0x10e3e618), (EAX));
L_10e1cb53:;
  /* 10e1cb53 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cb57 jne 0x10e1cb65 */
  if (!C.zf) goto L_10e1cb65;
  /* 10e1cb59 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e1cb5f mov dword ptr [0x10e3e61c], ecx */
  w32((uint32_t)(0x10e3e61c), (ECX));
L_10e1cb65:;
  /* 10e1cb65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cb68 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cb6b call dword ptr [edx + 0x10e3d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10e3d4e0))), 0x10e1cb71u);
  /* 10e1cb71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cb73 je 0x10e1cbac */
  if (C.zf) goto L_10e1cbac;
  /* 10e1cb75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cb78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cb7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1cb7e mov dword ptr [eax + 0x10e3d4dc], ecx */
  w32((uint32_t)(EAX + 0x10e3d4dc), (ECX));
  /* 10e1cb84 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1cb86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1cb89 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cb8a call 0x10e13590 */
  push32(0x10e1cb8fu); f_10e13590();
  /* 10e1cb8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cb92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cb95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cb98 mov dword ptr [eax*4 + 0x10e3e600], ecx */
  w32((uint32_t)(EAX*4 + 0x10e3e600), (ECX));
  /* 10e1cb9f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1cba2 mov dword ptr [0x10e3e618], edx */
  w32((uint32_t)(0x10e3e618), (EDX));
  /* 10e1cba8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1cbaa jmp 0x10e1cbcf */
  goto L_10e1cbcf;
L_10e1cbac:;
  /* 10e1cbac cmp dword ptr [ebp - 0xc], 0x10e3d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10e3d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cbb3 je 0x10e1cbc3 */
  if (C.zf) goto L_10e1cbc3;
  /* 10e1cbb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1cbb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1cbba push eax */
  push32((uint32_t)(EAX));
  /* 10e1cbbb call 0x10e13590 */
  push32(0x10e1cbc0u); f_10e13590();
  /* 10e1cbc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1cbc3:;
  /* 10e1cbc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cbc6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cbc9 mov eax, dword ptr [ecx + 0x10e3d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10e3d4dc)));
L_10e1cbcf:;
  /* 10e1cbcf mov esp, ebp */
  ESP = (EBP);
  /* 10e1cbd1 pop ebp */
  EBP = (pop32());
  /* 10e1cbd2 ret  */
  ESPCHK(0x10e1ca40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x10e1cbe0 (256 bytes, 72 insns) */
void f_10e1cbe0(void) {
  FTRACE(0x10e1cbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1cbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1cbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1cbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1cbe6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e1cbed cmp dword ptr [0x10e3d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cbf4 jne 0x10e1cc14 */
  if (!C.zf) goto L_10e1cc14;
  /* 10e1cbf6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10e1cbfb push 0x10e39fd0 */
  push32((uint32_t)(0x10e39fd0u));
  /* 10e1cc00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1cc02 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10e1cc07 call 0x10e12b00 */
  push32(0x10e1cc0cu); f_10e12b00();
  /* 10e1cc0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cc0f mov dword ptr [0x10e3d4dc], eax */
  w32((uint32_t)(0x10e3d4dc), (EAX));
L_10e1cc14:;
  /* 10e1cc14 mov eax, dword ptr [0x10e3d4dc] */
  EAX = (r32((uint32_t)(0x10e3d4dc)));
  /* 10e1cc19 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e1cc1c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e1cc23 jmp 0x10e1cc2e */
  goto L_10e1cc2e;
L_10e1cc25:;
  /* 10e1cc25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cc28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cc2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e1cc2e:;
  /* 10e1cc2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cc31 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cc34 mov eax, dword ptr [edx + 0x10e3d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10e3d4dc)));
  /* 10e1cc3a push eax */
  push32((uint32_t)(EAX));
  /* 10e1cc3b push 0x10e39fdc */
  push32((uint32_t)(0x10e39fdcu));
  /* 10e1cc40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cc43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cc46 mov edx, dword ptr [ecx + 0x10e3d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10e3d4d8)));
  /* 10e1cc4c push edx */
  push32((uint32_t)(EDX));
  /* 10e1cc4d push 3 */
  push32((uint32_t)(0x3u));
  /* 10e1cc4f mov eax, dword ptr [0x10e3d4dc] */
  EAX = (r32((uint32_t)(0x10e3d4dc)));
  /* 10e1cc54 push eax */
  push32((uint32_t)(EAX));
  /* 10e1cc55 call 0x10e1ce80 */
  push32(0x10e1cc5au); f_10e1ce80();
  /* 10e1cc5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cc5d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cc61 jge 0x10e1cca9 */
  if ((C.sf==C.of)) goto L_10e1cca9;
  /* 10e1cc63 push 0x10e39fc8 */
  push32((uint32_t)(0x10e39fc8u));
  /* 10e1cc68 mov ecx, dword ptr [0x10e3d4dc] */
  ECX = (r32((uint32_t)(0x10e3d4dc)));
  /* 10e1cc6e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cc6f call 0x10e15ac0 */
  push32(0x10e1cc74u); f_10e15ac0();
  /* 10e1cc74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cc77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cc7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cc7d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cc80 mov eax, dword ptr [edx + 0x10e3d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10e3d4dc)));
  /* 10e1cc86 push eax */
  push32((uint32_t)(EAX));
  /* 10e1cc87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cc8a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1cc8d mov edx, dword ptr [ecx + 0x10e3d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10e3d4dc)));
  /* 10e1cc93 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cc94 call 0x10e1e790 */
  push32(0x10e1cc99u); f_10e1e790();
  /* 10e1cc99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cc9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cc9e je 0x10e1cca7 */
  if (C.zf) goto L_10e1cca7;
  /* 10e1cca0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e1cca7:;
  /* 10e1cca7 jmp 0x10e1ccd7 */
  goto L_10e1ccd7;
L_10e1cca9:;
  /* 10e1cca9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ccad jne 0x10e1ccb6 */
  if (!C.zf) goto L_10e1ccb6;
  /* 10e1ccaf mov eax, dword ptr [0x10e3d4dc] */
  EAX = (r32((uint32_t)(0x10e3d4dc)));
  /* 10e1ccb4 jmp 0x10e1ccdc */
  goto L_10e1ccdc;
L_10e1ccb6:;
  /* 10e1ccb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1ccb8 mov eax, dword ptr [0x10e3d4dc] */
  EAX = (r32((uint32_t)(0x10e3d4dc)));
  /* 10e1ccbd push eax */
  push32((uint32_t)(EAX));
  /* 10e1ccbe call 0x10e13590 */
  push32(0x10e1ccc3u); f_10e13590();
  /* 10e1ccc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ccc6 mov dword ptr [0x10e3d4dc], 0 */
  w32((uint32_t)(0x10e3d4dc), (0x0u));
  /* 10e1ccd0 mov eax, dword ptr [0x10e3d4f4] */
  EAX = (r32((uint32_t)(0x10e3d4f4)));
  /* 10e1ccd5 jmp 0x10e1ccdc */
  goto L_10e1ccdc;
L_10e1ccd7:;
  /* 10e1ccd7 jmp 0x10e1cc25 */
  goto L_10e1cc25;
L_10e1ccdc:;
  /* 10e1ccdc mov esp, ebp */
  ESP = (EBP);
  /* 10e1ccde pop ebp */
  EBP = (pop32());
  /* 10e1ccdf ret  */
  ESPCHK(0x10e1cbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x10e1cce0 (388 bytes, 115 insns) */
void f_10e1cce0(void) {
  FTRACE(0x10e1cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1cce1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1cce3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1cce9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cced jne 0x10e1ccf6 */
  if (!C.zf) goto L_10e1ccf6;
  /* 10e1ccef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ccf1 jmp 0x10e1ce60 */
  goto L_10e1ce60;
L_10e1ccf6:;
  /* 10e1ccf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ccf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1ccfc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ccff jne 0x10e1cd50 */
  if (!C.zf) goto L_10e1cd50;
  /* 10e1cd01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cd04 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e1cd08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cd0a jne 0x10e1cd50 */
  if (!C.zf) goto L_10e1cd50;
  /* 10e1cd0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cd0f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10e1cd12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cd15 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10e1cd19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cd1d je 0x10e1cd39 */
  if (C.zf) goto L_10e1cd39;
  /* 10e1cd1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1cd22 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10e1cd27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1cd2a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10e1cd30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1cd33 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10e1cd39:;
  /* 10e1cd39 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cd3d je 0x10e1cd48 */
  if (C.zf) goto L_10e1cd48;
  /* 10e1cd3f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1cd42 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e1cd48:;
  /* 10e1cd48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cd4b jmp 0x10e1ce60 */
  goto L_10e1ce60;
L_10e1cd50:;
  /* 10e1cd50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cd53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cd54 push 0x10e3d450 */
  push32((uint32_t)(0x10e3d450u));
  /* 10e1cd59 call 0x10e1e790 */
  push32(0x10e1cd5eu); f_10e1e790();
  /* 10e1cd5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cd61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cd63 je 0x10e1ce18 */
  if (C.zf) goto L_10e1ce18;
  /* 10e1cd69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cd6c push edx */
  push32((uint32_t)(EDX));
  /* 10e1cd6d push 0x10e3d3cc */
  push32((uint32_t)(0x10e3d3ccu));
  /* 10e1cd72 call 0x10e1e790 */
  push32(0x10e1cd77u); f_10e1e790();
  /* 10e1cd77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cd7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cd7c je 0x10e1ce18 */
  if (C.zf) goto L_10e1ce18;
  /* 10e1cd82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cd85 push eax */
  push32((uint32_t)(EAX));
  /* 10e1cd86 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10e1cd8c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cd8d call 0x10e1ced0 */
  push32(0x10e1cd92u); f_10e1ced0();
  /* 10e1cd92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cd95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cd97 je 0x10e1cda0 */
  if (C.zf) goto L_10e1cda0;
  /* 10e1cd99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1cd9b jmp 0x10e1ce60 */
  goto L_10e1ce60;
L_10e1cda0:;
  /* 10e1cda0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10e1cda6 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cda7 push 0x10e3e628 */
  push32((uint32_t)(0x10e3e628u));
  /* 10e1cdac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10e1cdb2 push eax */
  push32((uint32_t)(EAX));
  /* 10e1cdb3 call 0x10e1e8e0 */
  push32(0x10e1cdb8u); f_10e1e8e0();
  /* 10e1cdb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cdbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cdbd jne 0x10e1cdc6 */
  if (!C.zf) goto L_10e1cdc6;
  /* 10e1cdbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1cdc1 jmp 0x10e1ce60 */
  goto L_10e1ce60;
L_10e1cdc6:;
  /* 10e1cdc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1cdc8 mov cx, word ptr [0x10e3e62c] */
  CX = (r16((uint32_t)(0x10e3e62c)));
  /* 10e1cdcf mov dword ptr [0x10e3e630], ecx */
  w32((uint32_t)(0x10e3e630), (ECX));
  /* 10e1cdd5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10e1cddb push edx */
  push32((uint32_t)(EDX));
  /* 10e1cddc push 0x10e3d450 */
  push32((uint32_t)(0x10e3d450u));
  /* 10e1cde1 call 0x10e1d030 */
  push32(0x10e1cde6u); f_10e1d030();
  /* 10e1cde6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cde9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cdec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1cdef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1cdf1 je 0x10e1ce06 */
  if (C.zf) goto L_10e1ce06;
  /* 10e1cdf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cdf6 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cdf7 push 0x10e3d3cc */
  push32((uint32_t)(0x10e3d3ccu));
  /* 10e1cdfc call 0x10e15ab0 */
  push32(0x10e1ce01u); f_10e15ab0();
  /* 10e1ce01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ce04 jmp 0x10e1ce18 */
  goto L_10e1ce18;
L_10e1ce06:;
  /* 10e1ce06 push 0x10e3d450 */
  push32((uint32_t)(0x10e3d450u));
  /* 10e1ce0b push 0x10e3d3cc */
  push32((uint32_t)(0x10e3d3ccu));
  /* 10e1ce10 call 0x10e15ab0 */
  push32(0x10e1ce15u); f_10e15ab0();
  /* 10e1ce15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1ce18:;
  /* 10e1ce18 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ce1c je 0x10e1ce31 */
  if (C.zf) goto L_10e1ce31;
  /* 10e1ce1e push 6 */
  push32((uint32_t)(0x6u));
  /* 10e1ce20 push 0x10e3e628 */
  push32((uint32_t)(0x10e3e628u));
  /* 10e1ce25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ce28 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ce29 call 0x10e193e0 */
  push32(0x10e1ce2eu); f_10e193e0();
  /* 10e1ce2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1ce31:;
  /* 10e1ce31 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ce35 je 0x10e1ce4a */
  if (C.zf) goto L_10e1ce4a;
  /* 10e1ce37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e1ce39 push 0x10e3e630 */
  push32((uint32_t)(0x10e3e630u));
  /* 10e1ce3e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1ce41 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ce42 call 0x10e193e0 */
  push32(0x10e1ce47u); f_10e193e0();
  /* 10e1ce47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1ce4a:;
  /* 10e1ce4a push 0x10e3d450 */
  push32((uint32_t)(0x10e3d450u));
  /* 10e1ce4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ce52 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ce53 call 0x10e15ab0 */
  push32(0x10e1ce58u); f_10e15ab0();
  /* 10e1ce58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ce5b mov eax, 0x10e3d450 */
  EAX = (0x10e3d450u);
L_10e1ce60:;
  /* 10e1ce60 mov esp, ebp */
  ESP = (EBP);
  /* 10e1ce62 pop ebp */
  EBP = (pop32());
  /* 10e1ce63 ret  */
  ESPCHK(0x10e1cce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x10e1ce70 (7 bytes, 5 insns) */
void f_10e1ce70(void) {
  FTRACE(0x10e1ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ce71 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ce73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ce75 pop ebp */
  EBP = (pop32());
  /* 10e1ce76 ret  */
  ESPCHK(0x10e1ce70u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10e1ce80 (79 bytes, 28 insns) */
void f_10e1ce80(void) {
  FTRACE(0x10e1ce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ce80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ce81 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ce83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ce86 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e1ce89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1ce8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1ce93 jmp 0x10e1ce9e */
  goto L_10e1ce9e;
L_10e1ce95:;
  /* 10e1ce95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1ce98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ce9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e1ce9e:;
  /* 10e1ce9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1cea1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cea4 jge 0x10e1cec4 */
  if ((C.sf==C.of)) goto L_10e1cec4;
  /* 10e1cea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cea9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ceac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1ceaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1ceb2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e1ceb5 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ceb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ceb9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ceba call 0x10e15ac0 */
  push32(0x10e1cebfu); f_10e15ac0();
  /* 10e1cebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cec2 jmp 0x10e1ce95 */
  goto L_10e1ce95;
L_10e1cec4:;
  /* 10e1cec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1cecb mov esp, ebp */
  ESP = (EBP);
  /* 10e1cecd pop ebp */
  EBP = (pop32());
  /* 10e1cece ret  */
  ESPCHK(0x10e1ce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x10e1ced0 (349 bytes, 122 insns) */
void f_10e1ced0(void) {
  FTRACE(0x10e1ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ced1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ced3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ced6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10e1cedb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1cedd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cee0 push eax */
  push32((uint32_t)(EAX));
  /* 10e1cee1 call 0x10e16870 */
  push32(0x10e1cee6u); f_10e16870();
  /* 10e1cee6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cee9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ceec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1ceef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1cef1 jne 0x10e1cefa */
  if (!C.zf) goto L_10e1cefa;
  /* 10e1cef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1cef5 jmp 0x10e1d029 */
  goto L_10e1d029;
L_10e1cefa:;
  /* 10e1cefa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cefd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1cf00 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cf03 jne 0x10e1cf30 */
  if (!C.zf) goto L_10e1cf30;
  /* 10e1cf05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cf08 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e1cf0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cf0e je 0x10e1cf30 */
  if (C.zf) goto L_10e1cf30;
  /* 10e1cf10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cf13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cf16 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cf17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cf1a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cf20 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cf21 call 0x10e15ab0 */
  push32(0x10e1cf26u); f_10e15ab0();
  /* 10e1cf26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cf29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1cf2b jmp 0x10e1d029 */
  goto L_10e1d029;
L_10e1cf30:;
  /* 10e1cf30 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1cf37 jmp 0x10e1cf42 */
  goto L_10e1cf42;
L_10e1cf39:;
  /* 10e1cf39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1cf3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cf3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1cf42:;
  /* 10e1cf42 push 0x10e39fe0 */
  push32((uint32_t)(0x10e39fe0u));
  /* 10e1cf47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cf4a push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cf4b call 0x10e1e820 */
  push32(0x10e1cf50u); f_10e1e820();
  /* 10e1cf50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cf53 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1cf56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cf5a jne 0x10e1cf64 */
  if (!C.zf) goto L_10e1cf64;
  /* 10e1cf5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1cf5f jmp 0x10e1d029 */
  goto L_10e1d029;
L_10e1cf64:;
  /* 10e1cf64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cf67 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cf6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1cf6c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10e1cf6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cf73 jne 0x10e1cf9a */
  if (!C.zf) goto L_10e1cf9a;
  /* 10e1cf75 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cf79 jge 0x10e1cf9a */
  if ((C.sf==C.of)) goto L_10e1cf9a;
  /* 10e1cf7b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1cf7f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cf82 je 0x10e1cf9a */
  if (C.zf) goto L_10e1cf9a;
  /* 10e1cf84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1cf87 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cf88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cf8b push eax */
  push32((uint32_t)(EAX));
  /* 10e1cf8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cf8f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cf90 call 0x10e16320 */
  push32(0x10e1cf95u); f_10e16320();
  /* 10e1cf95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cf98 jmp 0x10e1d000 */
  goto L_10e1d000;
L_10e1cf9a:;
  /* 10e1cf9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cf9e jne 0x10e1cfc8 */
  if (!C.zf) goto L_10e1cfc8;
  /* 10e1cfa0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cfa4 jge 0x10e1cfc8 */
  if ((C.sf==C.of)) goto L_10e1cfc8;
  /* 10e1cfa6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1cfaa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cfad je 0x10e1cfc8 */
  if (C.zf) goto L_10e1cfc8;
  /* 10e1cfaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1cfb2 push eax */
  push32((uint32_t)(EAX));
  /* 10e1cfb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cfb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cfb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cfba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cfbd push edx */
  push32((uint32_t)(EDX));
  /* 10e1cfbe call 0x10e16320 */
  push32(0x10e1cfc3u); f_10e16320();
  /* 10e1cfc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cfc6 jmp 0x10e1d000 */
  goto L_10e1d000;
L_10e1cfc8:;
  /* 10e1cfc8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cfcc jne 0x10e1cffb */
  if (!C.zf) goto L_10e1cffb;
  /* 10e1cfce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1cfd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1cfd4 je 0x10e1cfdf */
  if (C.zf) goto L_10e1cfdf;
  /* 10e1cfd6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1cfda cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1cfdd jne 0x10e1cffb */
  if (!C.zf) goto L_10e1cffb;
L_10e1cfdf:;
  /* 10e1cfdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1cfe2 push edx */
  push32((uint32_t)(EDX));
  /* 10e1cfe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1cfe6 push eax */
  push32((uint32_t)(EAX));
  /* 10e1cfe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1cfea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cff0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1cff1 call 0x10e16320 */
  push32(0x10e1cff6u); f_10e16320();
  /* 10e1cff6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1cff9 jmp 0x10e1d000 */
  goto L_10e1d000;
L_10e1cffb:;
  /* 10e1cffb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1cffe jmp 0x10e1d029 */
  goto L_10e1d029;
L_10e1d000:;
  /* 10e1d000 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1d004 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d007 jne 0x10e1d00b */
  if (!C.zf) goto L_10e1d00b;
  /* 10e1d009 jmp 0x10e1d027 */
  goto L_10e1d027;
L_10e1d00b:;
  /* 10e1d00b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1d00f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d011 jne 0x10e1d015 */
  if (!C.zf) goto L_10e1d015;
  /* 10e1d013 jmp 0x10e1d027 */
  goto L_10e1d027;
L_10e1d015:;
  /* 10e1d015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d018 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1d01b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10e1d01f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e1d022 jmp 0x10e1cf39 */
  goto L_10e1cf39;
L_10e1d027:;
  /* 10e1d027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1d029:;
  /* 10e1d029 mov esp, ebp */
  ESP = (EBP);
  /* 10e1d02b pop ebp */
  EBP = (pop32());
  /* 10e1d02c ret  */
  ESPCHK(0x10e1ced0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10e1d030 (101 bytes, 36 insns) */
void f_10e1d030(void) {
  FTRACE(0x10e1d030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1d030 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1d031 mov ebp, esp */
  EBP = (ESP);
  /* 10e1d033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1d036 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d03a push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d03b call 0x10e15ab0 */
  push32(0x10e1d040u); f_10e15ab0();
  /* 10e1d040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1d046 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10e1d04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d04c je 0x10e1d068 */
  if (C.zf) goto L_10e1d068;
  /* 10e1d04e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1d051 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d054 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d055 push 0x10e39fe8 */
  push32((uint32_t)(0x10e39fe8u));
  /* 10e1d05a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d05c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d05f push edx */
  push32((uint32_t)(EDX));
  /* 10e1d060 call 0x10e1ce80 */
  push32(0x10e1d065u); f_10e1ce80();
  /* 10e1d065 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1d068:;
  /* 10e1d068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1d06b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10e1d072 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1d074 je 0x10e1d093 */
  if (C.zf) goto L_10e1d093;
  /* 10e1d076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1d079 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d07f push edx */
  push32((uint32_t)(EDX));
  /* 10e1d080 push 0x10e39fe4 */
  push32((uint32_t)(0x10e39fe4u));
  /* 10e1d085 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d08a push eax */
  push32((uint32_t)(EAX));
  /* 10e1d08b call 0x10e1ce80 */
  push32(0x10e1d090u); f_10e1ce80();
  /* 10e1d090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1d093:;
  /* 10e1d093 pop ebp */
  EBP = (pop32());
  /* 10e1d094 ret  */
  ESPCHK(0x10e1d030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x10e1d0a0 (130 bytes, 50 insns) */
void f_10e1d0a0(void) {
  FTRACE(0x10e1d0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1d0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1d0a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1d0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d0a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1d0a5 push esi */
  push32((uint32_t)(ESI));
  /* 10e1d0a6 push edi */
  push32((uint32_t)(EDI));
  /* 10e1d0a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e1d0ae:;
  /* 10e1d0ae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d0b2 jne 0x10e1d0d2 */
  if (!C.zf) goto L_10e1d0d2;
  /* 10e1d0b4 push 0x10e39ff8 */
  push32((uint32_t)(0x10e39ff8u));
  /* 10e1d0b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1d0bb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10e1d0bd push 0x10e39fec */
  push32((uint32_t)(0x10e39fecu));
  /* 10e1d0c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d0c4 call 0x10e11bc0 */
  push32(0x10e1d0c9u); f_10e11bc0();
  /* 10e1d0c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d0cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d0cf jne 0x10e1d0d2 */
  if (!C.zf) goto L_10e1d0d2;
  /* 10e1d0d1 int3  */
  x86_unimpl("int3 @ 0x10e1d0d1");
L_10e1d0d2:;
  /* 10e1d0d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1d0d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d0d6 jne 0x10e1d0ae */
  if (!C.zf) goto L_10e1d0ae;
  /* 10e1d0d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d0db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1d0de and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1d0e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1d0e3 je 0x10e1d0f1 */
  if (C.zf) goto L_10e1d0f1;
  /* 10e1d0e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d0e8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10e1d0ef jmp 0x10e1d118 */
  goto L_10e1d118;
L_10e1d0f1:;
  /* 10e1d0f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d0f5 call 0x10e1b910 */
  push32(0x10e1d0fau); f_10e1b910();
  /* 10e1d0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d0fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d100 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d101 call 0x10e1d130 */
  push32(0x10e1d106u); f_10e1d130();
  /* 10e1d106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1d10c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d10f push eax */
  push32((uint32_t)(EAX));
  /* 10e1d110 call 0x10e1b980 */
  push32(0x10e1d115u); f_10e1b980();
  /* 10e1d115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1d118:;
  /* 10e1d118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d11b pop edi */
  EDI = (pop32());
  /* 10e1d11c pop esi */
  ESI = (pop32());
  /* 10e1d11d pop ebx */
  EBX = (pop32());
  /* 10e1d11e mov esp, ebp */
  ESP = (EBP);
  /* 10e1d120 pop ebp */
  EBP = (pop32());
  /* 10e1d121 ret  */
  ESPCHK(0x10e1d0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x10e1d130 (190 bytes, 67 insns) */
void f_10e1d130(void) {
  FTRACE(0x10e1d130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1d130 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1d131 mov ebp, esp */
  EBP = (ESP);
  /* 10e1d133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1d136 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1d137 push esi */
  push32((uint32_t)(ESI));
  /* 10e1d138 push edi */
  push32((uint32_t)(EDI));
  /* 10e1d139 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e1d140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e1d146:;
  /* 10e1d146 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d14a jne 0x10e1d16a */
  if (!C.zf) goto L_10e1d16a;
  /* 10e1d14c push 0x10e39e98 */
  push32((uint32_t)(0x10e39e98u));
  /* 10e1d151 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1d153 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10e1d155 push 0x10e39fec */
  push32((uint32_t)(0x10e39fecu));
  /* 10e1d15a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d15c call 0x10e11bc0 */
  push32(0x10e1d161u); f_10e11bc0();
  /* 10e1d161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d167 jne 0x10e1d16a */
  if (!C.zf) goto L_10e1d16a;
  /* 10e1d169 int3  */
  x86_unimpl("int3 @ 0x10e1d169");
L_10e1d16a:;
  /* 10e1d16a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d16c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1d16e jne 0x10e1d146 */
  if (!C.zf) goto L_10e1d146;
  /* 10e1d170 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d173 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e1d176 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1d17b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d17d je 0x10e1d1da */
  if (C.zf) goto L_10e1d1da;
  /* 10e1d17f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d182 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d183 call 0x10e1c430 */
  push32(0x10e1d188u); f_10e1c430();
  /* 10e1d188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d18b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1d18e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d191 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d192 call 0x10e1f7b0 */
  push32(0x10e1d197u); f_10e1f7b0();
  /* 10e1d197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d19a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d19d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1d1a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d1a1 call 0x10e1f680 */
  push32(0x10e1d1a6u); f_10e1f680();
  /* 10e1d1a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d1a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d1ab jge 0x10e1d1b6 */
  if ((C.sf==C.of)) goto L_10e1d1b6;
  /* 10e1d1ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e1d1b4 jmp 0x10e1d1da */
  goto L_10e1d1da;
L_10e1d1b6:;
  /* 10e1d1b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d1b9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d1bd je 0x10e1d1da */
  if (C.zf) goto L_10e1d1da;
  /* 10e1d1bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d1c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d1c4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e1d1c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d1c8 call 0x10e13590 */
  push32(0x10e1d1cdu); f_10e13590();
  /* 10e1d1cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d1d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d1d3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10e1d1da:;
  /* 10e1d1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d1dd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10e1d1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d1e7 pop edi */
  EDI = (pop32());
  /* 10e1d1e8 pop esi */
  ESI = (pop32());
  /* 10e1d1e9 pop ebx */
  EBX = (pop32());
  /* 10e1d1ea mov esp, ebp */
  ESP = (EBP);
  /* 10e1d1ec pop ebp */
  EBP = (pop32());
  /* 10e1d1ed ret  */
  ESPCHK(0x10e1d130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x10e1d1f0 (210 bytes, 63 insns) */
void f_10e1d1f0(void) {
  FTRACE(0x10e1d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1d1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d1f7 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d1fd jae 0x10e1d221 */
  if (!C.cf) goto L_10e1d221;
  /* 10e1d1ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d202 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1d205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d208 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1d20b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1d20e mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1d215 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1d21a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d21d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1d21f jne 0x10e1d234 */
  if (!C.zf) goto L_10e1d234;
L_10e1d221:;
  /* 10e1d221 call 0x10e1a9d0 */
  push32(0x10e1d226u); f_10e1a9d0();
  /* 10e1d226 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1d22c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1d22f jmp 0x10e1d2be */
  goto L_10e1d2be;
L_10e1d234:;
  /* 10e1d234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d237 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d238 call 0x10e1c1f0 */
  push32(0x10e1d23du); f_10e1c1f0();
  /* 10e1d23d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d243 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1d246 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d249 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d24c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1d24f mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1d256 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e1d25b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1d25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d260 je 0x10e1d29d */
  if (C.zf) goto L_10e1d29d;
  /* 10e1d262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d265 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d266 call 0x10e1c070 */
  push32(0x10e1d26bu); f_10e1c070();
  /* 10e1d26b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d26e push eax */
  push32((uint32_t)(EAX));
  /* 10e1d26f call dword ptr [0x10e40338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40338))), 0x10e1d275u);
  /* 10e1d275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d277 jne 0x10e1d284 */
  if (!C.zf) goto L_10e1d284;
  /* 10e1d279 call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e1d27fu);
  /* 10e1d27f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1d282 jmp 0x10e1d28b */
  goto L_10e1d28b;
L_10e1d284:;
  /* 10e1d284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e1d28b:;
  /* 10e1d28b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d28f jne 0x10e1d293 */
  if (!C.zf) goto L_10e1d293;
  /* 10e1d291 jmp 0x10e1d2af */
  goto L_10e1d2af;
L_10e1d293:;
  /* 10e1d293 call 0x10e1a9e0 */
  push32(0x10e1d298u); f_10e1a9e0();
  /* 10e1d298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d29b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e1d29d:;
  /* 10e1d29d call 0x10e1a9d0 */
  push32(0x10e1d2a2u); f_10e1a9d0();
  /* 10e1d2a2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1d2a8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e1d2af:;
  /* 10e1d2af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d2b2 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d2b3 call 0x10e1c280 */
  push32(0x10e1d2b8u); f_10e1c280();
  /* 10e1d2b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d2bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e1d2be:;
  /* 10e1d2be mov esp, ebp */
  ESP = (EBP);
  /* 10e1d2c0 pop ebp */
  EBP = (pop32());
  /* 10e1d2c1 ret  */
  ESPCHK(0x10e1d1f0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10e1d2d0 (219 bytes, 64 insns) */
void f_10e1d2d0(void) {
  FTRACE(0x10e1d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1d2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d2d4 cmp dword ptr [0x10e3e614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d2db je 0x10e1d371 */
  if (C.zf) goto L_10e1d371;
  /* 10e1d2e1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10e1d2e3 push 0x10e3a008 */
  push32((uint32_t)(0x10e3a008u));
  /* 10e1d2e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d2ea push 0xac */
  push32((uint32_t)(0xacu));
  /* 10e1d2ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d2f1 call 0x10e12f10 */
  push32(0x10e1d2f6u); f_10e12f10();
  /* 10e1d2f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d2f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1d2fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d300 jne 0x10e1d30c */
  if (!C.zf) goto L_10e1d30c;
  /* 10e1d302 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1d307 jmp 0x10e1d3a7 */
  goto L_10e1d3a7;
L_10e1d30c:;
  /* 10e1d30c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d30f push eax */
  push32((uint32_t)(EAX));
  /* 10e1d310 call 0x10e1d3b0 */
  push32(0x10e1d315u); f_10e1d3b0();
  /* 10e1d315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1d31a je 0x10e1d33d */
  if (C.zf) goto L_10e1d33d;
  /* 10e1d31c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d31f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d320 call 0x10e1d940 */
  push32(0x10e1d325u); f_10e1d940();
  /* 10e1d325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d328 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d32a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d32d push edx */
  push32((uint32_t)(EDX));
  /* 10e1d32e call 0x10e13590 */
  push32(0x10e1d333u); f_10e13590();
  /* 10e1d333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d336 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1d33b jmp 0x10e1d3a7 */
  goto L_10e1d3a7;
L_10e1d33d:;
  /* 10e1d33d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d340 mov dword ptr [0x10e3dc98], eax */
  w32((uint32_t)(0x10e3dc98), (EAX));
  /* 10e1d345 mov ecx, dword ptr [0x10e3e634] */
  ECX = (r32((uint32_t)(0x10e3e634)));
  /* 10e1d34b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d34c call 0x10e1d940 */
  push32(0x10e1d351u); f_10e1d940();
  /* 10e1d351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d354 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d356 mov edx, dword ptr [0x10e3e634] */
  EDX = (r32((uint32_t)(0x10e3e634)));
  /* 10e1d35c push edx */
  push32((uint32_t)(EDX));
  /* 10e1d35d call 0x10e13590 */
  push32(0x10e1d362u); f_10e13590();
  /* 10e1d362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d368 mov dword ptr [0x10e3e634], eax */
  w32((uint32_t)(0x10e3e634), (EAX));
  /* 10e1d36d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1d36f jmp 0x10e1d3a7 */
  goto L_10e1d3a7;
L_10e1d371:;
  /* 10e1d371 mov dword ptr [0x10e3dc98], 0x10e3dca0 */
  w32((uint32_t)(0x10e3dc98), (0x10e3dca0u));
  /* 10e1d37b mov ecx, dword ptr [0x10e3e634] */
  ECX = (r32((uint32_t)(0x10e3e634)));
  /* 10e1d381 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d382 call 0x10e1d940 */
  push32(0x10e1d387u); f_10e1d940();
  /* 10e1d387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d38a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d38c mov edx, dword ptr [0x10e3e634] */
  EDX = (r32((uint32_t)(0x10e3e634)));
  /* 10e1d392 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d393 call 0x10e13590 */
  push32(0x10e1d398u); f_10e13590();
  /* 10e1d398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d39b mov dword ptr [0x10e3e634], 0 */
  w32((uint32_t)(0x10e3e634), (0x0u));
  /* 10e1d3a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1d3a7:;
  /* 10e1d3a7 mov esp, ebp */
  ESP = (EBP);
  /* 10e1d3a9 pop ebp */
  EBP = (pop32());
  /* 10e1d3aa ret  */
  ESPCHK(0x10e1d2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3b0 @ 0x10e1d3b0 (1423 bytes, 533 insns) */
void f_10e1d3b0(void) {
  FTRACE(0x10e1d3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1d3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1d3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1d3b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1d3b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e1d3bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1d3bf mov ax, word ptr [0x10e3e66e] */
  AX = (r16((uint32_t)(0x10e3e66e)));
  /* 10e1d3c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1d3c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d3ca mov cx, word ptr [0x10e3e670] */
  CX = (r16((uint32_t)(0x10e3e670)));
  /* 10e1d3d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1d3d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d3d8 jne 0x10e1d3e2 */
  if (!C.zf) goto L_10e1d3e2;
  /* 10e1d3da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1d3dd jmp 0x10e1d93b */
  goto L_10e1d93b;
L_10e1d3e2:;
  /* 10e1d3e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d3e5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d3e8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d3e9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10e1d3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d3ee push eax */
  push32((uint32_t)(EAX));
  /* 10e1d3ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d3f1 call 0x10e20cc0 */
  push32(0x10e1d3f6u); f_10e20cc0();
  /* 10e1d3f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d3f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d3fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d3fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d404 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d407 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d408 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10e1d40a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d40d push eax */
  push32((uint32_t)(EAX));
  /* 10e1d40e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d410 call 0x10e20cc0 */
  push32(0x10e1d415u); f_10e20cc0();
  /* 10e1d415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d418 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d41b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d41d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d423 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d426 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d427 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10e1d429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d42c push eax */
  push32((uint32_t)(EAX));
  /* 10e1d42d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d42f call 0x10e20cc0 */
  push32(0x10e1d434u); f_10e20cc0();
  /* 10e1d434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d43a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d43c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d442 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d445 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d446 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10e1d448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d44b push eax */
  push32((uint32_t)(EAX));
  /* 10e1d44c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d44e call 0x10e20cc0 */
  push32(0x10e1d453u); f_10e20cc0();
  /* 10e1d453 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d459 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d45b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d45e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d461 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d464 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d465 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10e1d467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d46a push eax */
  push32((uint32_t)(EAX));
  /* 10e1d46b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d46d call 0x10e20cc0 */
  push32(0x10e1d472u); f_10e20cc0();
  /* 10e1d472 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d478 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d47a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d47d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d480 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d483 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d484 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10e1d486 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d489 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d48a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d48c call 0x10e20cc0 */
  push32(0x10e1d491u); f_10e20cc0();
  /* 10e1d491 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d497 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d499 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d49f push edx */
  push32((uint32_t)(EDX));
  /* 10e1d4a0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10e1d4a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d4a5 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d4a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d4a8 call 0x10e20cc0 */
  push32(0x10e1d4adu); f_10e20cc0();
  /* 10e1d4ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d4b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d4b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d4b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d4b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d4bb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d4be push edx */
  push32((uint32_t)(EDX));
  /* 10e1d4bf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10e1d4c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d4c4 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d4c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d4c7 call 0x10e20cc0 */
  push32(0x10e1d4ccu); f_10e20cc0();
  /* 10e1d4cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d4cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d4d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d4d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d4d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d4da add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d4dd push edx */
  push32((uint32_t)(EDX));
  /* 10e1d4de push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10e1d4e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d4e3 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d4e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d4e6 call 0x10e20cc0 */
  push32(0x10e1d4ebu); f_10e20cc0();
  /* 10e1d4eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d4ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d4f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d4f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d4f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d4f9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d4fc push edx */
  push32((uint32_t)(EDX));
  /* 10e1d4fd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10e1d4ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d502 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d503 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d505 call 0x10e20cc0 */
  push32(0x10e1d50au); f_10e20cc0();
  /* 10e1d50a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d50d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d510 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d512 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d518 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d51b push edx */
  push32((uint32_t)(EDX));
  /* 10e1d51c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10e1d51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d521 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d522 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d524 call 0x10e20cc0 */
  push32(0x10e1d529u); f_10e20cc0();
  /* 10e1d529 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d52c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d52f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d531 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d537 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d53a push edx */
  push32((uint32_t)(EDX));
  /* 10e1d53b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e1d53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d540 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d541 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d543 call 0x10e20cc0 */
  push32(0x10e1d548u); f_10e20cc0();
  /* 10e1d548 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d54b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d54e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d550 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d553 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d556 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d559 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d55a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10e1d55c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d55f push eax */
  push32((uint32_t)(EAX));
  /* 10e1d560 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d562 call 0x10e20cc0 */
  push32(0x10e1d567u); f_10e20cc0();
  /* 10e1d567 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d56a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d56d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d56f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d575 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d578 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d579 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e1d57b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d57e push eax */
  push32((uint32_t)(EAX));
  /* 10e1d57f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d581 call 0x10e20cc0 */
  push32(0x10e1d586u); f_10e20cc0();
  /* 10e1d586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d589 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d58c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d58e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d594 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d597 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d598 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e1d59a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d59d push eax */
  push32((uint32_t)(EAX));
  /* 10e1d59e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d5a0 call 0x10e20cc0 */
  push32(0x10e1d5a5u); f_10e20cc0();
  /* 10e1d5a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d5a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d5ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d5ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d5b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d5b3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d5b6 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d5b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10e1d5b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d5bc push eax */
  push32((uint32_t)(EAX));
  /* 10e1d5bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d5bf call 0x10e20cc0 */
  push32(0x10e1d5c4u); f_10e20cc0();
  /* 10e1d5c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d5c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d5ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d5cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d5d2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d5d5 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d5d6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10e1d5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d5db push eax */
  push32((uint32_t)(EAX));
  /* 10e1d5dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d5de call 0x10e20cc0 */
  push32(0x10e1d5e3u); f_10e20cc0();
  /* 10e1d5e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d5e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d5e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d5eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d5f1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d5f4 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d5f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10e1d5f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d5fa push eax */
  push32((uint32_t)(EAX));
  /* 10e1d5fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d5fd call 0x10e20cc0 */
  push32(0x10e1d602u); f_10e20cc0();
  /* 10e1d602 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d608 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d60a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d610 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d613 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d614 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10e1d616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d619 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d61a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d61c call 0x10e20cc0 */
  push32(0x10e1d621u); f_10e20cc0();
  /* 10e1d621 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d624 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d627 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d629 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d62c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d62f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d632 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d633 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10e1d635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d638 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d639 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d63b call 0x10e20cc0 */
  push32(0x10e1d640u); f_10e20cc0();
  /* 10e1d640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d643 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d646 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d648 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d64b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d64e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d651 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d652 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10e1d654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d657 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d658 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d65a call 0x10e20cc0 */
  push32(0x10e1d65fu); f_10e20cc0();
  /* 10e1d65f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d662 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d665 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d667 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d66a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d66d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d670 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d671 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10e1d673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d676 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d677 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d679 call 0x10e20cc0 */
  push32(0x10e1d67eu); f_10e20cc0();
  /* 10e1d67e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d681 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d684 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d686 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d68c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d68f push edx */
  push32((uint32_t)(EDX));
  /* 10e1d690 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10e1d692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d695 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d696 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d698 call 0x10e20cc0 */
  push32(0x10e1d69du); f_10e20cc0();
  /* 10e1d69d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d6a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d6a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d6a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d6a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d6ab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d6ae push edx */
  push32((uint32_t)(EDX));
  /* 10e1d6af push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10e1d6b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d6b4 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d6b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d6b7 call 0x10e20cc0 */
  push32(0x10e1d6bcu); f_10e20cc0();
  /* 10e1d6bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d6bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d6c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d6c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d6c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d6ca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d6cd push edx */
  push32((uint32_t)(EDX));
  /* 10e1d6ce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10e1d6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d6d3 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d6d6 call 0x10e20cc0 */
  push32(0x10e1d6dbu); f_10e20cc0();
  /* 10e1d6db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d6de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d6e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d6e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d6e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d6e9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d6ec push edx */
  push32((uint32_t)(EDX));
  /* 10e1d6ed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10e1d6ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d6f2 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d6f5 call 0x10e20cc0 */
  push32(0x10e1d6fau); f_10e20cc0();
  /* 10e1d6fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d6fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d700 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d702 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d708 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d70b push edx */
  push32((uint32_t)(EDX));
  /* 10e1d70c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10e1d70e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d711 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d714 call 0x10e20cc0 */
  push32(0x10e1d719u); f_10e20cc0();
  /* 10e1d719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d71c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d71f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d721 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d727 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d72a push edx */
  push32((uint32_t)(EDX));
  /* 10e1d72b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10e1d72d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d730 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d731 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d733 call 0x10e20cc0 */
  push32(0x10e1d738u); f_10e20cc0();
  /* 10e1d738 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d73b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d73e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d740 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d746 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d749 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d74a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10e1d74c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d74f push eax */
  push32((uint32_t)(EAX));
  /* 10e1d750 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d752 call 0x10e20cc0 */
  push32(0x10e1d757u); f_10e20cc0();
  /* 10e1d757 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d75a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d75d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d75f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d765 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d768 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d769 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10e1d76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d76e push eax */
  push32((uint32_t)(EAX));
  /* 10e1d76f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d771 call 0x10e20cc0 */
  push32(0x10e1d776u); f_10e20cc0();
  /* 10e1d776 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d779 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d77c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d77e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d784 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d787 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d788 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10e1d78a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d78d push eax */
  push32((uint32_t)(EAX));
  /* 10e1d78e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d790 call 0x10e20cc0 */
  push32(0x10e1d795u); f_10e20cc0();
  /* 10e1d795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d798 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d79b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d79d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d7a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d7a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d7a6 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d7a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10e1d7a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d7ac push eax */
  push32((uint32_t)(EAX));
  /* 10e1d7ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d7af call 0x10e20cc0 */
  push32(0x10e1d7b4u); f_10e20cc0();
  /* 10e1d7b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d7b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d7ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d7bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d7bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d7c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d7c8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d7c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10e1d7cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d7ce push eax */
  push32((uint32_t)(EAX));
  /* 10e1d7cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d7d1 call 0x10e20cc0 */
  push32(0x10e1d7d6u); f_10e20cc0();
  /* 10e1d7d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d7d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d7dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d7de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d7e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d7e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d7ea push edx */
  push32((uint32_t)(EDX));
  /* 10e1d7eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10e1d7ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d7f0 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d7f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d7f3 call 0x10e20cc0 */
  push32(0x10e1d7f8u); f_10e20cc0();
  /* 10e1d7f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d7fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d7fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d800 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d806 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d80c push edx */
  push32((uint32_t)(EDX));
  /* 10e1d80d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e1d80f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d812 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d813 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d815 call 0x10e20cc0 */
  push32(0x10e1d81au); f_10e20cc0();
  /* 10e1d81a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d81d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d820 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d822 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d828 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d82e push edx */
  push32((uint32_t)(EDX));
  /* 10e1d82f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10e1d831 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d834 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d835 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d837 call 0x10e20cc0 */
  push32(0x10e1d83cu); f_10e20cc0();
  /* 10e1d83c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d83f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d842 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d844 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d84a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d850 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d851 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10e1d853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d856 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d857 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d859 call 0x10e20cc0 */
  push32(0x10e1d85eu); f_10e20cc0();
  /* 10e1d85e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d861 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d864 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d866 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d86c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d872 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d873 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e1d875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d878 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d879 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d87b call 0x10e20cc0 */
  push32(0x10e1d880u); f_10e20cc0();
  /* 10e1d880 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d883 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d886 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d888 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d88b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d88e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d894 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d895 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10e1d897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d89a push eax */
  push32((uint32_t)(EAX));
  /* 10e1d89b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d89d call 0x10e20cc0 */
  push32(0x10e1d8a2u); f_10e20cc0();
  /* 10e1d8a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d8a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d8a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d8aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d8ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d8b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d8b6 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d8b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10e1d8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1d8bc push eax */
  push32((uint32_t)(EAX));
  /* 10e1d8bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d8bf call 0x10e20cc0 */
  push32(0x10e1d8c4u); f_10e20cc0();
  /* 10e1d8c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d8c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d8ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d8cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d8cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d8d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d8d8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d8d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10e1d8db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d8de push eax */
  push32((uint32_t)(EAX));
  /* 10e1d8df push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d8e1 call 0x10e20cc0 */
  push32(0x10e1d8e6u); f_10e20cc0();
  /* 10e1d8e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d8e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d8ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d8ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d8f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d8fa push edx */
  push32((uint32_t)(EDX));
  /* 10e1d8fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e1d8fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d900 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d901 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d903 call 0x10e20cc0 */
  push32(0x10e1d908u); f_10e20cc0();
  /* 10e1d908 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d90b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d90e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d910 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d913 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d916 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d91c push edx */
  push32((uint32_t)(EDX));
  /* 10e1d91d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10e1d922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1d925 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1d928 call 0x10e20cc0 */
  push32(0x10e1d92du); f_10e20cc0();
  /* 10e1d92d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1d933 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1d935 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e1d938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10e1d93b:;
  /* 10e1d93b mov esp, ebp */
  ESP = (EBP);
  /* 10e1d93d pop ebp */
  EBP = (pop32());
  /* 10e1d93e ret  */
  ESPCHK(0x10e1d3b0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10e1d940 (779 bytes, 265 insns) */
void f_10e1d940(void) {
  FTRACE(0x10e1d940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1d940 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1d941 mov ebp, esp */
  EBP = (ESP);
  /* 10e1d943 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1d947 jne 0x10e1d94e */
  if (!C.zf) goto L_10e1d94e;
  /* 10e1d949 jmp 0x10e1dc49 */
  goto L_10e1dc49;
L_10e1d94e:;
  /* 10e1d94e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d953 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e1d956 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d957 call 0x10e13590 */
  push32(0x10e1d95cu); f_10e13590();
  /* 10e1d95c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d95f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d964 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e1d967 push eax */
  push32((uint32_t)(EAX));
  /* 10e1d968 call 0x10e13590 */
  push32(0x10e1d96du); f_10e13590();
  /* 10e1d96d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d970 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d975 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1d978 push edx */
  push32((uint32_t)(EDX));
  /* 10e1d979 call 0x10e13590 */
  push32(0x10e1d97eu); f_10e13590();
  /* 10e1d97e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d981 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d986 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1d989 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d98a call 0x10e13590 */
  push32(0x10e1d98fu); f_10e13590();
  /* 10e1d98f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d992 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d997 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e1d99a push eax */
  push32((uint32_t)(EAX));
  /* 10e1d99b call 0x10e13590 */
  push32(0x10e1d9a0u); f_10e13590();
  /* 10e1d9a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d9a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d9a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d9a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e1d9ab push edx */
  push32((uint32_t)(EDX));
  /* 10e1d9ac call 0x10e13590 */
  push32(0x10e1d9b1u); f_10e13590();
  /* 10e1d9b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d9b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d9b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d9b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1d9bb push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d9bc call 0x10e13590 */
  push32(0x10e1d9c1u); f_10e13590();
  /* 10e1d9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d9c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d9c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d9c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10e1d9cc push eax */
  push32((uint32_t)(EAX));
  /* 10e1d9cd call 0x10e13590 */
  push32(0x10e1d9d2u); f_10e13590();
  /* 10e1d9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d9d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d9da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10e1d9dd push edx */
  push32((uint32_t)(EDX));
  /* 10e1d9de call 0x10e13590 */
  push32(0x10e1d9e3u); f_10e13590();
  /* 10e1d9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d9e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d9e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d9eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10e1d9ee push ecx */
  push32((uint32_t)(ECX));
  /* 10e1d9ef call 0x10e13590 */
  push32(0x10e1d9f4u); f_10e13590();
  /* 10e1d9f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1d9f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1d9f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1d9fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10e1d9ff push eax */
  push32((uint32_t)(EAX));
  /* 10e1da00 call 0x10e13590 */
  push32(0x10e1da05u); f_10e13590();
  /* 10e1da05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da0d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10e1da10 push edx */
  push32((uint32_t)(EDX));
  /* 10e1da11 call 0x10e13590 */
  push32(0x10e1da16u); f_10e13590();
  /* 10e1da16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da19 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da1e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10e1da21 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1da22 call 0x10e13590 */
  push32(0x10e1da27u); f_10e13590();
  /* 10e1da27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da2a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da2f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e1da32 push eax */
  push32((uint32_t)(EAX));
  /* 10e1da33 call 0x10e13590 */
  push32(0x10e1da38u); f_10e13590();
  /* 10e1da38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da40 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10e1da43 push edx */
  push32((uint32_t)(EDX));
  /* 10e1da44 call 0x10e13590 */
  push32(0x10e1da49u); f_10e13590();
  /* 10e1da49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da51 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10e1da54 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1da55 call 0x10e13590 */
  push32(0x10e1da5au); f_10e13590();
  /* 10e1da5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da62 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10e1da65 push eax */
  push32((uint32_t)(EAX));
  /* 10e1da66 call 0x10e13590 */
  push32(0x10e1da6bu); f_10e13590();
  /* 10e1da6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da6e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da73 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10e1da76 push edx */
  push32((uint32_t)(EDX));
  /* 10e1da77 call 0x10e13590 */
  push32(0x10e1da7cu); f_10e13590();
  /* 10e1da7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da84 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10e1da87 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1da88 call 0x10e13590 */
  push32(0x10e1da8du); f_10e13590();
  /* 10e1da8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1da90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1da92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1da95 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10e1da98 push eax */
  push32((uint32_t)(EAX));
  /* 10e1da99 call 0x10e13590 */
  push32(0x10e1da9eu); f_10e13590();
  /* 10e1da9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1daa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1daa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1daa6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e1daa9 push edx */
  push32((uint32_t)(EDX));
  /* 10e1daaa call 0x10e13590 */
  push32(0x10e1daafu); f_10e13590();
  /* 10e1daaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dab7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10e1daba push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dabb call 0x10e13590 */
  push32(0x10e1dac0u); f_10e13590();
  /* 10e1dac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dac5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dac8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10e1dacb push eax */
  push32((uint32_t)(EAX));
  /* 10e1dacc call 0x10e13590 */
  push32(0x10e1dad1u); f_10e13590();
  /* 10e1dad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dad4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dad6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dad9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10e1dadc push edx */
  push32((uint32_t)(EDX));
  /* 10e1dadd call 0x10e13590 */
  push32(0x10e1dae2u); f_10e13590();
  /* 10e1dae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dae7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1daea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10e1daed push ecx */
  push32((uint32_t)(ECX));
  /* 10e1daee call 0x10e13590 */
  push32(0x10e1daf3u); f_10e13590();
  /* 10e1daf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1daf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1daf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dafb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10e1dafe push eax */
  push32((uint32_t)(EAX));
  /* 10e1daff call 0x10e13590 */
  push32(0x10e1db04u); f_10e13590();
  /* 10e1db04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db0c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10e1db0f push edx */
  push32((uint32_t)(EDX));
  /* 10e1db10 call 0x10e13590 */
  push32(0x10e1db15u); f_10e13590();
  /* 10e1db15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db1d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10e1db20 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1db21 call 0x10e13590 */
  push32(0x10e1db26u); f_10e13590();
  /* 10e1db26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db2e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10e1db31 push eax */
  push32((uint32_t)(EAX));
  /* 10e1db32 call 0x10e13590 */
  push32(0x10e1db37u); f_10e13590();
  /* 10e1db37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db3f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10e1db42 push edx */
  push32((uint32_t)(EDX));
  /* 10e1db43 call 0x10e13590 */
  push32(0x10e1db48u); f_10e13590();
  /* 10e1db48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db50 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10e1db53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1db54 call 0x10e13590 */
  push32(0x10e1db59u); f_10e13590();
  /* 10e1db59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db61 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10e1db64 push eax */
  push32((uint32_t)(EAX));
  /* 10e1db65 call 0x10e13590 */
  push32(0x10e1db6au); f_10e13590();
  /* 10e1db6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db72 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10e1db78 push edx */
  push32((uint32_t)(EDX));
  /* 10e1db79 call 0x10e13590 */
  push32(0x10e1db7eu); f_10e13590();
  /* 10e1db7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db86 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10e1db8c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1db8d call 0x10e13590 */
  push32(0x10e1db92u); f_10e13590();
  /* 10e1db92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1db95 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1db97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1db9a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10e1dba0 push eax */
  push32((uint32_t)(EAX));
  /* 10e1dba1 call 0x10e13590 */
  push32(0x10e1dba6u); f_10e13590();
  /* 10e1dba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dbab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dbae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10e1dbb4 push edx */
  push32((uint32_t)(EDX));
  /* 10e1dbb5 call 0x10e13590 */
  push32(0x10e1dbbau); f_10e13590();
  /* 10e1dbba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dbbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dbbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dbc2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10e1dbc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dbc9 call 0x10e13590 */
  push32(0x10e1dbceu); f_10e13590();
  /* 10e1dbce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dbd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dbd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dbd6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10e1dbdc push eax */
  push32((uint32_t)(EAX));
  /* 10e1dbdd call 0x10e13590 */
  push32(0x10e1dbe2u); f_10e13590();
  /* 10e1dbe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dbe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dbe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dbea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10e1dbf0 push edx */
  push32((uint32_t)(EDX));
  /* 10e1dbf1 call 0x10e13590 */
  push32(0x10e1dbf6u); f_10e13590();
  /* 10e1dbf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dbf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dbfe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10e1dc04 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dc05 call 0x10e13590 */
  push32(0x10e1dc0au); f_10e13590();
  /* 10e1dc0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dc0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dc12 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10e1dc18 push eax */
  push32((uint32_t)(EAX));
  /* 10e1dc19 call 0x10e13590 */
  push32(0x10e1dc1eu); f_10e13590();
  /* 10e1dc1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dc21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dc23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dc26 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10e1dc2c push edx */
  push32((uint32_t)(EDX));
  /* 10e1dc2d call 0x10e13590 */
  push32(0x10e1dc32u); f_10e13590();
  /* 10e1dc32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dc35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dc37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1dc3a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10e1dc40 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dc41 call 0x10e13590 */
  push32(0x10e1dc46u); f_10e13590();
  /* 10e1dc46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1dc49:;
  /* 10e1dc49 pop ebp */
  EBP = (pop32());
  /* 10e1dc4a ret  */
  ESPCHK(0x10e1d940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc50 @ 0x10e1dc50 (678 bytes, 180 insns) */
void f_10e1dc50(void) {
  FTRACE(0x10e1dc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1dc50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1dc51 mov ebp, esp */
  EBP = (ESP);
  /* 10e1dc53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1dc56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1dc5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1dc5f mov ax, word ptr [0x10e3e66a] */
  AX = (r16((uint32_t)(0x10e3e66a)));
  /* 10e1dc65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1dc68 cmp dword ptr [0x10e3e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1dc6f je 0x10e1ddca */
  if (C.zf) goto L_10e1ddca;
  /* 10e1dc75 push 0x10e3e638 */
  push32((uint32_t)(0x10e3e638u));
  /* 10e1dc7a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10e1dc7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dc7f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dc80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1dc82 call 0x10e20cc0 */
  push32(0x10e1dc87u); f_10e20cc0();
  /* 10e1dc87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dc8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1dc8d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1dc8f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1dc92 push 0x10e3e63c */
  push32((uint32_t)(0x10e3e63cu));
  /* 10e1dc97 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10e1dc99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dc9c push eax */
  push32((uint32_t)(EAX));
  /* 10e1dc9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1dc9f call 0x10e20cc0 */
  push32(0x10e1dca4u); f_10e20cc0();
  /* 10e1dca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1dcaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1dcac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1dcaf push 0x10e3e640 */
  push32((uint32_t)(0x10e3e640u));
  /* 10e1dcb4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e1dcb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dcb9 push edx */
  push32((uint32_t)(EDX));
  /* 10e1dcba push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1dcbc call 0x10e20cc0 */
  push32(0x10e1dcc1u); f_10e20cc0();
  /* 10e1dcc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dcc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1dcc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1dcc9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1dccc mov edx, dword ptr [0x10e3e640] */
  EDX = (r32((uint32_t)(0x10e3e640)));
  /* 10e1dcd2 push edx */
  push32((uint32_t)(EDX));
  /* 10e1dcd3 call 0x10e1df00 */
  push32(0x10e1dcd8u); f_10e1df00();
  /* 10e1dcd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dcdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1dcdf je 0x10e1dd39 */
  if (C.zf) goto L_10e1dd39;
  /* 10e1dce1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dce3 mov eax, dword ptr [0x10e3e638] */
  EAX = (r32((uint32_t)(0x10e3e638)));
  /* 10e1dce8 push eax */
  push32((uint32_t)(EAX));
  /* 10e1dce9 call 0x10e13590 */
  push32(0x10e1dceeu); f_10e13590();
  /* 10e1dcee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dcf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dcf3 mov ecx, dword ptr [0x10e3e63c] */
  ECX = (r32((uint32_t)(0x10e3e63c)));
  /* 10e1dcf9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dcfa call 0x10e13590 */
  push32(0x10e1dcffu); f_10e13590();
  /* 10e1dcff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dd02 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dd04 mov edx, dword ptr [0x10e3e640] */
  EDX = (r32((uint32_t)(0x10e3e640)));
  /* 10e1dd0a push edx */
  push32((uint32_t)(EDX));
  /* 10e1dd0b call 0x10e13590 */
  push32(0x10e1dd10u); f_10e13590();
  /* 10e1dd10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dd13 mov dword ptr [0x10e3e638], 0 */
  w32((uint32_t)(0x10e3e638), (0x0u));
  /* 10e1dd1d mov dword ptr [0x10e3e63c], 0 */
  w32((uint32_t)(0x10e3e63c), (0x0u));
  /* 10e1dd27 mov dword ptr [0x10e3e640], 0 */
  w32((uint32_t)(0x10e3e640), (0x0u));
  /* 10e1dd31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1dd34 jmp 0x10e1def2 */
  goto L_10e1def2;
L_10e1dd39:;
  /* 10e1dd39 mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dd3e cmp dword ptr [eax], 0x10e3dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10e3dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1dd44 je 0x10e1dd80 */
  if (C.zf) goto L_10e1dd80;
  /* 10e1dd46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dd48 mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dd4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1dd50 push edx */
  push32((uint32_t)(EDX));
  /* 10e1dd51 call 0x10e13590 */
  push32(0x10e1dd56u); f_10e13590();
  /* 10e1dd56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dd59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dd5b mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dd60 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e1dd63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dd64 call 0x10e13590 */
  push32(0x10e1dd69u); f_10e13590();
  /* 10e1dd69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dd6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dd6e mov edx, dword ptr [0x10e3dd88] */
  EDX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dd74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e1dd77 push eax */
  push32((uint32_t)(EAX));
  /* 10e1dd78 call 0x10e13590 */
  push32(0x10e1dd7du); f_10e13590();
  /* 10e1dd7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1dd80:;
  /* 10e1dd80 mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dd86 mov edx, dword ptr [0x10e3e638] */
  EDX = (r32((uint32_t)(0x10e3e638)));
  /* 10e1dd8c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e1dd8e mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dd93 mov ecx, dword ptr [0x10e3e63c] */
  ECX = (r32((uint32_t)(0x10e3e63c)));
  /* 10e1dd99 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e1dd9c mov edx, dword ptr [0x10e3dd88] */
  EDX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dda2 mov eax, dword ptr [0x10e3e640] */
  EAX = (r32((uint32_t)(0x10e3e640)));
  /* 10e1dda7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e1ddaa mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1ddb0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1ddb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1ddb4 mov byte ptr [0x10e3cea8], al */
  w8((uint32_t)(0x10e3cea8), (AL));
  /* 10e1ddb9 mov dword ptr [0x10e3ceac], 1 */
  w32((uint32_t)(0x10e3ceac), (0x1u));
  /* 10e1ddc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ddc5 jmp 0x10e1def2 */
  goto L_10e1def2;
L_10e1ddca:;
  /* 10e1ddca push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1ddcc mov ecx, dword ptr [0x10e3e638] */
  ECX = (r32((uint32_t)(0x10e3e638)));
  /* 10e1ddd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ddd3 call 0x10e13590 */
  push32(0x10e1ddd8u); f_10e13590();
  /* 10e1ddd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dddb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dddd mov edx, dword ptr [0x10e3e63c] */
  EDX = (r32((uint32_t)(0x10e3e63c)));
  /* 10e1dde3 push edx */
  push32((uint32_t)(EDX));
  /* 10e1dde4 call 0x10e13590 */
  push32(0x10e1dde9u); f_10e13590();
  /* 10e1dde9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ddec push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1ddee mov eax, dword ptr [0x10e3e640] */
  EAX = (r32((uint32_t)(0x10e3e640)));
  /* 10e1ddf3 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ddf4 call 0x10e13590 */
  push32(0x10e1ddf9u); f_10e13590();
  /* 10e1ddf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ddfc mov dword ptr [0x10e3e638], 0 */
  w32((uint32_t)(0x10e3e638), (0x0u));
  /* 10e1de06 mov dword ptr [0x10e3e63c], 0 */
  w32((uint32_t)(0x10e3e63c), (0x0u));
  /* 10e1de10 mov dword ptr [0x10e3e640], 0 */
  w32((uint32_t)(0x10e3e640), (0x0u));
  /* 10e1de1a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10e1de1f push 0x10e3a014 */
  push32((uint32_t)(0x10e3a014u));
  /* 10e1de24 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1de26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1de28 call 0x10e12b00 */
  push32(0x10e1de2du); f_10e12b00();
  /* 10e1de2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1de30 mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1de36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e1de38 mov edx, dword ptr [0x10e3dd88] */
  EDX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1de3e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1de41 jne 0x10e1de4b */
  if (!C.zf) goto L_10e1de4b;
  /* 10e1de43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1de46 jmp 0x10e1def2 */
  goto L_10e1def2;
L_10e1de4b:;
  /* 10e1de4b push 0x10e39fe4 */
  push32((uint32_t)(0x10e39fe4u));
  /* 10e1de50 mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1de55 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1de57 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1de58 call 0x10e15ab0 */
  push32(0x10e1de5du); f_10e15ab0();
  /* 10e1de5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1de60 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10e1de65 push 0x10e3a014 */
  push32((uint32_t)(0x10e3a014u));
  /* 10e1de6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1de6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1de6e call 0x10e12b00 */
  push32(0x10e1de73u); f_10e12b00();
  /* 10e1de73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1de76 mov edx, dword ptr [0x10e3dd88] */
  EDX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1de7c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e1de7f mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1de84 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1de88 jne 0x10e1de8f */
  if (!C.zf) goto L_10e1de8f;
  /* 10e1de8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1de8d jmp 0x10e1def2 */
  goto L_10e1def2;
L_10e1de8f:;
  /* 10e1de8f mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1de95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1de98 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e1de9b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10e1dea0 push 0x10e3a014 */
  push32((uint32_t)(0x10e3a014u));
  /* 10e1dea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dea9 call 0x10e12b00 */
  push32(0x10e1deaeu); f_10e12b00();
  /* 10e1deae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1deb1 mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1deb7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e1deba mov edx, dword ptr [0x10e3dd88] */
  EDX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dec0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1dec4 jne 0x10e1decb */
  if (!C.zf) goto L_10e1decb;
  /* 10e1dec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1dec9 jmp 0x10e1def2 */
  goto L_10e1def2;
L_10e1decb:;
  /* 10e1decb mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1ded0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1ded3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e1ded6 mov edx, dword ptr [0x10e3dd88] */
  EDX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dedc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e1dede mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e1dee0 mov byte ptr [0x10e3cea8], cl */
  w8((uint32_t)(0x10e3cea8), (CL));
  /* 10e1dee6 mov dword ptr [0x10e3ceac], 1 */
  w32((uint32_t)(0x10e3ceac), (0x1u));
  /* 10e1def0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1def2:;
  /* 10e1def2 mov esp, ebp */
  ESP = (EBP);
  /* 10e1def4 pop ebp */
  EBP = (pop32());
  /* 10e1def5 ret  */
  ESPCHK(0x10e1dc50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10e1df00 (125 bytes, 49 insns) */
void f_10e1df00(void) {
  FTRACE(0x10e1df00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1df00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1df01 mov ebp, esp */
  EBP = (ESP);
  /* 10e1df03 push ecx */
  push32((uint32_t)(ECX));
L_10e1df04:;
  /* 10e1df04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1df0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1df0c je 0x10e1df79 */
  if (C.zf) goto L_10e1df79;
  /* 10e1df0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1df14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1df17 jl 0x10e1df3d */
  if ((C.sf!=C.of)) goto L_10e1df3d;
  /* 10e1df19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1df1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1df22 jg 0x10e1df3d */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1df3d;
  /* 10e1df24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1df2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1df2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e1df32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1df38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e1df3b jmp 0x10e1df77 */
  goto L_10e1df77;
L_10e1df3d:;
  /* 10e1df3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1df43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1df46 jne 0x10e1df6e */
  if (!C.zf) goto L_10e1df6e;
  /* 10e1df48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1df4e:;
  /* 10e1df4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1df51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1df54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e1df57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e1df59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1df5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1df5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1df62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1df65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1df68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1df6a jne 0x10e1df4e */
  if (!C.zf) goto L_10e1df4e;
  /* 10e1df6c jmp 0x10e1df77 */
  goto L_10e1df77;
L_10e1df6e:;
  /* 10e1df6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1df71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1df74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e1df77:;
  /* 10e1df77 jmp 0x10e1df04 */
  goto L_10e1df04;
L_10e1df79:;
  /* 10e1df79 mov esp, ebp */
  ESP = (EBP);
  /* 10e1df7b pop ebp */
  EBP = (pop32());
  /* 10e1df7c ret  */
  ESPCHK(0x10e1df00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df80 @ 0x10e1df80 (304 bytes, 85 insns) */
void f_10e1df80(void) {
  FTRACE(0x10e1df80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1df80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1df81 mov ebp, esp */
  EBP = (ESP);
  /* 10e1df83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1df84 cmp dword ptr [0x10e3e60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1df8b je 0x10e1e04c */
  if (C.zf) goto L_10e1e04c;
  /* 10e1df91 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10e1df93 push 0x10e3a020 */
  push32((uint32_t)(0x10e3a020u));
  /* 10e1df98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1df9a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e1df9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1df9e call 0x10e12f10 */
  push32(0x10e1dfa3u); f_10e12f10();
  /* 10e1dfa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dfa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1dfa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1dfad jne 0x10e1dfb9 */
  if (!C.zf) goto L_10e1dfb9;
  /* 10e1dfaf mov eax, 1 */
  EAX = (0x1u);
  /* 10e1dfb4 jmp 0x10e1e0ac */
  goto L_10e1e0ac;
L_10e1dfb9:;
  /* 10e1dfb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dfbc push eax */
  push32((uint32_t)(EAX));
  /* 10e1dfbd call 0x10e1e0b0 */
  push32(0x10e1dfc2u); f_10e1e0b0();
  /* 10e1dfc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dfc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1dfc7 je 0x10e1dfed */
  if (C.zf) goto L_10e1dfed;
  /* 10e1dfc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dfcc push ecx */
  push32((uint32_t)(ECX));
  /* 10e1dfcd call 0x10e1e340 */
  push32(0x10e1dfd2u); f_10e1e340();
  /* 10e1dfd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dfd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1dfd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dfda push edx */
  push32((uint32_t)(EDX));
  /* 10e1dfdb call 0x10e13590 */
  push32(0x10e1dfe0u); f_10e13590();
  /* 10e1dfe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1dfe3 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1dfe8 jmp 0x10e1e0ac */
  goto L_10e1e0ac;
L_10e1dfed:;
  /* 10e1dfed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dff0 mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1dff6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1dff8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e1dffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1dffd mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1e003 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e1e006 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e1e009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e00c mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1e012 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e1e015 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e1e018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e01b mov dword ptr [0x10e3dd88], eax */
  w32((uint32_t)(0x10e3dd88), (EAX));
  /* 10e1e020 mov ecx, dword ptr [0x10e3e644] */
  ECX = (r32((uint32_t)(0x10e3e644)));
  /* 10e1e026 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e027 call 0x10e1e340 */
  push32(0x10e1e02cu); f_10e1e340();
  /* 10e1e02c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e02f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e031 mov edx, dword ptr [0x10e3e644] */
  EDX = (r32((uint32_t)(0x10e3e644)));
  /* 10e1e037 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e038 call 0x10e13590 */
  push32(0x10e1e03du); f_10e13590();
  /* 10e1e03d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e043 mov dword ptr [0x10e3e644], eax */
  w32((uint32_t)(0x10e3e644), (EAX));
  /* 10e1e048 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e04a jmp 0x10e1e0ac */
  goto L_10e1e0ac;
L_10e1e04c:;
  /* 10e1e04c mov ecx, dword ptr [0x10e3dd88] */
  ECX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1e052 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1e054 mov dword ptr [0x10e3dd58], edx */
  w32((uint32_t)(0x10e3dd58), (EDX));
  /* 10e1e05a mov eax, dword ptr [0x10e3dd88] */
  EAX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1e05f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e1e062 mov dword ptr [0x10e3dd5c], ecx */
  w32((uint32_t)(0x10e3dd5c), (ECX));
  /* 10e1e068 mov edx, dword ptr [0x10e3dd88] */
  EDX = (r32((uint32_t)(0x10e3dd88)));
  /* 10e1e06e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e1e071 mov dword ptr [0x10e3dd60], eax */
  w32((uint32_t)(0x10e3dd60), (EAX));
  /* 10e1e076 mov dword ptr [0x10e3dd88], 0x10e3dd58 */
  w32((uint32_t)(0x10e3dd88), (0x10e3dd58u));
  /* 10e1e080 mov ecx, dword ptr [0x10e3e644] */
  ECX = (r32((uint32_t)(0x10e3e644)));
  /* 10e1e086 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e087 call 0x10e1e340 */
  push32(0x10e1e08cu); f_10e1e340();
  /* 10e1e08c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e08f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e091 mov edx, dword ptr [0x10e3e644] */
  EDX = (r32((uint32_t)(0x10e3e644)));
  /* 10e1e097 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e098 call 0x10e13590 */
  push32(0x10e1e09du); f_10e13590();
  /* 10e1e09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e0a0 mov dword ptr [0x10e3e644], 0 */
  w32((uint32_t)(0x10e3e644), (0x0u));
  /* 10e1e0aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1e0ac:;
  /* 10e1e0ac mov esp, ebp */
  ESP = (EBP);
  /* 10e1e0ae pop ebp */
  EBP = (pop32());
  /* 10e1e0af ret  */
  ESPCHK(0x10e1df80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x10e1e0b0 (525 bytes, 200 insns) */
void f_10e1e0b0(void) {
  FTRACE(0x10e1e0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e0b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e0b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1e0b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1e0bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e0bf mov ax, word ptr [0x10e3e664] */
  AX = (r16((uint32_t)(0x10e3e664)));
  /* 10e1e0c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1e0c8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e0cc jne 0x10e1e0d6 */
  if (!C.zf) goto L_10e1e0d6;
  /* 10e1e0ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e0d1 jmp 0x10e1e2b9 */
  goto L_10e1e2b9;
L_10e1e0d6:;
  /* 10e1e0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e0d9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e0dc push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e0dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10e1e0df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e0e2 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e0e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e0e5 call 0x10e20cc0 */
  push32(0x10e1e0eau); f_10e20cc0();
  /* 10e1e0ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e0ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e0f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e0f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e0f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e0f8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e0fb push edx */
  push32((uint32_t)(EDX));
  /* 10e1e0fc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10e1e0fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e101 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e102 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e104 call 0x10e20cc0 */
  push32(0x10e1e109u); f_10e20cc0();
  /* 10e1e109 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e10c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e10f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e111 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e117 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e11a push edx */
  push32((uint32_t)(EDX));
  /* 10e1e11b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e1e11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e120 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e121 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e123 call 0x10e20cc0 */
  push32(0x10e1e128u); f_10e20cc0();
  /* 10e1e128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e12b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e12e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e130 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e136 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e139 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e13a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10e1e13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e13f push eax */
  push32((uint32_t)(EAX));
  /* 10e1e140 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e142 call 0x10e20cc0 */
  push32(0x10e1e147u); f_10e20cc0();
  /* 10e1e147 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e14d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e14f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e152 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e155 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e158 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e159 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10e1e15b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e15e push eax */
  push32((uint32_t)(EAX));
  /* 10e1e15f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e161 call 0x10e20cc0 */
  push32(0x10e1e166u); f_10e20cc0();
  /* 10e1e166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e16c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e16e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e174 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e1e177 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e178 call 0x10e1e2c0 */
  push32(0x10e1e17du); f_10e1e2c0();
  /* 10e1e17d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e183 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e186 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e187 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10e1e189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e18c push edx */
  push32((uint32_t)(EDX));
  /* 10e1e18d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e18f call 0x10e20cc0 */
  push32(0x10e1e194u); f_10e20cc0();
  /* 10e1e194 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e197 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e19a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e19c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e19f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e1a2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e1a5 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e1a6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10e1e1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e1ab push eax */
  push32((uint32_t)(EAX));
  /* 10e1e1ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e1ae call 0x10e20cc0 */
  push32(0x10e1e1b3u); f_10e20cc0();
  /* 10e1e1b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e1b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e1b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e1be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e1c1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e1c4 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e1c5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10e1e1c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e1ca push eax */
  push32((uint32_t)(EAX));
  /* 10e1e1cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e1cd call 0x10e20cc0 */
  push32(0x10e1e1d2u); f_10e20cc0();
  /* 10e1e1d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e1d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e1d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e1da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e1dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e1e0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e1e3 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e1e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e1e1e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e1e9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e1ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e1ec call 0x10e20cc0 */
  push32(0x10e1e1f1u); f_10e20cc0();
  /* 10e1e1f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e1f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e1f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e1f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e1fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e1ff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e202 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e203 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10e1e205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e208 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e209 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e20b call 0x10e20cc0 */
  push32(0x10e1e210u); f_10e20cc0();
  /* 10e1e210 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e213 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e216 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e218 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e21b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e21e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e221 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e222 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10e1e224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e227 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e228 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e22a call 0x10e20cc0 */
  push32(0x10e1e22fu); f_10e20cc0();
  /* 10e1e22f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e235 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e237 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e23a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e23d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e240 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e241 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10e1e243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e246 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e247 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e249 call 0x10e20cc0 */
  push32(0x10e1e24eu); f_10e20cc0();
  /* 10e1e24e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e251 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e254 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e256 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e25c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e25f push edx */
  push32((uint32_t)(EDX));
  /* 10e1e260 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10e1e262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e265 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e266 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e268 call 0x10e20cc0 */
  push32(0x10e1e26du); f_10e20cc0();
  /* 10e1e26d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e270 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e273 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e275 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e27b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e27e push edx */
  push32((uint32_t)(EDX));
  /* 10e1e27f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10e1e281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e284 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e285 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e287 call 0x10e20cc0 */
  push32(0x10e1e28cu); f_10e20cc0();
  /* 10e1e28c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e28f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e292 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e294 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e29a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e29d push edx */
  push32((uint32_t)(EDX));
  /* 10e1e29e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10e1e2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e2a3 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e2a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e2a6 call 0x10e20cc0 */
  push32(0x10e1e2abu); f_10e20cc0();
  /* 10e1e2ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e2ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e2b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e2b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1e2b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e1e2b9:;
  /* 10e1e2b9 mov esp, ebp */
  ESP = (EBP);
  /* 10e1e2bb pop ebp */
  EBP = (pop32());
  /* 10e1e2bc ret  */
  ESPCHK(0x10e1e0b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10e1e2c0 (125 bytes, 49 insns) */
void f_10e1e2c0(void) {
  FTRACE(0x10e1e2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e2c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e2c3 push ecx */
  push32((uint32_t)(ECX));
L_10e1e2c4:;
  /* 10e1e2c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e2c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1e2ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1e2cc je 0x10e1e339 */
  if (C.zf) goto L_10e1e339;
  /* 10e1e2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e2d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1e2d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e2d7 jl 0x10e1e2fd */
  if ((C.sf!=C.of)) goto L_10e1e2fd;
  /* 10e1e2d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e2dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1e2df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e2e2 jg 0x10e1e2fd */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1e2fd;
  /* 10e1e2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e2e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1e2ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1e2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e2f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e1e2f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e2f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e2f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e1e2fb jmp 0x10e1e337 */
  goto L_10e1e337;
L_10e1e2fd:;
  /* 10e1e2fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e300 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1e303 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e306 jne 0x10e1e32e */
  if (!C.zf) goto L_10e1e32e;
  /* 10e1e308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e30b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1e30e:;
  /* 10e1e30e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e314 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e1e317 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e1e319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e31c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e31f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1e322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1e325 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1e328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e32a jne 0x10e1e30e */
  if (!C.zf) goto L_10e1e30e;
  /* 10e1e32c jmp 0x10e1e337 */
  goto L_10e1e337;
L_10e1e32e:;
  /* 10e1e32e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e334 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e1e337:;
  /* 10e1e337 jmp 0x10e1e2c4 */
  goto L_10e1e2c4;
L_10e1e339:;
  /* 10e1e339 mov esp, ebp */
  ESP = (EBP);
  /* 10e1e33b pop ebp */
  EBP = (pop32());
  /* 10e1e33c ret  */
  ESPCHK(0x10e1e2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e340 @ 0x10e1e340 (147 bytes, 52 insns) */
void f_10e1e340(void) {
  FTRACE(0x10e1e340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e340 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e341 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e343 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e347 jne 0x10e1e34e */
  if (!C.zf) goto L_10e1e34e;
  /* 10e1e349 jmp 0x10e1e3d1 */
  goto L_10e1e3d1;
L_10e1e34e:;
  /* 10e1e34e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e351 cmp dword ptr [eax + 0xc], 0x10e3e6a0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10e3e6a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e358 je 0x10e1e3d1 */
  if (C.zf) goto L_10e1e3d1;
  /* 10e1e35a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e35c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e35f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1e362 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e363 call 0x10e13590 */
  push32(0x10e1e368u); f_10e13590();
  /* 10e1e368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e36b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e36d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e370 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e1e373 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e374 call 0x10e13590 */
  push32(0x10e1e379u); f_10e13590();
  /* 10e1e379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e37c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e381 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e1e384 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e385 call 0x10e13590 */
  push32(0x10e1e38au); f_10e13590();
  /* 10e1e38a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e38d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e38f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e392 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e1e395 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e396 call 0x10e13590 */
  push32(0x10e1e39bu); f_10e13590();
  /* 10e1e39b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e39e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e3a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e3a3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e1e3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e3a7 call 0x10e13590 */
  push32(0x10e1e3acu); f_10e13590();
  /* 10e1e3ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e3af push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e3b4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10e1e3b7 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e3b8 call 0x10e13590 */
  push32(0x10e1e3bdu); f_10e13590();
  /* 10e1e3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e3c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e3c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e3c5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10e1e3c8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e3c9 call 0x10e13590 */
  push32(0x10e1e3ceu); f_10e13590();
  /* 10e1e3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1e3d1:;
  /* 10e1e3d1 pop ebp */
  EBP = (pop32());
  /* 10e1e3d2 ret  */
  ESPCHK(0x10e1e340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3e0 @ 0x10e1e3e0 (928 bytes, 284 insns) */
void f_10e1e3e0(void) {
  FTRACE(0x10e1e3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e3e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1e3e6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10e1e3ed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10e1e3f4 cmp dword ptr [0x10e3e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e3fb je 0x10e1e731 */
  if (C.zf) goto L_10e1e731;
  /* 10e1e401 cmp dword ptr [0x10e3e618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e408 jne 0x10e1e430 */
  if (!C.zf) goto L_10e1e430;
  /* 10e1e40a push 0x10e3e618 */
  push32((uint32_t)(0x10e3e618u));
  /* 10e1e40f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10e1e414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e416 mov ax, word ptr [0x10e3e65c] */
  AX = (r16((uint32_t)(0x10e3e65c)));
  /* 10e1e41c push eax */
  push32((uint32_t)(EAX));
  /* 10e1e41d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e41f call 0x10e20cc0 */
  push32(0x10e1e424u); f_10e20cc0();
  /* 10e1e424 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e429 je 0x10e1e430 */
  if (C.zf) goto L_10e1e430;
  /* 10e1e42b jmp 0x10e1e6f2 */
  goto L_10e1e6f2;
L_10e1e430:;
  /* 10e1e430 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10e1e432 push 0x10e3a02c */
  push32((uint32_t)(0x10e3a02cu));
  /* 10e1e437 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e439 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e1e43e call 0x10e12b00 */
  push32(0x10e1e443u); f_10e12b00();
  /* 10e1e443 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e446 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e1e449 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e1e44b push 0x10e3a02c */
  push32((uint32_t)(0x10e3a02cu));
  /* 10e1e450 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e452 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e1e457 call 0x10e12b00 */
  push32(0x10e1e45cu); f_10e12b00();
  /* 10e1e45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e45f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e1e462 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10e1e464 push 0x10e3a02c */
  push32((uint32_t)(0x10e3a02cu));
  /* 10e1e469 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e46b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10e1e470 call 0x10e12b00 */
  push32(0x10e1e475u); f_10e12b00();
  /* 10e1e475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e478 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e1e47b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10e1e47d push 0x10e3a02c */
  push32((uint32_t)(0x10e3a02cu));
  /* 10e1e482 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e484 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e1e489 call 0x10e12b00 */
  push32(0x10e1e48eu); f_10e12b00();
  /* 10e1e48e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e491 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e1e494 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e498 je 0x10e1e4ac */
  if (C.zf) goto L_10e1e4ac;
  /* 10e1e49a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e49e je 0x10e1e4ac */
  if (C.zf) goto L_10e1e4ac;
  /* 10e1e4a0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e4a4 je 0x10e1e4ac */
  if (C.zf) goto L_10e1e4ac;
  /* 10e1e4a6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e4aa jne 0x10e1e4b1 */
  if (!C.zf) goto L_10e1e4b1;
L_10e1e4ac:;
  /* 10e1e4ac jmp 0x10e1e6f2 */
  goto L_10e1e6f2;
L_10e1e4b1:;
  /* 10e1e4b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1e4b4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e1e4b7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e1e4be jmp 0x10e1e4c9 */
  goto L_10e1e4c9;
L_10e1e4c0:;
  /* 10e1e4c0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1e4c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e4c6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e1e4c9:;
  /* 10e1e4c9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e4d0 jge 0x10e1e4e5 */
  if ((C.sf==C.of)) goto L_10e1e4e5;
  /* 10e1e4d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e4d5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10e1e4d8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e1e4da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e4dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e4e0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e1e4e3 jmp 0x10e1e4c0 */
  goto L_10e1e4c0;
L_10e1e4e5:;
  /* 10e1e4e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10e1e4e8 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e4e9 mov ecx, dword ptr [0x10e3e618] */
  ECX = (r32((uint32_t)(0x10e3e618)));
  /* 10e1e4ef push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e4f0 call dword ptr [0x10e40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40308))), 0x10e1e4f6u);
  /* 10e1e4f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e4f8 jne 0x10e1e4ff */
  if (!C.zf) goto L_10e1e4ff;
  /* 10e1e4fa jmp 0x10e1e6f2 */
  goto L_10e1e6f2;
L_10e1e4ff:;
  /* 10e1e4ff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e503 jbe 0x10e1e50a */
  if ((C.cf||C.zf)) goto L_10e1e50a;
  /* 10e1e505 jmp 0x10e1e6f2 */
  goto L_10e1e6f2;
L_10e1e50a:;
  /* 10e1e50a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1e50d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1e513 mov dword ptr [0x10e3cea4], edx */
  w32((uint32_t)(0x10e3cea4), (EDX));
  /* 10e1e519 cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e520 jle 0x10e1e579 */
  if ((C.zf||C.sf!=C.of)) goto L_10e1e579;
  /* 10e1e522 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10e1e525 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e1e528 jmp 0x10e1e533 */
  goto L_10e1e533;
L_10e1e52a:;
  /* 10e1e52a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e52d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e530 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10e1e533:;
  /* 10e1e533 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e538 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1e53a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e53c je 0x10e1e579 */
  if (C.zf) goto L_10e1e579;
  /* 10e1e53e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e541 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1e543 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e1e546 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1e548 je 0x10e1e579 */
  if (C.zf) goto L_10e1e579;
  /* 10e1e54a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e54d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e54f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e1e551 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e1e554 jmp 0x10e1e55f */
  goto L_10e1e55f;
L_10e1e556:;
  /* 10e1e556 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1e559 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e55c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e1e55f:;
  /* 10e1e55f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e562 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e564 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e1e567 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e56a jg 0x10e1e577 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1e577;
  /* 10e1e56c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1e56f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e572 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e1e575 jmp 0x10e1e556 */
  goto L_10e1e556;
L_10e1e577:;
  /* 10e1e577 jmp 0x10e1e52a */
  goto L_10e1e52a;
L_10e1e579:;
  /* 10e1e579 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e57b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e57d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e57f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1e582 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e585 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e586 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e1e58b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1e58e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e58f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e591 call 0x10e1ad30 */
  push32(0x10e1e596u); f_10e1ad30();
  /* 10e1e596 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e59b jne 0x10e1e5a2 */
  if (!C.zf) goto L_10e1e5a2;
  /* 10e1e59d jmp 0x10e1e6f2 */
  goto L_10e1e6f2;
L_10e1e5a2:;
  /* 10e1e5a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1e5a5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10e1e5aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1e5ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e1e5b0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e1e5b7 jmp 0x10e1e5c2 */
  goto L_10e1e5c2;
L_10e1e5b9:;
  /* 10e1e5b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1e5bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e5bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e1e5c2:;
  /* 10e1e5c2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e5c9 jge 0x10e1e5e0 */
  if ((C.sf==C.of)) goto L_10e1e5e0;
  /* 10e1e5cb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1e5ce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10e1e5d2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10e1e5d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e1e5d8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e5db mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e1e5de jmp 0x10e1e5b9 */
  goto L_10e1e5b9;
L_10e1e5e0:;
  /* 10e1e5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e5e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1e5e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1e5e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e5ea push edx */
  push32((uint32_t)(EDX));
  /* 10e1e5eb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e1e5f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1e5f3 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e5f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1e5f6 call 0x10e20f60 */
  push32(0x10e1e5fbu); f_10e20f60();
  /* 10e1e5fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e600 jne 0x10e1e607 */
  if (!C.zf) goto L_10e1e607;
  /* 10e1e602 jmp 0x10e1e6f2 */
  goto L_10e1e6f2;
L_10e1e607:;
  /* 10e1e607 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1e60a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10e1e60f cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e616 jle 0x10e1e673 */
  if ((C.zf||C.sf!=C.of)) goto L_10e1e673;
  /* 10e1e618 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10e1e61b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e1e61e jmp 0x10e1e629 */
  goto L_10e1e629;
L_10e1e620:;
  /* 10e1e620 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e623 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e626 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e1e629:;
  /* 10e1e629 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e62c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1e62e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1e630 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1e632 je 0x10e1e673 */
  if (C.zf) goto L_10e1e673;
  /* 10e1e634 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e637 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e639 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e1e63c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1e63e je 0x10e1e673 */
  if (C.zf) goto L_10e1e673;
  /* 10e1e640 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e645 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1e647 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e1e64a jmp 0x10e1e655 */
  goto L_10e1e655;
L_10e1e64c:;
  /* 10e1e64c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1e64f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e652 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e1e655:;
  /* 10e1e655 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1e658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e65a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e1e65d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e660 jg 0x10e1e671 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1e671;
  /* 10e1e662 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e1e665 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1e668 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10e1e66f jmp 0x10e1e64c */
  goto L_10e1e64c;
L_10e1e671:;
  /* 10e1e671 jmp 0x10e1e620 */
  goto L_10e1e620;
L_10e1e673:;
  /* 10e1e673 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1e676 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e679 mov dword ptr [0x10e3cc98], eax */
  w32((uint32_t)(0x10e3cc98), (EAX));
  /* 10e1e67e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1e681 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e684 mov dword ptr [0x10e3cc9c], ecx */
  w32((uint32_t)(0x10e3cc9c), (ECX));
  /* 10e1e68a cmp dword ptr [0x10e3e648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e691 je 0x10e1e6a4 */
  if (C.zf) goto L_10e1e6a4;
  /* 10e1e693 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e695 mov edx, dword ptr [0x10e3e648] */
  EDX = (r32((uint32_t)(0x10e3e648)));
  /* 10e1e69b push edx */
  push32((uint32_t)(EDX));
  /* 10e1e69c call 0x10e13590 */
  push32(0x10e1e6a1u); f_10e13590();
  /* 10e1e6a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1e6a4:;
  /* 10e1e6a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1e6a7 mov dword ptr [0x10e3e648], eax */
  w32((uint32_t)(0x10e3e648), (EAX));
  /* 10e1e6ac cmp dword ptr [0x10e3e64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e6b3 je 0x10e1e6c6 */
  if (C.zf) goto L_10e1e6c6;
  /* 10e1e6b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e6b7 mov ecx, dword ptr [0x10e3e64c] */
  ECX = (r32((uint32_t)(0x10e3e64c)));
  /* 10e1e6bd push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e6be call 0x10e13590 */
  push32(0x10e1e6c3u); f_10e13590();
  /* 10e1e6c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1e6c6:;
  /* 10e1e6c6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1e6c9 mov dword ptr [0x10e3e64c], edx */
  w32((uint32_t)(0x10e3e64c), (EDX));
  /* 10e1e6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e6d1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1e6d4 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e6d5 call 0x10e13590 */
  push32(0x10e1e6dau); f_10e13590();
  /* 10e1e6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e6dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e6df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1e6e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e6e3 call 0x10e13590 */
  push32(0x10e1e6e8u); f_10e13590();
  /* 10e1e6e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e6eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e6ed jmp 0x10e1e77c */
  goto L_10e1e77c;
L_10e1e6f2:;
  /* 10e1e6f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e6f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e1e6f7 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e6f8 call 0x10e13590 */
  push32(0x10e1e6fdu); f_10e13590();
  /* 10e1e6fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e700 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e702 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e1e705 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e706 call 0x10e13590 */
  push32(0x10e1e70bu); f_10e13590();
  /* 10e1e70b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e70e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e710 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e1e713 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e714 call 0x10e13590 */
  push32(0x10e1e719u); f_10e13590();
  /* 10e1e719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e71c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e71e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e1e721 push edx */
  push32((uint32_t)(EDX));
  /* 10e1e722 call 0x10e13590 */
  push32(0x10e1e727u); f_10e13590();
  /* 10e1e727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e72a mov eax, 1 */
  EAX = (0x1u);
  /* 10e1e72f jmp 0x10e1e77c */
  goto L_10e1e77c;
L_10e1e731:;
  /* 10e1e731 mov dword ptr [0x10e3cc98], 0x10e3cca2 */
  w32((uint32_t)(0x10e3cc98), (0x10e3cca2u));
  /* 10e1e73b mov dword ptr [0x10e3cc9c], 0x10e3cca2 */
  w32((uint32_t)(0x10e3cc9c), (0x10e3cca2u));
  /* 10e1e745 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e747 mov eax, dword ptr [0x10e3e648] */
  EAX = (r32((uint32_t)(0x10e3e648)));
  /* 10e1e74c push eax */
  push32((uint32_t)(EAX));
  /* 10e1e74d call 0x10e13590 */
  push32(0x10e1e752u); f_10e13590();
  /* 10e1e752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e755 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1e757 mov ecx, dword ptr [0x10e3e64c] */
  ECX = (r32((uint32_t)(0x10e3e64c)));
  /* 10e1e75d push ecx */
  push32((uint32_t)(ECX));
  /* 10e1e75e call 0x10e13590 */
  push32(0x10e1e763u); f_10e13590();
  /* 10e1e763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e766 mov dword ptr [0x10e3e648], 0 */
  w32((uint32_t)(0x10e3e648), (0x0u));
  /* 10e1e770 mov dword ptr [0x10e3e64c], 0 */
  w32((uint32_t)(0x10e3e64c), (0x0u));
  /* 10e1e77a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1e77c:;
  /* 10e1e77c mov esp, ebp */
  ESP = (EBP);
  /* 10e1e77e pop ebp */
  EBP = (pop32());
  /* 10e1e77f ret  */
  ESPCHK(0x10e1e3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x10e1e780 (7 bytes, 5 insns) */
void f_10e1e780(void) {
  FTRACE(0x10e1e780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e780 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e781 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e785 pop ebp */
  EBP = (pop32());
  /* 10e1e786 ret  */
  ESPCHK(0x10e1e780u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10e1e790 (129 bytes, 56 insns) */
void f_10e1e790(void) {
  FTRACE(0x10e1e790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e790 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e1e794 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e1e798 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10e1e79e jne 0x10e1e7dc */
  if (!C.zf) goto L_10e1e7dc;
L_10e1e7a0:;
  /* 10e1e7a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e1e7a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e7a4 jne 0x10e1e7d4 */
  if (!C.zf) goto L_10e1e7d4;
  /* 10e1e7a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e7a8 je 0x10e1e7d0 */
  if (C.zf) goto L_10e1e7d0;
  /* 10e1e7aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e7ad jne 0x10e1e7d4 */
  if (!C.zf) goto L_10e1e7d4;
  /* 10e1e7af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e1e7b1 je 0x10e1e7d0 */
  if (C.zf) goto L_10e1e7d0;
  /* 10e1e7b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e1e7b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e7b9 jne 0x10e1e7d4 */
  if (!C.zf) goto L_10e1e7d4;
  /* 10e1e7bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e7bd je 0x10e1e7d0 */
  if (C.zf) goto L_10e1e7d0;
  /* 10e1e7bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e7c2 jne 0x10e1e7d4 */
  if (!C.zf) goto L_10e1e7d4;
  /* 10e1e7c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e7c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e7ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e1e7cc jne 0x10e1e7a0 */
  if (!C.zf) goto L_10e1e7a0;
  /* 10e1e7ce mov edi, edi */
  EDI = (EDI);
L_10e1e7d0:;
  /* 10e1e7d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e7d2 ret  */
  ESPCHK(0x10e1e790u, _esp0);
  ESP += 4; return;
  /* 10e1e7d3 nop  */
  /* nop */
L_10e1e7d4:;
  /* 10e1e7d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1e7d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e1e7d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10e1e7d9 ret  */
  ESPCHK(0x10e1e790u, _esp0);
  ESP += 4; return;
  /* 10e1e7da mov edi, edi */
  EDI = (EDI);
L_10e1e7dc:;
  /* 10e1e7dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10e1e7e2 je 0x10e1e7f8 */
  if (C.zf) goto L_10e1e7f8;
  /* 10e1e7e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1e7e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e1e7e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e7e9 jne 0x10e1e7d4 */
  if (!C.zf) goto L_10e1e7d4;
  /* 10e1e7eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e1e7ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e7ee je 0x10e1e7d0 */
  if (C.zf) goto L_10e1e7d0;
  /* 10e1e7f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10e1e7f6 je 0x10e1e7a0 */
  if (C.zf) goto L_10e1e7a0;
L_10e1e7f8:;
  /* 10e1e7f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10e1e7fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e7fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e800 jne 0x10e1e7d4 */
  if (!C.zf) goto L_10e1e7d4;
  /* 10e1e802 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e804 je 0x10e1e7d0 */
  if (C.zf) goto L_10e1e7d0;
  /* 10e1e806 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e809 jne 0x10e1e7d4 */
  if (!C.zf) goto L_10e1e7d4;
  /* 10e1e80b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e1e80d je 0x10e1e7d0 */
  if (C.zf) goto L_10e1e7d0;
  /* 10e1e80f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e812 jmp 0x10e1e7a0 */
  goto L_10e1e7a0;
}

/* FUN_1000e820 @ 0x10e1e820 (62 bytes, 35 insns) */
void f_10e1e820(void) {
  FTRACE(0x10e1e820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e820 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e821 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e823 push esi */
  push32((uint32_t)(ESI));
  /* 10e1e824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e826 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e827 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e828 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e829 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e82a push eax */
  push32((uint32_t)(EAX));
  /* 10e1e82b push eax */
  push32((uint32_t)(EAX));
  /* 10e1e82c push eax */
  push32((uint32_t)(EAX));
  /* 10e1e82d push eax */
  push32((uint32_t)(EAX));
  /* 10e1e82e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1e831 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1e834:;
  /* 10e1e834 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1e836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e838 je 0x10e1e841 */
  if (C.zf) goto L_10e1e841;
  /* 10e1e83a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e1e83b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10e1e83b");
  /* 10e1e83f jmp 0x10e1e834 */
  goto L_10e1e834;
L_10e1e841:;
  /* 10e1e841 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e844 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e847 nop  */
  /* nop */
L_10e1e848:;
  /* 10e1e848 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e1e849 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1e84b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e84d je 0x10e1e856 */
  if (C.zf) goto L_10e1e856;
  /* 10e1e84f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e1e850 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10e1e850");
  /* 10e1e854 jae 0x10e1e848 */
  if (!C.cf) goto L_10e1e848;
L_10e1e856:;
  /* 10e1e856 mov eax, ecx */
  EAX = (ECX);
  /* 10e1e858 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e85b pop esi */
  ESI = (pop32());
  /* 10e1e85c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1e85d ret  */
  ESPCHK(0x10e1e820u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10e1e860 (56 bytes, 31 insns) */
void f_10e1e860(void) {
  FTRACE(0x10e1e860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e860 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e861 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e863 push edi */
  push32((uint32_t)(EDI));
  /* 10e1e864 push esi */
  push32((uint32_t)(ESI));
  /* 10e1e865 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1e866 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1e869 jecxz 0x10e1e891 */
  x86_unimpl("jecxz @ 0x10e1e869");
  /* 10e1e86b mov ebx, ecx */
  EBX = (ECX);
  /* 10e1e86d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e870 mov esi, edi */
  ESI = (EDI);
  /* 10e1e872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e874 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10e1e876 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1e878 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e87a mov edi, esi */
  EDI = (ESI);
  /* 10e1e87c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1e87f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10e1e881 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10e1e884 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1e886 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e1e889 ja 0x10e1e88f */
  if ((!C.cf&&!C.zf)) goto L_10e1e88f;
  /* 10e1e88b je 0x10e1e891 */
  if (C.zf) goto L_10e1e891;
  /* 10e1e88d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e1e88e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10e1e88f:;
  /* 10e1e88f not ecx */
  ECX = (~(ECX));
L_10e1e891:;
  /* 10e1e891 mov eax, ecx */
  EAX = (ECX);
  /* 10e1e893 pop ebx */
  EBX = (pop32());
  /* 10e1e894 pop esi */
  ESI = (pop32());
  /* 10e1e895 pop edi */
  EDI = (pop32());
  /* 10e1e896 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1e897 ret  */
  ESPCHK(0x10e1e860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x10e1e8a0 (58 bytes, 32 insns) */
void f_10e1e8a0(void) {
  FTRACE(0x10e1e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e8a3 push esi */
  push32((uint32_t)(ESI));
  /* 10e1e8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e8a6 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8a7 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8a8 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8aa push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8ab push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8ac push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8ad push eax */
  push32((uint32_t)(EAX));
  /* 10e1e8ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1e8b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e1e8b4:;
  /* 10e1e8b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1e8b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e8b8 je 0x10e1e8c1 */
  if (C.zf) goto L_10e1e8c1;
  /* 10e1e8ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e1e8bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10e1e8bb");
  /* 10e1e8bf jmp 0x10e1e8b4 */
  goto L_10e1e8b4;
L_10e1e8c1:;
  /* 10e1e8c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10e1e8c4:;
  /* 10e1e8c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e1e8c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e1e8c8 je 0x10e1e8d4 */
  if (C.zf) goto L_10e1e8d4;
  /* 10e1e8ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e1e8cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10e1e8cb");
  /* 10e1e8cf jae 0x10e1e8c4 */
  if (!C.cf) goto L_10e1e8c4;
  /* 10e1e8d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10e1e8d4:;
  /* 10e1e8d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e8d7 pop esi */
  ESI = (pop32());
  /* 10e1e8d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e1e8d9 ret  */
  ESPCHK(0x10e1e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x10e1e8e0 (512 bytes, 147 insns) */
void f_10e1e8e0(void) {
  FTRACE(0x10e1e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1e8e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1e8e6 cmp dword ptr [0x10e3e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e8ed jne 0x10e1e912 */
  if (!C.zf) goto L_10e1e912;
  /* 10e1e8ef call 0x10e1f3b0 */
  push32(0x10e1e8f4u); f_10e1f3b0();
  /* 10e1e8f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e8f6 je 0x10e1e902 */
  if (C.zf) goto L_10e1e902;
  /* 10e1e8f8 mov eax, dword ptr [0x10e40248] */
  EAX = (r32((uint32_t)(0x10e40248)));
  /* 10e1e8fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1e900 jmp 0x10e1e909 */
  goto L_10e1e909;
L_10e1e902:;
  /* 10e1e902 mov dword ptr [ebp - 8], 0x10e1f400 */
  w32((uint32_t)(EBP + -0x8), (0x10e1f400u));
L_10e1e909:;
  /* 10e1e909 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1e90c mov dword ptr [0x10e3e694], ecx */
  w32((uint32_t)(0x10e3e694), (ECX));
L_10e1e912:;
  /* 10e1e912 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e916 jne 0x10e1e922 */
  if (!C.zf) goto L_10e1e922;
  /* 10e1e918 call 0x10e1f200 */
  push32(0x10e1e91du); f_10e1f200();
  /* 10e1e91d jmp 0x10e1e9ee */
  goto L_10e1e9ee;
L_10e1e922:;
  /* 10e1e922 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e925 mov dword ptr [0x10e3e684], edx */
  w32((uint32_t)(0x10e3e684), (EDX));
  /* 10e1e92b cmp dword ptr [0x10e3e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e932 je 0x10e1e954 */
  if (C.zf) goto L_10e1e954;
  /* 10e1e934 mov eax, dword ptr [0x10e3e684] */
  EAX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1e939 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1e93c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1e93e je 0x10e1e954 */
  if (C.zf) goto L_10e1e954;
  /* 10e1e940 push 0x10e3e684 */
  push32((uint32_t)(0x10e3e684u));
  /* 10e1e945 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e1e947 push 0x10e3da90 */
  push32((uint32_t)(0x10e3da90u));
  /* 10e1e94c call 0x10e1eae0 */
  push32(0x10e1e951u); f_10e1eae0();
  /* 10e1e951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1e954:;
  /* 10e1e954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1e957 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1e95a mov dword ptr [0x10e3e688], edx */
  w32((uint32_t)(0x10e3e688), (EDX));
  /* 10e1e960 cmp dword ptr [0x10e3e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e967 je 0x10e1e989 */
  if (C.zf) goto L_10e1e989;
  /* 10e1e969 mov eax, dword ptr [0x10e3e688] */
  EAX = (r32((uint32_t)(0x10e3e688)));
  /* 10e1e96e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1e971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1e973 je 0x10e1e989 */
  if (C.zf) goto L_10e1e989;
  /* 10e1e975 push 0x10e3e688 */
  push32((uint32_t)(0x10e3e688u));
  /* 10e1e97a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e1e97c push 0x10e3d9d8 */
  push32((uint32_t)(0x10e3d9d8u));
  /* 10e1e981 call 0x10e1eae0 */
  push32(0x10e1e986u); f_10e1eae0();
  /* 10e1e986 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1e989:;
  /* 10e1e989 mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
  /* 10e1e993 cmp dword ptr [0x10e3e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e99a je 0x10e1e9cd */
  if (C.zf) goto L_10e1e9cd;
  /* 10e1e99c mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1e9a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e1e9a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1e9a7 je 0x10e1e9cd */
  if (C.zf) goto L_10e1e9cd;
  /* 10e1e9a9 cmp dword ptr [0x10e3e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e9b0 je 0x10e1e9c6 */
  if (C.zf) goto L_10e1e9c6;
  /* 10e1e9b2 mov ecx, dword ptr [0x10e3e688] */
  ECX = (r32((uint32_t)(0x10e3e688)));
  /* 10e1e9b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1e9bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1e9bd je 0x10e1e9c6 */
  if (C.zf) goto L_10e1e9c6;
  /* 10e1e9bf call 0x10e1eb70 */
  push32(0x10e1e9c4u); f_10e1eb70();
  /* 10e1e9c4 jmp 0x10e1e9cb */
  goto L_10e1e9cb;
L_10e1e9c6:;
  /* 10e1e9c6 call 0x10e1ef60 */
  push32(0x10e1e9cbu); f_10e1ef60();
L_10e1e9cb:;
  /* 10e1e9cb jmp 0x10e1e9ee */
  goto L_10e1e9ee;
L_10e1e9cd:;
  /* 10e1e9cd cmp dword ptr [0x10e3e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e9d4 je 0x10e1e9e9 */
  if (C.zf) goto L_10e1e9e9;
  /* 10e1e9d6 mov eax, dword ptr [0x10e3e688] */
  EAX = (r32((uint32_t)(0x10e3e688)));
  /* 10e1e9db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1e9de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1e9e0 je 0x10e1e9e9 */
  if (C.zf) goto L_10e1e9e9;
  /* 10e1e9e2 call 0x10e1f100 */
  push32(0x10e1e9e7u); f_10e1f100();
  /* 10e1e9e7 jmp 0x10e1e9ee */
  goto L_10e1e9ee;
L_10e1e9e9:;
  /* 10e1e9e9 call 0x10e1f200 */
  push32(0x10e1e9eeu); f_10e1f200();
L_10e1e9ee:;
  /* 10e1e9ee cmp dword ptr [0x10e3e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1e9f5 jne 0x10e1e9fe */
  if (!C.zf) goto L_10e1e9fe;
  /* 10e1e9f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1e9f9 jmp 0x10e1eadc */
  goto L_10e1eadc;
L_10e1e9fe:;
  /* 10e1e9fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ea01 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ea07 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ea08 call 0x10e1f230 */
  push32(0x10e1ea0du); f_10e1f230();
  /* 10e1ea0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ea10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1ea13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ea17 je 0x10e1ea2c */
  if (C.zf) goto L_10e1ea2c;
  /* 10e1ea19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1ea1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ea21 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ea22 call dword ptr [0x10e402c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402c4))), 0x10e1ea28u);
  /* 10e1ea28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ea2a jne 0x10e1ea33 */
  if (!C.zf) goto L_10e1ea33;
L_10e1ea2c:;
  /* 10e1ea2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ea2e jmp 0x10e1eadc */
  goto L_10e1eadc;
L_10e1ea33:;
  /* 10e1ea33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1ea35 mov ecx, dword ptr [0x10e3e674] */
  ECX = (r32((uint32_t)(0x10e3e674)));
  /* 10e1ea3b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ea3c call dword ptr [0x10e4033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4033c))), 0x10e1ea42u);
  /* 10e1ea42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ea44 jne 0x10e1ea4d */
  if (!C.zf) goto L_10e1ea4d;
  /* 10e1ea46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ea48 jmp 0x10e1eadc */
  goto L_10e1eadc;
L_10e1ea4d:;
  /* 10e1ea4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ea51 je 0x10e1ea78 */
  if (C.zf) goto L_10e1ea78;
  /* 10e1ea53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ea56 mov ax, word ptr [0x10e3e674] */
  AX = (r16((uint32_t)(0x10e3e674)));
  /* 10e1ea5c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10e1ea5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ea62 mov dx, word ptr [0x10e3e690] */
  DX = (r16((uint32_t)(0x10e3e690)));
  /* 10e1ea69 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10e1ea6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1ea70 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10e1ea74 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10e1ea78:;
  /* 10e1ea78 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ea7c je 0x10e1ead7 */
  if (C.zf) goto L_10e1ead7;
  /* 10e1ea7e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e1ea80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1ea83 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ea84 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10e1ea89 mov eax, dword ptr [0x10e3e674] */
  EAX = (r32((uint32_t)(0x10e3e674)));
  /* 10e1ea8e push eax */
  push32((uint32_t)(EAX));
  /* 10e1ea8f call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1ea95u);
  /* 10e1ea95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ea97 jne 0x10e1ea9d */
  if (!C.zf) goto L_10e1ea9d;
  /* 10e1ea99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ea9b jmp 0x10e1eadc */
  goto L_10e1eadc;
L_10e1ea9d:;
  /* 10e1ea9d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e1ea9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1eaa2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eaa5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1eaa6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10e1eaab mov edx, dword ptr [0x10e3e690] */
  EDX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1eab1 push edx */
  push32((uint32_t)(EDX));
  /* 10e1eab2 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1eab8u);
  /* 10e1eab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1eaba jne 0x10e1eac0 */
  if (!C.zf) goto L_10e1eac0;
  /* 10e1eabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1eabe jmp 0x10e1eadc */
  goto L_10e1eadc;
L_10e1eac0:;
  /* 10e1eac0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e1eac2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1eac5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eaca push eax */
  push32((uint32_t)(EAX));
  /* 10e1eacb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1eace push ecx */
  push32((uint32_t)(ECX));
  /* 10e1eacf call 0x10e15640 */
  push32(0x10e1ead4u); f_10e15640();
  /* 10e1ead4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1ead7:;
  /* 10e1ead7 mov eax, 1 */
  EAX = (0x1u);
L_10e1eadc:;
  /* 10e1eadc mov esp, ebp */
  ESP = (EBP);
  /* 10e1eade pop ebp */
  EBP = (pop32());
  /* 10e1eadf ret  */
  ESPCHK(0x10e1e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eae0 @ 0x10e1eae0 (130 bytes, 47 insns) */
void f_10e1eae0(void) {
  FTRACE(0x10e1eae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1eae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1eae1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1eae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1eae6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e1eaed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e1eaf4:;
  /* 10e1eaf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1eaf7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eafa jg 0x10e1eb5e */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1eb5e;
  /* 10e1eafc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eb00 je 0x10e1eb5e */
  if (C.zf) goto L_10e1eb5e;
  /* 10e1eb02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1eb05 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eb08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1eb09 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1eb0b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e1eb0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1eb10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1eb13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1eb16 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10e1eb19 push eax */
  push32((uint32_t)(EAX));
  /* 10e1eb1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1eb1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1eb1f push edx */
  push32((uint32_t)(EDX));
  /* 10e1eb20 call 0x10e211d0 */
  push32(0x10e1eb25u); f_10e211d0();
  /* 10e1eb25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eb28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1eb2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eb2f jne 0x10e1eb42 */
  if (!C.zf) goto L_10e1eb42;
  /* 10e1eb31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1eb34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1eb37 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10e1eb3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1eb3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e1eb40 jmp 0x10e1eb5c */
  goto L_10e1eb5c;
L_10e1eb42:;
  /* 10e1eb42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eb46 jge 0x10e1eb53 */
  if ((C.sf==C.of)) goto L_10e1eb53;
  /* 10e1eb48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1eb4b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1eb4e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e1eb51 jmp 0x10e1eb5c */
  goto L_10e1eb5c;
L_10e1eb53:;
  /* 10e1eb53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1eb56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eb59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e1eb5c:;
  /* 10e1eb5c jmp 0x10e1eaf4 */
  goto L_10e1eaf4;
L_10e1eb5e:;
  /* 10e1eb5e mov esp, ebp */
  ESP = (EBP);
  /* 10e1eb60 pop ebp */
  EBP = (pop32());
  /* 10e1eb61 ret  */
  ESPCHK(0x10e1eae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x10e1eb70 (186 bytes, 50 insns) */
void f_10e1eb70(void) {
  FTRACE(0x10e1eb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1eb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1eb71 mov ebp, esp */
  EBP = (ESP);
  /* 10e1eb73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1eb74 mov eax, dword ptr [0x10e3e684] */
  EAX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1eb79 push eax */
  push32((uint32_t)(EAX));
  /* 10e1eb7a call 0x10e15930 */
  push32(0x10e1eb7fu); f_10e15930();
  /* 10e1eb7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eb82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1eb84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eb87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e1eb8a mov dword ptr [0x10e3e680], ecx */
  w32((uint32_t)(0x10e3e680), (ECX));
  /* 10e1eb90 mov edx, dword ptr [0x10e3e688] */
  EDX = (r32((uint32_t)(0x10e3e688)));
  /* 10e1eb96 push edx */
  push32((uint32_t)(EDX));
  /* 10e1eb97 call 0x10e15930 */
  push32(0x10e1eb9cu); f_10e15930();
  /* 10e1eb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eb9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1eba1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eba4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e1eba7 mov dword ptr [0x10e3e678], ecx */
  w32((uint32_t)(0x10e3e678), (ECX));
  /* 10e1ebad mov dword ptr [0x10e3e674], 0 */
  w32((uint32_t)(0x10e3e674), (0x0u));
  /* 10e1ebb7 cmp dword ptr [0x10e3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ebbe je 0x10e1ebc9 */
  if (C.zf) goto L_10e1ebc9;
  /* 10e1ebc0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e1ebc7 jmp 0x10e1ebdb */
  goto L_10e1ebdb;
L_10e1ebc9:;
  /* 10e1ebc9 mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ebcf push edx */
  push32((uint32_t)(EDX));
  /* 10e1ebd0 call 0x10e1f610 */
  push32(0x10e1ebd5u); f_10e1f610();
  /* 10e1ebd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ebd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1ebdb:;
  /* 10e1ebdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1ebde mov dword ptr [0x10e3e67c], eax */
  w32((uint32_t)(0x10e3e67c), (EAX));
  /* 10e1ebe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1ebe5 push 0x10e1ec30 */
  push32((uint32_t)(0x10e1ec30u));
  /* 10e1ebea call dword ptr [0x10e402c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402c8))), 0x10e1ebf0u);
  /* 10e1ebf0 mov ecx, dword ptr [0x10e3e68c] */
  ECX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ebf6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1ebfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1ebfe je 0x10e1ec1c */
  if (C.zf) goto L_10e1ec1c;
  /* 10e1ec00 mov edx, dword ptr [0x10e3e68c] */
  EDX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ec06 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ec0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1ec0e je 0x10e1ec1c */
  if (C.zf) goto L_10e1ec1c;
  /* 10e1ec10 mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ec15 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ec18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ec1a jne 0x10e1ec26 */
  if (!C.zf) goto L_10e1ec26;
L_10e1ec1c:;
  /* 10e1ec1c mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
L_10e1ec26:;
  /* 10e1ec26 mov esp, ebp */
  ESP = (EBP);
  /* 10e1ec28 pop ebp */
  EBP = (pop32());
  /* 10e1ec29 ret  */
  ESPCHK(0x10e1eb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x10e1ec30 (804 bytes, 220 insns) */
void f_10e1ec30(void) {
  FTRACE(0x10e1ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ec31 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ec33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ec36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1ec39 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ec3a call 0x10e1f590 */
  push32(0x10e1ec3fu); f_10e1f590();
  /* 10e1ec3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ec42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e1ec45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e1ec47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e1ec4a push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ec4b mov edx, dword ptr [0x10e3e678] */
  EDX = (r32((uint32_t)(0x10e3e678)));
  /* 10e1ec51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1ec53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ec55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ec5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ec61 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ec62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ec65 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ec66 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1ec6cu);
  /* 10e1ec6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ec6e jne 0x10e1ec84 */
  if (!C.zf) goto L_10e1ec84;
  /* 10e1ec70 mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
  /* 10e1ec7a mov eax, 1 */
  EAX = (0x1u);
  /* 10e1ec7f jmp 0x10e1ef4e */
  goto L_10e1ef4e;
L_10e1ec84:;
  /* 10e1ec84 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e1ec87 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ec88 mov edx, dword ptr [0x10e3e688] */
  EDX = (r32((uint32_t)(0x10e3e688)));
  /* 10e1ec8e push edx */
  push32((uint32_t)(EDX));
  /* 10e1ec8f call 0x10e211d0 */
  push32(0x10e1ec94u); f_10e211d0();
  /* 10e1ec94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ec97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ec99 jne 0x10e1edbf */
  if (!C.zf) goto L_10e1edbf;
  /* 10e1ec9f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e1eca1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e1eca4 push eax */
  push32((uint32_t)(EAX));
  /* 10e1eca5 mov ecx, dword ptr [0x10e3e680] */
  ECX = (r32((uint32_t)(0x10e3e680)));
  /* 10e1ecab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1ecad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ecaf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1ecb5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ecbb push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ecbc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ecbf push edx */
  push32((uint32_t)(EDX));
  /* 10e1ecc0 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1ecc6u);
  /* 10e1ecc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ecc8 jne 0x10e1ecde */
  if (!C.zf) goto L_10e1ecde;
  /* 10e1ecca mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
  /* 10e1ecd4 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1ecd9 jmp 0x10e1ef4e */
  goto L_10e1ef4e;
L_10e1ecde:;
  /* 10e1ecde lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e1ece1 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ece2 mov ecx, dword ptr [0x10e3e684] */
  ECX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ece8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ece9 call 0x10e211d0 */
  push32(0x10e1eceeu); f_10e211d0();
  /* 10e1ecee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ecf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ecf3 jne 0x10e1ed20 */
  if (!C.zf) goto L_10e1ed20;
  /* 10e1ecf5 mov edx, dword ptr [0x10e3e68c] */
  EDX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ecfb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ed01 mov dword ptr [0x10e3e68c], edx */
  w32((uint32_t)(0x10e3e68c), (EDX));
  /* 10e1ed07 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ed0a mov dword ptr [0x10e3e690], eax */
  w32((uint32_t)(0x10e3e690), (EAX));
  /* 10e1ed0f mov ecx, dword ptr [0x10e3e690] */
  ECX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1ed15 mov dword ptr [0x10e3e674], ecx */
  w32((uint32_t)(0x10e3e674), (ECX));
  /* 10e1ed1b jmp 0x10e1edbf */
  goto L_10e1edbf;
L_10e1ed20:;
  /* 10e1ed20 mov edx, dword ptr [0x10e3e68c] */
  EDX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ed26 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1ed29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1ed2b jne 0x10e1edbf */
  if (!C.zf) goto L_10e1edbf;
  /* 10e1ed31 cmp dword ptr [0x10e3e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ed38 je 0x10e1ed8d */
  if (C.zf) goto L_10e1ed8d;
  /* 10e1ed3a mov eax, dword ptr [0x10e3e67c] */
  EAX = (r32((uint32_t)(0x10e3e67c)));
  /* 10e1ed3f push eax */
  push32((uint32_t)(EAX));
  /* 10e1ed40 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e1ed43 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ed44 mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ed4a push edx */
  push32((uint32_t)(EDX));
  /* 10e1ed4b call 0x10e212a0 */
  push32(0x10e1ed50u); f_10e212a0();
  /* 10e1ed50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ed53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ed55 jne 0x10e1ed8d */
  if (!C.zf) goto L_10e1ed8d;
  /* 10e1ed57 mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ed5c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10e1ed5e mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
  /* 10e1ed63 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ed66 mov dword ptr [0x10e3e690], ecx */
  w32((uint32_t)(0x10e3e690), (ECX));
  /* 10e1ed6c mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ed72 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ed73 call 0x10e15930 */
  push32(0x10e1ed78u); f_10e15930();
  /* 10e1ed78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ed7b cmp eax, dword ptr [0x10e3e67c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3e67c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ed81 jne 0x10e1ed8b */
  if (!C.zf) goto L_10e1ed8b;
  /* 10e1ed83 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ed86 mov dword ptr [0x10e3e674], eax */
  w32((uint32_t)(0x10e3e674), (EAX));
L_10e1ed8b:;
  /* 10e1ed8b jmp 0x10e1edbf */
  goto L_10e1edbf;
L_10e1ed8d:;
  /* 10e1ed8d mov ecx, dword ptr [0x10e3e68c] */
  ECX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ed93 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1ed96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1ed98 jne 0x10e1edbf */
  if (!C.zf) goto L_10e1edbf;
  /* 10e1ed9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ed9d push edx */
  push32((uint32_t)(EDX));
  /* 10e1ed9e call 0x10e1f2d0 */
  push32(0x10e1eda3u); f_10e1f2d0();
  /* 10e1eda3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1eda8 je 0x10e1edbf */
  if (C.zf) goto L_10e1edbf;
  /* 10e1edaa mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1edaf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10e1edb1 mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
  /* 10e1edb6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1edb9 mov dword ptr [0x10e3e690], ecx */
  w32((uint32_t)(0x10e3e690), (ECX));
L_10e1edbf:;
  /* 10e1edbf mov edx, dword ptr [0x10e3e68c] */
  EDX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1edc5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1edcb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1edd1 je 0x10e1ef41 */
  if (C.zf) goto L_10e1ef41;
  /* 10e1edd7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e1edd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e1eddc push eax */
  push32((uint32_t)(EAX));
  /* 10e1eddd mov ecx, dword ptr [0x10e3e680] */
  ECX = (r32((uint32_t)(0x10e3e680)));
  /* 10e1ede3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1ede5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ede7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1eded add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1edf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1edf4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1edf7 push edx */
  push32((uint32_t)(EDX));
  /* 10e1edf8 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1edfeu);
  /* 10e1edfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ee00 jne 0x10e1ee16 */
  if (!C.zf) goto L_10e1ee16;
  /* 10e1ee02 mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
  /* 10e1ee0c mov eax, 1 */
  EAX = (0x1u);
  /* 10e1ee11 jmp 0x10e1ef4e */
  goto L_10e1ef4e;
L_10e1ee16:;
  /* 10e1ee16 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e1ee19 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ee1a mov ecx, dword ptr [0x10e3e684] */
  ECX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ee20 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ee21 call 0x10e211d0 */
  push32(0x10e1ee26u); f_10e211d0();
  /* 10e1ee26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ee29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ee2b jne 0x10e1eee0 */
  if (!C.zf) goto L_10e1eee0;
  /* 10e1ee31 mov edx, dword ptr [0x10e3e68c] */
  EDX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ee37 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e1ee3a mov dword ptr [0x10e3e68c], edx */
  w32((uint32_t)(0x10e3e68c), (EDX));
  /* 10e1ee40 cmp dword ptr [0x10e3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ee47 je 0x10e1ee6a */
  if (C.zf) goto L_10e1ee6a;
  /* 10e1ee49 mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ee4e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e1ee51 mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
  /* 10e1ee56 cmp dword ptr [0x10e3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ee5d jne 0x10e1ee68 */
  if (!C.zf) goto L_10e1ee68;
  /* 10e1ee5f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ee62 mov dword ptr [0x10e3e674], ecx */
  w32((uint32_t)(0x10e3e674), (ECX));
L_10e1ee68:;
  /* 10e1ee68 jmp 0x10e1eede */
  goto L_10e1eede;
L_10e1ee6a:;
  /* 10e1ee6a cmp dword ptr [0x10e3e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ee71 je 0x10e1eebf */
  if (C.zf) goto L_10e1eebf;
  /* 10e1ee73 mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ee79 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ee7a call 0x10e15930 */
  push32(0x10e1ee7fu); f_10e15930();
  /* 10e1ee7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ee82 cmp eax, dword ptr [0x10e3e67c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3e67c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ee88 jne 0x10e1eebf */
  if (!C.zf) goto L_10e1eebf;
  /* 10e1ee8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1ee8c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ee8f push eax */
  push32((uint32_t)(EAX));
  /* 10e1ee90 call 0x10e1f320 */
  push32(0x10e1ee95u); f_10e1f320();
  /* 10e1ee95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ee98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ee9a je 0x10e1eebd */
  if (C.zf) goto L_10e1eebd;
  /* 10e1ee9c mov ecx, dword ptr [0x10e3e68c] */
  ECX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1eea2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e1eea5 mov dword ptr [0x10e3e68c], ecx */
  w32((uint32_t)(0x10e3e68c), (ECX));
  /* 10e1eeab cmp dword ptr [0x10e3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eeb2 jne 0x10e1eebd */
  if (!C.zf) goto L_10e1eebd;
  /* 10e1eeb4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1eeb7 mov dword ptr [0x10e3e674], edx */
  w32((uint32_t)(0x10e3e674), (EDX));
L_10e1eebd:;
  /* 10e1eebd jmp 0x10e1eede */
  goto L_10e1eede;
L_10e1eebf:;
  /* 10e1eebf mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1eec4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e1eec7 mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
  /* 10e1eecc cmp dword ptr [0x10e3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eed3 jne 0x10e1eede */
  if (!C.zf) goto L_10e1eede;
  /* 10e1eed5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1eed8 mov dword ptr [0x10e3e674], ecx */
  w32((uint32_t)(0x10e3e674), (ECX));
L_10e1eede:;
  /* 10e1eede jmp 0x10e1ef41 */
  goto L_10e1ef41;
L_10e1eee0:;
  /* 10e1eee0 cmp dword ptr [0x10e3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eee7 jne 0x10e1ef41 */
  if (!C.zf) goto L_10e1ef41;
  /* 10e1eee9 cmp dword ptr [0x10e3e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1eef0 je 0x10e1ef41 */
  if (C.zf) goto L_10e1ef41;
  /* 10e1eef2 mov edx, dword ptr [0x10e3e67c] */
  EDX = (r32((uint32_t)(0x10e3e67c)));
  /* 10e1eef8 push edx */
  push32((uint32_t)(EDX));
  /* 10e1eef9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e1eefc push eax */
  push32((uint32_t)(EAX));
  /* 10e1eefd mov ecx, dword ptr [0x10e3e684] */
  ECX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ef03 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ef04 call 0x10e212a0 */
  push32(0x10e1ef09u); f_10e212a0();
  /* 10e1ef09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ef0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ef0e jne 0x10e1ef41 */
  if (!C.zf) goto L_10e1ef41;
  /* 10e1ef10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1ef12 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ef15 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ef16 call 0x10e1f320 */
  push32(0x10e1ef1bu); f_10e1f320();
  /* 10e1ef1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ef1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1ef20 je 0x10e1ef41 */
  if (C.zf) goto L_10e1ef41;
  /* 10e1ef22 mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ef27 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e1ef2a mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
  /* 10e1ef2f cmp dword ptr [0x10e3e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ef36 jne 0x10e1ef41 */
  if (!C.zf) goto L_10e1ef41;
  /* 10e1ef38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1ef3b mov dword ptr [0x10e3e674], ecx */
  w32((uint32_t)(0x10e3e674), (ECX));
L_10e1ef41:;
  /* 10e1ef41 mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1ef46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1ef49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1ef4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1ef4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e1ef4e:;
  /* 10e1ef4e mov esp, ebp */
  ESP = (EBP);
  /* 10e1ef50 pop ebp */
  EBP = (pop32());
  /* 10e1ef51 ret 4 */
  ESPCHK(0x10e1ec30u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ef60 @ 0x10e1ef60 (116 bytes, 33 insns) */
void f_10e1ef60(void) {
  FTRACE(0x10e1ef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1ef60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1ef61 mov ebp, esp */
  EBP = (ESP);
  /* 10e1ef63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1ef64 mov eax, dword ptr [0x10e3e684] */
  EAX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ef69 push eax */
  push32((uint32_t)(EAX));
  /* 10e1ef6a call 0x10e15930 */
  push32(0x10e1ef6fu); f_10e15930();
  /* 10e1ef6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1ef72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1ef74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ef77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e1ef7a mov dword ptr [0x10e3e680], ecx */
  w32((uint32_t)(0x10e3e680), (ECX));
  /* 10e1ef80 cmp dword ptr [0x10e3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1ef87 je 0x10e1ef92 */
  if (C.zf) goto L_10e1ef92;
  /* 10e1ef89 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e1ef90 jmp 0x10e1efa4 */
  goto L_10e1efa4;
L_10e1ef92:;
  /* 10e1ef92 mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1ef98 push edx */
  push32((uint32_t)(EDX));
  /* 10e1ef99 call 0x10e1f610 */
  push32(0x10e1ef9eu); f_10e1f610();
  /* 10e1ef9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1efa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1efa4:;
  /* 10e1efa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1efa7 mov dword ptr [0x10e3e67c], eax */
  w32((uint32_t)(0x10e3e67c), (EAX));
  /* 10e1efac push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1efae push 0x10e1efe0 */
  push32((uint32_t)(0x10e1efe0u));
  /* 10e1efb3 call dword ptr [0x10e402c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402c8))), 0x10e1efb9u);
  /* 10e1efb9 mov ecx, dword ptr [0x10e3e68c] */
  ECX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1efbf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1efc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1efc4 jne 0x10e1efd0 */
  if (!C.zf) goto L_10e1efd0;
  /* 10e1efc6 mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
L_10e1efd0:;
  /* 10e1efd0 mov esp, ebp */
  ESP = (EBP);
  /* 10e1efd2 pop ebp */
  EBP = (pop32());
  /* 10e1efd3 ret  */
  ESPCHK(0x10e1ef60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efe0 @ 0x10e1efe0 (287 bytes, 86 insns) */
void f_10e1efe0(void) {
  FTRACE(0x10e1efe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1efe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1efe1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1efe3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1efe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1efe9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1efea call 0x10e1f590 */
  push32(0x10e1efefu); f_10e1f590();
  /* 10e1efef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1eff2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e1eff5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e1eff7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e1effa push ecx */
  push32((uint32_t)(ECX));
  /* 10e1effb mov edx, dword ptr [0x10e3e680] */
  EDX = (r32((uint32_t)(0x10e3e680)));
  /* 10e1f001 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1f003 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f005 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1f00b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f011 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f012 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f015 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f016 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1f01cu);
  /* 10e1f01c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f01e jne 0x10e1f034 */
  if (!C.zf) goto L_10e1f034;
  /* 10e1f020 mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
  /* 10e1f02a mov eax, 1 */
  EAX = (0x1u);
  /* 10e1f02f jmp 0x10e1f0f9 */
  goto L_10e1f0f9;
L_10e1f034:;
  /* 10e1f034 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e1f037 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f038 mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1f03e push edx */
  push32((uint32_t)(EDX));
  /* 10e1f03f call 0x10e211d0 */
  push32(0x10e1f044u); f_10e211d0();
  /* 10e1f044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f049 jne 0x10e1f089 */
  if (!C.zf) goto L_10e1f089;
  /* 10e1f04b cmp dword ptr [0x10e3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f052 jne 0x10e1f066 */
  if (!C.zf) goto L_10e1f066;
  /* 10e1f054 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1f056 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f059 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f05a call 0x10e1f320 */
  push32(0x10e1f05fu); f_10e1f320();
  /* 10e1f05f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f064 je 0x10e1f087 */
  if (C.zf) goto L_10e1f087;
L_10e1f066:;
  /* 10e1f066 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f069 mov dword ptr [0x10e3e690], ecx */
  w32((uint32_t)(0x10e3e690), (ECX));
  /* 10e1f06f mov edx, dword ptr [0x10e3e690] */
  EDX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1f075 mov dword ptr [0x10e3e674], edx */
  w32((uint32_t)(0x10e3e674), (EDX));
  /* 10e1f07b mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1f080 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e1f082 mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
L_10e1f087:;
  /* 10e1f087 jmp 0x10e1f0ec */
  goto L_10e1f0ec;
L_10e1f089:;
  /* 10e1f089 cmp dword ptr [0x10e3e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f090 jne 0x10e1f0ec */
  if (!C.zf) goto L_10e1f0ec;
  /* 10e1f092 cmp dword ptr [0x10e3e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f099 je 0x10e1f0ec */
  if (C.zf) goto L_10e1f0ec;
  /* 10e1f09b mov ecx, dword ptr [0x10e3e67c] */
  ECX = (r32((uint32_t)(0x10e3e67c)));
  /* 10e1f0a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f0a2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10e1f0a5 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f0a6 mov eax, dword ptr [0x10e3e684] */
  EAX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1f0ab push eax */
  push32((uint32_t)(EAX));
  /* 10e1f0ac call 0x10e212a0 */
  push32(0x10e1f0b1u); f_10e212a0();
  /* 10e1f0b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f0b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f0b6 jne 0x10e1f0ec */
  if (!C.zf) goto L_10e1f0ec;
  /* 10e1f0b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1f0ba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f0bd push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f0be call 0x10e1f320 */
  push32(0x10e1f0c3u); f_10e1f320();
  /* 10e1f0c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f0c8 je 0x10e1f0ec */
  if (C.zf) goto L_10e1f0ec;
  /* 10e1f0ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f0cd mov dword ptr [0x10e3e690], edx */
  w32((uint32_t)(0x10e3e690), (EDX));
  /* 10e1f0d3 mov eax, dword ptr [0x10e3e690] */
  EAX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1f0d8 mov dword ptr [0x10e3e674], eax */
  w32((uint32_t)(0x10e3e674), (EAX));
  /* 10e1f0dd mov ecx, dword ptr [0x10e3e68c] */
  ECX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1f0e3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1f0e6 mov dword ptr [0x10e3e68c], ecx */
  w32((uint32_t)(0x10e3e68c), (ECX));
L_10e1f0ec:;
  /* 10e1f0ec mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1f0f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f0f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1f0f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f0f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e1f0f9:;
  /* 10e1f0f9 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f0fb pop ebp */
  EBP = (pop32());
  /* 10e1f0fc ret 4 */
  ESPCHK(0x10e1efe0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f100 @ 0x10e1f100 (69 bytes, 20 insns) */
void f_10e1f100(void) {
  FTRACE(0x10e1f100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f100 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f101 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f103 mov eax, dword ptr [0x10e3e688] */
  EAX = (r32((uint32_t)(0x10e3e688)));
  /* 10e1f108 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f109 call 0x10e15930 */
  push32(0x10e1f10eu); f_10e15930();
  /* 10e1f10e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f111 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1f113 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f116 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e1f119 mov dword ptr [0x10e3e678], ecx */
  w32((uint32_t)(0x10e3e678), (ECX));
  /* 10e1f11f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1f121 push 0x10e1f150 */
  push32((uint32_t)(0x10e1f150u));
  /* 10e1f126 call dword ptr [0x10e402c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402c8))), 0x10e1f12cu);
  /* 10e1f12c mov edx, dword ptr [0x10e3e68c] */
  EDX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1f132 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1f135 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1f137 jne 0x10e1f143 */
  if (!C.zf) goto L_10e1f143;
  /* 10e1f139 mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
L_10e1f143:;
  /* 10e1f143 pop ebp */
  EBP = (pop32());
  /* 10e1f144 ret  */
  ESPCHK(0x10e1f100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f150 @ 0x10e1f150 (172 bytes, 54 insns) */
void f_10e1f150(void) {
  FTRACE(0x10e1f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f150 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f151 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f153 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f159 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f15a call 0x10e1f590 */
  push32(0x10e1f15fu); f_10e1f590();
  /* 10e1f15f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f162 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e1f165 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e1f167 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e1f16a push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f16b mov edx, dword ptr [0x10e3e678] */
  EDX = (r32((uint32_t)(0x10e3e678)));
  /* 10e1f171 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1f173 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f175 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1f17b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f181 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f182 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f185 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f186 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1f18cu);
  /* 10e1f18c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f18e jne 0x10e1f1a1 */
  if (!C.zf) goto L_10e1f1a1;
  /* 10e1f190 mov dword ptr [0x10e3e68c], 0 */
  w32((uint32_t)(0x10e3e68c), (0x0u));
  /* 10e1f19a mov eax, 1 */
  EAX = (0x1u);
  /* 10e1f19f jmp 0x10e1f1f6 */
  goto L_10e1f1f6;
L_10e1f1a1:;
  /* 10e1f1a1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e1f1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f1a5 mov edx, dword ptr [0x10e3e688] */
  EDX = (r32((uint32_t)(0x10e3e688)));
  /* 10e1f1ab push edx */
  push32((uint32_t)(EDX));
  /* 10e1f1ac call 0x10e211d0 */
  push32(0x10e1f1b1u); f_10e211d0();
  /* 10e1f1b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f1b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f1b6 jne 0x10e1f1e9 */
  if (!C.zf) goto L_10e1f1e9;
  /* 10e1f1b8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f1bb push eax */
  push32((uint32_t)(EAX));
  /* 10e1f1bc call 0x10e1f2d0 */
  push32(0x10e1f1c1u); f_10e1f2d0();
  /* 10e1f1c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f1c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f1c6 je 0x10e1f1e9 */
  if (C.zf) goto L_10e1f1e9;
  /* 10e1f1c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e1f1cb mov dword ptr [0x10e3e690], ecx */
  w32((uint32_t)(0x10e3e690), (ECX));
  /* 10e1f1d1 mov edx, dword ptr [0x10e3e690] */
  EDX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1f1d7 mov dword ptr [0x10e3e674], edx */
  w32((uint32_t)(0x10e3e674), (EDX));
  /* 10e1f1dd mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1f1e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e1f1e4 mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
L_10e1f1e9:;
  /* 10e1f1e9 mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1f1ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f1f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1f1f3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f1f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e1f1f6:;
  /* 10e1f1f6 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f1f8 pop ebp */
  EBP = (pop32());
  /* 10e1f1f9 ret 4 */
  ESPCHK(0x10e1f150u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f200 @ 0x10e1f200 (43 bytes, 11 insns) */
void f_10e1f200(void) {
  FTRACE(0x10e1f200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f200 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f201 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f203 mov eax, dword ptr [0x10e3e68c] */
  EAX = (r32((uint32_t)(0x10e3e68c)));
  /* 10e1f208 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f20d mov dword ptr [0x10e3e68c], eax */
  w32((uint32_t)(0x10e3e68c), (EAX));
  /* 10e1f212 call dword ptr [0x10e40240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40240))), 0x10e1f218u);
  /* 10e1f218 mov dword ptr [0x10e3e690], eax */
  w32((uint32_t)(0x10e3e690), (EAX));
  /* 10e1f21d mov ecx, dword ptr [0x10e3e690] */
  ECX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1f223 mov dword ptr [0x10e3e674], ecx */
  w32((uint32_t)(0x10e3e674), (ECX));
  /* 10e1f229 pop ebp */
  EBP = (pop32());
  /* 10e1f22a ret  */
  ESPCHK(0x10e1f200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f230 @ 0x10e1f230 (155 bytes, 57 insns) */
void f_10e1f230(void) {
  FTRACE(0x10e1f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f230 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f231 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f236 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f23a je 0x10e1f25b */
  if (C.zf) goto L_10e1f25b;
  /* 10e1f23c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f23f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e1f242 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1f244 je 0x10e1f25b */
  if (C.zf) goto L_10e1f25b;
  /* 10e1f246 push 0x10e3a6bc */
  push32((uint32_t)(0x10e3a6bcu));
  /* 10e1f24b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f24e push edx */
  push32((uint32_t)(EDX));
  /* 10e1f24f call 0x10e1e790 */
  push32(0x10e1f254u); f_10e1e790();
  /* 10e1f254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f259 jne 0x10e1f283 */
  if (!C.zf) goto L_10e1f283;
L_10e1f25b:;
  /* 10e1f25b push 8 */
  push32((uint32_t)(0x8u));
  /* 10e1f25d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e1f260 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f261 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10e1f266 mov ecx, dword ptr [0x10e3e690] */
  ECX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1f26c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f26d call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1f273u);
  /* 10e1f273 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f275 jne 0x10e1f27b */
  if (!C.zf) goto L_10e1f27b;
  /* 10e1f277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f279 jmp 0x10e1f2c7 */
  goto L_10e1f2c7;
L_10e1f27b:;
  /* 10e1f27b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10e1f27e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e1f281 jmp 0x10e1f2bb */
  goto L_10e1f2bb;
L_10e1f283:;
  /* 10e1f283 push 0x10e3a6b8 */
  push32((uint32_t)(0x10e3a6b8u));
  /* 10e1f288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f28b push eax */
  push32((uint32_t)(EAX));
  /* 10e1f28c call 0x10e1e790 */
  push32(0x10e1f291u); f_10e1e790();
  /* 10e1f291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f296 jne 0x10e1f2bb */
  if (!C.zf) goto L_10e1f2bb;
  /* 10e1f298 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e1f29a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10e1f29d push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f29e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e1f2a0 mov edx, dword ptr [0x10e3e690] */
  EDX = (r32((uint32_t)(0x10e3e690)));
  /* 10e1f2a6 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f2a7 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1f2adu);
  /* 10e1f2ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f2af jne 0x10e1f2b5 */
  if (!C.zf) goto L_10e1f2b5;
  /* 10e1f2b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f2b3 jmp 0x10e1f2c7 */
  goto L_10e1f2c7;
L_10e1f2b5:;
  /* 10e1f2b5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e1f2b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e1f2bb:;
  /* 10e1f2bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f2be push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f2bf call 0x10e213b0 */
  push32(0x10e1f2c4u); f_10e213b0();
  /* 10e1f2c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1f2c7:;
  /* 10e1f2c7 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f2c9 pop ebp */
  EBP = (pop32());
  /* 10e1f2ca ret  */
  ESPCHK(0x10e1f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2d0 @ 0x10e1f2d0 (79 bytes, 26 insns) */
void f_10e1f2d0(void) {
  FTRACE(0x10e1f2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f2d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f2d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f2d6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10e1f2da mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10e1f2de mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1f2e5 jmp 0x10e1f2f0 */
  goto L_10e1f2f0;
L_10e1f2e7:;
  /* 10e1f2e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1f2ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f2ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e1f2f0:;
  /* 10e1f2f0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f2f4 jae 0x10e1f316 */
  if (!C.cf) goto L_10e1f316;
  /* 10e1f2f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1f2f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1f2ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1f302 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1f304 mov cx, word ptr [eax*2 + 0x10e3d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10e3d9c4)));
  /* 10e1f30c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f30e jne 0x10e1f314 */
  if (!C.zf) goto L_10e1f314;
  /* 10e1f310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f312 jmp 0x10e1f31b */
  goto L_10e1f31b;
L_10e1f314:;
  /* 10e1f314 jmp 0x10e1f2e7 */
  goto L_10e1f2e7;
L_10e1f316:;
  /* 10e1f316 mov eax, 1 */
  EAX = (0x1u);
L_10e1f31b:;
  /* 10e1f31b mov esp, ebp */
  ESP = (EBP);
  /* 10e1f31d pop ebp */
  EBP = (pop32());
  /* 10e1f31e ret  */
  ESPCHK(0x10e1f2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f320 @ 0x10e1f320 (135 bytes, 48 insns) */
void f_10e1f320(void) {
  FTRACE(0x10e1f320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f320 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f321 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f323 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f326 push esi */
  push32((uint32_t)(ESI));
  /* 10e1f327 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f32a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f32f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f334 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f339 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10e1f33c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f341 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1f344 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e1f346 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10e1f349 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f34a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1f34c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1f34f push edx */
  push32((uint32_t)(EDX));
  /* 10e1f350 call dword ptr [0x10e3e694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e694))), 0x10e1f356u);
  /* 10e1f356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f358 jne 0x10e1f35e */
  if (!C.zf) goto L_10e1f35e;
  /* 10e1f35a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f35c jmp 0x10e1f3a2 */
  goto L_10e1f3a2;
L_10e1f35e:;
  /* 10e1f35e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10e1f361 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f362 call 0x10e1f590 */
  push32(0x10e1f367u); f_10e1f590();
  /* 10e1f367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f36a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f36d je 0x10e1f39d */
  if (C.zf) goto L_10e1f39d;
  /* 10e1f36f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f373 je 0x10e1f39d */
  if (C.zf) goto L_10e1f39d;
  /* 10e1f375 mov ecx, dword ptr [0x10e3e684] */
  ECX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1f37b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f37c call 0x10e1f610 */
  push32(0x10e1f381u); f_10e1f610();
  /* 10e1f381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f384 mov esi, eax */
  ESI = (EAX);
  /* 10e1f386 mov edx, dword ptr [0x10e3e684] */
  EDX = (r32((uint32_t)(0x10e3e684)));
  /* 10e1f38c push edx */
  push32((uint32_t)(EDX));
  /* 10e1f38d call 0x10e15930 */
  push32(0x10e1f392u); f_10e15930();
  /* 10e1f392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f395 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f397 jne 0x10e1f39d */
  if (!C.zf) goto L_10e1f39d;
  /* 10e1f399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f39b jmp 0x10e1f3a2 */
  goto L_10e1f3a2;
L_10e1f39d:;
  /* 10e1f39d mov eax, 1 */
  EAX = (0x1u);
L_10e1f3a2:;
  /* 10e1f3a2 pop esi */
  ESI = (pop32());
  /* 10e1f3a3 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f3a5 pop ebp */
  EBP = (pop32());
  /* 10e1f3a6 ret  */
  ESPCHK(0x10e1f320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3b0 @ 0x10e1f3b0 (77 bytes, 18 insns) */
void f_10e1f3b0(void) {
  FTRACE(0x10e1f3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f3b3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f3b9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10e1f3c3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10e1f3c9 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f3ca call dword ptr [0x10e4023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4023c))), 0x10e1f3d0u);
  /* 10e1f3d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f3d2 je 0x10e1f3e9 */
  if (C.zf) goto L_10e1f3e9;
  /* 10e1f3d4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f3db jne 0x10e1f3e9 */
  if (!C.zf) goto L_10e1f3e9;
  /* 10e1f3dd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10e1f3e7 jmp 0x10e1f3f3 */
  goto L_10e1f3f3;
L_10e1f3e9:;
  /* 10e1f3e9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10e1f3f3:;
  /* 10e1f3f3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10e1f3f9 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f3fb pop ebp */
  EBP = (pop32());
  /* 10e1f3fc ret  */
  ESPCHK(0x10e1f3b0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10e1f400 (388 bytes, 118 insns) */
void f_10e1f400(void) {
  FTRACE(0x10e1f400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f400 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f401 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f406 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1f40d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10e1f414 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e1f41b:;
  /* 10e1f41b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f41e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f421 jg 0x10e1f568 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1f568;
  /* 10e1f427 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f42a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f42d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e1f42e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f430 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e1f432 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1f435 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f438 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f43b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f43e cmp edx, dword ptr [ecx + 0x10e3d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10e3d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f444 jne 0x10e1f53e */
  if (!C.zf) goto L_10e1f53e;
  /* 10e1f44a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1f44d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e1f450 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f454 ja 0x10e1f477 */
  if ((!C.cf&&!C.zf)) goto L_10e1f477;
  /* 10e1f456 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f45a je 0x10e1f4e9 */
  if (C.zf) goto L_10e1f4e9;
  /* 10e1f460 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f464 je 0x10e1f494 */
  if (C.zf) goto L_10e1f494;
  /* 10e1f466 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f46a je 0x10e1f4b6 */
  if (C.zf) goto L_10e1f4b6;
  /* 10e1f46c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f470 je 0x10e1f4d8 */
  if (C.zf) goto L_10e1f4d8;
  /* 10e1f472 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f477:;
  /* 10e1f477 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f47e je 0x10e1f4a5 */
  if (C.zf) goto L_10e1f4a5;
  /* 10e1f480 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f487 je 0x10e1f4c7 */
  if (C.zf) goto L_10e1f4c7;
  /* 10e1f489 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f490 je 0x10e1f4fa */
  if (C.zf) goto L_10e1f4fa;
  /* 10e1f492 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f494:;
  /* 10e1f494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f497 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f49a add ecx, 0x10e3d524 */
  { uint32_t _a=(ECX),_b=(0x10e3d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f4a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1f4a3 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f4a5:;
  /* 10e1f4a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f4a8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f4ab mov eax, dword ptr [edx + 0x10e3d52c] */
  EAX = (r32((uint32_t)(EDX + 0x10e3d52c)));
  /* 10e1f4b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1f4b4 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f4b6:;
  /* 10e1f4b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f4b9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f4bc add ecx, 0x10e3d530 */
  { uint32_t _a=(ECX),_b=(0x10e3d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f4c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1f4c5 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f4c7:;
  /* 10e1f4c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f4ca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f4cd mov eax, dword ptr [edx + 0x10e3d534] */
  EAX = (r32((uint32_t)(EDX + 0x10e3d534)));
  /* 10e1f4d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1f4d6 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f4d8:;
  /* 10e1f4d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f4db imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f4de add ecx, 0x10e3d538 */
  { uint32_t _a=(ECX),_b=(0x10e3d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f4e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1f4e7 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f4e9:;
  /* 10e1f4e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f4ec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f4ef add edx, 0x10e3d53c */
  { uint32_t _a=(EDX),_b=(0x10e3d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f4f5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1f4f8 jmp 0x10e1f508 */
  goto L_10e1f508;
L_10e1f4fa:;
  /* 10e1f4fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f4fd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f500 add eax, 0x10e3d544 */
  { uint32_t _a=(EAX),_b=(0x10e3d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f505 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e1f508:;
  /* 10e1f508 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f50c je 0x10e1f514 */
  if (C.zf) goto L_10e1f514;
  /* 10e1f50e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f512 jge 0x10e1f516 */
  if ((C.sf==C.of)) goto L_10e1f516;
L_10e1f514:;
  /* 10e1f514 jmp 0x10e1f568 */
  goto L_10e1f568;
L_10e1f516:;
  /* 10e1f516 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1f519 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f51c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f51d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1f520 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f521 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1f524 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f525 call 0x10e16320 */
  push32(0x10e1f52au); f_10e16320();
  /* 10e1f52a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f52d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1f530 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f533 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10e1f537 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1f53c jmp 0x10e1f57e */
  goto L_10e1f57e;
L_10e1f53e:;
  /* 10e1f53e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f541 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f547 cmp eax, dword ptr [edx + 0x10e3d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10e3d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f54d jae 0x10e1f55a */
  if (!C.cf) goto L_10e1f55a;
  /* 10e1f54f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f552 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f555 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e1f558 jmp 0x10e1f563 */
  goto L_10e1f563;
L_10e1f55a:;
  /* 10e1f55a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f55d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f560 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e1f563:;
  /* 10e1f563 jmp 0x10e1f41b */
  goto L_10e1f41b;
L_10e1f568:;
  /* 10e1f568 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1f56b push eax */
  push32((uint32_t)(EAX));
  /* 10e1f56c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1f56f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f570 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1f573 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f577 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f578 call dword ptr [0x10e40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40248))), 0x10e1f57eu);
L_10e1f57e:;
  /* 10e1f57e mov esp, ebp */
  ESP = (EBP);
  /* 10e1f580 pop ebp */
  EBP = (pop32());
  /* 10e1f581 ret 0x10 */
  ESPCHK(0x10e1f400u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f590 @ 0x10e1f590 (118 bytes, 42 insns) */
void f_10e1f590(void) {
  FTRACE(0x10e1f590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f590 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f591 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e1f59d:;
  /* 10e1f59d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f5a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e1f5a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10e1f5a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1f5a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f5ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f5af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e1f5b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1f5b4 je 0x10e1f5ff */
  if (C.zf) goto L_10e1f5ff;
  /* 10e1f5b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1f5ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f5bd jl 0x10e1f5d2 */
  if ((C.sf!=C.of)) goto L_10e1f5d2;
  /* 10e1f5bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1f5c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f5c6 jg 0x10e1f5d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1f5d2;
  /* 10e1f5c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e1f5cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e1f5cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10e1f5d0 jmp 0x10e1f5ec */
  goto L_10e1f5ec;
L_10e1f5d2:;
  /* 10e1f5d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1f5d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f5d9 jl 0x10e1f5ec */
  if ((C.sf!=C.of)) goto L_10e1f5ec;
  /* 10e1f5db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1f5df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f5e2 jg 0x10e1f5ec */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1f5ec;
  /* 10e1f5e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e1f5e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e1f5e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10e1f5ec:;
  /* 10e1f5ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1f5ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e1f5f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e1f5f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e1f5fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1f5fd jmp 0x10e1f59d */
  goto L_10e1f59d;
L_10e1f5ff:;
  /* 10e1f5ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1f602 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f604 pop ebp */
  EBP = (pop32());
  /* 10e1f605 ret  */
  ESPCHK(0x10e1f590u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10e1f610 (101 bytes, 36 insns) */
void f_10e1f610(void) {
  FTRACE(0x10e1f610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f610 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f611 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f616 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1f61d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f620 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e1f622 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10e1f625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f62b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10e1f62e:;
  /* 10e1f62e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e1f632 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f635 jl 0x10e1f640 */
  if ((C.sf!=C.of)) goto L_10e1f640;
  /* 10e1f637 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e1f63b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f63e jle 0x10e1f652 */
  if ((C.zf||C.sf!=C.of)) goto L_10e1f652;
L_10e1f640:;
  /* 10e1f640 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e1f644 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f647 jl 0x10e1f66e */
  if ((C.sf!=C.of)) goto L_10e1f66e;
  /* 10e1f649 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e1f64d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f650 jg 0x10e1f66e */
  if ((!C.zf&&C.sf==C.of)) goto L_10e1f66e;
L_10e1f652:;
  /* 10e1f652 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1f655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f658 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e1f65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f65e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e1f660 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10e1f663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f666 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f669 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e1f66c jmp 0x10e1f62e */
  goto L_10e1f62e;
L_10e1f66e:;
  /* 10e1f66e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1f671 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f673 pop ebp */
  EBP = (pop32());
  /* 10e1f674 ret  */
  ESPCHK(0x10e1f610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f680 @ 0x10e1f680 (122 bytes, 39 insns) */
void f_10e1f680(void) {
  FTRACE(0x10e1f680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f680 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f681 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f683 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f687 cmp eax, dword ptr [0x10e3ff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f68d jae 0x10e1f6b1 */
  if (!C.cf) goto L_10e1f6b1;
  /* 10e1f68f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f692 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e1f695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f698 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1f69b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f69e mov eax, dword ptr [ecx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1f6a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e1f6aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1f6ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1f6af jne 0x10e1f6cc */
  if (!C.zf) goto L_10e1f6cc;
L_10e1f6b1:;
  /* 10e1f6b1 call 0x10e1a9d0 */
  push32(0x10e1f6b6u); f_10e1a9d0();
  /* 10e1f6b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e1f6bc call 0x10e1a9e0 */
  push32(0x10e1f6c1u); f_10e1a9e0();
  /* 10e1f6c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e1f6c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f6ca jmp 0x10e1f6f6 */
  goto L_10e1f6f6;
L_10e1f6cc:;
  /* 10e1f6cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f6cf push edx */
  push32((uint32_t)(EDX));
  /* 10e1f6d0 call 0x10e1c1f0 */
  push32(0x10e1f6d5u); f_10e1c1f0();
  /* 10e1f6d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f6d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f6db push eax */
  push32((uint32_t)(EAX));
  /* 10e1f6dc call 0x10e1f700 */
  push32(0x10e1f6e1u); f_10e1f700();
  /* 10e1f6e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f6e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1f6e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f6ea push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f6eb call 0x10e1c280 */
  push32(0x10e1f6f0u); f_10e1c280();
  /* 10e1f6f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f6f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e1f6f6:;
  /* 10e1f6f6 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f6f8 pop ebp */
  EBP = (pop32());
  /* 10e1f6f9 ret  */
  ESPCHK(0x10e1f680u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10e1f700 (170 bytes, 59 insns) */
void f_10e1f700(void) {
  FTRACE(0x10e1f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f700 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f701 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f703 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f704 push esi */
  push32((uint32_t)(ESI));
  /* 10e1f705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f708 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f709 call 0x10e1c070 */
  push32(0x10e1f70eu); f_10e1c070();
  /* 10e1f70e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f711 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f714 je 0x10e1f753 */
  if (C.zf) goto L_10e1f753;
  /* 10e1f716 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f71a je 0x10e1f722 */
  if (C.zf) goto L_10e1f722;
  /* 10e1f71c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f720 jne 0x10e1f73c */
  if (!C.zf) goto L_10e1f73c;
L_10e1f722:;
  /* 10e1f722 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1f724 call 0x10e1c070 */
  push32(0x10e1f729u); f_10e1c070();
  /* 10e1f729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f72c mov esi, eax */
  ESI = (EAX);
  /* 10e1f72e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1f730 call 0x10e1c070 */
  push32(0x10e1f735u); f_10e1c070();
  /* 10e1f735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f738 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f73a je 0x10e1f753 */
  if (C.zf) goto L_10e1f753;
L_10e1f73c:;
  /* 10e1f73c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f73f push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f740 call 0x10e1c070 */
  push32(0x10e1f745u); f_10e1c070();
  /* 10e1f745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f748 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f749 call dword ptr [0x10e40244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40244))), 0x10e1f74fu);
  /* 10e1f74f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f751 je 0x10e1f75c */
  if (C.zf) goto L_10e1f75c;
L_10e1f753:;
  /* 10e1f753 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1f75a jmp 0x10e1f765 */
  goto L_10e1f765;
L_10e1f75c:;
  /* 10e1f75c call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e1f762u);
  /* 10e1f762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1f765:;
  /* 10e1f765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f768 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f769 call 0x10e1bf90 */
  push32(0x10e1f76eu); f_10e1bf90();
  /* 10e1f76e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f774 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e1f777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f77a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1f77d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1f780 mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e1f787 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10e1f78c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f790 je 0x10e1f7a3 */
  if (C.zf) goto L_10e1f7a3;
  /* 10e1f792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1f795 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f796 call 0x10e1a930 */
  push32(0x10e1f79bu); f_10e1a930();
  /* 10e1f79b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f79e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f7a1 jmp 0x10e1f7a5 */
  goto L_10e1f7a5;
L_10e1f7a3:;
  /* 10e1f7a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1f7a5:;
  /* 10e1f7a5 pop esi */
  ESI = (pop32());
  /* 10e1f7a6 mov esp, ebp */
  ESP = (EBP);
  /* 10e1f7a8 pop ebp */
  EBP = (pop32());
  /* 10e1f7a9 ret  */
  ESPCHK(0x10e1f700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7b0 @ 0x10e1f7b0 (146 bytes, 52 insns) */
void f_10e1f7b0(void) {
  FTRACE(0x10e1f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f7b3 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1f7b4 push esi */
  push32((uint32_t)(ESI));
  /* 10e1f7b5 push edi */
  push32((uint32_t)(EDI));
L_10e1f7b6:;
  /* 10e1f7b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f7ba jne 0x10e1f7da */
  if (!C.zf) goto L_10e1f7da;
  /* 10e1f7bc push 0x10e39ff8 */
  push32((uint32_t)(0x10e39ff8u));
  /* 10e1f7c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1f7c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e1f7c5 push 0x10e3a6c0 */
  push32((uint32_t)(0x10e3a6c0u));
  /* 10e1f7ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1f7cc call 0x10e11bc0 */
  push32(0x10e1f7d1u); f_10e11bc0();
  /* 10e1f7d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f7d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f7d7 jne 0x10e1f7da */
  if (!C.zf) goto L_10e1f7da;
  /* 10e1f7d9 int3  */
  x86_unimpl("int3 @ 0x10e1f7d9");
L_10e1f7da:;
  /* 10e1f7da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1f7dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1f7de jne 0x10e1f7b6 */
  if (!C.zf) goto L_10e1f7b6;
  /* 10e1f7e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f7e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1f7e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1f7ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1f7ee je 0x10e1f83d */
  if (C.zf) goto L_10e1f83d;
  /* 10e1f7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f7f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1f7f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1f7f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1f7fb je 0x10e1f83d */
  if (C.zf) goto L_10e1f83d;
  /* 10e1f7fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1f7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f802 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e1f805 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f806 call 0x10e13590 */
  push32(0x10e1f80bu); f_10e13590();
  /* 10e1f80b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f80e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f811 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e1f814 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10e1f81a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f81d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e1f820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f823 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10e1f829 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f82c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e1f833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1f836 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10e1f83d:;
  /* 10e1f83d pop edi */
  EDI = (pop32());
  /* 10e1f83e pop esi */
  ESI = (pop32());
  /* 10e1f83f pop ebx */
  EBX = (pop32());
  /* 10e1f840 pop ebp */
  EBP = (pop32());
  /* 10e1f841 ret  */
  ESPCHK(0x10e1f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f850 @ 0x10e1f850 (289 bytes, 97 insns) */
void f_10e1f850(void) {
  FTRACE(0x10e1f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f850 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f851 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f856 push esi */
  push32((uint32_t)(ESI));
  /* 10e1f857 mov eax, dword ptr [0x10e3dc98] */
  EAX = (r32((uint32_t)(0x10e3dc98)));
  /* 10e1f85c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1f85f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1f866 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1f86d jmp 0x10e1f878 */
  goto L_10e1f878;
L_10e1f86f:;
  /* 10e1f86f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f872 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f875 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e1f878:;
  /* 10e1f878 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f87c jae 0x10e1f8b1 */
  if (!C.cf) goto L_10e1f8b1;
  /* 10e1f87e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f884 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e1f887 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f888 call 0x10e15930 */
  push32(0x10e1f88du); f_10e15930();
  /* 10e1f88d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f890 mov esi, eax */
  ESI = (EAX);
  /* 10e1f892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f895 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f898 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10e1f89c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f89d call 0x10e15930 */
  push32(0x10e1f8a2u); f_10e15930();
  /* 10e1f8a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f8a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f8a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e1f8ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1f8af jmp 0x10e1f86f */
  goto L_10e1f86f;
L_10e1f8b1:;
  /* 10e1f8b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1f8b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f8b7 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f8b8 call 0x10e12ae0 */
  push32(0x10e1f8bdu); f_10e12ae0();
  /* 10e1f8bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f8c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1f8c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f8c7 je 0x10e1f969 */
  if (C.zf) goto L_10e1f969;
  /* 10e1f8cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1f8d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e1f8d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1f8da jmp 0x10e1f8e5 */
  goto L_10e1f8e5;
L_10e1f8dc:;
  /* 10e1f8dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f8df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f8e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e1f8e5:;
  /* 10e1f8e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f8e9 jae 0x10e1f95a */
  if (!C.cf) goto L_10e1f95a;
  /* 10e1f8eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f8ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10e1f8f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f8f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f8f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e1f8fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f8fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f900 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e1f903 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f904 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f907 push edx */
  push32((uint32_t)(EDX));
  /* 10e1f908 call 0x10e15ab0 */
  push32(0x10e1f90du); f_10e15ab0();
  /* 10e1f90d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f910 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f911 call 0x10e15930 */
  push32(0x10e1f916u); f_10e15930();
  /* 10e1f916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f919 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f91c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f91e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e1f921 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f924 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10e1f927 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f92a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f92d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e1f930 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f933 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f936 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10e1f93a push eax */
  push32((uint32_t)(EAX));
  /* 10e1f93b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f93e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f93f call 0x10e15ab0 */
  push32(0x10e1f944u); f_10e15ab0();
  /* 10e1f944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f947 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f948 call 0x10e15930 */
  push32(0x10e1f94du); f_10e15930();
  /* 10e1f94d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f950 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f953 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f955 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e1f958 jmp 0x10e1f8dc */
  goto L_10e1f8dc;
L_10e1f95a:;
  /* 10e1f95a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f95d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e1f960 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1f963 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f966 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e1f969:;
  /* 10e1f969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1f96c pop esi */
  ESI = (pop32());
  /* 10e1f96d mov esp, ebp */
  ESP = (EBP);
  /* 10e1f96f pop ebp */
  EBP = (pop32());
  /* 10e1f970 ret  */
  ESPCHK(0x10e1f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f980 @ 0x10e1f980 (291 bytes, 97 insns) */
void f_10e1f980(void) {
  FTRACE(0x10e1f980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1f980 push ebp */
  push32((uint32_t)(EBP));
  /* 10e1f981 mov ebp, esp */
  EBP = (ESP);
  /* 10e1f983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1f986 push esi */
  push32((uint32_t)(ESI));
  /* 10e1f987 mov eax, dword ptr [0x10e3dc98] */
  EAX = (r32((uint32_t)(0x10e3dc98)));
  /* 10e1f98c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1f98f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e1f996 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1f99d jmp 0x10e1f9a8 */
  goto L_10e1f9a8;
L_10e1f99f:;
  /* 10e1f99f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f9a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f9a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e1f9a8:;
  /* 10e1f9a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f9ac jae 0x10e1f9e2 */
  if (!C.cf) goto L_10e1f9e2;
  /* 10e1f9ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f9b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f9b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10e1f9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f9b9 call 0x10e15930 */
  push32(0x10e1f9beu); f_10e15930();
  /* 10e1f9be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f9c1 mov esi, eax */
  ESI = (EAX);
  /* 10e1f9c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1f9c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1f9c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10e1f9cd push ecx */
  push32((uint32_t)(ECX));
  /* 10e1f9ce call 0x10e15930 */
  push32(0x10e1f9d3u); f_10e15930();
  /* 10e1f9d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f9d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f9d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e1f9dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1f9e0 jmp 0x10e1f99f */
  goto L_10e1f99f;
L_10e1f9e2:;
  /* 10e1f9e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1f9e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f9e8 push eax */
  push32((uint32_t)(EAX));
  /* 10e1f9e9 call 0x10e12ae0 */
  push32(0x10e1f9eeu); f_10e12ae0();
  /* 10e1f9ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1f9f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1f9f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1f9f8 je 0x10e1fa9b */
  if (C.zf) goto L_10e1fa9b;
  /* 10e1f9fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1fa01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e1fa04 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e1fa0b jmp 0x10e1fa16 */
  goto L_10e1fa16;
L_10e1fa0d:;
  /* 10e1fa0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fa10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e1fa16:;
  /* 10e1fa16 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1fa1a jae 0x10e1fa8c */
  if (!C.cf) goto L_10e1fa8c;
  /* 10e1fa1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa1f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10e1fa22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e1fa2b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fa2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fa31 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10e1fa35 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fa36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa39 push edx */
  push32((uint32_t)(EDX));
  /* 10e1fa3a call 0x10e15ab0 */
  push32(0x10e1fa3fu); f_10e15ab0();
  /* 10e1fa3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa42 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fa43 call 0x10e15930 */
  push32(0x10e1fa48u); f_10e15930();
  /* 10e1fa48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e1fa53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa56 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10e1fa59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa5f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e1fa62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1fa65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1fa68 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e1fa6c push eax */
  push32((uint32_t)(EAX));
  /* 10e1fa6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa70 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1fa71 call 0x10e15ab0 */
  push32(0x10e1fa76u); f_10e15ab0();
  /* 10e1fa76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa79 push eax */
  push32((uint32_t)(EAX));
  /* 10e1fa7a call 0x10e15930 */
  push32(0x10e1fa7fu); f_10e15930();
  /* 10e1fa7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa82 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa85 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa87 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e1fa8a jmp 0x10e1fa0d */
  goto L_10e1fa0d;
L_10e1fa8c:;
  /* 10e1fa8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa8f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e1fa92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1fa95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1fa98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e1fa9b:;
  /* 10e1fa9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1fa9e pop esi */
  ESI = (pop32());
  /* 10e1fa9f mov esp, ebp */
  ESP = (EBP);
  /* 10e1faa1 pop ebp */
  EBP = (pop32());
  /* 10e1faa2 ret  */
  ESPCHK(0x10e1f980u, _esp0);
  ESP += 4; return;
}

