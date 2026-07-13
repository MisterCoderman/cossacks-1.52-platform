#include "recomp.h"

/* FUN_10008d40 @ 0x11be8d40 (10 bytes, 5 insns) */
void f_11be8d40(void) {
  FTRACE(0x11be8d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8d41 mov ebp, esp */
  EBP = (ESP);
  /* 11be8d43 mov eax, dword ptr [0x11c0ec94] */
  EAX = (r32((uint32_t)(0x11c0ec94)));
  /* 11be8d48 pop ebp */
  EBP = (pop32());
  /* 11be8d49 ret  */
  ESPCHK(0x11be8d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d50 @ 0x11be8d50 (31 bytes, 11 insns) */
void f_11be8d50(void) {
  FTRACE(0x11be8d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8d51 mov ebp, esp */
  EBP = (ESP);
  /* 11be8d53 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8d5a jbe 0x11be8d60 */
  if ((C.cf||C.zf)) goto L_11be8d60;
  /* 11be8d5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be8d5e jmp 0x11be8d6d */
  goto L_11be8d6d;
L_11be8d60:;
  /* 11be8d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8d63 mov dword ptr [0x11c0ec94], eax */
  w32((uint32_t)(0x11c0ec94), (EAX));
  /* 11be8d68 mov eax, 1 */
  EAX = (0x1u);
L_11be8d6d:;
  /* 11be8d6d pop ebp */
  EBP = (pop32());
  /* 11be8d6e ret  */
  ESPCHK(0x11be8d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d70 @ 0x11be8d70 (89 bytes, 20 insns) */
void f_11be8d70(void) {
  FTRACE(0x11be8d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8d71 mov ebp, esp */
  EBP = (ESP);
  /* 11be8d73 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11be8d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be8d7a mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be8d7f push eax */
  push32((uint32_t)(EAX));
  /* 11be8d80 call dword ptr [0x11c13314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13314))), 0x11be8d86u);
  /* 11be8d86 mov dword ptr [0x11c12008], eax */
  w32((uint32_t)(0x11c12008), (EAX));
  /* 11be8d8b cmp dword ptr [0x11c12008], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12008))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8d92 jne 0x11be8d98 */
  if (!C.zf) goto L_11be8d98;
  /* 11be8d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be8d96 jmp 0x11be8dc7 */
  goto L_11be8dc7;
L_11be8d98:;
  /* 11be8d98 mov ecx, dword ptr [0x11c12008] */
  ECX = (r32((uint32_t)(0x11c12008)));
  /* 11be8d9e mov dword ptr [0x11c11ffc], ecx */
  w32((uint32_t)(0x11c11ffc), (ECX));
  /* 11be8da4 mov dword ptr [0x11c12000], 0 */
  w32((uint32_t)(0x11c12000), (0x0u));
  /* 11be8dae mov dword ptr [0x11c12004], 0 */
  w32((uint32_t)(0x11c12004), (0x0u));
  /* 11be8db8 mov dword ptr [0x11c11fe8], 0x10 */
  w32((uint32_t)(0x11c11fe8), (0x10u));
  /* 11be8dc2 mov eax, 1 */
  EAX = (0x1u);
L_11be8dc7:;
  /* 11be8dc7 pop ebp */
  EBP = (pop32());
  /* 11be8dc8 ret  */
  ESPCHK(0x11be8d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dd0 @ 0x11be8dd0 (85 bytes, 29 insns) */
void f_11be8dd0(void) {
  FTRACE(0x11be8dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11be8dd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8dd6 mov eax, dword ptr [0x11c12004] */
  EAX = (r32((uint32_t)(0x11c12004)));
  /* 11be8ddb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be8dde mov ecx, dword ptr [0x11c12008] */
  ECX = (r32((uint32_t)(0x11c12008)));
  /* 11be8de4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8de6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11be8de9 mov edx, dword ptr [0x11c12008] */
  EDX = (r32((uint32_t)(0x11c12008)));
  /* 11be8def mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11be8df2:;
  /* 11be8df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8df5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8df8 jae 0x11be8e1f */
  if (!C.cf) goto L_11be8e1f;
  /* 11be8dfa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8dfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8e00 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8e03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be8e06 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8e0d jae 0x11be8e14 */
  if (!C.cf) goto L_11be8e14;
  /* 11be8e0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8e12 jmp 0x11be8e21 */
  goto L_11be8e21;
L_11be8e14:;
  /* 11be8e14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8e17 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8e1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be8e1d jmp 0x11be8df2 */
  goto L_11be8df2;
L_11be8e1f:;
  /* 11be8e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11be8e21:;
  /* 11be8e21 mov esp, ebp */
  ESP = (EBP);
  /* 11be8e23 pop ebp */
  EBP = (pop32());
  /* 11be8e24 ret  */
  ESPCHK(0x11be8dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x11be8e30 (95 bytes, 33 insns) */
void f_11be8e30(void) {
  FTRACE(0x11be8e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8e31 mov ebp, esp */
  EBP = (ESP);
  /* 11be8e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8e39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8e3c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8e3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11be8e42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8e45 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11be8e48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be8e4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be8e50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8e53 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be8e55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8e58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11be8e5b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11be8e5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be8e5f jne 0x11be8e81 */
  if (!C.zf) goto L_11be8e81;
  /* 11be8e61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8e64 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11be8e67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be8e69 jne 0x11be8e81 */
  if (!C.zf) goto L_11be8e81;
  /* 11be8e6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be8e6e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11be8e74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be8e76 je 0x11be8e81 */
  if (C.zf) goto L_11be8e81;
  /* 11be8e78 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11be8e7f jmp 0x11be8e88 */
  goto L_11be8e88;
L_11be8e81:;
  /* 11be8e81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11be8e88:;
  /* 11be8e88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be8e8b mov esp, ebp */
  ESP = (EBP);
  /* 11be8e8d pop ebp */
  EBP = (pop32());
  /* 11be8e8e ret  */
  ESPCHK(0x11be8e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e90 @ 0x11be8e90 (1485 bytes, 453 insns) */
void f_11be8e90(void) {
  FTRACE(0x11be8e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be8e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11be8e91 mov ebp, esp */
  EBP = (ESP);
  /* 11be8e93 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8e99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be8e9c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11be8e9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8ea2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8ea5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8ea8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be8eab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be8eae shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11be8eb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be8eb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8eb7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be8ebd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8ec0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11be8ec7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11be8eca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be8ecd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8ed0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11be8ed3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be8ed6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be8ed8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8edb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11be8ede mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be8ee1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8ee4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11be8ee7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be8eea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be8eec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11be8eef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be8ef2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11be8ef5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11be8ef8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be8efb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11be8efe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be8f00 jne 0x11be9028 */
  if (!C.zf) goto L_11be9028;
  /* 11be8f06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be8f09 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11be8f0c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8f0f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11be8f12 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8f16 jbe 0x11be8f1f */
  if ((C.cf||C.zf)) goto L_11be8f1f;
  /* 11be8f18 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11be8f1f:;
  /* 11be8f1f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be8f22 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be8f25 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be8f28 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8f2b jne 0x11be9001 */
  if (!C.zf) goto L_11be9001;
  /* 11be8f31 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be8f35 jae 0x11be8f96 */
  if (!C.cf) goto L_11be8f96;
  /* 11be8f37 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be8f3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be8f3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be8f41 not eax */
  EAX = (~(EAX));
  /* 11be8f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8f46 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8f49 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11be8f4d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be8f4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8f52 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8f55 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11be8f59 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8f5c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8f5f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11be8f62 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be8f65 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8f68 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8f6b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11be8f6e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8f71 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8f74 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be8f78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be8f7a jne 0x11be8f94 */
  if (!C.zf) goto L_11be8f94;
  /* 11be8f7c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be8f81 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be8f84 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be8f86 not eax */
  EAX = (~(EAX));
  /* 11be8f88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8f8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be8f8d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11be8f8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8f92 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11be8f94:;
  /* 11be8f94 jmp 0x11be9001 */
  goto L_11be9001;
L_11be8f96:;
  /* 11be8f96 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be8f99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8f9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be8fa1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be8fa3 not edx */
  EDX = (~(EDX));
  /* 11be8fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8fa8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8fab mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11be8fb2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be8fb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be8fb7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8fba mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11be8fc1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8fc4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8fc7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be8fca sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be8fcd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8fd0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8fd3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11be8fd6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be8fd9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be8fdc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11be8fe0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be8fe2 jne 0x11be9001 */
  if (!C.zf) goto L_11be9001;
  /* 11be8fe4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be8fe7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be8fea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be8fef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be8ff1 not edx */
  EDX = (~(EDX));
  /* 11be8ff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8ff6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be8ff9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be8ffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be8ffe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11be9001:;
  /* 11be9001 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9004 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be9007 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be900a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be900d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11be9010 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9013 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9016 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9019 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be901c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11be901f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9022 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9025 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11be9028:;
  /* 11be9028 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be902b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11be902e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9031 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11be9034 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9038 jbe 0x11be9041 */
  if ((C.cf||C.zf)) goto L_11be9041;
  /* 11be903a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11be9041:;
  /* 11be9041 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be9044 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11be9047 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be9049 jne 0x11be91a5 */
  if (!C.zf) goto L_11be91a5;
  /* 11be904f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9052 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9055 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11be9058 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be905b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11be905e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9061 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11be9064 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9068 jbe 0x11be9071 */
  if ((C.cf||C.zf)) goto L_11be9071;
  /* 11be906a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11be9071:;
  /* 11be9071 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9074 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9077 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11be907a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be907d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11be9080 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9083 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11be9086 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be908a jbe 0x11be9093 */
  if ((C.cf||C.zf)) goto L_11be9093;
  /* 11be908c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11be9093:;
  /* 11be9093 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9096 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9099 je 0x11be919f */
  if (C.zf) goto L_11be919f;
  /* 11be909f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be90a2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be90a5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be90a8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be90ab jne 0x11be9181 */
  if (!C.zf) goto L_11be9181;
  /* 11be90b1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be90b5 jae 0x11be9116 */
  if (!C.cf) goto L_11be9116;
  /* 11be90b7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be90bc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be90bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be90c1 not edx */
  EDX = (~(EDX));
  /* 11be90c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be90c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be90c9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11be90cd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be90cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be90d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be90d5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11be90d9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be90dc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be90df mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be90e2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be90e5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be90e8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be90eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11be90ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be90f1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be90f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11be90f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be90fa jne 0x11be9114 */
  if (!C.zf) goto L_11be9114;
  /* 11be90fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9101 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9104 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9106 not edx */
  EDX = (~(EDX));
  /* 11be9108 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be910b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be910d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be910f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9112 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be9114:;
  /* 11be9114 jmp 0x11be9181 */
  goto L_11be9181;
L_11be9116:;
  /* 11be9116 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9119 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be911c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9121 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be9123 not eax */
  EAX = (~(EAX));
  /* 11be9125 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9128 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be912b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11be9132 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9137 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be913a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11be9141 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9144 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9147 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11be914a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be914d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9150 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9153 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11be9156 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9159 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be915c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be9160 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9162 jne 0x11be9181 */
  if (!C.zf) goto L_11be9181;
  /* 11be9164 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9167 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be916a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be916f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be9171 not eax */
  EAX = (~(EAX));
  /* 11be9173 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9176 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9179 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11be917b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be917e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11be9181:;
  /* 11be9181 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be9184 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11be9187 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be918a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be918d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11be9190 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be9193 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be9196 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be9199 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11be919c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11be919f:;
  /* 11be919f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be91a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11be91a5:;
  /* 11be91a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be91a8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11be91ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be91ad jne 0x11be91bb */
  if (!C.zf) goto L_11be91bb;
  /* 11be91af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be91b2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be91b5 je 0x11be92cb */
  if (C.zf) goto L_11be92cb;
L_11be91bb:;
  /* 11be91bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be91be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be91c1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11be91c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11be91c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be91ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be91cd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be91d0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11be91d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be91d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be91d9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11be91dc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be91df mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be91e2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11be91e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be91e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be91eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be91ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11be91f1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be91f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be91f7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be91fa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be91fd jne 0x11be92cb */
  if (!C.zf) goto L_11be92cb;
  /* 11be9203 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9207 jae 0x11be9264 */
  if (!C.cf) goto L_11be9264;
  /* 11be9209 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be920c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be920f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be9213 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9216 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9219 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be921c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11be921f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9222 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9225 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11be9228 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be922a jne 0x11be9242 */
  if (!C.zf) goto L_11be9242;
  /* 11be922c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9231 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9234 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be923b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be923d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9240 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be9242:;
  /* 11be9242 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9247 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be924a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be924c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be924f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9252 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11be9256 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be925b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be925e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11be9262 jmp 0x11be92cb */
  goto L_11be92cb;
L_11be9264:;
  /* 11be9264 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9267 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be926a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be926e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be9271 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9274 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be9277 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11be927a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be927d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9280 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11be9283 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9285 jne 0x11be92a2 */
  if (!C.zf) goto L_11be92a2;
  /* 11be9287 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be928a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be928d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9292 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9297 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be929a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be929c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be929f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11be92a2:;
  /* 11be92a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be92a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be92a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be92ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be92af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be92b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be92b5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11be92bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be92be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be92c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11be92c4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11be92cb:;
  /* 11be92cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be92ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be92d1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11be92d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be92d6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be92d9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be92dc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11be92df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be92e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be92e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be92e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be92ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11be92ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be92ef cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be92f2 jne 0x11be9459 */
  if (!C.zf) goto L_11be9459;
  /* 11be92f8 cmp dword ptr [0x11c12000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be92ff je 0x11be9448 */
  if (C.zf) goto L_11be9448;
  /* 11be9305 mov eax, dword ptr [0x11c11ff8] */
  EAX = (r32((uint32_t)(0x11c11ff8)));
  /* 11be930a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11be930d mov ecx, dword ptr [0x11c12000] */
  ECX = (r32((uint32_t)(0x11c12000)));
  /* 11be9313 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11be9316 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9318 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11be931b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11be9320 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11be9325 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9328 push eax */
  push32((uint32_t)(EAX));
  /* 11be9329 call dword ptr [0x11c13330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13330))), 0x11be932fu);
  /* 11be932f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9334 mov ecx, dword ptr [0x11c11ff8] */
  ECX = (r32((uint32_t)(0x11c11ff8)));
  /* 11be933a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be933c mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11be9341 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be9344 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9346 mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11be934c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11be934f mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11be9354 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be9357 mov edx, dword ptr [0x11c11ff8] */
  EDX = (r32((uint32_t)(0x11c11ff8)));
  /* 11be935d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11be9368 mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11be936d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be9370 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11be9373 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be9376 mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11be937b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be937e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11be9381 mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11be9387 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be938a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11be938e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be9390 jne 0x11be93a6 */
  if (!C.zf) goto L_11be93a6;
  /* 11be9392 mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11be9398 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be939b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11be939d mov ecx, dword ptr [0x11c12000] */
  ECX = (r32((uint32_t)(0x11c12000)));
  /* 11be93a3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11be93a6:;
  /* 11be93a6 mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11be93ac cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be93b0 jne 0x11be9448 */
  if (!C.zf) goto L_11be9448;
  /* 11be93b6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11be93bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11be93bd mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11be93c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11be93c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11be93c6 call dword ptr [0x11c13330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13330))), 0x11be93ccu);
  /* 11be93cc mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11be93d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11be93d5 push eax */
  push32((uint32_t)(EAX));
  /* 11be93d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be93d8 mov ecx, dword ptr [0x11c1200c] */
  ECX = (r32((uint32_t)(0x11c1200c)));
  /* 11be93de push ecx */
  push32((uint32_t)(ECX));
  /* 11be93df call dword ptr [0x11c13334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13334))), 0x11be93e5u);
  /* 11be93e5 mov edx, dword ptr [0x11c12004] */
  EDX = (r32((uint32_t)(0x11c12004)));
  /* 11be93eb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be93ee mov eax, dword ptr [0x11c12008] */
  EAX = (r32((uint32_t)(0x11c12008)));
  /* 11be93f3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be93f5 mov ecx, dword ptr [0x11c12000] */
  ECX = (r32((uint32_t)(0x11c12000)));
  /* 11be93fb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be93fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9400 push eax */
  push32((uint32_t)(EAX));
  /* 11be9401 mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11be9407 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be940a push edx */
  push32((uint32_t)(EDX));
  /* 11be940b mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11be9410 push eax */
  push32((uint32_t)(EAX));
  /* 11be9411 call 0x11bec9c0 */
  push32(0x11be9416u); f_11bec9c0();
  /* 11be9416 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9419 mov ecx, dword ptr [0x11c12004] */
  ECX = (r32((uint32_t)(0x11c12004)));
  /* 11be941f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9422 mov dword ptr [0x11c12004], ecx */
  w32((uint32_t)(0x11c12004), (ECX));
  /* 11be9428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be942b cmp edx, dword ptr [0x11c12000] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c12000))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9431 jbe 0x11be943c */
  if ((C.cf||C.zf)) goto L_11be943c;
  /* 11be9433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9436 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9439 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11be943c:;
  /* 11be943c mov ecx, dword ptr [0x11c12008] */
  ECX = (r32((uint32_t)(0x11c12008)));
  /* 11be9442 mov dword ptr [0x11c11ffc], ecx */
  w32((uint32_t)(0x11c11ffc), (ECX));
L_11be9448:;
  /* 11be9448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be944b mov dword ptr [0x11c12000], edx */
  w32((uint32_t)(0x11c12000), (EDX));
  /* 11be9451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9454 mov dword ptr [0x11c11ff8], eax */
  w32((uint32_t)(0x11c11ff8), (EAX));
L_11be9459:;
  /* 11be9459 mov esp, ebp */
  ESP = (EBP);
  /* 11be945b pop ebp */
  EBP = (pop32());
  /* 11be945c ret  */
  ESPCHK(0x11be8e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009460 @ 0x11be9460 (1334 bytes, 427 insns) */
void f_11be9460(void) {
  FTRACE(0x11be9460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be9460 push ebp */
  push32((uint32_t)(EBP));
  /* 11be9461 mov ebp, esp */
  EBP = (ESP);
  /* 11be9463 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9466 push esi */
  push32((uint32_t)(ESI));
  /* 11be9467 mov eax, dword ptr [0x11c12004] */
  EAX = (r32((uint32_t)(0x11c12004)));
  /* 11be946c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be946f mov ecx, dword ptr [0x11c12008] */
  ECX = (r32((uint32_t)(0x11c12008)));
  /* 11be9475 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9477 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11be947a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be947d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9480 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11be9483 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11be9486 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9489 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11be948c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be948f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11be9492 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9496 jge 0x11be94ac */
  if ((C.sf==C.of)) goto L_11be94ac;
  /* 11be9498 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11be949b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be949e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be94a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11be94a3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11be94aa jmp 0x11be94c1 */
  goto L_11be94c1;
L_11be94ac:;
  /* 11be94ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11be94b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be94b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be94b9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be94bc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be94be mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11be94c1:;
  /* 11be94c1 mov ecx, dword ptr [0x11c11ffc] */
  ECX = (r32((uint32_t)(0x11c11ffc)));
  /* 11be94c7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11be94ca:;
  /* 11be94ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be94cd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be94d0 jae 0x11be94f6 */
  if (!C.cf) goto L_11be94f6;
  /* 11be94d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be94d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be94d8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11be94da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be94dd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be94e0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11be94e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be94e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be94e7 je 0x11be94eb */
  if (C.zf) goto L_11be94eb;
  /* 11be94e9 jmp 0x11be94f6 */
  goto L_11be94f6;
L_11be94eb:;
  /* 11be94eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be94ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be94f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11be94f4 jmp 0x11be94ca */
  goto L_11be94ca;
L_11be94f6:;
  /* 11be94f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be94f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be94fc jne 0x11be95dd */
  if (!C.zf) goto L_11be95dd;
  /* 11be9502 mov eax, dword ptr [0x11c12008] */
  EAX = (r32((uint32_t)(0x11c12008)));
  /* 11be9507 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11be950a:;
  /* 11be950a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be950d cmp ecx, dword ptr [0x11c11ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9513 jae 0x11be9539 */
  if (!C.cf) goto L_11be9539;
  /* 11be9515 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9518 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be951b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11be951d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9520 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be9523 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11be9526 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be9528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be952a je 0x11be952e */
  if (C.zf) goto L_11be952e;
  /* 11be952c jmp 0x11be9539 */
  goto L_11be9539;
L_11be952e:;
  /* 11be952e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9531 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9534 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be9537 jmp 0x11be950a */
  goto L_11be950a;
L_11be9539:;
  /* 11be9539 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be953c cmp ecx, dword ptr [0x11c11ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9542 jne 0x11be95dd */
  if (!C.zf) goto L_11be95dd;
L_11be9548:;
  /* 11be9548 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be954b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be954e jae 0x11be9566 */
  if (!C.cf) goto L_11be9566;
  /* 11be9550 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9553 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9557 je 0x11be955b */
  if (C.zf) goto L_11be955b;
  /* 11be9559 jmp 0x11be9566 */
  goto L_11be9566;
L_11be955b:;
  /* 11be955b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be955e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9561 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11be9564 jmp 0x11be9548 */
  goto L_11be9548;
L_11be9566:;
  /* 11be9566 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9569 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be956c jne 0x11be95b7 */
  if (!C.zf) goto L_11be95b7;
  /* 11be956e mov eax, dword ptr [0x11c12008] */
  EAX = (r32((uint32_t)(0x11c12008)));
  /* 11be9573 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11be9576:;
  /* 11be9576 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9579 cmp ecx, dword ptr [0x11c11ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be957f jae 0x11be9597 */
  if (!C.cf) goto L_11be9597;
  /* 11be9581 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9584 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9588 je 0x11be958c */
  if (C.zf) goto L_11be958c;
  /* 11be958a jmp 0x11be9597 */
  goto L_11be9597;
L_11be958c:;
  /* 11be958c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be958f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9592 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be9595 jmp 0x11be9576 */
  goto L_11be9576;
L_11be9597:;
  /* 11be9597 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be959a cmp ecx, dword ptr [0x11c11ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be95a0 jne 0x11be95b7 */
  if (!C.zf) goto L_11be95b7;
  /* 11be95a2 call 0x11be99a0 */
  push32(0x11be95a7u); f_11be99a0();
  /* 11be95a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be95aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be95ae jne 0x11be95b7 */
  if (!C.zf) goto L_11be95b7;
  /* 11be95b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be95b2 jmp 0x11be9991 */
  goto L_11be9991;
L_11be95b7:;
  /* 11be95b7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be95ba push edx */
  push32((uint32_t)(EDX));
  /* 11be95bb call 0x11be9ab0 */
  push32(0x11be95c0u); f_11be9ab0();
  /* 11be95c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11be95c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be95c6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11be95c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11be95cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be95ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be95d1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be95d4 jne 0x11be95dd */
  if (!C.zf) goto L_11be95dd;
  /* 11be95d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be95d8 jmp 0x11be9991 */
  goto L_11be9991;
L_11be95dd:;
  /* 11be95dd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be95e0 mov dword ptr [0x11c11ffc], edx */
  w32((uint32_t)(0x11c11ffc), (EDX));
  /* 11be95e6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be95e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be95ec mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11be95ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be95f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be95f4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11be95f7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be95fb je 0x11be9620 */
  if (C.zf) goto L_11be9620;
  /* 11be95fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9600 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9603 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be9606 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11be960a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be960d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9610 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11be9613 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11be961a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11be961c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be961e jne 0x11be9655 */
  if (!C.zf) goto L_11be9655;
L_11be9620:;
  /* 11be9620 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11be9627:;
  /* 11be9627 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be962a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be962d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be9630 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11be9634 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9637 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be963a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11be963d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11be9644 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11be9646 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9648 jne 0x11be9655 */
  if (!C.zf) goto L_11be9655;
  /* 11be964a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be964d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9650 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11be9653 jmp 0x11be9627 */
  goto L_11be9627;
L_11be9655:;
  /* 11be9655 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9658 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be965e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9661 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11be9668 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be966b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11be9672 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9675 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9678 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be967b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11be967f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11be9682 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9686 jne 0x11be96a2 */
  if (!C.zf) goto L_11be96a2;
  /* 11be9688 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11be968f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9692 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9695 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11be9698 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11be969f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11be96a2:;
  /* 11be96a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be96a6 jl 0x11be96bb */
  if ((C.sf!=C.of)) goto L_11be96bb;
  /* 11be96a8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be96ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11be96ad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11be96b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be96b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be96b6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11be96b9 jmp 0x11be96a2 */
  goto L_11be96a2;
L_11be96bb:;
  /* 11be96bb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be96be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be96c1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11be96c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11be96c8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be96cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be96cd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be96d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be96d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be96d6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11be96d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be96dc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11be96df cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be96e3 jle 0x11be96ec */
  if ((C.zf||C.sf!=C.of)) goto L_11be96ec;
  /* 11be96e5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11be96ec:;
  /* 11be96ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be96ef cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be96f2 je 0x11be9910 */
  if (C.zf) goto L_11be9910;
  /* 11be96f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be96fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be96fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be9701 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9704 jne 0x11be97da */
  if (!C.zf) goto L_11be97da;
  /* 11be970a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be970e jge 0x11be976f */
  if ((C.sf==C.of)) goto L_11be976f;
  /* 11be9710 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9715 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9718 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be971a not eax */
  EAX = (~(EAX));
  /* 11be971c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be971f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9722 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11be9726 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9728 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be972b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be972e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11be9732 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9735 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9738 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11be973b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be973e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9741 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9744 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11be9747 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be974a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be974d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be9751 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9753 jne 0x11be976d */
  if (!C.zf) goto L_11be976d;
  /* 11be9755 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be975a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be975d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be975f not eax */
  EAX = (~(EAX));
  /* 11be9761 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9764 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be9766 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11be9768 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be976b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11be976d:;
  /* 11be976d jmp 0x11be97da */
  goto L_11be97da;
L_11be976f:;
  /* 11be976f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9772 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9775 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be977a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be977c not edx */
  EDX = (~(EDX));
  /* 11be977e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9781 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9784 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11be978b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be978d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9790 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9793 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11be979a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be979d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be97a0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be97a3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be97a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be97a9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be97ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11be97af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be97b2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be97b5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11be97b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be97bb jne 0x11be97da */
  if (!C.zf) goto L_11be97da;
  /* 11be97bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be97c0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be97c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be97c8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be97ca not edx */
  EDX = (~(EDX));
  /* 11be97cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be97cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be97d2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be97d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be97d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11be97da:;
  /* 11be97da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be97dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be97e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be97e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be97e6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11be97e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be97ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be97ef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be97f2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be97f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11be97f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be97fc je 0x11be9910 */
  if (C.zf) goto L_11be9910;
  /* 11be9802 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9808 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11be980b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11be980e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9811 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be9814 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be9817 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11be981a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be981d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be9820 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11be9823 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be9826 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9829 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11be982c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be982f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be9832 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9835 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11be9838 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be983b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be983e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be9841 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9844 jne 0x11be9910 */
  if (!C.zf) goto L_11be9910;
  /* 11be984a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be984e jge 0x11be98aa */
  if ((C.sf==C.of)) goto L_11be98aa;
  /* 11be9850 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9853 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9856 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11be985a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be985d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9860 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11be9863 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11be9865 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9868 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be986b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11be986e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be9870 jne 0x11be9888 */
  if (!C.zf) goto L_11be9888;
  /* 11be9872 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9877 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be987a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be987c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be987f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be9881 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11be9883 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9886 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11be9888:;
  /* 11be9888 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be988d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9890 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9892 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9895 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9898 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11be989c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be989e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be98a1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be98a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11be98a8 jmp 0x11be9910 */
  goto L_11be9910;
L_11be98aa:;
  /* 11be98aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be98ad add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be98b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11be98b4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be98b7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be98ba mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11be98bd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11be98bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be98c2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be98c5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11be98c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be98ca jne 0x11be98e7 */
  if (!C.zf) goto L_11be98e7;
  /* 11be98cc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be98cf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be98d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be98d7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be98d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be98dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be98df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11be98e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be98e4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11be98e7:;
  /* 11be98e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be98ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be98ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be98f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be98f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be98f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be98fa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11be9901 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be9903 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9906 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9909 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11be9910:;
  /* 11be9910 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9914 je 0x11be992a */
  if (C.zf) goto L_11be992a;
  /* 11be9916 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9919 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be991c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11be991e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9921 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9924 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be9927 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11be992a:;
  /* 11be992a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be992d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9930 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11be9933 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9939 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be993c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11be993e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9944 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9947 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be994a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11be994d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9950 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be9952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9955 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11be9957 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be995a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be995d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11be995f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be9961 jne 0x11be9983 */
  if (!C.zf) goto L_11be9983;
  /* 11be9963 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9966 cmp eax, dword ptr [0x11c12000] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c12000))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be996c jne 0x11be9983 */
  if (!C.zf) goto L_11be9983;
  /* 11be996e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9971 cmp ecx, dword ptr [0x11c11ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9977 jne 0x11be9983 */
  if (!C.zf) goto L_11be9983;
  /* 11be9979 mov dword ptr [0x11c12000], 0 */
  w32((uint32_t)(0x11c12000), (0x0u));
L_11be9983:;
  /* 11be9983 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11be9986 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9989 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11be998b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be998e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11be9991:;
  /* 11be9991 pop esi */
  ESI = (pop32());
  /* 11be9992 mov esp, ebp */
  ESP = (EBP);
  /* 11be9994 pop ebp */
  EBP = (pop32());
  /* 11be9995 ret  */
  ESPCHK(0x11be9460u, _esp0);
  ESP += 4; return;
}

/* FUN_100099a0 @ 0x11be99a0 (271 bytes, 78 insns) */
void f_11be99a0(void) {
  FTRACE(0x11be99a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be99a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be99a1 mov ebp, esp */
  EBP = (ESP);
  /* 11be99a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11be99a4 mov eax, dword ptr [0x11c12004] */
  EAX = (r32((uint32_t)(0x11c12004)));
  /* 11be99a9 cmp eax, dword ptr [0x11c11fe8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c11fe8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be99af jne 0x11be99fb */
  if (!C.zf) goto L_11be99fb;
  /* 11be99b1 mov ecx, dword ptr [0x11c11fe8] */
  ECX = (r32((uint32_t)(0x11c11fe8)));
  /* 11be99b7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be99ba imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be99bd push ecx */
  push32((uint32_t)(ECX));
  /* 11be99be mov edx, dword ptr [0x11c12008] */
  EDX = (r32((uint32_t)(0x11c12008)));
  /* 11be99c4 push edx */
  push32((uint32_t)(EDX));
  /* 11be99c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be99c7 mov eax, dword ptr [0x11c1200c] */
  EAX = (r32((uint32_t)(0x11c1200c)));
  /* 11be99cc push eax */
  push32((uint32_t)(EAX));
  /* 11be99cd call dword ptr [0x11c13310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13310))), 0x11be99d3u);
  /* 11be99d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11be99d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be99da jne 0x11be99e3 */
  if (!C.zf) goto L_11be99e3;
  /* 11be99dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be99de jmp 0x11be9aab */
  goto L_11be9aab;
L_11be99e3:;
  /* 11be99e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be99e6 mov dword ptr [0x11c12008], ecx */
  w32((uint32_t)(0x11c12008), (ECX));
  /* 11be99ec mov edx, dword ptr [0x11c11fe8] */
  EDX = (r32((uint32_t)(0x11c11fe8)));
  /* 11be99f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be99f5 mov dword ptr [0x11c11fe8], edx */
  w32((uint32_t)(0x11c11fe8), (EDX));
L_11be99fb:;
  /* 11be99fb mov eax, dword ptr [0x11c12004] */
  EAX = (r32((uint32_t)(0x11c12004)));
  /* 11be9a00 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be9a03 mov ecx, dword ptr [0x11c12008] */
  ECX = (r32((uint32_t)(0x11c12008)));
  /* 11be9a09 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9a0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be9a0e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11be9a13 push 8 */
  push32((uint32_t)(0x8u));
  /* 11be9a15 mov edx, dword ptr [0x11c1200c] */
  EDX = (r32((uint32_t)(0x11c1200c)));
  /* 11be9a1b push edx */
  push32((uint32_t)(EDX));
  /* 11be9a1c call dword ptr [0x11c13314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13314))), 0x11be9a22u);
  /* 11be9a22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a25 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11be9a28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a2b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9a2f jne 0x11be9a35 */
  if (!C.zf) goto L_11be9a35;
  /* 11be9a31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be9a33 jmp 0x11be9aab */
  goto L_11be9aab;
L_11be9a35:;
  /* 11be9a35 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be9a37 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11be9a3c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11be9a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11be9a43 call dword ptr [0x11c1330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1330c))), 0x11be9a49u);
  /* 11be9a49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a4c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11be9a4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a52 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9a56 jne 0x11be9a72 */
  if (!C.zf) goto L_11be9a72;
  /* 11be9a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be9a5e push ecx */
  push32((uint32_t)(ECX));
  /* 11be9a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11be9a61 mov edx, dword ptr [0x11c1200c] */
  EDX = (r32((uint32_t)(0x11c1200c)));
  /* 11be9a67 push edx */
  push32((uint32_t)(EDX));
  /* 11be9a68 call dword ptr [0x11c13334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13334))), 0x11be9a6eu);
  /* 11be9a6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be9a70 jmp 0x11be9aab */
  goto L_11be9aab;
L_11be9a72:;
  /* 11be9a72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a75 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11be9a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a7e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11be9a85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a88 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11be9a8f mov eax, dword ptr [0x11c12004] */
  EAX = (r32((uint32_t)(0x11c12004)));
  /* 11be9a94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9a97 mov dword ptr [0x11c12004], eax */
  w32((uint32_t)(0x11c12004), (EAX));
  /* 11be9a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9a9f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11be9aa2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11be9aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11be9aab:;
  /* 11be9aab mov esp, ebp */
  ESP = (EBP);
  /* 11be9aad pop ebp */
  EBP = (pop32());
  /* 11be9aae ret  */
  ESPCHK(0x11be99a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab0 @ 0x11be9ab0 (494 bytes, 149 insns) */
void f_11be9ab0(void) {
  FTRACE(0x11be9ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be9ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be9ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11be9ab3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9ab9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11be9abc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11be9abf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9ac2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11be9ac5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11be9ac8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11be9acf:;
  /* 11be9acf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9ad3 jl 0x11be9ae8 */
  if ((C.sf!=C.of)) goto L_11be9ae8;
  /* 11be9ad5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be9ad8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11be9ada mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11be9add mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9ae0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9ae3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11be9ae6 jmp 0x11be9acf */
  goto L_11be9acf;
L_11be9ae8:;
  /* 11be9ae8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9aeb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be9af1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9af4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11be9afb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11be9afe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11be9b05 jmp 0x11be9b10 */
  goto L_11be9b10;
L_11be9b07:;
  /* 11be9b07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9b0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9b0d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11be9b10:;
  /* 11be9b10 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9b14 jge 0x11be9b36 */
  if ((C.sf==C.of)) goto L_11be9b36;
  /* 11be9b16 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9b19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be9b1c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11be9b1f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be9b22 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9b25 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9b28 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11be9b2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9b2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9b31 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11be9b34 jmp 0x11be9b07 */
  goto L_11be9b07;
L_11be9b36:;
  /* 11be9b36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9b39 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11be9b3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9b3f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11be9b42 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9b44 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11be9b47 push 4 */
  push32((uint32_t)(0x4u));
  /* 11be9b49 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11be9b4e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11be9b53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9b56 push edx */
  push32((uint32_t)(EDX));
  /* 11be9b57 call dword ptr [0x11c1330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1330c))), 0x11be9b5du);
  /* 11be9b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11be9b5f jne 0x11be9b69 */
  if (!C.zf) goto L_11be9b69;
  /* 11be9b61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11be9b64 jmp 0x11be9c9a */
  goto L_11be9c9a;
L_11be9b69:;
  /* 11be9b69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9b6c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9b71 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11be9b74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9b77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11be9b7a jmp 0x11be9b88 */
  goto L_11be9b88;
L_11be9b7c:;
  /* 11be9b7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9b7f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9b85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11be9b88:;
  /* 11be9b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9b8b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9b8e ja 0x11be9bed */
  if ((!C.cf&&!C.zf)) goto L_11be9bed;
  /* 11be9b90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9b93 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11be9b9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9b9d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11be9ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9baa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9bad mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be9bb0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9bb3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11be9bb9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9bbc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9bc2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9bc5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11be9bc8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9bcb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9bd1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9bd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11be9bd7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9bda add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9bdf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11be9be2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11be9be5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11be9beb jmp 0x11be9b7c */
  goto L_11be9b7c;
L_11be9bed:;
  /* 11be9bed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be9bf0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9bf6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11be9bf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9bfc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9bff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9c02 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11be9c05 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9c08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be9c0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be9c0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9c11 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9c14 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11be9c17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9c1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9c1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9c20 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11be9c23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9c26 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11be9c29 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11be9c2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9c2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9c32 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11be9c35 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9c38 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9c3b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11be9c43 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9c46 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9c49 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11be9c54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9c57 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11be9c5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9c5e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11be9c61 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11be9c64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9c67 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11be9c6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9c6c jne 0x11be9c7d */
  if (!C.zf) goto L_11be9c7d;
  /* 11be9c6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9c71 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9c74 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11be9c77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9c7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11be9c7d:;
  /* 11be9c7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9c82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9c85 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9c87 not edx */
  EDX = (~(EDX));
  /* 11be9c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9c8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11be9c8f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9c94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11be9c97 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11be9c9a:;
  /* 11be9c9a mov esp, ebp */
  ESP = (EBP);
  /* 11be9c9c pop ebp */
  EBP = (pop32());
  /* 11be9c9d ret  */
  ESPCHK(0x11be9ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ca0 @ 0x11be9ca0 (1515 bytes, 489 insns) */
void f_11be9ca0(void) {
  FTRACE(0x11be9ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11be9ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11be9ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11be9ca3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9ca6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11be9ca9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9cac and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11be9cae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11be9cb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9cb4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11be9cb7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11be9cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9cbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be9cc0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9cc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11be9cc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11be9cc9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11be9ccc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11be9ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9cd2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11be9cd8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9cdb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11be9ce2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11be9ce5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11be9ce8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9ceb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11be9cee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9cf1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be9cf3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9cf6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11be9cf9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9cfc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9cff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11be9d02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9d05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11be9d07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11be9d0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9d0d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9d10 jle 0x11be9fc6 */
  if ((C.zf||C.sf!=C.of)) goto L_11be9fc6;
  /* 11be9d16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9d19 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11be9d1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be9d1e jne 0x11be9d2b */
  if (!C.zf) goto L_11be9d2b;
  /* 11be9d20 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9d23 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9d26 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9d29 jle 0x11be9d32 */
  if ((C.zf||C.sf!=C.of)) goto L_11be9d32;
L_11be9d2b:;
  /* 11be9d2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11be9d2d jmp 0x11bea287 */
  goto L_11bea287;
L_11be9d32:;
  /* 11be9d32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9d35 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11be9d38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9d3b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11be9d3e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9d42 jbe 0x11be9d4b */
  if ((C.cf||C.zf)) goto L_11be9d4b;
  /* 11be9d44 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11be9d4b:;
  /* 11be9d4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9d4e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9d51 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9d54 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9d57 jne 0x11be9e2d */
  if (!C.zf) goto L_11be9e2d;
  /* 11be9d5d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9d61 jae 0x11be9dc2 */
  if (!C.cf) goto L_11be9dc2;
  /* 11be9d63 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9d68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9d6b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9d6d not edx */
  EDX = (~(EDX));
  /* 11be9d6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9d72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9d75 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11be9d79 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11be9d7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9d7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9d81 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11be9d85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9d88 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9d8b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be9d8e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be9d91 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9d94 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9d97 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11be9d9a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9d9d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9da0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11be9da4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11be9da6 jne 0x11be9dc0 */
  if (!C.zf) goto L_11be9dc0;
  /* 11be9da8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9dad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9db0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9db2 not edx */
  EDX = (~(EDX));
  /* 11be9db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9db7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be9db9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9dbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be9dc0:;
  /* 11be9dc0 jmp 0x11be9e2d */
  goto L_11be9e2d;
L_11be9dc2:;
  /* 11be9dc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9dc5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9dc8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9dcd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be9dcf not eax */
  EAX = (~(EAX));
  /* 11be9dd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9dd4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9dd7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11be9dde and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9de0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9de3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9de6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11be9ded mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9df0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9df3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11be9df6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11be9df9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9dfc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9dff mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11be9e02 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9e05 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9e08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be9e0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9e0e jne 0x11be9e2d */
  if (!C.zf) goto L_11be9e2d;
  /* 11be9e10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9e13 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9e16 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9e1b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be9e1d not eax */
  EAX = (~(EAX));
  /* 11be9e1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9e22 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9e25 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11be9e27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9e2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11be9e2d:;
  /* 11be9e2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9e30 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11be9e33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9e36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be9e39 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11be9e3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9e3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11be9e42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9e45 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11be9e48 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11be9e4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9e4e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9e51 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9e54 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11be9e57 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9e5b jle 0x11be9fa7 */
  if ((C.zf||C.sf!=C.of)) goto L_11be9fa7;
  /* 11be9e61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9e64 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9e67 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11be9e6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9e6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11be9e70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9e73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11be9e76 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9e7a jbe 0x11be9e83 */
  if ((C.cf||C.zf)) goto L_11be9e83;
  /* 11be9e7c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11be9e83:;
  /* 11be9e83 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9e86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11be9e89 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11be9e8c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11be9e8f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9e92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9e95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9e98 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11be9e9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9e9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9ea1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11be9ea4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11be9ea7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9eaa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11be9ead mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9eb0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9eb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9eb6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11be9eb9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9ebc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9ebf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11be9ec2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9ec5 jne 0x11be9f93 */
  if (!C.zf) goto L_11be9f93;
  /* 11be9ecb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9ecf jae 0x11be9f2c */
  if (!C.cf) goto L_11be9f2c;
  /* 11be9ed1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9ed4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9ed7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be9edb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9ede add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9ee1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be9ee4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11be9ee7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9eea add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9eed mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11be9ef0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9ef2 jne 0x11be9f0a */
  if (!C.zf) goto L_11be9f0a;
  /* 11be9ef4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9ef9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9efc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9efe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9f01 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11be9f03 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9f05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9f08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11be9f0a:;
  /* 11be9f0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9f0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9f12 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be9f14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9f17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9f1a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11be9f1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9f20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9f23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9f26 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11be9f2a jmp 0x11be9f93 */
  goto L_11be9f93;
L_11be9f2c:;
  /* 11be9f2c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9f2f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9f32 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11be9f36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9f39 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9f3c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11be9f3f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11be9f42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9f45 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9f48 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11be9f4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11be9f4d jne 0x11be9f6a */
  if (!C.zf) goto L_11be9f6a;
  /* 11be9f4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9f52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9f55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11be9f5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11be9f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9f5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11be9f62 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9f64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11be9f67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11be9f6a:;
  /* 11be9f6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11be9f6d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9f70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11be9f75 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11be9f77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9f7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9f7d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11be9f84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11be9f86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11be9f89 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11be9f8c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11be9f93:;
  /* 11be9f93 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9f96 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9f99 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11be9f9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11be9f9e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9fa1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11be9fa4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11be9fa7:;
  /* 11be9fa7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9faa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9fad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9fb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11be9fb2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9fb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9fb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9fbb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9fbe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11be9fc1 jmp 0x11bea282 */
  goto L_11bea282;
L_11be9fc6:;
  /* 11be9fc6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9fc9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11be9fcc jge 0x11bea282 */
  if ((C.sf==C.of)) goto L_11bea282;
  /* 11be9fd2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9fd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9fd8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9fdb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11be9fdd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11be9fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9fe3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9fe6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9fe9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11be9fec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11be9fef add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11be9ff2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11be9ff5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11be9ff8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11be9ffb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11be9ffe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bea001 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11bea004 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea007 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bea00a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea00e jbe 0x11bea017 */
  if ((C.cf||C.zf)) goto L_11bea017;
  /* 11bea010 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11bea017:;
  /* 11bea017 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea01a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11bea01d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bea01f jne 0x11bea160 */
  if (!C.zf) goto L_11bea160;
  /* 11bea025 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea028 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11bea02b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea02e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bea031 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea035 jbe 0x11bea03e */
  if ((C.cf||C.zf)) goto L_11bea03e;
  /* 11bea037 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11bea03e:;
  /* 11bea03e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bea041 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bea044 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bea047 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea04a jne 0x11bea120 */
  if (!C.zf) goto L_11bea120;
  /* 11bea050 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea054 jae 0x11bea0b5 */
  if (!C.cf) goto L_11bea0b5;
  /* 11bea056 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea05b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bea05e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea060 not edx */
  EDX = (~(EDX));
  /* 11bea062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea065 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea068 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11bea06c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11bea06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea071 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea074 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11bea078 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea07b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea07e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11bea081 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bea084 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea087 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea08a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11bea08d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea090 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea093 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11bea097 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bea099 jne 0x11bea0b3 */
  if (!C.zf) goto L_11bea0b3;
  /* 11bea09b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea0a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bea0a3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea0a5 not edx */
  EDX = (~(EDX));
  /* 11bea0a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea0aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bea0ac and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11bea0ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea0b1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11bea0b3:;
  /* 11bea0b3 jmp 0x11bea120 */
  goto L_11bea120;
L_11bea0b5:;
  /* 11bea0b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bea0b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea0bb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11bea0c0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11bea0c2 not eax */
  EAX = (~(EAX));
  /* 11bea0c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea0c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea0ca mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11bea0d1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bea0d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea0d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea0d9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11bea0e0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea0e3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea0e6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11bea0e9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bea0ec mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea0ef add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea0f2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11bea0f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea0f8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea0fb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11bea0ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bea101 jne 0x11bea120 */
  if (!C.zf) goto L_11bea120;
  /* 11bea103 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bea106 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea109 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11bea10e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11bea110 not eax */
  EAX = (~(EAX));
  /* 11bea112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea115 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bea118 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11bea11a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea11d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11bea120:;
  /* 11bea120 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bea123 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11bea126 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bea129 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bea12c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11bea12f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bea132 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11bea135 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bea138 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11bea13b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11bea13e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bea141 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea144 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bea147 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bea14a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11bea14d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea150 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bea153 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea157 jbe 0x11bea160 */
  if ((C.cf||C.zf)) goto L_11bea160;
  /* 11bea159 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11bea160:;
  /* 11bea160 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bea163 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bea166 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11bea169 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11bea16c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea16f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bea172 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bea175 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11bea178 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea17b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bea17e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11bea181 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bea184 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea187 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11bea18a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea18d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bea190 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea193 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11bea196 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea199 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea19c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bea19f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea1a2 jne 0x11bea26e */
  if (!C.zf) goto L_11bea26e;
  /* 11bea1a8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea1ac jae 0x11bea208 */
  if (!C.cf) goto L_11bea208;
  /* 11bea1ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea1b1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea1b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11bea1b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea1bb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea1be mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11bea1c1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bea1c3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea1c6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea1c9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11bea1cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bea1ce jne 0x11bea1e6 */
  if (!C.zf) goto L_11bea1e6;
  /* 11bea1d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11bea1d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bea1d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11bea1da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea1dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bea1df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11bea1e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea1e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bea1e6:;
  /* 11bea1e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea1eb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bea1ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea1f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea1f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea1f6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11bea1fa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11bea1fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea1ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea202 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11bea206 jmp 0x11bea26e */
  goto L_11bea26e;
L_11bea208:;
  /* 11bea208 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea20b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea20e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11bea212 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea215 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea218 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11bea21b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bea21d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea220 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea223 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11bea226 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bea228 jne 0x11bea245 */
  if (!C.zf) goto L_11bea245;
  /* 11bea22a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bea22d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea230 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11bea235 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11bea237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea23a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bea23d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11bea23f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bea242 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11bea245:;
  /* 11bea245 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bea248 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea24b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea250 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea252 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea255 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea258 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11bea25f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11bea261 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea264 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bea267 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11bea26e:;
  /* 11bea26e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea271 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bea274 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11bea276 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea279 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea27c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bea27f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11bea282:;
  /* 11bea282 mov eax, 1 */
  EAX = (0x1u);
L_11bea287:;
  /* 11bea287 mov esp, ebp */
  ESP = (EBP);
  /* 11bea289 pop ebp */
  EBP = (pop32());
  /* 11bea28a ret  */
  ESPCHK(0x11be9ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a290 @ 0x11bea290 (304 bytes, 79 insns) */
void f_11bea290(void) {
  FTRACE(0x11bea290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bea290 push ebp */
  push32((uint32_t)(EBP));
  /* 11bea291 mov ebp, esp */
  EBP = (ESP);
  /* 11bea293 push ecx */
  push32((uint32_t)(ECX));
  /* 11bea294 cmp dword ptr [0x11c12000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea29b je 0x11bea3bc */
  if (C.zf) goto L_11bea3bc;
  /* 11bea2a1 mov eax, dword ptr [0x11c11ff8] */
  EAX = (r32((uint32_t)(0x11c11ff8)));
  /* 11bea2a6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11bea2a9 mov ecx, dword ptr [0x11c12000] */
  ECX = (r32((uint32_t)(0x11c12000)));
  /* 11bea2af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bea2b2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea2b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bea2b7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11bea2bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11bea2c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea2c4 push eax */
  push32((uint32_t)(EAX));
  /* 11bea2c5 call dword ptr [0x11c13330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13330))), 0x11bea2cbu);
  /* 11bea2cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea2d0 mov ecx, dword ptr [0x11c11ff8] */
  ECX = (r32((uint32_t)(0x11c11ff8)));
  /* 11bea2d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea2d8 mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11bea2dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bea2e0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11bea2e2 mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11bea2e8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11bea2eb mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11bea2f0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bea2f3 mov edx, dword ptr [0x11c11ff8] */
  EDX = (r32((uint32_t)(0x11c11ff8)));
  /* 11bea2f9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11bea304 mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11bea309 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bea30c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11bea30f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bea312 mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11bea317 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bea31a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11bea31d mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11bea323 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11bea326 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11bea32a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bea32c jne 0x11bea342 */
  if (!C.zf) goto L_11bea342;
  /* 11bea32e mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11bea334 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11bea337 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11bea339 mov ecx, dword ptr [0x11c12000] */
  ECX = (r32((uint32_t)(0x11c12000)));
  /* 11bea33f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11bea342:;
  /* 11bea342 mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11bea348 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea34c jne 0x11bea3b2 */
  if (!C.zf) goto L_11bea3b2;
  /* 11bea34e cmp dword ptr [0x11c12004], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c12004))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea355 jle 0x11bea3b2 */
  if ((C.zf||C.sf!=C.of)) goto L_11bea3b2;
  /* 11bea357 mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11bea35c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bea35f push ecx */
  push32((uint32_t)(ECX));
  /* 11bea360 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bea362 mov edx, dword ptr [0x11c1200c] */
  EDX = (r32((uint32_t)(0x11c1200c)));
  /* 11bea368 push edx */
  push32((uint32_t)(EDX));
  /* 11bea369 call dword ptr [0x11c13334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13334))), 0x11bea36fu);
  /* 11bea36f mov eax, dword ptr [0x11c12004] */
  EAX = (r32((uint32_t)(0x11c12004)));
  /* 11bea374 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bea377 mov ecx, dword ptr [0x11c12008] */
  ECX = (r32((uint32_t)(0x11c12008)));
  /* 11bea37d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea37f mov edx, dword ptr [0x11c12000] */
  EDX = (r32((uint32_t)(0x11c12000)));
  /* 11bea385 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea388 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea38a push ecx */
  push32((uint32_t)(ECX));
  /* 11bea38b mov eax, dword ptr [0x11c12000] */
  EAX = (r32((uint32_t)(0x11c12000)));
  /* 11bea390 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea393 push eax */
  push32((uint32_t)(EAX));
  /* 11bea394 mov ecx, dword ptr [0x11c12000] */
  ECX = (r32((uint32_t)(0x11c12000)));
  /* 11bea39a push ecx */
  push32((uint32_t)(ECX));
  /* 11bea39b call 0x11bec9c0 */
  push32(0x11bea3a0u); f_11bec9c0();
  /* 11bea3a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea3a3 mov edx, dword ptr [0x11c12004] */
  EDX = (r32((uint32_t)(0x11c12004)));
  /* 11bea3a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea3ac mov dword ptr [0x11c12004], edx */
  w32((uint32_t)(0x11c12004), (EDX));
L_11bea3b2:;
  /* 11bea3b2 mov dword ptr [0x11c12000], 0 */
  w32((uint32_t)(0x11c12000), (0x0u));
L_11bea3bc:;
  /* 11bea3bc mov esp, ebp */
  ESP = (EBP);
  /* 11bea3be pop ebp */
  EBP = (pop32());
  /* 11bea3bf ret  */
  ESPCHK(0x11bea290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3c0 @ 0x11bea3c0 (1565 bytes, 343 insns) */
void f_11bea3c0(void) {
  FTRACE(0x11bea3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bea3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bea3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bea3c3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea3c9 mov eax, dword ptr [0x11c12004] */
  EAX = (r32((uint32_t)(0x11c12004)));
  /* 11bea3ce imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bea3d1 push eax */
  push32((uint32_t)(EAX));
  /* 11bea3d2 mov ecx, dword ptr [0x11c12008] */
  ECX = (r32((uint32_t)(0x11c12008)));
  /* 11bea3d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11bea3d9 call dword ptr [0x11c1337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1337c))), 0x11bea3dfu);
  /* 11bea3df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bea3e1 je 0x11bea3eb */
  if (C.zf) goto L_11bea3eb;
  /* 11bea3e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bea3e6 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea3eb:;
  /* 11bea3eb mov edx, dword ptr [0x11c12008] */
  EDX = (r32((uint32_t)(0x11c12008)));
  /* 11bea3f1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11bea3f7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11bea401 jmp 0x11bea412 */
  goto L_11bea412;
L_11bea403:;
  /* 11bea403 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11bea409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea40c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11bea412:;
  /* 11bea412 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11bea418 cmp ecx, dword ptr [0x11c12004] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c12004))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea41e jge 0x11bea9d7 */
  if ((C.sf==C.of)) goto L_11bea9d7;
  /* 11bea424 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11bea42a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11bea42d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11bea433 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11bea438 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11bea43e push ecx */
  push32((uint32_t)(ECX));
  /* 11bea43f call dword ptr [0x11c1337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1337c))), 0x11bea445u);
  /* 11bea445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bea447 je 0x11bea453 */
  if (C.zf) goto L_11bea453;
  /* 11bea449 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11bea44e jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea453:;
  /* 11bea453 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11bea459 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11bea45c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11bea462 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11bea468 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea46e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11bea471 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11bea477 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bea47a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bea47d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11bea487 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11bea491 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bea498 jmp 0x11bea4a3 */
  goto L_11bea4a3;
L_11bea49a:;
  /* 11bea49a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bea49d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea4a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11bea4a3:;
  /* 11bea4a3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea4a7 jge 0x11bea99b */
  if ((C.sf==C.of)) goto L_11bea99b;
  /* 11bea4ad mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11bea4b7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11bea4c1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11bea4cb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11bea4d5 jmp 0x11bea4e6 */
  goto L_11bea4e6;
L_11bea4d7:;
  /* 11bea4d7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11bea4dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea4e0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11bea4e6:;
  /* 11bea4e6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea4ed jge 0x11bea502 */
  if ((C.sf==C.of)) goto L_11bea502;
  /* 11bea4ef mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11bea4f5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11bea500 jmp 0x11bea4d7 */
  goto L_11bea4d7;
L_11bea502:;
  /* 11bea502 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea506 jl 0x11bea93d */
  if ((C.sf!=C.of)) goto L_11bea93d;
  /* 11bea50c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11bea511 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11bea517 push ecx */
  push32((uint32_t)(ECX));
  /* 11bea518 call dword ptr [0x11c1337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1337c))), 0x11bea51eu);
  /* 11bea51e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bea520 je 0x11bea52c */
  if (C.zf) goto L_11bea52c;
  /* 11bea522 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11bea527 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea52c:;
  /* 11bea52c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11bea532 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bea535 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11bea53f jmp 0x11bea550 */
  goto L_11bea550;
L_11bea541:;
  /* 11bea541 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11bea547 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea54a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11bea550:;
  /* 11bea550 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea557 jge 0x11bea6d4 */
  if ((C.sf==C.of)) goto L_11bea6d4;
  /* 11bea55d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bea560 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea563 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11bea569 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea56f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea575 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11bea57b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea581 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea585 jne 0x11bea592 */
  if (!C.zf) goto L_11bea592;
  /* 11bea587 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11bea58d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea590 je 0x11bea59c */
  if (C.zf) goto L_11bea59c;
L_11bea592:;
  /* 11bea592 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11bea597 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea59c:;
  /* 11bea59c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea5a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bea5a4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11bea5aa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11bea5b0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11bea5b6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11bea5bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11bea5bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bea5c1 je 0x11bea5f9 */
  if (C.zf) goto L_11bea5f9;
  /* 11bea5c3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11bea5c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea5cc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11bea5d2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea5dc jle 0x11bea5e8 */
  if ((C.zf||C.sf!=C.of)) goto L_11bea5e8;
  /* 11bea5de mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11bea5e3 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea5e8:;
  /* 11bea5e8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11bea5ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea5f1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11bea5f7 jmp 0x11bea63b */
  goto L_11bea63b;
L_11bea5f9:;
  /* 11bea5f9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11bea5ff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11bea602 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea605 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11bea60b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea612 jle 0x11bea61e */
  if ((C.zf||C.sf!=C.of)) goto L_11bea61e;
  /* 11bea614 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11bea61e:;
  /* 11bea61e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11bea624 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11bea62b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea62e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11bea634 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11bea63b:;
  /* 11bea63b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea642 jl 0x11bea65d */
  if ((C.sf!=C.of)) goto L_11bea65d;
  /* 11bea644 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11bea64a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11bea64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bea64f jne 0x11bea65d */
  if (!C.zf) goto L_11bea65d;
  /* 11bea651 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea65b jle 0x11bea667 */
  if ((C.zf||C.sf!=C.of)) goto L_11bea667;
L_11bea65d:;
  /* 11bea65d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11bea662 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea667:;
  /* 11bea667 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea66d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea673 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11bea676 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea67c je 0x11bea688 */
  if (C.zf) goto L_11bea688;
  /* 11bea67e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11bea683 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea688:;
  /* 11bea688 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea68e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea694 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11bea69a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea6a0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea6a6 jb 0x11bea59c */
  if (C.cf) goto L_11bea59c;
  /* 11bea6ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea6b2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea6b8 je 0x11bea6c4 */
  if (C.zf) goto L_11bea6c4;
  /* 11bea6ba mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11bea6bf jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea6c4:;
  /* 11bea6c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bea6c7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea6cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bea6cf jmp 0x11bea541 */
  goto L_11bea541;
L_11bea6d4:;
  /* 11bea6d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bea6d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bea6d9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea6df je 0x11bea6eb */
  if (C.zf) goto L_11bea6eb;
  /* 11bea6e1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11bea6e6 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea6eb:;
  /* 11bea6eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bea6ee mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11bea6f4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11bea6fb jmp 0x11bea706 */
  goto L_11bea706;
L_11bea6fd:;
  /* 11bea6fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea700 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea703 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11bea706:;
  /* 11bea706 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea70a jge 0x11bea93d */
  if ((C.sf==C.of)) goto L_11bea93d;
  /* 11bea710 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11bea71a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11bea720 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11bea726:;
  /* 11bea726 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea72c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bea72f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11bea735 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11bea73b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea741 je 0x11bea86a */
  if (C.zf) goto L_11bea86a;
  /* 11bea747 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea74a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11bea750 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea757 je 0x11bea86a */
  if (C.zf) goto L_11bea86a;
  /* 11bea75d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11bea763 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea769 jb 0x11bea77e */
  if (C.cf) goto L_11bea77e;
  /* 11bea76b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11bea771 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea776 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea77c jb 0x11bea788 */
  if (C.cf) goto L_11bea788;
L_11bea77e:;
  /* 11bea77e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11bea783 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea788:;
  /* 11bea788 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11bea78e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11bea794 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11bea79a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11bea7a0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea7a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11bea7a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea7a9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea7ae mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11bea7b4:;
  /* 11bea7b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea7b7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea7bd je 0x11bea7de */
  if (C.zf) goto L_11bea7de;
  /* 11bea7bf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea7c2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea7c8 jne 0x11bea7cc */
  if (!C.zf) goto L_11bea7cc;
  /* 11bea7ca jmp 0x11bea7de */
  goto L_11bea7de;
L_11bea7cc:;
  /* 11bea7cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea7cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bea7d1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11bea7d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea7d7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea7d9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11bea7dc jmp 0x11bea7b4 */
  goto L_11bea7b4;
L_11bea7de:;
  /* 11bea7de mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bea7e1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea7e7 jne 0x11bea7f3 */
  if (!C.zf) goto L_11bea7f3;
  /* 11bea7e9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11bea7ee jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea7f3:;
  /* 11bea7f3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11bea7f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bea7fb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11bea7fe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea801 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11bea807 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea80e jle 0x11bea81a */
  if ((C.zf||C.sf!=C.of)) goto L_11bea81a;
  /* 11bea810 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11bea81a:;
  /* 11bea81a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11bea820 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea823 je 0x11bea82f */
  if (C.zf) goto L_11bea82f;
  /* 11bea825 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11bea82a jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea82f:;
  /* 11bea82f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11bea835 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11bea838 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea83e je 0x11bea84a */
  if (C.zf) goto L_11bea84a;
  /* 11bea840 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11bea845 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea84a:;
  /* 11bea84a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11bea850 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11bea856 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11bea85c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea85f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11bea865 jmp 0x11bea726 */
  goto L_11bea726;
L_11bea86a:;
  /* 11bea86a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea871 je 0x11bea8e1 */
  if (C.zf) goto L_11bea8e1;
  /* 11bea873 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea877 jge 0x11bea8ab */
  if ((C.sf==C.of)) goto L_11bea8ab;
  /* 11bea879 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea87e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea881 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea883 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11bea889 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11bea88b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11bea891 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea896 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea899 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea89b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11bea8a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11bea8a3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11bea8a9 jmp 0x11bea8e1 */
  goto L_11bea8e1;
L_11bea8ab:;
  /* 11bea8ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea8ae sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea8b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea8b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea8b8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11bea8be or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11bea8c0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11bea8c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea8c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea8cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11bea8d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11bea8d3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11bea8d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11bea8db mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11bea8e1:;
  /* 11bea8e1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11bea8e7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bea8ea cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea8f0 jne 0x11bea904 */
  if (!C.zf) goto L_11bea904;
  /* 11bea8f2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bea8f5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11bea8fb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea902 je 0x11bea90e */
  if (C.zf) goto L_11bea90e;
L_11bea904:;
  /* 11bea904 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11bea909 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea90e:;
  /* 11bea90e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11bea914 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bea917 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea91d je 0x11bea929 */
  if (C.zf) goto L_11bea929;
  /* 11bea91f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11bea924 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea929:;
  /* 11bea929 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11bea92f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea932 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11bea938 jmp 0x11bea6fd */
  goto L_11bea6fd;
L_11bea93d:;
  /* 11bea93d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bea940 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11bea946 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11bea94c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea950 jne 0x11bea96a */
  if (!C.zf) goto L_11bea96a;
  /* 11bea952 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bea955 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11bea95b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11bea961 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea968 je 0x11bea971 */
  if (C.zf) goto L_11bea971;
L_11bea96a:;
  /* 11bea96a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11bea96f jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea971:;
  /* 11bea971 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11bea977 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea97d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11bea983 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bea986 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea98b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11bea98e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bea991 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11bea993 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bea996 jmp 0x11bea49a */
  goto L_11bea49a;
L_11bea99b:;
  /* 11bea99b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11bea9a1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11bea9a7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea9a9 jne 0x11bea9bc */
  if (!C.zf) goto L_11bea9bc;
  /* 11bea9ab mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11bea9b1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11bea9b7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea9ba je 0x11bea9c3 */
  if (C.zf) goto L_11bea9c3;
L_11bea9bc:;
  /* 11bea9bc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11bea9c1 jmp 0x11bea9d9 */
  goto L_11bea9d9;
L_11bea9c3:;
  /* 11bea9c3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11bea9c9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bea9cc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11bea9d2 jmp 0x11bea403 */
  goto L_11bea403;
L_11bea9d7:;
  /* 11bea9d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bea9d9:;
  /* 11bea9d9 mov esp, ebp */
  ESP = (EBP);
  /* 11bea9db pop ebp */
  EBP = (pop32());
  /* 11bea9dc ret  */
  ESPCHK(0x11bea3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9e0 @ 0x11bea9e0 (250 bytes, 92 insns) */
void f_11bea9e0(void) {
  FTRACE(0x11bea9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bea9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bea9e1 mov ebp, esp */
  EBP = (ESP);
  /* 11bea9e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bea9e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11bea9e7 push esi */
  push32((uint32_t)(ESI));
  /* 11bea9e8 push edi */
  push32((uint32_t)(EDI));
  /* 11bea9e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11bea9ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bea9ef lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11bea9f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11bea9f5:;
  /* 11bea9f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bea9f9 jne 0x11beaa19 */
  if (!C.zf) goto L_11beaa19;
  /* 11bea9fb push 0x11c0c020 */
  push32((uint32_t)(0x11c0c020u));
  /* 11beaa00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beaa02 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11beaa04 push 0x11c0c014 */
  push32((uint32_t)(0x11c0c014u));
  /* 11beaa09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beaa0b call 0x11be3b90 */
  push32(0x11beaa10u); f_11be3b90();
  /* 11beaa10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaa13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaa16 jne 0x11beaa19 */
  if (!C.zf) goto L_11beaa19;
  /* 11beaa18 int3  */
  x86_unimpl("int3 @ 0x11beaa18");
L_11beaa19:;
  /* 11beaa19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beaa1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beaa1d jne 0x11bea9f5 */
  if (!C.zf) goto L_11bea9f5;
L_11beaa1f:;
  /* 11beaa1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaa23 jne 0x11beaa43 */
  if (!C.zf) goto L_11beaa43;
  /* 11beaa25 push 0x11c0c004 */
  push32((uint32_t)(0x11c0c004u));
  /* 11beaa2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11beaa2c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11beaa2e push 0x11c0c014 */
  push32((uint32_t)(0x11c0c014u));
  /* 11beaa33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beaa35 call 0x11be3b90 */
  push32(0x11beaa3au); f_11be3b90();
  /* 11beaa3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaa3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaa40 jne 0x11beaa43 */
  if (!C.zf) goto L_11beaa43;
  /* 11beaa42 int3  */
  x86_unimpl("int3 @ 0x11beaa42");
L_11beaa43:;
  /* 11beaa43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beaa45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beaa47 jne 0x11beaa1f */
  if (!C.zf) goto L_11beaa1f;
  /* 11beaa49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa4c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11beaa53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beaa59 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11beaa5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beaa62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11beaa64 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa67 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11beaa6e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11beaa71 push ecx */
  push32((uint32_t)(ECX));
  /* 11beaa72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beaa75 push edx */
  push32((uint32_t)(EDX));
  /* 11beaa76 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa79 push eax */
  push32((uint32_t)(EAX));
  /* 11beaa7a call 0x11beba60 */
  push32(0x11beaa7fu); f_11beba60();
  /* 11beaa7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaa82 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11beaa85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa88 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11beaa8b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beaa8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa91 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11beaa94 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaa97 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaa9b jl 0x11beaabf */
  if ((C.sf!=C.of)) goto L_11beaabf;
  /* 11beaa9d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaaa0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11beaaa2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11beaaa5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beaaa7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11beaaad mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11beaab0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaab3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11beaab5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaab8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaabb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11beaabd jmp 0x11beaad0 */
  goto L_11beaad0;
L_11beaabf:;
  /* 11beaabf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beaac2 push edx */
  push32((uint32_t)(EDX));
  /* 11beaac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beaac5 call 0x11beb7e0 */
  push32(0x11beaacau); f_11beb7e0();
  /* 11beaaca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaacd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11beaad0:;
  /* 11beaad0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11beaad3 pop edi */
  EDI = (pop32());
  /* 11beaad4 pop esi */
  ESI = (pop32());
  /* 11beaad5 pop ebx */
  EBX = (pop32());
  /* 11beaad6 mov esp, ebp */
  ESP = (EBP);
  /* 11beaad8 pop ebp */
  EBP = (pop32());
  /* 11beaad9 ret  */
  ESPCHK(0x11bea9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x11beaae0 (183 bytes, 58 insns) */
void f_11beaae0(void) {
  FTRACE(0x11beaae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beaae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beaae1 mov ebp, esp */
  EBP = (ESP);
  /* 11beaae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beaae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beaae9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaaec cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaaf1 ja 0x11beab0a */
  if ((!C.cf&&!C.zf)) goto L_11beab0a;
  /* 11beaaf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beaaf6 mov edx, dword ptr [0x11c0ec98] */
  EDX = (r32((uint32_t)(0x11c0ec98)));
  /* 11beaafc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beaafe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11beab02 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11beab05 jmp 0x11beab93 */
  goto L_11beab93;
L_11beab0a:;
  /* 11beab0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beab0d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11beab10 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11beab16 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11beab1c mov edx, dword ptr [0x11c0ec98] */
  EDX = (r32((uint32_t)(0x11c0ec98)));
  /* 11beab22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beab24 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11beab28 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11beab2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beab2f je 0x11beab53 */
  if (C.zf) goto L_11beab53;
  /* 11beab31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beab34 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11beab37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11beab3d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11beab40 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11beab43 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11beab46 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11beab4a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11beab51 jmp 0x11beab64 */
  goto L_11beab64;
L_11beab53:;
  /* 11beab53 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11beab56 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11beab59 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11beab5d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11beab64:;
  /* 11beab64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11beab66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beab68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beab6a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11beab6d push ecx */
  push32((uint32_t)(ECX));
  /* 11beab6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beab71 push edx */
  push32((uint32_t)(EDX));
  /* 11beab72 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11beab75 push eax */
  push32((uint32_t)(EAX));
  /* 11beab76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11beab78 call 0x11becd00 */
  push32(0x11beab7du); f_11becd00();
  /* 11beab7d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beab80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beab82 jne 0x11beab88 */
  if (!C.zf) goto L_11beab88;
  /* 11beab84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beab86 jmp 0x11beab93 */
  goto L_11beab93;
L_11beab88:;
  /* 11beab88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beab8b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beab90 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11beab93:;
  /* 11beab93 mov esp, ebp */
  ESP = (EBP);
  /* 11beab95 pop ebp */
  EBP = (pop32());
  /* 11beab96 ret  */
  ESPCHK(0x11beaae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x11beaba0 (836 bytes, 238 insns) */
void f_11beaba0(void) {
  FTRACE(0x11beaba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beaba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beaba1 mov ebp, esp */
  EBP = (ESP);
  /* 11beaba3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beaba6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11beaba8 call 0x11be84d0 */
  push32(0x11beabadu); f_11be84d0();
  /* 11beabad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beabb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beabb3 push eax */
  push32((uint32_t)(EAX));
  /* 11beabb4 call 0x11beaef0 */
  push32(0x11beabb9u); f_11beaef0();
  /* 11beabb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beabbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11beabbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beabc2 cmp ecx, dword ptr [0x11c11d44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11d44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beabc8 jne 0x11beabdb */
  if (!C.zf) goto L_11beabdb;
  /* 11beabca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11beabcc call 0x11be8570 */
  push32(0x11beabd1u); f_11be8570();
  /* 11beabd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beabd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beabd6 jmp 0x11beaee0 */
  goto L_11beaee0;
L_11beabdb:;
  /* 11beabdb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beabdf jne 0x11beabfc */
  if (!C.zf) goto L_11beabfc;
  /* 11beabe1 call 0x11beafd0 */
  push32(0x11beabe6u); f_11beafd0();
  /* 11beabe6 call 0x11beb050 */
  push32(0x11beabebu); f_11beb050();
  /* 11beabeb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11beabed call 0x11be8570 */
  push32(0x11beabf2u); f_11be8570();
  /* 11beabf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beabf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beabf7 jmp 0x11beaee0 */
  goto L_11beaee0;
L_11beabfc:;
  /* 11beabfc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11beac03 jmp 0x11beac0e */
  goto L_11beac0e;
L_11beac05:;
  /* 11beac05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beac08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beac0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11beac0e:;
  /* 11beac0e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beac12 jae 0x11bead5f */
  if (!C.cf) goto L_11bead5f;
  /* 11beac18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beac1b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beac1e mov ecx, dword ptr [eax + 0x11c0eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x11c0eeb8)));
  /* 11beac24 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beac27 jne 0x11bead5a */
  if (!C.zf) goto L_11bead5a;
  /* 11beac2d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11beac34 jmp 0x11beac3f */
  goto L_11beac3f;
L_11beac36:;
  /* 11beac36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beac39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beac3c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11beac3f:;
  /* 11beac3f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beac46 jae 0x11beac54 */
  if (!C.cf) goto L_11beac54;
  /* 11beac48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beac4b mov byte ptr [eax + 0x11c11ee0], 0 */
  w8((uint32_t)(EAX + 0x11c11ee0), (0x0u));
  /* 11beac52 jmp 0x11beac36 */
  goto L_11beac36;
L_11beac54:;
  /* 11beac54 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11beac5b jmp 0x11beac66 */
  goto L_11beac66;
L_11beac5d:;
  /* 11beac5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beac60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beac63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11beac66:;
  /* 11beac66 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beac6a jae 0x11beace7 */
  if (!C.cf) goto L_11beace7;
  /* 11beac6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beac6f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beac72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beac75 lea ecx, [edx + eax*8 + 0x11c0eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11c0eec8));
  /* 11beac7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11beac7f jmp 0x11beac8a */
  goto L_11beac8a;
L_11beac81:;
  /* 11beac81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beac84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beac87 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11beac8a:;
  /* 11beac8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beac8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beac8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11beac91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11beac93 je 0x11beace2 */
  if (C.zf) goto L_11beace2;
  /* 11beac95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beac98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beac9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11beac9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beac9f je 0x11beace2 */
  if (C.zf) goto L_11beace2;
  /* 11beaca1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beaca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beaca6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11beaca8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11beacab jmp 0x11beacb6 */
  goto L_11beacb6;
L_11beacad:;
  /* 11beacad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beacb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beacb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11beacb6:;
  /* 11beacb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beacb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beacbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11beacbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beacc1 ja 0x11beace0 */
  if ((!C.cf&&!C.zf)) goto L_11beace0;
  /* 11beacc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beacc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beacc9 mov dl, byte ptr [eax + 0x11c11ee1] */
  DL = (r8((uint32_t)(EAX + 0x11c11ee1)));
  /* 11beaccf or dl, byte ptr [ecx + 0x11c0eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11c0eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 11beacd5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beacd8 mov byte ptr [eax + 0x11c11ee1], dl */
  w8((uint32_t)(EAX + 0x11c11ee1), (DL));
  /* 11beacde jmp 0x11beacad */
  goto L_11beacad;
L_11beace0:;
  /* 11beace0 jmp 0x11beac81 */
  goto L_11beac81;
L_11beace2:;
  /* 11beace2 jmp 0x11beac5d */
  goto L_11beac5d;
L_11beace7:;
  /* 11beace7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beacea mov dword ptr [0x11c11d44], ecx */
  w32((uint32_t)(0x11c11d44), (ECX));
  /* 11beacf0 mov dword ptr [0x11c11dcc], 1 */
  w32((uint32_t)(0x11c11dcc), (0x1u));
  /* 11beacfa mov edx, dword ptr [0x11c11d44] */
  EDX = (r32((uint32_t)(0x11c11d44)));
  /* 11bead00 push edx */
  push32((uint32_t)(EDX));
  /* 11bead01 call 0x11beaf50 */
  push32(0x11bead06u); f_11beaf50();
  /* 11bead06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bead09 mov dword ptr [0x11c11fe4], eax */
  w32((uint32_t)(0x11c11fe4), (EAX));
  /* 11bead0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bead15 jmp 0x11bead20 */
  goto L_11bead20;
L_11bead17:;
  /* 11bead17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bead1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bead1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11bead20:;
  /* 11bead20 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bead24 jae 0x11bead44 */
  if (!C.cf) goto L_11bead44;
  /* 11bead26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bead29 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bead2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bead2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bead32 mov cx, word ptr [ecx + eax*2 + 0x11c0eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11c0eebc)));
  /* 11bead3a mov word ptr [edx*2 + 0x11c11dc0], cx */
  w16((uint32_t)(EDX*2 + 0x11c11dc0), (CX));
  /* 11bead42 jmp 0x11bead17 */
  goto L_11bead17;
L_11bead44:;
  /* 11bead44 call 0x11beb050 */
  push32(0x11bead49u); f_11beb050();
  /* 11bead49 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bead4b call 0x11be8570 */
  push32(0x11bead50u); f_11be8570();
  /* 11bead50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bead53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bead55 jmp 0x11beaee0 */
  goto L_11beaee0;
L_11bead5a:;
  /* 11bead5a jmp 0x11beac05 */
  goto L_11beac05;
L_11bead5f:;
  /* 11bead5f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11bead62 push edx */
  push32((uint32_t)(EDX));
  /* 11bead63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bead66 push eax */
  push32((uint32_t)(EAX));
  /* 11bead67 call dword ptr [0x11c13308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13308))), 0x11bead6du);
  /* 11bead6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bead70 jne 0x11beaeb2 */
  if (!C.zf) goto L_11beaeb2;
  /* 11bead76 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11bead7d jmp 0x11bead88 */
  goto L_11bead88;
L_11bead7f:;
  /* 11bead7f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bead82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bead85 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11bead88:;
  /* 11bead88 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bead8f jae 0x11bead9d */
  if (!C.cf) goto L_11bead9d;
  /* 11bead91 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bead94 mov byte ptr [edx + 0x11c11ee0], 0 */
  w8((uint32_t)(EDX + 0x11c11ee0), (0x0u));
  /* 11bead9b jmp 0x11bead7f */
  goto L_11bead7f;
L_11bead9d:;
  /* 11bead9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beada0 mov dword ptr [0x11c11d44], eax */
  w32((uint32_t)(0x11c11d44), (EAX));
  /* 11beada5 mov dword ptr [0x11c11fe4], 0 */
  w32((uint32_t)(0x11c11fe4), (0x0u));
  /* 11beadaf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beadb3 jbe 0x11beae6e */
  if ((C.cf||C.zf)) goto L_11beae6e;
  /* 11beadb9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11beadbc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11beadbf jmp 0x11beadca */
  goto L_11beadca;
L_11beadc1:;
  /* 11beadc1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11beadc4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beadc7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11beadca:;
  /* 11beadca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11beadcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beadcf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11beadd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11beadd3 je 0x11beae1c */
  if (C.zf) goto L_11beae1c;
  /* 11beadd5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11beadd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beadda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11beaddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beaddf je 0x11beae1c */
  if (C.zf) goto L_11beae1c;
  /* 11beade1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11beade4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beade6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11beade8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11beadeb jmp 0x11beadf6 */
  goto L_11beadf6;
L_11beaded:;
  /* 11beaded mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beadf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beadf3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11beadf6:;
  /* 11beadf6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11beadf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beadfb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11beadfe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beae01 ja 0x11beae1a */
  if ((!C.cf&&!C.zf)) goto L_11beae1a;
  /* 11beae03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beae06 mov cl, byte ptr [eax + 0x11c11ee1] */
  CL = (r8((uint32_t)(EAX + 0x11c11ee1)));
  /* 11beae0c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11beae0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beae12 mov byte ptr [edx + 0x11c11ee1], cl */
  w8((uint32_t)(EDX + 0x11c11ee1), (CL));
  /* 11beae18 jmp 0x11beaded */
  goto L_11beaded;
L_11beae1a:;
  /* 11beae1a jmp 0x11beadc1 */
  goto L_11beadc1;
L_11beae1c:;
  /* 11beae1c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11beae23 jmp 0x11beae2e */
  goto L_11beae2e;
L_11beae25:;
  /* 11beae25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beae28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beae2b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11beae2e:;
  /* 11beae2e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beae35 jae 0x11beae4e */
  if (!C.cf) goto L_11beae4e;
  /* 11beae37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beae3a mov dl, byte ptr [ecx + 0x11c11ee1] */
  DL = (r8((uint32_t)(ECX + 0x11c11ee1)));
  /* 11beae40 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11beae43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11beae46 mov byte ptr [eax + 0x11c11ee1], dl */
  w8((uint32_t)(EAX + 0x11c11ee1), (DL));
  /* 11beae4c jmp 0x11beae25 */
  goto L_11beae25;
L_11beae4e:;
  /* 11beae4e mov ecx, dword ptr [0x11c11d44] */
  ECX = (r32((uint32_t)(0x11c11d44)));
  /* 11beae54 push ecx */
  push32((uint32_t)(ECX));
  /* 11beae55 call 0x11beaf50 */
  push32(0x11beae5au); f_11beaf50();
  /* 11beae5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beae5d mov dword ptr [0x11c11fe4], eax */
  w32((uint32_t)(0x11c11fe4), (EAX));
  /* 11beae62 mov dword ptr [0x11c11dcc], 1 */
  w32((uint32_t)(0x11c11dcc), (0x1u));
  /* 11beae6c jmp 0x11beae78 */
  goto L_11beae78;
L_11beae6e:;
  /* 11beae6e mov dword ptr [0x11c11dcc], 0 */
  w32((uint32_t)(0x11c11dcc), (0x0u));
L_11beae78:;
  /* 11beae78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11beae7f jmp 0x11beae8a */
  goto L_11beae8a;
L_11beae81:;
  /* 11beae81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beae84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beae87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11beae8a:;
  /* 11beae8a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beae8e jae 0x11beae9f */
  if (!C.cf) goto L_11beae9f;
  /* 11beae90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beae93 mov word ptr [eax*2 + 0x11c11dc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11c11dc0), (0x0u));
  /* 11beae9d jmp 0x11beae81 */
  goto L_11beae81;
L_11beae9f:;
  /* 11beae9f call 0x11beb050 */
  push32(0x11beaea4u); f_11beb050();
  /* 11beaea4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11beaea6 call 0x11be8570 */
  push32(0x11beaeabu); f_11be8570();
  /* 11beaeab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaeae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beaeb0 jmp 0x11beaee0 */
  goto L_11beaee0;
L_11beaeb2:;
  /* 11beaeb2 cmp dword ptr [0x11c10848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaeb9 je 0x11beaed3 */
  if (C.zf) goto L_11beaed3;
  /* 11beaebb call 0x11beafd0 */
  push32(0x11beaec0u); f_11beafd0();
  /* 11beaec0 call 0x11beb050 */
  push32(0x11beaec5u); f_11beb050();
  /* 11beaec5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11beaec7 call 0x11be8570 */
  push32(0x11beaeccu); f_11be8570();
  /* 11beaecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beaed1 jmp 0x11beaee0 */
  goto L_11beaee0;
L_11beaed3:;
  /* 11beaed3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11beaed5 call 0x11be8570 */
  push32(0x11beaedau); f_11be8570();
  /* 11beaeda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beaedd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11beaee0:;
  /* 11beaee0 mov esp, ebp */
  ESP = (EBP);
  /* 11beaee2 pop ebp */
  EBP = (pop32());
  /* 11beaee3 ret  */
  ESPCHK(0x11beaba0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11beaef0 (89 bytes, 21 insns) */
void f_11beaef0(void) {
  FTRACE(0x11beaef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beaef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beaef1 mov ebp, esp */
  EBP = (ESP);
  /* 11beaef3 mov dword ptr [0x11c10848], 0 */
  w32((uint32_t)(0x11c10848), (0x0u));
  /* 11beaefd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaf01 jne 0x11beaf15 */
  if (!C.zf) goto L_11beaf15;
  /* 11beaf03 mov dword ptr [0x11c10848], 1 */
  w32((uint32_t)(0x11c10848), (0x1u));
  /* 11beaf0d call dword ptr [0x11c13300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13300))), 0x11beaf13u);
  /* 11beaf13 jmp 0x11beaf47 */
  goto L_11beaf47;
L_11beaf15:;
  /* 11beaf15 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaf19 jne 0x11beaf2d */
  if (!C.zf) goto L_11beaf2d;
  /* 11beaf1b mov dword ptr [0x11c10848], 1 */
  w32((uint32_t)(0x11c10848), (0x1u));
  /* 11beaf25 call dword ptr [0x11c13304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13304))), 0x11beaf2bu);
  /* 11beaf2b jmp 0x11beaf47 */
  goto L_11beaf47;
L_11beaf2d:;
  /* 11beaf2d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaf31 jne 0x11beaf44 */
  if (!C.zf) goto L_11beaf44;
  /* 11beaf33 mov dword ptr [0x11c10848], 1 */
  w32((uint32_t)(0x11c10848), (0x1u));
  /* 11beaf3d mov eax, dword ptr [0x11c10868] */
  EAX = (r32((uint32_t)(0x11c10868)));
  /* 11beaf42 jmp 0x11beaf47 */
  goto L_11beaf47;
L_11beaf44:;
  /* 11beaf44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11beaf47:;
  /* 11beaf47 pop ebp */
  EBP = (pop32());
  /* 11beaf48 ret  */
  ESPCHK(0x11beaef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af50 @ 0x11beaf50 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11beaf50(void) {
  FTRACE(0x11beaf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beaf50 push ebp */
  push32((uint32_t)(EBP));
  /* 11beaf51 mov ebp, esp */
  EBP = (ESP);
  /* 11beaf53 push ecx */
  push32((uint32_t)(ECX));
  /* 11beaf54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beaf57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11beaf5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beaf5d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beaf63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11beaf66 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beaf6a ja 0x11beaf9a */
  if ((!C.cf&&!C.zf)) goto L_11beaf9a;
  /* 11beaf6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beaf6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beaf71 mov dl, byte ptr [eax + 0x11beafb4] */
  DL = (r8((uint32_t)(EAX + 0x11beafb4)));
  /* 11beaf77 jmp dword ptr [edx*4 + 0x11beafa0] */
  switch (EDX) {
    case 0: goto L_11beaf7e;
    case 1: goto L_11beaf85;
    case 2: goto L_11beaf8c;
    case 3: goto L_11beaf93;
    case 4: goto L_11beaf9a;
    default: x86_unimpl("switch@0x11beaf77 out of table"); return;
  }
L_11beaf7e:;
  /* 11beaf7e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11beaf83 jmp 0x11beaf9c */
  goto L_11beaf9c;
L_11beaf85:;
  /* 11beaf85 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11beaf8a jmp 0x11beaf9c */
  goto L_11beaf9c;
L_11beaf8c:;
  /* 11beaf8c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11beaf91 jmp 0x11beaf9c */
  goto L_11beaf9c;
L_11beaf93:;
  /* 11beaf93 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11beaf98 jmp 0x11beaf9c */
  goto L_11beaf9c;
L_11beaf9a:;
  /* 11beaf9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11beaf9c:;
  /* 11beaf9c mov esp, ebp */
  ESP = (EBP);
  /* 11beaf9e pop ebp */
  EBP = (pop32());
  /* 11beaf9f ret  */
  ESPCHK(0x11beaf50u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11beafd0 (116 bytes, 29 insns) */
void f_11beafd0(void) {
  FTRACE(0x11beafd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beafd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beafd1 mov ebp, esp */
  EBP = (ESP);
  /* 11beafd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11beafd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11beafdb jmp 0x11beafe6 */
  goto L_11beafe6;
L_11beafdd:;
  /* 11beafdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beafe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beafe3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11beafe6:;
  /* 11beafe6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beafed jge 0x11beaffb */
  if ((C.sf==C.of)) goto L_11beaffb;
  /* 11beafef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beaff2 mov byte ptr [ecx + 0x11c11ee0], 0 */
  w8((uint32_t)(ECX + 0x11c11ee0), (0x0u));
  /* 11beaff9 jmp 0x11beafdd */
  goto L_11beafdd;
L_11beaffb:;
  /* 11beaffb mov dword ptr [0x11c11d44], 0 */
  w32((uint32_t)(0x11c11d44), (0x0u));
  /* 11beb005 mov dword ptr [0x11c11dcc], 0 */
  w32((uint32_t)(0x11c11dcc), (0x0u));
  /* 11beb00f mov dword ptr [0x11c11fe4], 0 */
  w32((uint32_t)(0x11c11fe4), (0x0u));
  /* 11beb019 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11beb020 jmp 0x11beb02b */
  goto L_11beb02b;
L_11beb022:;
  /* 11beb022 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb025 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb028 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11beb02b:;
  /* 11beb02b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb02f jge 0x11beb040 */
  if ((C.sf==C.of)) goto L_11beb040;
  /* 11beb031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb034 mov word ptr [eax*2 + 0x11c11dc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11c11dc0), (0x0u));
  /* 11beb03e jmp 0x11beb022 */
  goto L_11beb022;
L_11beb040:;
  /* 11beb040 mov esp, ebp */
  ESP = (EBP);
  /* 11beb042 pop ebp */
  EBP = (pop32());
  /* 11beb043 ret  */
  ESPCHK(0x11beafd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b050 @ 0x11beb050 (770 bytes, 175 insns) */
void f_11beb050(void) {
  FTRACE(0x11beb050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beb050 push ebp */
  push32((uint32_t)(EBP));
  /* 11beb051 mov ebp, esp */
  EBP = (ESP);
  /* 11beb053 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb059 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11beb05f push eax */
  push32((uint32_t)(EAX));
  /* 11beb060 mov ecx, dword ptr [0x11c11d44] */
  ECX = (r32((uint32_t)(0x11c11d44)));
  /* 11beb066 push ecx */
  push32((uint32_t)(ECX));
  /* 11beb067 call dword ptr [0x11c13308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13308))), 0x11beb06du);
  /* 11beb06d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb070 jne 0x11beb289 */
  if (!C.zf) goto L_11beb289;
  /* 11beb076 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11beb080 jmp 0x11beb091 */
  goto L_11beb091;
L_11beb082:;
  /* 11beb082 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb088 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb08b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11beb091:;
  /* 11beb091 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb09b jae 0x11beb0b2 */
  if (!C.cf) goto L_11beb0b2;
  /* 11beb09d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb0a3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11beb0a9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11beb0b0 jmp 0x11beb082 */
  goto L_11beb082;
L_11beb0b2:;
  /* 11beb0b2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11beb0b9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11beb0bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11beb0c2 jmp 0x11beb0cd */
  goto L_11beb0cd;
L_11beb0c4:;
  /* 11beb0c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb0c7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb0ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11beb0cd:;
  /* 11beb0cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb0d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb0d2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11beb0d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beb0d6 je 0x11beb118 */
  if (C.zf) goto L_11beb118;
  /* 11beb0d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb0db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beb0dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11beb0df mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11beb0e5 jmp 0x11beb0f6 */
  goto L_11beb0f6;
L_11beb0e7:;
  /* 11beb0e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb0ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb0f0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11beb0f6:;
  /* 11beb0f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb0f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beb0fb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11beb0fe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb104 ja 0x11beb116 */
  if ((!C.cf&&!C.zf)) goto L_11beb116;
  /* 11beb106 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb10c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11beb114 jmp 0x11beb0e7 */
  goto L_11beb0e7;
L_11beb116:;
  /* 11beb116 jmp 0x11beb0c4 */
  goto L_11beb0c4;
L_11beb118:;
  /* 11beb118 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beb11a mov eax, dword ptr [0x11c11fe4] */
  EAX = (r32((uint32_t)(0x11c11fe4)));
  /* 11beb11f push eax */
  push32((uint32_t)(EAX));
  /* 11beb120 mov ecx, dword ptr [0x11c11d44] */
  ECX = (r32((uint32_t)(0x11c11d44)));
  /* 11beb126 push ecx */
  push32((uint32_t)(ECX));
  /* 11beb127 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11beb12d push edx */
  push32((uint32_t)(EDX));
  /* 11beb12e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11beb133 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11beb139 push eax */
  push32((uint32_t)(EAX));
  /* 11beb13a push 1 */
  push32((uint32_t)(0x1u));
  /* 11beb13c call 0x11becd00 */
  push32(0x11beb141u); f_11becd00();
  /* 11beb141 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb144 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beb146 mov ecx, dword ptr [0x11c11d44] */
  ECX = (r32((uint32_t)(0x11c11d44)));
  /* 11beb14c push ecx */
  push32((uint32_t)(ECX));
  /* 11beb14d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11beb152 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11beb158 push edx */
  push32((uint32_t)(EDX));
  /* 11beb159 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11beb15e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11beb164 push eax */
  push32((uint32_t)(EAX));
  /* 11beb165 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11beb16a mov ecx, dword ptr [0x11c11fe4] */
  ECX = (r32((uint32_t)(0x11c11fe4)));
  /* 11beb170 push ecx */
  push32((uint32_t)(ECX));
  /* 11beb171 call 0x11becec0 */
  push32(0x11beb176u); f_11becec0();
  /* 11beb176 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb179 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beb17b mov edx, dword ptr [0x11c11d44] */
  EDX = (r32((uint32_t)(0x11c11d44)));
  /* 11beb181 push edx */
  push32((uint32_t)(EDX));
  /* 11beb182 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11beb187 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11beb18d push eax */
  push32((uint32_t)(EAX));
  /* 11beb18e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11beb193 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11beb199 push ecx */
  push32((uint32_t)(ECX));
  /* 11beb19a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11beb19f mov edx, dword ptr [0x11c11fe4] */
  EDX = (r32((uint32_t)(0x11c11fe4)));
  /* 11beb1a5 push edx */
  push32((uint32_t)(EDX));
  /* 11beb1a6 call 0x11becec0 */
  push32(0x11beb1abu); f_11becec0();
  /* 11beb1ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb1ae mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11beb1b8 jmp 0x11beb1c9 */
  goto L_11beb1c9;
L_11beb1ba:;
  /* 11beb1ba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb1c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb1c3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11beb1c9:;
  /* 11beb1c9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb1d3 jae 0x11beb284 */
  if (!C.cf) goto L_11beb284;
  /* 11beb1d9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb1df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb1e1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11beb1e9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11beb1ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beb1ee je 0x11beb226 */
  if (C.zf) goto L_11beb226;
  /* 11beb1f0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb1f6 mov cl, byte ptr [eax + 0x11c11ee1] */
  CL = (r8((uint32_t)(EAX + 0x11c11ee1)));
  /* 11beb1fc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11beb1ff mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb205 mov byte ptr [edx + 0x11c11ee1], cl */
  w8((uint32_t)(EDX + 0x11c11ee1), (CL));
  /* 11beb20b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb211 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb217 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11beb21e mov byte ptr [eax + 0x11c11de0], dl */
  w8((uint32_t)(EAX + 0x11c11de0), (DL));
  /* 11beb224 jmp 0x11beb27f */
  goto L_11beb27f;
L_11beb226:;
  /* 11beb226 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb22c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beb22e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11beb236 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11beb239 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11beb23b je 0x11beb272 */
  if (C.zf) goto L_11beb272;
  /* 11beb23d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb243 mov al, byte ptr [edx + 0x11c11ee1] */
  AL = (r8((uint32_t)(EDX + 0x11c11ee1)));
  /* 11beb249 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11beb24b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb251 mov byte ptr [ecx + 0x11c11ee1], al */
  w8((uint32_t)(ECX + 0x11c11ee1), (AL));
  /* 11beb257 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb25d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb263 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11beb26a mov byte ptr [edx + 0x11c11de0], cl */
  w8((uint32_t)(EDX + 0x11c11de0), (CL));
  /* 11beb270 jmp 0x11beb27f */
  goto L_11beb27f;
L_11beb272:;
  /* 11beb272 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb278 mov byte ptr [edx + 0x11c11de0], 0 */
  w8((uint32_t)(EDX + 0x11c11de0), (0x0u));
L_11beb27f:;
  /* 11beb27f jmp 0x11beb1ba */
  goto L_11beb1ba;
L_11beb284:;
  /* 11beb284 jmp 0x11beb34e */
  goto L_11beb34e;
L_11beb289:;
  /* 11beb289 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11beb293 jmp 0x11beb2a4 */
  goto L_11beb2a4;
L_11beb295:;
  /* 11beb295 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb29b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb29e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11beb2a4:;
  /* 11beb2a4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb2ae jae 0x11beb34e */
  if (!C.cf) goto L_11beb34e;
  /* 11beb2b4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb2bb jb 0x11beb2f8 */
  if (C.cf) goto L_11beb2f8;
  /* 11beb2bd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb2c4 ja 0x11beb2f8 */
  if ((!C.cf&&!C.zf)) goto L_11beb2f8;
  /* 11beb2c6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb2cc mov dl, byte ptr [ecx + 0x11c11ee1] */
  DL = (r8((uint32_t)(ECX + 0x11c11ee1)));
  /* 11beb2d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11beb2d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb2db mov byte ptr [eax + 0x11c11ee1], dl */
  w8((uint32_t)(EAX + 0x11c11ee1), (DL));
  /* 11beb2e1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb2e7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb2ea mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb2f0 mov byte ptr [edx + 0x11c11de0], cl */
  w8((uint32_t)(EDX + 0x11c11de0), (CL));
  /* 11beb2f6 jmp 0x11beb349 */
  goto L_11beb349;
L_11beb2f8:;
  /* 11beb2f8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb2ff jb 0x11beb33c */
  if (C.cf) goto L_11beb33c;
  /* 11beb301 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb308 ja 0x11beb33c */
  if ((!C.cf&&!C.zf)) goto L_11beb33c;
  /* 11beb30a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb310 mov cl, byte ptr [eax + 0x11c11ee1] */
  CL = (r8((uint32_t)(EAX + 0x11c11ee1)));
  /* 11beb316 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11beb319 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb31f mov byte ptr [edx + 0x11c11ee1], cl */
  w8((uint32_t)(EDX + 0x11c11ee1), (CL));
  /* 11beb325 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb32b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb32e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb334 mov byte ptr [ecx + 0x11c11de0], al */
  w8((uint32_t)(ECX + 0x11c11de0), (AL));
  /* 11beb33a jmp 0x11beb349 */
  goto L_11beb349;
L_11beb33c:;
  /* 11beb33c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11beb342 mov byte ptr [edx + 0x11c11de0], 0 */
  w8((uint32_t)(EDX + 0x11c11de0), (0x0u));
L_11beb349:;
  /* 11beb349 jmp 0x11beb295 */
  goto L_11beb295;
L_11beb34e:;
  /* 11beb34e mov esp, ebp */
  ESP = (EBP);
  /* 11beb350 pop ebp */
  EBP = (pop32());
  /* 11beb351 ret  */
  ESPCHK(0x11beb050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b360 @ 0x11beb360 (23 bytes, 9 insns) */
void f_11beb360(void) {
  FTRACE(0x11beb360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beb360 push ebp */
  push32((uint32_t)(EBP));
  /* 11beb361 mov ebp, esp */
  EBP = (ESP);
  /* 11beb363 cmp dword ptr [0x11c11dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c11dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb36a je 0x11beb373 */
  if (C.zf) goto L_11beb373;
  /* 11beb36c mov eax, dword ptr [0x11c11d44] */
  EAX = (r32((uint32_t)(0x11c11d44)));
  /* 11beb371 jmp 0x11beb375 */
  goto L_11beb375;
L_11beb373:;
  /* 11beb373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11beb375:;
  /* 11beb375 pop ebp */
  EBP = (pop32());
  /* 11beb376 ret  */
  ESPCHK(0x11beb360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b380 @ 0x11beb380 (34 bytes, 10 insns) */
void f_11beb380(void) {
  FTRACE(0x11beb380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beb380 push ebp */
  push32((uint32_t)(EBP));
  /* 11beb381 mov ebp, esp */
  EBP = (ESP);
  /* 11beb383 cmp dword ptr [0x11c12190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb38a jne 0x11beb3a0 */
  if (!C.zf) goto L_11beb3a0;
  /* 11beb38c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11beb38e call 0x11beaba0 */
  push32(0x11beb393u); f_11beaba0();
  /* 11beb393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb396 mov dword ptr [0x11c12190], 1 */
  w32((uint32_t)(0x11c12190), (0x1u));
L_11beb3a0:;
  /* 11beb3a0 pop ebp */
  EBP = (pop32());
  /* 11beb3a1 ret  */
  ESPCHK(0x11beb380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3b0 @ 0x11beb3b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11beb3b0(void) {
  FTRACE(0x11beb3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beb3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beb3b1 mov ebp, esp */
  EBP = (ESP);
  /* 11beb3b3 push edi */
  push32((uint32_t)(EDI));
  /* 11beb3b4 push esi */
  push32((uint32_t)(ESI));
  /* 11beb3b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11beb3b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11beb3bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb3be mov eax, ecx */
  EAX = (ECX);
  /* 11beb3c0 mov edx, ecx */
  EDX = (ECX);
  /* 11beb3c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb3c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb3c6 jbe 0x11beb3d0 */
  if ((C.cf||C.zf)) goto L_11beb3d0;
  /* 11beb3c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb3ca jb 0x11beb548 */
  if (C.cf) goto L_11beb548;
L_11beb3d0:;
  /* 11beb3d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11beb3d6 jne 0x11beb3ec */
  if (!C.zf) goto L_11beb3ec;
  /* 11beb3d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb3db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11beb3de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb3e1 jb 0x11beb40c */
  if (C.cf) goto L_11beb40c;
  /* 11beb3e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb3e5 jmp dword ptr [edx*4 + 0x11beb4f8] */
  switch (EDX) {
    case 0: goto L_11beb508;
    case 1: goto L_11beb510;
    case 2: goto L_11beb51c;
    case 3: goto L_11beb530;
    default: x86_unimpl("switch@0x11beb3e5 out of table"); return;
  }
L_11beb3ec:;
  /* 11beb3ec mov eax, edi */
  EAX = (EDI);
  /* 11beb3ee mov edx, 3 */
  EDX = (0x3u);
  /* 11beb3f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb3f6 jb 0x11beb404 */
  if (C.cf) goto L_11beb404;
  /* 11beb3f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11beb3fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb3fd jmp dword ptr [eax*4 + 0x11beb410] */
  switch (EAX) {
    case 1: goto L_11beb420;
    case 2: goto L_11beb44c;
    case 3: goto L_11beb470;
    default: x86_unimpl("switch@0x11beb3fd out of table"); return;
  }
L_11beb404:;
  /* 11beb404 jmp dword ptr [ecx*4 + 0x11beb508] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11beb508)))); return;
  /* 11beb40b nop  */
  /* nop */
L_11beb40c:;
  /* 11beb40c jmp dword ptr [ecx*4 + 0x11beb48c] */
  switch (ECX) {
    case 0: goto L_11beb4ef;
    case 1: goto L_11beb4dc;
    case 2: goto L_11beb4d4;
    case 3: goto L_11beb4cc;
    case 4: goto L_11beb4c4;
    case 5: goto L_11beb4bc;
    case 6: goto L_11beb4b4;
    case 7: goto L_11beb4ac;
    default: x86_unimpl("switch@0x11beb40c out of table"); return;
  }
  /* 11beb413 nop  */
  /* nop */
L_11beb420:;
  /* 11beb420 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb422 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beb424 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beb426 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beb429 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beb42c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beb42f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb432 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beb435 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb438 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb43b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb43e jb 0x11beb40c */
  if (C.cf) goto L_11beb40c;
  /* 11beb440 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb442 jmp dword ptr [edx*4 + 0x11beb4f8] */
  switch (EDX) {
    case 0: goto L_11beb508;
    case 1: goto L_11beb510;
    case 2: goto L_11beb51c;
    case 3: goto L_11beb530;
    default: x86_unimpl("switch@0x11beb442 out of table"); return;
  }
  /* 11beb449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beb44c:;
  /* 11beb44c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb44e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beb450 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beb452 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beb455 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb458 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beb45b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb45e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb461 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb464 jb 0x11beb40c */
  if (C.cf) goto L_11beb40c;
  /* 11beb466 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb468 jmp dword ptr [edx*4 + 0x11beb4f8] */
  switch (EDX) {
    case 0: goto L_11beb508;
    case 1: goto L_11beb510;
    case 2: goto L_11beb51c;
    case 3: goto L_11beb530;
    default: x86_unimpl("switch@0x11beb468 out of table"); return;
  }
  /* 11beb46f nop  */
  /* nop */
L_11beb470:;
  /* 11beb470 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb472 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beb474 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beb476 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11beb477 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb47a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11beb47b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb47e jb 0x11beb40c */
  if (C.cf) goto L_11beb40c;
  /* 11beb480 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb482 jmp dword ptr [edx*4 + 0x11beb4f8] */
  switch (EDX) {
    case 0: goto L_11beb508;
    case 1: goto L_11beb510;
    case 2: goto L_11beb51c;
    case 3: goto L_11beb530;
    default: x86_unimpl("switch@0x11beb482 out of table"); return;
  }
  /* 11beb489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beb4ac:;
  /* 11beb4ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11beb4b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11beb4b4:;
  /* 11beb4b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11beb4b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11beb4bc:;
  /* 11beb4bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11beb4c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11beb4c4:;
  /* 11beb4c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11beb4c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11beb4cc:;
  /* 11beb4cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11beb4d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11beb4d4:;
  /* 11beb4d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11beb4d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11beb4dc:;
  /* 11beb4dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11beb4e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11beb4e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11beb4eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb4ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11beb4ef:;
  /* 11beb4ef jmp dword ptr [edx*4 + 0x11beb4f8] */
  switch (EDX) {
    case 0: goto L_11beb508;
    case 1: goto L_11beb510;
    case 2: goto L_11beb51c;
    case 3: goto L_11beb530;
    default: x86_unimpl("switch@0x11beb4ef out of table"); return;
  }
  /* 11beb4f6 mov edi, edi */
  EDI = (EDI);
L_11beb508:;
  /* 11beb508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb50b pop esi */
  ESI = (pop32());
  /* 11beb50c pop edi */
  EDI = (pop32());
  /* 11beb50d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb50e ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
  /* 11beb50f nop  */
  /* nop */
L_11beb510:;
  /* 11beb510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beb512 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beb514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb517 pop esi */
  ESI = (pop32());
  /* 11beb518 pop edi */
  EDI = (pop32());
  /* 11beb519 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb51a ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
  /* 11beb51b nop  */
  /* nop */
L_11beb51c:;
  /* 11beb51c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beb51e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beb520 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beb523 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beb526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb529 pop esi */
  ESI = (pop32());
  /* 11beb52a pop edi */
  EDI = (pop32());
  /* 11beb52b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb52c ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
  /* 11beb52d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beb530:;
  /* 11beb530 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beb532 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beb534 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beb537 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beb53a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beb53d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beb540 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb543 pop esi */
  ESI = (pop32());
  /* 11beb544 pop edi */
  EDI = (pop32());
  /* 11beb545 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb546 ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
  /* 11beb547 nop  */
  /* nop */
L_11beb548:;
  /* 11beb548 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11beb54c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11beb550 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11beb556 jne 0x11beb57c */
  if (!C.zf) goto L_11beb57c;
  /* 11beb558 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb55b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11beb55e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb561 jb 0x11beb570 */
  if (C.cf) goto L_11beb570;
  /* 11beb563 std  */
  C.df=1;
  /* 11beb564 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb566 cld  */
  C.df=0;
  /* 11beb567 jmp dword ptr [edx*4 + 0x11beb690] */
  switch (EDX) {
    case 0: goto L_11beb6a0;
    case 1: goto L_11beb6a8;
    case 2: goto L_11beb6b8;
    case 3: goto L_11beb6cc;
    default: x86_unimpl("switch@0x11beb567 out of table"); return;
  }
  /* 11beb56e mov edi, edi */
  EDI = (EDI);
L_11beb570:;
  /* 11beb570 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11beb572 jmp dword ptr [ecx*4 + 0x11beb640] */
  switch (ECX) {
    case 0: goto L_11beb687;
    default: x86_unimpl("switch@0x11beb572 out of table"); return;
  }
  /* 11beb579 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beb57c:;
  /* 11beb57c mov eax, edi */
  EAX = (EDI);
  /* 11beb57e mov edx, 3 */
  EDX = (0x3u);
  /* 11beb583 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb586 jb 0x11beb594 */
  if (C.cf) goto L_11beb594;
  /* 11beb588 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11beb58b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb58d jmp dword ptr [eax*4 + 0x11beb598] */
  switch (EAX) {
    case 1: goto L_11beb5a8;
    case 2: goto L_11beb5c8;
    case 3: goto L_11beb5f0;
    default: x86_unimpl("switch@0x11beb58d out of table"); return;
  }
L_11beb594:;
  /* 11beb594 jmp dword ptr [ecx*4 + 0x11beb690] */
  switch (ECX) {
    case 0: goto L_11beb6a0;
    case 1: goto L_11beb6a8;
    case 2: goto L_11beb6b8;
    case 3: goto L_11beb6cc;
    default: x86_unimpl("switch@0x11beb594 out of table"); return;
  }
  /* 11beb59b nop  */
  /* nop */
L_11beb5a8:;
  /* 11beb5a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beb5ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb5ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beb5b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11beb5b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb5b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11beb5b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb5b8 jb 0x11beb570 */
  if (C.cf) goto L_11beb570;
  /* 11beb5ba std  */
  C.df=1;
  /* 11beb5bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb5bd cld  */
  C.df=0;
  /* 11beb5be jmp dword ptr [edx*4 + 0x11beb690] */
  switch (EDX) {
    case 0: goto L_11beb6a0;
    case 1: goto L_11beb6a8;
    case 2: goto L_11beb6b8;
    case 3: goto L_11beb6cc;
    default: x86_unimpl("switch@0x11beb5be out of table"); return;
  }
  /* 11beb5c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beb5c8:;
  /* 11beb5c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beb5cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb5cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beb5d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beb5d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb5d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beb5d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb5dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb5df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb5e2 jb 0x11beb570 */
  if (C.cf) goto L_11beb570;
  /* 11beb5e4 std  */
  C.df=1;
  /* 11beb5e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb5e7 cld  */
  C.df=0;
  /* 11beb5e8 jmp dword ptr [edx*4 + 0x11beb690] */
  switch (EDX) {
    case 0: goto L_11beb6a0;
    case 1: goto L_11beb6a8;
    case 2: goto L_11beb6b8;
    case 3: goto L_11beb6cc;
    default: x86_unimpl("switch@0x11beb5e8 out of table"); return;
  }
  /* 11beb5ef nop  */
  /* nop */
L_11beb5f0:;
  /* 11beb5f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beb5f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb5f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beb5f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beb5fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beb5fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beb601 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beb604 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beb607 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb60a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb60d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb610 jb 0x11beb570 */
  if (C.cf) goto L_11beb570;
  /* 11beb616 std  */
  C.df=1;
  /* 11beb617 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beb619 cld  */
  C.df=0;
  /* 11beb61a jmp dword ptr [edx*4 + 0x11beb690] */
  switch (EDX) {
    case 0: goto L_11beb6a0;
    case 1: goto L_11beb6a8;
    case 2: goto L_11beb6b8;
    case 3: goto L_11beb6cc;
    default: x86_unimpl("switch@0x11beb61a out of table"); return;
  }
  /* 11beb621 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11beb624 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11beb625 mov dh, 0xbe */
  C.d.b.h = (0xbeu);
  /* 11beb627 adc dword ptr [esi + esi*4 - 0x42], ecx */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*4 + -0x42))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*4 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11beb62b adc dword ptr [esi + esi*4 - 0x42], edx */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*4 + -0x42))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*4 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11beb62f adc dword ptr [esi + esi*4 - 0x42], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*4 + -0x42))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*4 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11beb633 adc dword ptr [esi + esi*4 - 0x42], esp */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*4 + -0x42))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*4 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11beb637 adc dword ptr [esi + esi*4 - 0x42], ebp */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*4 + -0x42))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*4 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11beb63b adc dword ptr [esi + esi*4 - 0x42], esi */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*4 + -0x42))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*4 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11beb644 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11beb648 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11beb64c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11beb650 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11beb654 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11beb658 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11beb65c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11beb660 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11beb664 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11beb668 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11beb66c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11beb670 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11beb674 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11beb678 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11beb67c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11beb683 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb685 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11beb687:;
  /* 11beb687 jmp dword ptr [edx*4 + 0x11beb690] */
  switch (EDX) {
    case 0: goto L_11beb6a0;
    case 1: goto L_11beb6a8;
    case 2: goto L_11beb6b8;
    case 3: goto L_11beb6cc;
    default: x86_unimpl("switch@0x11beb687 out of table"); return;
  }
  /* 11beb68e mov edi, edi */
  EDI = (EDI);
L_11beb6a0:;
  /* 11beb6a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb6a3 pop esi */
  ESI = (pop32());
  /* 11beb6a4 pop edi */
  EDI = (pop32());
  /* 11beb6a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb6a6 ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
  /* 11beb6a7 nop  */
  /* nop */
L_11beb6a8:;
  /* 11beb6a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beb6ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beb6ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb6b1 pop esi */
  ESI = (pop32());
  /* 11beb6b2 pop edi */
  EDI = (pop32());
  /* 11beb6b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb6b4 ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
  /* 11beb6b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beb6b8:;
  /* 11beb6b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beb6bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beb6be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beb6c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beb6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb6c7 pop esi */
  ESI = (pop32());
  /* 11beb6c8 pop edi */
  EDI = (pop32());
  /* 11beb6c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb6ca ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
  /* 11beb6cb nop  */
  /* nop */
L_11beb6cc:;
  /* 11beb6cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beb6cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beb6d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beb6d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beb6d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beb6db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beb6de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beb6e1 pop esi */
  ESI = (pop32());
  /* 11beb6e2 pop edi */
  EDI = (pop32());
  /* 11beb6e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beb6e4 ret  */
  ESPCHK(0x11beb3b0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11beb6f0 (104 bytes, 43 insns) */
void f_11beb6f0(void) {
  FTRACE(0x11beb6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beb6f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11beb6f1 push esi */
  push32((uint32_t)(ESI));
  /* 11beb6f2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11beb6f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beb6f8 jne 0x11beb712 */
  if (!C.zf) goto L_11beb712;
  /* 11beb6fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11beb6fe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11beb702 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb704 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11beb706 mov ebx, eax */
  EBX = (EAX);
  /* 11beb708 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11beb70c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11beb70e mov edx, ebx */
  EDX = (EBX);
  /* 11beb710 jmp 0x11beb753 */
  goto L_11beb753;
L_11beb712:;
  /* 11beb712 mov ecx, eax */
  ECX = (EAX);
  /* 11beb714 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11beb718 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11beb71c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11beb720:;
  /* 11beb720 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11beb722 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11beb724 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11beb726 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11beb728 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beb72a jne 0x11beb720 */
  if (!C.zf) goto L_11beb720;
  /* 11beb72c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11beb72e mov esi, eax */
  ESI = (EAX);
  /* 11beb730 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11beb734 mov ecx, eax */
  ECX = (EAX);
  /* 11beb736 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11beb73a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11beb73c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb73e jb 0x11beb74e */
  if (C.cf) goto L_11beb74e;
  /* 11beb740 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb744 ja 0x11beb74e */
  if ((!C.cf&&!C.zf)) goto L_11beb74e;
  /* 11beb746 jb 0x11beb74f */
  if (C.cf) goto L_11beb74f;
  /* 11beb748 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb74c jbe 0x11beb74f */
  if ((C.cf||C.zf)) goto L_11beb74f;
L_11beb74e:;
  /* 11beb74e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11beb74f:;
  /* 11beb74f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb751 mov eax, esi */
  EAX = (ESI);
L_11beb753:;
  /* 11beb753 pop esi */
  ESI = (pop32());
  /* 11beb754 pop ebx */
  EBX = (pop32());
  /* 11beb755 ret 0x10 */
  ESPCHK(0x11beb6f0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11beb760 (117 bytes, 44 insns) */
void f_11beb760(void) {
  FTRACE(0x11beb760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beb760 push ebx */
  push32((uint32_t)(EBX));
  /* 11beb761 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11beb765 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beb767 jne 0x11beb781 */
  if (!C.zf) goto L_11beb781;
  /* 11beb769 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11beb76d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11beb771 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb773 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11beb775 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11beb779 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11beb77b mov eax, edx */
  EAX = (EDX);
  /* 11beb77d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11beb77f jmp 0x11beb7d1 */
  goto L_11beb7d1;
L_11beb781:;
  /* 11beb781 mov ecx, eax */
  ECX = (EAX);
  /* 11beb783 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11beb787 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11beb78b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11beb78f:;
  /* 11beb78f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11beb791 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11beb793 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11beb795 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11beb797 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beb799 jne 0x11beb78f */
  if (!C.zf) goto L_11beb78f;
  /* 11beb79b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11beb79d mov ecx, eax */
  ECX = (EAX);
  /* 11beb79f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11beb7a3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11beb7a4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11beb7a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb7aa jb 0x11beb7ba */
  if (C.cf) goto L_11beb7ba;
  /* 11beb7ac cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb7b0 ja 0x11beb7ba */
  if ((!C.cf&&!C.zf)) goto L_11beb7ba;
  /* 11beb7b2 jb 0x11beb7c2 */
  if (C.cf) goto L_11beb7c2;
  /* 11beb7b4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb7b8 jbe 0x11beb7c2 */
  if ((C.cf||C.zf)) goto L_11beb7c2;
L_11beb7ba:;
  /* 11beb7ba sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb7be sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11beb7c2:;
  /* 11beb7c2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb7c6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb7ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11beb7cc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11beb7ce sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11beb7d1:;
  /* 11beb7d1 pop ebx */
  EBX = (pop32());
  /* 11beb7d2 ret 0x10 */
  ESPCHK(0x11beb760u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b7e0 @ 0x11beb7e0 (628 bytes, 214 insns) */
void f_11beb7e0(void) {
  FTRACE(0x11beb7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beb7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beb7e1 mov ebp, esp */
  EBP = (ESP);
  /* 11beb7e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb7e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11beb7e7 push esi */
  push32((uint32_t)(ESI));
  /* 11beb7e8 push edi */
  push32((uint32_t)(EDI));
L_11beb7e9:;
  /* 11beb7e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb7ed jne 0x11beb80d */
  if (!C.zf) goto L_11beb80d;
  /* 11beb7ef push 0x11c0c0cc */
  push32((uint32_t)(0x11c0c0ccu));
  /* 11beb7f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beb7f6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11beb7f8 push 0x11c0c0c0 */
  push32((uint32_t)(0x11c0c0c0u));
  /* 11beb7fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11beb7ff call 0x11be3b90 */
  push32(0x11beb804u); f_11be3b90();
  /* 11beb804 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb80a jne 0x11beb80d */
  if (!C.zf) goto L_11beb80d;
  /* 11beb80c int3  */
  x86_unimpl("int3 @ 0x11beb80c");
L_11beb80d:;
  /* 11beb80d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beb80f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beb811 jne 0x11beb7e9 */
  if (!C.zf) goto L_11beb7e9;
  /* 11beb813 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beb816 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11beb819 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb81c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11beb81f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11beb822 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb825 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11beb828 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11beb82e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beb830 je 0x11beb83f */
  if (C.zf) goto L_11beb83f;
  /* 11beb832 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb835 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11beb838 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11beb83b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11beb83d je 0x11beb855 */
  if (C.zf) goto L_11beb855;
L_11beb83f:;
  /* 11beb83f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb842 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11beb845 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11beb847 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb84a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11beb84d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beb850 jmp 0x11beba4d */
  goto L_11beba4d;
L_11beb855:;
  /* 11beb855 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb858 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11beb85b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11beb85e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beb860 je 0x11beb8ac */
  if (C.zf) goto L_11beb8ac;
  /* 11beb862 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb865 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11beb86c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb86f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11beb872 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11beb875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beb877 je 0x11beb895 */
  if (C.zf) goto L_11beb895;
  /* 11beb879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb87c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb87f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11beb882 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11beb884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb887 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11beb88a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11beb88d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb890 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11beb893 jmp 0x11beb8ac */
  goto L_11beb8ac;
L_11beb895:;
  /* 11beb895 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb898 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11beb89b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11beb89e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb8a1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11beb8a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beb8a7 jmp 0x11beba4d */
  goto L_11beba4d;
L_11beb8ac:;
  /* 11beb8ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb8af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11beb8b2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11beb8b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb8b8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11beb8bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb8be mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11beb8c1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11beb8c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb8c7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11beb8ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb8cd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11beb8d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11beb8db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb8de mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11beb8e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb8e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11beb8e7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11beb8ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11beb8ef jne 0x11beb91f */
  if (!C.zf) goto L_11beb91f;
  /* 11beb8f1 cmp dword ptr [ebp - 8], 0x11c0f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11c0f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb8f8 je 0x11beb903 */
  if (C.zf) goto L_11beb903;
  /* 11beb8fa cmp dword ptr [ebp - 8], 0x11c0f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11c0f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb901 jne 0x11beb913 */
  if (!C.zf) goto L_11beb913;
L_11beb903:;
  /* 11beb903 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11beb906 push edx */
  push32((uint32_t)(EDX));
  /* 11beb907 call 0x11bed750 */
  push32(0x11beb90cu); f_11bed750();
  /* 11beb90c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb90f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beb911 jne 0x11beb91f */
  if (!C.zf) goto L_11beb91f;
L_11beb913:;
  /* 11beb913 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb916 push eax */
  push32((uint32_t)(EAX));
  /* 11beb917 call 0x11bed680 */
  push32(0x11beb91cu); f_11bed680();
  /* 11beb91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11beb91f:;
  /* 11beb91f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb922 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11beb925 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11beb92b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beb92d je 0x11beba0b */
  if (C.zf) goto L_11beba0b;
L_11beb933:;
  /* 11beb933 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb936 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb939 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11beb93b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb93e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beb940 jge 0x11beb963 */
  if ((C.sf==C.of)) goto L_11beb963;
  /* 11beb942 push 0x11c0c080 */
  push32((uint32_t)(0x11c0c080u));
  /* 11beb947 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beb949 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11beb94e push 0x11c0c0c0 */
  push32((uint32_t)(0x11c0c0c0u));
  /* 11beb953 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beb955 call 0x11be3b90 */
  push32(0x11beb95au); f_11be3b90();
  /* 11beb95a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb95d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb960 jne 0x11beb963 */
  if (!C.zf) goto L_11beb963;
  /* 11beb962 int3  */
  x86_unimpl("int3 @ 0x11beb962");
L_11beb963:;
  /* 11beb963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beb965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beb967 jne 0x11beb933 */
  if (!C.zf) goto L_11beb933;
  /* 11beb969 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb96c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb96f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11beb971 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb974 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11beb977 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb97a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11beb97d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb980 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb983 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11beb985 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb988 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11beb98b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beb98e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb991 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11beb994 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb998 jle 0x11beb9b6 */
  if ((C.zf||C.sf!=C.of)) goto L_11beb9b6;
  /* 11beb99a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beb99d push ecx */
  push32((uint32_t)(ECX));
  /* 11beb99e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beb9a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11beb9a4 push eax */
  push32((uint32_t)(EAX));
  /* 11beb9a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11beb9a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11beb9a9 call 0x11bed370 */
  push32(0x11beb9aeu); f_11bed370();
  /* 11beb9ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb9b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11beb9b4 jmp 0x11beb9fe */
  goto L_11beb9fe;
L_11beb9b6:;
  /* 11beb9b6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beb9ba je 0x11beb9d9 */
  if (C.zf) goto L_11beb9d9;
  /* 11beb9bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11beb9bf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11beb9c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11beb9c5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11beb9c8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beb9cb mov ecx, dword ptr [edx*4 + 0x11c12040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11beb9d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beb9d4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11beb9d7 jmp 0x11beb9e0 */
  goto L_11beb9e0;
L_11beb9d9:;
  /* 11beb9d9 mov dword ptr [ebp - 0x14], 0x11c0ea60 */
  w32((uint32_t)(EBP + -0x14), (0x11c0ea60u));
L_11beb9e0:;
  /* 11beb9e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11beb9e3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11beb9e7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11beb9ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beb9ec je 0x11beb9fe */
  if (C.zf) goto L_11beb9fe;
  /* 11beb9ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11beb9f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beb9f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11beb9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11beb9f6 call 0x11bed220 */
  push32(0x11beb9fbu); f_11bed220();
  /* 11beb9fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11beb9fe:;
  /* 11beb9fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beba01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11beba04 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11beba07 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11beba09 jmp 0x11beba29 */
  goto L_11beba29;
L_11beba0b:;
  /* 11beba0b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11beba12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beba15 push edx */
  push32((uint32_t)(EDX));
  /* 11beba16 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11beba19 push eax */
  push32((uint32_t)(EAX));
  /* 11beba1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11beba1d push ecx */
  push32((uint32_t)(ECX));
  /* 11beba1e call 0x11bed370 */
  push32(0x11beba23u); f_11bed370();
  /* 11beba23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beba26 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11beba29:;
  /* 11beba29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beba2c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beba2f je 0x11beba45 */
  if (C.zf) goto L_11beba45;
  /* 11beba31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beba34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11beba37 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11beba3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beba3d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11beba40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beba43 jmp 0x11beba4d */
  goto L_11beba4d;
L_11beba45:;
  /* 11beba45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beba48 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11beba4d:;
  /* 11beba4d pop edi */
  EDI = (pop32());
  /* 11beba4e pop esi */
  ESI = (pop32());
  /* 11beba4f pop ebx */
  EBX = (pop32());
  /* 11beba50 mov esp, ebp */
  ESP = (EBP);
  /* 11beba52 pop ebp */
  EBP = (pop32());
  /* 11beba53 ret  */
  ESPCHK(0x11beb7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba60 @ 0x11beba60 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11beba60(void) {
  FTRACE(0x11beba60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beba60 push ebp */
  push32((uint32_t)(EBP));
  /* 11beba61 mov ebp, esp */
  EBP = (ESP);
  /* 11beba63 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beba69 push ebx */
  push32((uint32_t)(EBX));
  /* 11beba6a push esi */
  push32((uint32_t)(ESI));
  /* 11beba6b push edi */
  push32((uint32_t)(EDI));
  /* 11beba6c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11beba73 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11beba7d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11beba84:;
  /* 11beba84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beba87 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11beba89 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11beba8c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11beba90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beba93 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beba96 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11beba99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beba9b je 0x11bec677 */
  if (C.zf) goto L_11bec677;
  /* 11bebaa1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebaa8 jl 0x11bec677 */
  if ((C.sf!=C.of)) goto L_11bec677;
  /* 11bebaae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebab2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebab5 jl 0x11bebad6 */
  if ((C.sf!=C.of)) goto L_11bebad6;
  /* 11bebab7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebabb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebabe jg 0x11bebad6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bebad6;
  /* 11bebac0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebac4 movsx ecx, byte ptr [eax + 0x11c0c0b8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11c0c0b8))));
  /* 11bebacb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11bebace mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11bebad4 jmp 0x11bebae0 */
  goto L_11bebae0;
L_11bebad6:;
  /* 11bebad6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11bebae0:;
  /* 11bebae0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11bebae6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11bebae9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bebaec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bebaef movsx edx, byte ptr [ecx + eax*8 + 0x11c0c0d8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11c0c0d8))));
  /* 11bebaf7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11bebafa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bebafd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bebb00 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11bebb06 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebb0d ja 0x11bec672 */
  if ((!C.cf&&!C.zf)) goto L_11bec672;
  /* 11bebb13 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11bebb19 jmp dword ptr [ecx*4 + 0x11bec684] */
  switch (ECX) {
    case 0: goto L_11bebb20;
    case 1: goto L_11bebbba;
    case 2: goto L_11bebbfc;
    case 3: goto L_11bebc6b;
    case 4: goto L_11bebcc3;
    case 5: goto L_11bebcd2;
    case 6: goto L_11bebd1e;
    case 7: goto L_11bebdb1;
    case 8: goto L_11bebc48;
    case 9: goto L_11bebc53;
    case 10: goto L_11bebc3e;
    case 11: goto L_11bebc33;
    case 12: goto L_11bebc5e;
    case 13: goto L_11bebc66;
    default: x86_unimpl("switch@0x11bebb19 out of table"); return;
  }
L_11bebb20:;
  /* 11bebb20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11bebb27 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bebb2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bebb30 mov eax, dword ptr [0x11c0ec98] */
  EAX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bebb35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bebb37 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11bebb3b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11bebb41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bebb43 je 0x11bebb9d */
  if (C.zf) goto L_11bebb9d;
  /* 11bebb45 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11bebb4b push edx */
  push32((uint32_t)(EDX));
  /* 11bebb4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bebb4f push eax */
  push32((uint32_t)(EAX));
  /* 11bebb50 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebb54 push ecx */
  push32((uint32_t)(ECX));
  /* 11bebb55 call 0x11bec790 */
  push32(0x11bebb5au); f_11bec790();
  /* 11bebb5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebb5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bebb60 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bebb62 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11bebb65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bebb68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebb6b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11bebb6e:;
  /* 11bebb6e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebb72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bebb74 jne 0x11bebb97 */
  if (!C.zf) goto L_11bebb97;
  /* 11bebb76 push 0x11c0c158 */
  push32((uint32_t)(0x11c0c158u));
  /* 11bebb7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11bebb7d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11bebb82 push 0x11c0c14c */
  push32((uint32_t)(0x11c0c14cu));
  /* 11bebb87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bebb89 call 0x11be3b90 */
  push32(0x11bebb8eu); f_11be3b90();
  /* 11bebb8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebb91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebb94 jne 0x11bebb97 */
  if (!C.zf) goto L_11bebb97;
  /* 11bebb96 int3  */
  x86_unimpl("int3 @ 0x11bebb96");
L_11bebb97:;
  /* 11bebb97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bebb99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bebb9b jne 0x11bebb6e */
  if (!C.zf) goto L_11bebb6e;
L_11bebb9d:;
  /* 11bebb9d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11bebba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bebba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bebba7 push edx */
  push32((uint32_t)(EDX));
  /* 11bebba8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebbac push eax */
  push32((uint32_t)(EAX));
  /* 11bebbad call 0x11bec790 */
  push32(0x11bebbb2u); f_11bec790();
  /* 11bebbb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebbb5 jmp 0x11bec672 */
  goto L_11bec672;
L_11bebbba:;
  /* 11bebbba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bebbc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bebbc4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11bebbca mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11bebbd0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11bebbd6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11bebbdc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11bebbdf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bebbe6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11bebbf0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11bebbf7 jmp 0x11bec672 */
  goto L_11bec672;
L_11bebbfc:;
  /* 11bebbfc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebc00 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11bebc06 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11bebc0c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bebc0f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11bebc15 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebc1c ja 0x11bebc66 */
  if ((!C.cf&&!C.zf)) goto L_11bebc66;
  /* 11bebc1e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11bebc24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bebc26 mov al, byte ptr [ecx + 0x11bec6bc] */
  AL = (r8((uint32_t)(ECX + 0x11bec6bc)));
  /* 11bebc2c jmp dword ptr [eax*4 + 0x11bec6a4] */
  switch (EAX) {
    case 0: goto L_11bebc48;
    case 1: goto L_11bebc53;
    case 2: goto L_11bebc3e;
    case 3: goto L_11bebc33;
    case 4: goto L_11bebc5e;
    case 5: goto L_11bebc66;
    default: x86_unimpl("switch@0x11bebc2c out of table"); return;
  }
L_11bebc33:;
  /* 11bebc33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebc36 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bebc39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bebc3c jmp 0x11bebc66 */
  goto L_11bebc66;
L_11bebc3e:;
  /* 11bebc3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebc41 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11bebc43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bebc46 jmp 0x11bebc66 */
  goto L_11bebc66;
L_11bebc48:;
  /* 11bebc48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebc4b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11bebc4e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bebc51 jmp 0x11bebc66 */
  goto L_11bebc66;
L_11bebc53:;
  /* 11bebc53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebc56 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11bebc59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bebc5c jmp 0x11bebc66 */
  goto L_11bebc66;
L_11bebc5e:;
  /* 11bebc5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebc61 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11bebc63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bebc66:;
  /* 11bebc66 jmp 0x11bec672 */
  goto L_11bec672;
L_11bebc6b:;
  /* 11bebc6b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebc6f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebc72 jne 0x11bebca7 */
  if (!C.zf) goto L_11bebca7;
  /* 11bebc74 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11bebc77 push edx */
  push32((uint32_t)(EDX));
  /* 11bebc78 call 0x11bec8a0 */
  push32(0x11bebc7du); f_11bec8a0();
  /* 11bebc7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebc80 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11bebc86 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebc8d jge 0x11bebca5 */
  if ((C.sf==C.of)) goto L_11bebca5;
  /* 11bebc8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebc92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11bebc94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bebc97 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11bebc9d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bebc9f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11bebca5:;
  /* 11bebca5 jmp 0x11bebcbe */
  goto L_11bebcbe;
L_11bebca7:;
  /* 11bebca7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11bebcad imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bebcb0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebcb4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11bebcb8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11bebcbe:;
  /* 11bebcbe jmp 0x11bec672 */
  goto L_11bec672;
L_11bebcc3:;
  /* 11bebcc3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11bebccd jmp 0x11bec672 */
  goto L_11bec672;
L_11bebcd2:;
  /* 11bebcd2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebcd6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebcd9 jne 0x11bebd02 */
  if (!C.zf) goto L_11bebd02;
  /* 11bebcdb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11bebcde push eax */
  push32((uint32_t)(EAX));
  /* 11bebcdf call 0x11bec8a0 */
  push32(0x11bebce4u); f_11bec8a0();
  /* 11bebce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebce7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11bebced cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebcf4 jge 0x11bebd00 */
  if ((C.sf==C.of)) goto L_11bebd00;
  /* 11bebcf6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11bebd00:;
  /* 11bebd00 jmp 0x11bebd19 */
  goto L_11bebd19;
L_11bebd02:;
  /* 11bebd02 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11bebd08 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bebd0b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebd0f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11bebd13 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11bebd19:;
  /* 11bebd19 jmp 0x11bec672 */
  goto L_11bec672;
L_11bebd1e:;
  /* 11bebd1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebd22 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11bebd28 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11bebd2e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bebd31 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11bebd37 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebd3e ja 0x11bebdac */
  if ((!C.cf&&!C.zf)) goto L_11bebdac;
  /* 11bebd40 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11bebd46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bebd48 mov al, byte ptr [ecx + 0x11bec6e1] */
  AL = (r8((uint32_t)(ECX + 0x11bec6e1)));
  /* 11bebd4e jmp dword ptr [eax*4 + 0x11bec6cd] */
  switch (EAX) {
    case 0: goto L_11bebd60;
    case 1: goto L_11bebd99;
    case 2: goto L_11bebd55;
    case 3: goto L_11bebda3;
    case 4: goto L_11bebdac;
    default: x86_unimpl("switch@0x11bebd4e out of table"); return;
  }
L_11bebd55:;
  /* 11bebd55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebd58 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11bebd5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bebd5e jmp 0x11bebdac */
  goto L_11bebdac;
L_11bebd60:;
  /* 11bebd60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bebd63 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bebd66 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebd69 jne 0x11bebd8b */
  if (!C.zf) goto L_11bebd8b;
  /* 11bebd6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bebd6e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11bebd72 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebd75 jne 0x11bebd8b */
  if (!C.zf) goto L_11bebd8b;
  /* 11bebd77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bebd7a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebd7d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11bebd80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebd83 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11bebd86 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bebd89 jmp 0x11bebd97 */
  goto L_11bebd97;
L_11bebd8b:;
  /* 11bebd8b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11bebd92 jmp 0x11bebb20 */
  goto L_11bebb20;
L_11bebd97:;
  /* 11bebd97 jmp 0x11bebdac */
  goto L_11bebdac;
L_11bebd99:;
  /* 11bebd99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebd9c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11bebd9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bebda1 jmp 0x11bebdac */
  goto L_11bebdac;
L_11bebda3:;
  /* 11bebda3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebda6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11bebda9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bebdac:;
  /* 11bebdac jmp 0x11bec672 */
  goto L_11bec672;
L_11bebdb1:;
  /* 11bebdb1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bebdb5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11bebdbb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11bebdc1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bebdc4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11bebdca cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebdd1 ja 0x11bec497 */
  if ((!C.cf&&!C.zf)) goto L_11bec497;
  /* 11bebdd7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11bebddd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bebddf mov cl, byte ptr [edx + 0x11bec74c] */
  CL = (r8((uint32_t)(EDX + 0x11bec74c)));
  /* 11bebde5 jmp dword ptr [ecx*4 + 0x11bec710] */
  switch (ECX) {
    case 0: goto L_11bebdec;
    case 1: goto L_11bec080;
    case 2: goto L_11bebf10;
    case 3: goto L_11bec1b9;
    case 4: goto L_11bebe7b;
    case 5: goto L_11bebe01;
    case 6: goto L_11bec18b;
    case 7: goto L_11bec090;
    case 8: goto L_11bec035;
    case 9: goto L_11bec205;
    case 10: goto L_11bec1af;
    case 11: goto L_11bebf26;
    case 12: goto L_11bec1a3;
    case 13: goto L_11bec1c5;
    case 14: goto L_11bec497;
    default: x86_unimpl("switch@0x11bebde5 out of table"); return;
  }
L_11bebdec:;
  /* 11bebdec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebdef and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11bebdf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bebdf6 jne 0x11bebe01 */
  if (!C.zf) goto L_11bebe01;
  /* 11bebdf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebdfb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11bebdfe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bebe01:;
  /* 11bebe01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebe04 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11bebe0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bebe0c je 0x11bebe47 */
  if (C.zf) goto L_11bebe47;
  /* 11bebe0e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11bebe11 push eax */
  push32((uint32_t)(EAX));
  /* 11bebe12 call 0x11bec8e0 */
  push32(0x11bebe17u); f_11bec8e0();
  /* 11bebe17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebe1a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11bebe1e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11bebe22 push ecx */
  push32((uint32_t)(ECX));
  /* 11bebe23 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11bebe29 push edx */
  push32((uint32_t)(EDX));
  /* 11bebe2a call 0x11bed9c0 */
  push32(0x11bebe2fu); f_11bed9c0();
  /* 11bebe2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebe32 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bebe35 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebe39 jge 0x11bebe45 */
  if ((C.sf==C.of)) goto L_11bebe45;
  /* 11bebe3b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11bebe45:;
  /* 11bebe45 jmp 0x11bebe6d */
  goto L_11bebe6d;
L_11bebe47:;
  /* 11bebe47 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11bebe4a push eax */
  push32((uint32_t)(EAX));
  /* 11bebe4b call 0x11bec8a0 */
  push32(0x11bebe50u); f_11bec8a0();
  /* 11bebe50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebe53 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11bebe5a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11bebe60 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11bebe66 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11bebe6d:;
  /* 11bebe6d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11bebe73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11bebe76 jmp 0x11bec497 */
  goto L_11bec497;
L_11bebe7b:;
  /* 11bebe7b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11bebe7e push eax */
  push32((uint32_t)(EAX));
  /* 11bebe7f call 0x11bec8a0 */
  push32(0x11bebe84u); f_11bec8a0();
  /* 11bebe84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebe87 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11bebe8d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebe94 je 0x11bebea2 */
  if (C.zf) goto L_11bebea2;
  /* 11bebe96 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11bebe9c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebea0 jne 0x11bebebc */
  if (!C.zf) goto L_11bebebc;
L_11bebea2:;
  /* 11bebea2 mov edx, dword ptr [0x11c0efb0] */
  EDX = (r32((uint32_t)(0x11c0efb0)));
  /* 11bebea8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11bebeab mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bebeae push eax */
  push32((uint32_t)(EAX));
  /* 11bebeaf call 0x11be7900 */
  push32(0x11bebeb4u); f_11be7900();
  /* 11bebeb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebeb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bebeba jmp 0x11bebf0b */
  goto L_11bebf0b;
L_11bebebc:;
  /* 11bebebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebebf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11bebec5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bebec7 je 0x11bebeec */
  if (C.zf) goto L_11bebeec;
  /* 11bebec9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11bebecf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11bebed2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bebed5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11bebedb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11bebede shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11bebee0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11bebee3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11bebeea jmp 0x11bebf0b */
  goto L_11bebf0b;
L_11bebeec:;
  /* 11bebeec mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11bebef3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11bebef9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bebefc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11bebeff mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11bebf05 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11bebf08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11bebf0b:;
  /* 11bebf0b jmp 0x11bec497 */
  goto L_11bec497;
L_11bebf10:;
  /* 11bebf10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebf13 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11bebf19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bebf1b jne 0x11bebf26 */
  if (!C.zf) goto L_11bebf26;
  /* 11bebf1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebf20 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11bebf23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bebf26:;
  /* 11bebf26 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebf2d jne 0x11bebf3b */
  if (!C.zf) goto L_11bebf3b;
  /* 11bebf2f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11bebf39 jmp 0x11bebf47 */
  goto L_11bebf47;
L_11bebf3b:;
  /* 11bebf3b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11bebf41 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11bebf47:;
  /* 11bebf47 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11bebf4d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11bebf53 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11bebf56 push edx */
  push32((uint32_t)(EDX));
  /* 11bebf57 call 0x11bec8a0 */
  push32(0x11bebf5cu); f_11bec8a0();
  /* 11bebf5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebf5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bebf62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bebf65 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11bebf6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bebf6c je 0x11bebfd6 */
  if (C.zf) goto L_11bebfd6;
  /* 11bebf6e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebf72 jne 0x11bebf7d */
  if (!C.zf) goto L_11bebf7d;
  /* 11bebf74 mov ecx, dword ptr [0x11c0efb4] */
  ECX = (r32((uint32_t)(0x11c0efb4)));
  /* 11bebf7a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11bebf7d:;
  /* 11bebf7d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11bebf84 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bebf87 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11bebf8d:;
  /* 11bebf8d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11bebf93 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11bebf99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bebf9c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11bebfa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bebfa4 je 0x11bebfc6 */
  if (C.zf) goto L_11bebfc6;
  /* 11bebfa6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11bebfac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bebfae mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11bebfb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bebfb3 je 0x11bebfc6 */
  if (C.zf) goto L_11bebfc6;
  /* 11bebfb5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11bebfbb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bebfbe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11bebfc4 jmp 0x11bebf8d */
  goto L_11bebf8d;
L_11bebfc6:;
  /* 11bebfc6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11bebfcc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bebfcf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11bebfd1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11bebfd4 jmp 0x11bec030 */
  goto L_11bec030;
L_11bebfd6:;
  /* 11bebfd6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bebfda jne 0x11bebfe4 */
  if (!C.zf) goto L_11bebfe4;
  /* 11bebfdc mov eax, dword ptr [0x11c0efb0] */
  EAX = (r32((uint32_t)(0x11c0efb0)));
  /* 11bebfe1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11bebfe4:;
  /* 11bebfe4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bebfe7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11bebfed:;
  /* 11bebfed mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11bebff3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11bebff9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bebffc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11bec002 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec004 je 0x11bec024 */
  if (C.zf) goto L_11bec024;
  /* 11bec006 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11bec00c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bec00f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec011 je 0x11bec024 */
  if (C.zf) goto L_11bec024;
  /* 11bec013 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11bec019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec01c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11bec022 jmp 0x11bebfed */
  goto L_11bebfed;
L_11bec024:;
  /* 11bec024 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11bec02a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec02d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11bec030:;
  /* 11bec030 jmp 0x11bec497 */
  goto L_11bec497;
L_11bec035:;
  /* 11bec035 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11bec038 push edx */
  push32((uint32_t)(EDX));
  /* 11bec039 call 0x11bec8a0 */
  push32(0x11bec03eu); f_11bec8a0();
  /* 11bec03e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec041 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11bec047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec04a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec04d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec04f je 0x11bec063 */
  if (C.zf) goto L_11bec063;
  /* 11bec051 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11bec057 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11bec05e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11bec061 jmp 0x11bec071 */
  goto L_11bec071;
L_11bec063:;
  /* 11bec063 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11bec069 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11bec06f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11bec071:;
  /* 11bec071 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11bec07b jmp 0x11bec497 */
  goto L_11bec497;
L_11bec080:;
  /* 11bec080 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11bec087 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11bec08a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bec08d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11bec090:;
  /* 11bec090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec093 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11bec095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bec098 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11bec09e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11bec0a1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec0a8 jge 0x11bec0b6 */
  if ((C.sf==C.of)) goto L_11bec0b6;
  /* 11bec0aa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11bec0b4 jmp 0x11bec0d2 */
  goto L_11bec0d2;
L_11bec0b6:;
  /* 11bec0b6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec0bd jne 0x11bec0d2 */
  if (!C.zf) goto L_11bec0d2;
  /* 11bec0bf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bec0c3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec0c6 jne 0x11bec0d2 */
  if (!C.zf) goto L_11bec0d2;
  /* 11bec0c8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11bec0d2:;
  /* 11bec0d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec0d5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec0d8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11bec0db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec0de sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec0e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bec0e3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bec0e6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11bec0ec mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11bec0f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bec0f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec0f6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11bec0fc push edx */
  push32((uint32_t)(EDX));
  /* 11bec0fd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bec101 push eax */
  push32((uint32_t)(EAX));
  /* 11bec102 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec105 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec106 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11bec10c push edx */
  push32((uint32_t)(EDX));
  /* 11bec10d call dword ptr [0x11c0f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c0f3a0))), 0x11bec113u);
  /* 11bec113 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec119 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec120 je 0x11bec138 */
  if (C.zf) goto L_11bec138;
  /* 11bec122 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec129 jne 0x11bec138 */
  if (!C.zf) goto L_11bec138;
  /* 11bec12b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec12e push ecx */
  push32((uint32_t)(ECX));
  /* 11bec12f call dword ptr [0x11c0f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c0f3ac))), 0x11bec135u);
  /* 11bec135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bec138:;
  /* 11bec138 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11bec13c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec13f jne 0x11bec15a */
  if (!C.zf) goto L_11bec15a;
  /* 11bec141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec144 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec14b jne 0x11bec15a */
  if (!C.zf) goto L_11bec15a;
  /* 11bec14d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec150 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec151 call dword ptr [0x11c0f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c0f3a4))), 0x11bec157u);
  /* 11bec157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bec15a:;
  /* 11bec15a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec15d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bec160 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec163 jne 0x11bec177 */
  if (!C.zf) goto L_11bec177;
  /* 11bec165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec168 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11bec16b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bec16e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec171 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec174 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11bec177:;
  /* 11bec177 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec17a push eax */
  push32((uint32_t)(EAX));
  /* 11bec17b call 0x11be7900 */
  push32(0x11bec180u); f_11be7900();
  /* 11bec180 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec183 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bec186 jmp 0x11bec497 */
  goto L_11bec497;
L_11bec18b:;
  /* 11bec18b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec18e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11bec191 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bec194 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11bec19e jmp 0x11bec225 */
  goto L_11bec225;
L_11bec1a3:;
  /* 11bec1a3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11bec1ad jmp 0x11bec225 */
  goto L_11bec225;
L_11bec1af:;
  /* 11bec1af mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11bec1b9:;
  /* 11bec1b9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11bec1c3 jmp 0x11bec1cf */
  goto L_11bec1cf;
L_11bec1c5:;
  /* 11bec1c5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11bec1cf:;
  /* 11bec1cf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11bec1d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec1dc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec1e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec1e4 je 0x11bec203 */
  if (C.zf) goto L_11bec203;
  /* 11bec1e6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11bec1ed mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11bec1f3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec1f6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11bec1fc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11bec203:;
  /* 11bec203 jmp 0x11bec225 */
  goto L_11bec225;
L_11bec205:;
  /* 11bec205 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11bec20f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec212 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11bec218 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bec21a je 0x11bec225 */
  if (C.zf) goto L_11bec225;
  /* 11bec21c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec21f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11bec222 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bec225:;
  /* 11bec225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec228 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec22d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec22f je 0x11bec24e */
  if (C.zf) goto L_11bec24e;
  /* 11bec231 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11bec234 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec235 call 0x11bec8c0 */
  push32(0x11bec23au); f_11bec8c0();
  /* 11bec23a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec23d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11bec243 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11bec249 jmp 0x11bec2df */
  goto L_11bec2df;
L_11bec24e:;
  /* 11bec24e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec251 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec254 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec256 je 0x11bec2a0 */
  if (C.zf) goto L_11bec2a0;
  /* 11bec258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec25b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec260 je 0x11bec280 */
  if (C.zf) goto L_11bec280;
  /* 11bec262 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11bec265 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec266 call 0x11bec8a0 */
  push32(0x11bec26bu); f_11bec8a0();
  /* 11bec26b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec26e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11bec271 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bec272 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11bec278 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11bec27e jmp 0x11bec29e */
  goto L_11bec29e;
L_11bec280:;
  /* 11bec280 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11bec283 push edx */
  push32((uint32_t)(EDX));
  /* 11bec284 call 0x11bec8a0 */
  push32(0x11bec289u); f_11bec8a0();
  /* 11bec289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec28c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bec291 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bec292 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11bec298 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11bec29e:;
  /* 11bec29e jmp 0x11bec2df */
  goto L_11bec2df;
L_11bec2a0:;
  /* 11bec2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec2a3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec2a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec2a8 je 0x11bec2c5 */
  if (C.zf) goto L_11bec2c5;
  /* 11bec2aa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11bec2ad push ecx */
  push32((uint32_t)(ECX));
  /* 11bec2ae call 0x11bec8a0 */
  push32(0x11bec2b3u); f_11bec8a0();
  /* 11bec2b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec2b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bec2b7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11bec2bd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11bec2c3 jmp 0x11bec2df */
  goto L_11bec2df;
L_11bec2c5:;
  /* 11bec2c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11bec2c8 push edx */
  push32((uint32_t)(EDX));
  /* 11bec2c9 call 0x11bec8a0 */
  push32(0x11bec2ceu); f_11bec8a0();
  /* 11bec2ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec2d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bec2d3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11bec2d9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11bec2df:;
  /* 11bec2df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec2e2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec2e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec2e7 je 0x11bec327 */
  if (C.zf) goto L_11bec327;
  /* 11bec2e9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec2f0 jg 0x11bec327 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bec327;
  /* 11bec2f2 jl 0x11bec2fd */
  if ((C.sf!=C.of)) goto L_11bec2fd;
  /* 11bec2f4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec2fb jae 0x11bec327 */
  if (!C.cf) goto L_11bec327;
L_11bec2fd:;
  /* 11bec2fd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11bec303 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bec305 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11bec30b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec30e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bec310 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11bec316 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11bec31c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec31f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11bec322 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bec325 jmp 0x11bec33f */
  goto L_11bec33f;
L_11bec327:;
  /* 11bec327 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11bec32d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11bec333 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11bec339 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11bec33f:;
  /* 11bec33f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec342 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec348 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec34a jne 0x11bec367 */
  if (!C.zf) goto L_11bec367;
  /* 11bec34c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11bec352 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11bec358 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11bec35b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11bec361 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11bec367:;
  /* 11bec367 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec36e jge 0x11bec37c */
  if ((C.sf==C.of)) goto L_11bec37c;
  /* 11bec370 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11bec37a jmp 0x11bec385 */
  goto L_11bec385;
L_11bec37c:;
  /* 11bec37c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec37f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec382 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bec385:;
  /* 11bec385 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11bec38b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11bec391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec393 jne 0x11bec39c */
  if (!C.zf) goto L_11bec39c;
  /* 11bec395 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11bec39c:;
  /* 11bec39c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11bec39f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11bec3a2:;
  /* 11bec3a2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11bec3a8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11bec3ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec3b1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11bec3b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec3b9 jg 0x11bec3cf */
  if ((!C.zf&&C.sf==C.of)) goto L_11bec3cf;
  /* 11bec3bb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11bec3c1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11bec3c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bec3c9 je 0x11bec450 */
  if (C.zf) goto L_11bec450;
L_11bec3cf:;
  /* 11bec3cf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11bec3d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bec3d6 push edx */
  push32((uint32_t)(EDX));
  /* 11bec3d7 push eax */
  push32((uint32_t)(EAX));
  /* 11bec3d8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11bec3de push edx */
  push32((uint32_t)(EDX));
  /* 11bec3df mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11bec3e5 push eax */
  push32((uint32_t)(EAX));
  /* 11bec3e6 call 0x11beb760 */
  push32(0x11bec3ebu); f_11beb760();
  /* 11bec3eb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec3ee mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11bec3f4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11bec3fa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bec3fb push edx */
  push32((uint32_t)(EDX));
  /* 11bec3fc push eax */
  push32((uint32_t)(EAX));
  /* 11bec3fd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11bec403 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec404 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11bec40a push edx */
  push32((uint32_t)(EDX));
  /* 11bec40b call 0x11beb6f0 */
  push32(0x11bec410u); f_11beb6f0();
  /* 11bec410 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11bec416 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11bec41c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec423 jle 0x11bec437 */
  if ((C.zf||C.sf!=C.of)) goto L_11bec437;
  /* 11bec425 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11bec42b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec431 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11bec437:;
  /* 11bec437 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec43a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11bec440 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11bec442 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec445 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec448 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bec44b jmp 0x11bec3a2 */
  goto L_11bec3a2;
L_11bec450:;
  /* 11bec450 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11bec453 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec456 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bec459 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec45c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec45f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11bec462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec465 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec46c je 0x11bec497 */
  if (C.zf) goto L_11bec497;
  /* 11bec46e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec471 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bec474 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec477 jne 0x11bec47f */
  if (!C.zf) goto L_11bec47f;
  /* 11bec479 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec47d jne 0x11bec497 */
  if (!C.zf) goto L_11bec497;
L_11bec47f:;
  /* 11bec47f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec482 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bec488 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec48b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11bec48e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bec491 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec494 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11bec497:;
  /* 11bec497 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec49e jne 0x11bec672 */
  if (!C.zf) goto L_11bec672;
  /* 11bec4a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec4a7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec4ac je 0x11bec4fd */
  if (C.zf) goto L_11bec4fd;
  /* 11bec4ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec4b1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11bec4b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bec4b9 je 0x11bec4cb */
  if (C.zf) goto L_11bec4cb;
  /* 11bec4bb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11bec4c2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11bec4c9 jmp 0x11bec4fd */
  goto L_11bec4fd;
L_11bec4cb:;
  /* 11bec4cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec4ce and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec4d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec4d3 je 0x11bec4e5 */
  if (C.zf) goto L_11bec4e5;
  /* 11bec4d5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11bec4dc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11bec4e3 jmp 0x11bec4fd */
  goto L_11bec4fd;
L_11bec4e5:;
  /* 11bec4e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec4e8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11bec4eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec4ed je 0x11bec4fd */
  if (C.zf) goto L_11bec4fd;
  /* 11bec4ef mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11bec4f6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11bec4fd:;
  /* 11bec4fd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11bec503 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec506 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec509 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11bec50f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec512 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11bec515 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec517 jne 0x11bec535 */
  if (!C.zf) goto L_11bec535;
  /* 11bec519 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11bec51f push eax */
  push32((uint32_t)(EAX));
  /* 11bec520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec523 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec524 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11bec52a push edx */
  push32((uint32_t)(EDX));
  /* 11bec52b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11bec52d call 0x11bec810 */
  push32(0x11bec532u); f_11bec810();
  /* 11bec532 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bec535:;
  /* 11bec535 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11bec53b push eax */
  push32((uint32_t)(EAX));
  /* 11bec53c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec53f push ecx */
  push32((uint32_t)(ECX));
  /* 11bec540 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bec543 push edx */
  push32((uint32_t)(EDX));
  /* 11bec544 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11bec54a push eax */
  push32((uint32_t)(EAX));
  /* 11bec54b call 0x11bec850 */
  push32(0x11bec550u); f_11bec850();
  /* 11bec550 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec553 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec556 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11bec559 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bec55b je 0x11bec583 */
  if (C.zf) goto L_11bec583;
  /* 11bec55d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec560 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec563 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec565 jne 0x11bec583 */
  if (!C.zf) goto L_11bec583;
  /* 11bec567 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11bec56d push eax */
  push32((uint32_t)(EAX));
  /* 11bec56e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec571 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec572 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11bec578 push edx */
  push32((uint32_t)(EDX));
  /* 11bec579 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11bec57b call 0x11bec810 */
  push32(0x11bec580u); f_11bec810();
  /* 11bec580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bec583:;
  /* 11bec583 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec587 je 0x11bec631 */
  if (C.zf) goto L_11bec631;
  /* 11bec58d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec591 jle 0x11bec631 */
  if ((C.zf||C.sf!=C.of)) goto L_11bec631;
  /* 11bec597 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec59a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11bec5a0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bec5a3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11bec5a9:;
  /* 11bec5a9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11bec5af mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11bec5b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec5b8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11bec5be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec5c0 je 0x11bec62f */
  if (C.zf) goto L_11bec62f;
  /* 11bec5c2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11bec5c8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11bec5cb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11bec5d2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11bec5d9 push eax */
  push32((uint32_t)(EAX));
  /* 11bec5da lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11bec5e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec5e1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11bec5e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec5ea mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11bec5f0 call 0x11bed9c0 */
  push32(0x11bec5f5u); f_11bed9c0();
  /* 11bec5f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec5f8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11bec5fe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec605 jg 0x11bec609 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bec609;
  /* 11bec607 jmp 0x11bec62f */
  goto L_11bec62f;
L_11bec609:;
  /* 11bec609 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11bec60f push eax */
  push32((uint32_t)(EAX));
  /* 11bec610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec613 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec614 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11bec61a push edx */
  push32((uint32_t)(EDX));
  /* 11bec61b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11bec621 push eax */
  push32((uint32_t)(EAX));
  /* 11bec622 call 0x11bec850 */
  push32(0x11bec627u); f_11bec850();
  /* 11bec627 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec62a jmp 0x11bec5a9 */
  goto L_11bec5a9;
L_11bec62f:;
  /* 11bec62f jmp 0x11bec64c */
  goto L_11bec64c;
L_11bec631:;
  /* 11bec631 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11bec637 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec638 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec63b push edx */
  push32((uint32_t)(EDX));
  /* 11bec63c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bec63f push eax */
  push32((uint32_t)(EAX));
  /* 11bec640 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bec643 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec644 call 0x11bec850 */
  push32(0x11bec649u); f_11bec850();
  /* 11bec649 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bec64c:;
  /* 11bec64c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec64f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec652 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bec654 je 0x11bec672 */
  if (C.zf) goto L_11bec672;
  /* 11bec656 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11bec65c push eax */
  push32((uint32_t)(EAX));
  /* 11bec65d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec660 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec661 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11bec667 push edx */
  push32((uint32_t)(EDX));
  /* 11bec668 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11bec66a call 0x11bec810 */
  push32(0x11bec66fu); f_11bec810();
  /* 11bec66f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bec672:;
  /* 11bec672 jmp 0x11beba84 */
  goto L_11beba84;
L_11bec677:;
  /* 11bec677 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11bec67d pop edi */
  EDI = (pop32());
  /* 11bec67e pop esi */
  ESI = (pop32());
  /* 11bec67f pop ebx */
  EBX = (pop32());
  /* 11bec680 mov esp, ebp */
  ESP = (EBP);
  /* 11bec682 pop ebp */
  EBP = (pop32());
  /* 11bec683 ret  */
  ESPCHK(0x11beba60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c790 @ 0x11bec790 (119 bytes, 44 insns) */
void f_11bec790(void) {
  FTRACE(0x11bec790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec790 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec791 mov ebp, esp */
  EBP = (ESP);
  /* 11bec793 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec794 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec797 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bec79a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec79d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec7a0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11bec7a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec7a6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec7aa jl 0x11bec7d2 */
  if ((C.sf!=C.of)) goto L_11bec7d2;
  /* 11bec7ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec7af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bec7b1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11bec7b4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11bec7b6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11bec7ba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bec7c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bec7c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec7c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bec7c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec7cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec7ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bec7d0 jmp 0x11bec7e5 */
  goto L_11bec7e5;
L_11bec7d2:;
  /* 11bec7d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec7d5 push edx */
  push32((uint32_t)(EDX));
  /* 11bec7d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec7d9 push eax */
  push32((uint32_t)(EAX));
  /* 11bec7da call 0x11beb7e0 */
  push32(0x11bec7dfu); f_11beb7e0();
  /* 11bec7df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec7e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bec7e5:;
  /* 11bec7e5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec7e9 jne 0x11bec7f6 */
  if (!C.zf) goto L_11bec7f6;
  /* 11bec7eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec7ee mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11bec7f4 jmp 0x11bec803 */
  goto L_11bec803;
L_11bec7f6:;
  /* 11bec7f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec7f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bec7fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec7fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec801 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11bec803:;
  /* 11bec803 mov esp, ebp */
  ESP = (EBP);
  /* 11bec805 pop ebp */
  EBP = (pop32());
  /* 11bec806 ret  */
  ESPCHK(0x11bec790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x11bec810 (53 bytes, 23 insns) */
void f_11bec810(void) {
  FTRACE(0x11bec810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec810 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec811 mov ebp, esp */
  EBP = (ESP);
L_11bec813:;
  /* 11bec813 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec816 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec819 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec81c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11bec81f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec821 jle 0x11bec843 */
  if ((C.zf||C.sf!=C.of)) goto L_11bec843;
  /* 11bec823 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bec826 push edx */
  push32((uint32_t)(EDX));
  /* 11bec827 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec82a push eax */
  push32((uint32_t)(EAX));
  /* 11bec82b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec82e push ecx */
  push32((uint32_t)(ECX));
  /* 11bec82f call 0x11bec790 */
  push32(0x11bec834u); f_11bec790();
  /* 11bec834 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec837 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bec83a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec83d jne 0x11bec841 */
  if (!C.zf) goto L_11bec841;
  /* 11bec83f jmp 0x11bec843 */
  goto L_11bec843;
L_11bec841:;
  /* 11bec841 jmp 0x11bec813 */
  goto L_11bec813;
L_11bec843:;
  /* 11bec843 pop ebp */
  EBP = (pop32());
  /* 11bec844 ret  */
  ESPCHK(0x11bec810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x11bec850 (74 bytes, 31 insns) */
void f_11bec850(void) {
  FTRACE(0x11bec850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec850 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec851 mov ebp, esp */
  EBP = (ESP);
  /* 11bec853 push ecx */
  push32((uint32_t)(ECX));
L_11bec854:;
  /* 11bec854 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec857 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec85a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec85d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11bec860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bec862 jle 0x11bec896 */
  if ((C.zf||C.sf!=C.of)) goto L_11bec896;
  /* 11bec864 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bec867 push edx */
  push32((uint32_t)(EDX));
  /* 11bec868 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec86b push eax */
  push32((uint32_t)(EAX));
  /* 11bec86c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec86f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bec872 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bec875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec878 push eax */
  push32((uint32_t)(EAX));
  /* 11bec879 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec87c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec87f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bec882 call 0x11bec790 */
  push32(0x11bec887u); f_11bec790();
  /* 11bec887 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec88a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bec88d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec890 jne 0x11bec894 */
  if (!C.zf) goto L_11bec894;
  /* 11bec892 jmp 0x11bec896 */
  goto L_11bec896;
L_11bec894:;
  /* 11bec894 jmp 0x11bec854 */
  goto L_11bec854;
L_11bec896:;
  /* 11bec896 mov esp, ebp */
  ESP = (EBP);
  /* 11bec898 pop ebp */
  EBP = (pop32());
  /* 11bec899 ret  */
  ESPCHK(0x11bec850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x11bec8a0 (26 bytes, 12 insns) */
void f_11bec8a0(void) {
  FTRACE(0x11bec8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11bec8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bec8a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec8ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bec8b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bec8b5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11bec8b8 pop ebp */
  EBP = (pop32());
  /* 11bec8b9 ret  */
  ESPCHK(0x11bec8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8c0 @ 0x11bec8c0 (31 bytes, 14 insns) */
void f_11bec8c0(void) {
  FTRACE(0x11bec8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bec8c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bec8c8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bec8d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bec8d5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bec8d8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11bec8da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bec8dd pop ebp */
  EBP = (pop32());
  /* 11bec8de ret  */
  ESPCHK(0x11bec8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x11bec8e0 (27 bytes, 12 insns) */
void f_11bec8e0(void) {
  FTRACE(0x11bec8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11bec8e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bec8e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec8eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bec8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec8f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bec8f5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11bec8f9 pop ebp */
  EBP = (pop32());
  /* 11bec8fa ret  */
  ESPCHK(0x11bec8e0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11bec900 (145 bytes, 42 insns) */
void f_11bec900(void) {
  FTRACE(0x11bec900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec900 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec901 mov ebp, esp */
  EBP = (ESP);
  /* 11bec903 push ecx */
  push32((uint32_t)(ECX));
  /* 11bec904 call 0x11bec9b0 */
  push32(0x11bec909u); f_11bec9b0();
  /* 11bec909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec90c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11bec90e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bec915 jmp 0x11bec920 */
  goto L_11bec920;
L_11bec917:;
  /* 11bec917 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec91a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec91d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bec920:;
  /* 11bec920 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec924 jae 0x11bec94a */
  if (!C.cf) goto L_11bec94a;
  /* 11bec926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec92c cmp ecx, dword ptr [eax*8 + 0x11c0efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11c0efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec933 jne 0x11bec948 */
  if (!C.zf) goto L_11bec948;
  /* 11bec935 call 0x11bec9a0 */
  push32(0x11bec93au); f_11bec9a0();
  /* 11bec93a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bec93d mov ecx, dword ptr [edx*8 + 0x11c0efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11c0efbc)));
  /* 11bec944 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11bec946 jmp 0x11bec98d */
  goto L_11bec98d;
L_11bec948:;
  /* 11bec948 jmp 0x11bec917 */
  goto L_11bec917;
L_11bec94a:;
  /* 11bec94a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec94e jb 0x11bec963 */
  if (C.cf) goto L_11bec963;
  /* 11bec950 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec954 ja 0x11bec963 */
  if ((!C.cf&&!C.zf)) goto L_11bec963;
  /* 11bec956 call 0x11bec9a0 */
  push32(0x11bec95bu); f_11bec9a0();
  /* 11bec95b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11bec961 jmp 0x11bec98d */
  goto L_11bec98d;
L_11bec963:;
  /* 11bec963 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec96a jb 0x11bec982 */
  if (C.cf) goto L_11bec982;
  /* 11bec96c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec973 ja 0x11bec982 */
  if ((!C.cf&&!C.zf)) goto L_11bec982;
  /* 11bec975 call 0x11bec9a0 */
  push32(0x11bec97au); f_11bec9a0();
  /* 11bec97a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11bec980 jmp 0x11bec98d */
  goto L_11bec98d;
L_11bec982:;
  /* 11bec982 call 0x11bec9a0 */
  push32(0x11bec987u); f_11bec9a0();
  /* 11bec987 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11bec98d:;
  /* 11bec98d mov esp, ebp */
  ESP = (EBP);
  /* 11bec98f pop ebp */
  EBP = (pop32());
  /* 11bec990 ret  */
  ESPCHK(0x11bec900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9a0 @ 0x11bec9a0 (13 bytes, 6 insns) */
void f_11bec9a0(void) {
  FTRACE(0x11bec9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec9a1 mov ebp, esp */
  EBP = (ESP);
  /* 11bec9a3 call 0x11be4510 */
  push32(0x11bec9a8u); f_11be4510();
  /* 11bec9a8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec9ab pop ebp */
  EBP = (pop32());
  /* 11bec9ac ret  */
  ESPCHK(0x11bec9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9b0 @ 0x11bec9b0 (13 bytes, 6 insns) */
void f_11bec9b0(void) {
  FTRACE(0x11bec9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec9b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bec9b3 call 0x11be4510 */
  push32(0x11bec9b8u); f_11be4510();
  /* 11bec9b8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec9bb pop ebp */
  EBP = (pop32());
  /* 11bec9bc ret  */
  ESPCHK(0x11bec9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x11bec9c0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11bec9c0(void) {
  FTRACE(0x11bec9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bec9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bec9c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bec9c3 push edi */
  push32((uint32_t)(EDI));
  /* 11bec9c4 push esi */
  push32((uint32_t)(ESI));
  /* 11bec9c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11bec9c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bec9cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11bec9ce mov eax, ecx */
  EAX = (ECX);
  /* 11bec9d0 mov edx, ecx */
  EDX = (ECX);
  /* 11bec9d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bec9d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec9d6 jbe 0x11bec9e0 */
  if ((C.cf||C.zf)) goto L_11bec9e0;
  /* 11bec9d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec9da jb 0x11becb58 */
  if (C.cf) goto L_11becb58;
L_11bec9e0:;
  /* 11bec9e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11bec9e6 jne 0x11bec9fc */
  if (!C.zf) goto L_11bec9fc;
  /* 11bec9e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11bec9eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11bec9ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bec9f1 jb 0x11beca1c */
  if (C.cf) goto L_11beca1c;
  /* 11bec9f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11bec9f5 jmp dword ptr [edx*4 + 0x11becb08] */
  switch (EDX) {
    case 0: goto L_11becb18;
    case 1: goto L_11becb20;
    case 2: goto L_11becb2c;
    case 3: goto L_11becb40;
    default: x86_unimpl("switch@0x11bec9f5 out of table"); return;
  }
L_11bec9fc:;
  /* 11bec9fc mov eax, edi */
  EAX = (EDI);
  /* 11bec9fe mov edx, 3 */
  EDX = (0x3u);
  /* 11beca03 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beca06 jb 0x11beca14 */
  if (C.cf) goto L_11beca14;
  /* 11beca08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11beca0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beca0d jmp dword ptr [eax*4 + 0x11beca20] */
  switch (EAX) {
    case 1: goto L_11beca30;
    case 2: goto L_11beca5c;
    case 3: goto L_11beca80;
    default: x86_unimpl("switch@0x11beca0d out of table"); return;
  }
L_11beca14:;
  /* 11beca14 jmp dword ptr [ecx*4 + 0x11becb18] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11becb18)))); return;
  /* 11beca1b nop  */
  /* nop */
L_11beca1c:;
  /* 11beca1c jmp dword ptr [ecx*4 + 0x11beca9c] */
  switch (ECX) {
    case 0: goto L_11becaff;
    case 1: goto L_11becaec;
    case 2: goto L_11becae4;
    case 3: goto L_11becadc;
    case 4: goto L_11becad4;
    case 5: goto L_11becacc;
    case 6: goto L_11becac4;
    case 7: goto L_11becabc;
    default: x86_unimpl("switch@0x11beca1c out of table"); return;
  }
  /* 11beca23 nop  */
  /* nop */
L_11beca30:;
  /* 11beca30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beca32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beca34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beca36 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beca39 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beca3c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beca3f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beca42 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beca45 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beca48 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beca4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beca4e jb 0x11beca1c */
  if (C.cf) goto L_11beca1c;
  /* 11beca50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beca52 jmp dword ptr [edx*4 + 0x11becb08] */
  switch (EDX) {
    case 0: goto L_11becb18;
    case 1: goto L_11becb20;
    case 2: goto L_11becb2c;
    case 3: goto L_11becb40;
    default: x86_unimpl("switch@0x11beca52 out of table"); return;
  }
  /* 11beca59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beca5c:;
  /* 11beca5c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beca5e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beca60 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beca62 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11beca65 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beca68 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beca6b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beca6e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11beca71 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beca74 jb 0x11beca1c */
  if (C.cf) goto L_11beca1c;
  /* 11beca76 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beca78 jmp dword ptr [edx*4 + 0x11becb08] */
  switch (EDX) {
    case 0: goto L_11becb18;
    case 1: goto L_11becb20;
    case 2: goto L_11becb2c;
    case 3: goto L_11becb40;
    default: x86_unimpl("switch@0x11beca78 out of table"); return;
  }
  /* 11beca7f nop  */
  /* nop */
L_11beca80:;
  /* 11beca80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11beca82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11beca84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11beca86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11beca87 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11beca8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11beca8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beca8e jb 0x11beca1c */
  if (C.cf) goto L_11beca1c;
  /* 11beca90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11beca92 jmp dword ptr [edx*4 + 0x11becb08] */
  switch (EDX) {
    case 0: goto L_11becb18;
    case 1: goto L_11becb20;
    case 2: goto L_11becb2c;
    case 3: goto L_11becb40;
    default: x86_unimpl("switch@0x11beca92 out of table"); return;
  }
  /* 11beca99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11becabc:;
  /* 11becabc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11becac0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11becac4:;
  /* 11becac4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11becac8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11becacc:;
  /* 11becacc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11becad0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11becad4:;
  /* 11becad4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11becad8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11becadc:;
  /* 11becadc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11becae0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11becae4:;
  /* 11becae4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11becae8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11becaec:;
  /* 11becaec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11becaf0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11becaf4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11becafb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11becafd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11becaff:;
  /* 11becaff jmp dword ptr [edx*4 + 0x11becb08] */
  switch (EDX) {
    case 0: goto L_11becb18;
    case 1: goto L_11becb20;
    case 2: goto L_11becb2c;
    case 3: goto L_11becb40;
    default: x86_unimpl("switch@0x11becaff out of table"); return;
  }
  /* 11becb06 mov edi, edi */
  EDI = (EDI);
L_11becb18:;
  /* 11becb18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11becb1b pop esi */
  ESI = (pop32());
  /* 11becb1c pop edi */
  EDI = (pop32());
  /* 11becb1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11becb1e ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
  /* 11becb1f nop  */
  /* nop */
L_11becb20:;
  /* 11becb20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11becb22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11becb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11becb27 pop esi */
  ESI = (pop32());
  /* 11becb28 pop edi */
  EDI = (pop32());
  /* 11becb29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11becb2a ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
  /* 11becb2b nop  */
  /* nop */
L_11becb2c:;
  /* 11becb2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11becb2e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11becb30 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11becb33 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11becb36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11becb39 pop esi */
  ESI = (pop32());
  /* 11becb3a pop edi */
  EDI = (pop32());
  /* 11becb3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11becb3c ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
  /* 11becb3d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11becb40:;
  /* 11becb40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11becb42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11becb44 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11becb47 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11becb4a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11becb4d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11becb50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11becb53 pop esi */
  ESI = (pop32());
  /* 11becb54 pop edi */
  EDI = (pop32());
  /* 11becb55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11becb56 ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
  /* 11becb57 nop  */
  /* nop */
L_11becb58:;
  /* 11becb58 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11becb5c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11becb60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11becb66 jne 0x11becb8c */
  if (!C.zf) goto L_11becb8c;
  /* 11becb68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11becb6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11becb6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becb71 jb 0x11becb80 */
  if (C.cf) goto L_11becb80;
  /* 11becb73 std  */
  C.df=1;
  /* 11becb74 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11becb76 cld  */
  C.df=0;
  /* 11becb77 jmp dword ptr [edx*4 + 0x11becca0] */
  switch (EDX) {
    case 0: goto L_11beccb0;
    case 1: goto L_11beccb8;
    case 2: goto L_11beccc8;
    case 3: goto L_11beccdc;
    default: x86_unimpl("switch@0x11becb77 out of table"); return;
  }
  /* 11becb7e mov edi, edi */
  EDI = (EDI);
L_11becb80:;
  /* 11becb80 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11becb82 jmp dword ptr [ecx*4 + 0x11becc50] */
  switch (ECX) {
    case 0: goto L_11becc97;
    default: x86_unimpl("switch@0x11becb82 out of table"); return;
  }
  /* 11becb89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11becb8c:;
  /* 11becb8c mov eax, edi */
  EAX = (EDI);
  /* 11becb8e mov edx, 3 */
  EDX = (0x3u);
  /* 11becb93 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becb96 jb 0x11becba4 */
  if (C.cf) goto L_11becba4;
  /* 11becb98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11becb9b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11becb9d jmp dword ptr [eax*4 + 0x11becba8] */
  switch (EAX) {
    case 1: goto L_11becbb8;
    case 2: goto L_11becbd8;
    case 3: goto L_11becc00;
    default: x86_unimpl("switch@0x11becb9d out of table"); return;
  }
L_11becba4:;
  /* 11becba4 jmp dword ptr [ecx*4 + 0x11becca0] */
  switch (ECX) {
    case 0: goto L_11beccb0;
    case 1: goto L_11beccb8;
    case 2: goto L_11beccc8;
    case 3: goto L_11beccdc;
    default: x86_unimpl("switch@0x11becba4 out of table"); return;
  }
  /* 11becbab nop  */
  /* nop */
L_11becbb8:;
  /* 11becbb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11becbbb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11becbbd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11becbc0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11becbc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11becbc4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11becbc5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becbc8 jb 0x11becb80 */
  if (C.cf) goto L_11becb80;
  /* 11becbca std  */
  C.df=1;
  /* 11becbcb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11becbcd cld  */
  C.df=0;
  /* 11becbce jmp dword ptr [edx*4 + 0x11becca0] */
  switch (EDX) {
    case 0: goto L_11beccb0;
    case 1: goto L_11beccb8;
    case 2: goto L_11beccc8;
    case 3: goto L_11beccdc;
    default: x86_unimpl("switch@0x11becbce out of table"); return;
  }
  /* 11becbd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11becbd8:;
  /* 11becbd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11becbdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11becbdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11becbe0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11becbe3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11becbe6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11becbe9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11becbec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11becbef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becbf2 jb 0x11becb80 */
  if (C.cf) goto L_11becb80;
  /* 11becbf4 std  */
  C.df=1;
  /* 11becbf5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11becbf7 cld  */
  C.df=0;
  /* 11becbf8 jmp dword ptr [edx*4 + 0x11becca0] */
  switch (EDX) {
    case 0: goto L_11beccb0;
    case 1: goto L_11beccb8;
    case 2: goto L_11beccc8;
    case 3: goto L_11beccdc;
    default: x86_unimpl("switch@0x11becbf8 out of table"); return;
  }
  /* 11becbff nop  */
  /* nop */
L_11becc00:;
  /* 11becc00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11becc03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11becc05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11becc08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11becc0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11becc0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11becc11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11becc14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11becc17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11becc1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11becc1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becc20 jb 0x11becb80 */
  if (C.cf) goto L_11becb80;
  /* 11becc26 std  */
  C.df=1;
  /* 11becc27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11becc29 cld  */
  C.df=0;
  /* 11becc2a jmp dword ptr [edx*4 + 0x11becca0] */
  switch (EDX) {
    case 0: goto L_11beccb0;
    case 1: goto L_11beccb8;
    case 2: goto L_11beccc8;
    case 3: goto L_11beccdc;
    default: x86_unimpl("switch@0x11becc2a out of table"); return;
  }
  /* 11becc31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11becc34 push esp */
  push32((uint32_t)(ESP));
  /* 11becc35 int3  */
  x86_unimpl("int3 @ 0x11becc35");
  /* 11becc36 mov esi, 0xbecc5c11 */
  ESI = (0xbecc5c11u);
  /* 11becc3b adc dword ptr [esp + ecx*8 - 0x42], esp */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*8 + -0x42))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*8 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11becc3f adc dword ptr [esp + ecx*8 - 0x42], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*8 + -0x42))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*8 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11becc43 adc dword ptr [esp + ecx*8 - 0x42], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*8 + -0x42))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*8 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11becc47 adc dword ptr [esp + ecx*8 - 0x42], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*8 + -0x42))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*8 + -0x42), (_r)); fl_add(_a,_b,_r,32); }
  /* 11becc4c test ah, cl */
  { uint32_t _r=(AH)&(CL); fl_logic(_r,8); }
  /* 11becc54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11becc58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11becc5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11becc60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11becc64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11becc68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11becc6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11becc70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11becc74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11becc78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11becc7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11becc80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11becc84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11becc88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11becc8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11becc93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11becc95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11becc97:;
  /* 11becc97 jmp dword ptr [edx*4 + 0x11becca0] */
  switch (EDX) {
    case 0: goto L_11beccb0;
    case 1: goto L_11beccb8;
    case 2: goto L_11beccc8;
    case 3: goto L_11beccdc;
    default: x86_unimpl("switch@0x11becc97 out of table"); return;
  }
  /* 11becc9e mov edi, edi */
  EDI = (EDI);
L_11beccb0:;
  /* 11beccb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beccb3 pop esi */
  ESI = (pop32());
  /* 11beccb4 pop edi */
  EDI = (pop32());
  /* 11beccb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beccb6 ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
  /* 11beccb7 nop  */
  /* nop */
L_11beccb8:;
  /* 11beccb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beccbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beccbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beccc1 pop esi */
  ESI = (pop32());
  /* 11beccc2 pop edi */
  EDI = (pop32());
  /* 11beccc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beccc4 ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
  /* 11beccc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11beccc8:;
  /* 11beccc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11becccb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11beccce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11beccd1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11beccd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beccd7 pop esi */
  ESI = (pop32());
  /* 11beccd8 pop edi */
  EDI = (pop32());
  /* 11beccd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beccda ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
  /* 11beccdb nop  */
  /* nop */
L_11beccdc:;
  /* 11beccdc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11beccdf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11becce2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11becce5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11becce8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11becceb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11beccee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beccf1 pop esi */
  ESI = (pop32());
  /* 11beccf2 pop edi */
  EDI = (pop32());
  /* 11beccf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11beccf4 ret  */
  ESPCHK(0x11bec9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x11becd00 (421 bytes, 148 insns) */
void f_11becd00(void) {
  FTRACE(0x11becd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11becd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11becd01 mov ebp, esp */
  EBP = (ESP);
  /* 11becd03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11becd05 push 0x11c0c170 */
  push32((uint32_t)(0x11c0c170u));
  /* 11becd0a push 0x11bedbd8 */
  push32((uint32_t)(0x11bedbd8u));
  /* 11becd0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11becd15 push eax */
  push32((uint32_t)(EAX));
  /* 11becd16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11becd1d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11becd20 push ebx */
  push32((uint32_t)(EBX));
  /* 11becd21 push esi */
  push32((uint32_t)(ESI));
  /* 11becd22 push edi */
  push32((uint32_t)(EDI));
  /* 11becd23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11becd26 cmp dword ptr [0x11c1084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becd2d jne 0x11becd7e */
  if (!C.zf) goto L_11becd7e;
  /* 11becd2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11becd32 push eax */
  push32((uint32_t)(EAX));
  /* 11becd33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11becd35 push 0x11c0c16c */
  push32((uint32_t)(0x11c0c16cu));
  /* 11becd3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11becd3c call dword ptr [0x11c132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f4))), 0x11becd42u);
  /* 11becd42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11becd44 je 0x11becd52 */
  if (C.zf) goto L_11becd52;
  /* 11becd46 mov dword ptr [0x11c1084c], 1 */
  w32((uint32_t)(0x11c1084c), (0x1u));
  /* 11becd50 jmp 0x11becd7e */
  goto L_11becd7e;
L_11becd52:;
  /* 11becd52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11becd55 push ecx */
  push32((uint32_t)(ECX));
  /* 11becd56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11becd58 push 0x11c0c168 */
  push32((uint32_t)(0x11c0c168u));
  /* 11becd5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11becd5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11becd61 call dword ptr [0x11c132f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f8))), 0x11becd67u);
  /* 11becd67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11becd69 je 0x11becd77 */
  if (C.zf) goto L_11becd77;
  /* 11becd6b mov dword ptr [0x11c1084c], 2 */
  w32((uint32_t)(0x11c1084c), (0x2u));
  /* 11becd75 jmp 0x11becd7e */
  goto L_11becd7e;
L_11becd77:;
  /* 11becd77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11becd79 jmp 0x11becea8 */
  goto L_11becea8;
L_11becd7e:;
  /* 11becd7e cmp dword ptr [0x11c1084c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11c1084c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becd85 jne 0x11becdb5 */
  if (!C.zf) goto L_11becdb5;
  /* 11becd87 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becd8b jne 0x11becd96 */
  if (!C.zf) goto L_11becd96;
  /* 11becd8d mov edx, dword ptr [0x11c10858] */
  EDX = (r32((uint32_t)(0x11c10858)));
  /* 11becd93 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11becd96:;
  /* 11becd96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11becd99 push eax */
  push32((uint32_t)(EAX));
  /* 11becd9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11becd9d push ecx */
  push32((uint32_t)(ECX));
  /* 11becd9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11becda1 push edx */
  push32((uint32_t)(EDX));
  /* 11becda2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11becda5 push eax */
  push32((uint32_t)(EAX));
  /* 11becda6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11becda9 push ecx */
  push32((uint32_t)(ECX));
  /* 11becdaa call dword ptr [0x11c132f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f8))), 0x11becdb0u);
  /* 11becdb0 jmp 0x11becea8 */
  goto L_11becea8;
L_11becdb5:;
  /* 11becdb5 cmp dword ptr [0x11c1084c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c1084c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becdbc jne 0x11becea6 */
  if (!C.zf) goto L_11becea6;
  /* 11becdc2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becdc6 jne 0x11becdd1 */
  if (!C.zf) goto L_11becdd1;
  /* 11becdc8 mov edx, dword ptr [0x11c10868] */
  EDX = (r32((uint32_t)(0x11c10868)));
  /* 11becdce mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11becdd1:;
  /* 11becdd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becdd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becdd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11becdd8 push eax */
  push32((uint32_t)(EAX));
  /* 11becdd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11becddc push ecx */
  push32((uint32_t)(ECX));
  /* 11becddd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11becde0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11becde2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11becde4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11becde7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11becdea push edx */
  push32((uint32_t)(EDX));
  /* 11becdeb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11becdee push eax */
  push32((uint32_t)(EAX));
  /* 11becdef call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11becdf5u);
  /* 11becdf5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11becdf8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becdfc jne 0x11bece05 */
  if (!C.zf) goto L_11bece05;
  /* 11becdfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bece00 jmp 0x11becea8 */
  goto L_11becea8;
L_11bece05:;
  /* 11bece05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bece0c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bece0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bece11 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bece14 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bece16 call 0x11be7c70 */
  push32(0x11bece1bu); f_11be7c70();
  /* 11bece1b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11bece1e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bece21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bece24 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bece27 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bece2a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11bece2c push edx */
  push32((uint32_t)(EDX));
  /* 11bece2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11bece2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bece32 push eax */
  push32((uint32_t)(EAX));
  /* 11bece33 call 0x11be8840 */
  push32(0x11bece38u); f_11be8840();
  /* 11bece38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bece3b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bece42 jmp 0x11bece5b */
  goto L_11bece5b;
  /* 11bece44 mov eax, 1 */
  EAX = (0x1u);
  /* 11bece49 ret  */
  ESPCHK(0x11becd00u, _esp0);
  ESP += 4; return;
  /* 11bece4a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bece4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11bece54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bece5b:;
  /* 11bece5b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bece5f jne 0x11bece65 */
  if (!C.zf) goto L_11bece65;
  /* 11bece61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bece63 jmp 0x11becea8 */
  goto L_11becea8;
L_11bece65:;
  /* 11bece65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bece68 push ecx */
  push32((uint32_t)(ECX));
  /* 11bece69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bece6c push edx */
  push32((uint32_t)(EDX));
  /* 11bece6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bece70 push eax */
  push32((uint32_t)(EAX));
  /* 11bece71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bece74 push ecx */
  push32((uint32_t)(ECX));
  /* 11bece75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bece77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bece7a push edx */
  push32((uint32_t)(EDX));
  /* 11bece7b call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bece81u);
  /* 11bece81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bece84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bece88 jne 0x11bece8e */
  if (!C.zf) goto L_11bece8e;
  /* 11bece8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bece8c jmp 0x11becea8 */
  goto L_11becea8;
L_11bece8e:;
  /* 11bece8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bece91 push eax */
  push32((uint32_t)(EAX));
  /* 11bece92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bece95 push ecx */
  push32((uint32_t)(ECX));
  /* 11bece96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bece99 push edx */
  push32((uint32_t)(EDX));
  /* 11bece9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bece9d push eax */
  push32((uint32_t)(EAX));
  /* 11bece9e call dword ptr [0x11c132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f4))), 0x11becea4u);
  /* 11becea4 jmp 0x11becea8 */
  goto L_11becea8;
L_11becea6:;
  /* 11becea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11becea8:;
  /* 11becea8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11beceab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11beceae mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11beceb5 pop edi */
  EDI = (pop32());
  /* 11beceb6 pop esi */
  ESI = (pop32());
  /* 11beceb7 pop ebx */
  EBX = (pop32());
  /* 11beceb8 mov esp, ebp */
  ESP = (EBP);
  /* 11beceba pop ebp */
  EBP = (pop32());
  /* 11becebb ret  */
  ESPCHK(0x11becd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x11becec0 (727 bytes, 263 insns) */
void f_11becec0(void) {
  FTRACE(0x11becec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11becec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11becec1 mov ebp, esp */
  EBP = (ESP);
  /* 11becec3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11becec5 push 0x11c0c180 */
  push32((uint32_t)(0x11c0c180u));
  /* 11bececa push 0x11bedbd8 */
  push32((uint32_t)(0x11bedbd8u));
  /* 11bececf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11beced5 push eax */
  push32((uint32_t)(EAX));
  /* 11beced6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11becedd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11becee0 push ebx */
  push32((uint32_t)(EBX));
  /* 11becee1 push esi */
  push32((uint32_t)(ESI));
  /* 11becee2 push edi */
  push32((uint32_t)(EDI));
  /* 11becee3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11becee6 cmp dword ptr [0x11c10870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beceed jne 0x11becf46 */
  if (!C.zf) goto L_11becf46;
  /* 11beceef push 0 */
  push32((uint32_t)(0x0u));
  /* 11becef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11becef5 push 0x11c0c16c */
  push32((uint32_t)(0x11c0c16cu));
  /* 11becefa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11beceff push 0 */
  push32((uint32_t)(0x0u));
  /* 11becf01 call dword ptr [0x11c132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132ec))), 0x11becf07u);
  /* 11becf07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11becf09 je 0x11becf17 */
  if (C.zf) goto L_11becf17;
  /* 11becf0b mov dword ptr [0x11c10870], 1 */
  w32((uint32_t)(0x11c10870), (0x1u));
  /* 11becf15 jmp 0x11becf46 */
  goto L_11becf46;
L_11becf17:;
  /* 11becf17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becf19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becf1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11becf1d push 0x11c0c168 */
  push32((uint32_t)(0x11c0c168u));
  /* 11becf22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11becf27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becf29 call dword ptr [0x11c132f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f0))), 0x11becf2fu);
  /* 11becf2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11becf31 je 0x11becf3f */
  if (C.zf) goto L_11becf3f;
  /* 11becf33 mov dword ptr [0x11c10870], 2 */
  w32((uint32_t)(0x11c10870), (0x2u));
  /* 11becf3d jmp 0x11becf46 */
  goto L_11becf46;
L_11becf3f:;
  /* 11becf3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11becf41 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11becf46:;
  /* 11becf46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becf4a jle 0x11becf5f */
  if ((C.zf||C.sf!=C.of)) goto L_11becf5f;
  /* 11becf4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11becf4f push eax */
  push32((uint32_t)(EAX));
  /* 11becf50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11becf53 push ecx */
  push32((uint32_t)(ECX));
  /* 11becf54 call 0x11bed1d0 */
  push32(0x11becf59u); f_11bed1d0();
  /* 11becf59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11becf5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11becf5f:;
  /* 11becf5f cmp dword ptr [0x11c10870], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11c10870))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becf66 jne 0x11becf8b */
  if (!C.zf) goto L_11becf8b;
  /* 11becf68 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11becf6b push edx */
  push32((uint32_t)(EDX));
  /* 11becf6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11becf6f push eax */
  push32((uint32_t)(EAX));
  /* 11becf70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11becf73 push ecx */
  push32((uint32_t)(ECX));
  /* 11becf74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11becf77 push edx */
  push32((uint32_t)(EDX));
  /* 11becf78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11becf7b push eax */
  push32((uint32_t)(EAX));
  /* 11becf7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11becf7f push ecx */
  push32((uint32_t)(ECX));
  /* 11becf80 call dword ptr [0x11c132f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f0))), 0x11becf86u);
  /* 11becf86 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11becf8b:;
  /* 11becf8b cmp dword ptr [0x11c10870], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c10870))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becf92 jne 0x11bed1af */
  if (!C.zf) goto L_11bed1af;
  /* 11becf98 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becf9c jne 0x11becfa7 */
  if (!C.zf) goto L_11becfa7;
  /* 11becf9e mov edx, dword ptr [0x11c10868] */
  EDX = (r32((uint32_t)(0x11c10868)));
  /* 11becfa4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11becfa7:;
  /* 11becfa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becfa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11becfab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11becfae push eax */
  push32((uint32_t)(EAX));
  /* 11becfaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11becfb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11becfb3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11becfb6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11becfb8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11becfba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11becfbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11becfc0 push edx */
  push32((uint32_t)(EDX));
  /* 11becfc1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11becfc4 push eax */
  push32((uint32_t)(EAX));
  /* 11becfc5 call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11becfcbu);
  /* 11becfcb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11becfce cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11becfd2 jne 0x11becfdb */
  if (!C.zf) goto L_11becfdb;
  /* 11becfd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11becfd6 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11becfdb:;
  /* 11becfdb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11becfe2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11becfe5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11becfe7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11becfea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11becfec call 0x11be7c70 */
  push32(0x11becff1u); f_11be7c70();
  /* 11becff1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11becff4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11becff7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11becffa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11becffd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bed004 jmp 0x11bed01d */
  goto L_11bed01d;
  /* 11bed006 mov eax, 1 */
  EAX = (0x1u);
  /* 11bed00b ret  */
  ESPCHK(0x11becec0u, _esp0);
  ESP += 4; return;
  /* 11bed00c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bed00f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11bed016 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bed01d:;
  /* 11bed01d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed021 jne 0x11bed02a */
  if (!C.zf) goto L_11bed02a;
  /* 11bed023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed025 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed02a:;
  /* 11bed02a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bed02d push edx */
  push32((uint32_t)(EDX));
  /* 11bed02e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bed031 push eax */
  push32((uint32_t)(EAX));
  /* 11bed032 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bed035 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed036 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bed039 push edx */
  push32((uint32_t)(EDX));
  /* 11bed03a push 1 */
  push32((uint32_t)(0x1u));
  /* 11bed03c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bed03f push eax */
  push32((uint32_t)(EAX));
  /* 11bed040 call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bed046u);
  /* 11bed046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed048 jne 0x11bed051 */
  if (!C.zf) goto L_11bed051;
  /* 11bed04a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed04c jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed051:;
  /* 11bed051 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed053 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed055 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bed058 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed059 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bed05c push edx */
  push32((uint32_t)(EDX));
  /* 11bed05d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed060 push eax */
  push32((uint32_t)(EAX));
  /* 11bed061 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed064 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed065 call dword ptr [0x11c132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132ec))), 0x11bed06bu);
  /* 11bed06b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bed06e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed072 jne 0x11bed07b */
  if (!C.zf) goto L_11bed07b;
  /* 11bed074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed076 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed07b:;
  /* 11bed07b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed07e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11bed084 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bed086 je 0x11bed0cb */
  if (C.zf) goto L_11bed0cb;
  /* 11bed088 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed08c je 0x11bed0c6 */
  if (C.zf) goto L_11bed0c6;
  /* 11bed08e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bed091 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed094 jle 0x11bed09d */
  if ((C.zf||C.sf!=C.of)) goto L_11bed09d;
  /* 11bed096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed098 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed09d:;
  /* 11bed09d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bed0a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed0a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bed0a4 push edx */
  push32((uint32_t)(EDX));
  /* 11bed0a5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bed0a8 push eax */
  push32((uint32_t)(EAX));
  /* 11bed0a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bed0ac push ecx */
  push32((uint32_t)(ECX));
  /* 11bed0ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed0b0 push edx */
  push32((uint32_t)(EDX));
  /* 11bed0b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed0b4 push eax */
  push32((uint32_t)(EAX));
  /* 11bed0b5 call dword ptr [0x11c132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132ec))), 0x11bed0bbu);
  /* 11bed0bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed0bd jne 0x11bed0c6 */
  if (!C.zf) goto L_11bed0c6;
  /* 11bed0bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed0c1 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed0c6:;
  /* 11bed0c6 jmp 0x11bed1aa */
  goto L_11bed1aa;
L_11bed0cb:;
  /* 11bed0cb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bed0ce mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11bed0d1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bed0d8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bed0db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bed0dd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed0e0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bed0e2 call 0x11be7c70 */
  push32(0x11bed0e7u); f_11be7c70();
  /* 11bed0e7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11bed0ea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bed0ed mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11bed0f0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11bed0f3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bed0fa jmp 0x11bed113 */
  goto L_11bed113;
  /* 11bed0fc mov eax, 1 */
  EAX = (0x1u);
  /* 11bed101 ret  */
  ESPCHK(0x11becec0u, _esp0);
  ESP += 4; return;
  /* 11bed102 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bed105 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bed10c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bed113:;
  /* 11bed113 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed117 jne 0x11bed120 */
  if (!C.zf) goto L_11bed120;
  /* 11bed119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed11b jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed120:;
  /* 11bed120 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bed123 push eax */
  push32((uint32_t)(EAX));
  /* 11bed124 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bed127 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed128 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bed12b push edx */
  push32((uint32_t)(EDX));
  /* 11bed12c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bed12f push eax */
  push32((uint32_t)(EAX));
  /* 11bed130 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed133 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed134 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed137 push edx */
  push32((uint32_t)(EDX));
  /* 11bed138 call dword ptr [0x11c132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132ec))), 0x11bed13eu);
  /* 11bed13e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed140 jne 0x11bed146 */
  if (!C.zf) goto L_11bed146;
  /* 11bed142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed144 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed146:;
  /* 11bed146 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed14a jne 0x11bed17a */
  if (!C.zf) goto L_11bed17a;
  /* 11bed14c push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed14e push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed150 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed152 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed154 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bed157 push eax */
  push32((uint32_t)(EAX));
  /* 11bed158 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bed15b push ecx */
  push32((uint32_t)(ECX));
  /* 11bed15c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bed161 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bed164 push edx */
  push32((uint32_t)(EDX));
  /* 11bed165 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bed16bu);
  /* 11bed16b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bed16e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed172 jne 0x11bed178 */
  if (!C.zf) goto L_11bed178;
  /* 11bed174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed176 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed178:;
  /* 11bed178 jmp 0x11bed1aa */
  goto L_11bed1aa;
L_11bed17a:;
  /* 11bed17a push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed17c push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed17e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bed181 push eax */
  push32((uint32_t)(EAX));
  /* 11bed182 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bed185 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed186 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bed189 push edx */
  push32((uint32_t)(EDX));
  /* 11bed18a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bed18d push eax */
  push32((uint32_t)(EAX));
  /* 11bed18e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bed193 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bed196 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed197 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bed19du);
  /* 11bed19d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bed1a0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed1a4 jne 0x11bed1aa */
  if (!C.zf) goto L_11bed1aa;
  /* 11bed1a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed1a8 jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed1aa:;
  /* 11bed1aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bed1ad jmp 0x11bed1b1 */
  goto L_11bed1b1;
L_11bed1af:;
  /* 11bed1af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bed1b1:;
  /* 11bed1b1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11bed1b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bed1b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11bed1be pop edi */
  EDI = (pop32());
  /* 11bed1bf pop esi */
  ESI = (pop32());
  /* 11bed1c0 pop ebx */
  EBX = (pop32());
  /* 11bed1c1 mov esp, ebp */
  ESP = (EBP);
  /* 11bed1c3 pop ebp */
  EBP = (pop32());
  /* 11bed1c4 ret  */
  ESPCHK(0x11becec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d0 @ 0x11bed1d0 (80 bytes, 32 insns) */
void f_11bed1d0(void) {
  FTRACE(0x11bed1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed1d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bed1d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed1d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed1d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bed1dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed1df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bed1e2:;
  /* 11bed1e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed1e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed1e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed1eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bed1ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bed1f0 je 0x11bed207 */
  if (C.zf) goto L_11bed207;
  /* 11bed1f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed1f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bed1f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bed1fa je 0x11bed207 */
  if (C.zf) goto L_11bed207;
  /* 11bed1fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed1ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed202 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bed205 jmp 0x11bed1e2 */
  goto L_11bed1e2;
L_11bed207:;
  /* 11bed207 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed20a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bed20d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bed20f jne 0x11bed219 */
  if (!C.zf) goto L_11bed219;
  /* 11bed211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed214 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed217 jmp 0x11bed21c */
  goto L_11bed21c;
L_11bed219:;
  /* 11bed219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11bed21c:;
  /* 11bed21c mov esp, ebp */
  ESP = (EBP);
  /* 11bed21e pop ebp */
  EBP = (pop32());
  /* 11bed21f ret  */
  ESPCHK(0x11bed1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d220 @ 0x11bed220 (130 bytes, 43 insns) */
void f_11bed220(void) {
  FTRACE(0x11bed220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed220 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed221 mov ebp, esp */
  EBP = (ESP);
  /* 11bed223 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed227 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed22d jae 0x11bed251 */
  if (!C.cf) goto L_11bed251;
  /* 11bed22f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed232 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed238 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bed23b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed23e mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bed245 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bed24a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bed24d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bed24f jne 0x11bed26c */
  if (!C.zf) goto L_11bed26c;
L_11bed251:;
  /* 11bed251 call 0x11bec9a0 */
  push32(0x11bed256u); f_11bec9a0();
  /* 11bed256 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bed25c call 0x11bec9b0 */
  push32(0x11bed261u); f_11bec9b0();
  /* 11bed261 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bed267 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bed26a jmp 0x11bed29e */
  goto L_11bed29e;
L_11bed26c:;
  /* 11bed26c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed26f push edx */
  push32((uint32_t)(EDX));
  /* 11bed270 call 0x11bee1c0 */
  push32(0x11bed275u); f_11bee1c0();
  /* 11bed275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed278 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bed27b push eax */
  push32((uint32_t)(EAX));
  /* 11bed27c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed27f push ecx */
  push32((uint32_t)(ECX));
  /* 11bed280 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed283 push edx */
  push32((uint32_t)(EDX));
  /* 11bed284 call 0x11bed2b0 */
  push32(0x11bed289u); f_11bed2b0();
  /* 11bed289 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed28c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bed28f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed292 push eax */
  push32((uint32_t)(EAX));
  /* 11bed293 call 0x11bee250 */
  push32(0x11bed298u); f_11bee250();
  /* 11bed298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed29b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bed29e:;
  /* 11bed29e mov esp, ebp */
  ESP = (EBP);
  /* 11bed2a0 pop ebp */
  EBP = (pop32());
  /* 11bed2a1 ret  */
  ESPCHK(0x11bed220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x11bed2b0 (178 bytes, 56 insns) */
void f_11bed2b0(void) {
  FTRACE(0x11bed2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed2b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bed2b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed2b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed2b9 push eax */
  push32((uint32_t)(EAX));
  /* 11bed2ba call 0x11bee040 */
  push32(0x11bed2bfu); f_11bee040();
  /* 11bed2bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed2c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bed2c5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed2c9 jne 0x11bed2de */
  if (!C.zf) goto L_11bed2de;
  /* 11bed2cb call 0x11bec9a0 */
  push32(0x11bed2d0u); f_11bec9a0();
  /* 11bed2d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bed2d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bed2d9 jmp 0x11bed35e */
  goto L_11bed35e;
L_11bed2de:;
  /* 11bed2de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bed2e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed2e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed2e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed2e7 push edx */
  push32((uint32_t)(EDX));
  /* 11bed2e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bed2eb push eax */
  push32((uint32_t)(EAX));
  /* 11bed2ec call dword ptr [0x11c132e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132e8))), 0x11bed2f2u);
  /* 11bed2f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bed2f5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed2f9 jne 0x11bed306 */
  if (!C.zf) goto L_11bed306;
  /* 11bed2fb call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11bed301u);
  /* 11bed301 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bed304 jmp 0x11bed30d */
  goto L_11bed30d;
L_11bed306:;
  /* 11bed306 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11bed30d:;
  /* 11bed30d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed311 je 0x11bed324 */
  if (C.zf) goto L_11bed324;
  /* 11bed313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed316 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed317 call 0x11bec900 */
  push32(0x11bed31cu); f_11bec900();
  /* 11bed31c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed31f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bed322 jmp 0x11bed35e */
  goto L_11bed35e;
L_11bed324:;
  /* 11bed324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed327 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11bed32a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed32d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11bed330 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed333 mov ecx, dword ptr [edx*4 + 0x11c12040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11bed33a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11bed33e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11bed341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed344 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bed347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed34a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bed34d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed350 mov eax, dword ptr [eax*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bed357 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11bed35b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11bed35e:;
  /* 11bed35e mov esp, ebp */
  ESP = (EBP);
  /* 11bed360 pop ebp */
  EBP = (pop32());
  /* 11bed361 ret  */
  ESPCHK(0x11bed2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d370 @ 0x11bed370 (130 bytes, 43 insns) */
void f_11bed370(void) {
  FTRACE(0x11bed370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed370 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed371 mov ebp, esp */
  EBP = (ESP);
  /* 11bed373 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed377 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed37d jae 0x11bed3a1 */
  if (!C.cf) goto L_11bed3a1;
  /* 11bed37f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed382 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed388 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bed38b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed38e mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bed395 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bed39a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bed39d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bed39f jne 0x11bed3bc */
  if (!C.zf) goto L_11bed3bc;
L_11bed3a1:;
  /* 11bed3a1 call 0x11bec9a0 */
  push32(0x11bed3a6u); f_11bec9a0();
  /* 11bed3a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bed3ac call 0x11bec9b0 */
  push32(0x11bed3b1u); f_11bec9b0();
  /* 11bed3b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bed3b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bed3ba jmp 0x11bed3ee */
  goto L_11bed3ee;
L_11bed3bc:;
  /* 11bed3bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed3bf push edx */
  push32((uint32_t)(EDX));
  /* 11bed3c0 call 0x11bee1c0 */
  push32(0x11bed3c5u); f_11bee1c0();
  /* 11bed3c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed3c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bed3cb push eax */
  push32((uint32_t)(EAX));
  /* 11bed3cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed3cf push ecx */
  push32((uint32_t)(ECX));
  /* 11bed3d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed3d3 push edx */
  push32((uint32_t)(EDX));
  /* 11bed3d4 call 0x11bed400 */
  push32(0x11bed3d9u); f_11bed400();
  /* 11bed3d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed3dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bed3df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed3e2 push eax */
  push32((uint32_t)(EAX));
  /* 11bed3e3 call 0x11bee250 */
  push32(0x11bed3e8u); f_11bee250();
  /* 11bed3e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bed3ee:;
  /* 11bed3ee mov esp, ebp */
  ESP = (EBP);
  /* 11bed3f0 pop ebp */
  EBP = (pop32());
  /* 11bed3f1 ret  */
  ESPCHK(0x11bed370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x11bed400 (627 bytes, 182 insns) */
void f_11bed400(void) {
  FTRACE(0x11bed400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed400 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed401 mov ebp, esp */
  EBP = (ESP);
  /* 11bed403 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed409 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bed410 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bed413 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11bed419 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed41d jne 0x11bed426 */
  if (!C.zf) goto L_11bed426;
  /* 11bed41f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed421 jmp 0x11bed66f */
  goto L_11bed66f;
L_11bed426:;
  /* 11bed426 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed429 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed42f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bed432 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed435 mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bed43c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bed441 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11bed444 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bed446 je 0x11bed458 */
  if (C.zf) goto L_11bed458;
  /* 11bed448 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bed44a push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed44c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed44f push edx */
  push32((uint32_t)(EDX));
  /* 11bed450 call 0x11bed2b0 */
  push32(0x11bed455u); f_11bed2b0();
  /* 11bed455 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bed458:;
  /* 11bed458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed45b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bed45e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed461 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bed464 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed467 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bed46e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11bed473 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11bed478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed47a je 0x11bed58c */
  if (C.zf) goto L_11bed58c;
  /* 11bed480 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed483 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bed486 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11bed48d:;
  /* 11bed48d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed490 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed493 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed496 jae 0x11bed58a */
  if (!C.cf) goto L_11bed58a;
  /* 11bed49c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11bed4a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bed4a5:;
  /* 11bed4a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed4a8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11bed4ae sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed4b0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed4b6 jge 0x11bed517 */
  if ((C.sf==C.of)) goto L_11bed517;
  /* 11bed4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed4bb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed4be cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed4c1 jae 0x11bed517 */
  if (!C.cf) goto L_11bed517;
  /* 11bed4c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed4c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bed4c8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11bed4ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed4d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed4d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bed4d7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11bed4de cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed4e1 jne 0x11bed501 */
  if (!C.zf) goto L_11bed501;
  /* 11bed4e3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11bed4e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed4ec mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11bed4f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed4f5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11bed4f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed4fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed4fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11bed501:;
  /* 11bed501 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed504 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11bed50a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11bed50c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed50f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed512 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bed515 jmp 0x11bed4a5 */
  goto L_11bed4a5;
L_11bed517:;
  /* 11bed517 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed519 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11bed51f push edx */
  push32((uint32_t)(EDX));
  /* 11bed520 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed523 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11bed529 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed52b push eax */
  push32((uint32_t)(EAX));
  /* 11bed52c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11bed532 push edx */
  push32((uint32_t)(EDX));
  /* 11bed533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed536 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bed539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed53c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bed53f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed542 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bed549 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11bed54c push eax */
  push32((uint32_t)(EAX));
  /* 11bed54d call dword ptr [0x11c13348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13348))), 0x11bed553u);
  /* 11bed553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed555 je 0x11bed57a */
  if (C.zf) goto L_11bed57a;
  /* 11bed557 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bed55a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed560 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bed563 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bed566 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11bed56c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed56e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed574 jge 0x11bed578 */
  if ((C.sf==C.of)) goto L_11bed578;
  /* 11bed576 jmp 0x11bed58a */
  goto L_11bed58a;
L_11bed578:;
  /* 11bed578 jmp 0x11bed585 */
  goto L_11bed585;
L_11bed57a:;
  /* 11bed57a call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11bed580u);
  /* 11bed580 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bed583 jmp 0x11bed58a */
  goto L_11bed58a;
L_11bed585:;
  /* 11bed585 jmp 0x11bed48d */
  goto L_11bed48d;
L_11bed58a:;
  /* 11bed58a jmp 0x11bed5dc */
  goto L_11bed5dc;
L_11bed58c:;
  /* 11bed58c push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed58e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11bed594 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed595 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bed598 push edx */
  push32((uint32_t)(EDX));
  /* 11bed599 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed59c push eax */
  push32((uint32_t)(EAX));
  /* 11bed59d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed5a0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed5a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed5a6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bed5a9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed5ac mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bed5b3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11bed5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed5b7 call dword ptr [0x11c13348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13348))), 0x11bed5bdu);
  /* 11bed5bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed5bf je 0x11bed5d3 */
  if (C.zf) goto L_11bed5d3;
  /* 11bed5c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bed5c8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11bed5ce mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11bed5d1 jmp 0x11bed5dc */
  goto L_11bed5dc;
L_11bed5d3:;
  /* 11bed5d3 call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11bed5d9u);
  /* 11bed5d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11bed5dc:;
  /* 11bed5dc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed5e0 jne 0x11bed666 */
  if (!C.zf) goto L_11bed666;
  /* 11bed5e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed5ea je 0x11bed61a */
  if (C.zf) goto L_11bed61a;
  /* 11bed5ec cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed5f0 jne 0x11bed609 */
  if (!C.zf) goto L_11bed609;
  /* 11bed5f2 call 0x11bec9a0 */
  push32(0x11bed5f7u); f_11bec9a0();
  /* 11bed5f7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bed5fd call 0x11bec9b0 */
  push32(0x11bed602u); f_11bec9b0();
  /* 11bed602 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bed605 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11bed607 jmp 0x11bed615 */
  goto L_11bed615;
L_11bed609:;
  /* 11bed609 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bed60c push edx */
  push32((uint32_t)(EDX));
  /* 11bed60d call 0x11bec900 */
  push32(0x11bed612u); f_11bec900();
  /* 11bed612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bed615:;
  /* 11bed615 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bed618 jmp 0x11bed66f */
  goto L_11bed66f;
L_11bed61a:;
  /* 11bed61a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed61d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bed620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed623 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bed626 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed629 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bed630 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11bed635 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11bed638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed63a je 0x11bed64b */
  if (C.zf) goto L_11bed64b;
  /* 11bed63c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed63f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bed642 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed645 jne 0x11bed64b */
  if (!C.zf) goto L_11bed64b;
  /* 11bed647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed649 jmp 0x11bed66f */
  goto L_11bed66f;
L_11bed64b:;
  /* 11bed64b call 0x11bec9a0 */
  push32(0x11bed650u); f_11bec9a0();
  /* 11bed650 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11bed656 call 0x11bec9b0 */
  push32(0x11bed65bu); f_11bec9b0();
  /* 11bed65b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bed661 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bed664 jmp 0x11bed66f */
  goto L_11bed66f;
L_11bed666:;
  /* 11bed666 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bed669 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11bed66f:;
  /* 11bed66f mov esp, ebp */
  ESP = (EBP);
  /* 11bed671 pop ebp */
  EBP = (pop32());
  /* 11bed672 ret  */
  ESPCHK(0x11bed400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d680 @ 0x11bed680 (199 bytes, 68 insns) */
void f_11bed680(void) {
  FTRACE(0x11bed680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed680 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed681 mov ebp, esp */
  EBP = (ESP);
  /* 11bed683 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed684 push ebx */
  push32((uint32_t)(EBX));
  /* 11bed685 push esi */
  push32((uint32_t)(ESI));
  /* 11bed686 push edi */
  push32((uint32_t)(EDI));
L_11bed687:;
  /* 11bed687 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed68b jne 0x11bed6ab */
  if (!C.zf) goto L_11bed6ab;
  /* 11bed68d push 0x11c0c0cc */
  push32((uint32_t)(0x11c0c0ccu));
  /* 11bed692 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bed694 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11bed696 push 0x11c0c198 */
  push32((uint32_t)(0x11c0c198u));
  /* 11bed69b push 2 */
  push32((uint32_t)(0x2u));
  /* 11bed69d call 0x11be3b90 */
  push32(0x11bed6a2u); f_11be3b90();
  /* 11bed6a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed6a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed6a8 jne 0x11bed6ab */
  if (!C.zf) goto L_11bed6ab;
  /* 11bed6aa int3  */
  x86_unimpl("int3 @ 0x11bed6aa");
L_11bed6ab:;
  /* 11bed6ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed6af jne 0x11bed687 */
  if (!C.zf) goto L_11bed687;
  /* 11bed6b1 mov ecx, dword ptr [0x11c10874] */
  ECX = (r32((uint32_t)(0x11c10874)));
  /* 11bed6b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed6ba mov dword ptr [0x11c10874], ecx */
  w32((uint32_t)(0x11c10874), (ECX));
  /* 11bed6c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed6c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bed6c6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11bed6c8 push 0x11c0c198 */
  push32((uint32_t)(0x11c0c198u));
  /* 11bed6cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11bed6cf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11bed6d4 call 0x11be4ad0 */
  push32(0x11bed6d9u); f_11be4ad0();
  /* 11bed6d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed6dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed6df mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11bed6e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed6e5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed6e9 je 0x11bed706 */
  if (C.zf) goto L_11bed706;
  /* 11bed6eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed6ee mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11bed6f1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11bed6f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed6f7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11bed6fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed6fd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11bed704 jmp 0x11bed72b */
  goto L_11bed72b;
L_11bed706:;
  /* 11bed706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed709 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bed70c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bed70f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed712 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11bed715 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed718 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed71b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed71e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11bed721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed724 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11bed72b:;
  /* 11bed72b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed72e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed731 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bed734 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bed736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed739 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11bed740 pop edi */
  EDI = (pop32());
  /* 11bed741 pop esi */
  ESI = (pop32());
  /* 11bed742 pop ebx */
  EBX = (pop32());
  /* 11bed743 mov esp, ebp */
  ESP = (EBP);
  /* 11bed745 pop ebp */
  EBP = (pop32());
  /* 11bed746 ret  */
  ESPCHK(0x11bed680u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11bed750 (50 bytes, 17 insns) */
void f_11bed750(void) {
  FTRACE(0x11bed750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed750 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed751 mov ebp, esp */
  EBP = (ESP);
  /* 11bed753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed756 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed75c jb 0x11bed762 */
  if (C.cf) goto L_11bed762;
  /* 11bed75e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bed760 jmp 0x11bed780 */
  goto L_11bed780;
L_11bed762:;
  /* 11bed762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed765 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed768 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed76b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bed76e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed771 mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bed778 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bed77d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11bed780:;
  /* 11bed780 pop ebp */
  EBP = (pop32());
  /* 11bed781 ret  */
  ESPCHK(0x11bed750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d790 @ 0x11bed790 (300 bytes, 80 insns) */
void f_11bed790(void) {
  FTRACE(0x11bed790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed790 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed791 mov ebp, esp */
  EBP = (ESP);
  /* 11bed793 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed794 cmp dword ptr [0x11c11d40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c11d40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed79b jne 0x11bed7a9 */
  if (!C.zf) goto L_11bed7a9;
  /* 11bed79d mov dword ptr [0x11c11d40], 0x200 */
  w32((uint32_t)(0x11c11d40), (0x200u));
  /* 11bed7a7 jmp 0x11bed7bc */
  goto L_11bed7bc;
L_11bed7a9:;
  /* 11bed7a9 cmp dword ptr [0x11c11d40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11c11d40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed7b0 jge 0x11bed7bc */
  if ((C.sf==C.of)) goto L_11bed7bc;
  /* 11bed7b2 mov dword ptr [0x11c11d40], 0x14 */
  w32((uint32_t)(0x11c11d40), (0x14u));
L_11bed7bc:;
  /* 11bed7bc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11bed7c1 push 0x11c0c1a4 */
  push32((uint32_t)(0x11c0c1a4u));
  /* 11bed7c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bed7c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11bed7ca mov eax, dword ptr [0x11c11d40] */
  EAX = (r32((uint32_t)(0x11c11d40)));
  /* 11bed7cf push eax */
  push32((uint32_t)(EAX));
  /* 11bed7d0 call 0x11be4ee0 */
  push32(0x11bed7d5u); f_11be4ee0();
  /* 11bed7d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed7d8 mov dword ptr [0x11c109e8], eax */
  w32((uint32_t)(0x11c109e8), (EAX));
  /* 11bed7dd cmp dword ptr [0x11c109e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed7e4 jne 0x11bed825 */
  if (!C.zf) goto L_11bed825;
  /* 11bed7e6 mov dword ptr [0x11c11d40], 0x14 */
  w32((uint32_t)(0x11c11d40), (0x14u));
  /* 11bed7f0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11bed7f5 push 0x11c0c1a4 */
  push32((uint32_t)(0x11c0c1a4u));
  /* 11bed7fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11bed7fc push 4 */
  push32((uint32_t)(0x4u));
  /* 11bed7fe mov ecx, dword ptr [0x11c11d40] */
  ECX = (r32((uint32_t)(0x11c11d40)));
  /* 11bed804 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed805 call 0x11be4ee0 */
  push32(0x11bed80au); f_11be4ee0();
  /* 11bed80a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed80d mov dword ptr [0x11c109e8], eax */
  w32((uint32_t)(0x11c109e8), (EAX));
  /* 11bed812 cmp dword ptr [0x11c109e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed819 jne 0x11bed825 */
  if (!C.zf) goto L_11bed825;
  /* 11bed81b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11bed81d call 0x11be3a40 */
  push32(0x11bed822u); f_11be3a40();
  /* 11bed822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bed825:;
  /* 11bed825 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bed82c jmp 0x11bed837 */
  goto L_11bed837;
L_11bed82e:;
  /* 11bed82e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed831 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed834 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bed837:;
  /* 11bed837 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed83b jge 0x11bed856 */
  if ((C.sf==C.of)) goto L_11bed856;
  /* 11bed83d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed840 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bed843 add eax, 0x11c0f120 */
  { uint32_t _a=(EAX),_b=(0x11c0f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed848 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed84b mov edx, dword ptr [0x11c109e8] */
  EDX = (r32((uint32_t)(0x11c109e8)));
  /* 11bed851 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11bed854 jmp 0x11bed82e */
  goto L_11bed82e;
L_11bed856:;
  /* 11bed856 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bed85d jmp 0x11bed868 */
  goto L_11bed868;
L_11bed85f:;
  /* 11bed85f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed862 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed865 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bed868:;
  /* 11bed868 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed86c jge 0x11bed8b8 */
  if ((C.sf==C.of)) goto L_11bed8b8;
  /* 11bed86e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed871 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed874 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed877 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bed87a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed87d mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bed884 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed888 je 0x11bed8a6 */
  if (C.zf) goto L_11bed8a6;
  /* 11bed88a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed88d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed893 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bed896 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bed899 mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bed8a0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed8a4 jne 0x11bed8b6 */
  if (!C.zf) goto L_11bed8b6;
L_11bed8a6:;
  /* 11bed8a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bed8a9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bed8ac mov dword ptr [ecx + 0x11c0f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11c0f130), (0xffffffffu));
L_11bed8b6:;
  /* 11bed8b6 jmp 0x11bed85f */
  goto L_11bed85f;
L_11bed8b8:;
  /* 11bed8b8 mov esp, ebp */
  ESP = (EBP);
  /* 11bed8ba pop ebp */
  EBP = (pop32());
  /* 11bed8bb ret  */
  ESPCHK(0x11bed790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x11bed8c0 (26 bytes, 9 insns) */
void f_11bed8c0(void) {
  FTRACE(0x11bed8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bed8c3 call 0x11bee4c0 */
  push32(0x11bed8c8u); f_11bee4c0();
  /* 11bed8c8 movsx eax, byte ptr [0x11c1068c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11c1068c))));
  /* 11bed8cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bed8d1 je 0x11bed8d8 */
  if (C.zf) goto L_11bed8d8;
  /* 11bed8d3 call 0x11bee280 */
  push32(0x11bed8d8u); f_11bee280();
L_11bed8d8:;
  /* 11bed8d8 pop ebp */
  EBP = (pop32());
  /* 11bed8d9 ret  */
  ESPCHK(0x11bed8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x11bed8e0 (61 bytes, 20 insns) */
void f_11bed8e0(void) {
  FTRACE(0x11bed8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11bed8e3 cmp dword ptr [ebp + 8], 0x11c0f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11c0f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed8ea jb 0x11bed90e */
  if (C.cf) goto L_11bed90e;
  /* 11bed8ec cmp dword ptr [ebp + 8], 0x11c0f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11c0f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed8f3 ja 0x11bed90e */
  if ((!C.cf&&!C.zf)) goto L_11bed90e;
  /* 11bed8f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed8f8 sub eax, 0x11c0f120 */
  { uint32_t _a=(EAX),_b=(0x11c0f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed8fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bed900 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed903 push eax */
  push32((uint32_t)(EAX));
  /* 11bed904 call 0x11be84d0 */
  push32(0x11bed909u); f_11be84d0();
  /* 11bed909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed90c jmp 0x11bed91b */
  goto L_11bed91b;
L_11bed90e:;
  /* 11bed90e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed911 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed914 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed915 call dword ptr [0x11c13324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13324))), 0x11bed91bu);
L_11bed91b:;
  /* 11bed91b pop ebp */
  EBP = (pop32());
  /* 11bed91c ret  */
  ESPCHK(0x11bed8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d920 @ 0x11bed920 (41 bytes, 16 insns) */
void f_11bed920(void) {
  FTRACE(0x11bed920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed920 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed921 mov ebp, esp */
  EBP = (ESP);
  /* 11bed923 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed927 jge 0x11bed93a */
  if ((C.sf==C.of)) goto L_11bed93a;
  /* 11bed929 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed92c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed92f push eax */
  push32((uint32_t)(EAX));
  /* 11bed930 call 0x11be84d0 */
  push32(0x11bed935u); f_11be84d0();
  /* 11bed935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed938 jmp 0x11bed947 */
  goto L_11bed947;
L_11bed93a:;
  /* 11bed93a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed93d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed940 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed941 call dword ptr [0x11c13324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13324))), 0x11bed947u);
L_11bed947:;
  /* 11bed947 pop ebp */
  EBP = (pop32());
  /* 11bed948 ret  */
  ESPCHK(0x11bed920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d950 @ 0x11bed950 (61 bytes, 20 insns) */
void f_11bed950(void) {
  FTRACE(0x11bed950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed950 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed951 mov ebp, esp */
  EBP = (ESP);
  /* 11bed953 cmp dword ptr [ebp + 8], 0x11c0f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11c0f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed95a jb 0x11bed97e */
  if (C.cf) goto L_11bed97e;
  /* 11bed95c cmp dword ptr [ebp + 8], 0x11c0f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11c0f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed963 ja 0x11bed97e */
  if ((!C.cf&&!C.zf)) goto L_11bed97e;
  /* 11bed965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed968 sub eax, 0x11c0f120 */
  { uint32_t _a=(EAX),_b=(0x11c0f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bed970 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed973 push eax */
  push32((uint32_t)(EAX));
  /* 11bed974 call 0x11be8570 */
  push32(0x11bed979u); f_11be8570();
  /* 11bed979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed97c jmp 0x11bed98b */
  goto L_11bed98b;
L_11bed97e:;
  /* 11bed97e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed981 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed984 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed985 call dword ptr [0x11c13320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13320))), 0x11bed98bu);
L_11bed98b:;
  /* 11bed98b pop ebp */
  EBP = (pop32());
  /* 11bed98c ret  */
  ESPCHK(0x11bed950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d990 @ 0x11bed990 (41 bytes, 16 insns) */
void f_11bed990(void) {
  FTRACE(0x11bed990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed990 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed991 mov ebp, esp */
  EBP = (ESP);
  /* 11bed993 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed997 jge 0x11bed9aa */
  if ((C.sf==C.of)) goto L_11bed9aa;
  /* 11bed999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bed99c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed99f push eax */
  push32((uint32_t)(EAX));
  /* 11bed9a0 call 0x11be8570 */
  push32(0x11bed9a5u); f_11be8570();
  /* 11bed9a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed9a8 jmp 0x11bed9b7 */
  goto L_11bed9b7;
L_11bed9aa:;
  /* 11bed9aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bed9ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11bed9b1 call dword ptr [0x11c13320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13320))), 0x11bed9b7u);
L_11bed9b7:;
  /* 11bed9b7 pop ebp */
  EBP = (pop32());
  /* 11bed9b8 ret  */
  ESPCHK(0x11bed990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9c0 @ 0x11bed9c0 (119 bytes, 34 insns) */
void f_11bed9c0(void) {
  FTRACE(0x11bed9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bed9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bed9c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bed9c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bed9c6 push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bed9cb call dword ptr [0x11c1335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1335c))), 0x11bed9d1u);
  /* 11bed9d1 cmp dword ptr [0x11c109d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bed9d8 je 0x11bed9f8 */
  if (C.zf) goto L_11bed9f8;
  /* 11bed9da push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bed9df call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11bed9e5u);
  /* 11bed9e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bed9e7 call 0x11be84d0 */
  push32(0x11bed9ecu); f_11be84d0();
  /* 11bed9ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bed9ef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bed9f6 jmp 0x11bed9ff */
  goto L_11bed9ff;
L_11bed9f8:;
  /* 11bed9f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11bed9ff:;
  /* 11bed9ff mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11beda03 push eax */
  push32((uint32_t)(EAX));
  /* 11beda04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beda07 push ecx */
  push32((uint32_t)(ECX));
  /* 11beda08 call 0x11beda40 */
  push32(0x11beda0du); f_11beda40();
  /* 11beda0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beda10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11beda13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beda17 je 0x11beda25 */
  if (C.zf) goto L_11beda25;
  /* 11beda19 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11beda1b call 0x11be8570 */
  push32(0x11beda20u); f_11be8570();
  /* 11beda20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beda23 jmp 0x11beda30 */
  goto L_11beda30;
L_11beda25:;
  /* 11beda25 push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11beda2a call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11beda30u);
L_11beda30:;
  /* 11beda30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beda33 mov esp, ebp */
  ESP = (EBP);
  /* 11beda35 pop ebp */
  EBP = (pop32());
  /* 11beda36 ret  */
  ESPCHK(0x11bed9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x11beda40 (160 bytes, 50 insns) */
void f_11beda40(void) {
  FTRACE(0x11beda40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beda40 push ebp */
  push32((uint32_t)(EBP));
  /* 11beda41 mov ebp, esp */
  EBP = (ESP);
  /* 11beda43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beda46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beda4a jne 0x11beda53 */
  if (!C.zf) goto L_11beda53;
  /* 11beda4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beda4e jmp 0x11bedadc */
  goto L_11bedadc;
L_11beda53:;
  /* 11beda53 cmp dword ptr [0x11c10858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beda5a jne 0x11beda8a */
  if (!C.zf) goto L_11beda8a;
  /* 11beda5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beda5f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beda64 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beda69 jle 0x11beda7b */
  if ((C.zf||C.sf!=C.of)) goto L_11beda7b;
  /* 11beda6b call 0x11bec9a0 */
  push32(0x11beda70u); f_11bec9a0();
  /* 11beda70 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11beda76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beda79 jmp 0x11bedadc */
  goto L_11bedadc;
L_11beda7b:;
  /* 11beda7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beda7e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11beda81 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11beda83 mov eax, 1 */
  EAX = (0x1u);
  /* 11beda88 jmp 0x11bedadc */
  goto L_11bedadc;
L_11beda8a:;
  /* 11beda8a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11beda91 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11beda94 push eax */
  push32((uint32_t)(EAX));
  /* 11beda95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11beda97 mov ecx, dword ptr [0x11c0eea4] */
  ECX = (r32((uint32_t)(0x11c0eea4)));
  /* 11beda9d push ecx */
  push32((uint32_t)(ECX));
  /* 11beda9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedaa1 push edx */
  push32((uint32_t)(EDX));
  /* 11bedaa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bedaa4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11bedaa7 push eax */
  push32((uint32_t)(EAX));
  /* 11bedaa8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bedaad mov ecx, dword ptr [0x11c10868] */
  ECX = (r32((uint32_t)(0x11c10868)));
  /* 11bedab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bedab4 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bedabau);
  /* 11bedaba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bedabd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedac1 je 0x11bedac9 */
  if (C.zf) goto L_11bedac9;
  /* 11bedac3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedac7 je 0x11bedad9 */
  if (C.zf) goto L_11bedad9;
L_11bedac9:;
  /* 11bedac9 call 0x11bec9a0 */
  push32(0x11bedaceu); f_11bec9a0();
  /* 11bedace mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11bedad4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bedad7 jmp 0x11bedadc */
  goto L_11bedadc;
L_11bedad9:;
  /* 11bedad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bedadc:;
  /* 11bedadc mov esp, ebp */
  ESP = (EBP);
  /* 11bedade pop ebp */
  EBP = (pop32());
  /* 11bedadf ret  */
  ESPCHK(0x11beda40u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11bedae0 (32 bytes, 18 insns) */
void f_11bedae0(void) {
  FTRACE(0x11bedae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bedae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bedae1 mov ebp, esp */
  EBP = (ESP);
  /* 11bedae3 push ebx */
  push32((uint32_t)(EBX));
  /* 11bedae4 push esi */
  push32((uint32_t)(ESI));
  /* 11bedae5 push edi */
  push32((uint32_t)(EDI));
  /* 11bedae6 push ebp */
  push32((uint32_t)(EBP));
  /* 11bedae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bedae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bedaeb push 0x11bedaf8 */
  push32((uint32_t)(0x11bedaf8u));
  /* 11bedaf0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11bedaf3 call 0x11bf522c */
  push32(0x11bedaf8u); f_11bf522c();
  /* 11bedaf8 pop ebp */
  EBP = (pop32());
  /* 11bedaf9 pop edi */
  EDI = (pop32());
  /* 11bedafa pop esi */
  ESI = (pop32());
  /* 11bedafb pop ebx */
  EBX = (pop32());
  /* 11bedafc mov esp, ebp */
  ESP = (EBP);
  /* 11bedafe pop ebp */
  EBP = (pop32());
  /* 11bedaff ret  */
  ESPCHK(0x11bedae0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11bedb22 (104 bytes, 33 insns) */
void f_11bedb22(void) {
  FTRACE(0x11bedb22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bedb22 push ebx */
  push32((uint32_t)(EBX));
  /* 11bedb23 push esi */
  push32((uint32_t)(ESI));
  /* 11bedb24 push edi */
  push32((uint32_t)(EDI));
  /* 11bedb25 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11bedb29 push eax */
  push32((uint32_t)(EAX));
  /* 11bedb2a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11bedb2c push 0x11bedb00 */
  push32((uint32_t)(0x11bedb00u));
  /* 11bedb31 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11bedb38 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11bedb3f:;
  /* 11bedb3f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11bedb43 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bedb46 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11bedb49 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedb4c je 0x11bedb7c */
  if (C.zf) goto L_11bedb7c;
  /* 11bedb4e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedb52 je 0x11bedb7c */
  if (C.zf) goto L_11bedb7c;
  /* 11bedb54 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11bedb57 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11bedb5a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11bedb5e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11bedb61 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedb66 jne 0x11bedb7a */
  if (!C.zf) goto L_11bedb7a;
  /* 11bedb68 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11bedb6d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11bedb71 call 0x11bedbb6 */
  push32(0x11bedb76u); f_11bedbb6();
  /* 11bedb76 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11bedb7au);
L_11bedb7a:;
  /* 11bedb7a jmp 0x11bedb3f */
  goto L_11bedb3f;
L_11bedb7c:;
  /* 11bedb7c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11bedb83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedb86 pop edi */
  EDI = (pop32());
  /* 11bedb87 pop esi */
  ESI = (pop32());
  /* 11bedb88 pop ebx */
  EBX = (pop32());
  /* 11bedb89 ret  */
  ESPCHK(0x11bedb22u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb6 @ 0x11bedbb6 (24 bytes, 10 insns) */
void f_11bedbb6(void) {
  FTRACE(0x11bedbb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bedbb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11bedbb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bedbb8 mov ebx, 0x11c0f3b8 */
  EBX = (0x11c0f3b8u);
  /* 11bedbbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedbc0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11bedbc3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11bedbc6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11bedbc9 pop ecx */
  ECX = (pop32());
  /* 11bedbca pop ebx */
  EBX = (pop32());
  /* 11bedbcb ret 4 */
  ESPCHK(0x11bedbb6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dc95 @ 0x11bedc95 (27 bytes, 11 insns) */
void f_11bedc95(void) {
  FTRACE(0x11bedc95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bedc95 push ebp */
  push32((uint32_t)(EBP));
  /* 11bedc96 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bedc9a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11bedc9c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11bedc9f push eax */
  push32((uint32_t)(EAX));
  /* 11bedca0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11bedca3 push eax */
  push32((uint32_t)(EAX));
  /* 11bedca4 call 0x11bedb22 */
  push32(0x11bedca9u); f_11bedb22();
  /* 11bedca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedcac pop ebp */
  EBP = (pop32());
  /* 11bedcad ret 4 */
  ESPCHK(0x11bedc95u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dcb0 @ 0x11bedcb0 (482 bytes, 138 insns) */
void f_11bedcb0(void) {
  FTRACE(0x11bedcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bedcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bedcb1 mov ebp, esp */
  EBP = (ESP);
  /* 11bedcb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bedcb6 push esi */
  push32((uint32_t)(ESI));
  /* 11bedcb7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11bedcbe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11bedcc0 call 0x11be84d0 */
  push32(0x11bedcc5u); f_11be84d0();
  /* 11bedcc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedcc8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bedccf jmp 0x11bedcda */
  goto L_11bedcda;
L_11bedcd1:;
  /* 11bedcd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bedcd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedcd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11bedcda:;
  /* 11bedcda cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedcde jge 0x11bede80 */
  if ((C.sf==C.of)) goto L_11bede80;
  /* 11bedce4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bedce7 cmp dword ptr [ecx*4 + 0x11c12040], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11c12040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedcef je 0x11bedde6 */
  if (C.zf) goto L_11bedde6;
  /* 11bedcf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bedcf8 mov eax, dword ptr [edx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11bedcff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bedd02 jmp 0x11bedd0d */
  goto L_11bedd0d;
L_11bedd04:;
  /* 11bedd04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd07 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedd0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bedd0d:;
  /* 11bedd0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bedd10 mov eax, dword ptr [edx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11bedd17 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedd1c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedd1f jae 0x11beddd6 */
  if (!C.cf) goto L_11beddd6;
  /* 11bedd25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11bedd2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11bedd2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bedd31 jne 0x11beddd1 */
  if (!C.zf) goto L_11beddd1;
  /* 11bedd37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd3a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedd3e jne 0x11bedd79 */
  if (!C.zf) goto L_11bedd79;
  /* 11bedd40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11bedd42 call 0x11be84d0 */
  push32(0x11bedd47u); f_11be84d0();
  /* 11bedd47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedd4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd4d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedd51 jne 0x11bedd6f */
  if (!C.zf) goto L_11bedd6f;
  /* 11bedd53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd56 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedd59 push edx */
  push32((uint32_t)(EDX));
  /* 11bedd5a call dword ptr [0x11c13328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13328))), 0x11bedd60u);
  /* 11bedd60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bedd66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedd69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11bedd6f:;
  /* 11bedd6f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11bedd71 call 0x11be8570 */
  push32(0x11bedd76u); f_11be8570();
  /* 11bedd76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bedd79:;
  /* 11bedd79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedd7f push eax */
  push32((uint32_t)(EAX));
  /* 11bedd80 call dword ptr [0x11c13324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13324))), 0x11bedd86u);
  /* 11bedd86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd89 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11bedd8d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11bedd90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bedd92 je 0x11bedda6 */
  if (C.zf) goto L_11bedda6;
  /* 11bedd94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedd97 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bedd9a push eax */
  push32((uint32_t)(EAX));
  /* 11bedd9b call dword ptr [0x11c13320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13320))), 0x11bedda1u);
  /* 11bedda1 jmp 0x11bedd04 */
  goto L_11bedd04;
L_11bedda6:;
  /* 11bedda6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bedda9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11beddaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beddb2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11beddb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beddb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beddbb sub eax, dword ptr [edx*4 + 0x11c12040] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11c12040))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beddc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11beddc3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11beddc8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11beddca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beddcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11beddcf jmp 0x11beddd6 */
  goto L_11beddd6;
L_11beddd1:;
  /* 11beddd1 jmp 0x11bedd04 */
  goto L_11bedd04;
L_11beddd6:;
  /* 11beddd6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beddda je 0x11bedde1 */
  if (C.zf) goto L_11bedde1;
  /* 11bedddc jmp 0x11bede80 */
  goto L_11bede80;
L_11bedde1:;
  /* 11bedde1 jmp 0x11bede7b */
  goto L_11bede7b;
L_11bedde6:;
  /* 11bedde6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11bedde8 push 0x11c0c1ac */
  push32((uint32_t)(0x11c0c1acu));
  /* 11bedded push 2 */
  push32((uint32_t)(0x2u));
  /* 11beddef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11beddf4 call 0x11be4ad0 */
  push32(0x11beddf9u); f_11be4ad0();
  /* 11beddf9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beddfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11beddff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bede03 je 0x11bede79 */
  if (C.zf) goto L_11bede79;
  /* 11bede05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bede08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bede0b mov dword ptr [eax*4 + 0x11c12040], ecx */
  w32((uint32_t)(EAX*4 + 0x11c12040), (ECX));
  /* 11bede12 mov edx, dword ptr [0x11c1217c] */
  EDX = (r32((uint32_t)(0x11c1217c)));
  /* 11bede18 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bede1b mov dword ptr [0x11c1217c], edx */
  w32((uint32_t)(0x11c1217c), (EDX));
  /* 11bede21 jmp 0x11bede2c */
  goto L_11bede2c;
L_11bede23:;
  /* 11bede23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bede26 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bede29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bede2c:;
  /* 11bede2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bede2f mov edx, dword ptr [ecx*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bede36 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bede3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bede3f jae 0x11bede64 */
  if (!C.cf) goto L_11bede64;
  /* 11bede41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bede44 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11bede48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bede4b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11bede51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bede54 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11bede58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bede5b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11bede62 jmp 0x11bede23 */
  goto L_11bede23;
L_11bede64:;
  /* 11bede64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bede67 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bede6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bede6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bede70 push edx */
  push32((uint32_t)(EDX));
  /* 11bede71 call 0x11bee1c0 */
  push32(0x11bede76u); f_11bee1c0();
  /* 11bede76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bede79:;
  /* 11bede79 jmp 0x11bede80 */
  goto L_11bede80;
L_11bede7b:;
  /* 11bede7b jmp 0x11bedcd1 */
  goto L_11bedcd1;
L_11bede80:;
  /* 11bede80 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11bede82 call 0x11be8570 */
  push32(0x11bede87u); f_11be8570();
  /* 11bede87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bede8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bede8d pop esi */
  ESI = (pop32());
  /* 11bede8e mov esp, ebp */
  ESP = (EBP);
  /* 11bede90 pop ebp */
  EBP = (pop32());
  /* 11bede91 ret  */
  ESPCHK(0x11bedcb0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11bedea0 (183 bytes, 57 insns) */
void f_11bedea0(void) {
  FTRACE(0x11bedea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bedea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bedea1 mov ebp, esp */
  EBP = (ESP);
  /* 11bedea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bedea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedea7 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedead jae 0x11bedf3a */
  if (!C.cf) goto L_11bedf3a;
  /* 11bedeb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedeb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bedeb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedebc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bedebf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bedec2 mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bedec9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedecd jne 0x11bedf3a */
  if (!C.zf) goto L_11bedf3a;
  /* 11bedecf cmp dword ptr [0x11c1064c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c1064c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beded6 jne 0x11bedf1a */
  if (!C.zf) goto L_11bedf1a;
  /* 11beded8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bededb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bedede cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedee2 je 0x11bedef2 */
  if (C.zf) goto L_11bedef2;
  /* 11bedee4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedee8 je 0x11bedf00 */
  if (C.zf) goto L_11bedf00;
  /* 11bedeea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedeee je 0x11bedf0e */
  if (C.zf) goto L_11bedf0e;
  /* 11bedef0 jmp 0x11bedf1a */
  goto L_11bedf1a;
L_11bedef2:;
  /* 11bedef2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bedef5 push edx */
  push32((uint32_t)(EDX));
  /* 11bedef6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11bedef8 call dword ptr [0x11c132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132e0))), 0x11bedefeu);
  /* 11bedefe jmp 0x11bedf1a */
  goto L_11bedf1a;
L_11bedf00:;
  /* 11bedf00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bedf03 push eax */
  push32((uint32_t)(EAX));
  /* 11bedf04 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11bedf06 call dword ptr [0x11c132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132e0))), 0x11bedf0cu);
  /* 11bedf0c jmp 0x11bedf1a */
  goto L_11bedf1a;
L_11bedf0e:;
  /* 11bedf0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bedf11 push ecx */
  push32((uint32_t)(ECX));
  /* 11bedf12 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11bedf14 call dword ptr [0x11c132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132e0))), 0x11bedf1au);
L_11bedf1a:;
  /* 11bedf1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedf1d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11bedf20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedf23 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11bedf26 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bedf29 mov ecx, dword ptr [edx*4 + 0x11c12040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11bedf30 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bedf33 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11bedf36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bedf38 jmp 0x11bedf53 */
  goto L_11bedf53;
L_11bedf3a:;
  /* 11bedf3a call 0x11bec9a0 */
  push32(0x11bedf3fu); f_11bec9a0();
  /* 11bedf3f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bedf45 call 0x11bec9b0 */
  push32(0x11bedf4au); f_11bec9b0();
  /* 11bedf4a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bedf50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11bedf53:;
  /* 11bedf53 mov esp, ebp */
  ESP = (EBP);
  /* 11bedf55 pop ebp */
  EBP = (pop32());
  /* 11bedf56 ret  */
  ESPCHK(0x11bedea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df60 @ 0x11bedf60 (216 bytes, 63 insns) */
void f_11bedf60(void) {
  FTRACE(0x11bedf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bedf60 push ebp */
  push32((uint32_t)(EBP));
  /* 11bedf61 mov ebp, esp */
  EBP = (ESP);
  /* 11bedf63 push ecx */
  push32((uint32_t)(ECX));
  /* 11bedf64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedf67 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedf6d jae 0x11bee01b */
  if (!C.cf) goto L_11bee01b;
  /* 11bedf73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedf76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bedf79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedf7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bedf7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bedf82 mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bedf89 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bedf8e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bedf91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bedf93 je 0x11bee01b */
  if (C.zf) goto L_11bee01b;
  /* 11bedf99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedf9c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11bedf9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedfa2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11bedfa5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bedfa8 mov ecx, dword ptr [edx*4 + 0x11c12040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11bedfaf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedfb3 je 0x11bee01b */
  if (C.zf) goto L_11bee01b;
  /* 11bedfb5 cmp dword ptr [0x11c1064c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c1064c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedfbc jne 0x11bedffa */
  if (!C.zf) goto L_11bedffa;
  /* 11bedfbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedfc1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bedfc4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedfc8 je 0x11bedfd8 */
  if (C.zf) goto L_11bedfd8;
  /* 11bedfca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedfce je 0x11bedfe4 */
  if (C.zf) goto L_11bedfe4;
  /* 11bedfd0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bedfd4 je 0x11bedff0 */
  if (C.zf) goto L_11bedff0;
  /* 11bedfd6 jmp 0x11bedffa */
  goto L_11bedffa;
L_11bedfd8:;
  /* 11bedfd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bedfda push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11bedfdc call dword ptr [0x11c132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132e0))), 0x11bedfe2u);
  /* 11bedfe2 jmp 0x11bedffa */
  goto L_11bedffa;
L_11bedfe4:;
  /* 11bedfe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bedfe6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11bedfe8 call dword ptr [0x11c132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132e0))), 0x11bedfeeu);
  /* 11bedfee jmp 0x11bedffa */
  goto L_11bedffa;
L_11bedff0:;
  /* 11bedff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bedff2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11bedff4 call dword ptr [0x11c132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132e0))), 0x11bedffau);
L_11bedffa:;
  /* 11bedffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bedffd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bee000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee003 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bee006 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee009 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bee010 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11bee017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bee019 jmp 0x11bee034 */
  goto L_11bee034;
L_11bee01b:;
  /* 11bee01b call 0x11bec9a0 */
  push32(0x11bee020u); f_11bec9a0();
  /* 11bee020 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bee026 call 0x11bec9b0 */
  push32(0x11bee02bu); f_11bec9b0();
  /* 11bee02b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bee031 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11bee034:;
  /* 11bee034 mov esp, ebp */
  ESP = (EBP);
  /* 11bee036 pop ebp */
  EBP = (pop32());
  /* 11bee037 ret  */
  ESPCHK(0x11bedf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e040 @ 0x11bee040 (102 bytes, 30 insns) */
void f_11bee040(void) {
  FTRACE(0x11bee040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee040 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee041 mov ebp, esp */
  EBP = (ESP);
  /* 11bee043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee046 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee04c jae 0x11bee08b */
  if (!C.cf) goto L_11bee08b;
  /* 11bee04e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee051 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bee054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee057 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bee05a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee05d mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bee064 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bee069 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bee06c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bee06e je 0x11bee08b */
  if (C.zf) goto L_11bee08b;
  /* 11bee070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee073 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11bee076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee079 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11bee07c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee07f mov ecx, dword ptr [edx*4 + 0x11c12040] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11c12040)));
  /* 11bee086 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11bee089 jmp 0x11bee0a4 */
  goto L_11bee0a4;
L_11bee08b:;
  /* 11bee08b call 0x11bec9a0 */
  push32(0x11bee090u); f_11bec9a0();
  /* 11bee090 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bee096 call 0x11bec9b0 */
  push32(0x11bee09bu); f_11bec9b0();
  /* 11bee09b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bee0a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11bee0a4:;
  /* 11bee0a4 pop ebp */
  EBP = (pop32());
  /* 11bee0a5 ret  */
  ESPCHK(0x11bee040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x11bee0b0 (260 bytes, 83 insns) */
void f_11bee0b0(void) {
  FTRACE(0x11bee0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee0b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bee0b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee0b6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bee0ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee0bd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11bee0c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee0c2 je 0x11bee0cd */
  if (C.zf) goto L_11bee0cd;
  /* 11bee0c4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bee0c7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11bee0ca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11bee0cd:;
  /* 11bee0cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee0d0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bee0d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bee0d8 je 0x11bee0e2 */
  if (C.zf) goto L_11bee0e2;
  /* 11bee0da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bee0dd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11bee0df mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11bee0e2:;
  /* 11bee0e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee0e5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11bee0eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bee0ed je 0x11bee0f8 */
  if (C.zf) goto L_11bee0f8;
  /* 11bee0ef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bee0f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11bee0f5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11bee0f8:;
  /* 11bee0f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee0fb push eax */
  push32((uint32_t)(EAX));
  /* 11bee0fc call dword ptr [0x11c13394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13394))), 0x11bee102u);
  /* 11bee102 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bee105 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee109 jne 0x11bee122 */
  if (!C.zf) goto L_11bee122;
  /* 11bee10b call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11bee111u);
  /* 11bee111 push eax */
  push32((uint32_t)(EAX));
  /* 11bee112 call 0x11bec900 */
  push32(0x11bee117u); f_11bec900();
  /* 11bee117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee11a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bee11d jmp 0x11bee1b0 */
  goto L_11bee1b0;
L_11bee122:;
  /* 11bee122 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee126 jne 0x11bee133 */
  if (!C.zf) goto L_11bee133;
  /* 11bee128 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bee12b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11bee12e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11bee131 jmp 0x11bee142 */
  goto L_11bee142;
L_11bee133:;
  /* 11bee133 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee137 jne 0x11bee142 */
  if (!C.zf) goto L_11bee142;
  /* 11bee139 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bee13c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11bee13f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11bee142:;
  /* 11bee142 call 0x11bedcb0 */
  push32(0x11bee147u); f_11bedcb0();
  /* 11bee147 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bee14a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee14e jne 0x11bee16b */
  if (!C.zf) goto L_11bee16b;
  /* 11bee150 call 0x11bec9a0 */
  push32(0x11bee155u); f_11bec9a0();
  /* 11bee155 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11bee15b call 0x11bec9b0 */
  push32(0x11bee160u); f_11bec9b0();
  /* 11bee160 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bee166 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bee169 jmp 0x11bee1b0 */
  goto L_11bee1b0;
L_11bee16b:;
  /* 11bee16b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee16e push eax */
  push32((uint32_t)(EAX));
  /* 11bee16f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee172 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee173 call 0x11bedea0 */
  push32(0x11bee178u); f_11bedea0();
  /* 11bee178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee17b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bee17e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11bee181 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11bee184 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee187 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bee18a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee18d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bee190 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee193 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bee19a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bee19d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11bee1a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee1a5 call 0x11bee250 */
  push32(0x11bee1aau); f_11bee250();
  /* 11bee1aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee1ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11bee1b0:;
  /* 11bee1b0 mov esp, ebp */
  ESP = (EBP);
  /* 11bee1b2 pop ebp */
  EBP = (pop32());
  /* 11bee1b3 ret  */
  ESPCHK(0x11bee0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x11bee1c0 (134 bytes, 44 insns) */
void f_11bee1c0(void) {
  FTRACE(0x11bee1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bee1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee1c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee1c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bee1ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee1cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bee1d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee1d3 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bee1da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee1dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bee1df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee1e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee1e6 jne 0x11bee221 */
  if (!C.zf) goto L_11bee221;
  /* 11bee1e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11bee1ea call 0x11be84d0 */
  push32(0x11bee1efu); f_11be84d0();
  /* 11bee1ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee1f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee1f5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee1f9 jne 0x11bee217 */
  if (!C.zf) goto L_11bee217;
  /* 11bee1fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee1fe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee201 push edx */
  push32((uint32_t)(EDX));
  /* 11bee202 call dword ptr [0x11c13328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13328))), 0x11bee208u);
  /* 11bee208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee20b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bee20e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee211 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee214 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11bee217:;
  /* 11bee217 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11bee219 call 0x11be8570 */
  push32(0x11bee21eu); f_11be8570();
  /* 11bee21e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bee221:;
  /* 11bee221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee224 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bee227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee22a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bee22d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee230 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bee237 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11bee23b push eax */
  push32((uint32_t)(EAX));
  /* 11bee23c call dword ptr [0x11c13324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13324))), 0x11bee242u);
  /* 11bee242 mov esp, ebp */
  ESP = (EBP);
  /* 11bee244 pop ebp */
  EBP = (pop32());
  /* 11bee245 ret  */
  ESPCHK(0x11bee1c0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11bee250 (38 bytes, 13 insns) */
void f_11bee250(void) {
  FTRACE(0x11bee250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee250 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee251 mov ebp, esp */
  EBP = (ESP);
  /* 11bee253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee256 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bee259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee25c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bee25f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee262 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bee269 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11bee26d push eax */
  push32((uint32_t)(EAX));
  /* 11bee26e call dword ptr [0x11c13320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13320))), 0x11bee274u);
  /* 11bee274 pop ebp */
  EBP = (pop32());
  /* 11bee275 ret  */
  ESPCHK(0x11bee250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e280 @ 0x11bee280 (218 bytes, 63 insns) */
void f_11bee280(void) {
  FTRACE(0x11bee280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee280 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee281 mov ebp, esp */
  EBP = (ESP);
  /* 11bee283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee286 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bee28d push 2 */
  push32((uint32_t)(0x2u));
  /* 11bee28f call 0x11be84d0 */
  push32(0x11bee294u); f_11be84d0();
  /* 11bee294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee297 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11bee29e jmp 0x11bee2a9 */
  goto L_11bee2a9;
L_11bee2a0:;
  /* 11bee2a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee2a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee2a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bee2a9:;
  /* 11bee2a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee2ac cmp ecx, dword ptr [0x11c11d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee2b2 jge 0x11bee349 */
  if ((C.sf==C.of)) goto L_11bee349;
  /* 11bee2b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee2bb mov eax, dword ptr [0x11c109e8] */
  EAX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee2c0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee2c4 je 0x11bee344 */
  if (C.zf) goto L_11bee344;
  /* 11bee2c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee2c9 mov edx, dword ptr [0x11c109e8] */
  EDX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee2cf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11bee2d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11bee2d5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11bee2db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bee2dd je 0x11bee301 */
  if (C.zf) goto L_11bee301;
  /* 11bee2df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee2e2 mov eax, dword ptr [0x11c109e8] */
  EAX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee2e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bee2ea push ecx */
  push32((uint32_t)(ECX));
  /* 11bee2eb call 0x11bef070 */
  push32(0x11bee2f0u); f_11bef070();
  /* 11bee2f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee2f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee2f6 je 0x11bee301 */
  if (C.zf) goto L_11bee301;
  /* 11bee2f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee2fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee2fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bee301:;
  /* 11bee301 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee305 jl 0x11bee344 */
  if ((C.sf!=C.of)) goto L_11bee344;
  /* 11bee307 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee30a mov ecx, dword ptr [0x11c109e8] */
  ECX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee310 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bee313 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee316 push edx */
  push32((uint32_t)(EDX));
  /* 11bee317 call dword ptr [0x11c1339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1339c))), 0x11bee31du);
  /* 11bee31d push 2 */
  push32((uint32_t)(0x2u));
  /* 11bee31f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee322 mov ecx, dword ptr [0x11c109e8] */
  ECX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee328 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bee32b push edx */
  push32((uint32_t)(EDX));
  /* 11bee32c call 0x11be5560 */
  push32(0x11bee331u); f_11be5560();
  /* 11bee331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee334 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee337 mov ecx, dword ptr [0x11c109e8] */
  ECX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee33d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11bee344:;
  /* 11bee344 jmp 0x11bee2a0 */
  goto L_11bee2a0;
L_11bee349:;
  /* 11bee349 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bee34b call 0x11be8570 */
  push32(0x11bee350u); f_11be8570();
  /* 11bee350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee356 mov esp, ebp */
  ESP = (EBP);
  /* 11bee358 pop ebp */
  EBP = (pop32());
  /* 11bee359 ret  */
  ESPCHK(0x11bee280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e360 @ 0x11bee360 (68 bytes, 26 insns) */
void f_11bee360(void) {
  FTRACE(0x11bee360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee360 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee361 mov ebp, esp */
  EBP = (ESP);
  /* 11bee363 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee364 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee368 jne 0x11bee376 */
  if (!C.zf) goto L_11bee376;
  /* 11bee36a push 0 */
  push32((uint32_t)(0x0u));
  /* 11bee36c call 0x11bee4d0 */
  push32(0x11bee371u); f_11bee4d0();
  /* 11bee371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee374 jmp 0x11bee3a0 */
  goto L_11bee3a0;
L_11bee376:;
  /* 11bee376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee379 push eax */
  push32((uint32_t)(EAX));
  /* 11bee37a call 0x11bed8e0 */
  push32(0x11bee37fu); f_11bed8e0();
  /* 11bee37f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee385 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee386 call 0x11bee3b0 */
  push32(0x11bee38bu); f_11bee3b0();
  /* 11bee38b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee38e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bee391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee394 push edx */
  push32((uint32_t)(EDX));
  /* 11bee395 call 0x11bed950 */
  push32(0x11bee39au); f_11bed950();
  /* 11bee39a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee39d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bee3a0:;
  /* 11bee3a0 mov esp, ebp */
  ESP = (EBP);
  /* 11bee3a2 pop ebp */
  EBP = (pop32());
  /* 11bee3a3 ret  */
  ESPCHK(0x11bee360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3b0 @ 0x11bee3b0 (65 bytes, 26 insns) */
void f_11bee3b0(void) {
  FTRACE(0x11bee3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee3b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bee3b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee3b6 push eax */
  push32((uint32_t)(EAX));
  /* 11bee3b7 call 0x11bee400 */
  push32(0x11bee3bcu); f_11bee400();
  /* 11bee3bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee3c1 je 0x11bee3c8 */
  if (C.zf) goto L_11bee3c8;
  /* 11bee3c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bee3c6 jmp 0x11bee3ef */
  goto L_11bee3ef;
L_11bee3c8:;
  /* 11bee3c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee3cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bee3ce and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bee3d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bee3d6 je 0x11bee3ed */
  if (C.zf) goto L_11bee3ed;
  /* 11bee3d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee3db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bee3de push ecx */
  push32((uint32_t)(ECX));
  /* 11bee3df call 0x11bef1c0 */
  push32(0x11bee3e4u); f_11bef1c0();
  /* 11bee3e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee3e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bee3e9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee3eb jmp 0x11bee3ef */
  goto L_11bee3ef;
L_11bee3ed:;
  /* 11bee3ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bee3ef:;
  /* 11bee3ef pop ebp */
  EBP = (pop32());
  /* 11bee3f0 ret  */
  ESPCHK(0x11bee3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e400 @ 0x11bee400 (183 bytes, 62 insns) */
void f_11bee400(void) {
  FTRACE(0x11bee400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee400 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee401 mov ebp, esp */
  EBP = (ESP);
  /* 11bee403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee406 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bee40d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee410 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bee413 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee416 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bee419 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11bee41c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee41f jne 0x11bee49b */
  if (!C.zf) goto L_11bee49b;
  /* 11bee421 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee424 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11bee427 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11bee42d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bee42f je 0x11bee49b */
  if (C.zf) goto L_11bee49b;
  /* 11bee431 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee437 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11bee439 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee43c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bee43f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee443 jle 0x11bee49b */
  if ((C.zf||C.sf!=C.of)) goto L_11bee49b;
  /* 11bee445 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee448 push edx */
  push32((uint32_t)(EDX));
  /* 11bee449 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee44c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bee44f push ecx */
  push32((uint32_t)(ECX));
  /* 11bee450 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee453 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11bee456 push eax */
  push32((uint32_t)(EAX));
  /* 11bee457 call 0x11bed370 */
  push32(0x11bee45cu); f_11bed370();
  /* 11bee45c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee45f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee462 jne 0x11bee485 */
  if (!C.zf) goto L_11bee485;
  /* 11bee464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee467 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bee46a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11bee470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bee472 je 0x11bee483 */
  if (C.zf) goto L_11bee483;
  /* 11bee474 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee477 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11bee47a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11bee47d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee480 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11bee483:;
  /* 11bee483 jmp 0x11bee49b */
  goto L_11bee49b;
L_11bee485:;
  /* 11bee485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee488 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11bee48b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11bee48e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee491 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11bee494 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bee49b:;
  /* 11bee49b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee49e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee4a1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11bee4a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bee4a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bee4a9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11bee4b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee4b3 mov esp, ebp */
  ESP = (EBP);
  /* 11bee4b5 pop ebp */
  EBP = (pop32());
  /* 11bee4b6 ret  */
  ESPCHK(0x11bee400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4c0 @ 0x11bee4c0 (15 bytes, 7 insns) */
void f_11bee4c0(void) {
  FTRACE(0x11bee4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee4c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bee4c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bee4c5 call 0x11bee4d0 */
  push32(0x11bee4cau); f_11bee4d0();
  /* 11bee4ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee4cd pop ebp */
  EBP = (pop32());
  /* 11bee4ce ret  */
  ESPCHK(0x11bee4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4d0 @ 0x11bee4d0 (319 bytes, 94 insns) */
void f_11bee4d0(void) {
  FTRACE(0x11bee4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bee4d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee4d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bee4dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bee4e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bee4e6 call 0x11be84d0 */
  push32(0x11bee4ebu); f_11be84d0();
  /* 11bee4eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee4ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bee4f5 jmp 0x11bee500 */
  goto L_11bee500;
L_11bee4f7:;
  /* 11bee4f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee4fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee4fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11bee500:;
  /* 11bee500 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee503 cmp ecx, dword ptr [0x11c11d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c11d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee509 jge 0x11bee5f3 */
  if ((C.sf==C.of)) goto L_11bee5f3;
  /* 11bee50f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee512 mov eax, dword ptr [0x11c109e8] */
  EAX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee517 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee51b je 0x11bee5ee */
  if (C.zf) goto L_11bee5ee;
  /* 11bee521 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee524 mov edx, dword ptr [0x11c109e8] */
  EDX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee52a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11bee52d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11bee530 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11bee536 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bee538 je 0x11bee5ee */
  if (C.zf) goto L_11bee5ee;
  /* 11bee53e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee541 mov eax, dword ptr [0x11c109e8] */
  EAX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee546 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bee549 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee54a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee54d push edx */
  push32((uint32_t)(EDX));
  /* 11bee54e call 0x11bed920 */
  push32(0x11bee553u); f_11bed920();
  /* 11bee553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee556 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee559 mov ecx, dword ptr [0x11c109e8] */
  ECX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee55f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bee562 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11bee565 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11bee56a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee56c je 0x11bee5d5 */
  if (C.zf) goto L_11bee5d5;
  /* 11bee56e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee572 jne 0x11bee599 */
  if (!C.zf) goto L_11bee599;
  /* 11bee574 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee577 mov edx, dword ptr [0x11c109e8] */
  EDX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee57d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11bee580 push eax */
  push32((uint32_t)(EAX));
  /* 11bee581 call 0x11bee3b0 */
  push32(0x11bee586u); f_11bee3b0();
  /* 11bee586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee589 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee58c je 0x11bee597 */
  if (C.zf) goto L_11bee597;
  /* 11bee58e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee591 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee594 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bee597:;
  /* 11bee597 jmp 0x11bee5d5 */
  goto L_11bee5d5;
L_11bee599:;
  /* 11bee599 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee59d jne 0x11bee5d5 */
  if (!C.zf) goto L_11bee5d5;
  /* 11bee59f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee5a2 mov eax, dword ptr [0x11c109e8] */
  EAX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee5a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bee5aa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bee5ad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11bee5b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bee5b2 je 0x11bee5d5 */
  if (C.zf) goto L_11bee5d5;
  /* 11bee5b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee5b7 mov ecx, dword ptr [0x11c109e8] */
  ECX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee5bd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bee5c0 push edx */
  push32((uint32_t)(EDX));
  /* 11bee5c1 call 0x11bee3b0 */
  push32(0x11bee5c6u); f_11bee3b0();
  /* 11bee5c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee5c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee5cc jne 0x11bee5d5 */
  if (!C.zf) goto L_11bee5d5;
  /* 11bee5ce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11bee5d5:;
  /* 11bee5d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee5d8 mov ecx, dword ptr [0x11c109e8] */
  ECX = (r32((uint32_t)(0x11c109e8)));
  /* 11bee5de mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bee5e1 push edx */
  push32((uint32_t)(EDX));
  /* 11bee5e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee5e5 push eax */
  push32((uint32_t)(EAX));
  /* 11bee5e6 call 0x11bed990 */
  push32(0x11bee5ebu); f_11bed990();
  /* 11bee5eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bee5ee:;
  /* 11bee5ee jmp 0x11bee4f7 */
  goto L_11bee4f7;
L_11bee5f3:;
  /* 11bee5f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bee5f5 call 0x11be8570 */
  push32(0x11bee5fau); f_11be8570();
  /* 11bee5fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee5fd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee601 jne 0x11bee608 */
  if (!C.zf) goto L_11bee608;
  /* 11bee603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bee606 jmp 0x11bee60b */
  goto L_11bee60b;
L_11bee608:;
  /* 11bee608 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11bee60b:;
  /* 11bee60b mov esp, ebp */
  ESP = (EBP);
  /* 11bee60d pop ebp */
  EBP = (pop32());
  /* 11bee60e ret  */
  ESPCHK(0x11bee4d0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11bee610 (15 bytes, 7 insns) */
void f_11bee610(void) {
  FTRACE(0x11bee610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee610 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee611 mov ebp, esp */
  EBP = (ESP);
  /* 11bee613 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bee615 call 0x11be3a40 */
  push32(0x11bee61au); f_11be3a40();
  /* 11bee61a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee61d pop ebp */
  EBP = (pop32());
  /* 11bee61e ret  */
  ESPCHK(0x11bee610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e620 @ 0x11bee620 (1007 bytes, 269 insns) */
void f_11bee620(void) {
  FTRACE(0x11bee620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bee620 push ebp */
  push32((uint32_t)(EBP));
  /* 11bee621 mov ebp, esp */
  EBP = (ESP);
  /* 11bee623 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee629 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee62d jl 0x11bee635 */
  if ((C.sf!=C.of)) goto L_11bee635;
  /* 11bee62f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee633 jle 0x11bee63c */
  if ((C.zf||C.sf!=C.of)) goto L_11bee63c;
L_11bee635:;
  /* 11bee635 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bee637 jmp 0x11beea0b */
  goto L_11beea0b;
L_11bee63c:;
  /* 11bee63c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bee63e call 0x11be84d0 */
  push32(0x11bee643u); f_11be84d0();
  /* 11bee643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee646 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bee64d mov eax, dword ptr [0x11c109d4] */
  EAX = (r32((uint32_t)(0x11c109d4)));
  /* 11bee652 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee655 mov dword ptr [0x11c109d4], eax */
  w32((uint32_t)(0x11c109d4), (EAX));
L_11bee65a:;
  /* 11bee65a cmp dword ptr [0x11c109e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee661 je 0x11bee66d */
  if (C.zf) goto L_11bee66d;
  /* 11bee663 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bee665 call dword ptr [0x11c132dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132dc))), 0x11bee66bu);
  /* 11bee66b jmp 0x11bee65a */
  goto L_11bee65a;
L_11bee66d:;
  /* 11bee66d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee671 je 0x11bee6b1 */
  if (C.zf) goto L_11bee6b1;
  /* 11bee673 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee677 je 0x11bee691 */
  if (C.zf) goto L_11bee691;
  /* 11bee679 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee67c push ecx */
  push32((uint32_t)(ECX));
  /* 11bee67d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee680 push edx */
  push32((uint32_t)(EDX));
  /* 11bee681 call 0x11beea10 */
  push32(0x11bee686u); f_11beea10();
  /* 11bee686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee689 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11bee68f jmp 0x11bee6a3 */
  goto L_11bee6a3;
L_11bee691:;
  /* 11bee691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee694 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee697 mov ecx, dword ptr [eax + 0x11c0f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x11c0f4dc)));
  /* 11bee69d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11bee6a3:;
  /* 11bee6a3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11bee6a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bee6ac jmp 0x11bee9eb */
  goto L_11bee9eb;
L_11bee6b1:;
  /* 11bee6b1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11bee6b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bee6bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee6c3 je 0x11bee9e3 */
  if (C.zf) goto L_11bee9e3;
  /* 11bee6c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee6cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bee6cf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee6d2 jne 0x11bee8f4 */
  if (!C.zf) goto L_11bee8f4;
  /* 11bee6d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee6db movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11bee6df cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee6e2 jne 0x11bee8f4 */
  if (!C.zf) goto L_11bee8f4;
  /* 11bee6e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee6eb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11bee6ef cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee6f2 jne 0x11bee8f4 */
  if (!C.zf) goto L_11bee8f4;
  /* 11bee6f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee6fb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11bee701:;
  /* 11bee701 push 0x11c0c1fc */
  push32((uint32_t)(0x11c0c1fcu));
  /* 11bee706 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bee70c push ecx */
  push32((uint32_t)(ECX));
  /* 11bee70d call 0x11bf0870 */
  push32(0x11bee712u); f_11bf0870();
  /* 11bee712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee715 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11bee71b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee722 je 0x11bee74d */
  if (C.zf) goto L_11bee74d;
  /* 11bee724 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bee72a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee730 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11bee736 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee73d je 0x11bee74d */
  if (C.zf) goto L_11bee74d;
  /* 11bee73f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bee745 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bee748 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee74b jne 0x11bee773 */
  if (!C.zf) goto L_11bee773;
L_11bee74d:;
  /* 11bee74d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee751 je 0x11bee76c */
  if (C.zf) goto L_11bee76c;
  /* 11bee753 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bee755 call 0x11be8570 */
  push32(0x11bee75au); f_11be8570();
  /* 11bee75a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee75d mov edx, dword ptr [0x11c109d4] */
  EDX = (r32((uint32_t)(0x11c109d4)));
  /* 11bee763 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee766 mov dword ptr [0x11c109d4], edx */
  w32((uint32_t)(0x11c109d4), (EDX));
L_11bee76c:;
  /* 11bee76c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bee76e jmp 0x11beea0b */
  goto L_11beea0b;
L_11bee773:;
  /* 11bee773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11bee77a jmp 0x11bee785 */
  goto L_11bee785;
L_11bee77c:;
  /* 11bee77c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bee77f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee782 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11bee785:;
  /* 11bee785 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee789 jg 0x11bee7d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bee7d3;
  /* 11bee78b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11bee791 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee792 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bee798 push edx */
  push32((uint32_t)(EDX));
  /* 11bee799 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bee79c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee79f mov ecx, dword ptr [eax + 0x11c0f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x11c0f4d8)));
  /* 11bee7a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee7a6 call 0x11bf0830 */
  push32(0x11bee7abu); f_11bf0830();
  /* 11bee7ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee7ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee7b0 jne 0x11bee7d1 */
  if (!C.zf) goto L_11bee7d1;
  /* 11bee7b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bee7b5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee7b8 mov eax, dword ptr [edx + 0x11c0f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x11c0f4d8)));
  /* 11bee7be push eax */
  push32((uint32_t)(EAX));
  /* 11bee7bf call 0x11be7900 */
  push32(0x11bee7c4u); f_11be7900();
  /* 11bee7c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee7c7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee7cd jne 0x11bee7d1 */
  if (!C.zf) goto L_11bee7d1;
  /* 11bee7cf jmp 0x11bee7d3 */
  goto L_11bee7d3;
L_11bee7d1:;
  /* 11bee7d1 jmp 0x11bee77c */
  goto L_11bee77c;
L_11bee7d3:;
  /* 11bee7d3 push 0x11c0c1f8 */
  push32((uint32_t)(0x11c0c1f8u));
  /* 11bee7d8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bee7de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee7e1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11bee7e7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bee7ed push edx */
  push32((uint32_t)(EDX));
  /* 11bee7ee call 0x11bf07f0 */
  push32(0x11bee7f3u); f_11bf07f0();
  /* 11bee7f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee7f6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11bee7fc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee803 jne 0x11bee839 */
  if (!C.zf) goto L_11bee839;
  /* 11bee805 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bee80b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bee80e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee811 je 0x11bee839 */
  if (C.zf) goto L_11bee839;
  /* 11bee813 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee817 je 0x11bee832 */
  if (C.zf) goto L_11bee832;
  /* 11bee819 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bee81b call 0x11be8570 */
  push32(0x11bee820u); f_11be8570();
  /* 11bee820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee823 mov edx, dword ptr [0x11c109d4] */
  EDX = (r32((uint32_t)(0x11c109d4)));
  /* 11bee829 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bee82c mov dword ptr [0x11c109d4], edx */
  w32((uint32_t)(0x11c109d4), (EDX));
L_11bee832:;
  /* 11bee832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bee834 jmp 0x11beea0b */
  goto L_11beea0b;
L_11bee839:;
  /* 11bee839 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee83d jg 0x11bee88a */
  if ((!C.zf&&C.sf==C.of)) goto L_11bee88a;
  /* 11bee83f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11bee845 push eax */
  push32((uint32_t)(EAX));
  /* 11bee846 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bee84c push ecx */
  push32((uint32_t)(ECX));
  /* 11bee84d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11bee853 push edx */
  push32((uint32_t)(EDX));
  /* 11bee854 call 0x11be82f0 */
  push32(0x11bee859u); f_11be82f0();
  /* 11bee859 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee85c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11bee862 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11bee86a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11bee870 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee871 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bee874 push edx */
  push32((uint32_t)(EDX));
  /* 11bee875 call 0x11beea10 */
  push32(0x11bee87au); f_11beea10();
  /* 11bee87a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee87f je 0x11bee88a */
  if (C.zf) goto L_11bee88a;
  /* 11bee881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee887 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11bee88a:;
  /* 11bee88a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bee890 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee896 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11bee89c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bee8a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bee8a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee8a7 je 0x11bee8b8 */
  if (C.zf) goto L_11bee8b8;
  /* 11bee8a9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bee8af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee8b2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11bee8b8:;
  /* 11bee8b8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bee8be movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bee8c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee8c3 jne 0x11bee701 */
  if (!C.zf) goto L_11bee701;
  /* 11bee8c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee8cd je 0x11bee8dc */
  if (C.zf) goto L_11bee8dc;
  /* 11bee8cf call 0x11beebb0 */
  push32(0x11bee8d4u); f_11beebb0();
  /* 11bee8d4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11bee8da jmp 0x11bee8e6 */
  goto L_11bee8e6;
L_11bee8dc:;
  /* 11bee8dc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11bee8e6:;
  /* 11bee8e6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11bee8ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bee8ef jmp 0x11bee9e1 */
  goto L_11bee9e1;
L_11bee8f4:;
  /* 11bee8f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bee8f7 push edx */
  push32((uint32_t)(EDX));
  /* 11bee8f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bee8fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11bee8fc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11bee902 push eax */
  push32((uint32_t)(EAX));
  /* 11bee903 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bee906 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee907 call 0x11beecb0 */
  push32(0x11bee90cu); f_11beecb0();
  /* 11bee90c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee90f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bee912 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee916 je 0x11bee9e1 */
  if (C.zf) goto L_11bee9e1;
  /* 11bee91c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bee923 jmp 0x11bee92e */
  goto L_11bee92e;
L_11bee925:;
  /* 11bee925 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bee928 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee92b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bee92e:;
  /* 11bee92e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee932 jg 0x11bee990 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bee990;
  /* 11bee934 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee938 je 0x11bee98e */
  if (C.zf) goto L_11bee98e;
  /* 11bee93a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bee93d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bee940 mov ecx, dword ptr [eax + 0x11c0f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x11c0f4dc)));
  /* 11bee946 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee947 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11bee94d push edx */
  push32((uint32_t)(EDX));
  /* 11bee94e call 0x11bf0760 */
  push32(0x11bee953u); f_11bf0760();
  /* 11bee953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee958 je 0x11bee985 */
  if (C.zf) goto L_11bee985;
  /* 11bee95a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11bee960 push eax */
  push32((uint32_t)(EAX));
  /* 11bee961 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bee964 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee965 call 0x11beea10 */
  push32(0x11bee96au); f_11beea10();
  /* 11bee96a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee96d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bee96f je 0x11bee97c */
  if (C.zf) goto L_11bee97c;
  /* 11bee971 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee974 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee977 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11bee97a jmp 0x11bee983 */
  goto L_11bee983;
L_11bee97c:;
  /* 11bee97c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11bee983:;
  /* 11bee983 jmp 0x11bee98e */
  goto L_11bee98e;
L_11bee985:;
  /* 11bee985 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bee988 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee98b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11bee98e:;
  /* 11bee98e jmp 0x11bee925 */
  goto L_11bee925;
L_11bee990:;
  /* 11bee990 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee994 je 0x11bee9bb */
  if (C.zf) goto L_11bee9bb;
  /* 11bee996 call 0x11beebb0 */
  push32(0x11bee99bu); f_11beebb0();
  /* 11bee99b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bee99e push 2 */
  push32((uint32_t)(0x2u));
  /* 11bee9a0 mov ecx, dword ptr [0x11c0f4dc] */
  ECX = (r32((uint32_t)(0x11c0f4dc)));
  /* 11bee9a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bee9a7 call 0x11be5560 */
  push32(0x11bee9acu); f_11be5560();
  /* 11bee9ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee9af mov dword ptr [0x11c0f4dc], 0 */
  w32((uint32_t)(0x11c0f4dc), (0x0u));
  /* 11bee9b9 jmp 0x11bee9e1 */
  goto L_11bee9e1;
L_11bee9bb:;
  /* 11bee9bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee9bf je 0x11bee9ce */
  if (C.zf) goto L_11bee9ce;
  /* 11bee9c1 call 0x11beebb0 */
  push32(0x11bee9c6u); f_11beebb0();
  /* 11bee9c6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11bee9cc jmp 0x11bee9d8 */
  goto L_11bee9d8;
L_11bee9ce:;
  /* 11bee9ce mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11bee9d8:;
  /* 11bee9d8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11bee9de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11bee9e1:;
  /* 11bee9e1 jmp 0x11bee9eb */
  goto L_11bee9eb;
L_11bee9e3:;
  /* 11bee9e3 call 0x11beebb0 */
  push32(0x11bee9e8u); f_11beebb0();
  /* 11bee9e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bee9eb:;
  /* 11bee9eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bee9ef je 0x11beea08 */
  if (C.zf) goto L_11beea08;
  /* 11bee9f1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bee9f3 call 0x11be8570 */
  push32(0x11bee9f8u); f_11be8570();
  /* 11bee9f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bee9fb mov eax, dword ptr [0x11c109d4] */
  EAX = (r32((uint32_t)(0x11c109d4)));
  /* 11beea00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beea03 mov dword ptr [0x11c109d4], eax */
  w32((uint32_t)(0x11c109d4), (EAX));
L_11beea08:;
  /* 11beea08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11beea0b:;
  /* 11beea0b mov esp, ebp */
  ESP = (EBP);
  /* 11beea0d pop ebp */
  EBP = (pop32());
  /* 11beea0e ret  */
  ESPCHK(0x11bee620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea10 @ 0x11beea10 (403 bytes, 117 insns) */
void f_11beea10(void) {
  FTRACE(0x11beea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beea10 push ebp */
  push32((uint32_t)(EBP));
  /* 11beea11 mov ebp, esp */
  EBP = (ESP);
  /* 11beea13 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beea19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beea1c push eax */
  push32((uint32_t)(EAX));
  /* 11beea1d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11beea23 push ecx */
  push32((uint32_t)(ECX));
  /* 11beea24 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11beea2a push edx */
  push32((uint32_t)(EDX));
  /* 11beea2b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11beea31 push eax */
  push32((uint32_t)(EAX));
  /* 11beea32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beea35 push ecx */
  push32((uint32_t)(ECX));
  /* 11beea36 call 0x11beecb0 */
  push32(0x11beea3bu); f_11beecb0();
  /* 11beea3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beea3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beea40 jne 0x11beea49 */
  if (!C.zf) goto L_11beea49;
  /* 11beea42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beea44 jmp 0x11beeb9f */
  goto L_11beeb9f;
L_11beea49:;
  /* 11beea49 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11beea4e push 0x11c0c200 */
  push32((uint32_t)(0x11c0c200u));
  /* 11beea53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beea55 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11beea5b push edx */
  push32((uint32_t)(EDX));
  /* 11beea5c call 0x11be7900 */
  push32(0x11beea61u); f_11be7900();
  /* 11beea61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beea64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beea67 push eax */
  push32((uint32_t)(EAX));
  /* 11beea68 call 0x11be4ad0 */
  push32(0x11beea6du); f_11be4ad0();
  /* 11beea6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beea70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11beea73 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beea77 jne 0x11beea80 */
  if (!C.zf) goto L_11beea80;
  /* 11beea79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beea7b jmp 0x11beeb9f */
  goto L_11beeb9f;
L_11beea80:;
  /* 11beea80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beea83 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beea86 mov ecx, dword ptr [eax + 0x11c0f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x11c0f4dc)));
  /* 11beea8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11beea8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beea92 mov eax, dword ptr [edx*4 + 0x11c10850] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c10850)));
  /* 11beea99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11beea9c push 6 */
  push32((uint32_t)(0x6u));
  /* 11beea9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeaa1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beeaa4 add ecx, 0x11c108a0 */
  { uint32_t _a=(ECX),_b=(0x11c108a0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeaaa push ecx */
  push32((uint32_t)(ECX));
  /* 11beeaab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11beeaae push edx */
  push32((uint32_t)(EDX));
  /* 11beeaaf call 0x11beb3b0 */
  push32(0x11beeab4u); f_11beb3b0();
  /* 11beeab4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeab7 mov eax, dword ptr [0x11c10868] */
  EAX = (r32((uint32_t)(0x11c10868)));
  /* 11beeabc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11beeabf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11beeac5 push ecx */
  push32((uint32_t)(ECX));
  /* 11beeac6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beeac9 push edx */
  push32((uint32_t)(EDX));
  /* 11beeaca call 0x11be7a80 */
  push32(0x11beeacfu); f_11be7a80();
  /* 11beeacf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beead2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beead5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beead8 mov dword ptr [ecx + 0x11c0f4dc], eax */
  w32((uint32_t)(ECX + 0x11c0f4dc), (EAX));
  /* 11beeade mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11beeae4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11beeaea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeaed mov dword ptr [eax*4 + 0x11c10850], edx */
  w32((uint32_t)(EAX*4 + 0x11c10850), (EDX));
  /* 11beeaf4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11beeaf6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11beeafc push ecx */
  push32((uint32_t)(ECX));
  /* 11beeafd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeb00 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beeb03 add edx, 0x11c108a0 */
  { uint32_t _a=(EDX),_b=(0x11c108a0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeb09 push edx */
  push32((uint32_t)(EDX));
  /* 11beeb0a call 0x11beb3b0 */
  push32(0x11beeb0fu); f_11beb3b0();
  /* 11beeb0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeb12 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beeb16 jne 0x11beeb23 */
  if (!C.zf) goto L_11beeb23;
  /* 11beeb18 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11beeb1e mov dword ptr [0x11c10868], eax */
  w32((uint32_t)(0x11c10868), (EAX));
L_11beeb23:;
  /* 11beeb23 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beeb27 jne 0x11beeb35 */
  if (!C.zf) goto L_11beeb35;
  /* 11beeb29 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11beeb2f mov dword ptr [0x11c1086c], ecx */
  w32((uint32_t)(0x11c1086c), (ECX));
L_11beeb35:;
  /* 11beeb35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeb38 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beeb3b call dword ptr [edx + 0x11c0f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11c0f4e0))), 0x11beeb41u);
  /* 11beeb41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beeb43 je 0x11beeb7c */
  if (C.zf) goto L_11beeb7c;
  /* 11beeb45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeb48 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beeb4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beeb4e mov dword ptr [eax + 0x11c0f4dc], ecx */
  w32((uint32_t)(EAX + 0x11c0f4dc), (ECX));
  /* 11beeb54 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beeb56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beeb59 push edx */
  push32((uint32_t)(EDX));
  /* 11beeb5a call 0x11be5560 */
  push32(0x11beeb5fu); f_11be5560();
  /* 11beeb5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeb62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeb65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beeb68 mov dword ptr [eax*4 + 0x11c10850], ecx */
  w32((uint32_t)(EAX*4 + 0x11c10850), (ECX));
  /* 11beeb6f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11beeb72 mov dword ptr [0x11c10868], edx */
  w32((uint32_t)(0x11c10868), (EDX));
  /* 11beeb78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beeb7a jmp 0x11beeb9f */
  goto L_11beeb9f;
L_11beeb7c:;
  /* 11beeb7c cmp dword ptr [ebp - 0xc], 0x11c0f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11c0f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beeb83 je 0x11beeb93 */
  if (C.zf) goto L_11beeb93;
  /* 11beeb85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beeb87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beeb8a push eax */
  push32((uint32_t)(EAX));
  /* 11beeb8b call 0x11be5560 */
  push32(0x11beeb90u); f_11be5560();
  /* 11beeb90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11beeb93:;
  /* 11beeb93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeb96 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beeb99 mov eax, dword ptr [ecx + 0x11c0f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x11c0f4dc)));
L_11beeb9f:;
  /* 11beeb9f mov esp, ebp */
  ESP = (EBP);
  /* 11beeba1 pop ebp */
  EBP = (pop32());
  /* 11beeba2 ret  */
  ESPCHK(0x11beea10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebb0 @ 0x11beebb0 (256 bytes, 72 insns) */
void f_11beebb0(void) {
  FTRACE(0x11beebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beebb1 mov ebp, esp */
  EBP = (ESP);
  /* 11beebb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beebb6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11beebbd cmp dword ptr [0x11c0f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c0f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beebc4 jne 0x11beebe4 */
  if (!C.zf) goto L_11beebe4;
  /* 11beebc6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11beebcb push 0x11c0c200 */
  push32((uint32_t)(0x11c0c200u));
  /* 11beebd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beebd2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11beebd7 call 0x11be4ad0 */
  push32(0x11beebdcu); f_11be4ad0();
  /* 11beebdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beebdf mov dword ptr [0x11c0f4dc], eax */
  w32((uint32_t)(0x11c0f4dc), (EAX));
L_11beebe4:;
  /* 11beebe4 mov eax, dword ptr [0x11c0f4dc] */
  EAX = (r32((uint32_t)(0x11c0f4dc)));
  /* 11beebe9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11beebec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11beebf3 jmp 0x11beebfe */
  goto L_11beebfe;
L_11beebf5:;
  /* 11beebf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beebf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beebfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11beebfe:;
  /* 11beebfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beec01 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beec04 mov eax, dword ptr [edx + 0x11c0f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x11c0f4dc)));
  /* 11beec0a push eax */
  push32((uint32_t)(EAX));
  /* 11beec0b push 0x11c0c20c */
  push32((uint32_t)(0x11c0c20cu));
  /* 11beec10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beec13 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beec16 mov edx, dword ptr [ecx + 0x11c0f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x11c0f4d8)));
  /* 11beec1c push edx */
  push32((uint32_t)(EDX));
  /* 11beec1d push 3 */
  push32((uint32_t)(0x3u));
  /* 11beec1f mov eax, dword ptr [0x11c0f4dc] */
  EAX = (r32((uint32_t)(0x11c0f4dc)));
  /* 11beec24 push eax */
  push32((uint32_t)(EAX));
  /* 11beec25 call 0x11beee50 */
  push32(0x11beec2au); f_11beee50();
  /* 11beec2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beec2d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beec31 jge 0x11beec79 */
  if ((C.sf==C.of)) goto L_11beec79;
  /* 11beec33 push 0x11c0c1f8 */
  push32((uint32_t)(0x11c0c1f8u));
  /* 11beec38 mov ecx, dword ptr [0x11c0f4dc] */
  ECX = (r32((uint32_t)(0x11c0f4dc)));
  /* 11beec3e push ecx */
  push32((uint32_t)(ECX));
  /* 11beec3f call 0x11be7a90 */
  push32(0x11beec44u); f_11be7a90();
  /* 11beec44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beec47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beec4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beec4d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beec50 mov eax, dword ptr [edx + 0x11c0f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x11c0f4dc)));
  /* 11beec56 push eax */
  push32((uint32_t)(EAX));
  /* 11beec57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beec5a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11beec5d mov edx, dword ptr [ecx + 0x11c0f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x11c0f4dc)));
  /* 11beec63 push edx */
  push32((uint32_t)(EDX));
  /* 11beec64 call 0x11bf0760 */
  push32(0x11beec69u); f_11bf0760();
  /* 11beec69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beec6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beec6e je 0x11beec77 */
  if (C.zf) goto L_11beec77;
  /* 11beec70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11beec77:;
  /* 11beec77 jmp 0x11beeca7 */
  goto L_11beeca7;
L_11beec79:;
  /* 11beec79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beec7d jne 0x11beec86 */
  if (!C.zf) goto L_11beec86;
  /* 11beec7f mov eax, dword ptr [0x11c0f4dc] */
  EAX = (r32((uint32_t)(0x11c0f4dc)));
  /* 11beec84 jmp 0x11beecac */
  goto L_11beecac;
L_11beec86:;
  /* 11beec86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beec88 mov eax, dword ptr [0x11c0f4dc] */
  EAX = (r32((uint32_t)(0x11c0f4dc)));
  /* 11beec8d push eax */
  push32((uint32_t)(EAX));
  /* 11beec8e call 0x11be5560 */
  push32(0x11beec93u); f_11be5560();
  /* 11beec93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beec96 mov dword ptr [0x11c0f4dc], 0 */
  w32((uint32_t)(0x11c0f4dc), (0x0u));
  /* 11beeca0 mov eax, dword ptr [0x11c0f4f4] */
  EAX = (r32((uint32_t)(0x11c0f4f4)));
  /* 11beeca5 jmp 0x11beecac */
  goto L_11beecac;
L_11beeca7:;
  /* 11beeca7 jmp 0x11beebf5 */
  goto L_11beebf5;
L_11beecac:;
  /* 11beecac mov esp, ebp */
  ESP = (EBP);
  /* 11beecae pop ebp */
  EBP = (pop32());
  /* 11beecaf ret  */
  ESPCHK(0x11beebb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x11beecb0 (388 bytes, 115 insns) */
void f_11beecb0(void) {
  FTRACE(0x11beecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beecb1 mov ebp, esp */
  EBP = (ESP);
  /* 11beecb3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beecb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beecbd jne 0x11beecc6 */
  if (!C.zf) goto L_11beecc6;
  /* 11beecbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beecc1 jmp 0x11beee30 */
  goto L_11beee30;
L_11beecc6:;
  /* 11beecc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beecc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11beeccc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beeccf jne 0x11beed20 */
  if (!C.zf) goto L_11beed20;
  /* 11beecd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beecd4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11beecd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beecda jne 0x11beed20 */
  if (!C.zf) goto L_11beed20;
  /* 11beecdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beecdf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11beece2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beece5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11beece9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beeced je 0x11beed09 */
  if (C.zf) goto L_11beed09;
  /* 11beecef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11beecf2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11beecf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11beecfa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11beed00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11beed03 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11beed09:;
  /* 11beed09 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beed0d je 0x11beed18 */
  if (C.zf) goto L_11beed18;
  /* 11beed0f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11beed12 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11beed18:;
  /* 11beed18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beed1b jmp 0x11beee30 */
  goto L_11beee30;
L_11beed20:;
  /* 11beed20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beed23 push ecx */
  push32((uint32_t)(ECX));
  /* 11beed24 push 0x11c0f450 */
  push32((uint32_t)(0x11c0f450u));
  /* 11beed29 call 0x11bf0760 */
  push32(0x11beed2eu); f_11bf0760();
  /* 11beed2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beed31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beed33 je 0x11beede8 */
  if (C.zf) goto L_11beede8;
  /* 11beed39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beed3c push edx */
  push32((uint32_t)(EDX));
  /* 11beed3d push 0x11c0f3cc */
  push32((uint32_t)(0x11c0f3ccu));
  /* 11beed42 call 0x11bf0760 */
  push32(0x11beed47u); f_11bf0760();
  /* 11beed47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beed4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beed4c je 0x11beede8 */
  if (C.zf) goto L_11beede8;
  /* 11beed52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beed55 push eax */
  push32((uint32_t)(EAX));
  /* 11beed56 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11beed5c push ecx */
  push32((uint32_t)(ECX));
  /* 11beed5d call 0x11beeea0 */
  push32(0x11beed62u); f_11beeea0();
  /* 11beed62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beed65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beed67 je 0x11beed70 */
  if (C.zf) goto L_11beed70;
  /* 11beed69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beed6b jmp 0x11beee30 */
  goto L_11beee30;
L_11beed70:;
  /* 11beed70 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11beed76 push edx */
  push32((uint32_t)(EDX));
  /* 11beed77 push 0x11c10878 */
  push32((uint32_t)(0x11c10878u));
  /* 11beed7c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11beed82 push eax */
  push32((uint32_t)(EAX));
  /* 11beed83 call 0x11bf08b0 */
  push32(0x11beed88u); f_11bf08b0();
  /* 11beed88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beed8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beed8d jne 0x11beed96 */
  if (!C.zf) goto L_11beed96;
  /* 11beed8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beed91 jmp 0x11beee30 */
  goto L_11beee30;
L_11beed96:;
  /* 11beed96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11beed98 mov cx, word ptr [0x11c1087c] */
  CX = (r16((uint32_t)(0x11c1087c)));
  /* 11beed9f mov dword ptr [0x11c10880], ecx */
  w32((uint32_t)(0x11c10880), (ECX));
  /* 11beeda5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11beedab push edx */
  push32((uint32_t)(EDX));
  /* 11beedac push 0x11c0f450 */
  push32((uint32_t)(0x11c0f450u));
  /* 11beedb1 call 0x11bef000 */
  push32(0x11beedb6u); f_11bef000();
  /* 11beedb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beedb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beedbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11beedbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11beedc1 je 0x11beedd6 */
  if (C.zf) goto L_11beedd6;
  /* 11beedc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beedc6 push edx */
  push32((uint32_t)(EDX));
  /* 11beedc7 push 0x11c0f3cc */
  push32((uint32_t)(0x11c0f3ccu));
  /* 11beedcc call 0x11be7a80 */
  push32(0x11beedd1u); f_11be7a80();
  /* 11beedd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beedd4 jmp 0x11beede8 */
  goto L_11beede8;
L_11beedd6:;
  /* 11beedd6 push 0x11c0f450 */
  push32((uint32_t)(0x11c0f450u));
  /* 11beeddb push 0x11c0f3cc */
  push32((uint32_t)(0x11c0f3ccu));
  /* 11beede0 call 0x11be7a80 */
  push32(0x11beede5u); f_11be7a80();
  /* 11beede5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11beede8:;
  /* 11beede8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beedec je 0x11beee01 */
  if (C.zf) goto L_11beee01;
  /* 11beedee push 6 */
  push32((uint32_t)(0x6u));
  /* 11beedf0 push 0x11c10878 */
  push32((uint32_t)(0x11c10878u));
  /* 11beedf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11beedf8 push eax */
  push32((uint32_t)(EAX));
  /* 11beedf9 call 0x11beb3b0 */
  push32(0x11beedfeu); f_11beb3b0();
  /* 11beedfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11beee01:;
  /* 11beee01 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beee05 je 0x11beee1a */
  if (C.zf) goto L_11beee1a;
  /* 11beee07 push 4 */
  push32((uint32_t)(0x4u));
  /* 11beee09 push 0x11c10880 */
  push32((uint32_t)(0x11c10880u));
  /* 11beee0e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11beee11 push ecx */
  push32((uint32_t)(ECX));
  /* 11beee12 call 0x11beb3b0 */
  push32(0x11beee17u); f_11beb3b0();
  /* 11beee17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11beee1a:;
  /* 11beee1a push 0x11c0f450 */
  push32((uint32_t)(0x11c0f450u));
  /* 11beee1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beee22 push edx */
  push32((uint32_t)(EDX));
  /* 11beee23 call 0x11be7a80 */
  push32(0x11beee28u); f_11be7a80();
  /* 11beee28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beee2b mov eax, 0x11c0f450 */
  EAX = (0x11c0f450u);
L_11beee30:;
  /* 11beee30 mov esp, ebp */
  ESP = (EBP);
  /* 11beee32 pop ebp */
  EBP = (pop32());
  /* 11beee33 ret  */
  ESPCHK(0x11beecb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee40 @ 0x11beee40 (7 bytes, 5 insns) */
void f_11beee40(void) {
  FTRACE(0x11beee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beee40 push ebp */
  push32((uint32_t)(EBP));
  /* 11beee41 mov ebp, esp */
  EBP = (ESP);
  /* 11beee43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beee45 pop ebp */
  EBP = (pop32());
  /* 11beee46 ret  */
  ESPCHK(0x11beee40u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11beee50 (79 bytes, 28 insns) */
void f_11beee50(void) {
  FTRACE(0x11beee50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beee50 push ebp */
  push32((uint32_t)(EBP));
  /* 11beee51 mov ebp, esp */
  EBP = (ESP);
  /* 11beee53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beee56 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11beee59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11beee5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11beee63 jmp 0x11beee6e */
  goto L_11beee6e;
L_11beee65:;
  /* 11beee65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beee68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beee6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11beee6e:;
  /* 11beee6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11beee71 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beee74 jge 0x11beee94 */
  if ((C.sf==C.of)) goto L_11beee94;
  /* 11beee76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beee79 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beee7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11beee7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beee82 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11beee85 push edx */
  push32((uint32_t)(EDX));
  /* 11beee86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beee89 push eax */
  push32((uint32_t)(EAX));
  /* 11beee8a call 0x11be7a90 */
  push32(0x11beee8fu); f_11be7a90();
  /* 11beee8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beee92 jmp 0x11beee65 */
  goto L_11beee65;
L_11beee94:;
  /* 11beee94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11beee9b mov esp, ebp */
  ESP = (EBP);
  /* 11beee9d pop ebp */
  EBP = (pop32());
  /* 11beee9e ret  */
  ESPCHK(0x11beee50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eea0 @ 0x11beeea0 (349 bytes, 122 insns) */
void f_11beeea0(void) {
  FTRACE(0x11beeea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beeea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11beeea1 mov ebp, esp */
  EBP = (ESP);
  /* 11beeea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11beeea6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11beeeab push 0 */
  push32((uint32_t)(0x0u));
  /* 11beeead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeeb0 push eax */
  push32((uint32_t)(EAX));
  /* 11beeeb1 call 0x11be8840 */
  push32(0x11beeeb6u); f_11be8840();
  /* 11beeeb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeeb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beeebc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11beeebf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11beeec1 jne 0x11beeeca */
  if (!C.zf) goto L_11beeeca;
  /* 11beeec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beeec5 jmp 0x11beeff9 */
  goto L_11beeff9;
L_11beeeca:;
  /* 11beeeca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beeecd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11beeed0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beeed3 jne 0x11beef00 */
  if (!C.zf) goto L_11beef00;
  /* 11beeed5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beeed8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11beeedc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beeede je 0x11beef00 */
  if (C.zf) goto L_11beef00;
  /* 11beeee0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beeee3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeee6 push ecx */
  push32((uint32_t)(ECX));
  /* 11beeee7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beeeea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeef0 push edx */
  push32((uint32_t)(EDX));
  /* 11beeef1 call 0x11be7a80 */
  push32(0x11beeef6u); f_11be7a80();
  /* 11beeef6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beeef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11beeefb jmp 0x11beeff9 */
  goto L_11beeff9;
L_11beef00:;
  /* 11beef00 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11beef07 jmp 0x11beef12 */
  goto L_11beef12;
L_11beef09:;
  /* 11beef09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beef0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beef0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11beef12:;
  /* 11beef12 push 0x11c0c210 */
  push32((uint32_t)(0x11c0c210u));
  /* 11beef17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beef1a push ecx */
  push32((uint32_t)(ECX));
  /* 11beef1b call 0x11bf07f0 */
  push32(0x11beef20u); f_11bf07f0();
  /* 11beef20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beef23 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11beef26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef2a jne 0x11beef34 */
  if (!C.zf) goto L_11beef34;
  /* 11beef2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beef2f jmp 0x11beeff9 */
  goto L_11beeff9;
L_11beef34:;
  /* 11beef34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beef37 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beef3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11beef3c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11beef3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef43 jne 0x11beef6a */
  if (!C.zf) goto L_11beef6a;
  /* 11beef45 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef49 jge 0x11beef6a */
  if ((C.sf==C.of)) goto L_11beef6a;
  /* 11beef4b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11beef4f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef52 je 0x11beef6a */
  if (C.zf) goto L_11beef6a;
  /* 11beef54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beef57 push edx */
  push32((uint32_t)(EDX));
  /* 11beef58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beef5b push eax */
  push32((uint32_t)(EAX));
  /* 11beef5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beef5f push ecx */
  push32((uint32_t)(ECX));
  /* 11beef60 call 0x11be82f0 */
  push32(0x11beef65u); f_11be82f0();
  /* 11beef65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beef68 jmp 0x11beefd0 */
  goto L_11beefd0;
L_11beef6a:;
  /* 11beef6a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef6e jne 0x11beef98 */
  if (!C.zf) goto L_11beef98;
  /* 11beef70 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef74 jge 0x11beef98 */
  if ((C.sf==C.of)) goto L_11beef98;
  /* 11beef76 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11beef7a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef7d je 0x11beef98 */
  if (C.zf) goto L_11beef98;
  /* 11beef7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beef82 push eax */
  push32((uint32_t)(EAX));
  /* 11beef83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beef86 push ecx */
  push32((uint32_t)(ECX));
  /* 11beef87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beef8a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beef8d push edx */
  push32((uint32_t)(EDX));
  /* 11beef8e call 0x11be82f0 */
  push32(0x11beef93u); f_11be82f0();
  /* 11beef93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beef96 jmp 0x11beefd0 */
  goto L_11beefd0;
L_11beef98:;
  /* 11beef98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beef9c jne 0x11beefcb */
  if (!C.zf) goto L_11beefcb;
  /* 11beef9e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11beefa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beefa4 je 0x11beefaf */
  if (C.zf) goto L_11beefaf;
  /* 11beefa6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11beefaa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beefad jne 0x11beefcb */
  if (!C.zf) goto L_11beefcb;
L_11beefaf:;
  /* 11beefaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beefb2 push edx */
  push32((uint32_t)(EDX));
  /* 11beefb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beefb6 push eax */
  push32((uint32_t)(EAX));
  /* 11beefb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beefba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beefc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11beefc1 call 0x11be82f0 */
  push32(0x11beefc6u); f_11be82f0();
  /* 11beefc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beefc9 jmp 0x11beefd0 */
  goto L_11beefd0;
L_11beefcb:;
  /* 11beefcb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11beefce jmp 0x11beeff9 */
  goto L_11beeff9;
L_11beefd0:;
  /* 11beefd0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11beefd4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beefd7 jne 0x11beefdb */
  if (!C.zf) goto L_11beefdb;
  /* 11beefd9 jmp 0x11beeff7 */
  goto L_11beeff7;
L_11beefdb:;
  /* 11beefdb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11beefdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beefe1 jne 0x11beefe5 */
  if (!C.zf) goto L_11beefe5;
  /* 11beefe3 jmp 0x11beeff7 */
  goto L_11beeff7;
L_11beefe5:;
  /* 11beefe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11beefe8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11beefeb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11beefef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11beeff2 jmp 0x11beef09 */
  goto L_11beef09;
L_11beeff7:;
  /* 11beeff7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11beeff9:;
  /* 11beeff9 mov esp, ebp */
  ESP = (EBP);
  /* 11beeffb pop ebp */
  EBP = (pop32());
  /* 11beeffc ret  */
  ESPCHK(0x11beeea0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11bef000 (101 bytes, 36 insns) */
void f_11bef000(void) {
  FTRACE(0x11bef000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bef000 push ebp */
  push32((uint32_t)(EBP));
  /* 11bef001 mov ebp, esp */
  EBP = (ESP);
  /* 11bef003 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bef006 push eax */
  push32((uint32_t)(EAX));
  /* 11bef007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef00a push ecx */
  push32((uint32_t)(ECX));
  /* 11bef00b call 0x11be7a80 */
  push32(0x11bef010u); f_11be7a80();
  /* 11bef010 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef013 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bef016 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11bef01a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bef01c je 0x11bef038 */
  if (C.zf) goto L_11bef038;
  /* 11bef01e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bef021 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef024 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef025 push 0x11c0c218 */
  push32((uint32_t)(0x11c0c218u));
  /* 11bef02a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef02c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef02f push edx */
  push32((uint32_t)(EDX));
  /* 11bef030 call 0x11beee50 */
  push32(0x11bef035u); f_11beee50();
  /* 11bef035 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bef038:;
  /* 11bef038 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bef03b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11bef042 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bef044 je 0x11bef063 */
  if (C.zf) goto L_11bef063;
  /* 11bef046 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bef049 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef04f push edx */
  push32((uint32_t)(EDX));
  /* 11bef050 push 0x11c0c214 */
  push32((uint32_t)(0x11c0c214u));
  /* 11bef055 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef05a push eax */
  push32((uint32_t)(EAX));
  /* 11bef05b call 0x11beee50 */
  push32(0x11bef060u); f_11beee50();
  /* 11bef060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bef063:;
  /* 11bef063 pop ebp */
  EBP = (pop32());
  /* 11bef064 ret  */
  ESPCHK(0x11bef000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f070 @ 0x11bef070 (130 bytes, 50 insns) */
void f_11bef070(void) {
  FTRACE(0x11bef070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bef070 push ebp */
  push32((uint32_t)(EBP));
  /* 11bef071 mov ebp, esp */
  EBP = (ESP);
  /* 11bef073 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef074 push ebx */
  push32((uint32_t)(EBX));
  /* 11bef075 push esi */
  push32((uint32_t)(ESI));
  /* 11bef076 push edi */
  push32((uint32_t)(EDI));
  /* 11bef077 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bef07e:;
  /* 11bef07e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef082 jne 0x11bef0a2 */
  if (!C.zf) goto L_11bef0a2;
  /* 11bef084 push 0x11c0c228 */
  push32((uint32_t)(0x11c0c228u));
  /* 11bef089 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bef08b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11bef08d push 0x11c0c21c */
  push32((uint32_t)(0x11c0c21cu));
  /* 11bef092 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef094 call 0x11be3b90 */
  push32(0x11bef099u); f_11be3b90();
  /* 11bef099 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef09c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef09f jne 0x11bef0a2 */
  if (!C.zf) goto L_11bef0a2;
  /* 11bef0a1 int3  */
  x86_unimpl("int3 @ 0x11bef0a1");
L_11bef0a2:;
  /* 11bef0a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bef0a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bef0a6 jne 0x11bef07e */
  if (!C.zf) goto L_11bef07e;
  /* 11bef0a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef0ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bef0ae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11bef0b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bef0b3 je 0x11bef0c1 */
  if (C.zf) goto L_11bef0c1;
  /* 11bef0b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef0b8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11bef0bf jmp 0x11bef0e8 */
  goto L_11bef0e8;
L_11bef0c1:;
  /* 11bef0c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef0c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef0c5 call 0x11bed8e0 */
  push32(0x11bef0cau); f_11bed8e0();
  /* 11bef0ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef0cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef0d0 push edx */
  push32((uint32_t)(EDX));
  /* 11bef0d1 call 0x11bef100 */
  push32(0x11bef0d6u); f_11bef100();
  /* 11bef0d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef0d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bef0dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef0df push eax */
  push32((uint32_t)(EAX));
  /* 11bef0e0 call 0x11bed950 */
  push32(0x11bef0e5u); f_11bed950();
  /* 11bef0e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bef0e8:;
  /* 11bef0e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef0eb pop edi */
  EDI = (pop32());
  /* 11bef0ec pop esi */
  ESI = (pop32());
  /* 11bef0ed pop ebx */
  EBX = (pop32());
  /* 11bef0ee mov esp, ebp */
  ESP = (EBP);
  /* 11bef0f0 pop ebp */
  EBP = (pop32());
  /* 11bef0f1 ret  */
  ESPCHK(0x11bef070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f100 @ 0x11bef100 (190 bytes, 67 insns) */
void f_11bef100(void) {
  FTRACE(0x11bef100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bef100 push ebp */
  push32((uint32_t)(EBP));
  /* 11bef101 mov ebp, esp */
  EBP = (ESP);
  /* 11bef103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bef106 push ebx */
  push32((uint32_t)(EBX));
  /* 11bef107 push esi */
  push32((uint32_t)(ESI));
  /* 11bef108 push edi */
  push32((uint32_t)(EDI));
  /* 11bef109 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bef110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef113 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bef116:;
  /* 11bef116 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef11a jne 0x11bef13a */
  if (!C.zf) goto L_11bef13a;
  /* 11bef11c push 0x11c0c0cc */
  push32((uint32_t)(0x11c0c0ccu));
  /* 11bef121 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bef123 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11bef125 push 0x11c0c21c */
  push32((uint32_t)(0x11c0c21cu));
  /* 11bef12a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef12c call 0x11be3b90 */
  push32(0x11bef131u); f_11be3b90();
  /* 11bef131 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef134 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef137 jne 0x11bef13a */
  if (!C.zf) goto L_11bef13a;
  /* 11bef139 int3  */
  x86_unimpl("int3 @ 0x11bef139");
L_11bef13a:;
  /* 11bef13a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef13c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bef13e jne 0x11bef116 */
  if (!C.zf) goto L_11bef116;
  /* 11bef140 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef143 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11bef146 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11bef14b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bef14d je 0x11bef1aa */
  if (C.zf) goto L_11bef1aa;
  /* 11bef14f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef152 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef153 call 0x11bee400 */
  push32(0x11bef158u); f_11bee400();
  /* 11bef158 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef15b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bef15e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef161 push edx */
  push32((uint32_t)(EDX));
  /* 11bef162 call 0x11bf1780 */
  push32(0x11bef167u); f_11bf1780();
  /* 11bef167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef16a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef16d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bef170 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef171 call 0x11bf1650 */
  push32(0x11bef176u); f_11bf1650();
  /* 11bef176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bef17b jge 0x11bef186 */
  if ((C.sf==C.of)) goto L_11bef186;
  /* 11bef17d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bef184 jmp 0x11bef1aa */
  goto L_11bef1aa;
L_11bef186:;
  /* 11bef186 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef189 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef18d je 0x11bef1aa */
  if (C.zf) goto L_11bef1aa;
  /* 11bef18f push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef191 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef194 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bef197 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef198 call 0x11be5560 */
  push32(0x11bef19du); f_11be5560();
  /* 11bef19d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef1a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef1a3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11bef1aa:;
  /* 11bef1aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef1ad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11bef1b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef1b7 pop edi */
  EDI = (pop32());
  /* 11bef1b8 pop esi */
  ESI = (pop32());
  /* 11bef1b9 pop ebx */
  EBX = (pop32());
  /* 11bef1ba mov esp, ebp */
  ESP = (EBP);
  /* 11bef1bc pop ebp */
  EBP = (pop32());
  /* 11bef1bd ret  */
  ESPCHK(0x11bef100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1c0 @ 0x11bef1c0 (210 bytes, 63 insns) */
void f_11bef1c0(void) {
  FTRACE(0x11bef1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bef1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bef1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bef1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef1c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef1c7 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef1cd jae 0x11bef1f1 */
  if (!C.cf) goto L_11bef1f1;
  /* 11bef1cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef1d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bef1d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef1d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bef1db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bef1de mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bef1e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bef1ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bef1ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bef1ef jne 0x11bef204 */
  if (!C.zf) goto L_11bef204;
L_11bef1f1:;
  /* 11bef1f1 call 0x11bec9a0 */
  push32(0x11bef1f6u); f_11bec9a0();
  /* 11bef1f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bef1fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bef1ff jmp 0x11bef28e */
  goto L_11bef28e;
L_11bef204:;
  /* 11bef204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef207 push edx */
  push32((uint32_t)(EDX));
  /* 11bef208 call 0x11bee1c0 */
  push32(0x11bef20du); f_11bee1c0();
  /* 11bef20d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef213 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bef216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef219 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bef21c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bef21f mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bef226 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11bef22b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11bef22e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bef230 je 0x11bef26d */
  if (C.zf) goto L_11bef26d;
  /* 11bef232 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef235 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef236 call 0x11bee040 */
  push32(0x11bef23bu); f_11bee040();
  /* 11bef23b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef23e push eax */
  push32((uint32_t)(EAX));
  /* 11bef23f call dword ptr [0x11c132d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132d8))), 0x11bef245u);
  /* 11bef245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bef247 jne 0x11bef254 */
  if (!C.zf) goto L_11bef254;
  /* 11bef249 call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11bef24fu);
  /* 11bef24f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bef252 jmp 0x11bef25b */
  goto L_11bef25b;
L_11bef254:;
  /* 11bef254 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11bef25b:;
  /* 11bef25b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef25f jne 0x11bef263 */
  if (!C.zf) goto L_11bef263;
  /* 11bef261 jmp 0x11bef27f */
  goto L_11bef27f;
L_11bef263:;
  /* 11bef263 call 0x11bec9b0 */
  push32(0x11bef268u); f_11bec9b0();
  /* 11bef268 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef26b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bef26d:;
  /* 11bef26d call 0x11bec9a0 */
  push32(0x11bef272u); f_11bec9a0();
  /* 11bef272 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bef278 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bef27f:;
  /* 11bef27f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef282 push eax */
  push32((uint32_t)(EAX));
  /* 11bef283 call 0x11bee250 */
  push32(0x11bef288u); f_11bee250();
  /* 11bef288 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef28b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bef28e:;
  /* 11bef28e mov esp, ebp */
  ESP = (EBP);
  /* 11bef290 pop ebp */
  EBP = (pop32());
  /* 11bef291 ret  */
  ESPCHK(0x11bef1c0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11bef2a0 (219 bytes, 64 insns) */
void f_11bef2a0(void) {
  FTRACE(0x11bef2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bef2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bef2a1 mov ebp, esp */
  EBP = (ESP);
  /* 11bef2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef2a4 cmp dword ptr [0x11c10864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef2ab je 0x11bef341 */
  if (C.zf) goto L_11bef341;
  /* 11bef2b1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11bef2b3 push 0x11c0c238 */
  push32((uint32_t)(0x11c0c238u));
  /* 11bef2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef2ba push 0xac */
  push32((uint32_t)(0xacu));
  /* 11bef2bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef2c1 call 0x11be4ee0 */
  push32(0x11bef2c6u); f_11be4ee0();
  /* 11bef2c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef2c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bef2cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef2d0 jne 0x11bef2dc */
  if (!C.zf) goto L_11bef2dc;
  /* 11bef2d2 mov eax, 1 */
  EAX = (0x1u);
  /* 11bef2d7 jmp 0x11bef377 */
  goto L_11bef377;
L_11bef2dc:;
  /* 11bef2dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef2df push eax */
  push32((uint32_t)(EAX));
  /* 11bef2e0 call 0x11bef380 */
  push32(0x11bef2e5u); f_11bef380();
  /* 11bef2e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef2e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bef2ea je 0x11bef30d */
  if (C.zf) goto L_11bef30d;
  /* 11bef2ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef2ef push ecx */
  push32((uint32_t)(ECX));
  /* 11bef2f0 call 0x11bef910 */
  push32(0x11bef2f5u); f_11bef910();
  /* 11bef2f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef2f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef2fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef2fd push edx */
  push32((uint32_t)(EDX));
  /* 11bef2fe call 0x11be5560 */
  push32(0x11bef303u); f_11be5560();
  /* 11bef303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef306 mov eax, 1 */
  EAX = (0x1u);
  /* 11bef30b jmp 0x11bef377 */
  goto L_11bef377;
L_11bef30d:;
  /* 11bef30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef310 mov dword ptr [0x11c0fc98], eax */
  w32((uint32_t)(0x11c0fc98), (EAX));
  /* 11bef315 mov ecx, dword ptr [0x11c10884] */
  ECX = (r32((uint32_t)(0x11c10884)));
  /* 11bef31b push ecx */
  push32((uint32_t)(ECX));
  /* 11bef31c call 0x11bef910 */
  push32(0x11bef321u); f_11bef910();
  /* 11bef321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef324 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef326 mov edx, dword ptr [0x11c10884] */
  EDX = (r32((uint32_t)(0x11c10884)));
  /* 11bef32c push edx */
  push32((uint32_t)(EDX));
  /* 11bef32d call 0x11be5560 */
  push32(0x11bef332u); f_11be5560();
  /* 11bef332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef335 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef338 mov dword ptr [0x11c10884], eax */
  w32((uint32_t)(0x11c10884), (EAX));
  /* 11bef33d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bef33f jmp 0x11bef377 */
  goto L_11bef377;
L_11bef341:;
  /* 11bef341 mov dword ptr [0x11c0fc98], 0x11c0fca0 */
  w32((uint32_t)(0x11c0fc98), (0x11c0fca0u));
  /* 11bef34b mov ecx, dword ptr [0x11c10884] */
  ECX = (r32((uint32_t)(0x11c10884)));
  /* 11bef351 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef352 call 0x11bef910 */
  push32(0x11bef357u); f_11bef910();
  /* 11bef357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef35a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef35c mov edx, dword ptr [0x11c10884] */
  EDX = (r32((uint32_t)(0x11c10884)));
  /* 11bef362 push edx */
  push32((uint32_t)(EDX));
  /* 11bef363 call 0x11be5560 */
  push32(0x11bef368u); f_11be5560();
  /* 11bef368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef36b mov dword ptr [0x11c10884], 0 */
  w32((uint32_t)(0x11c10884), (0x0u));
  /* 11bef375 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bef377:;
  /* 11bef377 mov esp, ebp */
  ESP = (EBP);
  /* 11bef379 pop ebp */
  EBP = (pop32());
  /* 11bef37a ret  */
  ESPCHK(0x11bef2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f380 @ 0x11bef380 (1423 bytes, 533 insns) */
void f_11bef380(void) {
  FTRACE(0x11bef380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bef380 push ebp */
  push32((uint32_t)(EBP));
  /* 11bef381 mov ebp, esp */
  EBP = (ESP);
  /* 11bef383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bef386 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bef38d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bef38f mov ax, word ptr [0x11c108be] */
  AX = (r16((uint32_t)(0x11c108be)));
  /* 11bef395 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bef398 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef39a mov cx, word ptr [0x11c108c0] */
  CX = (r16((uint32_t)(0x11c108c0)));
  /* 11bef3a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bef3a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef3a8 jne 0x11bef3b2 */
  if (!C.zf) goto L_11bef3b2;
  /* 11bef3aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bef3ad jmp 0x11bef90b */
  goto L_11bef90b;
L_11bef3b2:;
  /* 11bef3b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef3b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef3b8 push edx */
  push32((uint32_t)(EDX));
  /* 11bef3b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11bef3bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef3be push eax */
  push32((uint32_t)(EAX));
  /* 11bef3bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef3c1 call 0x11bf2c90 */
  push32(0x11bef3c6u); f_11bf2c90();
  /* 11bef3c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef3c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef3cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef3ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef3d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef3d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef3d7 push edx */
  push32((uint32_t)(EDX));
  /* 11bef3d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11bef3da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef3dd push eax */
  push32((uint32_t)(EAX));
  /* 11bef3de push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef3e0 call 0x11bf2c90 */
  push32(0x11bef3e5u); f_11bf2c90();
  /* 11bef3e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef3e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef3eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef3ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef3f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef3f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef3f6 push edx */
  push32((uint32_t)(EDX));
  /* 11bef3f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11bef3f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef3fc push eax */
  push32((uint32_t)(EAX));
  /* 11bef3fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef3ff call 0x11bf2c90 */
  push32(0x11bef404u); f_11bf2c90();
  /* 11bef404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef407 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef40a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef40c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef40f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef412 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef415 push edx */
  push32((uint32_t)(EDX));
  /* 11bef416 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11bef418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef41b push eax */
  push32((uint32_t)(EAX));
  /* 11bef41c push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef41e call 0x11bf2c90 */
  push32(0x11bef423u); f_11bf2c90();
  /* 11bef423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef426 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef429 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef42b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef42e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef431 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef434 push edx */
  push32((uint32_t)(EDX));
  /* 11bef435 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11bef437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef43a push eax */
  push32((uint32_t)(EAX));
  /* 11bef43b push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef43d call 0x11bf2c90 */
  push32(0x11bef442u); f_11bf2c90();
  /* 11bef442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef448 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef44a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef44d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef450 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef453 push edx */
  push32((uint32_t)(EDX));
  /* 11bef454 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11bef456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef459 push eax */
  push32((uint32_t)(EAX));
  /* 11bef45a push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef45c call 0x11bf2c90 */
  push32(0x11bef461u); f_11bf2c90();
  /* 11bef461 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef467 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef469 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef46c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef46f push edx */
  push32((uint32_t)(EDX));
  /* 11bef470 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11bef472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef475 push eax */
  push32((uint32_t)(EAX));
  /* 11bef476 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef478 call 0x11bf2c90 */
  push32(0x11bef47du); f_11bf2c90();
  /* 11bef47d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef480 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef483 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef485 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef48b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef48e push edx */
  push32((uint32_t)(EDX));
  /* 11bef48f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11bef491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef494 push eax */
  push32((uint32_t)(EAX));
  /* 11bef495 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef497 call 0x11bf2c90 */
  push32(0x11bef49cu); f_11bf2c90();
  /* 11bef49c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef49f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef4a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef4a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef4a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef4aa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef4ad push edx */
  push32((uint32_t)(EDX));
  /* 11bef4ae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11bef4b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef4b3 push eax */
  push32((uint32_t)(EAX));
  /* 11bef4b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef4b6 call 0x11bf2c90 */
  push32(0x11bef4bbu); f_11bf2c90();
  /* 11bef4bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef4be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef4c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef4c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef4c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef4c9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef4cc push edx */
  push32((uint32_t)(EDX));
  /* 11bef4cd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11bef4cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef4d2 push eax */
  push32((uint32_t)(EAX));
  /* 11bef4d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef4d5 call 0x11bf2c90 */
  push32(0x11bef4dau); f_11bf2c90();
  /* 11bef4da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef4dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef4e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef4e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef4e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef4e8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef4eb push edx */
  push32((uint32_t)(EDX));
  /* 11bef4ec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11bef4ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef4f1 push eax */
  push32((uint32_t)(EAX));
  /* 11bef4f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef4f4 call 0x11bf2c90 */
  push32(0x11bef4f9u); f_11bf2c90();
  /* 11bef4f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef4fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef4ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef501 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef507 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef50a push edx */
  push32((uint32_t)(EDX));
  /* 11bef50b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11bef50d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef510 push eax */
  push32((uint32_t)(EAX));
  /* 11bef511 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef513 call 0x11bf2c90 */
  push32(0x11bef518u); f_11bf2c90();
  /* 11bef518 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef51b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef51e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef526 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef529 push edx */
  push32((uint32_t)(EDX));
  /* 11bef52a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11bef52c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef52f push eax */
  push32((uint32_t)(EAX));
  /* 11bef530 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef532 call 0x11bf2c90 */
  push32(0x11bef537u); f_11bf2c90();
  /* 11bef537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef53a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef53d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef53f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef542 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef545 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef548 push edx */
  push32((uint32_t)(EDX));
  /* 11bef549 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11bef54b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef54e push eax */
  push32((uint32_t)(EAX));
  /* 11bef54f push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef551 call 0x11bf2c90 */
  push32(0x11bef556u); f_11bf2c90();
  /* 11bef556 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef559 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef55c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef55e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef561 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef564 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef567 push edx */
  push32((uint32_t)(EDX));
  /* 11bef568 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11bef56a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef56d push eax */
  push32((uint32_t)(EAX));
  /* 11bef56e push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef570 call 0x11bf2c90 */
  push32(0x11bef575u); f_11bf2c90();
  /* 11bef575 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef578 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef57b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef57d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef580 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef583 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef586 push edx */
  push32((uint32_t)(EDX));
  /* 11bef587 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11bef589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef58c push eax */
  push32((uint32_t)(EAX));
  /* 11bef58d push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef58f call 0x11bf2c90 */
  push32(0x11bef594u); f_11bf2c90();
  /* 11bef594 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef597 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef59a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef59c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef59f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef5a2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef5a5 push edx */
  push32((uint32_t)(EDX));
  /* 11bef5a6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11bef5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef5ab push eax */
  push32((uint32_t)(EAX));
  /* 11bef5ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef5ae call 0x11bf2c90 */
  push32(0x11bef5b3u); f_11bf2c90();
  /* 11bef5b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef5b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef5b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef5bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef5be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef5c1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef5c4 push edx */
  push32((uint32_t)(EDX));
  /* 11bef5c5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11bef5c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef5ca push eax */
  push32((uint32_t)(EAX));
  /* 11bef5cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef5cd call 0x11bf2c90 */
  push32(0x11bef5d2u); f_11bf2c90();
  /* 11bef5d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef5d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef5d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef5da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef5dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef5e0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef5e3 push edx */
  push32((uint32_t)(EDX));
  /* 11bef5e4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11bef5e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef5e9 push eax */
  push32((uint32_t)(EAX));
  /* 11bef5ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef5ec call 0x11bf2c90 */
  push32(0x11bef5f1u); f_11bf2c90();
  /* 11bef5f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef5f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef5f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef5f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef5fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef5ff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef602 push edx */
  push32((uint32_t)(EDX));
  /* 11bef603 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11bef605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef608 push eax */
  push32((uint32_t)(EAX));
  /* 11bef609 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef60b call 0x11bf2c90 */
  push32(0x11bef610u); f_11bf2c90();
  /* 11bef610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef613 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef616 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef618 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef61b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef61e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef621 push edx */
  push32((uint32_t)(EDX));
  /* 11bef622 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11bef624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef627 push eax */
  push32((uint32_t)(EAX));
  /* 11bef628 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef62a call 0x11bf2c90 */
  push32(0x11bef62fu); f_11bf2c90();
  /* 11bef62f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef632 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef635 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef637 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef63a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef63d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef640 push edx */
  push32((uint32_t)(EDX));
  /* 11bef641 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11bef643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef646 push eax */
  push32((uint32_t)(EAX));
  /* 11bef647 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef649 call 0x11bf2c90 */
  push32(0x11bef64eu); f_11bf2c90();
  /* 11bef64e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef651 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef654 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef656 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef65c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef65f push edx */
  push32((uint32_t)(EDX));
  /* 11bef660 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11bef662 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef665 push eax */
  push32((uint32_t)(EAX));
  /* 11bef666 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef668 call 0x11bf2c90 */
  push32(0x11bef66du); f_11bf2c90();
  /* 11bef66d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef670 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef673 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef675 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef678 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef67b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef67e push edx */
  push32((uint32_t)(EDX));
  /* 11bef67f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11bef681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef684 push eax */
  push32((uint32_t)(EAX));
  /* 11bef685 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef687 call 0x11bf2c90 */
  push32(0x11bef68cu); f_11bf2c90();
  /* 11bef68c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef68f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef692 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef694 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef69a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef69d push edx */
  push32((uint32_t)(EDX));
  /* 11bef69e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11bef6a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef6a3 push eax */
  push32((uint32_t)(EAX));
  /* 11bef6a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef6a6 call 0x11bf2c90 */
  push32(0x11bef6abu); f_11bf2c90();
  /* 11bef6ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef6ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef6b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef6b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef6b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef6b9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef6bc push edx */
  push32((uint32_t)(EDX));
  /* 11bef6bd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11bef6bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef6c2 push eax */
  push32((uint32_t)(EAX));
  /* 11bef6c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef6c5 call 0x11bf2c90 */
  push32(0x11bef6cau); f_11bf2c90();
  /* 11bef6ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef6cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef6d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef6d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef6d8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef6db push edx */
  push32((uint32_t)(EDX));
  /* 11bef6dc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11bef6de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef6e1 push eax */
  push32((uint32_t)(EAX));
  /* 11bef6e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef6e4 call 0x11bf2c90 */
  push32(0x11bef6e9u); f_11bf2c90();
  /* 11bef6e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef6ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef6ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef6f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef6f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef6f7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef6fa push edx */
  push32((uint32_t)(EDX));
  /* 11bef6fb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11bef6fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef700 push eax */
  push32((uint32_t)(EAX));
  /* 11bef701 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef703 call 0x11bf2c90 */
  push32(0x11bef708u); f_11bf2c90();
  /* 11bef708 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef70b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef70e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef710 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef713 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef716 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef719 push edx */
  push32((uint32_t)(EDX));
  /* 11bef71a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11bef71c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef71f push eax */
  push32((uint32_t)(EAX));
  /* 11bef720 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef722 call 0x11bf2c90 */
  push32(0x11bef727u); f_11bf2c90();
  /* 11bef727 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef72a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef72d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef72f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef732 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef735 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef738 push edx */
  push32((uint32_t)(EDX));
  /* 11bef739 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11bef73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef73e push eax */
  push32((uint32_t)(EAX));
  /* 11bef73f push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef741 call 0x11bf2c90 */
  push32(0x11bef746u); f_11bf2c90();
  /* 11bef746 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef749 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef74c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef74e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef754 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef757 push edx */
  push32((uint32_t)(EDX));
  /* 11bef758 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11bef75a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef75d push eax */
  push32((uint32_t)(EAX));
  /* 11bef75e push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef760 call 0x11bf2c90 */
  push32(0x11bef765u); f_11bf2c90();
  /* 11bef765 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef768 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef76b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef76d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef770 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef773 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef776 push edx */
  push32((uint32_t)(EDX));
  /* 11bef777 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11bef779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef77c push eax */
  push32((uint32_t)(EAX));
  /* 11bef77d push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef77f call 0x11bf2c90 */
  push32(0x11bef784u); f_11bf2c90();
  /* 11bef784 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef787 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef78a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef78f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef792 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef798 push edx */
  push32((uint32_t)(EDX));
  /* 11bef799 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11bef79b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef79e push eax */
  push32((uint32_t)(EAX));
  /* 11bef79f push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef7a1 call 0x11bf2c90 */
  push32(0x11bef7a6u); f_11bf2c90();
  /* 11bef7a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef7a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef7ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef7ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef7b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef7b4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef7ba push edx */
  push32((uint32_t)(EDX));
  /* 11bef7bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11bef7bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef7c0 push eax */
  push32((uint32_t)(EAX));
  /* 11bef7c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef7c3 call 0x11bf2c90 */
  push32(0x11bef7c8u); f_11bf2c90();
  /* 11bef7c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef7cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef7ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef7d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef7d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef7d6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef7dc push edx */
  push32((uint32_t)(EDX));
  /* 11bef7dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11bef7df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef7e2 push eax */
  push32((uint32_t)(EAX));
  /* 11bef7e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef7e5 call 0x11bf2c90 */
  push32(0x11bef7eau); f_11bf2c90();
  /* 11bef7ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef7ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef7f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef7f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef7f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef7f8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef7fe push edx */
  push32((uint32_t)(EDX));
  /* 11bef7ff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11bef801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef804 push eax */
  push32((uint32_t)(EAX));
  /* 11bef805 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef807 call 0x11bf2c90 */
  push32(0x11bef80cu); f_11bf2c90();
  /* 11bef80c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef80f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef812 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef814 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef81a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef820 push edx */
  push32((uint32_t)(EDX));
  /* 11bef821 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11bef823 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef826 push eax */
  push32((uint32_t)(EAX));
  /* 11bef827 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef829 call 0x11bf2c90 */
  push32(0x11bef82eu); f_11bf2c90();
  /* 11bef82e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef831 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef834 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef836 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef839 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef83c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef842 push edx */
  push32((uint32_t)(EDX));
  /* 11bef843 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11bef845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef848 push eax */
  push32((uint32_t)(EAX));
  /* 11bef849 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef84b call 0x11bf2c90 */
  push32(0x11bef850u); f_11bf2c90();
  /* 11bef850 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef853 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef856 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef858 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef85b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef85e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef864 push edx */
  push32((uint32_t)(EDX));
  /* 11bef865 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11bef867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef86a push eax */
  push32((uint32_t)(EAX));
  /* 11bef86b push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef86d call 0x11bf2c90 */
  push32(0x11bef872u); f_11bf2c90();
  /* 11bef872 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef875 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef878 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef87a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef87d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef880 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef886 push edx */
  push32((uint32_t)(EDX));
  /* 11bef887 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11bef889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bef88c push eax */
  push32((uint32_t)(EAX));
  /* 11bef88d push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef88f call 0x11bf2c90 */
  push32(0x11bef894u); f_11bf2c90();
  /* 11bef894 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef897 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef89a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef89c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef89f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef8a2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef8a8 push edx */
  push32((uint32_t)(EDX));
  /* 11bef8a9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11bef8ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef8ae push eax */
  push32((uint32_t)(EAX));
  /* 11bef8af push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef8b1 call 0x11bf2c90 */
  push32(0x11bef8b6u); f_11bf2c90();
  /* 11bef8b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef8b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef8bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef8be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef8c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef8c4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef8ca push edx */
  push32((uint32_t)(EDX));
  /* 11bef8cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11bef8cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef8d0 push eax */
  push32((uint32_t)(EAX));
  /* 11bef8d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef8d3 call 0x11bf2c90 */
  push32(0x11bef8d8u); f_11bf2c90();
  /* 11bef8d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef8db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef8de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef8e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef8e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef8e6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef8ec push edx */
  push32((uint32_t)(EDX));
  /* 11bef8ed push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11bef8f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bef8f5 push eax */
  push32((uint32_t)(EAX));
  /* 11bef8f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bef8f8 call 0x11bf2c90 */
  push32(0x11bef8fdu); f_11bf2c90();
  /* 11bef8fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef900 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bef903 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bef905 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bef908 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11bef90b:;
  /* 11bef90b mov esp, ebp */
  ESP = (EBP);
  /* 11bef90d pop ebp */
  EBP = (pop32());
  /* 11bef90e ret  */
  ESPCHK(0x11bef380u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11bef910 (779 bytes, 265 insns) */
void f_11bef910(void) {
  FTRACE(0x11bef910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bef910 push ebp */
  push32((uint32_t)(EBP));
  /* 11bef911 mov ebp, esp */
  EBP = (ESP);
  /* 11bef913 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bef917 jne 0x11bef91e */
  if (!C.zf) goto L_11bef91e;
  /* 11bef919 jmp 0x11befc19 */
  goto L_11befc19;
L_11bef91e:;
  /* 11bef91e push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef923 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bef926 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef927 call 0x11be5560 */
  push32(0x11bef92cu); f_11be5560();
  /* 11bef92c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef92f push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef934 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bef937 push eax */
  push32((uint32_t)(EAX));
  /* 11bef938 call 0x11be5560 */
  push32(0x11bef93du); f_11be5560();
  /* 11bef93d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef940 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef945 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bef948 push edx */
  push32((uint32_t)(EDX));
  /* 11bef949 call 0x11be5560 */
  push32(0x11bef94eu); f_11be5560();
  /* 11bef94e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef951 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef956 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bef959 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef95a call 0x11be5560 */
  push32(0x11bef95fu); f_11be5560();
  /* 11bef95f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef962 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef967 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bef96a push eax */
  push32((uint32_t)(EAX));
  /* 11bef96b call 0x11be5560 */
  push32(0x11bef970u); f_11be5560();
  /* 11bef970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef973 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef975 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef978 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11bef97b push edx */
  push32((uint32_t)(EDX));
  /* 11bef97c call 0x11be5560 */
  push32(0x11bef981u); f_11be5560();
  /* 11bef981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef984 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef989 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bef98b push ecx */
  push32((uint32_t)(ECX));
  /* 11bef98c call 0x11be5560 */
  push32(0x11bef991u); f_11be5560();
  /* 11bef991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef994 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef996 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef999 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11bef99c push eax */
  push32((uint32_t)(EAX));
  /* 11bef99d call 0x11be5560 */
  push32(0x11bef9a2u); f_11be5560();
  /* 11bef9a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef9a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef9a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef9aa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11bef9ad push edx */
  push32((uint32_t)(EDX));
  /* 11bef9ae call 0x11be5560 */
  push32(0x11bef9b3u); f_11be5560();
  /* 11bef9b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef9b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef9b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef9bb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11bef9be push ecx */
  push32((uint32_t)(ECX));
  /* 11bef9bf call 0x11be5560 */
  push32(0x11bef9c4u); f_11be5560();
  /* 11bef9c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef9c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef9c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef9cc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11bef9cf push eax */
  push32((uint32_t)(EAX));
  /* 11bef9d0 call 0x11be5560 */
  push32(0x11bef9d5u); f_11be5560();
  /* 11bef9d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef9d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef9da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef9dd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11bef9e0 push edx */
  push32((uint32_t)(EDX));
  /* 11bef9e1 call 0x11be5560 */
  push32(0x11bef9e6u); f_11be5560();
  /* 11bef9e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef9e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef9eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef9ee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11bef9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11bef9f2 call 0x11be5560 */
  push32(0x11bef9f7u); f_11be5560();
  /* 11bef9f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bef9fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11bef9fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bef9ff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11befa02 push eax */
  push32((uint32_t)(EAX));
  /* 11befa03 call 0x11be5560 */
  push32(0x11befa08u); f_11be5560();
  /* 11befa08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa10 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11befa13 push edx */
  push32((uint32_t)(EDX));
  /* 11befa14 call 0x11be5560 */
  push32(0x11befa19u); f_11be5560();
  /* 11befa19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa21 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11befa24 push ecx */
  push32((uint32_t)(ECX));
  /* 11befa25 call 0x11be5560 */
  push32(0x11befa2au); f_11be5560();
  /* 11befa2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa32 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11befa35 push eax */
  push32((uint32_t)(EAX));
  /* 11befa36 call 0x11be5560 */
  push32(0x11befa3bu); f_11be5560();
  /* 11befa3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa43 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11befa46 push edx */
  push32((uint32_t)(EDX));
  /* 11befa47 call 0x11be5560 */
  push32(0x11befa4cu); f_11be5560();
  /* 11befa4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa54 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11befa57 push ecx */
  push32((uint32_t)(ECX));
  /* 11befa58 call 0x11be5560 */
  push32(0x11befa5du); f_11be5560();
  /* 11befa5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa65 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11befa68 push eax */
  push32((uint32_t)(EAX));
  /* 11befa69 call 0x11be5560 */
  push32(0x11befa6eu); f_11be5560();
  /* 11befa6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa71 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa76 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11befa79 push edx */
  push32((uint32_t)(EDX));
  /* 11befa7a call 0x11be5560 */
  push32(0x11befa7fu); f_11be5560();
  /* 11befa7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa87 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11befa8a push ecx */
  push32((uint32_t)(ECX));
  /* 11befa8b call 0x11be5560 */
  push32(0x11befa90u); f_11be5560();
  /* 11befa90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befa93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befa95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befa98 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11befa9b push eax */
  push32((uint32_t)(EAX));
  /* 11befa9c call 0x11be5560 */
  push32(0x11befaa1u); f_11be5560();
  /* 11befaa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befaa4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befaa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befaa9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11befaac push edx */
  push32((uint32_t)(EDX));
  /* 11befaad call 0x11be5560 */
  push32(0x11befab2u); f_11be5560();
  /* 11befab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befab7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befaba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11befabd push ecx */
  push32((uint32_t)(ECX));
  /* 11befabe call 0x11be5560 */
  push32(0x11befac3u); f_11be5560();
  /* 11befac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befac6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befacb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11beface push eax */
  push32((uint32_t)(EAX));
  /* 11befacf call 0x11be5560 */
  push32(0x11befad4u); f_11be5560();
  /* 11befad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befadc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11befadf push edx */
  push32((uint32_t)(EDX));
  /* 11befae0 call 0x11be5560 */
  push32(0x11befae5u); f_11be5560();
  /* 11befae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befae8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befaea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befaed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11befaf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11befaf1 call 0x11be5560 */
  push32(0x11befaf6u); f_11be5560();
  /* 11befaf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befaf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befafb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befafe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11befb01 push eax */
  push32((uint32_t)(EAX));
  /* 11befb02 call 0x11be5560 */
  push32(0x11befb07u); f_11be5560();
  /* 11befb07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb0f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11befb12 push edx */
  push32((uint32_t)(EDX));
  /* 11befb13 call 0x11be5560 */
  push32(0x11befb18u); f_11be5560();
  /* 11befb18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb20 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11befb23 push ecx */
  push32((uint32_t)(ECX));
  /* 11befb24 call 0x11be5560 */
  push32(0x11befb29u); f_11be5560();
  /* 11befb29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb31 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11befb34 push eax */
  push32((uint32_t)(EAX));
  /* 11befb35 call 0x11be5560 */
  push32(0x11befb3au); f_11be5560();
  /* 11befb3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb42 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11befb48 push edx */
  push32((uint32_t)(EDX));
  /* 11befb49 call 0x11be5560 */
  push32(0x11befb4eu); f_11be5560();
  /* 11befb4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb51 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb56 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11befb5c push ecx */
  push32((uint32_t)(ECX));
  /* 11befb5d call 0x11be5560 */
  push32(0x11befb62u); f_11be5560();
  /* 11befb62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb65 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb6a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11befb70 push eax */
  push32((uint32_t)(EAX));
  /* 11befb71 call 0x11be5560 */
  push32(0x11befb76u); f_11be5560();
  /* 11befb76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb7e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11befb84 push edx */
  push32((uint32_t)(EDX));
  /* 11befb85 call 0x11be5560 */
  push32(0x11befb8au); f_11be5560();
  /* 11befb8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befb8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11befb8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befb92 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11befb98 push ecx */
  push32((uint32_t)(ECX));
  /* 11befb99 call 0x11be5560 */
  push32(0x11befb9eu); f_11be5560();
  /* 11befb9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befba1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befba6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11befbac push eax */
  push32((uint32_t)(EAX));
  /* 11befbad call 0x11be5560 */
  push32(0x11befbb2u); f_11be5560();
  /* 11befbb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befbb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befbb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befbba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11befbc0 push edx */
  push32((uint32_t)(EDX));
  /* 11befbc1 call 0x11be5560 */
  push32(0x11befbc6u); f_11be5560();
  /* 11befbc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befbc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befbcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befbce mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11befbd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11befbd5 call 0x11be5560 */
  push32(0x11befbdau); f_11be5560();
  /* 11befbda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befbdd push 2 */
  push32((uint32_t)(0x2u));
  /* 11befbdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befbe2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11befbe8 push eax */
  push32((uint32_t)(EAX));
  /* 11befbe9 call 0x11be5560 */
  push32(0x11befbeeu); f_11be5560();
  /* 11befbee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befbf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befbf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befbf6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11befbfc push edx */
  push32((uint32_t)(EDX));
  /* 11befbfd call 0x11be5560 */
  push32(0x11befc02u); f_11be5560();
  /* 11befc02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befc05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befc07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befc0a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11befc10 push ecx */
  push32((uint32_t)(ECX));
  /* 11befc11 call 0x11be5560 */
  push32(0x11befc16u); f_11be5560();
  /* 11befc16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11befc19:;
  /* 11befc19 pop ebp */
  EBP = (pop32());
  /* 11befc1a ret  */
  ESPCHK(0x11bef910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc20 @ 0x11befc20 (678 bytes, 180 insns) */
void f_11befc20(void) {
  FTRACE(0x11befc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11befc20 push ebp */
  push32((uint32_t)(EBP));
  /* 11befc21 mov ebp, esp */
  EBP = (ESP);
  /* 11befc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11befc26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11befc2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11befc2f mov ax, word ptr [0x11c108ba] */
  AX = (r16((uint32_t)(0x11c108ba)));
  /* 11befc35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11befc38 cmp dword ptr [0x11c10860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befc3f je 0x11befd9a */
  if (C.zf) goto L_11befd9a;
  /* 11befc45 push 0x11c10888 */
  push32((uint32_t)(0x11c10888u));
  /* 11befc4a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11befc4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11befc4f push ecx */
  push32((uint32_t)(ECX));
  /* 11befc50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11befc52 call 0x11bf2c90 */
  push32(0x11befc57u); f_11bf2c90();
  /* 11befc57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befc5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11befc5d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11befc5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11befc62 push 0x11c1088c */
  push32((uint32_t)(0x11c1088cu));
  /* 11befc67 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11befc69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11befc6c push eax */
  push32((uint32_t)(EAX));
  /* 11befc6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11befc6f call 0x11bf2c90 */
  push32(0x11befc74u); f_11bf2c90();
  /* 11befc74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befc77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11befc7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11befc7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11befc7f push 0x11c10890 */
  push32((uint32_t)(0x11c10890u));
  /* 11befc84 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11befc86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11befc89 push edx */
  push32((uint32_t)(EDX));
  /* 11befc8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11befc8c call 0x11bf2c90 */
  push32(0x11befc91u); f_11bf2c90();
  /* 11befc91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befc94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11befc97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11befc99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11befc9c mov edx, dword ptr [0x11c10890] */
  EDX = (r32((uint32_t)(0x11c10890)));
  /* 11befca2 push edx */
  push32((uint32_t)(EDX));
  /* 11befca3 call 0x11befed0 */
  push32(0x11befca8u); f_11befed0();
  /* 11befca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befcab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befcaf je 0x11befd09 */
  if (C.zf) goto L_11befd09;
  /* 11befcb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befcb3 mov eax, dword ptr [0x11c10888] */
  EAX = (r32((uint32_t)(0x11c10888)));
  /* 11befcb8 push eax */
  push32((uint32_t)(EAX));
  /* 11befcb9 call 0x11be5560 */
  push32(0x11befcbeu); f_11be5560();
  /* 11befcbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befcc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befcc3 mov ecx, dword ptr [0x11c1088c] */
  ECX = (r32((uint32_t)(0x11c1088c)));
  /* 11befcc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11befcca call 0x11be5560 */
  push32(0x11befccfu); f_11be5560();
  /* 11befccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befcd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befcd4 mov edx, dword ptr [0x11c10890] */
  EDX = (r32((uint32_t)(0x11c10890)));
  /* 11befcda push edx */
  push32((uint32_t)(EDX));
  /* 11befcdb call 0x11be5560 */
  push32(0x11befce0u); f_11be5560();
  /* 11befce0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befce3 mov dword ptr [0x11c10888], 0 */
  w32((uint32_t)(0x11c10888), (0x0u));
  /* 11befced mov dword ptr [0x11c1088c], 0 */
  w32((uint32_t)(0x11c1088c), (0x0u));
  /* 11befcf7 mov dword ptr [0x11c10890], 0 */
  w32((uint32_t)(0x11c10890), (0x0u));
  /* 11befd01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11befd04 jmp 0x11befec2 */
  goto L_11befec2;
L_11befd09:;
  /* 11befd09 mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd0e cmp dword ptr [eax], 0x11c0fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11c0fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befd14 je 0x11befd50 */
  if (C.zf) goto L_11befd50;
  /* 11befd16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befd18 mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11befd20 push edx */
  push32((uint32_t)(EDX));
  /* 11befd21 call 0x11be5560 */
  push32(0x11befd26u); f_11be5560();
  /* 11befd26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befd29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befd2b mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd30 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11befd33 push ecx */
  push32((uint32_t)(ECX));
  /* 11befd34 call 0x11be5560 */
  push32(0x11befd39u); f_11be5560();
  /* 11befd39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befd3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11befd3e mov edx, dword ptr [0x11c0fd88] */
  EDX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11befd47 push eax */
  push32((uint32_t)(EAX));
  /* 11befd48 call 0x11be5560 */
  push32(0x11befd4du); f_11be5560();
  /* 11befd4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11befd50:;
  /* 11befd50 mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd56 mov edx, dword ptr [0x11c10888] */
  EDX = (r32((uint32_t)(0x11c10888)));
  /* 11befd5c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11befd5e mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd63 mov ecx, dword ptr [0x11c1088c] */
  ECX = (r32((uint32_t)(0x11c1088c)));
  /* 11befd69 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11befd6c mov edx, dword ptr [0x11c0fd88] */
  EDX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd72 mov eax, dword ptr [0x11c10890] */
  EAX = (r32((uint32_t)(0x11c10890)));
  /* 11befd77 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11befd7a mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befd80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11befd82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11befd84 mov byte ptr [0x11c0eea8], al */
  w8((uint32_t)(0x11c0eea8), (AL));
  /* 11befd89 mov dword ptr [0x11c0eeac], 1 */
  w32((uint32_t)(0x11c0eeac), (0x1u));
  /* 11befd93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11befd95 jmp 0x11befec2 */
  goto L_11befec2;
L_11befd9a:;
  /* 11befd9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11befd9c mov ecx, dword ptr [0x11c10888] */
  ECX = (r32((uint32_t)(0x11c10888)));
  /* 11befda2 push ecx */
  push32((uint32_t)(ECX));
  /* 11befda3 call 0x11be5560 */
  push32(0x11befda8u); f_11be5560();
  /* 11befda8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befdab push 2 */
  push32((uint32_t)(0x2u));
  /* 11befdad mov edx, dword ptr [0x11c1088c] */
  EDX = (r32((uint32_t)(0x11c1088c)));
  /* 11befdb3 push edx */
  push32((uint32_t)(EDX));
  /* 11befdb4 call 0x11be5560 */
  push32(0x11befdb9u); f_11be5560();
  /* 11befdb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befdbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11befdbe mov eax, dword ptr [0x11c10890] */
  EAX = (r32((uint32_t)(0x11c10890)));
  /* 11befdc3 push eax */
  push32((uint32_t)(EAX));
  /* 11befdc4 call 0x11be5560 */
  push32(0x11befdc9u); f_11be5560();
  /* 11befdc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befdcc mov dword ptr [0x11c10888], 0 */
  w32((uint32_t)(0x11c10888), (0x0u));
  /* 11befdd6 mov dword ptr [0x11c1088c], 0 */
  w32((uint32_t)(0x11c1088c), (0x0u));
  /* 11befde0 mov dword ptr [0x11c10890], 0 */
  w32((uint32_t)(0x11c10890), (0x0u));
  /* 11befdea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11befdef push 0x11c0c244 */
  push32((uint32_t)(0x11c0c244u));
  /* 11befdf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befdf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befdf8 call 0x11be4ad0 */
  push32(0x11befdfdu); f_11be4ad0();
  /* 11befdfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befe00 mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11befe08 mov edx, dword ptr [0x11c0fd88] */
  EDX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe0e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befe11 jne 0x11befe1b */
  if (!C.zf) goto L_11befe1b;
  /* 11befe13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11befe16 jmp 0x11befec2 */
  goto L_11befec2;
L_11befe1b:;
  /* 11befe1b push 0x11c0c214 */
  push32((uint32_t)(0x11c0c214u));
  /* 11befe20 mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe25 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11befe27 push ecx */
  push32((uint32_t)(ECX));
  /* 11befe28 call 0x11be7a80 */
  push32(0x11befe2du); f_11be7a80();
  /* 11befe2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befe30 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11befe35 push 0x11c0c244 */
  push32((uint32_t)(0x11c0c244u));
  /* 11befe3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11befe3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11befe3e call 0x11be4ad0 */
  push32(0x11befe43u); f_11be4ad0();
  /* 11befe43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befe46 mov edx, dword ptr [0x11c0fd88] */
  EDX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe4c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11befe4f mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe54 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befe58 jne 0x11befe5f */
  if (!C.zf) goto L_11befe5f;
  /* 11befe5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11befe5d jmp 0x11befec2 */
  goto L_11befec2;
L_11befe5f:;
  /* 11befe5f mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11befe68 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11befe6b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11befe70 push 0x11c0c244 */
  push32((uint32_t)(0x11c0c244u));
  /* 11befe75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befe77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11befe79 call 0x11be4ad0 */
  push32(0x11befe7eu); f_11be4ad0();
  /* 11befe7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11befe81 mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe87 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11befe8a mov edx, dword ptr [0x11c0fd88] */
  EDX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befe90 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befe94 jne 0x11befe9b */
  if (!C.zf) goto L_11befe9b;
  /* 11befe96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11befe99 jmp 0x11befec2 */
  goto L_11befec2;
L_11befe9b:;
  /* 11befe9b mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befea0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11befea3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11befea6 mov edx, dword ptr [0x11c0fd88] */
  EDX = (r32((uint32_t)(0x11c0fd88)));
  /* 11befeac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11befeae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11befeb0 mov byte ptr [0x11c0eea8], cl */
  w8((uint32_t)(0x11c0eea8), (CL));
  /* 11befeb6 mov dword ptr [0x11c0eeac], 1 */
  w32((uint32_t)(0x11c0eeac), (0x1u));
  /* 11befec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11befec2:;
  /* 11befec2 mov esp, ebp */
  ESP = (EBP);
  /* 11befec4 pop ebp */
  EBP = (pop32());
  /* 11befec5 ret  */
  ESPCHK(0x11befc20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11befed0 (125 bytes, 49 insns) */
void f_11befed0(void) {
  FTRACE(0x11befed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11befed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11befed1 mov ebp, esp */
  EBP = (ESP);
  /* 11befed3 push ecx */
  push32((uint32_t)(ECX));
L_11befed4:;
  /* 11befed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befed7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11befeda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11befedc je 0x11beff49 */
  if (C.zf) goto L_11beff49;
  /* 11befede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befee1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11befee4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befee7 jl 0x11beff0d */
  if ((C.sf!=C.of)) goto L_11beff0d;
  /* 11befee9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befeec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11befeef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11befef2 jg 0x11beff0d */
  if ((!C.zf&&C.sf==C.of)) goto L_11beff0d;
  /* 11befef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11befef7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11befefa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11befefd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beff00 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11beff02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beff05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beff08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11beff0b jmp 0x11beff47 */
  goto L_11beff47;
L_11beff0d:;
  /* 11beff0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beff10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11beff13 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beff16 jne 0x11beff3e */
  if (!C.zf) goto L_11beff3e;
  /* 11beff18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beff1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11beff1e:;
  /* 11beff1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beff21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beff24 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11beff27 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11beff29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beff2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beff2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11beff32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beff35 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11beff38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beff3a jne 0x11beff1e */
  if (!C.zf) goto L_11beff1e;
  /* 11beff3c jmp 0x11beff47 */
  goto L_11beff47;
L_11beff3e:;
  /* 11beff3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11beff41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11beff44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11beff47:;
  /* 11beff47 jmp 0x11befed4 */
  goto L_11befed4;
L_11beff49:;
  /* 11beff49 mov esp, ebp */
  ESP = (EBP);
  /* 11beff4b pop ebp */
  EBP = (pop32());
  /* 11beff4c ret  */
  ESPCHK(0x11befed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x11beff50 (304 bytes, 85 insns) */
void f_11beff50(void) {
  FTRACE(0x11beff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11beff50 push ebp */
  push32((uint32_t)(EBP));
  /* 11beff51 mov ebp, esp */
  EBP = (ESP);
  /* 11beff53 push ecx */
  push32((uint32_t)(ECX));
  /* 11beff54 cmp dword ptr [0x11c1085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beff5b je 0x11bf001c */
  if (C.zf) goto L_11bf001c;
  /* 11beff61 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11beff63 push 0x11c0c250 */
  push32((uint32_t)(0x11c0c250u));
  /* 11beff68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beff6a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11beff6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11beff6e call 0x11be4ee0 */
  push32(0x11beff73u); f_11be4ee0();
  /* 11beff73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beff76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11beff79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11beff7d jne 0x11beff89 */
  if (!C.zf) goto L_11beff89;
  /* 11beff7f mov eax, 1 */
  EAX = (0x1u);
  /* 11beff84 jmp 0x11bf007c */
  goto L_11bf007c;
L_11beff89:;
  /* 11beff89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beff8c push eax */
  push32((uint32_t)(EAX));
  /* 11beff8d call 0x11bf0080 */
  push32(0x11beff92u); f_11bf0080();
  /* 11beff92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beff95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11beff97 je 0x11beffbd */
  if (C.zf) goto L_11beffbd;
  /* 11beff99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beff9c push ecx */
  push32((uint32_t)(ECX));
  /* 11beff9d call 0x11bf0310 */
  push32(0x11beffa2u); f_11bf0310();
  /* 11beffa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beffa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11beffa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beffaa push edx */
  push32((uint32_t)(EDX));
  /* 11beffab call 0x11be5560 */
  push32(0x11beffb0u); f_11be5560();
  /* 11beffb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beffb3 mov eax, 1 */
  EAX = (0x1u);
  /* 11beffb8 jmp 0x11bf007c */
  goto L_11bf007c;
L_11beffbd:;
  /* 11beffbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beffc0 mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11beffc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11beffc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11beffca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beffcd mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11beffd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11beffd6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11beffd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beffdc mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11beffe2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11beffe5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11beffe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11beffeb mov dword ptr [0x11c0fd88], eax */
  w32((uint32_t)(0x11c0fd88), (EAX));
  /* 11befff0 mov ecx, dword ptr [0x11c10894] */
  ECX = (r32((uint32_t)(0x11c10894)));
  /* 11befff6 push ecx */
  push32((uint32_t)(ECX));
  /* 11befff7 call 0x11bf0310 */
  push32(0x11befffcu); f_11bf0310();
  /* 11befffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11beffff push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0001 mov edx, dword ptr [0x11c10894] */
  EDX = (r32((uint32_t)(0x11c10894)));
  /* 11bf0007 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0008 call 0x11be5560 */
  push32(0x11bf000du); f_11be5560();
  /* 11bf000d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0013 mov dword ptr [0x11c10894], eax */
  w32((uint32_t)(0x11c10894), (EAX));
  /* 11bf0018 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf001a jmp 0x11bf007c */
  goto L_11bf007c;
L_11bf001c:;
  /* 11bf001c mov ecx, dword ptr [0x11c0fd88] */
  ECX = (r32((uint32_t)(0x11c0fd88)));
  /* 11bf0022 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf0024 mov dword ptr [0x11c0fd58], edx */
  w32((uint32_t)(0x11c0fd58), (EDX));
  /* 11bf002a mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11bf002f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bf0032 mov dword ptr [0x11c0fd5c], ecx */
  w32((uint32_t)(0x11c0fd5c), (ECX));
  /* 11bf0038 mov edx, dword ptr [0x11c0fd88] */
  EDX = (r32((uint32_t)(0x11c0fd88)));
  /* 11bf003e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bf0041 mov dword ptr [0x11c0fd60], eax */
  w32((uint32_t)(0x11c0fd60), (EAX));
  /* 11bf0046 mov dword ptr [0x11c0fd88], 0x11c0fd58 */
  w32((uint32_t)(0x11c0fd88), (0x11c0fd58u));
  /* 11bf0050 mov ecx, dword ptr [0x11c10894] */
  ECX = (r32((uint32_t)(0x11c10894)));
  /* 11bf0056 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0057 call 0x11bf0310 */
  push32(0x11bf005cu); f_11bf0310();
  /* 11bf005c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf005f push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0061 mov edx, dword ptr [0x11c10894] */
  EDX = (r32((uint32_t)(0x11c10894)));
  /* 11bf0067 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0068 call 0x11be5560 */
  push32(0x11bf006du); f_11be5560();
  /* 11bf006d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0070 mov dword ptr [0x11c10894], 0 */
  w32((uint32_t)(0x11c10894), (0x0u));
  /* 11bf007a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf007c:;
  /* 11bf007c mov esp, ebp */
  ESP = (EBP);
  /* 11bf007e pop ebp */
  EBP = (pop32());
  /* 11bf007f ret  */
  ESPCHK(0x11beff50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010080 @ 0x11bf0080 (525 bytes, 200 insns) */
void f_11bf0080(void) {
  FTRACE(0x11bf0080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0080 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0081 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0086 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bf008d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf008f mov ax, word ptr [0x11c108b4] */
  AX = (r16((uint32_t)(0x11c108b4)));
  /* 11bf0095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf0098 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf009c jne 0x11bf00a6 */
  if (!C.zf) goto L_11bf00a6;
  /* 11bf009e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf00a1 jmp 0x11bf0289 */
  goto L_11bf0289;
L_11bf00a6:;
  /* 11bf00a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf00a9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf00ac push ecx */
  push32((uint32_t)(ECX));
  /* 11bf00ad push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11bf00af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf00b2 push edx */
  push32((uint32_t)(EDX));
  /* 11bf00b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf00b5 call 0x11bf2c90 */
  push32(0x11bf00bau); f_11bf2c90();
  /* 11bf00ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf00bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf00c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf00c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf00c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf00c8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf00cb push edx */
  push32((uint32_t)(EDX));
  /* 11bf00cc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11bf00ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf00d1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf00d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf00d4 call 0x11bf2c90 */
  push32(0x11bf00d9u); f_11bf2c90();
  /* 11bf00d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf00dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf00df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf00e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf00e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf00e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf00ea push edx */
  push32((uint32_t)(EDX));
  /* 11bf00eb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11bf00ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf00f0 push eax */
  push32((uint32_t)(EAX));
  /* 11bf00f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf00f3 call 0x11bf2c90 */
  push32(0x11bf00f8u); f_11bf2c90();
  /* 11bf00f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf00fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf00fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0100 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf0103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0106 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0109 push edx */
  push32((uint32_t)(EDX));
  /* 11bf010a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11bf010c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf010f push eax */
  push32((uint32_t)(EAX));
  /* 11bf0110 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf0112 call 0x11bf2c90 */
  push32(0x11bf0117u); f_11bf2c90();
  /* 11bf0117 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf011a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf011d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf011f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf0122 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0125 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0128 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0129 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11bf012b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf012e push eax */
  push32((uint32_t)(EAX));
  /* 11bf012f push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf0131 call 0x11bf2c90 */
  push32(0x11bf0136u); f_11bf2c90();
  /* 11bf0136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0139 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf013c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf013e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf0141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0144 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11bf0147 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0148 call 0x11bf0290 */
  push32(0x11bf014du); f_11bf0290();
  /* 11bf014d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0153 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0156 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0157 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11bf0159 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf015c push edx */
  push32((uint32_t)(EDX));
  /* 11bf015d push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf015f call 0x11bf2c90 */
  push32(0x11bf0164u); f_11bf2c90();
  /* 11bf0164 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0167 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf016a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf016c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf016f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0172 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0175 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0176 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11bf0178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf017b push eax */
  push32((uint32_t)(EAX));
  /* 11bf017c push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf017e call 0x11bf2c90 */
  push32(0x11bf0183u); f_11bf2c90();
  /* 11bf0183 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0186 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf0189 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf018b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf018e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0191 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0194 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0195 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11bf0197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf019a push eax */
  push32((uint32_t)(EAX));
  /* 11bf019b push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf019d call 0x11bf2c90 */
  push32(0x11bf01a2u); f_11bf2c90();
  /* 11bf01a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf01a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf01a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf01aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf01ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf01b0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf01b3 push edx */
  push32((uint32_t)(EDX));
  /* 11bf01b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bf01b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf01b9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf01ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf01bc call 0x11bf2c90 */
  push32(0x11bf01c1u); f_11bf2c90();
  /* 11bf01c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf01c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf01c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf01c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf01cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf01cf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf01d2 push edx */
  push32((uint32_t)(EDX));
  /* 11bf01d3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11bf01d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf01d8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf01d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf01db call 0x11bf2c90 */
  push32(0x11bf01e0u); f_11bf2c90();
  /* 11bf01e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf01e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf01e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf01e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf01eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf01ee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf01f1 push edx */
  push32((uint32_t)(EDX));
  /* 11bf01f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11bf01f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf01f7 push eax */
  push32((uint32_t)(EAX));
  /* 11bf01f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf01fa call 0x11bf2c90 */
  push32(0x11bf01ffu); f_11bf2c90();
  /* 11bf01ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0202 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf0205 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0207 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf020a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf020d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0210 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0211 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11bf0213 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0216 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0217 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf0219 call 0x11bf2c90 */
  push32(0x11bf021eu); f_11bf2c90();
  /* 11bf021e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf0224 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0226 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf0229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf022c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf022f push edx */
  push32((uint32_t)(EDX));
  /* 11bf0230 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11bf0232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0235 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0236 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf0238 call 0x11bf2c90 */
  push32(0x11bf023du); f_11bf2c90();
  /* 11bf023d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0240 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf0243 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0245 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf0248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf024b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf024e push edx */
  push32((uint32_t)(EDX));
  /* 11bf024f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11bf0251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0254 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0255 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf0257 call 0x11bf2c90 */
  push32(0x11bf025cu); f_11bf2c90();
  /* 11bf025c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf025f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf0262 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0264 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf0267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf026a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf026d push edx */
  push32((uint32_t)(EDX));
  /* 11bf026e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11bf0270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0273 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0274 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf0276 call 0x11bf2c90 */
  push32(0x11bf027bu); f_11bf2c90();
  /* 11bf027b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf027e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf0281 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0283 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf0286 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11bf0289:;
  /* 11bf0289 mov esp, ebp */
  ESP = (EBP);
  /* 11bf028b pop ebp */
  EBP = (pop32());
  /* 11bf028c ret  */
  ESPCHK(0x11bf0080u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11bf0290 (125 bytes, 49 insns) */
void f_11bf0290(void) {
  FTRACE(0x11bf0290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0290 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0291 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0293 push ecx */
  push32((uint32_t)(ECX));
L_11bf0294:;
  /* 11bf0294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0297 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf029a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf029c je 0x11bf0309 */
  if (C.zf) goto L_11bf0309;
  /* 11bf029e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf02a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf02a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf02a7 jl 0x11bf02cd */
  if ((C.sf!=C.of)) goto L_11bf02cd;
  /* 11bf02a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf02ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf02af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf02b2 jg 0x11bf02cd */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf02cd;
  /* 11bf02b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf02b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf02ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf02bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf02c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11bf02c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf02c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf02c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf02cb jmp 0x11bf0307 */
  goto L_11bf0307;
L_11bf02cd:;
  /* 11bf02cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf02d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf02d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf02d6 jne 0x11bf02fe */
  if (!C.zf) goto L_11bf02fe;
  /* 11bf02d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf02db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bf02de:;
  /* 11bf02de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf02e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf02e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11bf02e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bf02e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf02ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf02ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf02f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf02f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf02f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf02fa jne 0x11bf02de */
  if (!C.zf) goto L_11bf02de;
  /* 11bf02fc jmp 0x11bf0307 */
  goto L_11bf0307;
L_11bf02fe:;
  /* 11bf02fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0301 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0304 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11bf0307:;
  /* 11bf0307 jmp 0x11bf0294 */
  goto L_11bf0294;
L_11bf0309:;
  /* 11bf0309 mov esp, ebp */
  ESP = (EBP);
  /* 11bf030b pop ebp */
  EBP = (pop32());
  /* 11bf030c ret  */
  ESPCHK(0x11bf0290u, _esp0);
  ESP += 4; return;
}

/* FUN_10010310 @ 0x11bf0310 (147 bytes, 52 insns) */
void f_11bf0310(void) {
  FTRACE(0x11bf0310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0310 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0311 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0313 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0317 jne 0x11bf031e */
  if (!C.zf) goto L_11bf031e;
  /* 11bf0319 jmp 0x11bf03a1 */
  goto L_11bf03a1;
L_11bf031e:;
  /* 11bf031e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0321 cmp dword ptr [eax + 0xc], 0x11c108f0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11c108f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0328 je 0x11bf03a1 */
  if (C.zf) goto L_11bf03a1;
  /* 11bf032a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf032c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf032f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bf0332 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0333 call 0x11be5560 */
  push32(0x11bf0338u); f_11be5560();
  /* 11bf0338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf033b push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf033d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0340 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bf0343 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0344 call 0x11be5560 */
  push32(0x11bf0349u); f_11be5560();
  /* 11bf0349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf034c push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf034e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0351 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bf0354 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0355 call 0x11be5560 */
  push32(0x11bf035au); f_11be5560();
  /* 11bf035a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf035d push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf035f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0362 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11bf0365 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0366 call 0x11be5560 */
  push32(0x11bf036bu); f_11be5560();
  /* 11bf036b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf036e push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0373 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bf0376 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0377 call 0x11be5560 */
  push32(0x11bf037cu); f_11be5560();
  /* 11bf037c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf037f push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0384 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11bf0387 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0388 call 0x11be5560 */
  push32(0x11bf038du); f_11be5560();
  /* 11bf038d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0390 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0392 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0395 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11bf0398 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0399 call 0x11be5560 */
  push32(0x11bf039eu); f_11be5560();
  /* 11bf039e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf03a1:;
  /* 11bf03a1 pop ebp */
  EBP = (pop32());
  /* 11bf03a2 ret  */
  ESPCHK(0x11bf0310u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x11bf03b0 (928 bytes, 284 insns) */
void f_11bf03b0(void) {
  FTRACE(0x11bf03b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf03b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf03b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf03b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf03b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11bf03bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11bf03c4 cmp dword ptr [0x11c10858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf03cb je 0x11bf0701 */
  if (C.zf) goto L_11bf0701;
  /* 11bf03d1 cmp dword ptr [0x11c10868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf03d8 jne 0x11bf0400 */
  if (!C.zf) goto L_11bf0400;
  /* 11bf03da push 0x11c10868 */
  push32((uint32_t)(0x11c10868u));
  /* 11bf03df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11bf03e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf03e6 mov ax, word ptr [0x11c108ac] */
  AX = (r16((uint32_t)(0x11c108ac)));
  /* 11bf03ec push eax */
  push32((uint32_t)(EAX));
  /* 11bf03ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf03ef call 0x11bf2c90 */
  push32(0x11bf03f4u); f_11bf2c90();
  /* 11bf03f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf03f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf03f9 je 0x11bf0400 */
  if (C.zf) goto L_11bf0400;
  /* 11bf03fb jmp 0x11bf06c2 */
  goto L_11bf06c2;
L_11bf0400:;
  /* 11bf0400 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11bf0402 push 0x11c0c25c */
  push32((uint32_t)(0x11c0c25cu));
  /* 11bf0407 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0409 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11bf040e call 0x11be4ad0 */
  push32(0x11bf0413u); f_11be4ad0();
  /* 11bf0413 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0416 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11bf0419 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11bf041b push 0x11c0c25c */
  push32((uint32_t)(0x11c0c25cu));
  /* 11bf0420 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0422 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11bf0427 call 0x11be4ad0 */
  push32(0x11bf042cu); f_11be4ad0();
  /* 11bf042c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf042f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11bf0432 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11bf0434 push 0x11c0c25c */
  push32((uint32_t)(0x11c0c25cu));
  /* 11bf0439 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf043b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11bf0440 call 0x11be4ad0 */
  push32(0x11bf0445u); f_11be4ad0();
  /* 11bf0445 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0448 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11bf044b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11bf044d push 0x11c0c25c */
  push32((uint32_t)(0x11c0c25cu));
  /* 11bf0452 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0454 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11bf0459 call 0x11be4ad0 */
  push32(0x11bf045eu); f_11be4ad0();
  /* 11bf045e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0461 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bf0464 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0468 je 0x11bf047c */
  if (C.zf) goto L_11bf047c;
  /* 11bf046a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf046e je 0x11bf047c */
  if (C.zf) goto L_11bf047c;
  /* 11bf0470 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0474 je 0x11bf047c */
  if (C.zf) goto L_11bf047c;
  /* 11bf0476 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf047a jne 0x11bf0481 */
  if (!C.zf) goto L_11bf0481;
L_11bf047c:;
  /* 11bf047c jmp 0x11bf06c2 */
  goto L_11bf06c2;
L_11bf0481:;
  /* 11bf0481 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf0484 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11bf0487 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bf048e jmp 0x11bf0499 */
  goto L_11bf0499;
L_11bf0490:;
  /* 11bf0490 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf0493 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0496 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11bf0499:;
  /* 11bf0499 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf04a0 jge 0x11bf04b5 */
  if ((C.sf==C.of)) goto L_11bf04b5;
  /* 11bf04a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf04a5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11bf04a8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11bf04aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf04ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf04b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bf04b3 jmp 0x11bf0490 */
  goto L_11bf0490;
L_11bf04b5:;
  /* 11bf04b5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11bf04b8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf04b9 mov ecx, dword ptr [0x11c10868] */
  ECX = (r32((uint32_t)(0x11c10868)));
  /* 11bf04bf push ecx */
  push32((uint32_t)(ECX));
  /* 11bf04c0 call dword ptr [0x11c13308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13308))), 0x11bf04c6u);
  /* 11bf04c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf04c8 jne 0x11bf04cf */
  if (!C.zf) goto L_11bf04cf;
  /* 11bf04ca jmp 0x11bf06c2 */
  goto L_11bf06c2;
L_11bf04cf:;
  /* 11bf04cf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf04d3 jbe 0x11bf04da */
  if ((C.cf||C.zf)) goto L_11bf04da;
  /* 11bf04d5 jmp 0x11bf06c2 */
  goto L_11bf06c2;
L_11bf04da:;
  /* 11bf04da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf04dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf04e3 mov dword ptr [0x11c0eea4], edx */
  w32((uint32_t)(0x11c0eea4), (EDX));
  /* 11bf04e9 cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf04f0 jle 0x11bf0549 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf0549;
  /* 11bf04f2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11bf04f5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11bf04f8 jmp 0x11bf0503 */
  goto L_11bf0503;
L_11bf04fa:;
  /* 11bf04fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf04fd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0500 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11bf0503:;
  /* 11bf0503 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf0506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0508 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf050a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf050c je 0x11bf0549 */
  if (C.zf) goto L_11bf0549;
  /* 11bf050e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf0511 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf0513 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11bf0516 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf0518 je 0x11bf0549 */
  if (C.zf) goto L_11bf0549;
  /* 11bf051a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf051d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf051f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf0521 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11bf0524 jmp 0x11bf052f */
  goto L_11bf052f;
L_11bf0526:;
  /* 11bf0526 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf0529 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf052c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11bf052f:;
  /* 11bf052f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf0532 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0534 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11bf0537 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf053a jg 0x11bf0547 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf0547;
  /* 11bf053c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf053f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0542 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11bf0545 jmp 0x11bf0526 */
  goto L_11bf0526;
L_11bf0547:;
  /* 11bf0547 jmp 0x11bf04fa */
  goto L_11bf04fa;
L_11bf0549:;
  /* 11bf0549 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf054b push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf054d push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf054f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bf0552 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0555 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0556 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11bf055b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf055e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf055f push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf0561 call 0x11becd00 */
  push32(0x11bf0566u); f_11becd00();
  /* 11bf0566 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf056b jne 0x11bf0572 */
  if (!C.zf) goto L_11bf0572;
  /* 11bf056d jmp 0x11bf06c2 */
  goto L_11bf06c2;
L_11bf0572:;
  /* 11bf0572 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bf0575 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11bf057a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf057d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bf0580 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bf0587 jmp 0x11bf0592 */
  goto L_11bf0592;
L_11bf0589:;
  /* 11bf0589 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf058c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf058f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11bf0592:;
  /* 11bf0592 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0599 jge 0x11bf05b0 */
  if ((C.sf==C.of)) goto L_11bf05b0;
  /* 11bf059b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf059e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11bf05a2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11bf05a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf05a8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf05ab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bf05ae jmp 0x11bf0589 */
  goto L_11bf0589;
L_11bf05b0:;
  /* 11bf05b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf05b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf05b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf05b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf05ba push edx */
  push32((uint32_t)(EDX));
  /* 11bf05bb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11bf05c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf05c3 push eax */
  push32((uint32_t)(EAX));
  /* 11bf05c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf05c6 call 0x11bf2f30 */
  push32(0x11bf05cbu); f_11bf2f30();
  /* 11bf05cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf05ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf05d0 jne 0x11bf05d7 */
  if (!C.zf) goto L_11bf05d7;
  /* 11bf05d2 jmp 0x11bf06c2 */
  goto L_11bf06c2;
L_11bf05d7:;
  /* 11bf05d7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf05da mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11bf05df cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf05e6 jle 0x11bf0643 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf0643;
  /* 11bf05e8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11bf05eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bf05ee jmp 0x11bf05f9 */
  goto L_11bf05f9;
L_11bf05f0:;
  /* 11bf05f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf05f3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf05f6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11bf05f9:;
  /* 11bf05f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf05fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf05fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf0600 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf0602 je 0x11bf0643 */
  if (C.zf) goto L_11bf0643;
  /* 11bf0604 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf0607 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0609 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11bf060c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf060e je 0x11bf0643 */
  if (C.zf) goto L_11bf0643;
  /* 11bf0610 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf0613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0615 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf0617 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bf061a jmp 0x11bf0625 */
  goto L_11bf0625;
L_11bf061c:;
  /* 11bf061c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf061f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0622 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11bf0625:;
  /* 11bf0625 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf0628 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf062a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11bf062d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0630 jg 0x11bf0641 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf0641;
  /* 11bf0632 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf0635 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bf0638 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11bf063f jmp 0x11bf061c */
  goto L_11bf061c;
L_11bf0641:;
  /* 11bf0641 jmp 0x11bf05f0 */
  goto L_11bf05f0;
L_11bf0643:;
  /* 11bf0643 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bf0646 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0649 mov dword ptr [0x11c0ec98], eax */
  w32((uint32_t)(0x11c0ec98), (EAX));
  /* 11bf064e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf0651 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0654 mov dword ptr [0x11c0ec9c], ecx */
  w32((uint32_t)(0x11c0ec9c), (ECX));
  /* 11bf065a cmp dword ptr [0x11c10898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0661 je 0x11bf0674 */
  if (C.zf) goto L_11bf0674;
  /* 11bf0663 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0665 mov edx, dword ptr [0x11c10898] */
  EDX = (r32((uint32_t)(0x11c10898)));
  /* 11bf066b push edx */
  push32((uint32_t)(EDX));
  /* 11bf066c call 0x11be5560 */
  push32(0x11bf0671u); f_11be5560();
  /* 11bf0671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf0674:;
  /* 11bf0674 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bf0677 mov dword ptr [0x11c10898], eax */
  w32((uint32_t)(0x11c10898), (EAX));
  /* 11bf067c cmp dword ptr [0x11c1089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0683 je 0x11bf0696 */
  if (C.zf) goto L_11bf0696;
  /* 11bf0685 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0687 mov ecx, dword ptr [0x11c1089c] */
  ECX = (r32((uint32_t)(0x11c1089c)));
  /* 11bf068d push ecx */
  push32((uint32_t)(ECX));
  /* 11bf068e call 0x11be5560 */
  push32(0x11bf0693u); f_11be5560();
  /* 11bf0693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf0696:;
  /* 11bf0696 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf0699 mov dword ptr [0x11c1089c], edx */
  w32((uint32_t)(0x11c1089c), (EDX));
  /* 11bf069f push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf06a1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf06a4 push eax */
  push32((uint32_t)(EAX));
  /* 11bf06a5 call 0x11be5560 */
  push32(0x11bf06aau); f_11be5560();
  /* 11bf06aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf06ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf06af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf06b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf06b3 call 0x11be5560 */
  push32(0x11bf06b8u); f_11be5560();
  /* 11bf06b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf06bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf06bd jmp 0x11bf074c */
  goto L_11bf074c;
L_11bf06c2:;
  /* 11bf06c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf06c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bf06c7 push edx */
  push32((uint32_t)(EDX));
  /* 11bf06c8 call 0x11be5560 */
  push32(0x11bf06cdu); f_11be5560();
  /* 11bf06cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf06d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf06d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf06d5 push eax */
  push32((uint32_t)(EAX));
  /* 11bf06d6 call 0x11be5560 */
  push32(0x11bf06dbu); f_11be5560();
  /* 11bf06db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf06de push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf06e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf06e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf06e4 call 0x11be5560 */
  push32(0x11bf06e9u); f_11be5560();
  /* 11bf06e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf06ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf06ee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf06f1 push edx */
  push32((uint32_t)(EDX));
  /* 11bf06f2 call 0x11be5560 */
  push32(0x11bf06f7u); f_11be5560();
  /* 11bf06f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf06fa mov eax, 1 */
  EAX = (0x1u);
  /* 11bf06ff jmp 0x11bf074c */
  goto L_11bf074c;
L_11bf0701:;
  /* 11bf0701 mov dword ptr [0x11c0ec98], 0x11c0eca2 */
  w32((uint32_t)(0x11c0ec98), (0x11c0eca2u));
  /* 11bf070b mov dword ptr [0x11c0ec9c], 0x11c0eca2 */
  w32((uint32_t)(0x11c0ec9c), (0x11c0eca2u));
  /* 11bf0715 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0717 mov eax, dword ptr [0x11c10898] */
  EAX = (r32((uint32_t)(0x11c10898)));
  /* 11bf071c push eax */
  push32((uint32_t)(EAX));
  /* 11bf071d call 0x11be5560 */
  push32(0x11bf0722u); f_11be5560();
  /* 11bf0722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf0727 mov ecx, dword ptr [0x11c1089c] */
  ECX = (r32((uint32_t)(0x11c1089c)));
  /* 11bf072d push ecx */
  push32((uint32_t)(ECX));
  /* 11bf072e call 0x11be5560 */
  push32(0x11bf0733u); f_11be5560();
  /* 11bf0733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0736 mov dword ptr [0x11c10898], 0 */
  w32((uint32_t)(0x11c10898), (0x0u));
  /* 11bf0740 mov dword ptr [0x11c1089c], 0 */
  w32((uint32_t)(0x11c1089c), (0x0u));
  /* 11bf074a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf074c:;
  /* 11bf074c mov esp, ebp */
  ESP = (EBP);
  /* 11bf074e pop ebp */
  EBP = (pop32());
  /* 11bf074f ret  */
  ESPCHK(0x11bf03b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010750 @ 0x11bf0750 (7 bytes, 5 insns) */
void f_11bf0750(void) {
  FTRACE(0x11bf0750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0750 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0751 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0755 pop ebp */
  EBP = (pop32());
  /* 11bf0756 ret  */
  ESPCHK(0x11bf0750u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11bf0760 (129 bytes, 56 insns) */
void f_11bf0760(void) {
  FTRACE(0x11bf0760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0760 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11bf0764 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bf0768 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11bf076e jne 0x11bf07ac */
  if (!C.zf) goto L_11bf07ac;
L_11bf0770:;
  /* 11bf0770 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf0772 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf0774 jne 0x11bf07a4 */
  if (!C.zf) goto L_11bf07a4;
  /* 11bf0776 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf0778 je 0x11bf07a0 */
  if (C.zf) goto L_11bf07a0;
  /* 11bf077a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf077d jne 0x11bf07a4 */
  if (!C.zf) goto L_11bf07a4;
  /* 11bf077f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11bf0781 je 0x11bf07a0 */
  if (C.zf) goto L_11bf07a0;
  /* 11bf0783 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11bf0786 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf0789 jne 0x11bf07a4 */
  if (!C.zf) goto L_11bf07a4;
  /* 11bf078b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf078d je 0x11bf07a0 */
  if (C.zf) goto L_11bf07a0;
  /* 11bf078f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf0792 jne 0x11bf07a4 */
  if (!C.zf) goto L_11bf07a4;
  /* 11bf0794 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0797 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf079a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11bf079c jne 0x11bf0770 */
  if (!C.zf) goto L_11bf0770;
  /* 11bf079e mov edi, edi */
  EDI = (EDI);
L_11bf07a0:;
  /* 11bf07a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf07a2 ret  */
  ESPCHK(0x11bf0760u, _esp0);
  ESP += 4; return;
  /* 11bf07a3 nop  */
  /* nop */
L_11bf07a4:;
  /* 11bf07a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf07a6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bf07a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11bf07a9 ret  */
  ESPCHK(0x11bf0760u, _esp0);
  ESP += 4; return;
  /* 11bf07aa mov edi, edi */
  EDI = (EDI);
L_11bf07ac:;
  /* 11bf07ac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11bf07b2 je 0x11bf07c8 */
  if (C.zf) goto L_11bf07c8;
  /* 11bf07b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf07b6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11bf07b7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf07b9 jne 0x11bf07a4 */
  if (!C.zf) goto L_11bf07a4;
  /* 11bf07bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11bf07bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf07be je 0x11bf07a0 */
  if (C.zf) goto L_11bf07a0;
  /* 11bf07c0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11bf07c6 je 0x11bf0770 */
  if (C.zf) goto L_11bf0770;
L_11bf07c8:;
  /* 11bf07c8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11bf07cb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf07ce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf07d0 jne 0x11bf07a4 */
  if (!C.zf) goto L_11bf07a4;
  /* 11bf07d2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf07d4 je 0x11bf07a0 */
  if (C.zf) goto L_11bf07a0;
  /* 11bf07d6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf07d9 jne 0x11bf07a4 */
  if (!C.zf) goto L_11bf07a4;
  /* 11bf07db or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11bf07dd je 0x11bf07a0 */
  if (C.zf) goto L_11bf07a0;
  /* 11bf07df add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf07e2 jmp 0x11bf0770 */
  goto L_11bf0770;
}

/* FUN_100107f0 @ 0x11bf07f0 (62 bytes, 35 insns) */
void f_11bf07f0(void) {
  FTRACE(0x11bf07f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf07f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf07f1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf07f3 push esi */
  push32((uint32_t)(ESI));
  /* 11bf07f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf07f6 push eax */
  push32((uint32_t)(EAX));
  /* 11bf07f7 push eax */
  push32((uint32_t)(EAX));
  /* 11bf07f8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf07f9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf07fa push eax */
  push32((uint32_t)(EAX));
  /* 11bf07fb push eax */
  push32((uint32_t)(EAX));
  /* 11bf07fc push eax */
  push32((uint32_t)(EAX));
  /* 11bf07fd push eax */
  push32((uint32_t)(EAX));
  /* 11bf07fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf0801 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11bf0804:;
  /* 11bf0804 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf0806 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf0808 je 0x11bf0811 */
  if (C.zf) goto L_11bf0811;
  /* 11bf080a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11bf080b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11bf080b");
  /* 11bf080f jmp 0x11bf0804 */
  goto L_11bf0804;
L_11bf0811:;
  /* 11bf0811 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0814 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0817 nop  */
  /* nop */
L_11bf0818:;
  /* 11bf0818 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11bf0819 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11bf081b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf081d je 0x11bf0826 */
  if (C.zf) goto L_11bf0826;
  /* 11bf081f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11bf0820 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11bf0820");
  /* 11bf0824 jae 0x11bf0818 */
  if (!C.cf) goto L_11bf0818;
L_11bf0826:;
  /* 11bf0826 mov eax, ecx */
  EAX = (ECX);
  /* 11bf0828 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf082b pop esi */
  ESI = (pop32());
  /* 11bf082c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11bf082d ret  */
  ESPCHK(0x11bf07f0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11bf0830 (56 bytes, 31 insns) */
void f_11bf0830(void) {
  FTRACE(0x11bf0830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0830 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0831 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0833 push edi */
  push32((uint32_t)(EDI));
  /* 11bf0834 push esi */
  push32((uint32_t)(ESI));
  /* 11bf0835 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf0836 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf0839 jecxz 0x11bf0861 */
  x86_unimpl("jecxz @ 0x11bf0839");
  /* 11bf083b mov ebx, ecx */
  EBX = (ECX);
  /* 11bf083d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0840 mov esi, edi */
  ESI = (EDI);
  /* 11bf0842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0844 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11bf0846 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf0848 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf084a mov edi, esi */
  EDI = (ESI);
  /* 11bf084c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf084f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11bf0851 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11bf0854 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0856 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf0859 ja 0x11bf085f */
  if ((!C.cf&&!C.zf)) goto L_11bf085f;
  /* 11bf085b je 0x11bf0861 */
  if (C.zf) goto L_11bf0861;
  /* 11bf085d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11bf085e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11bf085f:;
  /* 11bf085f not ecx */
  ECX = (~(ECX));
L_11bf0861:;
  /* 11bf0861 mov eax, ecx */
  EAX = (ECX);
  /* 11bf0863 pop ebx */
  EBX = (pop32());
  /* 11bf0864 pop esi */
  ESI = (pop32());
  /* 11bf0865 pop edi */
  EDI = (pop32());
  /* 11bf0866 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11bf0867 ret  */
  ESPCHK(0x11bf0830u, _esp0);
  ESP += 4; return;
}

/* FUN_10010870 @ 0x11bf0870 (58 bytes, 32 insns) */
void f_11bf0870(void) {
  FTRACE(0x11bf0870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0870 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0871 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0873 push esi */
  push32((uint32_t)(ESI));
  /* 11bf0874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0876 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0877 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0878 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0879 push eax */
  push32((uint32_t)(EAX));
  /* 11bf087a push eax */
  push32((uint32_t)(EAX));
  /* 11bf087b push eax */
  push32((uint32_t)(EAX));
  /* 11bf087c push eax */
  push32((uint32_t)(EAX));
  /* 11bf087d push eax */
  push32((uint32_t)(EAX));
  /* 11bf087e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf0881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11bf0884:;
  /* 11bf0884 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf0886 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf0888 je 0x11bf0891 */
  if (C.zf) goto L_11bf0891;
  /* 11bf088a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11bf088b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11bf088b");
  /* 11bf088f jmp 0x11bf0884 */
  goto L_11bf0884;
L_11bf0891:;
  /* 11bf0891 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11bf0894:;
  /* 11bf0894 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11bf0896 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf0898 je 0x11bf08a4 */
  if (C.zf) goto L_11bf08a4;
  /* 11bf089a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11bf089b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11bf089b");
  /* 11bf089f jae 0x11bf0894 */
  if (!C.cf) goto L_11bf0894;
  /* 11bf08a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11bf08a4:;
  /* 11bf08a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf08a7 pop esi */
  ESI = (pop32());
  /* 11bf08a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11bf08a9 ret  */
  ESPCHK(0x11bf0870u, _esp0);
  ESP += 4; return;
}

/* FUN_100108b0 @ 0x11bf08b0 (512 bytes, 147 insns) */
void f_11bf08b0(void) {
  FTRACE(0x11bf08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf08b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf08b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf08b6 cmp dword ptr [0x11c108e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf08bd jne 0x11bf08e2 */
  if (!C.zf) goto L_11bf08e2;
  /* 11bf08bf call 0x11bf1380 */
  push32(0x11bf08c4u); f_11bf1380();
  /* 11bf08c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf08c6 je 0x11bf08d2 */
  if (C.zf) goto L_11bf08d2;
  /* 11bf08c8 mov eax, dword ptr [0x11c132cc] */
  EAX = (r32((uint32_t)(0x11c132cc)));
  /* 11bf08cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf08d0 jmp 0x11bf08d9 */
  goto L_11bf08d9;
L_11bf08d2:;
  /* 11bf08d2 mov dword ptr [ebp - 8], 0x11bf13d0 */
  w32((uint32_t)(EBP + -0x8), (0x11bf13d0u));
L_11bf08d9:;
  /* 11bf08d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf08dc mov dword ptr [0x11c108e4], ecx */
  w32((uint32_t)(0x11c108e4), (ECX));
L_11bf08e2:;
  /* 11bf08e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf08e6 jne 0x11bf08f2 */
  if (!C.zf) goto L_11bf08f2;
  /* 11bf08e8 call 0x11bf11d0 */
  push32(0x11bf08edu); f_11bf11d0();
  /* 11bf08ed jmp 0x11bf09be */
  goto L_11bf09be;
L_11bf08f2:;
  /* 11bf08f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf08f5 mov dword ptr [0x11c108d4], edx */
  w32((uint32_t)(0x11c108d4), (EDX));
  /* 11bf08fb cmp dword ptr [0x11c108d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0902 je 0x11bf0924 */
  if (C.zf) goto L_11bf0924;
  /* 11bf0904 mov eax, dword ptr [0x11c108d4] */
  EAX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0909 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf090c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf090e je 0x11bf0924 */
  if (C.zf) goto L_11bf0924;
  /* 11bf0910 push 0x11c108d4 */
  push32((uint32_t)(0x11c108d4u));
  /* 11bf0915 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11bf0917 push 0x11c0fa90 */
  push32((uint32_t)(0x11c0fa90u));
  /* 11bf091c call 0x11bf0ab0 */
  push32(0x11bf0921u); f_11bf0ab0();
  /* 11bf0921 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf0924:;
  /* 11bf0924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0927 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf092a mov dword ptr [0x11c108d8], edx */
  w32((uint32_t)(0x11c108d8), (EDX));
  /* 11bf0930 cmp dword ptr [0x11c108d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0937 je 0x11bf0959 */
  if (C.zf) goto L_11bf0959;
  /* 11bf0939 mov eax, dword ptr [0x11c108d8] */
  EAX = (r32((uint32_t)(0x11c108d8)));
  /* 11bf093e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf0941 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf0943 je 0x11bf0959 */
  if (C.zf) goto L_11bf0959;
  /* 11bf0945 push 0x11c108d8 */
  push32((uint32_t)(0x11c108d8u));
  /* 11bf094a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11bf094c push 0x11c0f9d8 */
  push32((uint32_t)(0x11c0f9d8u));
  /* 11bf0951 call 0x11bf0ab0 */
  push32(0x11bf0956u); f_11bf0ab0();
  /* 11bf0956 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf0959:;
  /* 11bf0959 mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
  /* 11bf0963 cmp dword ptr [0x11c108d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf096a je 0x11bf099d */
  if (C.zf) goto L_11bf099d;
  /* 11bf096c mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0972 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf0975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0977 je 0x11bf099d */
  if (C.zf) goto L_11bf099d;
  /* 11bf0979 cmp dword ptr [0x11c108d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0980 je 0x11bf0996 */
  if (C.zf) goto L_11bf0996;
  /* 11bf0982 mov ecx, dword ptr [0x11c108d8] */
  ECX = (r32((uint32_t)(0x11c108d8)));
  /* 11bf0988 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf098b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf098d je 0x11bf0996 */
  if (C.zf) goto L_11bf0996;
  /* 11bf098f call 0x11bf0b40 */
  push32(0x11bf0994u); f_11bf0b40();
  /* 11bf0994 jmp 0x11bf099b */
  goto L_11bf099b;
L_11bf0996:;
  /* 11bf0996 call 0x11bf0f30 */
  push32(0x11bf099bu); f_11bf0f30();
L_11bf099b:;
  /* 11bf099b jmp 0x11bf09be */
  goto L_11bf09be;
L_11bf099d:;
  /* 11bf099d cmp dword ptr [0x11c108d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf09a4 je 0x11bf09b9 */
  if (C.zf) goto L_11bf09b9;
  /* 11bf09a6 mov eax, dword ptr [0x11c108d8] */
  EAX = (r32((uint32_t)(0x11c108d8)));
  /* 11bf09ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf09ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf09b0 je 0x11bf09b9 */
  if (C.zf) goto L_11bf09b9;
  /* 11bf09b2 call 0x11bf10d0 */
  push32(0x11bf09b7u); f_11bf10d0();
  /* 11bf09b7 jmp 0x11bf09be */
  goto L_11bf09be;
L_11bf09b9:;
  /* 11bf09b9 call 0x11bf11d0 */
  push32(0x11bf09beu); f_11bf11d0();
L_11bf09be:;
  /* 11bf09be cmp dword ptr [0x11c108dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf09c5 jne 0x11bf09ce */
  if (!C.zf) goto L_11bf09ce;
  /* 11bf09c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf09c9 jmp 0x11bf0aac */
  goto L_11bf0aac;
L_11bf09ce:;
  /* 11bf09ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf09d1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf09d7 push edx */
  push32((uint32_t)(EDX));
  /* 11bf09d8 call 0x11bf1200 */
  push32(0x11bf09ddu); f_11bf1200();
  /* 11bf09dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf09e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf09e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf09e7 je 0x11bf09fc */
  if (C.zf) goto L_11bf09fc;
  /* 11bf09e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf09ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf09f1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf09f2 call dword ptr [0x11c132d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132d0))), 0x11bf09f8u);
  /* 11bf09f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf09fa jne 0x11bf0a03 */
  if (!C.zf) goto L_11bf0a03;
L_11bf09fc:;
  /* 11bf09fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf09fe jmp 0x11bf0aac */
  goto L_11bf0aac;
L_11bf0a03:;
  /* 11bf0a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf0a05 mov ecx, dword ptr [0x11c108c4] */
  ECX = (r32((uint32_t)(0x11c108c4)));
  /* 11bf0a0b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0a0c call dword ptr [0x11c132d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132d4))), 0x11bf0a12u);
  /* 11bf0a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0a14 jne 0x11bf0a1d */
  if (!C.zf) goto L_11bf0a1d;
  /* 11bf0a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0a18 jmp 0x11bf0aac */
  goto L_11bf0aac;
L_11bf0a1d:;
  /* 11bf0a1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0a21 je 0x11bf0a48 */
  if (C.zf) goto L_11bf0a48;
  /* 11bf0a23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf0a26 mov ax, word ptr [0x11c108c4] */
  AX = (r16((uint32_t)(0x11c108c4)));
  /* 11bf0a2c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11bf0a2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf0a32 mov dx, word ptr [0x11c108e0] */
  DX = (r16((uint32_t)(0x11c108e0)));
  /* 11bf0a39 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11bf0a3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf0a40 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11bf0a44 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11bf0a48:;
  /* 11bf0a48 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0a4c je 0x11bf0aa7 */
  if (C.zf) goto L_11bf0aa7;
  /* 11bf0a4e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11bf0a50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf0a53 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0a54 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11bf0a59 mov eax, dword ptr [0x11c108c4] */
  EAX = (r32((uint32_t)(0x11c108c4)));
  /* 11bf0a5e push eax */
  push32((uint32_t)(EAX));
  /* 11bf0a5f call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf0a65u);
  /* 11bf0a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0a67 jne 0x11bf0a6d */
  if (!C.zf) goto L_11bf0a6d;
  /* 11bf0a69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0a6b jmp 0x11bf0aac */
  goto L_11bf0aac;
L_11bf0a6d:;
  /* 11bf0a6d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11bf0a6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf0a72 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0a75 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0a76 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11bf0a7b mov edx, dword ptr [0x11c108e0] */
  EDX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf0a81 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0a82 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf0a88u);
  /* 11bf0a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0a8a jne 0x11bf0a90 */
  if (!C.zf) goto L_11bf0a90;
  /* 11bf0a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0a8e jmp 0x11bf0aac */
  goto L_11bf0aac;
L_11bf0a90:;
  /* 11bf0a90 push 0xa */
  push32((uint32_t)(0xau));
  /* 11bf0a92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf0a95 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0a9a push eax */
  push32((uint32_t)(EAX));
  /* 11bf0a9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0a9e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0a9f call 0x11be7610 */
  push32(0x11bf0aa4u); f_11be7610();
  /* 11bf0aa4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf0aa7:;
  /* 11bf0aa7 mov eax, 1 */
  EAX = (0x1u);
L_11bf0aac:;
  /* 11bf0aac mov esp, ebp */
  ESP = (EBP);
  /* 11bf0aae pop ebp */
  EBP = (pop32());
  /* 11bf0aaf ret  */
  ESPCHK(0x11bf08b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x11bf0ab0 (130 bytes, 47 insns) */
void f_11bf0ab0(void) {
  FTRACE(0x11bf0ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0ab6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11bf0abd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11bf0ac4:;
  /* 11bf0ac4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf0ac7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0aca jg 0x11bf0b2e */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf0b2e;
  /* 11bf0acc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0ad0 je 0x11bf0b2e */
  if (C.zf) goto L_11bf0b2e;
  /* 11bf0ad2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf0ad5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0ad8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf0ad9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0adb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bf0add mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf0ae0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0ae3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0ae6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11bf0ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0aea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf0aed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf0aef push edx */
  push32((uint32_t)(EDX));
  /* 11bf0af0 call 0x11bf31a0 */
  push32(0x11bf0af5u); f_11bf31a0();
  /* 11bf0af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0af8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf0afb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0aff jne 0x11bf0b12 */
  if (!C.zf) goto L_11bf0b12;
  /* 11bf0b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0b04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0b07 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11bf0b0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf0b0e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf0b10 jmp 0x11bf0b2c */
  goto L_11bf0b2c;
L_11bf0b12:;
  /* 11bf0b12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0b16 jge 0x11bf0b23 */
  if ((C.sf==C.of)) goto L_11bf0b23;
  /* 11bf0b18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0b1b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0b1e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11bf0b21 jmp 0x11bf0b2c */
  goto L_11bf0b2c;
L_11bf0b23:;
  /* 11bf0b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0b26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0b29 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11bf0b2c:;
  /* 11bf0b2c jmp 0x11bf0ac4 */
  goto L_11bf0ac4;
L_11bf0b2e:;
  /* 11bf0b2e mov esp, ebp */
  ESP = (EBP);
  /* 11bf0b30 pop ebp */
  EBP = (pop32());
  /* 11bf0b31 ret  */
  ESPCHK(0x11bf0ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b40 @ 0x11bf0b40 (186 bytes, 50 insns) */
void f_11bf0b40(void) {
  FTRACE(0x11bf0b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0b41 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0b44 mov eax, dword ptr [0x11c108d4] */
  EAX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0b49 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0b4a call 0x11be7900 */
  push32(0x11bf0b4fu); f_11be7900();
  /* 11bf0b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0b52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0b54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0b57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11bf0b5a mov dword ptr [0x11c108d0], ecx */
  w32((uint32_t)(0x11c108d0), (ECX));
  /* 11bf0b60 mov edx, dword ptr [0x11c108d8] */
  EDX = (r32((uint32_t)(0x11c108d8)));
  /* 11bf0b66 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0b67 call 0x11be7900 */
  push32(0x11bf0b6cu); f_11be7900();
  /* 11bf0b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0b6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0b71 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0b74 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11bf0b77 mov dword ptr [0x11c108c8], ecx */
  w32((uint32_t)(0x11c108c8), (ECX));
  /* 11bf0b7d mov dword ptr [0x11c108c4], 0 */
  w32((uint32_t)(0x11c108c4), (0x0u));
  /* 11bf0b87 cmp dword ptr [0x11c108d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0b8e je 0x11bf0b99 */
  if (C.zf) goto L_11bf0b99;
  /* 11bf0b90 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11bf0b97 jmp 0x11bf0bab */
  goto L_11bf0bab;
L_11bf0b99:;
  /* 11bf0b99 mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0b9f push edx */
  push32((uint32_t)(EDX));
  /* 11bf0ba0 call 0x11bf15e0 */
  push32(0x11bf0ba5u); f_11bf15e0();
  /* 11bf0ba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0ba8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bf0bab:;
  /* 11bf0bab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0bae mov dword ptr [0x11c108cc], eax */
  w32((uint32_t)(0x11c108cc), (EAX));
  /* 11bf0bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf0bb5 push 0x11bf0c00 */
  push32((uint32_t)(0x11bf0c00u));
  /* 11bf0bba call dword ptr [0x11c132c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132c8))), 0x11bf0bc0u);
  /* 11bf0bc0 mov ecx, dword ptr [0x11c108dc] */
  ECX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0bc6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0bcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf0bce je 0x11bf0bec */
  if (C.zf) goto L_11bf0bec;
  /* 11bf0bd0 mov edx, dword ptr [0x11c108dc] */
  EDX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0bd6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf0bdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf0bde je 0x11bf0bec */
  if (C.zf) goto L_11bf0bec;
  /* 11bf0be0 mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0be5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0bea jne 0x11bf0bf6 */
  if (!C.zf) goto L_11bf0bf6;
L_11bf0bec:;
  /* 11bf0bec mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
L_11bf0bf6:;
  /* 11bf0bf6 mov esp, ebp */
  ESP = (EBP);
  /* 11bf0bf8 pop ebp */
  EBP = (pop32());
  /* 11bf0bf9 ret  */
  ESPCHK(0x11bf0b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c00 @ 0x11bf0c00 (804 bytes, 220 insns) */
void f_11bf0c00(void) {
  FTRACE(0x11bf0c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0c01 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0c03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0c09 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0c0a call 0x11bf1560 */
  push32(0x11bf0c0fu); f_11bf1560();
  /* 11bf0c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0c12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11bf0c15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bf0c17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bf0c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0c1b mov edx, dword ptr [0x11c108c8] */
  EDX = (r32((uint32_t)(0x11c108c8)));
  /* 11bf0c21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf0c23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0c25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf0c2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0c31 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0c32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0c35 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0c36 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf0c3cu);
  /* 11bf0c3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0c3e jne 0x11bf0c54 */
  if (!C.zf) goto L_11bf0c54;
  /* 11bf0c40 mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
  /* 11bf0c4a mov eax, 1 */
  EAX = (0x1u);
  /* 11bf0c4f jmp 0x11bf0f1e */
  goto L_11bf0f1e;
L_11bf0c54:;
  /* 11bf0c54 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bf0c57 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0c58 mov edx, dword ptr [0x11c108d8] */
  EDX = (r32((uint32_t)(0x11c108d8)));
  /* 11bf0c5e push edx */
  push32((uint32_t)(EDX));
  /* 11bf0c5f call 0x11bf31a0 */
  push32(0x11bf0c64u); f_11bf31a0();
  /* 11bf0c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0c69 jne 0x11bf0d8f */
  if (!C.zf) goto L_11bf0d8f;
  /* 11bf0c6f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bf0c71 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bf0c74 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0c75 mov ecx, dword ptr [0x11c108d0] */
  ECX = (r32((uint32_t)(0x11c108d0)));
  /* 11bf0c7b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf0c7d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0c7f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0c85 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0c8c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0c8f push edx */
  push32((uint32_t)(EDX));
  /* 11bf0c90 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf0c96u);
  /* 11bf0c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0c98 jne 0x11bf0cae */
  if (!C.zf) goto L_11bf0cae;
  /* 11bf0c9a mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
  /* 11bf0ca4 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf0ca9 jmp 0x11bf0f1e */
  goto L_11bf0f1e;
L_11bf0cae:;
  /* 11bf0cae lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bf0cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0cb2 mov ecx, dword ptr [0x11c108d4] */
  ECX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0cb9 call 0x11bf31a0 */
  push32(0x11bf0cbeu); f_11bf31a0();
  /* 11bf0cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0cc3 jne 0x11bf0cf0 */
  if (!C.zf) goto L_11bf0cf0;
  /* 11bf0cc5 mov edx, dword ptr [0x11c108dc] */
  EDX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0ccb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf0cd1 mov dword ptr [0x11c108dc], edx */
  w32((uint32_t)(0x11c108dc), (EDX));
  /* 11bf0cd7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0cda mov dword ptr [0x11c108e0], eax */
  w32((uint32_t)(0x11c108e0), (EAX));
  /* 11bf0cdf mov ecx, dword ptr [0x11c108e0] */
  ECX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf0ce5 mov dword ptr [0x11c108c4], ecx */
  w32((uint32_t)(0x11c108c4), (ECX));
  /* 11bf0ceb jmp 0x11bf0d8f */
  goto L_11bf0d8f;
L_11bf0cf0:;
  /* 11bf0cf0 mov edx, dword ptr [0x11c108dc] */
  EDX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0cf6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf0cf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf0cfb jne 0x11bf0d8f */
  if (!C.zf) goto L_11bf0d8f;
  /* 11bf0d01 cmp dword ptr [0x11c108cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0d08 je 0x11bf0d5d */
  if (C.zf) goto L_11bf0d5d;
  /* 11bf0d0a mov eax, dword ptr [0x11c108cc] */
  EAX = (r32((uint32_t)(0x11c108cc)));
  /* 11bf0d0f push eax */
  push32((uint32_t)(EAX));
  /* 11bf0d10 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bf0d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0d14 mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0d1a push edx */
  push32((uint32_t)(EDX));
  /* 11bf0d1b call 0x11bf3270 */
  push32(0x11bf0d20u); f_11bf3270();
  /* 11bf0d20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0d23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0d25 jne 0x11bf0d5d */
  if (!C.zf) goto L_11bf0d5d;
  /* 11bf0d27 mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0d2c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11bf0d2e mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
  /* 11bf0d33 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0d36 mov dword ptr [0x11c108e0], ecx */
  w32((uint32_t)(0x11c108e0), (ECX));
  /* 11bf0d3c mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0d42 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0d43 call 0x11be7900 */
  push32(0x11bf0d48u); f_11be7900();
  /* 11bf0d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0d4b cmp eax, dword ptr [0x11c108cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c108cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0d51 jne 0x11bf0d5b */
  if (!C.zf) goto L_11bf0d5b;
  /* 11bf0d53 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0d56 mov dword ptr [0x11c108c4], eax */
  w32((uint32_t)(0x11c108c4), (EAX));
L_11bf0d5b:;
  /* 11bf0d5b jmp 0x11bf0d8f */
  goto L_11bf0d8f;
L_11bf0d5d:;
  /* 11bf0d5d mov ecx, dword ptr [0x11c108dc] */
  ECX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0d63 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0d66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf0d68 jne 0x11bf0d8f */
  if (!C.zf) goto L_11bf0d8f;
  /* 11bf0d6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0d6d push edx */
  push32((uint32_t)(EDX));
  /* 11bf0d6e call 0x11bf12a0 */
  push32(0x11bf0d73u); f_11bf12a0();
  /* 11bf0d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0d78 je 0x11bf0d8f */
  if (C.zf) goto L_11bf0d8f;
  /* 11bf0d7a mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0d7f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11bf0d81 mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
  /* 11bf0d86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0d89 mov dword ptr [0x11c108e0], ecx */
  w32((uint32_t)(0x11c108e0), (ECX));
L_11bf0d8f:;
  /* 11bf0d8f mov edx, dword ptr [0x11c108dc] */
  EDX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0d95 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf0d9b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0da1 je 0x11bf0f11 */
  if (C.zf) goto L_11bf0f11;
  /* 11bf0da7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bf0da9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bf0dac push eax */
  push32((uint32_t)(EAX));
  /* 11bf0dad mov ecx, dword ptr [0x11c108d0] */
  ECX = (r32((uint32_t)(0x11c108d0)));
  /* 11bf0db3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf0db5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0db7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0dbd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0dc4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0dc7 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0dc8 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf0dceu);
  /* 11bf0dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0dd0 jne 0x11bf0de6 */
  if (!C.zf) goto L_11bf0de6;
  /* 11bf0dd2 mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
  /* 11bf0ddc mov eax, 1 */
  EAX = (0x1u);
  /* 11bf0de1 jmp 0x11bf0f1e */
  goto L_11bf0f1e;
L_11bf0de6:;
  /* 11bf0de6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bf0de9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0dea mov ecx, dword ptr [0x11c108d4] */
  ECX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0df0 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0df1 call 0x11bf31a0 */
  push32(0x11bf0df6u); f_11bf31a0();
  /* 11bf0df6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0dfb jne 0x11bf0eb0 */
  if (!C.zf) goto L_11bf0eb0;
  /* 11bf0e01 mov edx, dword ptr [0x11c108dc] */
  EDX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0e07 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11bf0e0a mov dword ptr [0x11c108dc], edx */
  w32((uint32_t)(0x11c108dc), (EDX));
  /* 11bf0e10 cmp dword ptr [0x11c108d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0e17 je 0x11bf0e3a */
  if (C.zf) goto L_11bf0e3a;
  /* 11bf0e19 mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0e1e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11bf0e21 mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
  /* 11bf0e26 cmp dword ptr [0x11c108c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0e2d jne 0x11bf0e38 */
  if (!C.zf) goto L_11bf0e38;
  /* 11bf0e2f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0e32 mov dword ptr [0x11c108c4], ecx */
  w32((uint32_t)(0x11c108c4), (ECX));
L_11bf0e38:;
  /* 11bf0e38 jmp 0x11bf0eae */
  goto L_11bf0eae;
L_11bf0e3a:;
  /* 11bf0e3a cmp dword ptr [0x11c108cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0e41 je 0x11bf0e8f */
  if (C.zf) goto L_11bf0e8f;
  /* 11bf0e43 mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0e49 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0e4a call 0x11be7900 */
  push32(0x11bf0e4fu); f_11be7900();
  /* 11bf0e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0e52 cmp eax, dword ptr [0x11c108cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c108cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0e58 jne 0x11bf0e8f */
  if (!C.zf) goto L_11bf0e8f;
  /* 11bf0e5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf0e5c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0e5f push eax */
  push32((uint32_t)(EAX));
  /* 11bf0e60 call 0x11bf12f0 */
  push32(0x11bf0e65u); f_11bf12f0();
  /* 11bf0e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0e6a je 0x11bf0e8d */
  if (C.zf) goto L_11bf0e8d;
  /* 11bf0e6c mov ecx, dword ptr [0x11c108dc] */
  ECX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0e72 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11bf0e75 mov dword ptr [0x11c108dc], ecx */
  w32((uint32_t)(0x11c108dc), (ECX));
  /* 11bf0e7b cmp dword ptr [0x11c108c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0e82 jne 0x11bf0e8d */
  if (!C.zf) goto L_11bf0e8d;
  /* 11bf0e84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0e87 mov dword ptr [0x11c108c4], edx */
  w32((uint32_t)(0x11c108c4), (EDX));
L_11bf0e8d:;
  /* 11bf0e8d jmp 0x11bf0eae */
  goto L_11bf0eae;
L_11bf0e8f:;
  /* 11bf0e8f mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0e94 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11bf0e97 mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
  /* 11bf0e9c cmp dword ptr [0x11c108c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0ea3 jne 0x11bf0eae */
  if (!C.zf) goto L_11bf0eae;
  /* 11bf0ea5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0ea8 mov dword ptr [0x11c108c4], ecx */
  w32((uint32_t)(0x11c108c4), (ECX));
L_11bf0eae:;
  /* 11bf0eae jmp 0x11bf0f11 */
  goto L_11bf0f11;
L_11bf0eb0:;
  /* 11bf0eb0 cmp dword ptr [0x11c108d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0eb7 jne 0x11bf0f11 */
  if (!C.zf) goto L_11bf0f11;
  /* 11bf0eb9 cmp dword ptr [0x11c108cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0ec0 je 0x11bf0f11 */
  if (C.zf) goto L_11bf0f11;
  /* 11bf0ec2 mov edx, dword ptr [0x11c108cc] */
  EDX = (r32((uint32_t)(0x11c108cc)));
  /* 11bf0ec8 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0ec9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11bf0ecc push eax */
  push32((uint32_t)(EAX));
  /* 11bf0ecd mov ecx, dword ptr [0x11c108d4] */
  ECX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0ed4 call 0x11bf3270 */
  push32(0x11bf0ed9u); f_11bf3270();
  /* 11bf0ed9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0ede jne 0x11bf0f11 */
  if (!C.zf) goto L_11bf0f11;
  /* 11bf0ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf0ee2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0ee5 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0ee6 call 0x11bf12f0 */
  push32(0x11bf0eebu); f_11bf12f0();
  /* 11bf0eeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0ef0 je 0x11bf0f11 */
  if (C.zf) goto L_11bf0f11;
  /* 11bf0ef2 mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0ef7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11bf0efa mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
  /* 11bf0eff cmp dword ptr [0x11c108c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0f06 jne 0x11bf0f11 */
  if (!C.zf) goto L_11bf0f11;
  /* 11bf0f08 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0f0b mov dword ptr [0x11c108c4], ecx */
  w32((uint32_t)(0x11c108c4), (ECX));
L_11bf0f11:;
  /* 11bf0f11 mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0f16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf0f19 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf0f1b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0f1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11bf0f1e:;
  /* 11bf0f1e mov esp, ebp */
  ESP = (EBP);
  /* 11bf0f20 pop ebp */
  EBP = (pop32());
  /* 11bf0f21 ret 4 */
  ESPCHK(0x11bf0c00u, _esp0);
  ESP += 8; return;
}

/* FUN_10010f30 @ 0x11bf0f30 (116 bytes, 33 insns) */
void f_11bf0f30(void) {
  FTRACE(0x11bf0f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0f31 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0f34 mov eax, dword ptr [0x11c108d4] */
  EAX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0f39 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0f3a call 0x11be7900 */
  push32(0x11bf0f3fu); f_11be7900();
  /* 11bf0f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0f42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0f44 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0f47 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11bf0f4a mov dword ptr [0x11c108d0], ecx */
  w32((uint32_t)(0x11c108d0), (ECX));
  /* 11bf0f50 cmp dword ptr [0x11c108d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf0f57 je 0x11bf0f62 */
  if (C.zf) goto L_11bf0f62;
  /* 11bf0f59 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11bf0f60 jmp 0x11bf0f74 */
  goto L_11bf0f74;
L_11bf0f62:;
  /* 11bf0f62 mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf0f68 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0f69 call 0x11bf15e0 */
  push32(0x11bf0f6eu); f_11bf15e0();
  /* 11bf0f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0f71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bf0f74:;
  /* 11bf0f74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf0f77 mov dword ptr [0x11c108cc], eax */
  w32((uint32_t)(0x11c108cc), (EAX));
  /* 11bf0f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf0f7e push 0x11bf0fb0 */
  push32((uint32_t)(0x11bf0fb0u));
  /* 11bf0f83 call dword ptr [0x11c132c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132c8))), 0x11bf0f89u);
  /* 11bf0f89 mov ecx, dword ptr [0x11c108dc] */
  ECX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf0f8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf0f92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf0f94 jne 0x11bf0fa0 */
  if (!C.zf) goto L_11bf0fa0;
  /* 11bf0f96 mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
L_11bf0fa0:;
  /* 11bf0fa0 mov esp, ebp */
  ESP = (EBP);
  /* 11bf0fa2 pop ebp */
  EBP = (pop32());
  /* 11bf0fa3 ret  */
  ESPCHK(0x11bf0f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fb0 @ 0x11bf0fb0 (287 bytes, 86 insns) */
void f_11bf0fb0(void) {
  FTRACE(0x11bf0fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf0fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf0fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf0fb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf0fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0fba call 0x11bf1560 */
  push32(0x11bf0fbfu); f_11bf1560();
  /* 11bf0fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0fc2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11bf0fc5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bf0fc7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bf0fca push ecx */
  push32((uint32_t)(ECX));
  /* 11bf0fcb mov edx, dword ptr [0x11c108d0] */
  EDX = (r32((uint32_t)(0x11c108d0)));
  /* 11bf0fd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf0fd3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf0fd5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf0fdb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf0fe1 push edx */
  push32((uint32_t)(EDX));
  /* 11bf0fe2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf0fe5 push eax */
  push32((uint32_t)(EAX));
  /* 11bf0fe6 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf0fecu);
  /* 11bf0fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf0fee jne 0x11bf1004 */
  if (!C.zf) goto L_11bf1004;
  /* 11bf0ff0 mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
  /* 11bf0ffa mov eax, 1 */
  EAX = (0x1u);
  /* 11bf0fff jmp 0x11bf10c9 */
  goto L_11bf10c9;
L_11bf1004:;
  /* 11bf1004 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bf1007 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1008 mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf100e push edx */
  push32((uint32_t)(EDX));
  /* 11bf100f call 0x11bf31a0 */
  push32(0x11bf1014u); f_11bf31a0();
  /* 11bf1014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1019 jne 0x11bf1059 */
  if (!C.zf) goto L_11bf1059;
  /* 11bf101b cmp dword ptr [0x11c108d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1022 jne 0x11bf1036 */
  if (!C.zf) goto L_11bf1036;
  /* 11bf1024 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf1026 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf1029 push eax */
  push32((uint32_t)(EAX));
  /* 11bf102a call 0x11bf12f0 */
  push32(0x11bf102fu); f_11bf12f0();
  /* 11bf102f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1034 je 0x11bf1057 */
  if (C.zf) goto L_11bf1057;
L_11bf1036:;
  /* 11bf1036 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf1039 mov dword ptr [0x11c108e0], ecx */
  w32((uint32_t)(0x11c108e0), (ECX));
  /* 11bf103f mov edx, dword ptr [0x11c108e0] */
  EDX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf1045 mov dword ptr [0x11c108c4], edx */
  w32((uint32_t)(0x11c108c4), (EDX));
  /* 11bf104b mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf1050 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11bf1052 mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
L_11bf1057:;
  /* 11bf1057 jmp 0x11bf10bc */
  goto L_11bf10bc;
L_11bf1059:;
  /* 11bf1059 cmp dword ptr [0x11c108d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1060 jne 0x11bf10bc */
  if (!C.zf) goto L_11bf10bc;
  /* 11bf1062 cmp dword ptr [0x11c108cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1069 je 0x11bf10bc */
  if (C.zf) goto L_11bf10bc;
  /* 11bf106b mov ecx, dword ptr [0x11c108cc] */
  ECX = (r32((uint32_t)(0x11c108cc)));
  /* 11bf1071 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1072 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11bf1075 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1076 mov eax, dword ptr [0x11c108d4] */
  EAX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf107b push eax */
  push32((uint32_t)(EAX));
  /* 11bf107c call 0x11bf3270 */
  push32(0x11bf1081u); f_11bf3270();
  /* 11bf1081 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1086 jne 0x11bf10bc */
  if (!C.zf) goto L_11bf10bc;
  /* 11bf1088 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf108a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf108d push ecx */
  push32((uint32_t)(ECX));
  /* 11bf108e call 0x11bf12f0 */
  push32(0x11bf1093u); f_11bf12f0();
  /* 11bf1093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1098 je 0x11bf10bc */
  if (C.zf) goto L_11bf10bc;
  /* 11bf109a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf109d mov dword ptr [0x11c108e0], edx */
  w32((uint32_t)(0x11c108e0), (EDX));
  /* 11bf10a3 mov eax, dword ptr [0x11c108e0] */
  EAX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf10a8 mov dword ptr [0x11c108c4], eax */
  w32((uint32_t)(0x11c108c4), (EAX));
  /* 11bf10ad mov ecx, dword ptr [0x11c108dc] */
  ECX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf10b3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf10b6 mov dword ptr [0x11c108dc], ecx */
  w32((uint32_t)(0x11c108dc), (ECX));
L_11bf10bc:;
  /* 11bf10bc mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf10c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf10c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf10c6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf10c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11bf10c9:;
  /* 11bf10c9 mov esp, ebp */
  ESP = (EBP);
  /* 11bf10cb pop ebp */
  EBP = (pop32());
  /* 11bf10cc ret 4 */
  ESPCHK(0x11bf0fb0u, _esp0);
  ESP += 8; return;
}

/* FUN_100110d0 @ 0x11bf10d0 (69 bytes, 20 insns) */
void f_11bf10d0(void) {
  FTRACE(0x11bf10d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf10d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf10d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf10d3 mov eax, dword ptr [0x11c108d8] */
  EAX = (r32((uint32_t)(0x11c108d8)));
  /* 11bf10d8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf10d9 call 0x11be7900 */
  push32(0x11bf10deu); f_11be7900();
  /* 11bf10de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf10e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf10e3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf10e6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11bf10e9 mov dword ptr [0x11c108c8], ecx */
  w32((uint32_t)(0x11c108c8), (ECX));
  /* 11bf10ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf10f1 push 0x11bf1120 */
  push32((uint32_t)(0x11bf1120u));
  /* 11bf10f6 call dword ptr [0x11c132c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132c8))), 0x11bf10fcu);
  /* 11bf10fc mov edx, dword ptr [0x11c108dc] */
  EDX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf1102 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf1105 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf1107 jne 0x11bf1113 */
  if (!C.zf) goto L_11bf1113;
  /* 11bf1109 mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
L_11bf1113:;
  /* 11bf1113 pop ebp */
  EBP = (pop32());
  /* 11bf1114 ret  */
  ESPCHK(0x11bf10d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x11bf1120 (172 bytes, 54 insns) */
void f_11bf1120(void) {
  FTRACE(0x11bf1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1120 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1121 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1123 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1129 push eax */
  push32((uint32_t)(EAX));
  /* 11bf112a call 0x11bf1560 */
  push32(0x11bf112fu); f_11bf1560();
  /* 11bf112f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1132 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11bf1135 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bf1137 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bf113a push ecx */
  push32((uint32_t)(ECX));
  /* 11bf113b mov edx, dword ptr [0x11c108c8] */
  EDX = (r32((uint32_t)(0x11c108c8)));
  /* 11bf1141 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf1143 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1145 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf114b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1151 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1152 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf1155 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1156 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf115cu);
  /* 11bf115c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf115e jne 0x11bf1171 */
  if (!C.zf) goto L_11bf1171;
  /* 11bf1160 mov dword ptr [0x11c108dc], 0 */
  w32((uint32_t)(0x11c108dc), (0x0u));
  /* 11bf116a mov eax, 1 */
  EAX = (0x1u);
  /* 11bf116f jmp 0x11bf11c6 */
  goto L_11bf11c6;
L_11bf1171:;
  /* 11bf1171 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11bf1174 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1175 mov edx, dword ptr [0x11c108d8] */
  EDX = (r32((uint32_t)(0x11c108d8)));
  /* 11bf117b push edx */
  push32((uint32_t)(EDX));
  /* 11bf117c call 0x11bf31a0 */
  push32(0x11bf1181u); f_11bf31a0();
  /* 11bf1181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1186 jne 0x11bf11b9 */
  if (!C.zf) goto L_11bf11b9;
  /* 11bf1188 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf118b push eax */
  push32((uint32_t)(EAX));
  /* 11bf118c call 0x11bf12a0 */
  push32(0x11bf1191u); f_11bf12a0();
  /* 11bf1191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1196 je 0x11bf11b9 */
  if (C.zf) goto L_11bf11b9;
  /* 11bf1198 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11bf119b mov dword ptr [0x11c108e0], ecx */
  w32((uint32_t)(0x11c108e0), (ECX));
  /* 11bf11a1 mov edx, dword ptr [0x11c108e0] */
  EDX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf11a7 mov dword ptr [0x11c108c4], edx */
  w32((uint32_t)(0x11c108c4), (EDX));
  /* 11bf11ad mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf11b2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11bf11b4 mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
L_11bf11b9:;
  /* 11bf11b9 mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf11be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf11c1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf11c3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf11c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11bf11c6:;
  /* 11bf11c6 mov esp, ebp */
  ESP = (EBP);
  /* 11bf11c8 pop ebp */
  EBP = (pop32());
  /* 11bf11c9 ret 4 */
  ESPCHK(0x11bf1120u, _esp0);
  ESP += 8; return;
}

/* FUN_100111d0 @ 0x11bf11d0 (43 bytes, 11 insns) */
void f_11bf11d0(void) {
  FTRACE(0x11bf11d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf11d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf11d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf11d3 mov eax, dword ptr [0x11c108dc] */
  EAX = (r32((uint32_t)(0x11c108dc)));
  /* 11bf11d8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf11dd mov dword ptr [0x11c108dc], eax */
  w32((uint32_t)(0x11c108dc), (EAX));
  /* 11bf11e2 call dword ptr [0x11c132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132c4))), 0x11bf11e8u);
  /* 11bf11e8 mov dword ptr [0x11c108e0], eax */
  w32((uint32_t)(0x11c108e0), (EAX));
  /* 11bf11ed mov ecx, dword ptr [0x11c108e0] */
  ECX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf11f3 mov dword ptr [0x11c108c4], ecx */
  w32((uint32_t)(0x11c108c4), (ECX));
  /* 11bf11f9 pop ebp */
  EBP = (pop32());
  /* 11bf11fa ret  */
  ESPCHK(0x11bf11d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x11bf1200 (155 bytes, 57 insns) */
void f_11bf1200(void) {
  FTRACE(0x11bf1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1200 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1201 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1206 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf120a je 0x11bf122b */
  if (C.zf) goto L_11bf122b;
  /* 11bf120c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf120f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf1212 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf1214 je 0x11bf122b */
  if (C.zf) goto L_11bf122b;
  /* 11bf1216 push 0x11c0c8ec */
  push32((uint32_t)(0x11c0c8ecu));
  /* 11bf121b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf121e push edx */
  push32((uint32_t)(EDX));
  /* 11bf121f call 0x11bf0760 */
  push32(0x11bf1224u); f_11bf0760();
  /* 11bf1224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1227 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1229 jne 0x11bf1253 */
  if (!C.zf) goto L_11bf1253;
L_11bf122b:;
  /* 11bf122b push 8 */
  push32((uint32_t)(0x8u));
  /* 11bf122d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11bf1230 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1231 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11bf1236 mov ecx, dword ptr [0x11c108e0] */
  ECX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf123c push ecx */
  push32((uint32_t)(ECX));
  /* 11bf123d call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf1243u);
  /* 11bf1243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1245 jne 0x11bf124b */
  if (!C.zf) goto L_11bf124b;
  /* 11bf1247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf1249 jmp 0x11bf1297 */
  goto L_11bf1297;
L_11bf124b:;
  /* 11bf124b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11bf124e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bf1251 jmp 0x11bf128b */
  goto L_11bf128b;
L_11bf1253:;
  /* 11bf1253 push 0x11c0c8e8 */
  push32((uint32_t)(0x11c0c8e8u));
  /* 11bf1258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf125b push eax */
  push32((uint32_t)(EAX));
  /* 11bf125c call 0x11bf0760 */
  push32(0x11bf1261u); f_11bf0760();
  /* 11bf1261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1266 jne 0x11bf128b */
  if (!C.zf) goto L_11bf128b;
  /* 11bf1268 push 8 */
  push32((uint32_t)(0x8u));
  /* 11bf126a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11bf126d push ecx */
  push32((uint32_t)(ECX));
  /* 11bf126e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bf1270 mov edx, dword ptr [0x11c108e0] */
  EDX = (r32((uint32_t)(0x11c108e0)));
  /* 11bf1276 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1277 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf127du);
  /* 11bf127d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf127f jne 0x11bf1285 */
  if (!C.zf) goto L_11bf1285;
  /* 11bf1281 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf1283 jmp 0x11bf1297 */
  goto L_11bf1297;
L_11bf1285:;
  /* 11bf1285 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11bf1288 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11bf128b:;
  /* 11bf128b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf128e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf128f call 0x11bf3380 */
  push32(0x11bf1294u); f_11bf3380();
  /* 11bf1294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf1297:;
  /* 11bf1297 mov esp, ebp */
  ESP = (EBP);
  /* 11bf1299 pop ebp */
  EBP = (pop32());
  /* 11bf129a ret  */
  ESPCHK(0x11bf1200u, _esp0);
  ESP += 4; return;
}

/* FUN_100112a0 @ 0x11bf12a0 (79 bytes, 26 insns) */
void f_11bf12a0(void) {
  FTRACE(0x11bf12a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf12a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf12a1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf12a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf12a6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11bf12aa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11bf12ae mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bf12b5 jmp 0x11bf12c0 */
  goto L_11bf12c0;
L_11bf12b7:;
  /* 11bf12b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf12ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf12bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11bf12c0:;
  /* 11bf12c0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf12c4 jae 0x11bf12e6 */
  if (!C.cf) goto L_11bf12e6;
  /* 11bf12c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf12c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf12cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf12d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf12d4 mov cx, word ptr [eax*2 + 0x11c0f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11c0f9c4)));
  /* 11bf12dc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf12de jne 0x11bf12e4 */
  if (!C.zf) goto L_11bf12e4;
  /* 11bf12e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf12e2 jmp 0x11bf12eb */
  goto L_11bf12eb;
L_11bf12e4:;
  /* 11bf12e4 jmp 0x11bf12b7 */
  goto L_11bf12b7;
L_11bf12e6:;
  /* 11bf12e6 mov eax, 1 */
  EAX = (0x1u);
L_11bf12eb:;
  /* 11bf12eb mov esp, ebp */
  ESP = (EBP);
  /* 11bf12ed pop ebp */
  EBP = (pop32());
  /* 11bf12ee ret  */
  ESPCHK(0x11bf12a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x11bf12f0 (135 bytes, 48 insns) */
void f_11bf12f0(void) {
  FTRACE(0x11bf12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf12f1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf12f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf12f6 push esi */
  push32((uint32_t)(ESI));
  /* 11bf12f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf12fa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf12ff and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf1304 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf1309 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11bf130c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf1311 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf1314 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11bf1316 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11bf1319 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf131a push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf131c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf131f push edx */
  push32((uint32_t)(EDX));
  /* 11bf1320 call dword ptr [0x11c108e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c108e4))), 0x11bf1326u);
  /* 11bf1326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1328 jne 0x11bf132e */
  if (!C.zf) goto L_11bf132e;
  /* 11bf132a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf132c jmp 0x11bf1372 */
  goto L_11bf1372;
L_11bf132e:;
  /* 11bf132e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11bf1331 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1332 call 0x11bf1560 */
  push32(0x11bf1337u); f_11bf1560();
  /* 11bf1337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf133a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf133d je 0x11bf136d */
  if (C.zf) goto L_11bf136d;
  /* 11bf133f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1343 je 0x11bf136d */
  if (C.zf) goto L_11bf136d;
  /* 11bf1345 mov ecx, dword ptr [0x11c108d4] */
  ECX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf134b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf134c call 0x11bf15e0 */
  push32(0x11bf1351u); f_11bf15e0();
  /* 11bf1351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1354 mov esi, eax */
  ESI = (EAX);
  /* 11bf1356 mov edx, dword ptr [0x11c108d4] */
  EDX = (r32((uint32_t)(0x11c108d4)));
  /* 11bf135c push edx */
  push32((uint32_t)(EDX));
  /* 11bf135d call 0x11be7900 */
  push32(0x11bf1362u); f_11be7900();
  /* 11bf1362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1365 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1367 jne 0x11bf136d */
  if (!C.zf) goto L_11bf136d;
  /* 11bf1369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf136b jmp 0x11bf1372 */
  goto L_11bf1372;
L_11bf136d:;
  /* 11bf136d mov eax, 1 */
  EAX = (0x1u);
L_11bf1372:;
  /* 11bf1372 pop esi */
  ESI = (pop32());
  /* 11bf1373 mov esp, ebp */
  ESP = (EBP);
  /* 11bf1375 pop ebp */
  EBP = (pop32());
  /* 11bf1376 ret  */
  ESPCHK(0x11bf12f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011380 @ 0x11bf1380 (77 bytes, 18 insns) */
void f_11bf1380(void) {
  FTRACE(0x11bf1380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1380 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1381 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1383 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1389 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11bf1393 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11bf1399 push eax */
  push32((uint32_t)(EAX));
  /* 11bf139a call dword ptr [0x11c132c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132c0))), 0x11bf13a0u);
  /* 11bf13a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf13a2 je 0x11bf13b9 */
  if (C.zf) goto L_11bf13b9;
  /* 11bf13a4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf13ab jne 0x11bf13b9 */
  if (!C.zf) goto L_11bf13b9;
  /* 11bf13ad mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11bf13b7 jmp 0x11bf13c3 */
  goto L_11bf13c3;
L_11bf13b9:;
  /* 11bf13b9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11bf13c3:;
  /* 11bf13c3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11bf13c9 mov esp, ebp */
  ESP = (EBP);
  /* 11bf13cb pop ebp */
  EBP = (pop32());
  /* 11bf13cc ret  */
  ESPCHK(0x11bf1380u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11bf13d0 (388 bytes, 118 insns) */
void f_11bf13d0(void) {
  FTRACE(0x11bf13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf13d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf13d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf13d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf13d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf13dd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11bf13e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11bf13eb:;
  /* 11bf13eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf13ee cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf13f1 jg 0x11bf1538 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf1538;
  /* 11bf13f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf13fa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf13fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf13fe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1400 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bf1402 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf1405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1408 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf140b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf140e cmp edx, dword ptr [ecx + 0x11c0f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11c0f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1414 jne 0x11bf150e */
  if (!C.zf) goto L_11bf150e;
  /* 11bf141a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf141d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf1420 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1424 ja 0x11bf1447 */
  if ((!C.cf&&!C.zf)) goto L_11bf1447;
  /* 11bf1426 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf142a je 0x11bf14b9 */
  if (C.zf) goto L_11bf14b9;
  /* 11bf1430 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1434 je 0x11bf1464 */
  if (C.zf) goto L_11bf1464;
  /* 11bf1436 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf143a je 0x11bf1486 */
  if (C.zf) goto L_11bf1486;
  /* 11bf143c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1440 je 0x11bf14a8 */
  if (C.zf) goto L_11bf14a8;
  /* 11bf1442 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf1447:;
  /* 11bf1447 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf144e je 0x11bf1475 */
  if (C.zf) goto L_11bf1475;
  /* 11bf1450 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1457 je 0x11bf1497 */
  if (C.zf) goto L_11bf1497;
  /* 11bf1459 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1460 je 0x11bf14ca */
  if (C.zf) goto L_11bf14ca;
  /* 11bf1462 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf1464:;
  /* 11bf1464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1467 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf146a add ecx, 0x11c0f524 */
  { uint32_t _a=(ECX),_b=(0x11c0f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1470 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf1473 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf1475:;
  /* 11bf1475 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1478 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf147b mov eax, dword ptr [edx + 0x11c0f52c] */
  EAX = (r32((uint32_t)(EDX + 0x11c0f52c)));
  /* 11bf1481 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf1484 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf1486:;
  /* 11bf1486 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1489 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf148c add ecx, 0x11c0f530 */
  { uint32_t _a=(ECX),_b=(0x11c0f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1492 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf1495 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf1497:;
  /* 11bf1497 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf149a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf149d mov eax, dword ptr [edx + 0x11c0f534] */
  EAX = (r32((uint32_t)(EDX + 0x11c0f534)));
  /* 11bf14a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf14a6 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf14a8:;
  /* 11bf14a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf14ab imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf14ae add ecx, 0x11c0f538 */
  { uint32_t _a=(ECX),_b=(0x11c0f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf14b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf14b7 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf14b9:;
  /* 11bf14b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf14bc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf14bf add edx, 0x11c0f53c */
  { uint32_t _a=(EDX),_b=(0x11c0f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf14c5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf14c8 jmp 0x11bf14d8 */
  goto L_11bf14d8;
L_11bf14ca:;
  /* 11bf14ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf14cd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf14d0 add eax, 0x11c0f544 */
  { uint32_t _a=(EAX),_b=(0x11c0f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf14d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bf14d8:;
  /* 11bf14d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf14dc je 0x11bf14e4 */
  if (C.zf) goto L_11bf14e4;
  /* 11bf14de cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf14e2 jge 0x11bf14e6 */
  if ((C.sf==C.of)) goto L_11bf14e6;
L_11bf14e4:;
  /* 11bf14e4 jmp 0x11bf1538 */
  goto L_11bf1538;
L_11bf14e6:;
  /* 11bf14e6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf14e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf14ec push ecx */
  push32((uint32_t)(ECX));
  /* 11bf14ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf14f0 push edx */
  push32((uint32_t)(EDX));
  /* 11bf14f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf14f4 push eax */
  push32((uint32_t)(EAX));
  /* 11bf14f5 call 0x11be82f0 */
  push32(0x11bf14fau); f_11be82f0();
  /* 11bf14fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf14fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1500 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1503 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11bf1507 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf150c jmp 0x11bf154e */
  goto L_11bf154e;
L_11bf150e:;
  /* 11bf150e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1511 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf1514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1517 cmp eax, dword ptr [edx + 0x11c0f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11c0f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf151d jae 0x11bf152a */
  if (!C.cf) goto L_11bf152a;
  /* 11bf151f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1522 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1525 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf1528 jmp 0x11bf1533 */
  goto L_11bf1533;
L_11bf152a:;
  /* 11bf152a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf152d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1530 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bf1533:;
  /* 11bf1533 jmp 0x11bf13eb */
  goto L_11bf13eb;
L_11bf1538:;
  /* 11bf1538 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf153b push eax */
  push32((uint32_t)(EAX));
  /* 11bf153c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf153f push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1540 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf1543 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1547 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1548 call dword ptr [0x11c132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132cc))), 0x11bf154eu);
L_11bf154e:;
  /* 11bf154e mov esp, ebp */
  ESP = (EBP);
  /* 11bf1550 pop ebp */
  EBP = (pop32());
  /* 11bf1551 ret 0x10 */
  ESPCHK(0x11bf13d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011560 @ 0x11bf1560 (118 bytes, 42 insns) */
void f_11bf1560(void) {
  FTRACE(0x11bf1560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1560 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1561 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1566 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11bf156d:;
  /* 11bf156d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1570 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf1572 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11bf1575 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bf1579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf157c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf157f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf1582 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf1584 je 0x11bf15cf */
  if (C.zf) goto L_11bf15cf;
  /* 11bf1586 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bf158a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf158d jl 0x11bf15a2 */
  if ((C.sf!=C.of)) goto L_11bf15a2;
  /* 11bf158f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bf1593 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1596 jg 0x11bf15a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf15a2;
  /* 11bf1598 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11bf159b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bf159d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11bf15a0 jmp 0x11bf15bc */
  goto L_11bf15bc;
L_11bf15a2:;
  /* 11bf15a2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bf15a6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf15a9 jl 0x11bf15bc */
  if ((C.sf!=C.of)) goto L_11bf15bc;
  /* 11bf15ab movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bf15af cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf15b2 jg 0x11bf15bc */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf15bc;
  /* 11bf15b4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11bf15b7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bf15b9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11bf15bc:;
  /* 11bf15bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf15bf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11bf15c2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bf15c6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11bf15ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf15cd jmp 0x11bf156d */
  goto L_11bf156d;
L_11bf15cf:;
  /* 11bf15cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf15d2 mov esp, ebp */
  ESP = (EBP);
  /* 11bf15d4 pop ebp */
  EBP = (pop32());
  /* 11bf15d5 ret  */
  ESPCHK(0x11bf1560u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11bf15e0 (101 bytes, 36 insns) */
void f_11bf15e0(void) {
  FTRACE(0x11bf15e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf15e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf15e1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf15e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf15e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bf15ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf15f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf15f2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11bf15f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf15f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf15fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11bf15fe:;
  /* 11bf15fe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bf1602 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1605 jl 0x11bf1610 */
  if ((C.sf!=C.of)) goto L_11bf1610;
  /* 11bf1607 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bf160b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf160e jle 0x11bf1622 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf1622;
L_11bf1610:;
  /* 11bf1610 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bf1614 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1617 jl 0x11bf163e */
  if ((C.sf!=C.of)) goto L_11bf163e;
  /* 11bf1619 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11bf161d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1620 jg 0x11bf163e */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf163e;
L_11bf1622:;
  /* 11bf1622 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf1625 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1628 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf162b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf162e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf1630 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11bf1633 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1636 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1639 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bf163c jmp 0x11bf15fe */
  goto L_11bf15fe;
L_11bf163e:;
  /* 11bf163e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf1641 mov esp, ebp */
  ESP = (EBP);
  /* 11bf1643 pop ebp */
  EBP = (pop32());
  /* 11bf1644 ret  */
  ESPCHK(0x11bf15e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011650 @ 0x11bf1650 (122 bytes, 39 insns) */
void f_11bf1650(void) {
  FTRACE(0x11bf1650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1650 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1651 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1653 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1657 cmp eax, dword ptr [0x11c1217c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c1217c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf165d jae 0x11bf1681 */
  if (!C.cf) goto L_11bf1681;
  /* 11bf165f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1662 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11bf1665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1668 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf166b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf166e mov eax, dword ptr [ecx*4 + 0x11c12040] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c12040)));
  /* 11bf1675 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11bf167a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf167d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf167f jne 0x11bf169c */
  if (!C.zf) goto L_11bf169c;
L_11bf1681:;
  /* 11bf1681 call 0x11bec9a0 */
  push32(0x11bf1686u); f_11bec9a0();
  /* 11bf1686 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11bf168c call 0x11bec9b0 */
  push32(0x11bf1691u); f_11bec9b0();
  /* 11bf1691 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bf1697 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf169a jmp 0x11bf16c6 */
  goto L_11bf16c6;
L_11bf169c:;
  /* 11bf169c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf169f push edx */
  push32((uint32_t)(EDX));
  /* 11bf16a0 call 0x11bee1c0 */
  push32(0x11bf16a5u); f_11bee1c0();
  /* 11bf16a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf16a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf16ab push eax */
  push32((uint32_t)(EAX));
  /* 11bf16ac call 0x11bf16d0 */
  push32(0x11bf16b1u); f_11bf16d0();
  /* 11bf16b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf16b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf16b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf16ba push ecx */
  push32((uint32_t)(ECX));
  /* 11bf16bb call 0x11bee250 */
  push32(0x11bf16c0u); f_11bee250();
  /* 11bf16c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf16c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bf16c6:;
  /* 11bf16c6 mov esp, ebp */
  ESP = (EBP);
  /* 11bf16c8 pop ebp */
  EBP = (pop32());
  /* 11bf16c9 ret  */
  ESPCHK(0x11bf1650u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11bf16d0 (170 bytes, 59 insns) */
void f_11bf16d0(void) {
  FTRACE(0x11bf16d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf16d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf16d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf16d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf16d4 push esi */
  push32((uint32_t)(ESI));
  /* 11bf16d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf16d8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf16d9 call 0x11bee040 */
  push32(0x11bf16deu); f_11bee040();
  /* 11bf16de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf16e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf16e4 je 0x11bf1723 */
  if (C.zf) goto L_11bf1723;
  /* 11bf16e6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf16ea je 0x11bf16f2 */
  if (C.zf) goto L_11bf16f2;
  /* 11bf16ec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf16f0 jne 0x11bf170c */
  if (!C.zf) goto L_11bf170c;
L_11bf16f2:;
  /* 11bf16f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf16f4 call 0x11bee040 */
  push32(0x11bf16f9u); f_11bee040();
  /* 11bf16f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf16fc mov esi, eax */
  ESI = (EAX);
  /* 11bf16fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf1700 call 0x11bee040 */
  push32(0x11bf1705u); f_11bee040();
  /* 11bf1705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1708 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf170a je 0x11bf1723 */
  if (C.zf) goto L_11bf1723;
L_11bf170c:;
  /* 11bf170c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf170f push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1710 call 0x11bee040 */
  push32(0x11bf1715u); f_11bee040();
  /* 11bf1715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1718 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1719 call dword ptr [0x11c132bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132bc))), 0x11bf171fu);
  /* 11bf171f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf1721 je 0x11bf172c */
  if (C.zf) goto L_11bf172c;
L_11bf1723:;
  /* 11bf1723 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf172a jmp 0x11bf1735 */
  goto L_11bf1735;
L_11bf172c:;
  /* 11bf172c call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11bf1732u);
  /* 11bf1732 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bf1735:;
  /* 11bf1735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1738 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1739 call 0x11bedf60 */
  push32(0x11bf173eu); f_11bedf60();
  /* 11bf173e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1744 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11bf1747 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf174a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11bf174d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf1750 mov edx, dword ptr [eax*4 + 0x11c12040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11c12040)));
  /* 11bf1757 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11bf175c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1760 je 0x11bf1773 */
  if (C.zf) goto L_11bf1773;
  /* 11bf1762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf1765 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1766 call 0x11bec900 */
  push32(0x11bf176bu); f_11bec900();
  /* 11bf176b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf176e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf1771 jmp 0x11bf1775 */
  goto L_11bf1775;
L_11bf1773:;
  /* 11bf1773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf1775:;
  /* 11bf1775 pop esi */
  ESI = (pop32());
  /* 11bf1776 mov esp, ebp */
  ESP = (EBP);
  /* 11bf1778 pop ebp */
  EBP = (pop32());
  /* 11bf1779 ret  */
  ESPCHK(0x11bf16d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x11bf1780 (146 bytes, 52 insns) */
void f_11bf1780(void) {
  FTRACE(0x11bf1780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1780 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1781 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1783 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf1784 push esi */
  push32((uint32_t)(ESI));
  /* 11bf1785 push edi */
  push32((uint32_t)(EDI));
L_11bf1786:;
  /* 11bf1786 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf178a jne 0x11bf17aa */
  if (!C.zf) goto L_11bf17aa;
  /* 11bf178c push 0x11c0c228 */
  push32((uint32_t)(0x11c0c228u));
  /* 11bf1791 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf1793 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11bf1795 push 0x11c0c8f0 */
  push32((uint32_t)(0x11c0c8f0u));
  /* 11bf179a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf179c call 0x11be3b90 */
  push32(0x11bf17a1u); f_11be3b90();
  /* 11bf17a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf17a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf17a7 jne 0x11bf17aa */
  if (!C.zf) goto L_11bf17aa;
  /* 11bf17a9 int3  */
  x86_unimpl("int3 @ 0x11bf17a9");
L_11bf17aa:;
  /* 11bf17aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf17ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf17ae jne 0x11bf1786 */
  if (!C.zf) goto L_11bf1786;
  /* 11bf17b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf17b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bf17b6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf17bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf17be je 0x11bf180d */
  if (C.zf) goto L_11bf180d;
  /* 11bf17c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf17c3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11bf17c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf17c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf17cb je 0x11bf180d */
  if (C.zf) goto L_11bf180d;
  /* 11bf17cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf17cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf17d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bf17d5 push eax */
  push32((uint32_t)(EAX));
  /* 11bf17d6 call 0x11be5560 */
  push32(0x11bf17dbu); f_11be5560();
  /* 11bf17db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf17de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf17e1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bf17e4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf17ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf17ed mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11bf17f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf17f3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11bf17f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf17fc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11bf1803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1806 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11bf180d:;
  /* 11bf180d pop edi */
  EDI = (pop32());
  /* 11bf180e pop esi */
  ESI = (pop32());
  /* 11bf180f pop ebx */
  EBX = (pop32());
  /* 11bf1810 pop ebp */
  EBP = (pop32());
  /* 11bf1811 ret  */
  ESPCHK(0x11bf1780u, _esp0);
  ESP += 4; return;
}

/* FUN_10011820 @ 0x11bf1820 (289 bytes, 97 insns) */
void f_11bf1820(void) {
  FTRACE(0x11bf1820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1820 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1821 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1823 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1826 push esi */
  push32((uint32_t)(ESI));
  /* 11bf1827 mov eax, dword ptr [0x11c0fc98] */
  EAX = (r32((uint32_t)(0x11c0fc98)));
  /* 11bf182c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf182f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bf1836 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf183d jmp 0x11bf1848 */
  goto L_11bf1848;
L_11bf183f:;
  /* 11bf183f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1842 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1845 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bf1848:;
  /* 11bf1848 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf184c jae 0x11bf1881 */
  if (!C.cf) goto L_11bf1881;
  /* 11bf184e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1851 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1854 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bf1857 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1858 call 0x11be7900 */
  push32(0x11bf185du); f_11be7900();
  /* 11bf185d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1860 mov esi, eax */
  ESI = (EAX);
  /* 11bf1862 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1865 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1868 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11bf186c push ecx */
  push32((uint32_t)(ECX));
  /* 11bf186d call 0x11be7900 */
  push32(0x11bf1872u); f_11be7900();
  /* 11bf1872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1875 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1878 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bf187c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf187f jmp 0x11bf183f */
  goto L_11bf183f;
L_11bf1881:;
  /* 11bf1881 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf1884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1887 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1888 call 0x11be4ab0 */
  push32(0x11bf188du); f_11be4ab0();
  /* 11bf188d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1890 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf1893 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1897 je 0x11bf1939 */
  if (C.zf) goto L_11bf1939;
  /* 11bf189d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf18a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf18a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf18aa jmp 0x11bf18b5 */
  goto L_11bf18b5;
L_11bf18ac:;
  /* 11bf18ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf18af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf18b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bf18b5:;
  /* 11bf18b5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf18b9 jae 0x11bf192a */
  if (!C.cf) goto L_11bf192a;
  /* 11bf18bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf18be mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11bf18c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf18c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf18c7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf18ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf18cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf18d0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bf18d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf18d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf18d7 push edx */
  push32((uint32_t)(EDX));
  /* 11bf18d8 call 0x11be7a80 */
  push32(0x11bf18ddu); f_11be7a80();
  /* 11bf18dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf18e0 push eax */
  push32((uint32_t)(EAX));
  /* 11bf18e1 call 0x11be7900 */
  push32(0x11bf18e6u); f_11be7900();
  /* 11bf18e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf18e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf18ec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf18ee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf18f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf18f4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11bf18f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf18fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf18fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf1900 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1903 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1906 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11bf190a push eax */
  push32((uint32_t)(EAX));
  /* 11bf190b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf190e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf190f call 0x11be7a80 */
  push32(0x11bf1914u); f_11be7a80();
  /* 11bf1914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1917 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1918 call 0x11be7900 */
  push32(0x11bf191du); f_11be7900();
  /* 11bf191d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1920 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1923 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1925 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf1928 jmp 0x11bf18ac */
  goto L_11bf18ac;
L_11bf192a:;
  /* 11bf192a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf192d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11bf1930 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1933 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1936 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11bf1939:;
  /* 11bf1939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf193c pop esi */
  ESI = (pop32());
  /* 11bf193d mov esp, ebp */
  ESP = (EBP);
  /* 11bf193f pop ebp */
  EBP = (pop32());
  /* 11bf1940 ret  */
  ESPCHK(0x11bf1820u, _esp0);
  ESP += 4; return;
}

/* FUN_10011950 @ 0x11bf1950 (291 bytes, 97 insns) */
void f_11bf1950(void) {
  FTRACE(0x11bf1950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1950 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1951 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1953 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1956 push esi */
  push32((uint32_t)(ESI));
  /* 11bf1957 mov eax, dword ptr [0x11c0fc98] */
  EAX = (r32((uint32_t)(0x11c0fc98)));
  /* 11bf195c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf195f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bf1966 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf196d jmp 0x11bf1978 */
  goto L_11bf1978;
L_11bf196f:;
  /* 11bf196f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1975 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bf1978:;
  /* 11bf1978 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf197c jae 0x11bf19b2 */
  if (!C.cf) goto L_11bf19b2;
  /* 11bf197e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1984 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11bf1988 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1989 call 0x11be7900 */
  push32(0x11bf198eu); f_11be7900();
  /* 11bf198e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1991 mov esi, eax */
  ESI = (EAX);
  /* 11bf1993 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1996 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1999 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11bf199d push ecx */
  push32((uint32_t)(ECX));
  /* 11bf199e call 0x11be7900 */
  push32(0x11bf19a3u); f_11be7900();
  /* 11bf19a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf19a6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf19a9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bf19ad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf19b0 jmp 0x11bf196f */
  goto L_11bf196f;
L_11bf19b2:;
  /* 11bf19b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf19b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf19b8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf19b9 call 0x11be4ab0 */
  push32(0x11bf19beu); f_11be4ab0();
  /* 11bf19be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf19c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf19c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf19c8 je 0x11bf1a6b */
  if (C.zf) goto L_11bf1a6b;
  /* 11bf19ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf19d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf19d4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf19db jmp 0x11bf19e6 */
  goto L_11bf19e6;
L_11bf19dd:;
  /* 11bf19dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf19e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf19e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bf19e6:;
  /* 11bf19e6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf19ea jae 0x11bf1a5c */
  if (!C.cf) goto L_11bf1a5c;
  /* 11bf19ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf19ef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11bf19f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf19f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf19f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf19fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf19fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1a01 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11bf1a05 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1a06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a09 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1a0a call 0x11be7a80 */
  push32(0x11bf1a0fu); f_11be7a80();
  /* 11bf1a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a12 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1a13 call 0x11be7900 */
  push32(0x11bf1a18u); f_11be7900();
  /* 11bf1a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf1a23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a26 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11bf1a29 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a2f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf1a32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1a35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1a38 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bf1a3c push eax */
  push32((uint32_t)(EAX));
  /* 11bf1a3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a40 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1a41 call 0x11be7a80 */
  push32(0x11bf1a46u); f_11be7a80();
  /* 11bf1a46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a49 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1a4a call 0x11be7900 */
  push32(0x11bf1a4fu); f_11be7900();
  /* 11bf1a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a55 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a57 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf1a5a jmp 0x11bf19dd */
  goto L_11bf19dd;
L_11bf1a5c:;
  /* 11bf1a5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a5f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11bf1a62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1a65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1a68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11bf1a6b:;
  /* 11bf1a6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf1a6e pop esi */
  ESI = (pop32());
  /* 11bf1a6f mov esp, ebp */
  ESP = (EBP);
  /* 11bf1a71 pop ebp */
  EBP = (pop32());
  /* 11bf1a72 ret  */
  ESPCHK(0x11bf1950u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x11bf1a80 (878 bytes, 273 insns) */
void f_11bf1a80(void) {
  FTRACE(0x11bf1a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1a81 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1a83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1a86 push esi */
  push32((uint32_t)(ESI));
  /* 11bf1a87 mov eax, dword ptr [0x11c0fc98] */
  EAX = (r32((uint32_t)(0x11c0fc98)));
  /* 11bf1a8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf1a8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bf1a96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf1a9d jmp 0x11bf1aa8 */
  goto L_11bf1aa8;
L_11bf1a9f:;
  /* 11bf1a9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1aa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1aa5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bf1aa8:;
  /* 11bf1aa8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1aac jae 0x11bf1ae1 */
  if (!C.cf) goto L_11bf1ae1;
  /* 11bf1aae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1ab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1ab4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11bf1ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1ab8 call 0x11be7900 */
  push32(0x11bf1abdu); f_11be7900();
  /* 11bf1abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1ac0 mov esi, eax */
  ESI = (EAX);
  /* 11bf1ac2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1ac5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1ac8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11bf1acc push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1acd call 0x11be7900 */
  push32(0x11bf1ad2u); f_11be7900();
  /* 11bf1ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1ad5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1ad8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bf1adc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf1adf jmp 0x11bf1a9f */
  goto L_11bf1a9f;
L_11bf1ae1:;
  /* 11bf1ae1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf1ae8 jmp 0x11bf1af3 */
  goto L_11bf1af3;
L_11bf1aea:;
  /* 11bf1aea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1aed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1af0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11bf1af3:;
  /* 11bf1af3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1af7 jae 0x11bf1b2d */
  if (!C.cf) goto L_11bf1b2d;
  /* 11bf1af9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1afc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1aff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11bf1b03 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1b04 call 0x11be7900 */
  push32(0x11bf1b09u); f_11be7900();
  /* 11bf1b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b0c mov esi, eax */
  ESI = (EAX);
  /* 11bf1b0e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1b11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1b14 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bf1b18 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1b19 call 0x11be7900 */
  push32(0x11bf1b1eu); f_11be7900();
  /* 11bf1b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b21 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b24 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bf1b28 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf1b2b jmp 0x11bf1aea */
  goto L_11bf1aea;
L_11bf1b2d:;
  /* 11bf1b2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1b30 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11bf1b36 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1b37 call 0x11be7900 */
  push32(0x11bf1b3cu); f_11be7900();
  /* 11bf1b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b3f mov esi, eax */
  ESI = (EAX);
  /* 11bf1b41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1b44 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11bf1b4a push edx */
  push32((uint32_t)(EDX));
  /* 11bf1b4b call 0x11be7900 */
  push32(0x11bf1b50u); f_11be7900();
  /* 11bf1b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b53 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b56 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11bf1b5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf1b5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1b60 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11bf1b66 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1b67 call 0x11be7900 */
  push32(0x11bf1b6cu); f_11be7900();
  /* 11bf1b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf1b72 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bf1b76 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf1b79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1b7c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11bf1b82 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1b83 call 0x11be7900 */
  push32(0x11bf1b88u); f_11be7900();
  /* 11bf1b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1b8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf1b8e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bf1b92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf1b95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1b98 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11bf1b9e push edx */
  push32((uint32_t)(EDX));
  /* 11bf1b9f call 0x11be7900 */
  push32(0x11bf1ba4u); f_11be7900();
  /* 11bf1ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1ba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf1baa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bf1bae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf1bb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf1bb4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1bb9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1bba call 0x11be4ab0 */
  push32(0x11bf1bbfu); f_11be4ab0();
  /* 11bf1bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1bc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf1bc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1bc9 je 0x11bf1de6 */
  if (C.zf) goto L_11bf1de6;
  /* 11bf1bcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf1bd2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11bf1bd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf1bd8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1bde mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf1be1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11bf1be6 mov eax, dword ptr [0x11c0fc98] */
  EAX = (r32((uint32_t)(0x11c0fc98)));
  /* 11bf1beb push eax */
  push32((uint32_t)(EAX));
  /* 11bf1bec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf1bef push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1bf0 call 0x11beb3b0 */
  push32(0x11bf1bf5u); f_11beb3b0();
  /* 11bf1bf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1bf8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf1bff jmp 0x11bf1c0a */
  goto L_11bf1c0a;
L_11bf1c01:;
  /* 11bf1c01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1c04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1c07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bf1c0a:;
  /* 11bf1c0a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1c0e jae 0x11bf1c7e */
  if (!C.cf) goto L_11bf1c7e;
  /* 11bf1c10 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1c13 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1c16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1c19 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11bf1c1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1c1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1c22 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bf1c25 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1c26 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1c29 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1c2a call 0x11be7a80 */
  push32(0x11bf1c2fu); f_11be7a80();
  /* 11bf1c2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1c32 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1c33 call 0x11be7900 */
  push32(0x11bf1c38u); f_11be7900();
  /* 11bf1c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1c3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1c3e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bf1c42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf1c45 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1c48 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1c4b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1c4e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11bf1c52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1c55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1c58 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11bf1c5c push edx */
  push32((uint32_t)(EDX));
  /* 11bf1c5d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1c60 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1c61 call 0x11be7a80 */
  push32(0x11bf1c66u); f_11be7a80();
  /* 11bf1c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1c69 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1c6a call 0x11be7900 */
  push32(0x11bf1c6fu); f_11be7900();
  /* 11bf1c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1c72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1c75 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bf1c79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf1c7c jmp 0x11bf1c01 */
  goto L_11bf1c01;
L_11bf1c7e:;
  /* 11bf1c7e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf1c85 jmp 0x11bf1c90 */
  goto L_11bf1c90;
L_11bf1c87:;
  /* 11bf1c87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1c8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1c8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11bf1c90:;
  /* 11bf1c90 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1c94 jae 0x11bf1d06 */
  if (!C.cf) goto L_11bf1d06;
  /* 11bf1c96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1c99 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1c9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1c9f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11bf1ca3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1ca6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1ca9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11bf1cad push eax */
  push32((uint32_t)(EAX));
  /* 11bf1cae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1cb2 call 0x11be7a80 */
  push32(0x11bf1cb7u); f_11be7a80();
  /* 11bf1cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1cba push eax */
  push32((uint32_t)(EAX));
  /* 11bf1cbb call 0x11be7900 */
  push32(0x11bf1cc0u); f_11be7900();
  /* 11bf1cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1cc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1cc6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bf1cca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf1ccd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1cd0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1cd3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1cd6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11bf1cda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1cdd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1ce0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bf1ce4 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1ce5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1ce9 call 0x11be7a80 */
  push32(0x11bf1ceeu); f_11be7a80();
  /* 11bf1cee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1cf1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1cf2 call 0x11be7900 */
  push32(0x11bf1cf7u); f_11be7900();
  /* 11bf1cf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1cfa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1cfd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bf1d01 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf1d04 jmp 0x11bf1c87 */
  goto L_11bf1c87;
L_11bf1d06:;
  /* 11bf1d06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1d09 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d0c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11bf1d12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1d15 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11bf1d1b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1d1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d1f push edx */
  push32((uint32_t)(EDX));
  /* 11bf1d20 call 0x11be7a80 */
  push32(0x11bf1d25u); f_11be7a80();
  /* 11bf1d25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1d28 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1d29 call 0x11be7900 */
  push32(0x11bf1d2eu); f_11be7900();
  /* 11bf1d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1d31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d34 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bf1d38 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf1d3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1d3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d41 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11bf1d47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1d4a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11bf1d50 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1d51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d54 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1d55 call 0x11be7a80 */
  push32(0x11bf1d5au); f_11be7a80();
  /* 11bf1d5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1d5d push eax */
  push32((uint32_t)(EAX));
  /* 11bf1d5e call 0x11be7900 */
  push32(0x11bf1d63u); f_11be7900();
  /* 11bf1d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1d66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d69 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bf1d6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf1d70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1d73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d76 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11bf1d7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1d7f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11bf1d85 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1d86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d89 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1d8a call 0x11be7a80 */
  push32(0x11bf1d8fu); f_11be7a80();
  /* 11bf1d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1d92 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1d93 call 0x11be7900 */
  push32(0x11bf1d98u); f_11be7900();
  /* 11bf1d98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1d9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1d9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11bf1da2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf1da5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1da8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1dab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11bf1db1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1db4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11bf1dba push eax */
  push32((uint32_t)(EAX));
  /* 11bf1dbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1dbe push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1dbf call 0x11be7a80 */
  push32(0x11bf1dc4u); f_11be7a80();
  /* 11bf1dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1dc7 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1dc8 call 0x11be7900 */
  push32(0x11bf1dcdu); f_11be7900();
  /* 11bf1dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1dd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1dd3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11bf1dd7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf1dda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf1ddd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf1de0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11bf1de6:;
  /* 11bf1de6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf1de9 pop esi */
  ESI = (pop32());
  /* 11bf1dea mov esp, ebp */
  ESP = (EBP);
  /* 11bf1dec pop ebp */
  EBP = (pop32());
  /* 11bf1ded ret  */
  ESPCHK(0x11bf1a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011df0 @ 0x11bf1df0 (31 bytes, 15 insns) */
void f_11bf1df0(void) {
  FTRACE(0x11bf1df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1df1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf1df5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf1df8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1df9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1dfc push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1dfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf1e00 push edx */
  push32((uint32_t)(EDX));
  /* 11bf1e01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1e04 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1e05 call 0x11bf1e10 */
  push32(0x11bf1e0au); f_11bf1e10();
  /* 11bf1e0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1e0d pop ebp */
  EBP = (pop32());
  /* 11bf1e0e ret  */
  ESPCHK(0x11bf1df0u, _esp0);
  ESP += 4; return;
}

