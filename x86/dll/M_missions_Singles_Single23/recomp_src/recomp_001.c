#include "recomp.h"

/* FUN_1000a820 @ 0x1130a820 (10 bytes, 5 insns) */
void f_1130a820(void) {
  FTRACE(0x1130a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a820 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a821 mov ebp, esp */
  EBP = (ESP);
  /* 1130a823 mov eax, dword ptr [0x11330c94] */
  EAX = (r32((uint32_t)(0x11330c94)));
  /* 1130a828 pop ebp */
  EBP = (pop32());
  /* 1130a829 ret  */
  ESPCHK(0x1130a820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a830 @ 0x1130a830 (31 bytes, 11 insns) */
void f_1130a830(void) {
  FTRACE(0x1130a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a830 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a831 mov ebp, esp */
  EBP = (ESP);
  /* 1130a833 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a83a jbe 0x1130a840 */
  if ((C.cf||C.zf)) goto L_1130a840;
  /* 1130a83c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a83e jmp 0x1130a84d */
  goto L_1130a84d;
L_1130a840:;
  /* 1130a840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a843 mov dword ptr [0x11330c94], eax */
  w32((uint32_t)(0x11330c94), (EAX));
  /* 1130a848 mov eax, 1 */
  EAX = (0x1u);
L_1130a84d:;
  /* 1130a84d pop ebp */
  EBP = (pop32());
  /* 1130a84e ret  */
  ESPCHK(0x1130a830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a850 @ 0x1130a850 (89 bytes, 20 insns) */
void f_1130a850(void) {
  FTRACE(0x1130a850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a850 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a851 mov ebp, esp */
  EBP = (ESP);
  /* 1130a853 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1130a858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130a85a mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 1130a85f push eax */
  push32((uint32_t)(EAX));
  /* 1130a860 call dword ptr [0x11335344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335344))), 0x1130a866u);
  /* 1130a866 mov dword ptr [0x11334128], eax */
  w32((uint32_t)(0x11334128), (EAX));
  /* 1130a86b cmp dword ptr [0x11334128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11334128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a872 jne 0x1130a878 */
  if (!C.zf) goto L_1130a878;
  /* 1130a874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130a876 jmp 0x1130a8a7 */
  goto L_1130a8a7;
L_1130a878:;
  /* 1130a878 mov ecx, dword ptr [0x11334128] */
  ECX = (r32((uint32_t)(0x11334128)));
  /* 1130a87e mov dword ptr [0x1133411c], ecx */
  w32((uint32_t)(0x1133411c), (ECX));
  /* 1130a884 mov dword ptr [0x11334120], 0 */
  w32((uint32_t)(0x11334120), (0x0u));
  /* 1130a88e mov dword ptr [0x11334124], 0 */
  w32((uint32_t)(0x11334124), (0x0u));
  /* 1130a898 mov dword ptr [0x11334108], 0x10 */
  w32((uint32_t)(0x11334108), (0x10u));
  /* 1130a8a2 mov eax, 1 */
  EAX = (0x1u);
L_1130a8a7:;
  /* 1130a8a7 pop ebp */
  EBP = (pop32());
  /* 1130a8a8 ret  */
  ESPCHK(0x1130a850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8b0 @ 0x1130a8b0 (85 bytes, 29 insns) */
void f_1130a8b0(void) {
  FTRACE(0x1130a8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1130a8b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a8b6 mov eax, dword ptr [0x11334124] */
  EAX = (r32((uint32_t)(0x11334124)));
  /* 1130a8bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130a8be mov ecx, dword ptr [0x11334128] */
  ECX = (r32((uint32_t)(0x11334128)));
  /* 1130a8c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a8c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1130a8c9 mov edx, dword ptr [0x11334128] */
  EDX = (r32((uint32_t)(0x11334128)));
  /* 1130a8cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1130a8d2:;
  /* 1130a8d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a8d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a8d8 jae 0x1130a8ff */
  if (!C.cf) goto L_1130a8ff;
  /* 1130a8da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a8dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a8e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a8e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130a8e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a8ed jae 0x1130a8f4 */
  if (!C.cf) goto L_1130a8f4;
  /* 1130a8ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a8f2 jmp 0x1130a901 */
  goto L_1130a901;
L_1130a8f4:;
  /* 1130a8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a8f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a8fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130a8fd jmp 0x1130a8d2 */
  goto L_1130a8d2;
L_1130a8ff:;
  /* 1130a8ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130a901:;
  /* 1130a901 mov esp, ebp */
  ESP = (EBP);
  /* 1130a903 pop ebp */
  EBP = (pop32());
  /* 1130a904 ret  */
  ESPCHK(0x1130a8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x1130a910 (95 bytes, 33 insns) */
void f_1130a910(void) {
  FTRACE(0x1130a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a910 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a911 mov ebp, esp */
  EBP = (ESP);
  /* 1130a913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a919 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a91c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a91f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130a922 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a925 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1130a928 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130a92b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130a930 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a933 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130a935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a938 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130a93b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130a93d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130a93f jne 0x1130a961 */
  if (!C.zf) goto L_1130a961;
  /* 1130a941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a944 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1130a947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130a949 jne 0x1130a961 */
  if (!C.zf) goto L_1130a961;
  /* 1130a94b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130a94e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130a954 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130a956 je 0x1130a961 */
  if (C.zf) goto L_1130a961;
  /* 1130a958 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1130a95f jmp 0x1130a968 */
  goto L_1130a968;
L_1130a961:;
  /* 1130a961 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1130a968:;
  /* 1130a968 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130a96b mov esp, ebp */
  ESP = (EBP);
  /* 1130a96d pop ebp */
  EBP = (pop32());
  /* 1130a96e ret  */
  ESPCHK(0x1130a910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a970 @ 0x1130a970 (1485 bytes, 453 insns) */
void f_1130a970(void) {
  FTRACE(0x1130a970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130a970 push ebp */
  push32((uint32_t)(EBP));
  /* 1130a971 mov ebp, esp */
  EBP = (ESP);
  /* 1130a973 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a979 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130a97c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1130a97f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130a982 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a985 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a988 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1130a98b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130a98e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1130a991 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130a994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130a997 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130a99d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130a9a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1130a9a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130a9aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130a9ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a9b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1130a9b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130a9b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130a9b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a9bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1130a9be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130a9c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130a9c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1130a9c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130a9ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130a9cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1130a9cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130a9d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1130a9d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1130a9d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130a9db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130a9de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130a9e0 jne 0x1130ab08 */
  if (!C.zf) goto L_1130ab08;
  /* 1130a9e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130a9e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1130a9ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130a9ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1130a9f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130a9f6 jbe 0x1130a9ff */
  if ((C.cf||C.zf)) goto L_1130a9ff;
  /* 1130a9f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1130a9ff:;
  /* 1130a9ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130aa02 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130aa05 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130aa08 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130aa0b jne 0x1130aae1 */
  if (!C.zf) goto L_1130aae1;
  /* 1130aa11 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130aa15 jae 0x1130aa76 */
  if (!C.cf) goto L_1130aa76;
  /* 1130aa17 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130aa1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130aa1f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130aa21 not eax */
  EAX = (~(EAX));
  /* 1130aa23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130aa26 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aa29 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1130aa2d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130aa2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130aa32 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aa35 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1130aa39 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aa3c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aa3f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1130aa42 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130aa45 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aa48 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aa4b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1130aa4e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aa51 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aa54 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130aa58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130aa5a jne 0x1130aa74 */
  if (!C.zf) goto L_1130aa74;
  /* 1130aa5c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130aa61 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130aa64 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130aa66 not eax */
  EAX = (~(EAX));
  /* 1130aa68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130aa6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130aa6d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130aa6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130aa72 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1130aa74:;
  /* 1130aa74 jmp 0x1130aae1 */
  goto L_1130aae1;
L_1130aa76:;
  /* 1130aa76 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130aa79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130aa7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130aa81 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130aa83 not edx */
  EDX = (~(EDX));
  /* 1130aa85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130aa88 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aa8b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1130aa92 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130aa94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130aa97 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aa9a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1130aaa1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aaa4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aaa7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130aaaa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130aaad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aab0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aab3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1130aab6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aab9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aabc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130aac0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130aac2 jne 0x1130aae1 */
  if (!C.zf) goto L_1130aae1;
  /* 1130aac4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130aac7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130aaca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130aacf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130aad1 not edx */
  EDX = (~(EDX));
  /* 1130aad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130aad6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130aad9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130aadb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130aade mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1130aae1:;
  /* 1130aae1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130aae4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130aae7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130aaea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130aaed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1130aaf0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130aaf3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130aaf6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130aaf9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130aafc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1130aaff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ab02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ab05 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1130ab08:;
  /* 1130ab08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ab0b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1130ab0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ab11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130ab14 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ab18 jbe 0x1130ab21 */
  if ((C.cf||C.zf)) goto L_1130ab21;
  /* 1130ab1a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1130ab21:;
  /* 1130ab21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130ab24 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130ab27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130ab29 jne 0x1130ac85 */
  if (!C.zf) goto L_1130ac85;
  /* 1130ab2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130ab32 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ab35 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1130ab38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130ab3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1130ab3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ab41 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1130ab44 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ab48 jbe 0x1130ab51 */
  if ((C.cf||C.zf)) goto L_1130ab51;
  /* 1130ab4a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1130ab51:;
  /* 1130ab51 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ab54 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ab57 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1130ab5a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ab5d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1130ab60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ab63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1130ab66 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ab6a jbe 0x1130ab73 */
  if ((C.cf||C.zf)) goto L_1130ab73;
  /* 1130ab6c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1130ab73:;
  /* 1130ab73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ab76 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ab79 je 0x1130ac7f */
  if (C.zf) goto L_1130ac7f;
  /* 1130ab7f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ab82 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ab85 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130ab88 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ab8b jne 0x1130ac61 */
  if (!C.zf) goto L_1130ac61;
  /* 1130ab91 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ab95 jae 0x1130abf6 */
  if (!C.cf) goto L_1130abf6;
  /* 1130ab97 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130ab9c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ab9f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130aba1 not edx */
  EDX = (~(EDX));
  /* 1130aba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130aba6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130aba9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1130abad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130abaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130abb2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130abb5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1130abb9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130abbc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130abbf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130abc2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130abc5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130abc8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130abcb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1130abce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130abd1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130abd4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130abd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130abda jne 0x1130abf4 */
  if (!C.zf) goto L_1130abf4;
  /* 1130abdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130abe1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130abe4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130abe6 not edx */
  EDX = (~(EDX));
  /* 1130abe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130abeb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130abed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130abef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130abf2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1130abf4:;
  /* 1130abf4 jmp 0x1130ac61 */
  goto L_1130ac61;
L_1130abf6:;
  /* 1130abf6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130abf9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130abfc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130ac01 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130ac03 not eax */
  EAX = (~(EAX));
  /* 1130ac05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ac08 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ac0b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1130ac12 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ac14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ac17 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ac1a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1130ac21 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ac24 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ac27 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1130ac2a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130ac2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ac30 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ac33 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1130ac36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ac39 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ac3c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130ac40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ac42 jne 0x1130ac61 */
  if (!C.zf) goto L_1130ac61;
  /* 1130ac44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ac47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ac4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130ac4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130ac51 not eax */
  EAX = (~(EAX));
  /* 1130ac53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ac56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130ac59 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130ac5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ac5e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1130ac61:;
  /* 1130ac61 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ac64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130ac67 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ac6a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130ac6d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1130ac70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ac73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130ac76 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ac79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130ac7c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1130ac7f:;
  /* 1130ac7f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ac82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1130ac85:;
  /* 1130ac85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130ac88 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130ac8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130ac8d jne 0x1130ac9b */
  if (!C.zf) goto L_1130ac9b;
  /* 1130ac8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ac92 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ac95 je 0x1130adab */
  if (C.zf) goto L_1130adab;
L_1130ac9b:;
  /* 1130ac9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130ac9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130aca1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1130aca4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1130aca7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130acaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130acad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130acb0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1130acb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130acb6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130acb9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1130acbc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130acbf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130acc2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1130acc5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130acc8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130accb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130acce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1130acd1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130acd4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130acd7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130acda cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130acdd jne 0x1130adab */
  if (!C.zf) goto L_1130adab;
  /* 1130ace3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ace7 jae 0x1130ad44 */
  if (!C.cf) goto L_1130ad44;
  /* 1130ace9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130acec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130acef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130acf3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130acf6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130acf9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130acfc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130acff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ad02 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ad05 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1130ad08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ad0a jne 0x1130ad22 */
  if (!C.zf) goto L_1130ad22;
  /* 1130ad0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130ad11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130ad14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130ad16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ad19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130ad1b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ad1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ad20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1130ad22:;
  /* 1130ad22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130ad27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130ad2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130ad2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ad2f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ad32 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1130ad36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ad38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ad3b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ad3e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1130ad42 jmp 0x1130adab */
  goto L_1130adab;
L_1130ad44:;
  /* 1130ad44 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ad47 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ad4a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130ad4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ad51 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ad54 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130ad57 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130ad5a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ad5d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ad60 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1130ad63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ad65 jne 0x1130ad82 */
  if (!C.zf) goto L_1130ad82;
  /* 1130ad67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130ad6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ad6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130ad72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130ad74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ad77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130ad7a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ad7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ad7f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1130ad82:;
  /* 1130ad82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130ad85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ad88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130ad8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130ad8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ad92 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ad95 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1130ad9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ad9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ada1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1130ada4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1130adab:;
  /* 1130adab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130adae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130adb1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1130adb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130adb6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130adb9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130adbc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1130adbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130adc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130adc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130adc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130adca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1130adcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130adcf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130add2 jne 0x1130af39 */
  if (!C.zf) goto L_1130af39;
  /* 1130add8 cmp dword ptr [0x11334120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11334120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130addf je 0x1130af28 */
  if (C.zf) goto L_1130af28;
  /* 1130ade5 mov eax, dword ptr [0x11334118] */
  EAX = (r32((uint32_t)(0x11334118)));
  /* 1130adea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1130aded mov ecx, dword ptr [0x11334120] */
  ECX = (r32((uint32_t)(0x11334120)));
  /* 1130adf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130adf6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130adf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1130adfb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1130ae00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1130ae05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130ae08 push eax */
  push32((uint32_t)(EAX));
  /* 1130ae09 call dword ptr [0x11335360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335360))), 0x1130ae0fu);
  /* 1130ae0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130ae14 mov ecx, dword ptr [0x11334118] */
  ECX = (r32((uint32_t)(0x11334118)));
  /* 1130ae1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130ae1c mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130ae21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130ae24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ae26 mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130ae2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1130ae2f mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130ae34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130ae37 mov edx, dword ptr [0x11334118] */
  EDX = (r32((uint32_t)(0x11334118)));
  /* 1130ae3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1130ae48 mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130ae4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130ae50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1130ae53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130ae56 mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130ae5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130ae5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1130ae61 mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130ae67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130ae6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1130ae6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130ae70 jne 0x1130ae86 */
  if (!C.zf) goto L_1130ae86;
  /* 1130ae72 mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130ae78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130ae7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1130ae7d mov ecx, dword ptr [0x11334120] */
  ECX = (r32((uint32_t)(0x11334120)));
  /* 1130ae83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1130ae86:;
  /* 1130ae86 mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130ae8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ae90 jne 0x1130af28 */
  if (!C.zf) goto L_1130af28;
  /* 1130ae96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1130ae9b push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ae9d mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130aea2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130aea5 push ecx */
  push32((uint32_t)(ECX));
  /* 1130aea6 call dword ptr [0x11335360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335360))), 0x1130aeacu);
  /* 1130aeac mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130aeb2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130aeb5 push eax */
  push32((uint32_t)(EAX));
  /* 1130aeb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130aeb8 mov ecx, dword ptr [0x1133412c] */
  ECX = (r32((uint32_t)(0x1133412c)));
  /* 1130aebe push ecx */
  push32((uint32_t)(ECX));
  /* 1130aebf call dword ptr [0x11335370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335370))), 0x1130aec5u);
  /* 1130aec5 mov edx, dword ptr [0x11334124] */
  EDX = (r32((uint32_t)(0x11334124)));
  /* 1130aecb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130aece mov eax, dword ptr [0x11334128] */
  EAX = (r32((uint32_t)(0x11334128)));
  /* 1130aed3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aed5 mov ecx, dword ptr [0x11334120] */
  ECX = (r32((uint32_t)(0x11334120)));
  /* 1130aedb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aede sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130aee0 push eax */
  push32((uint32_t)(EAX));
  /* 1130aee1 mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130aee7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aeea push edx */
  push32((uint32_t)(EDX));
  /* 1130aeeb mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130aef0 push eax */
  push32((uint32_t)(EAX));
  /* 1130aef1 call 0x1130e4a0 */
  push32(0x1130aef6u); f_1130e4a0();
  /* 1130aef6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130aef9 mov ecx, dword ptr [0x11334124] */
  ECX = (r32((uint32_t)(0x11334124)));
  /* 1130aeff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130af02 mov dword ptr [0x11334124], ecx */
  w32((uint32_t)(0x11334124), (ECX));
  /* 1130af08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130af0b cmp edx, dword ptr [0x11334120] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11334120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130af11 jbe 0x1130af1c */
  if ((C.cf||C.zf)) goto L_1130af1c;
  /* 1130af13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130af16 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130af19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1130af1c:;
  /* 1130af1c mov ecx, dword ptr [0x11334128] */
  ECX = (r32((uint32_t)(0x11334128)));
  /* 1130af22 mov dword ptr [0x1133411c], ecx */
  w32((uint32_t)(0x1133411c), (ECX));
L_1130af28:;
  /* 1130af28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130af2b mov dword ptr [0x11334120], edx */
  w32((uint32_t)(0x11334120), (EDX));
  /* 1130af31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130af34 mov dword ptr [0x11334118], eax */
  w32((uint32_t)(0x11334118), (EAX));
L_1130af39:;
  /* 1130af39 mov esp, ebp */
  ESP = (EBP);
  /* 1130af3b pop ebp */
  EBP = (pop32());
  /* 1130af3c ret  */
  ESPCHK(0x1130a970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x1130af40 (1334 bytes, 427 insns) */
void f_1130af40(void) {
  FTRACE(0x1130af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1130af41 mov ebp, esp */
  EBP = (ESP);
  /* 1130af43 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130af46 push esi */
  push32((uint32_t)(ESI));
  /* 1130af47 mov eax, dword ptr [0x11334124] */
  EAX = (r32((uint32_t)(0x11334124)));
  /* 1130af4c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130af4f mov ecx, dword ptr [0x11334128] */
  ECX = (r32((uint32_t)(0x11334128)));
  /* 1130af55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130af57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1130af5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130af5d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130af60 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1130af63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1130af66 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130af69 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1130af6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130af6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130af72 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130af76 jge 0x1130af8c */
  if ((C.sf==C.of)) goto L_1130af8c;
  /* 1130af78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1130af7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130af7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130af80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1130af83 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1130af8a jmp 0x1130afa1 */
  goto L_1130afa1;
L_1130af8c:;
  /* 1130af8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1130af93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130af96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130af99 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130af9c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130af9e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1130afa1:;
  /* 1130afa1 mov ecx, dword ptr [0x1133411c] */
  ECX = (r32((uint32_t)(0x1133411c)));
  /* 1130afa7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1130afaa:;
  /* 1130afaa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130afad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130afb0 jae 0x1130afd6 */
  if (!C.cf) goto L_1130afd6;
  /* 1130afb2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130afb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130afb8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1130afba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130afbd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130afc0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1130afc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130afc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130afc7 je 0x1130afcb */
  if (C.zf) goto L_1130afcb;
  /* 1130afc9 jmp 0x1130afd6 */
  goto L_1130afd6;
L_1130afcb:;
  /* 1130afcb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130afce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130afd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1130afd4 jmp 0x1130afaa */
  goto L_1130afaa;
L_1130afd6:;
  /* 1130afd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130afd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130afdc jne 0x1130b0bd */
  if (!C.zf) goto L_1130b0bd;
  /* 1130afe2 mov eax, dword ptr [0x11334128] */
  EAX = (r32((uint32_t)(0x11334128)));
  /* 1130afe7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1130afea:;
  /* 1130afea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130afed cmp ecx, dword ptr [0x1133411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1133411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130aff3 jae 0x1130b019 */
  if (!C.cf) goto L_1130b019;
  /* 1130aff5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130aff8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130affb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1130affd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b000 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130b003 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1130b006 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130b00a je 0x1130b00e */
  if (C.zf) goto L_1130b00e;
  /* 1130b00c jmp 0x1130b019 */
  goto L_1130b019;
L_1130b00e:;
  /* 1130b00e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b011 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b014 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130b017 jmp 0x1130afea */
  goto L_1130afea;
L_1130b019:;
  /* 1130b019 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b01c cmp ecx, dword ptr [0x1133411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1133411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b022 jne 0x1130b0bd */
  if (!C.zf) goto L_1130b0bd;
L_1130b028:;
  /* 1130b028 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b02b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b02e jae 0x1130b046 */
  if (!C.cf) goto L_1130b046;
  /* 1130b030 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b033 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b037 je 0x1130b03b */
  if (C.zf) goto L_1130b03b;
  /* 1130b039 jmp 0x1130b046 */
  goto L_1130b046;
L_1130b03b:;
  /* 1130b03b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b03e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b041 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1130b044 jmp 0x1130b028 */
  goto L_1130b028;
L_1130b046:;
  /* 1130b046 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b049 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b04c jne 0x1130b097 */
  if (!C.zf) goto L_1130b097;
  /* 1130b04e mov eax, dword ptr [0x11334128] */
  EAX = (r32((uint32_t)(0x11334128)));
  /* 1130b053 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1130b056:;
  /* 1130b056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b059 cmp ecx, dword ptr [0x1133411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1133411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b05f jae 0x1130b077 */
  if (!C.cf) goto L_1130b077;
  /* 1130b061 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b064 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b068 je 0x1130b06c */
  if (C.zf) goto L_1130b06c;
  /* 1130b06a jmp 0x1130b077 */
  goto L_1130b077;
L_1130b06c:;
  /* 1130b06c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b06f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b072 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130b075 jmp 0x1130b056 */
  goto L_1130b056;
L_1130b077:;
  /* 1130b077 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b07a cmp ecx, dword ptr [0x1133411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1133411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b080 jne 0x1130b097 */
  if (!C.zf) goto L_1130b097;
  /* 1130b082 call 0x1130b480 */
  push32(0x1130b087u); f_1130b480();
  /* 1130b087 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130b08a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b08e jne 0x1130b097 */
  if (!C.zf) goto L_1130b097;
  /* 1130b090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b092 jmp 0x1130b471 */
  goto L_1130b471;
L_1130b097:;
  /* 1130b097 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b09a push edx */
  push32((uint32_t)(EDX));
  /* 1130b09b call 0x1130b590 */
  push32(0x1130b0a0u); f_1130b590();
  /* 1130b0a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b0a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b0a6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1130b0a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1130b0ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b0ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130b0b1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b0b4 jne 0x1130b0bd */
  if (!C.zf) goto L_1130b0bd;
  /* 1130b0b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b0b8 jmp 0x1130b471 */
  goto L_1130b471;
L_1130b0bd:;
  /* 1130b0bd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b0c0 mov dword ptr [0x1133411c], edx */
  w32((uint32_t)(0x1133411c), (EDX));
  /* 1130b0c6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b0c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130b0cc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1130b0cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b0d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130b0d4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1130b0d7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b0db je 0x1130b100 */
  if (C.zf) goto L_1130b100;
  /* 1130b0dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b0e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b0e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130b0e6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1130b0ea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b0ed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b0f0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1130b0f3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1130b0fa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1130b0fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130b0fe jne 0x1130b135 */
  if (!C.zf) goto L_1130b135;
L_1130b100:;
  /* 1130b100 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1130b107:;
  /* 1130b107 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b10a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b10d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130b110 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1130b114 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b117 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b11a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1130b11d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1130b124 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1130b126 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130b128 jne 0x1130b135 */
  if (!C.zf) goto L_1130b135;
  /* 1130b12a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b12d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b130 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1130b133 jmp 0x1130b107 */
  goto L_1130b107;
L_1130b135:;
  /* 1130b135 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b138 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130b13e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b141 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1130b148 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130b14b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1130b152 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b155 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b158 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130b15b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1130b15f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1130b162 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b166 jne 0x1130b182 */
  if (!C.zf) goto L_1130b182;
  /* 1130b168 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1130b16f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b172 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b175 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130b178 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1130b17f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1130b182:;
  /* 1130b182 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b186 jl 0x1130b19b */
  if ((C.sf!=C.of)) goto L_1130b19b;
  /* 1130b188 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130b18b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1130b18d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1130b190 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b193 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b196 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1130b199 jmp 0x1130b182 */
  goto L_1130b182;
L_1130b19b:;
  /* 1130b19b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b19e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b1a1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1130b1a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1130b1a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b1ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130b1ad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b1b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130b1b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130b1b6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1130b1b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b1bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1130b1bf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b1c3 jle 0x1130b1cc */
  if ((C.zf||C.sf!=C.of)) goto L_1130b1cc;
  /* 1130b1c5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1130b1cc:;
  /* 1130b1cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b1cf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b1d2 je 0x1130b3f0 */
  if (C.zf) goto L_1130b3f0;
  /* 1130b1d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b1db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b1de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130b1e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b1e4 jne 0x1130b2ba */
  if (!C.zf) goto L_1130b2ba;
  /* 1130b1ea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b1ee jge 0x1130b24f */
  if ((C.sf==C.of)) goto L_1130b24f;
  /* 1130b1f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130b1f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b1f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130b1fa not eax */
  EAX = (~(EAX));
  /* 1130b1fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b1ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b202 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1130b206 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130b208 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b20b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b20e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1130b212 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b215 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b218 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1130b21b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130b21e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b221 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b224 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1130b227 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b22a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b22d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130b231 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130b233 jne 0x1130b24d */
  if (!C.zf) goto L_1130b24d;
  /* 1130b235 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130b23a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b23d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130b23f not eax */
  EAX = (~(EAX));
  /* 1130b241 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b244 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130b246 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130b248 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b24b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1130b24d:;
  /* 1130b24d jmp 0x1130b2ba */
  goto L_1130b2ba;
L_1130b24f:;
  /* 1130b24f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b252 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b255 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b25a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b25c not edx */
  EDX = (~(EDX));
  /* 1130b25e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b261 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b264 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1130b26b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b26d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b270 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b273 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1130b27a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b27d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b280 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130b283 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130b286 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b289 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b28c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1130b28f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b292 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b295 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130b299 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130b29b jne 0x1130b2ba */
  if (!C.zf) goto L_1130b2ba;
  /* 1130b29d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b2a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b2a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b2a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b2aa not edx */
  EDX = (~(EDX));
  /* 1130b2ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b2af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130b2b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130b2b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b2b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1130b2ba:;
  /* 1130b2ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b2bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130b2c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b2c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130b2c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1130b2c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b2cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b2cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b2d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130b2d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1130b2d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b2dc je 0x1130b3f0 */
  if (C.zf) goto L_1130b3f0;
  /* 1130b2e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b2e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b2e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1130b2eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1130b2ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b2f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130b2f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130b2f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1130b2fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b2fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130b300 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1130b303 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130b306 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b309 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1130b30c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b30f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130b312 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b315 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1130b318 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b31b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b31e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130b321 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b324 jne 0x1130b3f0 */
  if (!C.zf) goto L_1130b3f0;
  /* 1130b32a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b32e jge 0x1130b38a */
  if ((C.sf==C.of)) goto L_1130b38a;
  /* 1130b330 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b333 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b336 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130b33a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b33d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b340 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1130b343 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130b345 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b348 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b34b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1130b34e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130b350 jne 0x1130b368 */
  if (!C.zf) goto L_1130b368;
  /* 1130b352 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130b357 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b35a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130b35c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b35f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130b361 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130b363 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b366 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1130b368:;
  /* 1130b368 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b36d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b370 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b372 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b375 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b378 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1130b37c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b37e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b381 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b384 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1130b388 jmp 0x1130b3f0 */
  goto L_1130b3f0;
L_1130b38a:;
  /* 1130b38a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b38d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b390 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130b394 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b397 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b39a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1130b39d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130b39f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b3a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b3a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1130b3a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130b3aa jne 0x1130b3c7 */
  if (!C.zf) goto L_1130b3c7;
  /* 1130b3ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b3af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b3b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130b3b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130b3b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b3bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b3bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130b3c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b3c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1130b3c7:;
  /* 1130b3c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b3ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b3cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b3d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b3d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b3d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b3da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1130b3e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b3e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b3e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b3e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1130b3f0:;
  /* 1130b3f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b3f4 je 0x1130b40a */
  if (C.zf) goto L_1130b40a;
  /* 1130b3f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b3f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130b3fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1130b3fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b401 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b404 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130b407 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1130b40a:;
  /* 1130b40a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b40d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b410 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1130b413 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b416 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b419 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b41c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1130b41e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b421 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b424 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b427 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b42a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1130b42d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b430 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130b432 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b435 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130b437 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b43a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b43d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1130b43f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130b441 jne 0x1130b463 */
  if (!C.zf) goto L_1130b463;
  /* 1130b443 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b446 cmp eax, dword ptr [0x11334120] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11334120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b44c jne 0x1130b463 */
  if (!C.zf) goto L_1130b463;
  /* 1130b44e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b451 cmp ecx, dword ptr [0x11334118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11334118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b457 jne 0x1130b463 */
  if (!C.zf) goto L_1130b463;
  /* 1130b459 mov dword ptr [0x11334120], 0 */
  w32((uint32_t)(0x11334120), (0x0u));
L_1130b463:;
  /* 1130b463 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1130b466 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b469 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1130b46b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b46e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1130b471:;
  /* 1130b471 pop esi */
  ESI = (pop32());
  /* 1130b472 mov esp, ebp */
  ESP = (EBP);
  /* 1130b474 pop ebp */
  EBP = (pop32());
  /* 1130b475 ret  */
  ESPCHK(0x1130af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x1130b480 (271 bytes, 78 insns) */
void f_1130b480(void) {
  FTRACE(0x1130b480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130b480 push ebp */
  push32((uint32_t)(EBP));
  /* 1130b481 mov ebp, esp */
  EBP = (ESP);
  /* 1130b483 push ecx */
  push32((uint32_t)(ECX));
  /* 1130b484 mov eax, dword ptr [0x11334124] */
  EAX = (r32((uint32_t)(0x11334124)));
  /* 1130b489 cmp eax, dword ptr [0x11334108] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11334108))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b48f jne 0x1130b4db */
  if (!C.zf) goto L_1130b4db;
  /* 1130b491 mov ecx, dword ptr [0x11334108] */
  ECX = (r32((uint32_t)(0x11334108)));
  /* 1130b497 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b49a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130b49d push ecx */
  push32((uint32_t)(ECX));
  /* 1130b49e mov edx, dword ptr [0x11334128] */
  EDX = (r32((uint32_t)(0x11334128)));
  /* 1130b4a4 push edx */
  push32((uint32_t)(EDX));
  /* 1130b4a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130b4a7 mov eax, dword ptr [0x1133412c] */
  EAX = (r32((uint32_t)(0x1133412c)));
  /* 1130b4ac push eax */
  push32((uint32_t)(EAX));
  /* 1130b4ad call dword ptr [0x1133534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133534c))), 0x1130b4b3u);
  /* 1130b4b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130b4b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b4ba jne 0x1130b4c3 */
  if (!C.zf) goto L_1130b4c3;
  /* 1130b4bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b4be jmp 0x1130b58b */
  goto L_1130b58b;
L_1130b4c3:;
  /* 1130b4c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b4c6 mov dword ptr [0x11334128], ecx */
  w32((uint32_t)(0x11334128), (ECX));
  /* 1130b4cc mov edx, dword ptr [0x11334108] */
  EDX = (r32((uint32_t)(0x11334108)));
  /* 1130b4d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b4d5 mov dword ptr [0x11334108], edx */
  w32((uint32_t)(0x11334108), (EDX));
L_1130b4db:;
  /* 1130b4db mov eax, dword ptr [0x11334124] */
  EAX = (r32((uint32_t)(0x11334124)));
  /* 1130b4e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130b4e3 mov ecx, dword ptr [0x11334128] */
  ECX = (r32((uint32_t)(0x11334128)));
  /* 1130b4e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b4eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130b4ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1130b4f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1130b4f5 mov edx, dword ptr [0x1133412c] */
  EDX = (r32((uint32_t)(0x1133412c)));
  /* 1130b4fb push edx */
  push32((uint32_t)(EDX));
  /* 1130b4fc call dword ptr [0x11335344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335344))), 0x1130b502u);
  /* 1130b502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b505 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1130b508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b50b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b50f jne 0x1130b515 */
  if (!C.zf) goto L_1130b515;
  /* 1130b511 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b513 jmp 0x1130b58b */
  goto L_1130b58b;
L_1130b515:;
  /* 1130b515 push 4 */
  push32((uint32_t)(0x4u));
  /* 1130b517 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1130b51c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1130b521 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130b523 call dword ptr [0x1133533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133533c))), 0x1130b529u);
  /* 1130b529 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b52c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1130b52f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b532 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b536 jne 0x1130b552 */
  if (!C.zf) goto L_1130b552;
  /* 1130b538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b53b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130b53e push ecx */
  push32((uint32_t)(ECX));
  /* 1130b53f push 0 */
  push32((uint32_t)(0x0u));
  /* 1130b541 mov edx, dword ptr [0x1133412c] */
  EDX = (r32((uint32_t)(0x1133412c)));
  /* 1130b547 push edx */
  push32((uint32_t)(EDX));
  /* 1130b548 call dword ptr [0x11335370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335370))), 0x1130b54eu);
  /* 1130b54e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b550 jmp 0x1130b58b */
  goto L_1130b58b;
L_1130b552:;
  /* 1130b552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b555 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130b55b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b55e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1130b565 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b568 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1130b56f mov eax, dword ptr [0x11334124] */
  EAX = (r32((uint32_t)(0x11334124)));
  /* 1130b574 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b577 mov dword ptr [0x11334124], eax */
  w32((uint32_t)(0x11334124), (EAX));
  /* 1130b57c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b57f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1130b582 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1130b588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130b58b:;
  /* 1130b58b mov esp, ebp */
  ESP = (EBP);
  /* 1130b58d pop ebp */
  EBP = (pop32());
  /* 1130b58e ret  */
  ESPCHK(0x1130b480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b590 @ 0x1130b590 (494 bytes, 149 insns) */
void f_1130b590(void) {
  FTRACE(0x1130b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130b590 push ebp */
  push32((uint32_t)(EBP));
  /* 1130b591 mov ebp, esp */
  EBP = (ESP);
  /* 1130b593 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b599 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130b59c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1130b59f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b5a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130b5a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130b5a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1130b5af:;
  /* 1130b5af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b5b3 jl 0x1130b5c8 */
  if ((C.sf!=C.of)) goto L_1130b5c8;
  /* 1130b5b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130b5b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1130b5ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130b5bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b5c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b5c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1130b5c6 jmp 0x1130b5af */
  goto L_1130b5af;
L_1130b5c8:;
  /* 1130b5c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b5cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130b5d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b5d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1130b5db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1130b5de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1130b5e5 jmp 0x1130b5f0 */
  goto L_1130b5f0;
L_1130b5e7:;
  /* 1130b5e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b5ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b5ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1130b5f0:;
  /* 1130b5f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b5f4 jge 0x1130b616 */
  if ((C.sf==C.of)) goto L_1130b616;
  /* 1130b5f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b5f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130b5fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1130b5ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130b602 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b605 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b608 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1130b60b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b60e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b611 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1130b614 jmp 0x1130b5e7 */
  goto L_1130b5e7;
L_1130b616:;
  /* 1130b616 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b619 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1130b61c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b61f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130b622 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b624 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1130b627 push 4 */
  push32((uint32_t)(0x4u));
  /* 1130b629 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1130b62e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1130b633 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b636 push edx */
  push32((uint32_t)(EDX));
  /* 1130b637 call dword ptr [0x1133533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133533c))), 0x1130b63du);
  /* 1130b63d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130b63f jne 0x1130b649 */
  if (!C.zf) goto L_1130b649;
  /* 1130b641 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130b644 jmp 0x1130b77a */
  goto L_1130b77a;
L_1130b649:;
  /* 1130b649 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b64c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b651 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1130b654 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b657 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130b65a jmp 0x1130b668 */
  goto L_1130b668;
L_1130b65c:;
  /* 1130b65c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b65f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b665 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130b668:;
  /* 1130b668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b66b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b66e ja 0x1130b6cd */
  if ((!C.cf&&!C.zf)) goto L_1130b6cd;
  /* 1130b670 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b673 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1130b67a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b67d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1130b687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b68a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b68d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130b690 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b693 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1130b699 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b69c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b6a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b6a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1130b6a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b6ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b6b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b6b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1130b6b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b6ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b6bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1130b6c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130b6c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1130b6cb jmp 0x1130b65c */
  goto L_1130b65c;
L_1130b6cd:;
  /* 1130b6cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130b6d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b6d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1130b6d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b6dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b6df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b6e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1130b6e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b6e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130b6eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130b6ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b6f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b6f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1130b6f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130b6fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b6fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b700 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1130b703 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b706 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130b709 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130b70c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b70f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b712 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1130b715 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b718 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b71b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1130b723 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b726 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b729 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1130b734 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b737 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1130b73b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b73e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1130b741 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130b744 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b747 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1130b74a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130b74c jne 0x1130b75d */
  if (!C.zf) goto L_1130b75d;
  /* 1130b74e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b751 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b754 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130b757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b75a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1130b75d:;
  /* 1130b75d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b762 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b765 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b767 not edx */
  EDX = (~(EDX));
  /* 1130b769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b76c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130b76f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130b771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b774 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1130b777 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1130b77a:;
  /* 1130b77a mov esp, ebp */
  ESP = (EBP);
  /* 1130b77c pop ebp */
  EBP = (pop32());
  /* 1130b77d ret  */
  ESPCHK(0x1130b590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b780 @ 0x1130b780 (1515 bytes, 489 insns) */
void f_1130b780(void) {
  FTRACE(0x1130b780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130b780 push ebp */
  push32((uint32_t)(EBP));
  /* 1130b781 mov ebp, esp */
  EBP = (ESP);
  /* 1130b783 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b786 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130b789 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b78c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1130b78e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1130b791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b794 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1130b797 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1130b79a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b79d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130b7a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b7a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1130b7a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130b7a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1130b7ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130b7af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b7b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130b7b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b7bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1130b7c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1130b7c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130b7c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b7cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1130b7ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b7d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130b7d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b7d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1130b7d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b7dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1130b7e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b7e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130b7e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1130b7ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130b7ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b7f0 jle 0x1130baa6 */
  if ((C.zf||C.sf!=C.of)) goto L_1130baa6;
  /* 1130b7f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b7f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130b7fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130b7fe jne 0x1130b80b */
  if (!C.zf) goto L_1130b80b;
  /* 1130b800 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b803 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b806 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b809 jle 0x1130b812 */
  if ((C.zf||C.sf!=C.of)) goto L_1130b812;
L_1130b80b:;
  /* 1130b80b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b80d jmp 0x1130bd67 */
  goto L_1130bd67;
L_1130b812:;
  /* 1130b812 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b815 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1130b818 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b81b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130b81e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b822 jbe 0x1130b82b */
  if ((C.cf||C.zf)) goto L_1130b82b;
  /* 1130b824 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1130b82b:;
  /* 1130b82b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b82e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b831 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b834 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b837 jne 0x1130b90d */
  if (!C.zf) goto L_1130b90d;
  /* 1130b83d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b841 jae 0x1130b8a2 */
  if (!C.cf) goto L_1130b8a2;
  /* 1130b843 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b848 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b84b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b84d not edx */
  EDX = (~(EDX));
  /* 1130b84f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b852 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b855 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1130b859 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130b85b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b85e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b861 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1130b865 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b868 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b86b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130b86e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130b871 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b874 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b877 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1130b87a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b87d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b880 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130b884 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130b886 jne 0x1130b8a0 */
  if (!C.zf) goto L_1130b8a0;
  /* 1130b888 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b88d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b890 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b892 not edx */
  EDX = (~(EDX));
  /* 1130b894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b897 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130b899 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130b89b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b89e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1130b8a0:;
  /* 1130b8a0 jmp 0x1130b90d */
  goto L_1130b90d;
L_1130b8a2:;
  /* 1130b8a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b8a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b8a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130b8ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130b8af not eax */
  EAX = (~(EAX));
  /* 1130b8b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b8b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b8b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1130b8be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130b8c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b8c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b8c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1130b8cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b8d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b8d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1130b8d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130b8d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b8dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b8df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1130b8e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b8e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b8e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130b8ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130b8ee jne 0x1130b90d */
  if (!C.zf) goto L_1130b90d;
  /* 1130b8f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b8f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b8f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130b8fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130b8fd not eax */
  EAX = (~(EAX));
  /* 1130b8ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b902 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b905 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130b907 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b90a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1130b90d:;
  /* 1130b90d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b910 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130b913 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b916 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130b919 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1130b91c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b91f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130b922 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b925 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130b928 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1130b92b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130b92e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b931 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b934 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1130b937 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b93b jle 0x1130ba87 */
  if ((C.zf||C.sf!=C.of)) goto L_1130ba87;
  /* 1130b941 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130b944 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b947 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1130b94a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130b94d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1130b950 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130b953 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1130b956 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b95a jbe 0x1130b963 */
  if ((C.cf||C.zf)) goto L_1130b963;
  /* 1130b95c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1130b963:;
  /* 1130b963 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b966 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130b969 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1130b96c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1130b96f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b972 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b975 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b978 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1130b97b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b97e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b981 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1130b984 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130b987 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b98a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1130b98d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b990 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b993 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b996 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1130b999 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b99c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130b99f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130b9a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b9a5 jne 0x1130ba73 */
  if (!C.zf) goto L_1130ba73;
  /* 1130b9ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130b9af jae 0x1130ba0c */
  if (!C.cf) goto L_1130ba0c;
  /* 1130b9b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b9b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b9b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130b9bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b9be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b9c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130b9c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130b9c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b9ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130b9cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1130b9d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130b9d2 jne 0x1130b9ea */
  if (!C.zf) goto L_1130b9ea;
  /* 1130b9d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130b9d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b9dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130b9de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b9e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130b9e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130b9e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130b9e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1130b9ea:;
  /* 1130b9ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130b9ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130b9f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130b9f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130b9f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130b9fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1130b9fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ba00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ba03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ba06 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1130ba0a jmp 0x1130ba73 */
  goto L_1130ba73;
L_1130ba0c:;
  /* 1130ba0c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ba0f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ba12 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130ba16 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ba19 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ba1c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130ba1f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130ba22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ba25 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ba28 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1130ba2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ba2d jne 0x1130ba4a */
  if (!C.zf) goto L_1130ba4a;
  /* 1130ba2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130ba32 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ba35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130ba3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130ba3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ba3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130ba42 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ba44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ba47 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1130ba4a:;
  /* 1130ba4a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130ba4d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ba50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130ba55 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130ba57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ba5a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ba5d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1130ba64 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ba66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ba69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130ba6c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1130ba73:;
  /* 1130ba73 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ba76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130ba79 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1130ba7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ba7e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ba81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130ba84 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1130ba87:;
  /* 1130ba87 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130ba8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ba8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130ba90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1130ba92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130ba95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ba98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130ba9b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ba9e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1130baa1 jmp 0x1130bd62 */
  goto L_1130bd62;
L_1130baa6:;
  /* 1130baa6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130baa9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130baac jge 0x1130bd62 */
  if ((C.sf==C.of)) goto L_1130bd62;
  /* 1130bab2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130bab5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bab8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130babb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1130babd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130bac0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bac3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bac6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bac9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1130bacc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bacf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bad2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1130bad5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130bad8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130badb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130bade mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130bae1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1130bae4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bae7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1130baea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130baee jbe 0x1130baf7 */
  if ((C.cf||C.zf)) goto L_1130baf7;
  /* 1130baf0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1130baf7:;
  /* 1130baf7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130bafa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130bafd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130baff jne 0x1130bc40 */
  if (!C.zf) goto L_1130bc40;
  /* 1130bb05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130bb08 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1130bb0b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bb0e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130bb11 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bb15 jbe 0x1130bb1e */
  if ((C.cf||C.zf)) goto L_1130bb1e;
  /* 1130bb17 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1130bb1e:;
  /* 1130bb1e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130bb21 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130bb24 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130bb27 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bb2a jne 0x1130bc00 */
  if (!C.zf) goto L_1130bc00;
  /* 1130bb30 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bb34 jae 0x1130bb95 */
  if (!C.cf) goto L_1130bb95;
  /* 1130bb36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130bb3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130bb3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130bb40 not edx */
  EDX = (~(EDX));
  /* 1130bb42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bb45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bb48 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1130bb4c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130bb4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bb51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bb54 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1130bb58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bb5b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bb5e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1130bb61 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130bb64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bb67 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bb6a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1130bb6d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bb70 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bb73 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130bb77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130bb79 jne 0x1130bb93 */
  if (!C.zf) goto L_1130bb93;
  /* 1130bb7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130bb80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130bb83 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130bb85 not edx */
  EDX = (~(EDX));
  /* 1130bb87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bb8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130bb8c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130bb8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bb91 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1130bb93:;
  /* 1130bb93 jmp 0x1130bc00 */
  goto L_1130bc00;
L_1130bb95:;
  /* 1130bb95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130bb98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bb9b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130bba0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130bba2 not eax */
  EAX = (~(EAX));
  /* 1130bba4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bba7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bbaa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1130bbb1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1130bbb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bbb6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bbb9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1130bbc0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bbc3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bbc6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1130bbc9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130bbcc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bbcf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bbd2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1130bbd5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bbd8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bbdb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130bbdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130bbe1 jne 0x1130bc00 */
  if (!C.zf) goto L_1130bc00;
  /* 1130bbe3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130bbe6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bbe9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130bbee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130bbf0 not eax */
  EAX = (~(EAX));
  /* 1130bbf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bbf5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130bbf8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130bbfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bbfd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1130bc00:;
  /* 1130bc00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130bc03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130bc06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130bc09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130bc0c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1130bc0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130bc12 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130bc15 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130bc18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130bc1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1130bc1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130bc21 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bc24 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130bc27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130bc2a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1130bc2d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bc30 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1130bc33 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bc37 jbe 0x1130bc40 */
  if ((C.cf||C.zf)) goto L_1130bc40;
  /* 1130bc39 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1130bc40:;
  /* 1130bc40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130bc43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130bc46 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1130bc49 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1130bc4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bc4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130bc52 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130bc55 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1130bc58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bc5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130bc5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1130bc61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130bc64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bc67 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1130bc6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bc6d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130bc70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bc73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1130bc76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bc79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bc7c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130bc7f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bc82 jne 0x1130bd4e */
  if (!C.zf) goto L_1130bd4e;
  /* 1130bc88 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bc8c jae 0x1130bce8 */
  if (!C.cf) goto L_1130bce8;
  /* 1130bc8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bc91 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bc94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130bc98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bc9b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bc9e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1130bca1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130bca3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bca6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bca9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1130bcac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130bcae jne 0x1130bcc6 */
  if (!C.zf) goto L_1130bcc6;
  /* 1130bcb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130bcb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130bcb8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130bcba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bcbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130bcbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130bcc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bcc4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1130bcc6:;
  /* 1130bcc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130bccb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130bcce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130bcd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bcd3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bcd6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1130bcda or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130bcdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bcdf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bce2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1130bce6 jmp 0x1130bd4e */
  goto L_1130bd4e;
L_1130bce8:;
  /* 1130bce8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bceb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bcee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1130bcf2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bcf5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bcf8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1130bcfb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130bcfd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bd00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bd03 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1130bd06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130bd08 jne 0x1130bd25 */
  if (!C.zf) goto L_1130bd25;
  /* 1130bd0a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130bd0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bd10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1130bd15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1130bd17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bd1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130bd1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1130bd1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130bd22 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1130bd25:;
  /* 1130bd25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130bd28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bd2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130bd30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130bd32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bd35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bd38 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1130bd3f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130bd41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bd44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130bd47 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1130bd4e:;
  /* 1130bd4e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bd51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130bd54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1130bd56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130bd59 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bd5c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130bd5f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1130bd62:;
  /* 1130bd62 mov eax, 1 */
  EAX = (0x1u);
L_1130bd67:;
  /* 1130bd67 mov esp, ebp */
  ESP = (EBP);
  /* 1130bd69 pop ebp */
  EBP = (pop32());
  /* 1130bd6a ret  */
  ESPCHK(0x1130b780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd70 @ 0x1130bd70 (304 bytes, 79 insns) */
void f_1130bd70(void) {
  FTRACE(0x1130bd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130bd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1130bd71 mov ebp, esp */
  EBP = (ESP);
  /* 1130bd73 push ecx */
  push32((uint32_t)(ECX));
  /* 1130bd74 cmp dword ptr [0x11334120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11334120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bd7b je 0x1130be9c */
  if (C.zf) goto L_1130be9c;
  /* 1130bd81 mov eax, dword ptr [0x11334118] */
  EAX = (r32((uint32_t)(0x11334118)));
  /* 1130bd86 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1130bd89 mov ecx, dword ptr [0x11334120] */
  ECX = (r32((uint32_t)(0x11334120)));
  /* 1130bd8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130bd92 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bd94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130bd97 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1130bd9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1130bda1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130bda4 push eax */
  push32((uint32_t)(EAX));
  /* 1130bda5 call dword ptr [0x11335360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335360))), 0x1130bdabu);
  /* 1130bdab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130bdb0 mov ecx, dword ptr [0x11334118] */
  ECX = (r32((uint32_t)(0x11334118)));
  /* 1130bdb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130bdb8 mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130bdbd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130bdc0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1130bdc2 mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130bdc8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1130bdcb mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130bdd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130bdd3 mov edx, dword ptr [0x11334118] */
  EDX = (r32((uint32_t)(0x11334118)));
  /* 1130bdd9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1130bde4 mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130bde9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130bdec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1130bdef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130bdf2 mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130bdf7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130bdfa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1130bdfd mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130be03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130be06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1130be0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130be0c jne 0x1130be22 */
  if (!C.zf) goto L_1130be22;
  /* 1130be0e mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130be14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130be17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1130be19 mov ecx, dword ptr [0x11334120] */
  ECX = (r32((uint32_t)(0x11334120)));
  /* 1130be1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1130be22:;
  /* 1130be22 mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130be28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130be2c jne 0x1130be92 */
  if (!C.zf) goto L_1130be92;
  /* 1130be2e cmp dword ptr [0x11334124], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11334124))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130be35 jle 0x1130be92 */
  if ((C.zf||C.sf!=C.of)) goto L_1130be92;
  /* 1130be37 mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130be3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130be3f push ecx */
  push32((uint32_t)(ECX));
  /* 1130be40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130be42 mov edx, dword ptr [0x1133412c] */
  EDX = (r32((uint32_t)(0x1133412c)));
  /* 1130be48 push edx */
  push32((uint32_t)(EDX));
  /* 1130be49 call dword ptr [0x11335370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335370))), 0x1130be4fu);
  /* 1130be4f mov eax, dword ptr [0x11334124] */
  EAX = (r32((uint32_t)(0x11334124)));
  /* 1130be54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130be57 mov ecx, dword ptr [0x11334128] */
  ECX = (r32((uint32_t)(0x11334128)));
  /* 1130be5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130be5f mov edx, dword ptr [0x11334120] */
  EDX = (r32((uint32_t)(0x11334120)));
  /* 1130be65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130be68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130be6a push ecx */
  push32((uint32_t)(ECX));
  /* 1130be6b mov eax, dword ptr [0x11334120] */
  EAX = (r32((uint32_t)(0x11334120)));
  /* 1130be70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130be73 push eax */
  push32((uint32_t)(EAX));
  /* 1130be74 mov ecx, dword ptr [0x11334120] */
  ECX = (r32((uint32_t)(0x11334120)));
  /* 1130be7a push ecx */
  push32((uint32_t)(ECX));
  /* 1130be7b call 0x1130e4a0 */
  push32(0x1130be80u); f_1130e4a0();
  /* 1130be80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130be83 mov edx, dword ptr [0x11334124] */
  EDX = (r32((uint32_t)(0x11334124)));
  /* 1130be89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130be8c mov dword ptr [0x11334124], edx */
  w32((uint32_t)(0x11334124), (EDX));
L_1130be92:;
  /* 1130be92 mov dword ptr [0x11334120], 0 */
  w32((uint32_t)(0x11334120), (0x0u));
L_1130be9c:;
  /* 1130be9c mov esp, ebp */
  ESP = (EBP);
  /* 1130be9e pop ebp */
  EBP = (pop32());
  /* 1130be9f ret  */
  ESPCHK(0x1130bd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bea0 @ 0x1130bea0 (1565 bytes, 343 insns) */
void f_1130bea0(void) {
  FTRACE(0x1130bea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130bea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130bea1 mov ebp, esp */
  EBP = (ESP);
  /* 1130bea3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130bea9 mov eax, dword ptr [0x11334124] */
  EAX = (r32((uint32_t)(0x11334124)));
  /* 1130beae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130beb1 push eax */
  push32((uint32_t)(EAX));
  /* 1130beb2 mov ecx, dword ptr [0x11334128] */
  ECX = (r32((uint32_t)(0x11334128)));
  /* 1130beb8 push ecx */
  push32((uint32_t)(ECX));
  /* 1130beb9 call dword ptr [0x1133538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133538c))), 0x1130bebfu);
  /* 1130bebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130bec1 je 0x1130becb */
  if (C.zf) goto L_1130becb;
  /* 1130bec3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130bec6 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130becb:;
  /* 1130becb mov edx, dword ptr [0x11334128] */
  EDX = (r32((uint32_t)(0x11334128)));
  /* 1130bed1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1130bed7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1130bee1 jmp 0x1130bef2 */
  goto L_1130bef2;
L_1130bee3:;
  /* 1130bee3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1130bee9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130beec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1130bef2:;
  /* 1130bef2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1130bef8 cmp ecx, dword ptr [0x11334124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11334124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130befe jge 0x1130c4b7 */
  if ((C.sf==C.of)) goto L_1130c4b7;
  /* 1130bf04 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1130bf0a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130bf0d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1130bf13 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1130bf18 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1130bf1e push ecx */
  push32((uint32_t)(ECX));
  /* 1130bf1f call dword ptr [0x1133538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133538c))), 0x1130bf25u);
  /* 1130bf25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130bf27 je 0x1130bf33 */
  if (C.zf) goto L_1130bf33;
  /* 1130bf29 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1130bf2e jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130bf33:;
  /* 1130bf33 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1130bf39 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1130bf3c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1130bf42 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1130bf48 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bf4e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1130bf51 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1130bf57 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130bf5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130bf5d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1130bf67 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1130bf71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130bf78 jmp 0x1130bf83 */
  goto L_1130bf83;
L_1130bf7a:;
  /* 1130bf7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130bf7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bf80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1130bf83:;
  /* 1130bf83 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bf87 jge 0x1130c47b */
  if ((C.sf==C.of)) goto L_1130c47b;
  /* 1130bf8d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1130bf97 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1130bfa1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1130bfab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1130bfb5 jmp 0x1130bfc6 */
  goto L_1130bfc6;
L_1130bfb7:;
  /* 1130bfb7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1130bfbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130bfc0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1130bfc6:;
  /* 1130bfc6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bfcd jge 0x1130bfe2 */
  if ((C.sf==C.of)) goto L_1130bfe2;
  /* 1130bfcf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1130bfd5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1130bfe0 jmp 0x1130bfb7 */
  goto L_1130bfb7;
L_1130bfe2:;
  /* 1130bfe2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130bfe6 jl 0x1130c41d */
  if ((C.sf!=C.of)) goto L_1130c41d;
  /* 1130bfec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1130bff1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1130bff7 push ecx */
  push32((uint32_t)(ECX));
  /* 1130bff8 call dword ptr [0x1133538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133538c))), 0x1130bffeu);
  /* 1130bffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130c000 je 0x1130c00c */
  if (C.zf) goto L_1130c00c;
  /* 1130c002 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1130c007 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c00c:;
  /* 1130c00c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1130c012 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1130c015 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1130c01f jmp 0x1130c030 */
  goto L_1130c030;
L_1130c021:;
  /* 1130c021 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1130c027 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c02a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1130c030:;
  /* 1130c030 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c037 jge 0x1130c1b4 */
  if ((C.sf==C.of)) goto L_1130c1b4;
  /* 1130c03d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c040 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c043 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1130c049 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c04f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c055 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1130c05b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c061 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c065 jne 0x1130c072 */
  if (!C.zf) goto L_1130c072;
  /* 1130c067 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1130c06d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c070 je 0x1130c07c */
  if (C.zf) goto L_1130c07c;
L_1130c072:;
  /* 1130c072 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1130c077 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c07c:;
  /* 1130c07c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c082 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130c084 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1130c08a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1130c090 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1130c096 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1130c09c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130c09f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130c0a1 je 0x1130c0d9 */
  if (C.zf) goto L_1130c0d9;
  /* 1130c0a3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1130c0a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c0ac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1130c0b2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c0bc jle 0x1130c0c8 */
  if ((C.zf||C.sf!=C.of)) goto L_1130c0c8;
  /* 1130c0be mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1130c0c3 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c0c8:;
  /* 1130c0c8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1130c0ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c0d1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1130c0d7 jmp 0x1130c11b */
  goto L_1130c11b;
L_1130c0d9:;
  /* 1130c0d9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1130c0df sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1130c0e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c0e5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1130c0eb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c0f2 jle 0x1130c0fe */
  if ((C.zf||C.sf!=C.of)) goto L_1130c0fe;
  /* 1130c0f4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1130c0fe:;
  /* 1130c0fe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1130c104 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1130c10b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c10e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1130c114 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1130c11b:;
  /* 1130c11b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c122 jl 0x1130c13d */
  if ((C.sf!=C.of)) goto L_1130c13d;
  /* 1130c124 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1130c12a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1130c12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130c12f jne 0x1130c13d */
  if (!C.zf) goto L_1130c13d;
  /* 1130c131 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c13b jle 0x1130c147 */
  if ((C.zf||C.sf!=C.of)) goto L_1130c147;
L_1130c13d:;
  /* 1130c13d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1130c142 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c147:;
  /* 1130c147 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c14d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c153 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1130c156 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c15c je 0x1130c168 */
  if (C.zf) goto L_1130c168;
  /* 1130c15e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1130c163 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c168:;
  /* 1130c168 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c16e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c174 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1130c17a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c180 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c186 jb 0x1130c07c */
  if (C.cf) goto L_1130c07c;
  /* 1130c18c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c192 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c198 je 0x1130c1a4 */
  if (C.zf) goto L_1130c1a4;
  /* 1130c19a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1130c19f jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c1a4:;
  /* 1130c1a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c1a7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c1ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130c1af jmp 0x1130c021 */
  goto L_1130c021;
L_1130c1b4:;
  /* 1130c1b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130c1b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130c1b9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c1bf je 0x1130c1cb */
  if (C.zf) goto L_1130c1cb;
  /* 1130c1c1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1130c1c6 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c1cb:;
  /* 1130c1cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130c1ce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1130c1d4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1130c1db jmp 0x1130c1e6 */
  goto L_1130c1e6;
L_1130c1dd:;
  /* 1130c1dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130c1e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c1e3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1130c1e6:;
  /* 1130c1e6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c1ea jge 0x1130c41d */
  if ((C.sf==C.of)) goto L_1130c41d;
  /* 1130c1f0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1130c1fa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1130c200 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1130c206:;
  /* 1130c206 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c20c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130c20f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1130c215 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1130c21b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c221 je 0x1130c34a */
  if (C.zf) goto L_1130c34a;
  /* 1130c227 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130c22a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1130c230 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c237 je 0x1130c34a */
  if (C.zf) goto L_1130c34a;
  /* 1130c23d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1130c243 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c249 jb 0x1130c25e */
  if (C.cf) goto L_1130c25e;
  /* 1130c24b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1130c251 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c256 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c25c jb 0x1130c268 */
  if (C.cf) goto L_1130c268;
L_1130c25e:;
  /* 1130c25e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1130c263 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c268:;
  /* 1130c268 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1130c26e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1130c274 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1130c27a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1130c280 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c283 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1130c286 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130c289 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c28e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1130c294:;
  /* 1130c294 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130c297 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c29d je 0x1130c2be */
  if (C.zf) goto L_1130c2be;
  /* 1130c29f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130c2a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c2a8 jne 0x1130c2ac */
  if (!C.zf) goto L_1130c2ac;
  /* 1130c2aa jmp 0x1130c2be */
  goto L_1130c2be;
L_1130c2ac:;
  /* 1130c2ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130c2af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130c2b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1130c2b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130c2b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c2b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1130c2bc jmp 0x1130c294 */
  goto L_1130c294;
L_1130c2be:;
  /* 1130c2be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130c2c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c2c7 jne 0x1130c2d3 */
  if (!C.zf) goto L_1130c2d3;
  /* 1130c2c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1130c2ce jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c2d3:;
  /* 1130c2d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1130c2d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130c2db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1130c2de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c2e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1130c2e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c2ee jle 0x1130c2fa */
  if ((C.zf||C.sf!=C.of)) goto L_1130c2fa;
  /* 1130c2f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1130c2fa:;
  /* 1130c2fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1130c300 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c303 je 0x1130c30f */
  if (C.zf) goto L_1130c30f;
  /* 1130c305 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1130c30a jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c30f:;
  /* 1130c30f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1130c315 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130c318 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c31e je 0x1130c32a */
  if (C.zf) goto L_1130c32a;
  /* 1130c320 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1130c325 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c32a:;
  /* 1130c32a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1130c330 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1130c336 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1130c33c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c33f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1130c345 jmp 0x1130c206 */
  goto L_1130c206;
L_1130c34a:;
  /* 1130c34a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c351 je 0x1130c3c1 */
  if (C.zf) goto L_1130c3c1;
  /* 1130c353 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c357 jge 0x1130c38b */
  if ((C.sf==C.of)) goto L_1130c38b;
  /* 1130c359 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130c35e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130c361 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130c363 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1130c369 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c36b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1130c371 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130c376 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130c379 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130c37b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1130c381 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c383 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1130c389 jmp 0x1130c3c1 */
  goto L_1130c3c1;
L_1130c38b:;
  /* 1130c38b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130c38e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c391 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130c396 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130c398 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1130c39e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c3a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1130c3a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130c3a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c3ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1130c3b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1130c3b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1130c3b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c3bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1130c3c1:;
  /* 1130c3c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1130c3c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130c3ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c3d0 jne 0x1130c3e4 */
  if (!C.zf) goto L_1130c3e4;
  /* 1130c3d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130c3d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1130c3db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c3e2 je 0x1130c3ee */
  if (C.zf) goto L_1130c3ee;
L_1130c3e4:;
  /* 1130c3e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1130c3e9 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c3ee:;
  /* 1130c3ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1130c3f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130c3f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c3fd je 0x1130c409 */
  if (C.zf) goto L_1130c409;
  /* 1130c3ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1130c404 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c409:;
  /* 1130c409 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1130c40f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c412 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1130c418 jmp 0x1130c1dd */
  goto L_1130c1dd;
L_1130c41d:;
  /* 1130c41d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c420 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1130c426 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1130c42c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c430 jne 0x1130c44a */
  if (!C.zf) goto L_1130c44a;
  /* 1130c432 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c435 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1130c43b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1130c441 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c448 je 0x1130c451 */
  if (C.zf) goto L_1130c451;
L_1130c44a:;
  /* 1130c44a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1130c44f jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c451:;
  /* 1130c451 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1130c457 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c45d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1130c463 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130c466 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c46b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1130c46e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130c471 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1130c473 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130c476 jmp 0x1130bf7a */
  goto L_1130bf7a;
L_1130c47b:;
  /* 1130c47b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1130c481 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1130c487 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c489 jne 0x1130c49c */
  if (!C.zf) goto L_1130c49c;
  /* 1130c48b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1130c491 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1130c497 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c49a je 0x1130c4a3 */
  if (C.zf) goto L_1130c4a3;
L_1130c49c:;
  /* 1130c49c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1130c4a1 jmp 0x1130c4b9 */
  goto L_1130c4b9;
L_1130c4a3:;
  /* 1130c4a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1130c4a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c4ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1130c4b2 jmp 0x1130bee3 */
  goto L_1130bee3;
L_1130c4b7:;
  /* 1130c4b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130c4b9:;
  /* 1130c4b9 mov esp, ebp */
  ESP = (EBP);
  /* 1130c4bb pop ebp */
  EBP = (pop32());
  /* 1130c4bc ret  */
  ESPCHK(0x1130bea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c0 @ 0x1130c4c0 (250 bytes, 92 insns) */
void f_1130c4c0(void) {
  FTRACE(0x1130c4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130c4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130c4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1130c4c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c4c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1130c4c7 push esi */
  push32((uint32_t)(ESI));
  /* 1130c4c8 push edi */
  push32((uint32_t)(EDI));
  /* 1130c4c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1130c4cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1130c4cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1130c4d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1130c4d5:;
  /* 1130c4d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c4d9 jne 0x1130c4f9 */
  if (!C.zf) goto L_1130c4f9;
  /* 1130c4db push 0x1132e280 */
  push32((uint32_t)(0x1132e280u));
  /* 1130c4e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130c4e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1130c4e4 push 0x1132e274 */
  push32((uint32_t)(0x1132e274u));
  /* 1130c4e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130c4eb call 0x11305670 */
  push32(0x1130c4f0u); f_11305670();
  /* 1130c4f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c4f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c4f6 jne 0x1130c4f9 */
  if (!C.zf) goto L_1130c4f9;
  /* 1130c4f8 int3  */
  x86_unimpl("int3 @ 0x1130c4f8");
L_1130c4f9:;
  /* 1130c4f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130c4fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130c4fd jne 0x1130c4d5 */
  if (!C.zf) goto L_1130c4d5;
L_1130c4ff:;
  /* 1130c4ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c503 jne 0x1130c523 */
  if (!C.zf) goto L_1130c523;
  /* 1130c505 push 0x1132e264 */
  push32((uint32_t)(0x1132e264u));
  /* 1130c50a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130c50c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1130c50e push 0x1132e274 */
  push32((uint32_t)(0x1132e274u));
  /* 1130c513 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130c515 call 0x11305670 */
  push32(0x1130c51au); f_11305670();
  /* 1130c51a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c51d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c520 jne 0x1130c523 */
  if (!C.zf) goto L_1130c523;
  /* 1130c522 int3  */
  x86_unimpl("int3 @ 0x1130c522");
L_1130c523:;
  /* 1130c523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130c527 jne 0x1130c4ff */
  if (!C.zf) goto L_1130c4ff;
  /* 1130c529 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c52c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1130c533 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c539 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1130c53c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c53f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c542 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1130c544 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c547 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1130c54e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130c551 push ecx */
  push32((uint32_t)(ECX));
  /* 1130c552 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130c555 push edx */
  push32((uint32_t)(EDX));
  /* 1130c556 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c559 push eax */
  push32((uint32_t)(EAX));
  /* 1130c55a call 0x1130d540 */
  push32(0x1130c55fu); f_1130d540();
  /* 1130c55f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c562 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130c565 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c568 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130c56b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c56e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c571 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1130c574 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c577 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c57b jl 0x1130c59f */
  if ((C.sf!=C.of)) goto L_1130c59f;
  /* 1130c57d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c580 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130c582 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1130c585 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130c587 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130c58d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1130c590 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c593 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130c595 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c598 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c59b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1130c59d jmp 0x1130c5b0 */
  goto L_1130c5b0;
L_1130c59f:;
  /* 1130c59f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c5a2 push edx */
  push32((uint32_t)(EDX));
  /* 1130c5a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130c5a5 call 0x1130d2c0 */
  push32(0x1130c5aau); f_1130d2c0();
  /* 1130c5aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c5ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1130c5b0:;
  /* 1130c5b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130c5b3 pop edi */
  EDI = (pop32());
  /* 1130c5b4 pop esi */
  ESI = (pop32());
  /* 1130c5b5 pop ebx */
  EBX = (pop32());
  /* 1130c5b6 mov esp, ebp */
  ESP = (EBP);
  /* 1130c5b8 pop ebp */
  EBP = (pop32());
  /* 1130c5b9 ret  */
  ESPCHK(0x1130c4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5c0 @ 0x1130c5c0 (183 bytes, 58 insns) */
void f_1130c5c0(void) {
  FTRACE(0x1130c5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130c5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130c5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1130c5c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c5c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c5cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c5d1 ja 0x1130c5ea */
  if ((!C.cf&&!C.zf)) goto L_1130c5ea;
  /* 1130c5d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c5d6 mov edx, dword ptr [0x11330c98] */
  EDX = (r32((uint32_t)(0x11330c98)));
  /* 1130c5dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c5de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1130c5e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1130c5e5 jmp 0x1130c673 */
  goto L_1130c673;
L_1130c5ea:;
  /* 1130c5ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c5ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1130c5f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130c5f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130c5fc mov edx, dword ptr [0x11330c98] */
  EDX = (r32((uint32_t)(0x11330c98)));
  /* 1130c602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c604 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1130c608 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1130c60d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130c60f je 0x1130c633 */
  if (C.zf) goto L_1130c633;
  /* 1130c611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c614 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1130c617 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130c61d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1130c620 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1130c623 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1130c626 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1130c62a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1130c631 jmp 0x1130c644 */
  goto L_1130c644;
L_1130c633:;
  /* 1130c633 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1130c636 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1130c639 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1130c63d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1130c644:;
  /* 1130c644 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130c646 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130c648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130c64a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1130c64d push ecx */
  push32((uint32_t)(ECX));
  /* 1130c64e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c651 push edx */
  push32((uint32_t)(EDX));
  /* 1130c652 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1130c655 push eax */
  push32((uint32_t)(EAX));
  /* 1130c656 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130c658 call 0x1130e7e0 */
  push32(0x1130c65du); f_1130e7e0();
  /* 1130c65d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c660 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130c662 jne 0x1130c668 */
  if (!C.zf) goto L_1130c668;
  /* 1130c664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c666 jmp 0x1130c673 */
  goto L_1130c673;
L_1130c668:;
  /* 1130c668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130c66b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130c670 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1130c673:;
  /* 1130c673 mov esp, ebp */
  ESP = (EBP);
  /* 1130c675 pop ebp */
  EBP = (pop32());
  /* 1130c676 ret  */
  ESPCHK(0x1130c5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c680 @ 0x1130c680 (836 bytes, 238 insns) */
void f_1130c680(void) {
  FTRACE(0x1130c680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130c680 push ebp */
  push32((uint32_t)(EBP));
  /* 1130c681 mov ebp, esp */
  EBP = (ESP);
  /* 1130c683 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130c686 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1130c688 call 0x11309fb0 */
  push32(0x1130c68du); f_11309fb0();
  /* 1130c68d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c693 push eax */
  push32((uint32_t)(EAX));
  /* 1130c694 call 0x1130c9d0 */
  push32(0x1130c699u); f_1130c9d0();
  /* 1130c699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c69c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1130c69f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c6a2 cmp ecx, dword ptr [0x11333e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11333e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c6a8 jne 0x1130c6bb */
  if (!C.zf) goto L_1130c6bb;
  /* 1130c6aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1130c6ac call 0x1130a050 */
  push32(0x1130c6b1u); f_1130a050();
  /* 1130c6b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c6b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c6b6 jmp 0x1130c9c0 */
  goto L_1130c9c0;
L_1130c6bb:;
  /* 1130c6bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c6bf jne 0x1130c6dc */
  if (!C.zf) goto L_1130c6dc;
  /* 1130c6c1 call 0x1130cab0 */
  push32(0x1130c6c6u); f_1130cab0();
  /* 1130c6c6 call 0x1130cb30 */
  push32(0x1130c6cbu); f_1130cb30();
  /* 1130c6cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1130c6cd call 0x1130a050 */
  push32(0x1130c6d2u); f_1130a050();
  /* 1130c6d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c6d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c6d7 jmp 0x1130c9c0 */
  goto L_1130c9c0;
L_1130c6dc:;
  /* 1130c6dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130c6e3 jmp 0x1130c6ee */
  goto L_1130c6ee;
L_1130c6e5:;
  /* 1130c6e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130c6e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c6eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130c6ee:;
  /* 1130c6ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c6f2 jae 0x1130c83f */
  if (!C.cf) goto L_1130c83f;
  /* 1130c6f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130c6fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130c6fe mov ecx, dword ptr [eax + 0x11330eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11330eb8)));
  /* 1130c704 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c707 jne 0x1130c83a */
  if (!C.zf) goto L_1130c83a;
  /* 1130c70d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1130c714 jmp 0x1130c71f */
  goto L_1130c71f;
L_1130c716:;
  /* 1130c716 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c719 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c71c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1130c71f:;
  /* 1130c71f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c726 jae 0x1130c734 */
  if (!C.cf) goto L_1130c734;
  /* 1130c728 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c72b mov byte ptr [eax + 0x11334000], 0 */
  w8((uint32_t)(EAX + 0x11334000), (0x0u));
  /* 1130c732 jmp 0x1130c716 */
  goto L_1130c716;
L_1130c734:;
  /* 1130c734 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130c73b jmp 0x1130c746 */
  goto L_1130c746;
L_1130c73d:;
  /* 1130c73d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c740 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c743 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1130c746:;
  /* 1130c746 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c74a jae 0x1130c7c7 */
  if (!C.cf) goto L_1130c7c7;
  /* 1130c74c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130c74f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130c752 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c755 lea ecx, [edx + eax*8 + 0x11330ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11330ec8));
  /* 1130c75c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130c75f jmp 0x1130c76a */
  goto L_1130c76a;
L_1130c761:;
  /* 1130c761 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c764 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c767 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1130c76a:;
  /* 1130c76a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c76d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130c76f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1130c771 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130c773 je 0x1130c7c2 */
  if (C.zf) goto L_1130c7c2;
  /* 1130c775 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c77a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1130c77d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130c77f je 0x1130c7c2 */
  if (C.zf) goto L_1130c7c2;
  /* 1130c781 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130c786 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1130c788 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1130c78b jmp 0x1130c796 */
  goto L_1130c796;
L_1130c78d:;
  /* 1130c78d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c793 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1130c796:;
  /* 1130c796 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130c799 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130c79b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1130c79e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c7a1 ja 0x1130c7c0 */
  if ((!C.cf&&!C.zf)) goto L_1130c7c0;
  /* 1130c7a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c7a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c7a9 mov dl, byte ptr [eax + 0x11334001] */
  DL = (r8((uint32_t)(EAX + 0x11334001)));
  /* 1130c7af or dl, byte ptr [ecx + 0x11330eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11330eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1130c7b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c7b8 mov byte ptr [eax + 0x11334001], dl */
  w8((uint32_t)(EAX + 0x11334001), (DL));
  /* 1130c7be jmp 0x1130c78d */
  goto L_1130c78d;
L_1130c7c0:;
  /* 1130c7c0 jmp 0x1130c761 */
  goto L_1130c761;
L_1130c7c2:;
  /* 1130c7c2 jmp 0x1130c73d */
  goto L_1130c73d;
L_1130c7c7:;
  /* 1130c7c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c7ca mov dword ptr [0x11333e64], ecx */
  w32((uint32_t)(0x11333e64), (ECX));
  /* 1130c7d0 mov dword ptr [0x11333eec], 1 */
  w32((uint32_t)(0x11333eec), (0x1u));
  /* 1130c7da mov edx, dword ptr [0x11333e64] */
  EDX = (r32((uint32_t)(0x11333e64)));
  /* 1130c7e0 push edx */
  push32((uint32_t)(EDX));
  /* 1130c7e1 call 0x1130ca30 */
  push32(0x1130c7e6u); f_1130ca30();
  /* 1130c7e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c7e9 mov dword ptr [0x11334104], eax */
  w32((uint32_t)(0x11334104), (EAX));
  /* 1130c7ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130c7f5 jmp 0x1130c800 */
  goto L_1130c800;
L_1130c7f7:;
  /* 1130c7f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c7fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c7fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1130c800:;
  /* 1130c800 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c804 jae 0x1130c824 */
  if (!C.cf) goto L_1130c824;
  /* 1130c806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130c809 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130c80c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c80f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c812 mov cx, word ptr [ecx + eax*2 + 0x11330ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11330ebc)));
  /* 1130c81a mov word ptr [edx*2 + 0x11333ee0], cx */
  w16((uint32_t)(EDX*2 + 0x11333ee0), (CX));
  /* 1130c822 jmp 0x1130c7f7 */
  goto L_1130c7f7;
L_1130c824:;
  /* 1130c824 call 0x1130cb30 */
  push32(0x1130c829u); f_1130cb30();
  /* 1130c829 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1130c82b call 0x1130a050 */
  push32(0x1130c830u); f_1130a050();
  /* 1130c830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c835 jmp 0x1130c9c0 */
  goto L_1130c9c0;
L_1130c83a:;
  /* 1130c83a jmp 0x1130c6e5 */
  goto L_1130c6e5;
L_1130c83f:;
  /* 1130c83f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1130c842 push edx */
  push32((uint32_t)(EDX));
  /* 1130c843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c846 push eax */
  push32((uint32_t)(EAX));
  /* 1130c847 call dword ptr [0x11335338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335338))), 0x1130c84du);
  /* 1130c84d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c850 jne 0x1130c992 */
  if (!C.zf) goto L_1130c992;
  /* 1130c856 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1130c85d jmp 0x1130c868 */
  goto L_1130c868;
L_1130c85f:;
  /* 1130c85f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c862 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c865 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1130c868:;
  /* 1130c868 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c86f jae 0x1130c87d */
  if (!C.cf) goto L_1130c87d;
  /* 1130c871 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c874 mov byte ptr [edx + 0x11334000], 0 */
  w8((uint32_t)(EDX + 0x11334000), (0x0u));
  /* 1130c87b jmp 0x1130c85f */
  goto L_1130c85f;
L_1130c87d:;
  /* 1130c87d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130c880 mov dword ptr [0x11333e64], eax */
  w32((uint32_t)(0x11333e64), (EAX));
  /* 1130c885 mov dword ptr [0x11334104], 0 */
  w32((uint32_t)(0x11334104), (0x0u));
  /* 1130c88f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c893 jbe 0x1130c94e */
  if ((C.cf||C.zf)) goto L_1130c94e;
  /* 1130c899 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1130c89c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1130c89f jmp 0x1130c8aa */
  goto L_1130c8aa;
L_1130c8a1:;
  /* 1130c8a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130c8a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c8a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1130c8aa:;
  /* 1130c8aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130c8ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130c8af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1130c8b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130c8b3 je 0x1130c8fc */
  if (C.zf) goto L_1130c8fc;
  /* 1130c8b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130c8b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c8ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1130c8bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130c8bf je 0x1130c8fc */
  if (C.zf) goto L_1130c8fc;
  /* 1130c8c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130c8c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130c8c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1130c8c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1130c8cb jmp 0x1130c8d6 */
  goto L_1130c8d6;
L_1130c8cd:;
  /* 1130c8cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c8d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c8d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1130c8d6:;
  /* 1130c8d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130c8d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130c8db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1130c8de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c8e1 ja 0x1130c8fa */
  if ((!C.cf&&!C.zf)) goto L_1130c8fa;
  /* 1130c8e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c8e6 mov cl, byte ptr [eax + 0x11334001] */
  CL = (r8((uint32_t)(EAX + 0x11334001)));
  /* 1130c8ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1130c8ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c8f2 mov byte ptr [edx + 0x11334001], cl */
  w8((uint32_t)(EDX + 0x11334001), (CL));
  /* 1130c8f8 jmp 0x1130c8cd */
  goto L_1130c8cd;
L_1130c8fa:;
  /* 1130c8fa jmp 0x1130c8a1 */
  goto L_1130c8a1;
L_1130c8fc:;
  /* 1130c8fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1130c903 jmp 0x1130c90e */
  goto L_1130c90e;
L_1130c905:;
  /* 1130c905 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c908 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c90b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1130c90e:;
  /* 1130c90e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c915 jae 0x1130c92e */
  if (!C.cf) goto L_1130c92e;
  /* 1130c917 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c91a mov dl, byte ptr [ecx + 0x11334001] */
  DL = (r8((uint32_t)(ECX + 0x11334001)));
  /* 1130c920 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1130c923 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130c926 mov byte ptr [eax + 0x11334001], dl */
  w8((uint32_t)(EAX + 0x11334001), (DL));
  /* 1130c92c jmp 0x1130c905 */
  goto L_1130c905;
L_1130c92e:;
  /* 1130c92e mov ecx, dword ptr [0x11333e64] */
  ECX = (r32((uint32_t)(0x11333e64)));
  /* 1130c934 push ecx */
  push32((uint32_t)(ECX));
  /* 1130c935 call 0x1130ca30 */
  push32(0x1130c93au); f_1130ca30();
  /* 1130c93a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c93d mov dword ptr [0x11334104], eax */
  w32((uint32_t)(0x11334104), (EAX));
  /* 1130c942 mov dword ptr [0x11333eec], 1 */
  w32((uint32_t)(0x11333eec), (0x1u));
  /* 1130c94c jmp 0x1130c958 */
  goto L_1130c958;
L_1130c94e:;
  /* 1130c94e mov dword ptr [0x11333eec], 0 */
  w32((uint32_t)(0x11333eec), (0x0u));
L_1130c958:;
  /* 1130c958 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130c95f jmp 0x1130c96a */
  goto L_1130c96a;
L_1130c961:;
  /* 1130c961 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c964 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c967 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1130c96a:;
  /* 1130c96a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c96e jae 0x1130c97f */
  if (!C.cf) goto L_1130c97f;
  /* 1130c970 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130c973 mov word ptr [eax*2 + 0x11333ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x11333ee0), (0x0u));
  /* 1130c97d jmp 0x1130c961 */
  goto L_1130c961;
L_1130c97f:;
  /* 1130c97f call 0x1130cb30 */
  push32(0x1130c984u); f_1130cb30();
  /* 1130c984 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1130c986 call 0x1130a050 */
  push32(0x1130c98bu); f_1130a050();
  /* 1130c98b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c990 jmp 0x1130c9c0 */
  goto L_1130c9c0;
L_1130c992:;
  /* 1130c992 cmp dword ptr [0x11332978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c999 je 0x1130c9b3 */
  if (C.zf) goto L_1130c9b3;
  /* 1130c99b call 0x1130cab0 */
  push32(0x1130c9a0u); f_1130cab0();
  /* 1130c9a0 call 0x1130cb30 */
  push32(0x1130c9a5u); f_1130cb30();
  /* 1130c9a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1130c9a7 call 0x1130a050 */
  push32(0x1130c9acu); f_1130a050();
  /* 1130c9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c9af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130c9b1 jmp 0x1130c9c0 */
  goto L_1130c9c0;
L_1130c9b3:;
  /* 1130c9b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1130c9b5 call 0x1130a050 */
  push32(0x1130c9bau); f_1130a050();
  /* 1130c9ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130c9bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1130c9c0:;
  /* 1130c9c0 mov esp, ebp */
  ESP = (EBP);
  /* 1130c9c2 pop ebp */
  EBP = (pop32());
  /* 1130c9c3 ret  */
  ESPCHK(0x1130c680u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1130c9d0 (89 bytes, 21 insns) */
void f_1130c9d0(void) {
  FTRACE(0x1130c9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130c9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130c9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1130c9d3 mov dword ptr [0x11332978], 0 */
  w32((uint32_t)(0x11332978), (0x0u));
  /* 1130c9dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c9e1 jne 0x1130c9f5 */
  if (!C.zf) goto L_1130c9f5;
  /* 1130c9e3 mov dword ptr [0x11332978], 1 */
  w32((uint32_t)(0x11332978), (0x1u));
  /* 1130c9ed call dword ptr [0x11335330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335330))), 0x1130c9f3u);
  /* 1130c9f3 jmp 0x1130ca27 */
  goto L_1130ca27;
L_1130c9f5:;
  /* 1130c9f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130c9f9 jne 0x1130ca0d */
  if (!C.zf) goto L_1130ca0d;
  /* 1130c9fb mov dword ptr [0x11332978], 1 */
  w32((uint32_t)(0x11332978), (0x1u));
  /* 1130ca05 call dword ptr [0x11335340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335340))), 0x1130ca0bu);
  /* 1130ca0b jmp 0x1130ca27 */
  goto L_1130ca27;
L_1130ca0d:;
  /* 1130ca0d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ca11 jne 0x1130ca24 */
  if (!C.zf) goto L_1130ca24;
  /* 1130ca13 mov dword ptr [0x11332978], 1 */
  w32((uint32_t)(0x11332978), (0x1u));
  /* 1130ca1d mov eax, dword ptr [0x11332998] */
  EAX = (r32((uint32_t)(0x11332998)));
  /* 1130ca22 jmp 0x1130ca27 */
  goto L_1130ca27;
L_1130ca24:;
  /* 1130ca24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1130ca27:;
  /* 1130ca27 pop ebp */
  EBP = (pop32());
  /* 1130ca28 ret  */
  ESPCHK(0x1130c9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca30 @ 0x1130ca30 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1130ca30(void) {
  FTRACE(0x1130ca30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ca30 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ca31 mov ebp, esp */
  EBP = (ESP);
  /* 1130ca33 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ca34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ca37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130ca3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ca3d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ca43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130ca46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ca4a ja 0x1130ca7a */
  if ((!C.cf&&!C.zf)) goto L_1130ca7a;
  /* 1130ca4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ca4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130ca51 mov dl, byte ptr [eax + 0x1130ca94] */
  DL = (r8((uint32_t)(EAX + 0x1130ca94)));
  /* 1130ca57 jmp dword ptr [edx*4 + 0x1130ca80] */
  switch (EDX) {
    case 0: goto L_1130ca5e;
    case 1: goto L_1130ca65;
    case 2: goto L_1130ca6c;
    case 3: goto L_1130ca73;
    case 4: goto L_1130ca7a;
    default: x86_unimpl("switch@0x1130ca57 out of table"); return;
  }
L_1130ca5e:;
  /* 1130ca5e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1130ca63 jmp 0x1130ca7c */
  goto L_1130ca7c;
L_1130ca65:;
  /* 1130ca65 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1130ca6a jmp 0x1130ca7c */
  goto L_1130ca7c;
L_1130ca6c:;
  /* 1130ca6c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1130ca71 jmp 0x1130ca7c */
  goto L_1130ca7c;
L_1130ca73:;
  /* 1130ca73 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1130ca78 jmp 0x1130ca7c */
  goto L_1130ca7c;
L_1130ca7a:;
  /* 1130ca7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130ca7c:;
  /* 1130ca7c mov esp, ebp */
  ESP = (EBP);
  /* 1130ca7e pop ebp */
  EBP = (pop32());
  /* 1130ca7f ret  */
  ESPCHK(0x1130ca30u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1130cab0 (116 bytes, 29 insns) */
void f_1130cab0(void) {
  FTRACE(0x1130cab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130cab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130cab1 mov ebp, esp */
  EBP = (ESP);
  /* 1130cab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130cab4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130cabb jmp 0x1130cac6 */
  goto L_1130cac6;
L_1130cabd:;
  /* 1130cabd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cac0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cac3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130cac6:;
  /* 1130cac6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cacd jge 0x1130cadb */
  if ((C.sf==C.of)) goto L_1130cadb;
  /* 1130cacf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cad2 mov byte ptr [ecx + 0x11334000], 0 */
  w8((uint32_t)(ECX + 0x11334000), (0x0u));
  /* 1130cad9 jmp 0x1130cabd */
  goto L_1130cabd;
L_1130cadb:;
  /* 1130cadb mov dword ptr [0x11333e64], 0 */
  w32((uint32_t)(0x11333e64), (0x0u));
  /* 1130cae5 mov dword ptr [0x11333eec], 0 */
  w32((uint32_t)(0x11333eec), (0x0u));
  /* 1130caef mov dword ptr [0x11334104], 0 */
  w32((uint32_t)(0x11334104), (0x0u));
  /* 1130caf9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130cb00 jmp 0x1130cb0b */
  goto L_1130cb0b;
L_1130cb02:;
  /* 1130cb02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cb05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cb08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130cb0b:;
  /* 1130cb0b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cb0f jge 0x1130cb20 */
  if ((C.sf==C.of)) goto L_1130cb20;
  /* 1130cb11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cb14 mov word ptr [eax*2 + 0x11333ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x11333ee0), (0x0u));
  /* 1130cb1e jmp 0x1130cb02 */
  goto L_1130cb02;
L_1130cb20:;
  /* 1130cb20 mov esp, ebp */
  ESP = (EBP);
  /* 1130cb22 pop ebp */
  EBP = (pop32());
  /* 1130cb23 ret  */
  ESPCHK(0x1130cab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb30 @ 0x1130cb30 (770 bytes, 175 insns) */
void f_1130cb30(void) {
  FTRACE(0x1130cb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130cb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1130cb31 mov ebp, esp */
  EBP = (ESP);
  /* 1130cb33 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130cb39 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1130cb3f push eax */
  push32((uint32_t)(EAX));
  /* 1130cb40 mov ecx, dword ptr [0x11333e64] */
  ECX = (r32((uint32_t)(0x11333e64)));
  /* 1130cb46 push ecx */
  push32((uint32_t)(ECX));
  /* 1130cb47 call dword ptr [0x11335338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335338))), 0x1130cb4du);
  /* 1130cb4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cb50 jne 0x1130cd69 */
  if (!C.zf) goto L_1130cd69;
  /* 1130cb56 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1130cb60 jmp 0x1130cb71 */
  goto L_1130cb71;
L_1130cb62:;
  /* 1130cb62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cb68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cb6b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1130cb71:;
  /* 1130cb71 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cb7b jae 0x1130cb92 */
  if (!C.cf) goto L_1130cb92;
  /* 1130cb7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cb83 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1130cb89 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1130cb90 jmp 0x1130cb62 */
  goto L_1130cb62;
L_1130cb92:;
  /* 1130cb92 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1130cb99 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1130cb9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130cba2 jmp 0x1130cbad */
  goto L_1130cbad;
L_1130cba4:;
  /* 1130cba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cba7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cbaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130cbad:;
  /* 1130cbad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cbb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130cbb2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1130cbb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130cbb6 je 0x1130cbf8 */
  if (C.zf) goto L_1130cbf8;
  /* 1130cbb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cbbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130cbbd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1130cbbf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1130cbc5 jmp 0x1130cbd6 */
  goto L_1130cbd6;
L_1130cbc7:;
  /* 1130cbc7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cbcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cbd0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1130cbd6:;
  /* 1130cbd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130cbd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130cbdb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1130cbde cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cbe4 ja 0x1130cbf6 */
  if ((!C.cf&&!C.zf)) goto L_1130cbf6;
  /* 1130cbe6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cbec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1130cbf4 jmp 0x1130cbc7 */
  goto L_1130cbc7;
L_1130cbf6:;
  /* 1130cbf6 jmp 0x1130cba4 */
  goto L_1130cba4;
L_1130cbf8:;
  /* 1130cbf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130cbfa mov eax, dword ptr [0x11334104] */
  EAX = (r32((uint32_t)(0x11334104)));
  /* 1130cbff push eax */
  push32((uint32_t)(EAX));
  /* 1130cc00 mov ecx, dword ptr [0x11333e64] */
  ECX = (r32((uint32_t)(0x11333e64)));
  /* 1130cc06 push ecx */
  push32((uint32_t)(ECX));
  /* 1130cc07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1130cc0d push edx */
  push32((uint32_t)(EDX));
  /* 1130cc0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130cc13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1130cc19 push eax */
  push32((uint32_t)(EAX));
  /* 1130cc1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1130cc1c call 0x1130e7e0 */
  push32(0x1130cc21u); f_1130e7e0();
  /* 1130cc21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cc24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130cc26 mov ecx, dword ptr [0x11333e64] */
  ECX = (r32((uint32_t)(0x11333e64)));
  /* 1130cc2c push ecx */
  push32((uint32_t)(ECX));
  /* 1130cc2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130cc32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1130cc38 push edx */
  push32((uint32_t)(EDX));
  /* 1130cc39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130cc3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1130cc44 push eax */
  push32((uint32_t)(EAX));
  /* 1130cc45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130cc4a mov ecx, dword ptr [0x11334104] */
  ECX = (r32((uint32_t)(0x11334104)));
  /* 1130cc50 push ecx */
  push32((uint32_t)(ECX));
  /* 1130cc51 call 0x1130e9a0 */
  push32(0x1130cc56u); f_1130e9a0();
  /* 1130cc56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cc59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130cc5b mov edx, dword ptr [0x11333e64] */
  EDX = (r32((uint32_t)(0x11333e64)));
  /* 1130cc61 push edx */
  push32((uint32_t)(EDX));
  /* 1130cc62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130cc67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1130cc6d push eax */
  push32((uint32_t)(EAX));
  /* 1130cc6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130cc73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1130cc79 push ecx */
  push32((uint32_t)(ECX));
  /* 1130cc7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1130cc7f mov edx, dword ptr [0x11334104] */
  EDX = (r32((uint32_t)(0x11334104)));
  /* 1130cc85 push edx */
  push32((uint32_t)(EDX));
  /* 1130cc86 call 0x1130e9a0 */
  push32(0x1130cc8bu); f_1130e9a0();
  /* 1130cc8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cc8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1130cc98 jmp 0x1130cca9 */
  goto L_1130cca9;
L_1130cc9a:;
  /* 1130cc9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cca0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cca3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1130cca9:;
  /* 1130cca9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ccb3 jae 0x1130cd64 */
  if (!C.cf) goto L_1130cd64;
  /* 1130ccb9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130ccbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130ccc1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1130ccc9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130cccc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ccce je 0x1130cd06 */
  if (C.zf) goto L_1130cd06;
  /* 1130ccd0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130ccd6 mov cl, byte ptr [eax + 0x11334001] */
  CL = (r8((uint32_t)(EAX + 0x11334001)));
  /* 1130ccdc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1130ccdf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cce5 mov byte ptr [edx + 0x11334001], cl */
  w8((uint32_t)(EDX + 0x11334001), (CL));
  /* 1130cceb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130ccf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130ccf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1130ccfe mov byte ptr [eax + 0x11333f00], dl */
  w8((uint32_t)(EAX + 0x11333f00), (DL));
  /* 1130cd04 jmp 0x1130cd5f */
  goto L_1130cd5f;
L_1130cd06:;
  /* 1130cd06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cd0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130cd0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1130cd16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1130cd19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130cd1b je 0x1130cd52 */
  if (C.zf) goto L_1130cd52;
  /* 1130cd1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cd23 mov al, byte ptr [edx + 0x11334001] */
  AL = (r8((uint32_t)(EDX + 0x11334001)));
  /* 1130cd29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1130cd2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cd31 mov byte ptr [ecx + 0x11334001], al */
  w8((uint32_t)(ECX + 0x11334001), (AL));
  /* 1130cd37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cd3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cd43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1130cd4a mov byte ptr [edx + 0x11333f00], cl */
  w8((uint32_t)(EDX + 0x11333f00), (CL));
  /* 1130cd50 jmp 0x1130cd5f */
  goto L_1130cd5f;
L_1130cd52:;
  /* 1130cd52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cd58 mov byte ptr [edx + 0x11333f00], 0 */
  w8((uint32_t)(EDX + 0x11333f00), (0x0u));
L_1130cd5f:;
  /* 1130cd5f jmp 0x1130cc9a */
  goto L_1130cc9a;
L_1130cd64:;
  /* 1130cd64 jmp 0x1130ce2e */
  goto L_1130ce2e;
L_1130cd69:;
  /* 1130cd69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1130cd73 jmp 0x1130cd84 */
  goto L_1130cd84;
L_1130cd75:;
  /* 1130cd75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cd7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cd7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1130cd84:;
  /* 1130cd84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cd8e jae 0x1130ce2e */
  if (!C.cf) goto L_1130ce2e;
  /* 1130cd94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cd9b jb 0x1130cdd8 */
  if (C.cf) goto L_1130cdd8;
  /* 1130cd9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cda4 ja 0x1130cdd8 */
  if ((!C.cf&&!C.zf)) goto L_1130cdd8;
  /* 1130cda6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cdac mov dl, byte ptr [ecx + 0x11334001] */
  DL = (r8((uint32_t)(ECX + 0x11334001)));
  /* 1130cdb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1130cdb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cdbb mov byte ptr [eax + 0x11334001], dl */
  w8((uint32_t)(EAX + 0x11334001), (DL));
  /* 1130cdc1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cdc7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cdca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cdd0 mov byte ptr [edx + 0x11333f00], cl */
  w8((uint32_t)(EDX + 0x11333f00), (CL));
  /* 1130cdd6 jmp 0x1130ce29 */
  goto L_1130ce29;
L_1130cdd8:;
  /* 1130cdd8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cddf jb 0x1130ce1c */
  if (C.cf) goto L_1130ce1c;
  /* 1130cde1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cde8 ja 0x1130ce1c */
  if ((!C.cf&&!C.zf)) goto L_1130ce1c;
  /* 1130cdea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cdf0 mov cl, byte ptr [eax + 0x11334001] */
  CL = (r8((uint32_t)(EAX + 0x11334001)));
  /* 1130cdf6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1130cdf9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130cdff mov byte ptr [edx + 0x11334001], cl */
  w8((uint32_t)(EDX + 0x11334001), (CL));
  /* 1130ce05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130ce0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ce0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130ce14 mov byte ptr [ecx + 0x11333f00], al */
  w8((uint32_t)(ECX + 0x11333f00), (AL));
  /* 1130ce1a jmp 0x1130ce29 */
  goto L_1130ce29;
L_1130ce1c:;
  /* 1130ce1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1130ce22 mov byte ptr [edx + 0x11333f00], 0 */
  w8((uint32_t)(EDX + 0x11333f00), (0x0u));
L_1130ce29:;
  /* 1130ce29 jmp 0x1130cd75 */
  goto L_1130cd75;
L_1130ce2e:;
  /* 1130ce2e mov esp, ebp */
  ESP = (EBP);
  /* 1130ce30 pop ebp */
  EBP = (pop32());
  /* 1130ce31 ret  */
  ESPCHK(0x1130cb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x1130ce40 (23 bytes, 9 insns) */
void f_1130ce40(void) {
  FTRACE(0x1130ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ce41 mov ebp, esp */
  EBP = (ESP);
  /* 1130ce43 cmp dword ptr [0x11333eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11333eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ce4a je 0x1130ce53 */
  if (C.zf) goto L_1130ce53;
  /* 1130ce4c mov eax, dword ptr [0x11333e64] */
  EAX = (r32((uint32_t)(0x11333e64)));
  /* 1130ce51 jmp 0x1130ce55 */
  goto L_1130ce55;
L_1130ce53:;
  /* 1130ce53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130ce55:;
  /* 1130ce55 pop ebp */
  EBP = (pop32());
  /* 1130ce56 ret  */
  ESPCHK(0x1130ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce60 @ 0x1130ce60 (34 bytes, 10 insns) */
void f_1130ce60(void) {
  FTRACE(0x1130ce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ce60 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ce61 mov ebp, esp */
  EBP = (ESP);
  /* 1130ce63 cmp dword ptr [0x113342b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113342b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ce6a jne 0x1130ce80 */
  if (!C.zf) goto L_1130ce80;
  /* 1130ce6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1130ce6e call 0x1130c680 */
  push32(0x1130ce73u); f_1130c680();
  /* 1130ce73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ce76 mov dword ptr [0x113342b0], 1 */
  w32((uint32_t)(0x113342b0), (0x1u));
L_1130ce80:;
  /* 1130ce80 pop ebp */
  EBP = (pop32());
  /* 1130ce81 ret  */
  ESPCHK(0x1130ce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce90 @ 0x1130ce90 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1130ce90(void) {
  FTRACE(0x1130ce90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ce90 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ce91 mov ebp, esp */
  EBP = (ESP);
  /* 1130ce93 push edi */
  push32((uint32_t)(EDI));
  /* 1130ce94 push esi */
  push32((uint32_t)(ESI));
  /* 1130ce95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1130ce98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130ce9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ce9e mov eax, ecx */
  EAX = (ECX);
  /* 1130cea0 mov edx, ecx */
  EDX = (ECX);
  /* 1130cea2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cea4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cea6 jbe 0x1130ceb0 */
  if ((C.cf||C.zf)) goto L_1130ceb0;
  /* 1130cea8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ceaa jb 0x1130d028 */
  if (C.cf) goto L_1130d028;
L_1130ceb0:;
  /* 1130ceb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1130ceb6 jne 0x1130cecc */
  if (!C.zf) goto L_1130cecc;
  /* 1130ceb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130cebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1130cebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cec1 jb 0x1130ceec */
  if (C.cf) goto L_1130ceec;
  /* 1130cec3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130cec5 jmp dword ptr [edx*4 + 0x1130cfd8] */
  switch (EDX) {
    case 0: goto L_1130cfe8;
    case 1: goto L_1130cff0;
    case 2: goto L_1130cffc;
    case 3: goto L_1130d010;
    default: x86_unimpl("switch@0x1130cec5 out of table"); return;
  }
L_1130cecc:;
  /* 1130cecc mov eax, edi */
  EAX = (EDI);
  /* 1130cece mov edx, 3 */
  EDX = (0x3u);
  /* 1130ced3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ced6 jb 0x1130cee4 */
  if (C.cf) goto L_1130cee4;
  /* 1130ced8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1130cedb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cedd jmp dword ptr [eax*4 + 0x1130cef0] */
  switch (EAX) {
    case 1: goto L_1130cf00;
    case 2: goto L_1130cf2c;
    case 3: goto L_1130cf50;
    default: x86_unimpl("switch@0x1130cedd out of table"); return;
  }
L_1130cee4:;
  /* 1130cee4 jmp dword ptr [ecx*4 + 0x1130cfe8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1130cfe8)))); return;
  /* 1130ceeb nop  */
  /* nop */
L_1130ceec:;
  /* 1130ceec jmp dword ptr [ecx*4 + 0x1130cf6c] */
  switch (ECX) {
    case 0: goto L_1130cfcf;
    case 1: goto L_1130cfbc;
    case 2: goto L_1130cfb4;
    case 3: goto L_1130cfac;
    case 4: goto L_1130cfa4;
    case 5: goto L_1130cf9c;
    case 6: goto L_1130cf94;
    case 7: goto L_1130cf8c;
    default: x86_unimpl("switch@0x1130ceec out of table"); return;
  }
  /* 1130cef3 nop  */
  /* nop */
L_1130cf00:;
  /* 1130cf00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130cf02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130cf04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130cf06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130cf09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130cf0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130cf0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130cf12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130cf15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cf18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cf1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cf1e jb 0x1130ceec */
  if (C.cf) goto L_1130ceec;
  /* 1130cf20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130cf22 jmp dword ptr [edx*4 + 0x1130cfd8] */
  switch (EDX) {
    case 0: goto L_1130cfe8;
    case 1: goto L_1130cff0;
    case 2: goto L_1130cffc;
    case 3: goto L_1130d010;
    default: x86_unimpl("switch@0x1130cf22 out of table"); return;
  }
  /* 1130cf29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130cf2c:;
  /* 1130cf2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130cf2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130cf30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130cf32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130cf35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130cf38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130cf3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cf3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cf41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cf44 jb 0x1130ceec */
  if (C.cf) goto L_1130ceec;
  /* 1130cf46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130cf48 jmp dword ptr [edx*4 + 0x1130cfd8] */
  switch (EDX) {
    case 0: goto L_1130cfe8;
    case 1: goto L_1130cff0;
    case 2: goto L_1130cffc;
    case 3: goto L_1130d010;
    default: x86_unimpl("switch@0x1130cf48 out of table"); return;
  }
  /* 1130cf4f nop  */
  /* nop */
L_1130cf50:;
  /* 1130cf50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130cf52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130cf54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130cf56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1130cf57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130cf5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1130cf5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130cf5e jb 0x1130ceec */
  if (C.cf) goto L_1130ceec;
  /* 1130cf60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130cf62 jmp dword ptr [edx*4 + 0x1130cfd8] */
  switch (EDX) {
    case 0: goto L_1130cfe8;
    case 1: goto L_1130cff0;
    case 2: goto L_1130cffc;
    case 3: goto L_1130d010;
    default: x86_unimpl("switch@0x1130cf62 out of table"); return;
  }
  /* 1130cf69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130cf8c:;
  /* 1130cf8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1130cf90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1130cf94:;
  /* 1130cf94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1130cf98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1130cf9c:;
  /* 1130cf9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1130cfa0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1130cfa4:;
  /* 1130cfa4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1130cfa8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1130cfac:;
  /* 1130cfac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1130cfb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1130cfb4:;
  /* 1130cfb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1130cfb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1130cfbc:;
  /* 1130cfbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1130cfc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1130cfc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1130cfcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130cfcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1130cfcf:;
  /* 1130cfcf jmp dword ptr [edx*4 + 0x1130cfd8] */
  switch (EDX) {
    case 0: goto L_1130cfe8;
    case 1: goto L_1130cff0;
    case 2: goto L_1130cffc;
    case 3: goto L_1130d010;
    default: x86_unimpl("switch@0x1130cfcf out of table"); return;
  }
  /* 1130cfd6 mov edi, edi */
  EDI = (EDI);
L_1130cfe8:;
  /* 1130cfe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130cfeb pop esi */
  ESI = (pop32());
  /* 1130cfec pop edi */
  EDI = (pop32());
  /* 1130cfed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130cfee ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
  /* 1130cfef nop  */
  /* nop */
L_1130cff0:;
  /* 1130cff0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130cff2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130cff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130cff7 pop esi */
  ESI = (pop32());
  /* 1130cff8 pop edi */
  EDI = (pop32());
  /* 1130cff9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130cffa ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
  /* 1130cffb nop  */
  /* nop */
L_1130cffc:;
  /* 1130cffc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130cffe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130d000 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130d003 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130d006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d009 pop esi */
  ESI = (pop32());
  /* 1130d00a pop edi */
  EDI = (pop32());
  /* 1130d00b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130d00c ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
  /* 1130d00d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130d010:;
  /* 1130d010 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130d012 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130d014 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130d017 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130d01a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130d01d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130d020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d023 pop esi */
  ESI = (pop32());
  /* 1130d024 pop edi */
  EDI = (pop32());
  /* 1130d025 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130d026 ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
  /* 1130d027 nop  */
  /* nop */
L_1130d028:;
  /* 1130d028 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1130d02c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1130d030 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1130d036 jne 0x1130d05c */
  if (!C.zf) goto L_1130d05c;
  /* 1130d038 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130d03b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d03e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d041 jb 0x1130d050 */
  if (C.cf) goto L_1130d050;
  /* 1130d043 std  */
  C.df=1;
  /* 1130d044 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130d046 cld  */
  C.df=0;
  /* 1130d047 jmp dword ptr [edx*4 + 0x1130d170] */
  switch (EDX) {
    case 0: goto L_1130d180;
    case 1: goto L_1130d188;
    case 2: goto L_1130d198;
    case 3: goto L_1130d1ac;
    default: x86_unimpl("switch@0x1130d047 out of table"); return;
  }
  /* 1130d04e mov edi, edi */
  EDI = (EDI);
L_1130d050:;
  /* 1130d050 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130d052 jmp dword ptr [ecx*4 + 0x1130d120] */
  switch (ECX) {
    case 0: goto L_1130d167;
    default: x86_unimpl("switch@0x1130d052 out of table"); return;
  }
  /* 1130d059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130d05c:;
  /* 1130d05c mov eax, edi */
  EAX = (EDI);
  /* 1130d05e mov edx, 3 */
  EDX = (0x3u);
  /* 1130d063 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d066 jb 0x1130d074 */
  if (C.cf) goto L_1130d074;
  /* 1130d068 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1130d06b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d06d jmp dword ptr [eax*4 + 0x1130d078] */
  switch (EAX) {
    case 1: goto L_1130d088;
    case 2: goto L_1130d0a8;
    case 3: goto L_1130d0d0;
    default: x86_unimpl("switch@0x1130d06d out of table"); return;
  }
L_1130d074:;
  /* 1130d074 jmp dword ptr [ecx*4 + 0x1130d170] */
  switch (ECX) {
    case 0: goto L_1130d180;
    case 1: goto L_1130d188;
    case 2: goto L_1130d198;
    case 3: goto L_1130d1ac;
    default: x86_unimpl("switch@0x1130d074 out of table"); return;
  }
  /* 1130d07b nop  */
  /* nop */
L_1130d088:;
  /* 1130d088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130d08b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130d08d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130d090 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1130d091 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130d094 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1130d095 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d098 jb 0x1130d050 */
  if (C.cf) goto L_1130d050;
  /* 1130d09a std  */
  C.df=1;
  /* 1130d09b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130d09d cld  */
  C.df=0;
  /* 1130d09e jmp dword ptr [edx*4 + 0x1130d170] */
  switch (EDX) {
    case 0: goto L_1130d180;
    case 1: goto L_1130d188;
    case 2: goto L_1130d198;
    case 3: goto L_1130d1ac;
    default: x86_unimpl("switch@0x1130d09e out of table"); return;
  }
  /* 1130d0a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130d0a8:;
  /* 1130d0a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130d0ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130d0ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130d0b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130d0b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130d0b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130d0b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d0bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d0bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d0c2 jb 0x1130d050 */
  if (C.cf) goto L_1130d050;
  /* 1130d0c4 std  */
  C.df=1;
  /* 1130d0c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130d0c7 cld  */
  C.df=0;
  /* 1130d0c8 jmp dword ptr [edx*4 + 0x1130d170] */
  switch (EDX) {
    case 0: goto L_1130d180;
    case 1: goto L_1130d188;
    case 2: goto L_1130d198;
    case 3: goto L_1130d1ac;
    default: x86_unimpl("switch@0x1130d0c8 out of table"); return;
  }
  /* 1130d0cf nop  */
  /* nop */
L_1130d0d0:;
  /* 1130d0d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130d0d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130d0d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130d0d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130d0db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130d0de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130d0e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130d0e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130d0e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d0ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d0ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d0f0 jb 0x1130d050 */
  if (C.cf) goto L_1130d050;
  /* 1130d0f6 std  */
  C.df=1;
  /* 1130d0f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130d0f9 cld  */
  C.df=0;
  /* 1130d0fa jmp dword ptr [edx*4 + 0x1130d170] */
  switch (EDX) {
    case 0: goto L_1130d180;
    case 1: goto L_1130d188;
    case 2: goto L_1130d198;
    case 3: goto L_1130d1ac;
    default: x86_unimpl("switch@0x1130d0fa out of table"); return;
  }
  /* 1130d101 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1130d104 and al, 0xd1 */
  { uint32_t _r=(AL)&(0xd1u); AL = (_r); fl_logic(_r,8); }
  /* 1130d106 xor byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1130d108 sub al, 0xd1 */
  { uint32_t _a=(AL),_b=(0xd1u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1130d10a xor byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1130d10c xor al, 0xd1 */
  { uint32_t _r=(AL)^(0xd1u); AL = (_r); fl_logic(_r,8); }
  /* 1130d10e xor byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1130d110 cmp al, 0xd1 */
  { uint32_t _a=(AL),_b=(0xd1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1130d112 xor byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1130d114 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1130d115 sal dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (sh_shl((uint32_t)(r32((uint32_t)(EAX))), (0x1u)&0x1f, 32)));
  /* 1130d117 adc dword ptr [ecx + edx*8 + 0x30], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*8 + 0x30))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDX*8 + 0x30), (_r)); fl_add(_a,_b,_r,32); }
  /* 1130d11b adc dword ptr [ecx + edx*8 + 0x30], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*8 + 0x30))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDX*8 + 0x30), (_r)); fl_add(_a,_b,_r,32); }
  /* 1130d124 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1130d128 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1130d12c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1130d130 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1130d134 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1130d138 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1130d13c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1130d140 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1130d144 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1130d148 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1130d14c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1130d150 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1130d154 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1130d158 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1130d15c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1130d163 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d165 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1130d167:;
  /* 1130d167 jmp dword ptr [edx*4 + 0x1130d170] */
  switch (EDX) {
    case 0: goto L_1130d180;
    case 1: goto L_1130d188;
    case 2: goto L_1130d198;
    case 3: goto L_1130d1ac;
    default: x86_unimpl("switch@0x1130d167 out of table"); return;
  }
  /* 1130d16e mov edi, edi */
  EDI = (EDI);
L_1130d180:;
  /* 1130d180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d183 pop esi */
  ESI = (pop32());
  /* 1130d184 pop edi */
  EDI = (pop32());
  /* 1130d185 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130d186 ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
  /* 1130d187 nop  */
  /* nop */
L_1130d188:;
  /* 1130d188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130d18b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130d18e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d191 pop esi */
  ESI = (pop32());
  /* 1130d192 pop edi */
  EDI = (pop32());
  /* 1130d193 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130d194 ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
  /* 1130d195 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130d198:;
  /* 1130d198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130d19b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130d19e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130d1a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130d1a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d1a7 pop esi */
  ESI = (pop32());
  /* 1130d1a8 pop edi */
  EDI = (pop32());
  /* 1130d1a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130d1aa ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
  /* 1130d1ab nop  */
  /* nop */
L_1130d1ac:;
  /* 1130d1ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130d1af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130d1b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130d1b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130d1b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130d1bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130d1be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d1c1 pop esi */
  ESI = (pop32());
  /* 1130d1c2 pop edi */
  EDI = (pop32());
  /* 1130d1c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130d1c4 ret  */
  ESPCHK(0x1130ce90u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1130d1d0 (104 bytes, 43 insns) */
void f_1130d1d0(void) {
  FTRACE(0x1130d1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130d1d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1130d1d1 push esi */
  push32((uint32_t)(ESI));
  /* 1130d1d2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1130d1d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130d1d8 jne 0x1130d1f2 */
  if (!C.zf) goto L_1130d1f2;
  /* 1130d1da mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1130d1de mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1130d1e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130d1e4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1130d1e6 mov ebx, eax */
  EBX = (EAX);
  /* 1130d1e8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1130d1ec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1130d1ee mov edx, ebx */
  EDX = (EBX);
  /* 1130d1f0 jmp 0x1130d233 */
  goto L_1130d233;
L_1130d1f2:;
  /* 1130d1f2 mov ecx, eax */
  ECX = (EAX);
  /* 1130d1f4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1130d1f8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1130d1fc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1130d200:;
  /* 1130d200 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1130d202 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1130d204 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1130d206 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1130d208 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130d20a jne 0x1130d200 */
  if (!C.zf) goto L_1130d200;
  /* 1130d20c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1130d20e mov esi, eax */
  ESI = (EAX);
  /* 1130d210 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1130d214 mov ecx, eax */
  ECX = (EAX);
  /* 1130d216 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1130d21a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1130d21c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d21e jb 0x1130d22e */
  if (C.cf) goto L_1130d22e;
  /* 1130d220 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d224 ja 0x1130d22e */
  if ((!C.cf&&!C.zf)) goto L_1130d22e;
  /* 1130d226 jb 0x1130d22f */
  if (C.cf) goto L_1130d22f;
  /* 1130d228 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d22c jbe 0x1130d22f */
  if ((C.cf||C.zf)) goto L_1130d22f;
L_1130d22e:;
  /* 1130d22e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1130d22f:;
  /* 1130d22f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130d231 mov eax, esi */
  EAX = (ESI);
L_1130d233:;
  /* 1130d233 pop esi */
  ESI = (pop32());
  /* 1130d234 pop ebx */
  EBX = (pop32());
  /* 1130d235 ret 0x10 */
  ESPCHK(0x1130d1d0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1130d240 (117 bytes, 44 insns) */
void f_1130d240(void) {
  FTRACE(0x1130d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130d240 push ebx */
  push32((uint32_t)(EBX));
  /* 1130d241 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1130d245 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130d247 jne 0x1130d261 */
  if (!C.zf) goto L_1130d261;
  /* 1130d249 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1130d24d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1130d251 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130d253 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1130d255 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1130d259 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1130d25b mov eax, edx */
  EAX = (EDX);
  /* 1130d25d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1130d25f jmp 0x1130d2b1 */
  goto L_1130d2b1;
L_1130d261:;
  /* 1130d261 mov ecx, eax */
  ECX = (EAX);
  /* 1130d263 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1130d267 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1130d26b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1130d26f:;
  /* 1130d26f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1130d271 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1130d273 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1130d275 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1130d277 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130d279 jne 0x1130d26f */
  if (!C.zf) goto L_1130d26f;
  /* 1130d27b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1130d27d mov ecx, eax */
  ECX = (EAX);
  /* 1130d27f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1130d283 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1130d284 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1130d288 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d28a jb 0x1130d29a */
  if (C.cf) goto L_1130d29a;
  /* 1130d28c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d290 ja 0x1130d29a */
  if ((!C.cf&&!C.zf)) goto L_1130d29a;
  /* 1130d292 jb 0x1130d2a2 */
  if (C.cf) goto L_1130d2a2;
  /* 1130d294 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d298 jbe 0x1130d2a2 */
  if ((C.cf||C.zf)) goto L_1130d2a2;
L_1130d29a:;
  /* 1130d29a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d29e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1130d2a2:;
  /* 1130d2a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d2a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d2aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130d2ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130d2ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1130d2b1:;
  /* 1130d2b1 pop ebx */
  EBX = (pop32());
  /* 1130d2b2 ret 0x10 */
  ESPCHK(0x1130d240u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d2c0 @ 0x1130d2c0 (628 bytes, 214 insns) */
void f_1130d2c0(void) {
  FTRACE(0x1130d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130d2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130d2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1130d2c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d2c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1130d2c7 push esi */
  push32((uint32_t)(ESI));
  /* 1130d2c8 push edi */
  push32((uint32_t)(EDI));
L_1130d2c9:;
  /* 1130d2c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d2cd jne 0x1130d2ed */
  if (!C.zf) goto L_1130d2ed;
  /* 1130d2cf push 0x1132e32c */
  push32((uint32_t)(0x1132e32cu));
  /* 1130d2d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130d2d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1130d2d8 push 0x1132e320 */
  push32((uint32_t)(0x1132e320u));
  /* 1130d2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1130d2df call 0x11305670 */
  push32(0x1130d2e4u); f_11305670();
  /* 1130d2e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d2e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d2ea jne 0x1130d2ed */
  if (!C.zf) goto L_1130d2ed;
  /* 1130d2ec int3  */
  x86_unimpl("int3 @ 0x1130d2ec");
L_1130d2ed:;
  /* 1130d2ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130d2ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d2f1 jne 0x1130d2c9 */
  if (!C.zf) goto L_1130d2c9;
  /* 1130d2f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d2f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130d2f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d2fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130d2ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1130d302 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d305 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130d308 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d30e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130d310 je 0x1130d31f */
  if (C.zf) goto L_1130d31f;
  /* 1130d312 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d315 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130d318 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1130d31b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130d31d je 0x1130d335 */
  if (C.zf) goto L_1130d335;
L_1130d31f:;
  /* 1130d31f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d322 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1130d325 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1130d327 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d32a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1130d32d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130d330 jmp 0x1130d52d */
  goto L_1130d52d;
L_1130d335:;
  /* 1130d335 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d338 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1130d33b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1130d33e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d340 je 0x1130d38c */
  if (C.zf) goto L_1130d38c;
  /* 1130d342 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d345 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1130d34c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d34f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1130d352 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1130d355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d357 je 0x1130d375 */
  if (C.zf) goto L_1130d375;
  /* 1130d359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d35c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d35f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130d362 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1130d364 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d367 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130d36a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1130d36d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d370 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1130d373 jmp 0x1130d38c */
  goto L_1130d38c;
L_1130d375:;
  /* 1130d375 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d378 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130d37b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d37e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d381 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1130d384 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130d387 jmp 0x1130d52d */
  goto L_1130d52d;
L_1130d38c:;
  /* 1130d38c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d38f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130d392 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d395 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d398 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1130d39b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d39e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130d3a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1130d3a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d3a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1130d3aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d3ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1130d3b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130d3bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d3be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1130d3c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d3c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130d3c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1130d3cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130d3cf jne 0x1130d3ff */
  if (!C.zf) goto L_1130d3ff;
  /* 1130d3d1 cmp dword ptr [ebp - 8], 0x11331140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11331140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d3d8 je 0x1130d3e3 */
  if (C.zf) goto L_1130d3e3;
  /* 1130d3da cmp dword ptr [ebp - 8], 0x11331160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11331160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d3e1 jne 0x1130d3f3 */
  if (!C.zf) goto L_1130d3f3;
L_1130d3e3:;
  /* 1130d3e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130d3e6 push edx */
  push32((uint32_t)(EDX));
  /* 1130d3e7 call 0x1130f230 */
  push32(0x1130d3ecu); f_1130f230();
  /* 1130d3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d3f1 jne 0x1130d3ff */
  if (!C.zf) goto L_1130d3ff;
L_1130d3f3:;
  /* 1130d3f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1130d3f7 call 0x1130f160 */
  push32(0x1130d3fcu); f_1130f160();
  /* 1130d3fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130d3ff:;
  /* 1130d3ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d402 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130d405 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d40b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130d40d je 0x1130d4eb */
  if (C.zf) goto L_1130d4eb;
L_1130d413:;
  /* 1130d413 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d416 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d419 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1130d41b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d41e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130d420 jge 0x1130d443 */
  if ((C.sf==C.of)) goto L_1130d443;
  /* 1130d422 push 0x1132e2e0 */
  push32((uint32_t)(0x1132e2e0u));
  /* 1130d427 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130d429 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1130d42e push 0x1132e320 */
  push32((uint32_t)(0x1132e320u));
  /* 1130d433 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130d435 call 0x11305670 */
  push32(0x1130d43au); f_11305670();
  /* 1130d43a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d43d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d440 jne 0x1130d443 */
  if (!C.zf) goto L_1130d443;
  /* 1130d442 int3  */
  x86_unimpl("int3 @ 0x1130d442");
L_1130d443:;
  /* 1130d443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130d445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d447 jne 0x1130d413 */
  if (!C.zf) goto L_1130d413;
  /* 1130d449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d44c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d44f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1130d451 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d454 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130d457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d45a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130d45d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d460 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d463 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1130d465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d468 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1130d46b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d46e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d471 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1130d474 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d478 jle 0x1130d496 */
  if ((C.zf||C.sf!=C.of)) goto L_1130d496;
  /* 1130d47a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d47d push ecx */
  push32((uint32_t)(ECX));
  /* 1130d47e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d481 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130d484 push eax */
  push32((uint32_t)(EAX));
  /* 1130d485 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130d488 push ecx */
  push32((uint32_t)(ECX));
  /* 1130d489 call 0x1130ee50 */
  push32(0x1130d48eu); f_1130ee50();
  /* 1130d48e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d491 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1130d494 jmp 0x1130d4de */
  goto L_1130d4de;
L_1130d496:;
  /* 1130d496 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d49a je 0x1130d4b9 */
  if (C.zf) goto L_1130d4b9;
  /* 1130d49c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130d49f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1130d4a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130d4a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1130d4a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130d4ab mov ecx, dword ptr [edx*4 + 0x11334160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130d4b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d4b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1130d4b7 jmp 0x1130d4c0 */
  goto L_1130d4c0;
L_1130d4b9:;
  /* 1130d4b9 mov dword ptr [ebp - 0x14], 0x11330a60 */
  w32((uint32_t)(EBP + -0x14), (0x11330a60u));
L_1130d4c0:;
  /* 1130d4c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1130d4c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1130d4c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1130d4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d4cc je 0x1130d4de */
  if (C.zf) goto L_1130d4de;
  /* 1130d4ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1130d4d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130d4d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130d4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1130d4d6 call 0x1130ed00 */
  push32(0x1130d4dbu); f_1130ed00();
  /* 1130d4db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130d4de:;
  /* 1130d4de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d4e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130d4e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1130d4e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1130d4e9 jmp 0x1130d509 */
  goto L_1130d509;
L_1130d4eb:;
  /* 1130d4eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1130d4f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d4f5 push edx */
  push32((uint32_t)(EDX));
  /* 1130d4f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1130d4f9 push eax */
  push32((uint32_t)(EAX));
  /* 1130d4fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130d4fd push ecx */
  push32((uint32_t)(ECX));
  /* 1130d4fe call 0x1130ee50 */
  push32(0x1130d503u); f_1130ee50();
  /* 1130d503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d506 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1130d509:;
  /* 1130d509 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130d50c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d50f je 0x1130d525 */
  if (C.zf) goto L_1130d525;
  /* 1130d511 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d514 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130d517 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1130d51a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d51d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1130d520 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130d523 jmp 0x1130d52d */
  goto L_1130d52d;
L_1130d525:;
  /* 1130d525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d528 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1130d52d:;
  /* 1130d52d pop edi */
  EDI = (pop32());
  /* 1130d52e pop esi */
  ESI = (pop32());
  /* 1130d52f pop ebx */
  EBX = (pop32());
  /* 1130d530 mov esp, ebp */
  ESP = (EBP);
  /* 1130d532 pop ebp */
  EBP = (pop32());
  /* 1130d533 ret  */
  ESPCHK(0x1130d2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d540 @ 0x1130d540 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1130d540(void) {
  FTRACE(0x1130d540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130d540 push ebp */
  push32((uint32_t)(EBP));
  /* 1130d541 mov ebp, esp */
  EBP = (ESP);
  /* 1130d543 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d549 push ebx */
  push32((uint32_t)(EBX));
  /* 1130d54a push esi */
  push32((uint32_t)(ESI));
  /* 1130d54b push edi */
  push32((uint32_t)(EDI));
  /* 1130d54c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1130d553 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1130d55d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1130d564:;
  /* 1130d564 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d567 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1130d569 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1130d56c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d570 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d573 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d576 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1130d579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130d57b je 0x1130e157 */
  if (C.zf) goto L_1130e157;
  /* 1130d581 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d588 jl 0x1130e157 */
  if ((C.sf!=C.of)) goto L_1130e157;
  /* 1130d58e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d592 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d595 jl 0x1130d5b6 */
  if ((C.sf!=C.of)) goto L_1130d5b6;
  /* 1130d597 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d59b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d59e jg 0x1130d5b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1130d5b6;
  /* 1130d5a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d5a4 movsx ecx, byte ptr [eax + 0x1132e318] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1132e318))));
  /* 1130d5ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1130d5ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1130d5b4 jmp 0x1130d5c0 */
  goto L_1130d5c0;
L_1130d5b6:;
  /* 1130d5b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1130d5c0:;
  /* 1130d5c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1130d5c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1130d5c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130d5cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130d5cf movsx edx, byte ptr [ecx + eax*8 + 0x1132e338] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1132e338))));
  /* 1130d5d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1130d5da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1130d5dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1130d5e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1130d5e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d5ed ja 0x1130e152 */
  if ((!C.cf&&!C.zf)) goto L_1130e152;
  /* 1130d5f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1130d5f9 jmp dword ptr [ecx*4 + 0x1130e164] */
  switch (ECX) {
    case 0: goto L_1130d600;
    case 1: goto L_1130d69a;
    case 2: goto L_1130d6dc;
    case 3: goto L_1130d74b;
    case 4: goto L_1130d7a3;
    case 5: goto L_1130d7b2;
    case 6: goto L_1130d7fe;
    case 7: goto L_1130d891;
    case 8: goto L_1130d728;
    case 9: goto L_1130d733;
    case 10: goto L_1130d71e;
    case 11: goto L_1130d713;
    case 12: goto L_1130d73e;
    case 13: goto L_1130d746;
    default: x86_unimpl("switch@0x1130d5f9 out of table"); return;
  }
L_1130d600:;
  /* 1130d600 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1130d607 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130d60a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1130d610 mov eax, dword ptr [0x11330c98] */
  EAX = (r32((uint32_t)(0x11330c98)));
  /* 1130d615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130d617 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1130d61b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1130d621 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130d623 je 0x1130d67d */
  if (C.zf) goto L_1130d67d;
  /* 1130d625 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1130d62b push edx */
  push32((uint32_t)(EDX));
  /* 1130d62c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d62f push eax */
  push32((uint32_t)(EAX));
  /* 1130d630 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d634 push ecx */
  push32((uint32_t)(ECX));
  /* 1130d635 call 0x1130e270 */
  push32(0x1130d63au); f_1130e270();
  /* 1130d63a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d63d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d640 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1130d642 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1130d645 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d648 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d64b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1130d64e:;
  /* 1130d64e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d652 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130d654 jne 0x1130d677 */
  if (!C.zf) goto L_1130d677;
  /* 1130d656 push 0x1132e3b8 */
  push32((uint32_t)(0x1132e3b8u));
  /* 1130d65b push 0 */
  push32((uint32_t)(0x0u));
  /* 1130d65d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1130d662 push 0x1132e3ac */
  push32((uint32_t)(0x1132e3acu));
  /* 1130d667 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130d669 call 0x11305670 */
  push32(0x1130d66eu); f_11305670();
  /* 1130d66e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d671 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d674 jne 0x1130d677 */
  if (!C.zf) goto L_1130d677;
  /* 1130d676 int3  */
  x86_unimpl("int3 @ 0x1130d676");
L_1130d677:;
  /* 1130d677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130d679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d67b jne 0x1130d64e */
  if (!C.zf) goto L_1130d64e;
L_1130d67d:;
  /* 1130d67d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1130d683 push ecx */
  push32((uint32_t)(ECX));
  /* 1130d684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130d687 push edx */
  push32((uint32_t)(EDX));
  /* 1130d688 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d68c push eax */
  push32((uint32_t)(EAX));
  /* 1130d68d call 0x1130e270 */
  push32(0x1130d692u); f_1130e270();
  /* 1130d692 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d695 jmp 0x1130e152 */
  goto L_1130e152;
L_1130d69a:;
  /* 1130d69a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1130d6a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130d6a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1130d6aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1130d6b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1130d6b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1130d6bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1130d6bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130d6c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1130d6d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1130d6d7 jmp 0x1130e152 */
  goto L_1130e152;
L_1130d6dc:;
  /* 1130d6dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d6e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1130d6e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1130d6ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d6ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1130d6f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d6fc ja 0x1130d746 */
  if ((!C.cf&&!C.zf)) goto L_1130d746;
  /* 1130d6fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1130d704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130d706 mov al, byte ptr [ecx + 0x1130e19c] */
  AL = (r8((uint32_t)(ECX + 0x1130e19c)));
  /* 1130d70c jmp dword ptr [eax*4 + 0x1130e184] */
  switch (EAX) {
    case 0: goto L_1130d728;
    case 1: goto L_1130d733;
    case 2: goto L_1130d71e;
    case 3: goto L_1130d713;
    case 4: goto L_1130d73e;
    case 5: goto L_1130d746;
    default: x86_unimpl("switch@0x1130d70c out of table"); return;
  }
L_1130d713:;
  /* 1130d713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d716 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d719 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130d71c jmp 0x1130d746 */
  goto L_1130d746;
L_1130d71e:;
  /* 1130d71e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d721 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1130d723 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130d726 jmp 0x1130d746 */
  goto L_1130d746;
L_1130d728:;
  /* 1130d728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d72b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1130d72e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130d731 jmp 0x1130d746 */
  goto L_1130d746;
L_1130d733:;
  /* 1130d733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d736 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1130d739 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130d73c jmp 0x1130d746 */
  goto L_1130d746;
L_1130d73e:;
  /* 1130d73e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d741 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1130d743 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130d746:;
  /* 1130d746 jmp 0x1130e152 */
  goto L_1130e152;
L_1130d74b:;
  /* 1130d74b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d74f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d752 jne 0x1130d787 */
  if (!C.zf) goto L_1130d787;
  /* 1130d754 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1130d757 push edx */
  push32((uint32_t)(EDX));
  /* 1130d758 call 0x1130e380 */
  push32(0x1130d75du); f_1130e380();
  /* 1130d75d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d760 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1130d766 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d76d jge 0x1130d785 */
  if ((C.sf==C.of)) goto L_1130d785;
  /* 1130d76f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d772 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1130d774 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130d777 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1130d77d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130d77f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1130d785:;
  /* 1130d785 jmp 0x1130d79e */
  goto L_1130d79e;
L_1130d787:;
  /* 1130d787 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1130d78d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130d790 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d794 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1130d798 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1130d79e:;
  /* 1130d79e jmp 0x1130e152 */
  goto L_1130e152;
L_1130d7a3:;
  /* 1130d7a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1130d7ad jmp 0x1130e152 */
  goto L_1130e152;
L_1130d7b2:;
  /* 1130d7b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d7b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d7b9 jne 0x1130d7e2 */
  if (!C.zf) goto L_1130d7e2;
  /* 1130d7bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1130d7be push eax */
  push32((uint32_t)(EAX));
  /* 1130d7bf call 0x1130e380 */
  push32(0x1130d7c4u); f_1130e380();
  /* 1130d7c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d7c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1130d7cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d7d4 jge 0x1130d7e0 */
  if ((C.sf==C.of)) goto L_1130d7e0;
  /* 1130d7d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1130d7e0:;
  /* 1130d7e0 jmp 0x1130d7f9 */
  goto L_1130d7f9;
L_1130d7e2:;
  /* 1130d7e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1130d7e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130d7eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d7ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1130d7f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1130d7f9:;
  /* 1130d7f9 jmp 0x1130e152 */
  goto L_1130e152;
L_1130d7fe:;
  /* 1130d7fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d802 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1130d808 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1130d80e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d811 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1130d817 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d81e ja 0x1130d88c */
  if ((!C.cf&&!C.zf)) goto L_1130d88c;
  /* 1130d820 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1130d826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130d828 mov al, byte ptr [ecx + 0x1130e1c1] */
  AL = (r8((uint32_t)(ECX + 0x1130e1c1)));
  /* 1130d82e jmp dword ptr [eax*4 + 0x1130e1ad] */
  switch (EAX) {
    case 0: goto L_1130d840;
    case 1: goto L_1130d879;
    case 2: goto L_1130d835;
    case 3: goto L_1130d883;
    case 4: goto L_1130d88c;
    default: x86_unimpl("switch@0x1130d82e out of table"); return;
  }
L_1130d835:;
  /* 1130d835 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d838 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d83b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130d83e jmp 0x1130d88c */
  goto L_1130d88c;
L_1130d840:;
  /* 1130d840 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d843 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1130d846 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d849 jne 0x1130d86b */
  if (!C.zf) goto L_1130d86b;
  /* 1130d84b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d84e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1130d852 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d855 jne 0x1130d86b */
  if (!C.zf) goto L_1130d86b;
  /* 1130d857 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130d85a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d85d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1130d860 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d863 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1130d866 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130d869 jmp 0x1130d877 */
  goto L_1130d877;
L_1130d86b:;
  /* 1130d86b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1130d872 jmp 0x1130d600 */
  goto L_1130d600;
L_1130d877:;
  /* 1130d877 jmp 0x1130d88c */
  goto L_1130d88c;
L_1130d879:;
  /* 1130d879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d87c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1130d87e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130d881 jmp 0x1130d88c */
  goto L_1130d88c;
L_1130d883:;
  /* 1130d883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d886 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1130d889 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1130d88c:;
  /* 1130d88c jmp 0x1130e152 */
  goto L_1130e152;
L_1130d891:;
  /* 1130d891 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130d895 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1130d89b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1130d8a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130d8a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1130d8aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d8b1 ja 0x1130df77 */
  if ((!C.cf&&!C.zf)) goto L_1130df77;
  /* 1130d8b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1130d8bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130d8bf mov cl, byte ptr [edx + 0x1130e22c] */
  CL = (r8((uint32_t)(EDX + 0x1130e22c)));
  /* 1130d8c5 jmp dword ptr [ecx*4 + 0x1130e1f0] */
  switch (ECX) {
    case 0: goto L_1130d8cc;
    case 1: goto L_1130db60;
    case 2: goto L_1130d9f0;
    case 3: goto L_1130dc99;
    case 4: goto L_1130d95b;
    case 5: goto L_1130d8e1;
    case 6: goto L_1130dc6b;
    case 7: goto L_1130db70;
    case 8: goto L_1130db15;
    case 9: goto L_1130dce5;
    case 10: goto L_1130dc8f;
    case 11: goto L_1130da06;
    case 12: goto L_1130dc83;
    case 13: goto L_1130dca5;
    case 14: goto L_1130df77;
    default: x86_unimpl("switch@0x1130d8c5 out of table"); return;
  }
L_1130d8cc:;
  /* 1130d8cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d8cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1130d8d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130d8d6 jne 0x1130d8e1 */
  if (!C.zf) goto L_1130d8e1;
  /* 1130d8d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d8db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1130d8de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1130d8e1:;
  /* 1130d8e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d8e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1130d8ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130d8ec je 0x1130d927 */
  if (C.zf) goto L_1130d927;
  /* 1130d8ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1130d8f1 push eax */
  push32((uint32_t)(EAX));
  /* 1130d8f2 call 0x1130e3c0 */
  push32(0x1130d8f7u); f_1130e3c0();
  /* 1130d8f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d8fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1130d8fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1130d902 push ecx */
  push32((uint32_t)(ECX));
  /* 1130d903 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1130d909 push edx */
  push32((uint32_t)(EDX));
  /* 1130d90a call 0x1130f4a0 */
  push32(0x1130d90fu); f_1130f4a0();
  /* 1130d90f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d912 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1130d915 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d919 jge 0x1130d925 */
  if ((C.sf==C.of)) goto L_1130d925;
  /* 1130d91b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1130d925:;
  /* 1130d925 jmp 0x1130d94d */
  goto L_1130d94d;
L_1130d927:;
  /* 1130d927 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1130d92a push eax */
  push32((uint32_t)(EAX));
  /* 1130d92b call 0x1130e380 */
  push32(0x1130d930u); f_1130e380();
  /* 1130d930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d933 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1130d93a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1130d940 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1130d946 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1130d94d:;
  /* 1130d94d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1130d953 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1130d956 jmp 0x1130df77 */
  goto L_1130df77;
L_1130d95b:;
  /* 1130d95b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1130d95e push eax */
  push32((uint32_t)(EAX));
  /* 1130d95f call 0x1130e380 */
  push32(0x1130d964u); f_1130e380();
  /* 1130d964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d967 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1130d96d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d974 je 0x1130d982 */
  if (C.zf) goto L_1130d982;
  /* 1130d976 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1130d97c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130d980 jne 0x1130d99c */
  if (!C.zf) goto L_1130d99c;
L_1130d982:;
  /* 1130d982 mov edx, dword ptr [0x11330fb0] */
  EDX = (r32((uint32_t)(0x11330fb0)));
  /* 1130d988 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1130d98b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130d98e push eax */
  push32((uint32_t)(EAX));
  /* 1130d98f call 0x113093e0 */
  push32(0x1130d994u); f_113093e0();
  /* 1130d994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130d997 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1130d99a jmp 0x1130d9eb */
  goto L_1130d9eb;
L_1130d99c:;
  /* 1130d99c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d99f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1130d9a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130d9a7 je 0x1130d9cc */
  if (C.zf) goto L_1130d9cc;
  /* 1130d9a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1130d9af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1130d9b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130d9b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1130d9bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1130d9be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1130d9c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1130d9c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1130d9ca jmp 0x1130d9eb */
  goto L_1130d9eb;
L_1130d9cc:;
  /* 1130d9cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1130d9d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1130d9d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130d9dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1130d9df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1130d9e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1130d9e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1130d9eb:;
  /* 1130d9eb jmp 0x1130df77 */
  goto L_1130df77;
L_1130d9f0:;
  /* 1130d9f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130d9f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1130d9f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130d9fb jne 0x1130da06 */
  if (!C.zf) goto L_1130da06;
  /* 1130d9fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130da00 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1130da03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130da06:;
  /* 1130da06 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130da0d jne 0x1130da1b */
  if (!C.zf) goto L_1130da1b;
  /* 1130da0f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1130da19 jmp 0x1130da27 */
  goto L_1130da27;
L_1130da1b:;
  /* 1130da1b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1130da21 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1130da27:;
  /* 1130da27 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1130da2d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1130da33 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1130da36 push edx */
  push32((uint32_t)(EDX));
  /* 1130da37 call 0x1130e380 */
  push32(0x1130da3cu); f_1130e380();
  /* 1130da3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130da3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130da42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130da45 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1130da4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130da4c je 0x1130dab6 */
  if (C.zf) goto L_1130dab6;
  /* 1130da4e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130da52 jne 0x1130da5d */
  if (!C.zf) goto L_1130da5d;
  /* 1130da54 mov ecx, dword ptr [0x11330fb4] */
  ECX = (r32((uint32_t)(0x11330fb4)));
  /* 1130da5a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1130da5d:;
  /* 1130da5d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1130da64 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130da67 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1130da6d:;
  /* 1130da6d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1130da73 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1130da79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130da7c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1130da82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130da84 je 0x1130daa6 */
  if (C.zf) goto L_1130daa6;
  /* 1130da86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1130da8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130da8e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1130da91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130da93 je 0x1130daa6 */
  if (C.zf) goto L_1130daa6;
  /* 1130da95 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1130da9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130da9e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1130daa4 jmp 0x1130da6d */
  goto L_1130da6d;
L_1130daa6:;
  /* 1130daa6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1130daac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130daaf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1130dab1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1130dab4 jmp 0x1130db10 */
  goto L_1130db10;
L_1130dab6:;
  /* 1130dab6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130daba jne 0x1130dac4 */
  if (!C.zf) goto L_1130dac4;
  /* 1130dabc mov eax, dword ptr [0x11330fb0] */
  EAX = (r32((uint32_t)(0x11330fb0)));
  /* 1130dac1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1130dac4:;
  /* 1130dac4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130dac7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1130dacd:;
  /* 1130dacd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1130dad3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1130dad9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130dadc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1130dae2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130dae4 je 0x1130db04 */
  if (C.zf) goto L_1130db04;
  /* 1130dae6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1130daec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1130daef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130daf1 je 0x1130db04 */
  if (C.zf) goto L_1130db04;
  /* 1130daf3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1130daf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dafc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1130db02 jmp 0x1130dacd */
  goto L_1130dacd;
L_1130db04:;
  /* 1130db04 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1130db0a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130db0d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1130db10:;
  /* 1130db10 jmp 0x1130df77 */
  goto L_1130df77;
L_1130db15:;
  /* 1130db15 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1130db18 push edx */
  push32((uint32_t)(EDX));
  /* 1130db19 call 0x1130e380 */
  push32(0x1130db1eu); f_1130e380();
  /* 1130db1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130db21 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1130db27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130db2a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1130db2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130db2f je 0x1130db43 */
  if (C.zf) goto L_1130db43;
  /* 1130db31 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1130db37 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1130db3e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1130db41 jmp 0x1130db51 */
  goto L_1130db51;
L_1130db43:;
  /* 1130db43 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1130db49 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1130db4f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1130db51:;
  /* 1130db51 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1130db5b jmp 0x1130df77 */
  goto L_1130df77;
L_1130db60:;
  /* 1130db60 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1130db67 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1130db6a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1130db6d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1130db70:;
  /* 1130db70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130db73 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1130db75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130db78 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1130db7e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1130db81 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130db88 jge 0x1130db96 */
  if ((C.sf==C.of)) goto L_1130db96;
  /* 1130db8a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1130db94 jmp 0x1130dbb2 */
  goto L_1130dbb2;
L_1130db96:;
  /* 1130db96 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130db9d jne 0x1130dbb2 */
  if (!C.zf) goto L_1130dbb2;
  /* 1130db9f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130dba3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130dba6 jne 0x1130dbb2 */
  if (!C.zf) goto L_1130dbb2;
  /* 1130dba8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1130dbb2:;
  /* 1130dbb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130dbb5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dbb8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1130dbbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130dbbe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130dbc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130dbc3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130dbc6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1130dbcc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1130dbd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130dbd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1130dbd6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1130dbdc push edx */
  push32((uint32_t)(EDX));
  /* 1130dbdd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130dbe1 push eax */
  push32((uint32_t)(EAX));
  /* 1130dbe2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130dbe5 push ecx */
  push32((uint32_t)(ECX));
  /* 1130dbe6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1130dbec push edx */
  push32((uint32_t)(EDX));
  /* 1130dbed call dword ptr [0x113313a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113313a0))), 0x1130dbf3u);
  /* 1130dbf3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dbf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dbf9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1130dbfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130dc00 je 0x1130dc18 */
  if (C.zf) goto L_1130dc18;
  /* 1130dc02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130dc09 jne 0x1130dc18 */
  if (!C.zf) goto L_1130dc18;
  /* 1130dc0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130dc0e push ecx */
  push32((uint32_t)(ECX));
  /* 1130dc0f call dword ptr [0x113313ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113313ac))), 0x1130dc15u);
  /* 1130dc15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130dc18:;
  /* 1130dc18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1130dc1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130dc1f jne 0x1130dc3a */
  if (!C.zf) goto L_1130dc3a;
  /* 1130dc21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dc24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1130dc29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130dc2b jne 0x1130dc3a */
  if (!C.zf) goto L_1130dc3a;
  /* 1130dc2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130dc30 push ecx */
  push32((uint32_t)(ECX));
  /* 1130dc31 call dword ptr [0x113313a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113313a4))), 0x1130dc37u);
  /* 1130dc37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130dc3a:;
  /* 1130dc3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130dc3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1130dc40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130dc43 jne 0x1130dc57 */
  if (!C.zf) goto L_1130dc57;
  /* 1130dc45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dc48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1130dc4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130dc4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130dc51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dc54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1130dc57:;
  /* 1130dc57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130dc5a push eax */
  push32((uint32_t)(EAX));
  /* 1130dc5b call 0x113093e0 */
  push32(0x1130dc60u); f_113093e0();
  /* 1130dc60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dc63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1130dc66 jmp 0x1130df77 */
  goto L_1130df77;
L_1130dc6b:;
  /* 1130dc6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dc6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1130dc71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130dc74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1130dc7e jmp 0x1130dd05 */
  goto L_1130dd05;
L_1130dc83:;
  /* 1130dc83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1130dc8d jmp 0x1130dd05 */
  goto L_1130dd05;
L_1130dc8f:;
  /* 1130dc8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1130dc99:;
  /* 1130dc99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1130dca3 jmp 0x1130dcaf */
  goto L_1130dcaf;
L_1130dca5:;
  /* 1130dca5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1130dcaf:;
  /* 1130dcaf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1130dcb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dcbc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1130dcc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130dcc4 je 0x1130dce3 */
  if (C.zf) goto L_1130dce3;
  /* 1130dcc6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1130dccd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1130dcd3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dcd6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1130dcdc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1130dce3:;
  /* 1130dce3 jmp 0x1130dd05 */
  goto L_1130dd05;
L_1130dce5:;
  /* 1130dce5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1130dcef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dcf2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1130dcf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130dcfa je 0x1130dd05 */
  if (C.zf) goto L_1130dd05;
  /* 1130dcfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dcff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1130dd02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130dd05:;
  /* 1130dd05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dd08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1130dd0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130dd0f je 0x1130dd2e */
  if (C.zf) goto L_1130dd2e;
  /* 1130dd11 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1130dd14 push ecx */
  push32((uint32_t)(ECX));
  /* 1130dd15 call 0x1130e3a0 */
  push32(0x1130dd1au); f_1130e3a0();
  /* 1130dd1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dd1d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1130dd23 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1130dd29 jmp 0x1130ddbf */
  goto L_1130ddbf;
L_1130dd2e:;
  /* 1130dd2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dd31 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1130dd34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130dd36 je 0x1130dd80 */
  if (C.zf) goto L_1130dd80;
  /* 1130dd38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dd3b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1130dd3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130dd40 je 0x1130dd60 */
  if (C.zf) goto L_1130dd60;
  /* 1130dd42 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1130dd45 push ecx */
  push32((uint32_t)(ECX));
  /* 1130dd46 call 0x1130e380 */
  push32(0x1130dd4bu); f_1130e380();
  /* 1130dd4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dd4e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1130dd51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1130dd52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1130dd58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1130dd5e jmp 0x1130dd7e */
  goto L_1130dd7e;
L_1130dd60:;
  /* 1130dd60 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1130dd63 push edx */
  push32((uint32_t)(EDX));
  /* 1130dd64 call 0x1130e380 */
  push32(0x1130dd69u); f_1130e380();
  /* 1130dd69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dd6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130dd71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1130dd72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1130dd78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1130dd7e:;
  /* 1130dd7e jmp 0x1130ddbf */
  goto L_1130ddbf;
L_1130dd80:;
  /* 1130dd80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dd83 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1130dd86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130dd88 je 0x1130dda5 */
  if (C.zf) goto L_1130dda5;
  /* 1130dd8a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1130dd8d push ecx */
  push32((uint32_t)(ECX));
  /* 1130dd8e call 0x1130e380 */
  push32(0x1130dd93u); f_1130e380();
  /* 1130dd93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dd96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1130dd97 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1130dd9d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1130dda3 jmp 0x1130ddbf */
  goto L_1130ddbf;
L_1130dda5:;
  /* 1130dda5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1130dda8 push edx */
  push32((uint32_t)(EDX));
  /* 1130dda9 call 0x1130e380 */
  push32(0x1130ddaeu); f_1130e380();
  /* 1130ddae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ddb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1130ddb3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1130ddb9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1130ddbf:;
  /* 1130ddbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ddc2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1130ddc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ddc7 je 0x1130de07 */
  if (C.zf) goto L_1130de07;
  /* 1130ddc9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ddd0 jg 0x1130de07 */
  if ((!C.zf&&C.sf==C.of)) goto L_1130de07;
  /* 1130ddd2 jl 0x1130dddd */
  if ((C.sf!=C.of)) goto L_1130dddd;
  /* 1130ddd4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130dddb jae 0x1130de07 */
  if (!C.cf) goto L_1130de07;
L_1130dddd:;
  /* 1130dddd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1130dde3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130dde5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1130ddeb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ddee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130ddf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1130ddf6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1130ddfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ddff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1130de02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130de05 jmp 0x1130de1f */
  goto L_1130de1f;
L_1130de07:;
  /* 1130de07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1130de0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1130de13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1130de19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1130de1f:;
  /* 1130de1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130de22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1130de28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130de2a jne 0x1130de47 */
  if (!C.zf) goto L_1130de47;
  /* 1130de2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1130de32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1130de38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1130de3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1130de41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1130de47:;
  /* 1130de47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130de4e jge 0x1130de5c */
  if ((C.sf==C.of)) goto L_1130de5c;
  /* 1130de50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1130de5a jmp 0x1130de65 */
  goto L_1130de65;
L_1130de5c:;
  /* 1130de5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130de5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1130de62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130de65:;
  /* 1130de65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1130de6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1130de71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130de73 jne 0x1130de7c */
  if (!C.zf) goto L_1130de7c;
  /* 1130de75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1130de7c:;
  /* 1130de7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1130de7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1130de82:;
  /* 1130de82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1130de88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1130de8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130de91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1130de97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130de99 jg 0x1130deaf */
  if ((!C.zf&&C.sf==C.of)) goto L_1130deaf;
  /* 1130de9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1130dea1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1130dea7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130dea9 je 0x1130df30 */
  if (C.zf) goto L_1130df30;
L_1130deaf:;
  /* 1130deaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1130deb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1130deb6 push edx */
  push32((uint32_t)(EDX));
  /* 1130deb7 push eax */
  push32((uint32_t)(EAX));
  /* 1130deb8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1130debe push edx */
  push32((uint32_t)(EDX));
  /* 1130debf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1130dec5 push eax */
  push32((uint32_t)(EAX));
  /* 1130dec6 call 0x1130d240 */
  push32(0x1130decbu); f_1130d240();
  /* 1130decb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130dece mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1130ded4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1130deda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1130dedb push edx */
  push32((uint32_t)(EDX));
  /* 1130dedc push eax */
  push32((uint32_t)(EAX));
  /* 1130dedd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1130dee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130dee4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1130deea push edx */
  push32((uint32_t)(EDX));
  /* 1130deeb call 0x1130d1d0 */
  push32(0x1130def0u); f_1130d1d0();
  /* 1130def0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1130def6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1130defc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130df03 jle 0x1130df17 */
  if ((C.zf||C.sf!=C.of)) goto L_1130df17;
  /* 1130df05 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1130df0b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130df11 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1130df17:;
  /* 1130df17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130df1a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1130df20 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1130df22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130df25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130df28 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130df2b jmp 0x1130de82 */
  goto L_1130de82;
L_1130df30:;
  /* 1130df30 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1130df33 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130df36 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1130df39 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130df3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130df3f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1130df42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130df45 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1130df4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130df4c je 0x1130df77 */
  if (C.zf) goto L_1130df77;
  /* 1130df4e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130df51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1130df54 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130df57 jne 0x1130df5f */
  if (!C.zf) goto L_1130df5f;
  /* 1130df59 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130df5d jne 0x1130df77 */
  if (!C.zf) goto L_1130df77;
L_1130df5f:;
  /* 1130df5f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130df62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130df65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130df68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130df6b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1130df6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130df71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130df74 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1130df77:;
  /* 1130df77 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130df7e jne 0x1130e152 */
  if (!C.zf) goto L_1130e152;
  /* 1130df84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130df87 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1130df8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130df8c je 0x1130dfdd */
  if (C.zf) goto L_1130dfdd;
  /* 1130df8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130df91 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1130df97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130df99 je 0x1130dfab */
  if (C.zf) goto L_1130dfab;
  /* 1130df9b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1130dfa2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1130dfa9 jmp 0x1130dfdd */
  goto L_1130dfdd;
L_1130dfab:;
  /* 1130dfab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dfae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130dfb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130dfb3 je 0x1130dfc5 */
  if (C.zf) goto L_1130dfc5;
  /* 1130dfb5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1130dfbc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1130dfc3 jmp 0x1130dfdd */
  goto L_1130dfdd;
L_1130dfc5:;
  /* 1130dfc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dfc8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1130dfcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130dfcd je 0x1130dfdd */
  if (C.zf) goto L_1130dfdd;
  /* 1130dfcf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1130dfd6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1130dfdd:;
  /* 1130dfdd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1130dfe3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130dfe6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130dfe9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1130dfef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130dff2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1130dff5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130dff7 jne 0x1130e015 */
  if (!C.zf) goto L_1130e015;
  /* 1130dff9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1130dfff push eax */
  push32((uint32_t)(EAX));
  /* 1130e000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e003 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e004 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1130e00a push edx */
  push32((uint32_t)(EDX));
  /* 1130e00b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1130e00d call 0x1130e2f0 */
  push32(0x1130e012u); f_1130e2f0();
  /* 1130e012 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130e015:;
  /* 1130e015 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1130e01b push eax */
  push32((uint32_t)(EAX));
  /* 1130e01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e01f push ecx */
  push32((uint32_t)(ECX));
  /* 1130e020 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130e023 push edx */
  push32((uint32_t)(EDX));
  /* 1130e024 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1130e02a push eax */
  push32((uint32_t)(EAX));
  /* 1130e02b call 0x1130e330 */
  push32(0x1130e030u); f_1130e330();
  /* 1130e030 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130e036 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1130e039 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130e03b je 0x1130e063 */
  if (C.zf) goto L_1130e063;
  /* 1130e03d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130e040 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1130e043 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130e045 jne 0x1130e063 */
  if (!C.zf) goto L_1130e063;
  /* 1130e047 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1130e04d push eax */
  push32((uint32_t)(EAX));
  /* 1130e04e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e051 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e052 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1130e058 push edx */
  push32((uint32_t)(EDX));
  /* 1130e059 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1130e05b call 0x1130e2f0 */
  push32(0x1130e060u); f_1130e2f0();
  /* 1130e060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130e063:;
  /* 1130e063 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e067 je 0x1130e111 */
  if (C.zf) goto L_1130e111;
  /* 1130e06d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e071 jle 0x1130e111 */
  if ((C.zf||C.sf!=C.of)) goto L_1130e111;
  /* 1130e077 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130e07a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1130e080 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130e083 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1130e089:;
  /* 1130e089 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1130e08f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1130e095 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e098 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1130e09e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130e0a0 je 0x1130e10f */
  if (C.zf) goto L_1130e10f;
  /* 1130e0a2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1130e0a8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1130e0ab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1130e0b2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1130e0b9 push eax */
  push32((uint32_t)(EAX));
  /* 1130e0ba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1130e0c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e0c1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1130e0c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e0ca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1130e0d0 call 0x1130f4a0 */
  push32(0x1130e0d5u); f_1130f4a0();
  /* 1130e0d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e0d8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1130e0de cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e0e5 jg 0x1130e0e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1130e0e9;
  /* 1130e0e7 jmp 0x1130e10f */
  goto L_1130e10f;
L_1130e0e9:;
  /* 1130e0e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1130e0ef push eax */
  push32((uint32_t)(EAX));
  /* 1130e0f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e0f4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1130e0fa push edx */
  push32((uint32_t)(EDX));
  /* 1130e0fb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1130e101 push eax */
  push32((uint32_t)(EAX));
  /* 1130e102 call 0x1130e330 */
  push32(0x1130e107u); f_1130e330();
  /* 1130e107 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e10a jmp 0x1130e089 */
  goto L_1130e089;
L_1130e10f:;
  /* 1130e10f jmp 0x1130e12c */
  goto L_1130e12c;
L_1130e111:;
  /* 1130e111 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1130e117 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e118 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e11b push edx */
  push32((uint32_t)(EDX));
  /* 1130e11c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130e11f push eax */
  push32((uint32_t)(EAX));
  /* 1130e120 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130e123 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e124 call 0x1130e330 */
  push32(0x1130e129u); f_1130e330();
  /* 1130e129 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130e12c:;
  /* 1130e12c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130e12f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1130e132 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130e134 je 0x1130e152 */
  if (C.zf) goto L_1130e152;
  /* 1130e136 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1130e13c push eax */
  push32((uint32_t)(EAX));
  /* 1130e13d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e140 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e141 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1130e147 push edx */
  push32((uint32_t)(EDX));
  /* 1130e148 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1130e14a call 0x1130e2f0 */
  push32(0x1130e14fu); f_1130e2f0();
  /* 1130e14f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130e152:;
  /* 1130e152 jmp 0x1130d564 */
  goto L_1130d564;
L_1130e157:;
  /* 1130e157 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1130e15d pop edi */
  EDI = (pop32());
  /* 1130e15e pop esi */
  ESI = (pop32());
  /* 1130e15f pop ebx */
  EBX = (pop32());
  /* 1130e160 mov esp, ebp */
  ESP = (EBP);
  /* 1130e162 pop ebp */
  EBP = (pop32());
  /* 1130e163 ret  */
  ESPCHK(0x1130d540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x1130e270 (119 bytes, 44 insns) */
void f_1130e270(void) {
  FTRACE(0x1130e270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e270 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e271 mov ebp, esp */
  EBP = (ESP);
  /* 1130e273 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e274 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e277 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1130e27a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e27d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e280 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1130e283 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e286 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e28a jl 0x1130e2b2 */
  if ((C.sf!=C.of)) goto L_1130e2b2;
  /* 1130e28c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e28f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1130e291 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1130e294 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1130e296 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1130e29a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1130e2a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130e2a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e2a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130e2a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e2ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e2ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1130e2b0 jmp 0x1130e2c5 */
  goto L_1130e2c5;
L_1130e2b2:;
  /* 1130e2b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e2b5 push edx */
  push32((uint32_t)(EDX));
  /* 1130e2b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e2b9 push eax */
  push32((uint32_t)(EAX));
  /* 1130e2ba call 0x1130d2c0 */
  push32(0x1130e2bfu); f_1130d2c0();
  /* 1130e2bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e2c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130e2c5:;
  /* 1130e2c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e2c9 jne 0x1130e2d6 */
  if (!C.zf) goto L_1130e2d6;
  /* 1130e2cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e2ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1130e2d4 jmp 0x1130e2e3 */
  goto L_1130e2e3;
L_1130e2d6:;
  /* 1130e2d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e2d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1130e2db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e2de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e2e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1130e2e3:;
  /* 1130e2e3 mov esp, ebp */
  ESP = (EBP);
  /* 1130e2e5 pop ebp */
  EBP = (pop32());
  /* 1130e2e6 ret  */
  ESPCHK(0x1130e270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x1130e2f0 (53 bytes, 23 insns) */
void f_1130e2f0(void) {
  FTRACE(0x1130e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e2f1 mov ebp, esp */
  EBP = (ESP);
L_1130e2f3:;
  /* 1130e2f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e2f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e2f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e2fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1130e2ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130e301 jle 0x1130e323 */
  if ((C.zf||C.sf!=C.of)) goto L_1130e323;
  /* 1130e303 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130e306 push edx */
  push32((uint32_t)(EDX));
  /* 1130e307 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e30a push eax */
  push32((uint32_t)(EAX));
  /* 1130e30b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e30e push ecx */
  push32((uint32_t)(ECX));
  /* 1130e30f call 0x1130e270 */
  push32(0x1130e314u); f_1130e270();
  /* 1130e314 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e317 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130e31a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e31d jne 0x1130e321 */
  if (!C.zf) goto L_1130e321;
  /* 1130e31f jmp 0x1130e323 */
  goto L_1130e323;
L_1130e321:;
  /* 1130e321 jmp 0x1130e2f3 */
  goto L_1130e2f3;
L_1130e323:;
  /* 1130e323 pop ebp */
  EBP = (pop32());
  /* 1130e324 ret  */
  ESPCHK(0x1130e2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x1130e330 (74 bytes, 31 insns) */
void f_1130e330(void) {
  FTRACE(0x1130e330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e330 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e331 mov ebp, esp */
  EBP = (ESP);
  /* 1130e333 push ecx */
  push32((uint32_t)(ECX));
L_1130e334:;
  /* 1130e334 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e337 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e33a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e33d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1130e340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130e342 jle 0x1130e376 */
  if ((C.zf||C.sf!=C.of)) goto L_1130e376;
  /* 1130e344 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130e347 push edx */
  push32((uint32_t)(EDX));
  /* 1130e348 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e34b push eax */
  push32((uint32_t)(EAX));
  /* 1130e34c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e34f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1130e352 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130e355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130e358 push eax */
  push32((uint32_t)(EAX));
  /* 1130e359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e35c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e35f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1130e362 call 0x1130e270 */
  push32(0x1130e367u); f_1130e270();
  /* 1130e367 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e36a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130e36d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e370 jne 0x1130e374 */
  if (!C.zf) goto L_1130e374;
  /* 1130e372 jmp 0x1130e376 */
  goto L_1130e376;
L_1130e374:;
  /* 1130e374 jmp 0x1130e334 */
  goto L_1130e334;
L_1130e376:;
  /* 1130e376 mov esp, ebp */
  ESP = (EBP);
  /* 1130e378 pop ebp */
  EBP = (pop32());
  /* 1130e379 ret  */
  ESPCHK(0x1130e330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x1130e380 (26 bytes, 12 insns) */
void f_1130e380(void) {
  FTRACE(0x1130e380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e380 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e381 mov ebp, esp */
  EBP = (ESP);
  /* 1130e383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e386 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130e388 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e38b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e38e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1130e390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e393 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130e395 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1130e398 pop ebp */
  EBP = (pop32());
  /* 1130e399 ret  */
  ESPCHK(0x1130e380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x1130e3a0 (31 bytes, 14 insns) */
void f_1130e3a0(void) {
  FTRACE(0x1130e3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1130e3a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e3a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130e3a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e3ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e3ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1130e3b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e3b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130e3b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e3b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1130e3ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1130e3bd pop ebp */
  EBP = (pop32());
  /* 1130e3be ret  */
  ESPCHK(0x1130e3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x1130e3c0 (27 bytes, 12 insns) */
void f_1130e3c0(void) {
  FTRACE(0x1130e3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1130e3c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e3c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130e3c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e3cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e3ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1130e3d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e3d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1130e3d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1130e3d9 pop ebp */
  EBP = (pop32());
  /* 1130e3da ret  */
  ESPCHK(0x1130e3c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1130e3e0 (145 bytes, 42 insns) */
void f_1130e3e0(void) {
  FTRACE(0x1130e3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1130e3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e3e4 call 0x1130e490 */
  push32(0x1130e3e9u); f_1130e490();
  /* 1130e3e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e3ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1130e3ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130e3f5 jmp 0x1130e400 */
  goto L_1130e400;
L_1130e3f7:;
  /* 1130e3f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130e3fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e3fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130e400:;
  /* 1130e400 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e404 jae 0x1130e42a */
  if (!C.cf) goto L_1130e42a;
  /* 1130e406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130e409 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e40c cmp ecx, dword ptr [eax*8 + 0x11330fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11330fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e413 jne 0x1130e428 */
  if (!C.zf) goto L_1130e428;
  /* 1130e415 call 0x1130e480 */
  push32(0x1130e41au); f_1130e480();
  /* 1130e41a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130e41d mov ecx, dword ptr [edx*8 + 0x11330fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11330fbc)));
  /* 1130e424 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1130e426 jmp 0x1130e46d */
  goto L_1130e46d;
L_1130e428:;
  /* 1130e428 jmp 0x1130e3f7 */
  goto L_1130e3f7;
L_1130e42a:;
  /* 1130e42a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e42e jb 0x1130e443 */
  if (C.cf) goto L_1130e443;
  /* 1130e430 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e434 ja 0x1130e443 */
  if ((!C.cf&&!C.zf)) goto L_1130e443;
  /* 1130e436 call 0x1130e480 */
  push32(0x1130e43bu); f_1130e480();
  /* 1130e43b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1130e441 jmp 0x1130e46d */
  goto L_1130e46d;
L_1130e443:;
  /* 1130e443 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e44a jb 0x1130e462 */
  if (C.cf) goto L_1130e462;
  /* 1130e44c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e453 ja 0x1130e462 */
  if ((!C.cf&&!C.zf)) goto L_1130e462;
  /* 1130e455 call 0x1130e480 */
  push32(0x1130e45au); f_1130e480();
  /* 1130e45a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1130e460 jmp 0x1130e46d */
  goto L_1130e46d;
L_1130e462:;
  /* 1130e462 call 0x1130e480 */
  push32(0x1130e467u); f_1130e480();
  /* 1130e467 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1130e46d:;
  /* 1130e46d mov esp, ebp */
  ESP = (EBP);
  /* 1130e46f pop ebp */
  EBP = (pop32());
  /* 1130e470 ret  */
  ESPCHK(0x1130e3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e480 @ 0x1130e480 (13 bytes, 6 insns) */
void f_1130e480(void) {
  FTRACE(0x1130e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e480 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e481 mov ebp, esp */
  EBP = (ESP);
  /* 1130e483 call 0x11305ff0 */
  push32(0x1130e488u); f_11305ff0();
  /* 1130e488 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e48b pop ebp */
  EBP = (pop32());
  /* 1130e48c ret  */
  ESPCHK(0x1130e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x1130e490 (13 bytes, 6 insns) */
void f_1130e490(void) {
  FTRACE(0x1130e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e490 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e491 mov ebp, esp */
  EBP = (ESP);
  /* 1130e493 call 0x11305ff0 */
  push32(0x1130e498u); f_11305ff0();
  /* 1130e498 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e49b pop ebp */
  EBP = (pop32());
  /* 1130e49c ret  */
  ESPCHK(0x1130e490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4a0 @ 0x1130e4a0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1130e4a0(void) {
  FTRACE(0x1130e4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1130e4a3 push edi */
  push32((uint32_t)(EDI));
  /* 1130e4a4 push esi */
  push32((uint32_t)(ESI));
  /* 1130e4a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e4a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e4ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e4ae mov eax, ecx */
  EAX = (ECX);
  /* 1130e4b0 mov edx, ecx */
  EDX = (ECX);
  /* 1130e4b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e4b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e4b6 jbe 0x1130e4c0 */
  if ((C.cf||C.zf)) goto L_1130e4c0;
  /* 1130e4b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e4ba jb 0x1130e638 */
  if (C.cf) goto L_1130e638;
L_1130e4c0:;
  /* 1130e4c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1130e4c6 jne 0x1130e4dc */
  if (!C.zf) goto L_1130e4dc;
  /* 1130e4c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e4cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1130e4ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e4d1 jb 0x1130e4fc */
  if (C.cf) goto L_1130e4fc;
  /* 1130e4d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e4d5 jmp dword ptr [edx*4 + 0x1130e5e8] */
  switch (EDX) {
    case 0: goto L_1130e5f8;
    case 1: goto L_1130e600;
    case 2: goto L_1130e60c;
    case 3: goto L_1130e620;
    default: x86_unimpl("switch@0x1130e4d5 out of table"); return;
  }
L_1130e4dc:;
  /* 1130e4dc mov eax, edi */
  EAX = (EDI);
  /* 1130e4de mov edx, 3 */
  EDX = (0x3u);
  /* 1130e4e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e4e6 jb 0x1130e4f4 */
  if (C.cf) goto L_1130e4f4;
  /* 1130e4e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1130e4eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e4ed jmp dword ptr [eax*4 + 0x1130e500] */
  switch (EAX) {
    case 1: goto L_1130e510;
    case 2: goto L_1130e53c;
    case 3: goto L_1130e560;
    default: x86_unimpl("switch@0x1130e4ed out of table"); return;
  }
L_1130e4f4:;
  /* 1130e4f4 jmp dword ptr [ecx*4 + 0x1130e5f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1130e5f8)))); return;
  /* 1130e4fb nop  */
  /* nop */
L_1130e4fc:;
  /* 1130e4fc jmp dword ptr [ecx*4 + 0x1130e57c] */
  switch (ECX) {
    case 0: goto L_1130e5df;
    case 1: goto L_1130e5cc;
    case 2: goto L_1130e5c4;
    case 3: goto L_1130e5bc;
    case 4: goto L_1130e5b4;
    case 5: goto L_1130e5ac;
    case 6: goto L_1130e5a4;
    case 7: goto L_1130e59c;
    default: x86_unimpl("switch@0x1130e4fc out of table"); return;
  }
  /* 1130e503 nop  */
  /* nop */
L_1130e510:;
  /* 1130e510 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130e512 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130e514 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130e516 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130e519 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130e51c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130e51f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e522 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130e525 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e528 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e52b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e52e jb 0x1130e4fc */
  if (C.cf) goto L_1130e4fc;
  /* 1130e530 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e532 jmp dword ptr [edx*4 + 0x1130e5e8] */
  switch (EDX) {
    case 0: goto L_1130e5f8;
    case 1: goto L_1130e600;
    case 2: goto L_1130e60c;
    case 3: goto L_1130e620;
    default: x86_unimpl("switch@0x1130e532 out of table"); return;
  }
  /* 1130e539 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130e53c:;
  /* 1130e53c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130e53e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130e540 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130e542 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130e545 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e548 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130e54b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e54e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e551 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e554 jb 0x1130e4fc */
  if (C.cf) goto L_1130e4fc;
  /* 1130e556 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e558 jmp dword ptr [edx*4 + 0x1130e5e8] */
  switch (EDX) {
    case 0: goto L_1130e5f8;
    case 1: goto L_1130e600;
    case 2: goto L_1130e60c;
    case 3: goto L_1130e620;
    default: x86_unimpl("switch@0x1130e558 out of table"); return;
  }
  /* 1130e55f nop  */
  /* nop */
L_1130e560:;
  /* 1130e560 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130e562 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130e564 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130e566 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1130e567 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e56a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1130e56b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e56e jb 0x1130e4fc */
  if (C.cf) goto L_1130e4fc;
  /* 1130e570 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e572 jmp dword ptr [edx*4 + 0x1130e5e8] */
  switch (EDX) {
    case 0: goto L_1130e5f8;
    case 1: goto L_1130e600;
    case 2: goto L_1130e60c;
    case 3: goto L_1130e620;
    default: x86_unimpl("switch@0x1130e572 out of table"); return;
  }
  /* 1130e579 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130e59c:;
  /* 1130e59c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1130e5a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1130e5a4:;
  /* 1130e5a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1130e5a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1130e5ac:;
  /* 1130e5ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1130e5b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1130e5b4:;
  /* 1130e5b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1130e5b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1130e5bc:;
  /* 1130e5bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1130e5c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1130e5c4:;
  /* 1130e5c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1130e5c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1130e5cc:;
  /* 1130e5cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1130e5d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1130e5d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1130e5db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e5dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1130e5df:;
  /* 1130e5df jmp dword ptr [edx*4 + 0x1130e5e8] */
  switch (EDX) {
    case 0: goto L_1130e5f8;
    case 1: goto L_1130e600;
    case 2: goto L_1130e60c;
    case 3: goto L_1130e620;
    default: x86_unimpl("switch@0x1130e5df out of table"); return;
  }
  /* 1130e5e6 mov edi, edi */
  EDI = (EDI);
L_1130e5f8:;
  /* 1130e5f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e5fb pop esi */
  ESI = (pop32());
  /* 1130e5fc pop edi */
  EDI = (pop32());
  /* 1130e5fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e5fe ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
  /* 1130e5ff nop  */
  /* nop */
L_1130e600:;
  /* 1130e600 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130e602 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130e604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e607 pop esi */
  ESI = (pop32());
  /* 1130e608 pop edi */
  EDI = (pop32());
  /* 1130e609 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e60a ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
  /* 1130e60b nop  */
  /* nop */
L_1130e60c:;
  /* 1130e60c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130e60e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130e610 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130e613 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130e616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e619 pop esi */
  ESI = (pop32());
  /* 1130e61a pop edi */
  EDI = (pop32());
  /* 1130e61b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e61c ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
  /* 1130e61d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130e620:;
  /* 1130e620 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1130e622 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1130e624 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130e627 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130e62a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130e62d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130e630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e633 pop esi */
  ESI = (pop32());
  /* 1130e634 pop edi */
  EDI = (pop32());
  /* 1130e635 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e636 ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
  /* 1130e637 nop  */
  /* nop */
L_1130e638:;
  /* 1130e638 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1130e63c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1130e640 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1130e646 jne 0x1130e66c */
  if (!C.zf) goto L_1130e66c;
  /* 1130e648 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e64b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1130e64e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e651 jb 0x1130e660 */
  if (C.cf) goto L_1130e660;
  /* 1130e653 std  */
  C.df=1;
  /* 1130e654 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e656 cld  */
  C.df=0;
  /* 1130e657 jmp dword ptr [edx*4 + 0x1130e780] */
  switch (EDX) {
    case 0: goto L_1130e790;
    case 1: goto L_1130e798;
    case 2: goto L_1130e7a8;
    case 3: goto L_1130e7bc;
    default: x86_unimpl("switch@0x1130e657 out of table"); return;
  }
  /* 1130e65e mov edi, edi */
  EDI = (EDI);
L_1130e660:;
  /* 1130e660 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130e662 jmp dword ptr [ecx*4 + 0x1130e730] */
  switch (ECX) {
    case 0: goto L_1130e777;
    default: x86_unimpl("switch@0x1130e662 out of table"); return;
  }
  /* 1130e669 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130e66c:;
  /* 1130e66c mov eax, edi */
  EAX = (EDI);
  /* 1130e66e mov edx, 3 */
  EDX = (0x3u);
  /* 1130e673 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e676 jb 0x1130e684 */
  if (C.cf) goto L_1130e684;
  /* 1130e678 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1130e67b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e67d jmp dword ptr [eax*4 + 0x1130e688] */
  switch (EAX) {
    case 1: goto L_1130e698;
    case 2: goto L_1130e6b8;
    case 3: goto L_1130e6e0;
    default: x86_unimpl("switch@0x1130e67d out of table"); return;
  }
L_1130e684:;
  /* 1130e684 jmp dword ptr [ecx*4 + 0x1130e780] */
  switch (ECX) {
    case 0: goto L_1130e790;
    case 1: goto L_1130e798;
    case 2: goto L_1130e7a8;
    case 3: goto L_1130e7bc;
    default: x86_unimpl("switch@0x1130e684 out of table"); return;
  }
  /* 1130e68b nop  */
  /* nop */
L_1130e698:;
  /* 1130e698 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130e69b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130e69d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130e6a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1130e6a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e6a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1130e6a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e6a8 jb 0x1130e660 */
  if (C.cf) goto L_1130e660;
  /* 1130e6aa std  */
  C.df=1;
  /* 1130e6ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e6ad cld  */
  C.df=0;
  /* 1130e6ae jmp dword ptr [edx*4 + 0x1130e780] */
  switch (EDX) {
    case 0: goto L_1130e790;
    case 1: goto L_1130e798;
    case 2: goto L_1130e7a8;
    case 3: goto L_1130e7bc;
    default: x86_unimpl("switch@0x1130e6ae out of table"); return;
  }
  /* 1130e6b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130e6b8:;
  /* 1130e6b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130e6bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130e6bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130e6c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130e6c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e6c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130e6c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e6cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e6cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e6d2 jb 0x1130e660 */
  if (C.cf) goto L_1130e660;
  /* 1130e6d4 std  */
  C.df=1;
  /* 1130e6d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e6d7 cld  */
  C.df=0;
  /* 1130e6d8 jmp dword ptr [edx*4 + 0x1130e780] */
  switch (EDX) {
    case 0: goto L_1130e790;
    case 1: goto L_1130e798;
    case 2: goto L_1130e7a8;
    case 3: goto L_1130e7bc;
    default: x86_unimpl("switch@0x1130e6d8 out of table"); return;
  }
  /* 1130e6df nop  */
  /* nop */
L_1130e6e0:;
  /* 1130e6e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130e6e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1130e6e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130e6e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130e6eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130e6ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130e6f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1130e6f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130e6f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e6fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e6fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e700 jb 0x1130e660 */
  if (C.cf) goto L_1130e660;
  /* 1130e706 std  */
  C.df=1;
  /* 1130e707 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1130e709 cld  */
  C.df=0;
  /* 1130e70a jmp dword ptr [edx*4 + 0x1130e780] */
  switch (EDX) {
    case 0: goto L_1130e790;
    case 1: goto L_1130e798;
    case 2: goto L_1130e7a8;
    case 3: goto L_1130e7bc;
    default: x86_unimpl("switch@0x1130e70a out of table"); return;
  }
  /* 1130e711 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1130e714 xor al, 0xe7 */
  { uint32_t _r=(AL)^(0xe7u); AL = (_r); fl_logic(_r,8); }
  /* 1130e716 xor byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1130e718 cmp al, 0xe7 */
  { uint32_t _a=(AL),_b=(0xe7u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1130e71a xor byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1130e71c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1130e71d out 0x30, eax */
  x86_unimpl("out @ 0x1130e71d");
  /* 1130e71f adc dword ptr [edi + 0x30], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x30))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x30), (_r)); fl_add(_a,_b,_r,32); }
  /* 1130e723 adc dword ptr [edi + 0x30], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x30))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x30), (_r)); fl_add(_a,_b,_r,32); }
  /* 1130e727 adc dword ptr [edi + 0x30], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x30))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x30), (_r)); fl_add(_a,_b,_r,32); }
  /* 1130e72b adc dword ptr [edi + 0x30], esp */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x30))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x30), (_r)); fl_add(_a,_b,_r,32); }
  /* 1130e734 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1130e738 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1130e73c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1130e740 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1130e744 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1130e748 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1130e74c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1130e750 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1130e754 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1130e758 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1130e75c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1130e760 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1130e764 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1130e768 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1130e76c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1130e773 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e775 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1130e777:;
  /* 1130e777 jmp dword ptr [edx*4 + 0x1130e780] */
  switch (EDX) {
    case 0: goto L_1130e790;
    case 1: goto L_1130e798;
    case 2: goto L_1130e7a8;
    case 3: goto L_1130e7bc;
    default: x86_unimpl("switch@0x1130e777 out of table"); return;
  }
  /* 1130e77e mov edi, edi */
  EDI = (EDI);
L_1130e790:;
  /* 1130e790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e793 pop esi */
  ESI = (pop32());
  /* 1130e794 pop edi */
  EDI = (pop32());
  /* 1130e795 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e796 ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
  /* 1130e797 nop  */
  /* nop */
L_1130e798:;
  /* 1130e798 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130e79b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130e79e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e7a1 pop esi */
  ESI = (pop32());
  /* 1130e7a2 pop edi */
  EDI = (pop32());
  /* 1130e7a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e7a4 ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
  /* 1130e7a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1130e7a8:;
  /* 1130e7a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130e7ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130e7ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130e7b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130e7b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e7b7 pop esi */
  ESI = (pop32());
  /* 1130e7b8 pop edi */
  EDI = (pop32());
  /* 1130e7b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e7ba ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
  /* 1130e7bb nop  */
  /* nop */
L_1130e7bc:;
  /* 1130e7bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1130e7bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1130e7c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1130e7c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1130e7c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1130e7cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1130e7ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e7d1 pop esi */
  ESI = (pop32());
  /* 1130e7d2 pop edi */
  EDI = (pop32());
  /* 1130e7d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1130e7d4 ret  */
  ESPCHK(0x1130e4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7e0 @ 0x1130e7e0 (421 bytes, 148 insns) */
void f_1130e7e0(void) {
  FTRACE(0x1130e7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1130e7e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1130e7e5 push 0x1132e3d0 */
  push32((uint32_t)(0x1132e3d0u));
  /* 1130e7ea push 0x1130f6b8 */
  push32((uint32_t)(0x1130f6b8u));
  /* 1130e7ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1130e7f5 push eax */
  push32((uint32_t)(EAX));
  /* 1130e7f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1130e7fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e800 push ebx */
  push32((uint32_t)(EBX));
  /* 1130e801 push esi */
  push32((uint32_t)(ESI));
  /* 1130e802 push edi */
  push32((uint32_t)(EDI));
  /* 1130e803 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1130e806 cmp dword ptr [0x1133297c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1133297c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e80d jne 0x1130e85e */
  if (!C.zf) goto L_1130e85e;
  /* 1130e80f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1130e812 push eax */
  push32((uint32_t)(EAX));
  /* 1130e813 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130e815 push 0x1132e3cc */
  push32((uint32_t)(0x1132e3ccu));
  /* 1130e81a push 1 */
  push32((uint32_t)(0x1u));
  /* 1130e81c call dword ptr [0x11335324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335324))), 0x1130e822u);
  /* 1130e822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130e824 je 0x1130e832 */
  if (C.zf) goto L_1130e832;
  /* 1130e826 mov dword ptr [0x1133297c], 1 */
  w32((uint32_t)(0x1133297c), (0x1u));
  /* 1130e830 jmp 0x1130e85e */
  goto L_1130e85e;
L_1130e832:;
  /* 1130e832 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1130e835 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e836 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130e838 push 0x1132e3c8 */
  push32((uint32_t)(0x1132e3c8u));
  /* 1130e83d push 1 */
  push32((uint32_t)(0x1u));
  /* 1130e83f push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e841 call dword ptr [0x11335334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335334))), 0x1130e847u);
  /* 1130e847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130e849 je 0x1130e857 */
  if (C.zf) goto L_1130e857;
  /* 1130e84b mov dword ptr [0x1133297c], 2 */
  w32((uint32_t)(0x1133297c), (0x2u));
  /* 1130e855 jmp 0x1130e85e */
  goto L_1130e85e;
L_1130e857:;
  /* 1130e857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130e859 jmp 0x1130e988 */
  goto L_1130e988;
L_1130e85e:;
  /* 1130e85e cmp dword ptr [0x1133297c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1133297c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e865 jne 0x1130e895 */
  if (!C.zf) goto L_1130e895;
  /* 1130e867 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e86b jne 0x1130e876 */
  if (!C.zf) goto L_1130e876;
  /* 1130e86d mov edx, dword ptr [0x11332988] */
  EDX = (r32((uint32_t)(0x11332988)));
  /* 1130e873 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1130e876:;
  /* 1130e876 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130e879 push eax */
  push32((uint32_t)(EAX));
  /* 1130e87a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e87d push ecx */
  push32((uint32_t)(ECX));
  /* 1130e87e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e881 push edx */
  push32((uint32_t)(EDX));
  /* 1130e882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e885 push eax */
  push32((uint32_t)(EAX));
  /* 1130e886 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1130e889 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e88a call dword ptr [0x11335334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335334))), 0x1130e890u);
  /* 1130e890 jmp 0x1130e988 */
  goto L_1130e988;
L_1130e895:;
  /* 1130e895 cmp dword ptr [0x1133297c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1133297c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e89c jne 0x1130e986 */
  if (!C.zf) goto L_1130e986;
  /* 1130e8a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e8a6 jne 0x1130e8b1 */
  if (!C.zf) goto L_1130e8b1;
  /* 1130e8a8 mov edx, dword ptr [0x11332998] */
  EDX = (r32((uint32_t)(0x11332998)));
  /* 1130e8ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1130e8b1:;
  /* 1130e8b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e8b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e8b8 push eax */
  push32((uint32_t)(EAX));
  /* 1130e8b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e8bc push ecx */
  push32((uint32_t)(ECX));
  /* 1130e8bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1130e8c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130e8c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130e8c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1130e8c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e8ca push edx */
  push32((uint32_t)(EDX));
  /* 1130e8cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1130e8ce push eax */
  push32((uint32_t)(EAX));
  /* 1130e8cf call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x1130e8d5u);
  /* 1130e8d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1130e8d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e8dc jne 0x1130e8e5 */
  if (!C.zf) goto L_1130e8e5;
  /* 1130e8de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130e8e0 jmp 0x1130e988 */
  goto L_1130e988;
L_1130e8e5:;
  /* 1130e8e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130e8ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130e8ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1130e8f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e8f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1130e8f6 call 0x11309750 */
  push32(0x1130e8fbu); f_11309750();
  /* 1130e8fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1130e8fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1130e901 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130e904 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1130e907 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130e90a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1130e90c push edx */
  push32((uint32_t)(EDX));
  /* 1130e90d push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e90f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130e912 push eax */
  push32((uint32_t)(EAX));
  /* 1130e913 call 0x1130a320 */
  push32(0x1130e918u); f_1130a320();
  /* 1130e918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e91b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1130e922 jmp 0x1130e93b */
  goto L_1130e93b;
  /* 1130e924 mov eax, 1 */
  EAX = (0x1u);
  /* 1130e929 ret  */
  ESPCHK(0x1130e7e0u, _esp0);
  ESP += 4; return;
  /* 1130e92a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1130e92d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1130e934 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1130e93b:;
  /* 1130e93b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e93f jne 0x1130e945 */
  if (!C.zf) goto L_1130e945;
  /* 1130e941 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130e943 jmp 0x1130e988 */
  goto L_1130e988;
L_1130e945:;
  /* 1130e945 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130e948 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e949 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130e94c push edx */
  push32((uint32_t)(EDX));
  /* 1130e94d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130e950 push eax */
  push32((uint32_t)(EAX));
  /* 1130e951 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130e954 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e955 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130e957 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1130e95a push edx */
  push32((uint32_t)(EDX));
  /* 1130e95b call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x1130e961u);
  /* 1130e961 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130e964 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e968 jne 0x1130e96e */
  if (!C.zf) goto L_1130e96e;
  /* 1130e96a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130e96c jmp 0x1130e988 */
  goto L_1130e988;
L_1130e96e:;
  /* 1130e96e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130e971 push eax */
  push32((uint32_t)(EAX));
  /* 1130e972 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130e975 push ecx */
  push32((uint32_t)(ECX));
  /* 1130e976 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130e979 push edx */
  push32((uint32_t)(EDX));
  /* 1130e97a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130e97d push eax */
  push32((uint32_t)(EAX));
  /* 1130e97e call dword ptr [0x11335324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335324))), 0x1130e984u);
  /* 1130e984 jmp 0x1130e988 */
  goto L_1130e988;
L_1130e986:;
  /* 1130e986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130e988:;
  /* 1130e988 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1130e98b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130e98e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1130e995 pop edi */
  EDI = (pop32());
  /* 1130e996 pop esi */
  ESI = (pop32());
  /* 1130e997 pop ebx */
  EBX = (pop32());
  /* 1130e998 mov esp, ebp */
  ESP = (EBP);
  /* 1130e99a pop ebp */
  EBP = (pop32());
  /* 1130e99b ret  */
  ESPCHK(0x1130e7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9a0 @ 0x1130e9a0 (727 bytes, 263 insns) */
void f_1130e9a0(void) {
  FTRACE(0x1130e9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130e9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130e9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1130e9a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1130e9a5 push 0x1132e3e0 */
  push32((uint32_t)(0x1132e3e0u));
  /* 1130e9aa push 0x1130f6b8 */
  push32((uint32_t)(0x1130f6b8u));
  /* 1130e9af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1130e9b5 push eax */
  push32((uint32_t)(EAX));
  /* 1130e9b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1130e9bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130e9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1130e9c1 push esi */
  push32((uint32_t)(ESI));
  /* 1130e9c2 push edi */
  push32((uint32_t)(EDI));
  /* 1130e9c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1130e9c6 cmp dword ptr [0x113329a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130e9cd jne 0x1130ea26 */
  if (!C.zf) goto L_1130ea26;
  /* 1130e9cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e9d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e9d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130e9d5 push 0x1132e3cc */
  push32((uint32_t)(0x1132e3ccu));
  /* 1130e9da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130e9df push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e9e1 call dword ptr [0x11335328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335328))), 0x1130e9e7u);
  /* 1130e9e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130e9e9 je 0x1130e9f7 */
  if (C.zf) goto L_1130e9f7;
  /* 1130e9eb mov dword ptr [0x113329a0], 1 */
  w32((uint32_t)(0x113329a0), (0x1u));
  /* 1130e9f5 jmp 0x1130ea26 */
  goto L_1130ea26;
L_1130e9f7:;
  /* 1130e9f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e9f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130e9fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1130e9fd push 0x1132e3c8 */
  push32((uint32_t)(0x1132e3c8u));
  /* 1130ea02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1130ea07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ea09 call dword ptr [0x11335320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335320))), 0x1130ea0fu);
  /* 1130ea0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130ea11 je 0x1130ea1f */
  if (C.zf) goto L_1130ea1f;
  /* 1130ea13 mov dword ptr [0x113329a0], 2 */
  w32((uint32_t)(0x113329a0), (0x2u));
  /* 1130ea1d jmp 0x1130ea26 */
  goto L_1130ea26;
L_1130ea1f:;
  /* 1130ea1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130ea21 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130ea26:;
  /* 1130ea26 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ea2a jle 0x1130ea3f */
  if ((C.zf||C.sf!=C.of)) goto L_1130ea3f;
  /* 1130ea2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130ea2f push eax */
  push32((uint32_t)(EAX));
  /* 1130ea30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130ea33 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ea34 call 0x1130ecb0 */
  push32(0x1130ea39u); f_1130ecb0();
  /* 1130ea39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ea3c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1130ea3f:;
  /* 1130ea3f cmp dword ptr [0x113329a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113329a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ea46 jne 0x1130ea6b */
  if (!C.zf) goto L_1130ea6b;
  /* 1130ea48 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1130ea4b push edx */
  push32((uint32_t)(EDX));
  /* 1130ea4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1130ea4f push eax */
  push32((uint32_t)(EAX));
  /* 1130ea50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130ea53 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ea54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130ea57 push edx */
  push32((uint32_t)(EDX));
  /* 1130ea58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130ea5b push eax */
  push32((uint32_t)(EAX));
  /* 1130ea5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ea5f push ecx */
  push32((uint32_t)(ECX));
  /* 1130ea60 call dword ptr [0x11335320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335320))), 0x1130ea66u);
  /* 1130ea66 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130ea6b:;
  /* 1130ea6b cmp dword ptr [0x113329a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113329a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ea72 jne 0x1130ec8f */
  if (!C.zf) goto L_1130ec8f;
  /* 1130ea78 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ea7c jne 0x1130ea87 */
  if (!C.zf) goto L_1130ea87;
  /* 1130ea7e mov edx, dword ptr [0x11332998] */
  EDX = (r32((uint32_t)(0x11332998)));
  /* 1130ea84 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1130ea87:;
  /* 1130ea87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ea89 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ea8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130ea8e push eax */
  push32((uint32_t)(EAX));
  /* 1130ea8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130ea92 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ea93 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1130ea96 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130ea98 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ea9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1130ea9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130eaa0 push edx */
  push32((uint32_t)(EDX));
  /* 1130eaa1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1130eaa4 push eax */
  push32((uint32_t)(EAX));
  /* 1130eaa5 call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x1130eaabu);
  /* 1130eaab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1130eaae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130eab2 jne 0x1130eabb */
  if (!C.zf) goto L_1130eabb;
  /* 1130eab4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130eab6 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130eabb:;
  /* 1130eabb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130eac2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130eac5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1130eac7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130eaca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1130eacc call 0x11309750 */
  push32(0x1130ead1u); f_11309750();
  /* 1130ead1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1130ead4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1130ead7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1130eada mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1130eadd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1130eae4 jmp 0x1130eafd */
  goto L_1130eafd;
  /* 1130eae6 mov eax, 1 */
  EAX = (0x1u);
  /* 1130eaeb ret  */
  ESPCHK(0x1130e9a0u, _esp0);
  ESP += 4; return;
  /* 1130eaec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1130eaef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1130eaf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1130eafd:;
  /* 1130eafd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130eb01 jne 0x1130eb0a */
  if (!C.zf) goto L_1130eb0a;
  /* 1130eb03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130eb05 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130eb0a:;
  /* 1130eb0a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130eb0d push edx */
  push32((uint32_t)(EDX));
  /* 1130eb0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130eb11 push eax */
  push32((uint32_t)(EAX));
  /* 1130eb12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1130eb15 push ecx */
  push32((uint32_t)(ECX));
  /* 1130eb16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130eb19 push edx */
  push32((uint32_t)(EDX));
  /* 1130eb1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1130eb1c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1130eb1f push eax */
  push32((uint32_t)(EAX));
  /* 1130eb20 call dword ptr [0x1133532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133532c))), 0x1130eb26u);
  /* 1130eb26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130eb28 jne 0x1130eb31 */
  if (!C.zf) goto L_1130eb31;
  /* 1130eb2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130eb2c jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130eb31:;
  /* 1130eb31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130eb33 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130eb35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130eb38 push ecx */
  push32((uint32_t)(ECX));
  /* 1130eb39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130eb3c push edx */
  push32((uint32_t)(EDX));
  /* 1130eb3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130eb40 push eax */
  push32((uint32_t)(EAX));
  /* 1130eb41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130eb44 push ecx */
  push32((uint32_t)(ECX));
  /* 1130eb45 call dword ptr [0x11335328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335328))), 0x1130eb4bu);
  /* 1130eb4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130eb4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130eb52 jne 0x1130eb5b */
  if (!C.zf) goto L_1130eb5b;
  /* 1130eb54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130eb56 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130eb5b:;
  /* 1130eb5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130eb5e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1130eb64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130eb66 je 0x1130ebab */
  if (C.zf) goto L_1130ebab;
  /* 1130eb68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130eb6c je 0x1130eba6 */
  if (C.zf) goto L_1130eba6;
  /* 1130eb6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130eb71 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130eb74 jle 0x1130eb7d */
  if ((C.zf||C.sf!=C.of)) goto L_1130eb7d;
  /* 1130eb76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130eb78 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130eb7d:;
  /* 1130eb7d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1130eb80 push ecx */
  push32((uint32_t)(ECX));
  /* 1130eb81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1130eb84 push edx */
  push32((uint32_t)(EDX));
  /* 1130eb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130eb88 push eax */
  push32((uint32_t)(EAX));
  /* 1130eb89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130eb8c push ecx */
  push32((uint32_t)(ECX));
  /* 1130eb8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130eb90 push edx */
  push32((uint32_t)(EDX));
  /* 1130eb91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130eb94 push eax */
  push32((uint32_t)(EAX));
  /* 1130eb95 call dword ptr [0x11335328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335328))), 0x1130eb9bu);
  /* 1130eb9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130eb9d jne 0x1130eba6 */
  if (!C.zf) goto L_1130eba6;
  /* 1130eb9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130eba1 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130eba6:;
  /* 1130eba6 jmp 0x1130ec8a */
  goto L_1130ec8a;
L_1130ebab:;
  /* 1130ebab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130ebae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1130ebb1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1130ebb8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ebbb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1130ebbd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ebc0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1130ebc2 call 0x11309750 */
  push32(0x1130ebc7u); f_11309750();
  /* 1130ebc7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1130ebca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1130ebcd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1130ebd0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1130ebd3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1130ebda jmp 0x1130ebf3 */
  goto L_1130ebf3;
  /* 1130ebdc mov eax, 1 */
  EAX = (0x1u);
  /* 1130ebe1 ret  */
  ESPCHK(0x1130e9a0u, _esp0);
  ESP += 4; return;
  /* 1130ebe2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1130ebe5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1130ebec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1130ebf3:;
  /* 1130ebf3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ebf7 jne 0x1130ec00 */
  if (!C.zf) goto L_1130ec00;
  /* 1130ebf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130ebfb jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130ec00:;
  /* 1130ec00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ec03 push eax */
  push32((uint32_t)(EAX));
  /* 1130ec04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130ec07 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ec08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1130ec0b push edx */
  push32((uint32_t)(EDX));
  /* 1130ec0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1130ec0f push eax */
  push32((uint32_t)(EAX));
  /* 1130ec10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130ec13 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ec14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ec17 push edx */
  push32((uint32_t)(EDX));
  /* 1130ec18 call dword ptr [0x11335328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335328))), 0x1130ec1eu);
  /* 1130ec1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130ec20 jne 0x1130ec26 */
  if (!C.zf) goto L_1130ec26;
  /* 1130ec22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130ec24 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130ec26:;
  /* 1130ec26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ec2a jne 0x1130ec5a */
  if (!C.zf) goto L_1130ec5a;
  /* 1130ec2c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ec2e push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ec30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ec32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ec34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ec37 push eax */
  push32((uint32_t)(EAX));
  /* 1130ec38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130ec3b push ecx */
  push32((uint32_t)(ECX));
  /* 1130ec3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1130ec41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1130ec44 push edx */
  push32((uint32_t)(EDX));
  /* 1130ec45 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x1130ec4bu);
  /* 1130ec4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130ec4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ec52 jne 0x1130ec58 */
  if (!C.zf) goto L_1130ec58;
  /* 1130ec54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130ec56 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130ec58:;
  /* 1130ec58 jmp 0x1130ec8a */
  goto L_1130ec8a;
L_1130ec5a:;
  /* 1130ec5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ec5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ec5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1130ec61 push eax */
  push32((uint32_t)(EAX));
  /* 1130ec62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1130ec65 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ec66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1130ec69 push edx */
  push32((uint32_t)(EDX));
  /* 1130ec6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1130ec6d push eax */
  push32((uint32_t)(EAX));
  /* 1130ec6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1130ec73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1130ec76 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ec77 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x1130ec7du);
  /* 1130ec7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1130ec80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ec84 jne 0x1130ec8a */
  if (!C.zf) goto L_1130ec8a;
  /* 1130ec86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130ec88 jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130ec8a:;
  /* 1130ec8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1130ec8d jmp 0x1130ec91 */
  goto L_1130ec91;
L_1130ec8f:;
  /* 1130ec8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130ec91:;
  /* 1130ec91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1130ec94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130ec97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1130ec9e pop edi */
  EDI = (pop32());
  /* 1130ec9f pop esi */
  ESI = (pop32());
  /* 1130eca0 pop ebx */
  EBX = (pop32());
  /* 1130eca1 mov esp, ebp */
  ESP = (EBP);
  /* 1130eca3 pop ebp */
  EBP = (pop32());
  /* 1130eca4 ret  */
  ESPCHK(0x1130e9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x1130ecb0 (80 bytes, 32 insns) */
void f_1130ecb0(void) {
  FTRACE(0x1130ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 1130ecb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ecb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130ecb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130ecbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ecbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1130ecc2:;
  /* 1130ecc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ecc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ecc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130eccb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130ecce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ecd0 je 0x1130ece7 */
  if (C.zf) goto L_1130ece7;
  /* 1130ecd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ecd5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1130ecd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ecda je 0x1130ece7 */
  if (C.zf) goto L_1130ece7;
  /* 1130ecdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ecdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ece2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130ece5 jmp 0x1130ecc2 */
  goto L_1130ecc2;
L_1130ece7:;
  /* 1130ece7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ecea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1130eced test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ecef jne 0x1130ecf9 */
  if (!C.zf) goto L_1130ecf9;
  /* 1130ecf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ecf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ecf7 jmp 0x1130ecfc */
  goto L_1130ecfc;
L_1130ecf9:;
  /* 1130ecf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1130ecfc:;
  /* 1130ecfc mov esp, ebp */
  ESP = (EBP);
  /* 1130ecfe pop ebp */
  EBP = (pop32());
  /* 1130ecff ret  */
  ESPCHK(0x1130ecb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed00 @ 0x1130ed00 (130 bytes, 43 insns) */
void f_1130ed00(void) {
  FTRACE(0x1130ed00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ed00 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ed01 mov ebp, esp */
  EBP = (ESP);
  /* 1130ed03 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ed04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ed07 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ed0d jae 0x1130ed31 */
  if (!C.cf) goto L_1130ed31;
  /* 1130ed0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ed12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130ed15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ed18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130ed1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130ed1e mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130ed25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1130ed2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130ed2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130ed2f jne 0x1130ed4c */
  if (!C.zf) goto L_1130ed4c;
L_1130ed31:;
  /* 1130ed31 call 0x1130e480 */
  push32(0x1130ed36u); f_1130e480();
  /* 1130ed36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1130ed3c call 0x1130e490 */
  push32(0x1130ed41u); f_1130e490();
  /* 1130ed41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130ed47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130ed4a jmp 0x1130ed7e */
  goto L_1130ed7e;
L_1130ed4c:;
  /* 1130ed4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ed4f push edx */
  push32((uint32_t)(EDX));
  /* 1130ed50 call 0x1130fca0 */
  push32(0x1130ed55u); f_1130fca0();
  /* 1130ed55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ed58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130ed5b push eax */
  push32((uint32_t)(EAX));
  /* 1130ed5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130ed5f push ecx */
  push32((uint32_t)(ECX));
  /* 1130ed60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ed63 push edx */
  push32((uint32_t)(EDX));
  /* 1130ed64 call 0x1130ed90 */
  push32(0x1130ed69u); f_1130ed90();
  /* 1130ed69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ed6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130ed6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ed72 push eax */
  push32((uint32_t)(EAX));
  /* 1130ed73 call 0x1130fd30 */
  push32(0x1130ed78u); f_1130fd30();
  /* 1130ed78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ed7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130ed7e:;
  /* 1130ed7e mov esp, ebp */
  ESP = (EBP);
  /* 1130ed80 pop ebp */
  EBP = (pop32());
  /* 1130ed81 ret  */
  ESPCHK(0x1130ed00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x1130ed90 (178 bytes, 56 insns) */
void f_1130ed90(void) {
  FTRACE(0x1130ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1130ed93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ed96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ed99 push eax */
  push32((uint32_t)(EAX));
  /* 1130ed9a call 0x1130fb20 */
  push32(0x1130ed9fu); f_1130fb20();
  /* 1130ed9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130eda2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1130eda5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130eda9 jne 0x1130edbe */
  if (!C.zf) goto L_1130edbe;
  /* 1130edab call 0x1130e480 */
  push32(0x1130edb0u); f_1130e480();
  /* 1130edb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1130edb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130edb9 jmp 0x1130ee3e */
  goto L_1130ee3e;
L_1130edbe:;
  /* 1130edbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130edc1 push ecx */
  push32((uint32_t)(ECX));
  /* 1130edc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130edc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130edc7 push edx */
  push32((uint32_t)(EDX));
  /* 1130edc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130edcb push eax */
  push32((uint32_t)(EAX));
  /* 1130edcc call dword ptr [0x11335318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335318))), 0x1130edd2u);
  /* 1130edd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130edd5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130edd9 jne 0x1130ede6 */
  if (!C.zf) goto L_1130ede6;
  /* 1130eddb call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x1130ede1u);
  /* 1130ede1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130ede4 jmp 0x1130eded */
  goto L_1130eded;
L_1130ede6:;
  /* 1130ede6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1130eded:;
  /* 1130eded cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130edf1 je 0x1130ee04 */
  if (C.zf) goto L_1130ee04;
  /* 1130edf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130edf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1130edf7 call 0x1130e3e0 */
  push32(0x1130edfcu); f_1130e3e0();
  /* 1130edfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130edff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130ee02 jmp 0x1130ee3e */
  goto L_1130ee3e;
L_1130ee04:;
  /* 1130ee04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1130ee0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1130ee10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130ee13 mov ecx, dword ptr [edx*4 + 0x11334160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130ee1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1130ee1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1130ee21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130ee27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130ee2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130ee30 mov eax, dword ptr [eax*4 + 0x11334160] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130ee37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1130ee3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1130ee3e:;
  /* 1130ee3e mov esp, ebp */
  ESP = (EBP);
  /* 1130ee40 pop ebp */
  EBP = (pop32());
  /* 1130ee41 ret  */
  ESPCHK(0x1130ed90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee50 @ 0x1130ee50 (130 bytes, 43 insns) */
void f_1130ee50(void) {
  FTRACE(0x1130ee50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ee50 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ee51 mov ebp, esp */
  EBP = (ESP);
  /* 1130ee53 push ecx */
  push32((uint32_t)(ECX));
  /* 1130ee54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee57 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ee5d jae 0x1130ee81 */
  if (!C.cf) goto L_1130ee81;
  /* 1130ee5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130ee65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130ee6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130ee6e mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130ee75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1130ee7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130ee7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130ee7f jne 0x1130ee9c */
  if (!C.zf) goto L_1130ee9c;
L_1130ee81:;
  /* 1130ee81 call 0x1130e480 */
  push32(0x1130ee86u); f_1130e480();
  /* 1130ee86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1130ee8c call 0x1130e490 */
  push32(0x1130ee91u); f_1130e490();
  /* 1130ee91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130ee97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130ee9a jmp 0x1130eece */
  goto L_1130eece;
L_1130ee9c:;
  /* 1130ee9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ee9f push edx */
  push32((uint32_t)(EDX));
  /* 1130eea0 call 0x1130fca0 */
  push32(0x1130eea5u); f_1130fca0();
  /* 1130eea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130eea8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130eeab push eax */
  push32((uint32_t)(EAX));
  /* 1130eeac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130eeaf push ecx */
  push32((uint32_t)(ECX));
  /* 1130eeb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130eeb3 push edx */
  push32((uint32_t)(EDX));
  /* 1130eeb4 call 0x1130eee0 */
  push32(0x1130eeb9u); f_1130eee0();
  /* 1130eeb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130eebc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130eebf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130eec2 push eax */
  push32((uint32_t)(EAX));
  /* 1130eec3 call 0x1130fd30 */
  push32(0x1130eec8u); f_1130fd30();
  /* 1130eec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130eecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130eece:;
  /* 1130eece mov esp, ebp */
  ESP = (EBP);
  /* 1130eed0 pop ebp */
  EBP = (pop32());
  /* 1130eed1 ret  */
  ESPCHK(0x1130ee50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eee0 @ 0x1130eee0 (627 bytes, 182 insns) */
void f_1130eee0(void) {
  FTRACE(0x1130eee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130eee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130eee1 mov ebp, esp */
  EBP = (ESP);
  /* 1130eee3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130eee9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1130eef0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130eef3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1130eef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130eefd jne 0x1130ef06 */
  if (!C.zf) goto L_1130ef06;
  /* 1130eeff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130ef01 jmp 0x1130f14f */
  goto L_1130f14f;
L_1130ef06:;
  /* 1130ef06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ef09 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130ef0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ef0f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130ef12 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130ef15 mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130ef1c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1130ef21 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1130ef24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130ef26 je 0x1130ef38 */
  if (C.zf) goto L_1130ef38;
  /* 1130ef28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130ef2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130ef2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ef2f push edx */
  push32((uint32_t)(EDX));
  /* 1130ef30 call 0x1130ed90 */
  push32(0x1130ef35u); f_1130ed90();
  /* 1130ef35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130ef38:;
  /* 1130ef38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ef3b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130ef3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130ef41 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130ef44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130ef47 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130ef4e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1130ef53 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1130ef58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130ef5a je 0x1130f06c */
  if (C.zf) goto L_1130f06c;
  /* 1130ef60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130ef63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130ef66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1130ef6d:;
  /* 1130ef6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ef70 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ef73 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ef76 jae 0x1130f06a */
  if (!C.cf) goto L_1130f06a;
  /* 1130ef7c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1130ef82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1130ef85:;
  /* 1130ef85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ef88 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1130ef8e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ef90 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ef96 jge 0x1130eff7 */
  if ((C.sf==C.of)) goto L_1130eff7;
  /* 1130ef98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ef9b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ef9e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130efa1 jae 0x1130eff7 */
  if (!C.cf) goto L_1130eff7;
  /* 1130efa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130efa6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1130efa8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1130efae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130efb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130efb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130efb7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1130efbe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130efc1 jne 0x1130efe1 */
  if (!C.zf) goto L_1130efe1;
  /* 1130efc3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1130efc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130efcc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1130efd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130efd5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1130efd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130efdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130efde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1130efe1:;
  /* 1130efe1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130efe4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1130efea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1130efec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130efef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130eff2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130eff5 jmp 0x1130ef85 */
  goto L_1130ef85;
L_1130eff7:;
  /* 1130eff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130eff9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1130efff push edx */
  push32((uint32_t)(EDX));
  /* 1130f000 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130f003 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1130f009 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f00b push eax */
  push32((uint32_t)(EAX));
  /* 1130f00c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1130f012 push edx */
  push32((uint32_t)(EDX));
  /* 1130f013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f016 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130f019 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f01c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130f01f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130f022 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130f029 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1130f02c push eax */
  push32((uint32_t)(EAX));
  /* 1130f02d call dword ptr [0x113353a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a8))), 0x1130f033u);
  /* 1130f033 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130f035 je 0x1130f05a */
  if (C.zf) goto L_1130f05a;
  /* 1130f037 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130f03a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f040 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1130f043 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130f046 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1130f04c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f04e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f054 jge 0x1130f058 */
  if ((C.sf==C.of)) goto L_1130f058;
  /* 1130f056 jmp 0x1130f06a */
  goto L_1130f06a;
L_1130f058:;
  /* 1130f058 jmp 0x1130f065 */
  goto L_1130f065;
L_1130f05a:;
  /* 1130f05a call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x1130f060u);
  /* 1130f060 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1130f063 jmp 0x1130f06a */
  goto L_1130f06a;
L_1130f065:;
  /* 1130f065 jmp 0x1130ef6d */
  goto L_1130ef6d;
L_1130f06a:;
  /* 1130f06a jmp 0x1130f0bc */
  goto L_1130f0bc;
L_1130f06c:;
  /* 1130f06c push 0 */
  push32((uint32_t)(0x0u));
  /* 1130f06e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1130f074 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f075 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1130f078 push edx */
  push32((uint32_t)(EDX));
  /* 1130f079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f07c push eax */
  push32((uint32_t)(EAX));
  /* 1130f07d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f080 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f086 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130f089 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130f08c mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130f093 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1130f096 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f097 call dword ptr [0x113353a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353a8))), 0x1130f09du);
  /* 1130f09d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130f09f je 0x1130f0b3 */
  if (C.zf) goto L_1130f0b3;
  /* 1130f0a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130f0a8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1130f0ae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1130f0b1 jmp 0x1130f0bc */
  goto L_1130f0bc;
L_1130f0b3:;
  /* 1130f0b3 call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x1130f0b9u);
  /* 1130f0b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1130f0bc:;
  /* 1130f0bc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f0c0 jne 0x1130f146 */
  if (!C.zf) goto L_1130f146;
  /* 1130f0c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f0ca je 0x1130f0fa */
  if (C.zf) goto L_1130f0fa;
  /* 1130f0cc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f0d0 jne 0x1130f0e9 */
  if (!C.zf) goto L_1130f0e9;
  /* 1130f0d2 call 0x1130e480 */
  push32(0x1130f0d7u); f_1130e480();
  /* 1130f0d7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1130f0dd call 0x1130e490 */
  push32(0x1130f0e2u); f_1130e490();
  /* 1130f0e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f0e5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1130f0e7 jmp 0x1130f0f5 */
  goto L_1130f0f5;
L_1130f0e9:;
  /* 1130f0e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f0ec push edx */
  push32((uint32_t)(EDX));
  /* 1130f0ed call 0x1130e3e0 */
  push32(0x1130f0f2u); f_1130e3e0();
  /* 1130f0f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130f0f5:;
  /* 1130f0f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130f0f8 jmp 0x1130f14f */
  goto L_1130f14f;
L_1130f0fa:;
  /* 1130f0fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f0fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130f100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f103 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130f106 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130f109 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130f110 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1130f115 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1130f118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130f11a je 0x1130f12b */
  if (C.zf) goto L_1130f12b;
  /* 1130f11c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f11f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1130f122 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f125 jne 0x1130f12b */
  if (!C.zf) goto L_1130f12b;
  /* 1130f127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130f129 jmp 0x1130f14f */
  goto L_1130f14f;
L_1130f12b:;
  /* 1130f12b call 0x1130e480 */
  push32(0x1130f130u); f_1130e480();
  /* 1130f130 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1130f136 call 0x1130e490 */
  push32(0x1130f13bu); f_1130e490();
  /* 1130f13b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130f141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130f144 jmp 0x1130f14f */
  goto L_1130f14f;
L_1130f146:;
  /* 1130f146 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1130f149 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1130f14f:;
  /* 1130f14f mov esp, ebp */
  ESP = (EBP);
  /* 1130f151 pop ebp */
  EBP = (pop32());
  /* 1130f152 ret  */
  ESPCHK(0x1130eee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f160 @ 0x1130f160 (199 bytes, 68 insns) */
void f_1130f160(void) {
  FTRACE(0x1130f160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f160 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f161 mov ebp, esp */
  EBP = (ESP);
  /* 1130f163 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f164 push ebx */
  push32((uint32_t)(EBX));
  /* 1130f165 push esi */
  push32((uint32_t)(ESI));
  /* 1130f166 push edi */
  push32((uint32_t)(EDI));
L_1130f167:;
  /* 1130f167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f16b jne 0x1130f18b */
  if (!C.zf) goto L_1130f18b;
  /* 1130f16d push 0x1132e32c */
  push32((uint32_t)(0x1132e32cu));
  /* 1130f172 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130f174 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1130f176 push 0x1132e3f8 */
  push32((uint32_t)(0x1132e3f8u));
  /* 1130f17b push 2 */
  push32((uint32_t)(0x2u));
  /* 1130f17d call 0x11305670 */
  push32(0x1130f182u); f_11305670();
  /* 1130f182 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f185 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f188 jne 0x1130f18b */
  if (!C.zf) goto L_1130f18b;
  /* 1130f18a int3  */
  x86_unimpl("int3 @ 0x1130f18a");
L_1130f18b:;
  /* 1130f18b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130f18d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130f18f jne 0x1130f167 */
  if (!C.zf) goto L_1130f167;
  /* 1130f191 mov ecx, dword ptr [0x113329a4] */
  ECX = (r32((uint32_t)(0x113329a4)));
  /* 1130f197 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f19a mov dword ptr [0x113329a4], ecx */
  w32((uint32_t)(0x113329a4), (ECX));
  /* 1130f1a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f1a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130f1a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1130f1a8 push 0x1132e3f8 */
  push32((uint32_t)(0x1132e3f8u));
  /* 1130f1ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1130f1af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1130f1b4 call 0x113065b0 */
  push32(0x1130f1b9u); f_113065b0();
  /* 1130f1b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f1bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1130f1c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f1c9 je 0x1130f1e6 */
  if (C.zf) goto L_1130f1e6;
  /* 1130f1cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130f1d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1130f1d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1130f1da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1130f1e4 jmp 0x1130f20b */
  goto L_1130f20b;
L_1130f1e6:;
  /* 1130f1e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130f1ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1130f1ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1130f1f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f1fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f1fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1130f201 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f204 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1130f20b:;
  /* 1130f20b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f20e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f211 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1130f214 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1130f216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f219 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1130f220 pop edi */
  EDI = (pop32());
  /* 1130f221 pop esi */
  ESI = (pop32());
  /* 1130f222 pop ebx */
  EBX = (pop32());
  /* 1130f223 mov esp, ebp */
  ESP = (EBP);
  /* 1130f225 pop ebp */
  EBP = (pop32());
  /* 1130f226 ret  */
  ESPCHK(0x1130f160u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1130f230 (50 bytes, 17 insns) */
void f_1130f230(void) {
  FTRACE(0x1130f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f230 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f231 mov ebp, esp */
  EBP = (ESP);
  /* 1130f233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f236 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f23c jb 0x1130f242 */
  if (C.cf) goto L_1130f242;
  /* 1130f23e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130f240 jmp 0x1130f260 */
  goto L_1130f260;
L_1130f242:;
  /* 1130f242 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f245 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f24b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130f24e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130f251 mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130f258 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1130f25d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1130f260:;
  /* 1130f260 pop ebp */
  EBP = (pop32());
  /* 1130f261 ret  */
  ESPCHK(0x1130f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x1130f270 (300 bytes, 80 insns) */
void f_1130f270(void) {
  FTRACE(0x1130f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f271 mov ebp, esp */
  EBP = (ESP);
  /* 1130f273 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f274 cmp dword ptr [0x11333e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11333e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f27b jne 0x1130f289 */
  if (!C.zf) goto L_1130f289;
  /* 1130f27d mov dword ptr [0x11333e60], 0x200 */
  w32((uint32_t)(0x11333e60), (0x200u));
  /* 1130f287 jmp 0x1130f29c */
  goto L_1130f29c;
L_1130f289:;
  /* 1130f289 cmp dword ptr [0x11333e60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11333e60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f290 jge 0x1130f29c */
  if ((C.sf==C.of)) goto L_1130f29c;
  /* 1130f292 mov dword ptr [0x11333e60], 0x14 */
  w32((uint32_t)(0x11333e60), (0x14u));
L_1130f29c:;
  /* 1130f29c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1130f2a1 push 0x1132e404 */
  push32((uint32_t)(0x1132e404u));
  /* 1130f2a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130f2a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1130f2aa mov eax, dword ptr [0x11333e60] */
  EAX = (r32((uint32_t)(0x11333e60)));
  /* 1130f2af push eax */
  push32((uint32_t)(EAX));
  /* 1130f2b0 call 0x113069c0 */
  push32(0x1130f2b5u); f_113069c0();
  /* 1130f2b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f2b8 mov dword ptr [0x11332b18], eax */
  w32((uint32_t)(0x11332b18), (EAX));
  /* 1130f2bd cmp dword ptr [0x11332b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f2c4 jne 0x1130f305 */
  if (!C.zf) goto L_1130f305;
  /* 1130f2c6 mov dword ptr [0x11333e60], 0x14 */
  w32((uint32_t)(0x11333e60), (0x14u));
  /* 1130f2d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1130f2d5 push 0x1132e404 */
  push32((uint32_t)(0x1132e404u));
  /* 1130f2da push 2 */
  push32((uint32_t)(0x2u));
  /* 1130f2dc push 4 */
  push32((uint32_t)(0x4u));
  /* 1130f2de mov ecx, dword ptr [0x11333e60] */
  ECX = (r32((uint32_t)(0x11333e60)));
  /* 1130f2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f2e5 call 0x113069c0 */
  push32(0x1130f2eau); f_113069c0();
  /* 1130f2ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f2ed mov dword ptr [0x11332b18], eax */
  w32((uint32_t)(0x11332b18), (EAX));
  /* 1130f2f2 cmp dword ptr [0x11332b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f2f9 jne 0x1130f305 */
  if (!C.zf) goto L_1130f305;
  /* 1130f2fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1130f2fd call 0x11305520 */
  push32(0x1130f302u); f_11305520();
  /* 1130f302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130f305:;
  /* 1130f305 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130f30c jmp 0x1130f317 */
  goto L_1130f317;
L_1130f30e:;
  /* 1130f30e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f311 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f314 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130f317:;
  /* 1130f317 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f31b jge 0x1130f336 */
  if ((C.sf==C.of)) goto L_1130f336;
  /* 1130f31d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f320 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130f323 add eax, 0x11331120 */
  { uint32_t _a=(EAX),_b=(0x11331120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f328 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f32b mov edx, dword ptr [0x11332b18] */
  EDX = (r32((uint32_t)(0x11332b18)));
  /* 1130f331 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1130f334 jmp 0x1130f30e */
  goto L_1130f30e;
L_1130f336:;
  /* 1130f336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130f33d jmp 0x1130f348 */
  goto L_1130f348;
L_1130f33f:;
  /* 1130f33f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f342 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f345 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130f348:;
  /* 1130f348 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f34c jge 0x1130f398 */
  if ((C.sf==C.of)) goto L_1130f398;
  /* 1130f34e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f351 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f357 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130f35a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130f35d mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130f364 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f368 je 0x1130f386 */
  if (C.zf) goto L_1130f386;
  /* 1130f36a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f36d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f370 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f373 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130f376 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130f379 mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130f380 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f384 jne 0x1130f396 */
  if (!C.zf) goto L_1130f396;
L_1130f386:;
  /* 1130f386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f389 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f38c mov dword ptr [ecx + 0x11331130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11331130), (0xffffffffu));
L_1130f396:;
  /* 1130f396 jmp 0x1130f33f */
  goto L_1130f33f;
L_1130f398:;
  /* 1130f398 mov esp, ebp */
  ESP = (EBP);
  /* 1130f39a pop ebp */
  EBP = (pop32());
  /* 1130f39b ret  */
  ESPCHK(0x1130f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3a0 @ 0x1130f3a0 (26 bytes, 9 insns) */
void f_1130f3a0(void) {
  FTRACE(0x1130f3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1130f3a3 call 0x1130ffa0 */
  push32(0x1130f3a8u); f_1130ffa0();
  /* 1130f3a8 movsx eax, byte ptr [0x113327bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x113327bc))));
  /* 1130f3af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130f3b1 je 0x1130f3b8 */
  if (C.zf) goto L_1130f3b8;
  /* 1130f3b3 call 0x1130fd60 */
  push32(0x1130f3b8u); f_1130fd60();
L_1130f3b8:;
  /* 1130f3b8 pop ebp */
  EBP = (pop32());
  /* 1130f3b9 ret  */
  ESPCHK(0x1130f3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3c0 @ 0x1130f3c0 (61 bytes, 20 insns) */
void f_1130f3c0(void) {
  FTRACE(0x1130f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1130f3c3 cmp dword ptr [ebp + 8], 0x11331120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11331120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f3ca jb 0x1130f3ee */
  if (C.cf) goto L_1130f3ee;
  /* 1130f3cc cmp dword ptr [ebp + 8], 0x11331380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11331380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f3d3 ja 0x1130f3ee */
  if ((!C.cf&&!C.zf)) goto L_1130f3ee;
  /* 1130f3d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f3d8 sub eax, 0x11331120 */
  { uint32_t _a=(EAX),_b=(0x11331120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f3dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130f3e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f3e3 push eax */
  push32((uint32_t)(EAX));
  /* 1130f3e4 call 0x11309fb0 */
  push32(0x1130f3e9u); f_11309fb0();
  /* 1130f3e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f3ec jmp 0x1130f3fb */
  goto L_1130f3fb;
L_1130f3ee:;
  /* 1130f3ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f3f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f3f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f3f5 call dword ptr [0x11335354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335354))), 0x1130f3fbu);
L_1130f3fb:;
  /* 1130f3fb pop ebp */
  EBP = (pop32());
  /* 1130f3fc ret  */
  ESPCHK(0x1130f3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f400 @ 0x1130f400 (41 bytes, 16 insns) */
void f_1130f400(void) {
  FTRACE(0x1130f400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f400 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f401 mov ebp, esp */
  EBP = (ESP);
  /* 1130f403 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f407 jge 0x1130f41a */
  if ((C.sf==C.of)) goto L_1130f41a;
  /* 1130f409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f40c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f40f push eax */
  push32((uint32_t)(EAX));
  /* 1130f410 call 0x11309fb0 */
  push32(0x1130f415u); f_11309fb0();
  /* 1130f415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f418 jmp 0x1130f427 */
  goto L_1130f427;
L_1130f41a:;
  /* 1130f41a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f41d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f420 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f421 call dword ptr [0x11335354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335354))), 0x1130f427u);
L_1130f427:;
  /* 1130f427 pop ebp */
  EBP = (pop32());
  /* 1130f428 ret  */
  ESPCHK(0x1130f400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x1130f430 (61 bytes, 20 insns) */
void f_1130f430(void) {
  FTRACE(0x1130f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f430 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f431 mov ebp, esp */
  EBP = (ESP);
  /* 1130f433 cmp dword ptr [ebp + 8], 0x11331120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11331120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f43a jb 0x1130f45e */
  if (C.cf) goto L_1130f45e;
  /* 1130f43c cmp dword ptr [ebp + 8], 0x11331380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11331380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f443 ja 0x1130f45e */
  if ((!C.cf&&!C.zf)) goto L_1130f45e;
  /* 1130f445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f448 sub eax, 0x11331120 */
  { uint32_t _a=(EAX),_b=(0x11331120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f44d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130f450 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f453 push eax */
  push32((uint32_t)(EAX));
  /* 1130f454 call 0x1130a050 */
  push32(0x1130f459u); f_1130a050();
  /* 1130f459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f45c jmp 0x1130f46b */
  goto L_1130f46b;
L_1130f45e:;
  /* 1130f45e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f461 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f464 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f465 call dword ptr [0x11335350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335350))), 0x1130f46bu);
L_1130f46b:;
  /* 1130f46b pop ebp */
  EBP = (pop32());
  /* 1130f46c ret  */
  ESPCHK(0x1130f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x1130f470 (41 bytes, 16 insns) */
void f_1130f470(void) {
  FTRACE(0x1130f470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f470 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f471 mov ebp, esp */
  EBP = (ESP);
  /* 1130f473 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f477 jge 0x1130f48a */
  if ((C.sf==C.of)) goto L_1130f48a;
  /* 1130f479 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f47c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f47f push eax */
  push32((uint32_t)(EAX));
  /* 1130f480 call 0x1130a050 */
  push32(0x1130f485u); f_1130a050();
  /* 1130f485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f488 jmp 0x1130f497 */
  goto L_1130f497;
L_1130f48a:;
  /* 1130f48a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f48d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f490 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f491 call dword ptr [0x11335350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335350))), 0x1130f497u);
L_1130f497:;
  /* 1130f497 pop ebp */
  EBP = (pop32());
  /* 1130f498 ret  */
  ESPCHK(0x1130f470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4a0 @ 0x1130f4a0 (119 bytes, 34 insns) */
void f_1130f4a0(void) {
  FTRACE(0x1130f4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1130f4a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f4a6 push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 1130f4ab call dword ptr [0x113353bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353bc))), 0x1130f4b1u);
  /* 1130f4b1 cmp dword ptr [0x11332b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f4b8 je 0x1130f4d8 */
  if (C.zf) goto L_1130f4d8;
  /* 1130f4ba push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 1130f4bf call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x1130f4c5u);
  /* 1130f4c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1130f4c7 call 0x11309fb0 */
  push32(0x1130f4ccu); f_11309fb0();
  /* 1130f4cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f4cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1130f4d6 jmp 0x1130f4df */
  goto L_1130f4df;
L_1130f4d8:;
  /* 1130f4d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1130f4df:;
  /* 1130f4df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1130f4e3 push eax */
  push32((uint32_t)(EAX));
  /* 1130f4e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f4e8 call 0x1130f520 */
  push32(0x1130f4edu); f_1130f520();
  /* 1130f4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f4f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130f4f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f4f7 je 0x1130f505 */
  if (C.zf) goto L_1130f505;
  /* 1130f4f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1130f4fb call 0x1130a050 */
  push32(0x1130f500u); f_1130a050();
  /* 1130f500 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f503 jmp 0x1130f510 */
  goto L_1130f510;
L_1130f505:;
  /* 1130f505 push 0x11332b14 */
  push32((uint32_t)(0x11332b14u));
  /* 1130f50a call dword ptr [0x113353ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353ac))), 0x1130f510u);
L_1130f510:;
  /* 1130f510 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130f513 mov esp, ebp */
  ESP = (EBP);
  /* 1130f515 pop ebp */
  EBP = (pop32());
  /* 1130f516 ret  */
  ESPCHK(0x1130f4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x1130f520 (160 bytes, 50 insns) */
void f_1130f520(void) {
  FTRACE(0x1130f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f520 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f521 mov ebp, esp */
  EBP = (ESP);
  /* 1130f523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f526 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f52a jne 0x1130f533 */
  if (!C.zf) goto L_1130f533;
  /* 1130f52c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130f52e jmp 0x1130f5bc */
  goto L_1130f5bc;
L_1130f533:;
  /* 1130f533 cmp dword ptr [0x11332988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f53a jne 0x1130f56a */
  if (!C.zf) goto L_1130f56a;
  /* 1130f53c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f53f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130f544 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f549 jle 0x1130f55b */
  if ((C.zf||C.sf!=C.of)) goto L_1130f55b;
  /* 1130f54b call 0x1130e480 */
  push32(0x1130f550u); f_1130e480();
  /* 1130f550 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1130f556 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130f559 jmp 0x1130f5bc */
  goto L_1130f5bc;
L_1130f55b:;
  /* 1130f55b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f55e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1130f561 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1130f563 mov eax, 1 */
  EAX = (0x1u);
  /* 1130f568 jmp 0x1130f5bc */
  goto L_1130f5bc;
L_1130f56a:;
  /* 1130f56a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1130f571 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1130f574 push eax */
  push32((uint32_t)(EAX));
  /* 1130f575 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130f577 mov ecx, dword ptr [0x11330ea4] */
  ECX = (r32((uint32_t)(0x11330ea4)));
  /* 1130f57d push ecx */
  push32((uint32_t)(ECX));
  /* 1130f57e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f581 push edx */
  push32((uint32_t)(EDX));
  /* 1130f582 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130f584 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1130f587 push eax */
  push32((uint32_t)(EAX));
  /* 1130f588 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1130f58d mov ecx, dword ptr [0x11332998] */
  ECX = (r32((uint32_t)(0x11332998)));
  /* 1130f593 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f594 call dword ptr [0x11335378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335378))), 0x1130f59au);
  /* 1130f59a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130f59d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f5a1 je 0x1130f5a9 */
  if (C.zf) goto L_1130f5a9;
  /* 1130f5a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f5a7 je 0x1130f5b9 */
  if (C.zf) goto L_1130f5b9;
L_1130f5a9:;
  /* 1130f5a9 call 0x1130e480 */
  push32(0x1130f5aeu); f_1130e480();
  /* 1130f5ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1130f5b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130f5b7 jmp 0x1130f5bc */
  goto L_1130f5bc;
L_1130f5b9:;
  /* 1130f5b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130f5bc:;
  /* 1130f5bc mov esp, ebp */
  ESP = (EBP);
  /* 1130f5be pop ebp */
  EBP = (pop32());
  /* 1130f5bf ret  */
  ESPCHK(0x1130f520u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1130f5c0 (32 bytes, 18 insns) */
void f_1130f5c0(void) {
  FTRACE(0x1130f5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1130f5c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1130f5c4 push esi */
  push32((uint32_t)(ESI));
  /* 1130f5c5 push edi */
  push32((uint32_t)(EDI));
  /* 1130f5c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f5c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130f5c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130f5cb push 0x1130f5d8 */
  push32((uint32_t)(0x1130f5d8u));
  /* 1130f5d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1130f5d3 call 0x11316d0c */
  push32(0x1130f5d8u); f_11316d0c();
  /* 1130f5d8 pop ebp */
  EBP = (pop32());
  /* 1130f5d9 pop edi */
  EDI = (pop32());
  /* 1130f5da pop esi */
  ESI = (pop32());
  /* 1130f5db pop ebx */
  EBX = (pop32());
  /* 1130f5dc mov esp, ebp */
  ESP = (EBP);
  /* 1130f5de pop ebp */
  EBP = (pop32());
  /* 1130f5df ret  */
  ESPCHK(0x1130f5c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1130f602 (104 bytes, 33 insns) */
void f_1130f602(void) {
  FTRACE(0x1130f602u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f602 push ebx */
  push32((uint32_t)(EBX));
  /* 1130f603 push esi */
  push32((uint32_t)(ESI));
  /* 1130f604 push edi */
  push32((uint32_t)(EDI));
  /* 1130f605 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1130f609 push eax */
  push32((uint32_t)(EAX));
  /* 1130f60a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1130f60c push 0x1130f5e0 */
  push32((uint32_t)(0x1130f5e0u));
  /* 1130f611 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1130f618 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1130f61f:;
  /* 1130f61f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1130f623 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130f626 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1130f629 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f62c je 0x1130f65c */
  if (C.zf) goto L_1130f65c;
  /* 1130f62e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f632 je 0x1130f65c */
  if (C.zf) goto L_1130f65c;
  /* 1130f634 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1130f637 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1130f63a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1130f63e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1130f641 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f646 jne 0x1130f65a */
  if (!C.zf) goto L_1130f65a;
  /* 1130f648 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1130f64d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1130f651 call 0x1130f696 */
  push32(0x1130f656u); f_1130f696();
  /* 1130f656 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1130f65au);
L_1130f65a:;
  /* 1130f65a jmp 0x1130f61f */
  goto L_1130f61f;
L_1130f65c:;
  /* 1130f65c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1130f663 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f666 pop edi */
  EDI = (pop32());
  /* 1130f667 pop esi */
  ESI = (pop32());
  /* 1130f668 pop ebx */
  EBX = (pop32());
  /* 1130f669 ret  */
  ESPCHK(0x1130f602u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f696 @ 0x1130f696 (24 bytes, 10 insns) */
void f_1130f696(void) {
  FTRACE(0x1130f696u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f696 push ebx */
  push32((uint32_t)(EBX));
  /* 1130f697 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f698 mov ebx, 0x113313b8 */
  EBX = (0x113313b8u);
  /* 1130f69d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f6a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1130f6a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1130f6a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1130f6a9 pop ecx */
  ECX = (pop32());
  /* 1130f6aa pop ebx */
  EBX = (pop32());
  /* 1130f6ab ret 4 */
  ESPCHK(0x1130f696u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f775 @ 0x1130f775 (27 bytes, 11 insns) */
void f_1130f775(void) {
  FTRACE(0x1130f775u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f775 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f776 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1130f77a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1130f77c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1130f77f push eax */
  push32((uint32_t)(EAX));
  /* 1130f780 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1130f783 push eax */
  push32((uint32_t)(EAX));
  /* 1130f784 call 0x1130f602 */
  push32(0x1130f789u); f_1130f602();
  /* 1130f789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f78c pop ebp */
  EBP = (pop32());
  /* 1130f78d ret 4 */
  ESPCHK(0x1130f775u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f790 @ 0x1130f790 (482 bytes, 138 insns) */
void f_1130f790(void) {
  FTRACE(0x1130f790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f790 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f791 mov ebp, esp */
  EBP = (ESP);
  /* 1130f793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f796 push esi */
  push32((uint32_t)(ESI));
  /* 1130f797 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1130f79e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1130f7a0 call 0x11309fb0 */
  push32(0x1130f7a5u); f_11309fb0();
  /* 1130f7a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f7a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130f7af jmp 0x1130f7ba */
  goto L_1130f7ba;
L_1130f7b1:;
  /* 1130f7b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f7b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f7b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1130f7ba:;
  /* 1130f7ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f7be jge 0x1130f960 */
  if ((C.sf==C.of)) goto L_1130f960;
  /* 1130f7c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f7c7 cmp dword ptr [ecx*4 + 0x11334160], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11334160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f7cf je 0x1130f8c6 */
  if (C.zf) goto L_1130f8c6;
  /* 1130f7d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f7d8 mov eax, dword ptr [edx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130f7df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130f7e2 jmp 0x1130f7ed */
  goto L_1130f7ed;
L_1130f7e4:;
  /* 1130f7e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f7e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f7ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1130f7ed:;
  /* 1130f7ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f7f0 mov eax, dword ptr [edx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130f7f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f7fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f7ff jae 0x1130f8b6 */
  if (!C.cf) goto L_1130f8b6;
  /* 1130f805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f808 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130f80c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130f80f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130f811 jne 0x1130f8b1 */
  if (!C.zf) goto L_1130f8b1;
  /* 1130f817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f81a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f81e jne 0x1130f859 */
  if (!C.zf) goto L_1130f859;
  /* 1130f820 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1130f822 call 0x11309fb0 */
  push32(0x1130f827u); f_11309fb0();
  /* 1130f827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f82a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f82d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f831 jne 0x1130f84f */
  if (!C.zf) goto L_1130f84f;
  /* 1130f833 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f836 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f839 push edx */
  push32((uint32_t)(EDX));
  /* 1130f83a call dword ptr [0x11335364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335364))), 0x1130f840u);
  /* 1130f840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f843 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130f846 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f84c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1130f84f:;
  /* 1130f84f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1130f851 call 0x1130a050 */
  push32(0x1130f856u); f_1130a050();
  /* 1130f856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130f859:;
  /* 1130f859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f85c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f85f push eax */
  push32((uint32_t)(EAX));
  /* 1130f860 call dword ptr [0x11335354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335354))), 0x1130f866u);
  /* 1130f866 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f869 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1130f86d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1130f870 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130f872 je 0x1130f886 */
  if (C.zf) goto L_1130f886;
  /* 1130f874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f877 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f87a push eax */
  push32((uint32_t)(EAX));
  /* 1130f87b call dword ptr [0x11335350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335350))), 0x1130f881u);
  /* 1130f881 jmp 0x1130f7e4 */
  goto L_1130f7e4;
L_1130f886:;
  /* 1130f886 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f889 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1130f88f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f892 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f895 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f89b sub eax, dword ptr [edx*4 + 0x11334160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11334160))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130f8a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1130f8a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1130f8a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1130f8aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f8ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130f8af jmp 0x1130f8b6 */
  goto L_1130f8b6;
L_1130f8b1:;
  /* 1130f8b1 jmp 0x1130f7e4 */
  goto L_1130f7e4;
L_1130f8b6:;
  /* 1130f8b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f8ba je 0x1130f8c1 */
  if (C.zf) goto L_1130f8c1;
  /* 1130f8bc jmp 0x1130f960 */
  goto L_1130f960;
L_1130f8c1:;
  /* 1130f8c1 jmp 0x1130f95b */
  goto L_1130f95b;
L_1130f8c6:;
  /* 1130f8c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1130f8c8 push 0x1132e40c */
  push32((uint32_t)(0x1132e40cu));
  /* 1130f8cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1130f8cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1130f8d4 call 0x113065b0 */
  push32(0x1130f8d9u); f_113065b0();
  /* 1130f8d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f8dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130f8df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f8e3 je 0x1130f959 */
  if (C.zf) goto L_1130f959;
  /* 1130f8e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f8e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f8eb mov dword ptr [eax*4 + 0x11334160], ecx */
  w32((uint32_t)(EAX*4 + 0x11334160), (ECX));
  /* 1130f8f2 mov edx, dword ptr [0x1133429c] */
  EDX = (r32((uint32_t)(0x1133429c)));
  /* 1130f8f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f8fb mov dword ptr [0x1133429c], edx */
  w32((uint32_t)(0x1133429c), (EDX));
  /* 1130f901 jmp 0x1130f90c */
  goto L_1130f90c;
L_1130f903:;
  /* 1130f903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f906 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1130f90c:;
  /* 1130f90c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f90f mov edx, dword ptr [ecx*4 + 0x11334160] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130f916 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f91c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f91f jae 0x1130f944 */
  if (!C.cf) goto L_1130f944;
  /* 1130f921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f924 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1130f928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f92b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1130f931 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f934 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1130f938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130f93b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1130f942 jmp 0x1130f903 */
  goto L_1130f903;
L_1130f944:;
  /* 1130f944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130f947 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f94a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1130f94d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130f950 push edx */
  push32((uint32_t)(EDX));
  /* 1130f951 call 0x1130fca0 */
  push32(0x1130f956u); f_1130fca0();
  /* 1130f956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130f959:;
  /* 1130f959 jmp 0x1130f960 */
  goto L_1130f960;
L_1130f95b:;
  /* 1130f95b jmp 0x1130f7b1 */
  goto L_1130f7b1;
L_1130f960:;
  /* 1130f960 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1130f962 call 0x1130a050 */
  push32(0x1130f967u); f_1130a050();
  /* 1130f967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130f96a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130f96d pop esi */
  ESI = (pop32());
  /* 1130f96e mov esp, ebp */
  ESP = (EBP);
  /* 1130f970 pop ebp */
  EBP = (pop32());
  /* 1130f971 ret  */
  ESPCHK(0x1130f790u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1130f980 (183 bytes, 57 insns) */
void f_1130f980(void) {
  FTRACE(0x1130f980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130f980 push ebp */
  push32((uint32_t)(EBP));
  /* 1130f981 mov ebp, esp */
  EBP = (ESP);
  /* 1130f983 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f987 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f98d jae 0x1130fa1a */
  if (!C.cf) goto L_1130fa1a;
  /* 1130f993 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f996 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130f999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f99c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130f99f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130f9a2 mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130f9a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f9ad jne 0x1130fa1a */
  if (!C.zf) goto L_1130fa1a;
  /* 1130f9af cmp dword ptr [0x1133277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1133277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f9b6 jne 0x1130f9fa */
  if (!C.zf) goto L_1130f9fa;
  /* 1130f9b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f9bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1130f9be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f9c2 je 0x1130f9d2 */
  if (C.zf) goto L_1130f9d2;
  /* 1130f9c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f9c8 je 0x1130f9e0 */
  if (C.zf) goto L_1130f9e0;
  /* 1130f9ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130f9ce je 0x1130f9ee */
  if (C.zf) goto L_1130f9ee;
  /* 1130f9d0 jmp 0x1130f9fa */
  goto L_1130f9fa;
L_1130f9d2:;
  /* 1130f9d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f9d5 push edx */
  push32((uint32_t)(EDX));
  /* 1130f9d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1130f9d8 call dword ptr [0x1133531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133531c))), 0x1130f9deu);
  /* 1130f9de jmp 0x1130f9fa */
  goto L_1130f9fa;
L_1130f9e0:;
  /* 1130f9e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1130f9e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1130f9e6 call dword ptr [0x1133531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133531c))), 0x1130f9ecu);
  /* 1130f9ec jmp 0x1130f9fa */
  goto L_1130f9fa;
L_1130f9ee:;
  /* 1130f9ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130f9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1130f9f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1130f9f4 call dword ptr [0x1133531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133531c))), 0x1130f9fau);
L_1130f9fa:;
  /* 1130f9fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130f9fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1130fa00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fa03 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1130fa06 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fa09 mov ecx, dword ptr [edx*4 + 0x11334160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130fa10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130fa13 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1130fa16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130fa18 jmp 0x1130fa33 */
  goto L_1130fa33;
L_1130fa1a:;
  /* 1130fa1a call 0x1130e480 */
  push32(0x1130fa1fu); f_1130e480();
  /* 1130fa1f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1130fa25 call 0x1130e490 */
  push32(0x1130fa2au); f_1130e490();
  /* 1130fa2a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130fa30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1130fa33:;
  /* 1130fa33 mov esp, ebp */
  ESP = (EBP);
  /* 1130fa35 pop ebp */
  EBP = (pop32());
  /* 1130fa36 ret  */
  ESPCHK(0x1130f980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa40 @ 0x1130fa40 (216 bytes, 63 insns) */
void f_1130fa40(void) {
  FTRACE(0x1130fa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fa40 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fa41 mov ebp, esp */
  EBP = (ESP);
  /* 1130fa43 push ecx */
  push32((uint32_t)(ECX));
  /* 1130fa44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fa47 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fa4d jae 0x1130fafb */
  if (!C.cf) goto L_1130fafb;
  /* 1130fa53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fa56 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130fa59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fa5c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130fa5f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fa62 mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130fa69 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1130fa6e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130fa71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130fa73 je 0x1130fafb */
  if (C.zf) goto L_1130fafb;
  /* 1130fa79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fa7c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1130fa7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fa82 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1130fa85 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fa88 mov ecx, dword ptr [edx*4 + 0x11334160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130fa8f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fa93 je 0x1130fafb */
  if (C.zf) goto L_1130fafb;
  /* 1130fa95 cmp dword ptr [0x1133277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1133277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fa9c jne 0x1130fada */
  if (!C.zf) goto L_1130fada;
  /* 1130fa9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130faa1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130faa4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130faa8 je 0x1130fab8 */
  if (C.zf) goto L_1130fab8;
  /* 1130faaa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130faae je 0x1130fac4 */
  if (C.zf) goto L_1130fac4;
  /* 1130fab0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fab4 je 0x1130fad0 */
  if (C.zf) goto L_1130fad0;
  /* 1130fab6 jmp 0x1130fada */
  goto L_1130fada;
L_1130fab8:;
  /* 1130fab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130faba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1130fabc call dword ptr [0x1133531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133531c))), 0x1130fac2u);
  /* 1130fac2 jmp 0x1130fada */
  goto L_1130fada;
L_1130fac4:;
  /* 1130fac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130fac6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1130fac8 call dword ptr [0x1133531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133531c))), 0x1130faceu);
  /* 1130face jmp 0x1130fada */
  goto L_1130fada;
L_1130fad0:;
  /* 1130fad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1130fad2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1130fad4 call dword ptr [0x1133531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133531c))), 0x1130fadau);
L_1130fada:;
  /* 1130fada mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fadd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130fae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fae3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130fae6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fae9 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130faf0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1130faf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1130faf9 jmp 0x1130fb14 */
  goto L_1130fb14;
L_1130fafb:;
  /* 1130fafb call 0x1130e480 */
  push32(0x1130fb00u); f_1130e480();
  /* 1130fb00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1130fb06 call 0x1130e490 */
  push32(0x1130fb0bu); f_1130e490();
  /* 1130fb0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130fb11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1130fb14:;
  /* 1130fb14 mov esp, ebp */
  ESP = (EBP);
  /* 1130fb16 pop ebp */
  EBP = (pop32());
  /* 1130fb17 ret  */
  ESPCHK(0x1130fa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb20 @ 0x1130fb20 (102 bytes, 30 insns) */
void f_1130fb20(void) {
  FTRACE(0x1130fb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fb21 mov ebp, esp */
  EBP = (ESP);
  /* 1130fb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fb26 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fb2c jae 0x1130fb6b */
  if (!C.cf) goto L_1130fb6b;
  /* 1130fb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fb31 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1130fb34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fb37 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1130fb3a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fb3d mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 1130fb44 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1130fb49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1130fb4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130fb4e je 0x1130fb6b */
  if (C.zf) goto L_1130fb6b;
  /* 1130fb50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fb53 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1130fb56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fb59 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1130fb5c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fb5f mov ecx, dword ptr [edx*4 + 0x11334160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11334160)));
  /* 1130fb66 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1130fb69 jmp 0x1130fb84 */
  goto L_1130fb84;
L_1130fb6b:;
  /* 1130fb6b call 0x1130e480 */
  push32(0x1130fb70u); f_1130e480();
  /* 1130fb70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1130fb76 call 0x1130e490 */
  push32(0x1130fb7bu); f_1130e490();
  /* 1130fb7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130fb81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1130fb84:;
  /* 1130fb84 pop ebp */
  EBP = (pop32());
  /* 1130fb85 ret  */
  ESPCHK(0x1130fb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb90 @ 0x1130fb90 (260 bytes, 83 insns) */
void f_1130fb90(void) {
  FTRACE(0x1130fb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fb91 mov ebp, esp */
  EBP = (ESP);
  /* 1130fb93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130fb96 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130fb9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130fb9d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1130fba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130fba2 je 0x1130fbad */
  if (C.zf) goto L_1130fbad;
  /* 1130fba4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1130fba7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1130fbaa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1130fbad:;
  /* 1130fbad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130fbb0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1130fbb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130fbb8 je 0x1130fbc2 */
  if (C.zf) goto L_1130fbc2;
  /* 1130fbba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1130fbbd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1130fbbf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1130fbc2:;
  /* 1130fbc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1130fbc5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1130fbcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130fbcd je 0x1130fbd8 */
  if (C.zf) goto L_1130fbd8;
  /* 1130fbcf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1130fbd2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1130fbd5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1130fbd8:;
  /* 1130fbd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fbdb push eax */
  push32((uint32_t)(EAX));
  /* 1130fbdc call dword ptr [0x113353dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353dc))), 0x1130fbe2u);
  /* 1130fbe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130fbe5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fbe9 jne 0x1130fc02 */
  if (!C.zf) goto L_1130fc02;
  /* 1130fbeb call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x1130fbf1u);
  /* 1130fbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1130fbf2 call 0x1130e3e0 */
  push32(0x1130fbf7u); f_1130e3e0();
  /* 1130fbf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fbfa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130fbfd jmp 0x1130fc90 */
  goto L_1130fc90;
L_1130fc02:;
  /* 1130fc02 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fc06 jne 0x1130fc13 */
  if (!C.zf) goto L_1130fc13;
  /* 1130fc08 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1130fc0b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1130fc0e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1130fc11 jmp 0x1130fc22 */
  goto L_1130fc22;
L_1130fc13:;
  /* 1130fc13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fc17 jne 0x1130fc22 */
  if (!C.zf) goto L_1130fc22;
  /* 1130fc19 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1130fc1c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1130fc1f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1130fc22:;
  /* 1130fc22 call 0x1130f790 */
  push32(0x1130fc27u); f_1130f790();
  /* 1130fc27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130fc2a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fc2e jne 0x1130fc4b */
  if (!C.zf) goto L_1130fc4b;
  /* 1130fc30 call 0x1130e480 */
  push32(0x1130fc35u); f_1130e480();
  /* 1130fc35 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1130fc3b call 0x1130e490 */
  push32(0x1130fc40u); f_1130e490();
  /* 1130fc40 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1130fc46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130fc49 jmp 0x1130fc90 */
  goto L_1130fc90;
L_1130fc4b:;
  /* 1130fc4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fc4e push eax */
  push32((uint32_t)(EAX));
  /* 1130fc4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fc52 push ecx */
  push32((uint32_t)(ECX));
  /* 1130fc53 call 0x1130f980 */
  push32(0x1130fc58u); f_1130f980();
  /* 1130fc58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fc5b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1130fc5e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1130fc61 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1130fc64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fc67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130fc6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fc6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130fc70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fc73 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130fc7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1130fc7d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1130fc81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fc84 push ecx */
  push32((uint32_t)(ECX));
  /* 1130fc85 call 0x1130fd30 */
  push32(0x1130fc8au); f_1130fd30();
  /* 1130fc8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fc8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1130fc90:;
  /* 1130fc90 mov esp, ebp */
  ESP = (EBP);
  /* 1130fc92 pop ebp */
  EBP = (pop32());
  /* 1130fc93 ret  */
  ESPCHK(0x1130fb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x1130fca0 (134 bytes, 44 insns) */
void f_1130fca0(void) {
  FTRACE(0x1130fca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fca1 mov ebp, esp */
  EBP = (ESP);
  /* 1130fca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1130fca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fca7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130fcaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fcad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130fcb0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fcb3 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130fcba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fcbc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1130fcbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130fcc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fcc6 jne 0x1130fd01 */
  if (!C.zf) goto L_1130fd01;
  /* 1130fcc8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1130fcca call 0x11309fb0 */
  push32(0x1130fccfu); f_11309fb0();
  /* 1130fccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fcd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130fcd5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fcd9 jne 0x1130fcf7 */
  if (!C.zf) goto L_1130fcf7;
  /* 1130fcdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130fcde add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fce1 push edx */
  push32((uint32_t)(EDX));
  /* 1130fce2 call dword ptr [0x11335364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335364))), 0x1130fce8u);
  /* 1130fce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130fceb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130fcee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fcf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130fcf4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1130fcf7:;
  /* 1130fcf7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1130fcf9 call 0x1130a050 */
  push32(0x1130fcfeu); f_1130a050();
  /* 1130fcfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1130fd01:;
  /* 1130fd01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fd04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130fd07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fd0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130fd0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fd10 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130fd17 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1130fd1b push eax */
  push32((uint32_t)(EAX));
  /* 1130fd1c call dword ptr [0x11335354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335354))), 0x1130fd22u);
  /* 1130fd22 mov esp, ebp */
  ESP = (EBP);
  /* 1130fd24 pop ebp */
  EBP = (pop32());
  /* 1130fd25 ret  */
  ESPCHK(0x1130fca0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1130fd30 (38 bytes, 13 insns) */
void f_1130fd30(void) {
  FTRACE(0x1130fd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fd31 mov ebp, esp */
  EBP = (ESP);
  /* 1130fd33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fd36 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1130fd39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fd3c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1130fd3f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1130fd42 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 1130fd49 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1130fd4d push eax */
  push32((uint32_t)(EAX));
  /* 1130fd4e call dword ptr [0x11335350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335350))), 0x1130fd54u);
  /* 1130fd54 pop ebp */
  EBP = (pop32());
  /* 1130fd55 ret  */
  ESPCHK(0x1130fd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd60 @ 0x1130fd60 (218 bytes, 63 insns) */
void f_1130fd60(void) {
  FTRACE(0x1130fd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fd61 mov ebp, esp */
  EBP = (ESP);
  /* 1130fd63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130fd66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130fd6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1130fd6f call 0x11309fb0 */
  push32(0x1130fd74u); f_11309fb0();
  /* 1130fd74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fd77 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1130fd7e jmp 0x1130fd89 */
  goto L_1130fd89;
L_1130fd80:;
  /* 1130fd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fd83 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fd86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1130fd89:;
  /* 1130fd89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fd8c cmp ecx, dword ptr [0x11333e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11333e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fd92 jge 0x1130fe29 */
  if ((C.sf==C.of)) goto L_1130fe29;
  /* 1130fd98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fd9b mov eax, dword ptr [0x11332b18] */
  EAX = (r32((uint32_t)(0x11332b18)));
  /* 1130fda0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fda4 je 0x1130fe24 */
  if (C.zf) goto L_1130fe24;
  /* 1130fda6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fda9 mov edx, dword ptr [0x11332b18] */
  EDX = (r32((uint32_t)(0x11332b18)));
  /* 1130fdaf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1130fdb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130fdb5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1130fdbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130fdbd je 0x1130fde1 */
  if (C.zf) goto L_1130fde1;
  /* 1130fdbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fdc2 mov eax, dword ptr [0x11332b18] */
  EAX = (r32((uint32_t)(0x11332b18)));
  /* 1130fdc7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1130fdca push ecx */
  push32((uint32_t)(ECX));
  /* 1130fdcb call 0x11310b50 */
  push32(0x1130fdd0u); f_11310b50();
  /* 1130fdd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fdd3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fdd6 je 0x1130fde1 */
  if (C.zf) goto L_1130fde1;
  /* 1130fdd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130fddb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fdde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1130fde1:;
  /* 1130fde1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fde5 jl 0x1130fe24 */
  if ((C.sf!=C.of)) goto L_1130fe24;
  /* 1130fde7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fdea mov ecx, dword ptr [0x11332b18] */
  ECX = (r32((uint32_t)(0x11332b18)));
  /* 1130fdf0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1130fdf3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fdf6 push edx */
  push32((uint32_t)(EDX));
  /* 1130fdf7 call dword ptr [0x11335390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335390))), 0x1130fdfdu);
  /* 1130fdfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1130fdff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fe02 mov ecx, dword ptr [0x11332b18] */
  ECX = (r32((uint32_t)(0x11332b18)));
  /* 1130fe08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1130fe0b push edx */
  push32((uint32_t)(EDX));
  /* 1130fe0c call 0x11307040 */
  push32(0x1130fe11u); f_11307040();
  /* 1130fe11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fe14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fe17 mov ecx, dword ptr [0x11332b18] */
  ECX = (r32((uint32_t)(0x11332b18)));
  /* 1130fe1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1130fe24:;
  /* 1130fe24 jmp 0x1130fd80 */
  goto L_1130fd80;
L_1130fe29:;
  /* 1130fe29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130fe2b call 0x1130a050 */
  push32(0x1130fe30u); f_1130a050();
  /* 1130fe30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fe33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130fe36 mov esp, ebp */
  ESP = (EBP);
  /* 1130fe38 pop ebp */
  EBP = (pop32());
  /* 1130fe39 ret  */
  ESPCHK(0x1130fd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe40 @ 0x1130fe40 (68 bytes, 26 insns) */
void f_1130fe40(void) {
  FTRACE(0x1130fe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fe40 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fe41 mov ebp, esp */
  EBP = (ESP);
  /* 1130fe43 push ecx */
  push32((uint32_t)(ECX));
  /* 1130fe44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fe48 jne 0x1130fe56 */
  if (!C.zf) goto L_1130fe56;
  /* 1130fe4a push 0 */
  push32((uint32_t)(0x0u));
  /* 1130fe4c call 0x1130ffb0 */
  push32(0x1130fe51u); f_1130ffb0();
  /* 1130fe51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fe54 jmp 0x1130fe80 */
  goto L_1130fe80;
L_1130fe56:;
  /* 1130fe56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fe59 push eax */
  push32((uint32_t)(EAX));
  /* 1130fe5a call 0x1130f3c0 */
  push32(0x1130fe5fu); f_1130f3c0();
  /* 1130fe5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fe62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fe65 push ecx */
  push32((uint32_t)(ECX));
  /* 1130fe66 call 0x1130fe90 */
  push32(0x1130fe6bu); f_1130fe90();
  /* 1130fe6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fe6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1130fe71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fe74 push edx */
  push32((uint32_t)(EDX));
  /* 1130fe75 call 0x1130f430 */
  push32(0x1130fe7au); f_1130f430();
  /* 1130fe7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fe7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1130fe80:;
  /* 1130fe80 mov esp, ebp */
  ESP = (EBP);
  /* 1130fe82 pop ebp */
  EBP = (pop32());
  /* 1130fe83 ret  */
  ESPCHK(0x1130fe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x1130fe90 (65 bytes, 26 insns) */
void f_1130fe90(void) {
  FTRACE(0x1130fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fe91 mov ebp, esp */
  EBP = (ESP);
  /* 1130fe93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fe96 push eax */
  push32((uint32_t)(EAX));
  /* 1130fe97 call 0x1130fee0 */
  push32(0x1130fe9cu); f_1130fee0();
  /* 1130fe9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fe9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1130fea1 je 0x1130fea8 */
  if (C.zf) goto L_1130fea8;
  /* 1130fea3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1130fea6 jmp 0x1130fecf */
  goto L_1130fecf;
L_1130fea8:;
  /* 1130fea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130feab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130feae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1130feb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130feb6 je 0x1130fecd */
  if (C.zf) goto L_1130fecd;
  /* 1130feb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130febb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1130febe push ecx */
  push32((uint32_t)(ECX));
  /* 1130febf call 0x11310ca0 */
  push32(0x1130fec4u); f_11310ca0();
  /* 1130fec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130fec7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1130fec9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130fecb jmp 0x1130fecf */
  goto L_1130fecf;
L_1130fecd:;
  /* 1130fecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1130fecf:;
  /* 1130fecf pop ebp */
  EBP = (pop32());
  /* 1130fed0 ret  */
  ESPCHK(0x1130fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fee0 @ 0x1130fee0 (183 bytes, 62 insns) */
void f_1130fee0(void) {
  FTRACE(0x1130fee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130fee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130fee1 mov ebp, esp */
  EBP = (ESP);
  /* 1130fee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130fee6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130feed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1130fef0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1130fef3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130fef6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130fef9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1130fefc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130feff jne 0x1130ff7b */
  if (!C.zf) goto L_1130ff7b;
  /* 1130ff01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130ff07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1130ff0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1130ff0f je 0x1130ff7b */
  if (C.zf) goto L_1130ff7b;
  /* 1130ff11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1130ff19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ff1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1130ff1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ff23 jle 0x1130ff7b */
  if ((C.zf||C.sf!=C.of)) goto L_1130ff7b;
  /* 1130ff25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130ff28 push edx */
  push32((uint32_t)(EDX));
  /* 1130ff29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1130ff2f push ecx */
  push32((uint32_t)(ECX));
  /* 1130ff30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1130ff36 push eax */
  push32((uint32_t)(EAX));
  /* 1130ff37 call 0x1130ee50 */
  push32(0x1130ff3cu); f_1130ee50();
  /* 1130ff3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ff3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ff42 jne 0x1130ff65 */
  if (!C.zf) goto L_1130ff65;
  /* 1130ff44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1130ff4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1130ff50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1130ff52 je 0x1130ff63 */
  if (C.zf) goto L_1130ff63;
  /* 1130ff54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130ff5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1130ff5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1130ff63:;
  /* 1130ff63 jmp 0x1130ff7b */
  goto L_1130ff7b;
L_1130ff65:;
  /* 1130ff65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1130ff6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1130ff6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1130ff74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1130ff7b:;
  /* 1130ff7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1130ff84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1130ff86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1130ff89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1130ff90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1130ff93 mov esp, ebp */
  ESP = (EBP);
  /* 1130ff95 pop ebp */
  EBP = (pop32());
  /* 1130ff96 ret  */
  ESPCHK(0x1130fee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffa0 @ 0x1130ffa0 (15 bytes, 7 insns) */
void f_1130ffa0(void) {
  FTRACE(0x1130ffa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ffa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ffa1 mov ebp, esp */
  EBP = (ESP);
  /* 1130ffa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1130ffa5 call 0x1130ffb0 */
  push32(0x1130ffaau); f_1130ffb0();
  /* 1130ffaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ffad pop ebp */
  EBP = (pop32());
  /* 1130ffae ret  */
  ESPCHK(0x1130ffa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffb0 @ 0x1130ffb0 (319 bytes, 94 insns) */
void f_1130ffb0(void) {
  FTRACE(0x1130ffb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1130ffb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1130ffb1 mov ebp, esp */
  EBP = (ESP);
  /* 1130ffb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1130ffb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1130ffbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1130ffc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1130ffc6 call 0x11309fb0 */
  push32(0x1130ffcbu); f_11309fb0();
  /* 1130ffcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ffce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1130ffd5 jmp 0x1130ffe0 */
  goto L_1130ffe0;
L_1130ffd7:;
  /* 1130ffd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130ffda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1130ffdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1130ffe0:;
  /* 1130ffe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130ffe3 cmp ecx, dword ptr [0x11333e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11333e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130ffe9 jge 0x113100d3 */
  if ((C.sf==C.of)) goto L_113100d3;
  /* 1130ffef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1130fff2 mov eax, dword ptr [0x11332b18] */
  EAX = (r32((uint32_t)(0x11332b18)));
  /* 1130fff7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1130fffb je 0x113100ce */
  if (C.zf) goto L_113100ce;
  /* 11310001 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310004 mov edx, dword ptr [0x11332b18] */
  EDX = (r32((uint32_t)(0x11332b18)));
  /* 1131000a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1131000d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11310010 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11310016 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11310018 je 0x113100ce */
  if (C.zf) goto L_113100ce;
  /* 1131001e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310021 mov eax, dword ptr [0x11332b18] */
  EAX = (r32((uint32_t)(0x11332b18)));
  /* 11310026 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11310029 push ecx */
  push32((uint32_t)(ECX));
  /* 1131002a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131002d push edx */
  push32((uint32_t)(EDX));
  /* 1131002e call 0x1130f400 */
  push32(0x11310033u); f_1130f400();
  /* 11310033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310036 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310039 mov ecx, dword ptr [0x11332b18] */
  ECX = (r32((uint32_t)(0x11332b18)));
  /* 1131003f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11310042 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11310045 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1131004a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131004c je 0x113100b5 */
  if (C.zf) goto L_113100b5;
  /* 1131004e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310052 jne 0x11310079 */
  if (!C.zf) goto L_11310079;
  /* 11310054 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310057 mov edx, dword ptr [0x11332b18] */
  EDX = (r32((uint32_t)(0x11332b18)));
  /* 1131005d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11310060 push eax */
  push32((uint32_t)(EAX));
  /* 11310061 call 0x1130fe90 */
  push32(0x11310066u); f_1130fe90();
  /* 11310066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310069 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131006c je 0x11310077 */
  if (C.zf) goto L_11310077;
  /* 1131006e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310071 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310074 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11310077:;
  /* 11310077 jmp 0x113100b5 */
  goto L_113100b5;
L_11310079:;
  /* 11310079 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131007d jne 0x113100b5 */
  if (!C.zf) goto L_113100b5;
  /* 1131007f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310082 mov eax, dword ptr [0x11332b18] */
  EAX = (r32((uint32_t)(0x11332b18)));
  /* 11310087 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1131008a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1131008d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11310090 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11310092 je 0x113100b5 */
  if (C.zf) goto L_113100b5;
  /* 11310094 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310097 mov ecx, dword ptr [0x11332b18] */
  ECX = (r32((uint32_t)(0x11332b18)));
  /* 1131009d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113100a0 push edx */
  push32((uint32_t)(EDX));
  /* 113100a1 call 0x1130fe90 */
  push32(0x113100a6u); f_1130fe90();
  /* 113100a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113100a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113100ac jne 0x113100b5 */
  if (!C.zf) goto L_113100b5;
  /* 113100ae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_113100b5:;
  /* 113100b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113100b8 mov ecx, dword ptr [0x11332b18] */
  ECX = (r32((uint32_t)(0x11332b18)));
  /* 113100be mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113100c1 push edx */
  push32((uint32_t)(EDX));
  /* 113100c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113100c5 push eax */
  push32((uint32_t)(EAX));
  /* 113100c6 call 0x1130f470 */
  push32(0x113100cbu); f_1130f470();
  /* 113100cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113100ce:;
  /* 113100ce jmp 0x1130ffd7 */
  goto L_1130ffd7;
L_113100d3:;
  /* 113100d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113100d5 call 0x1130a050 */
  push32(0x113100dau); f_1130a050();
  /* 113100da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113100dd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113100e1 jne 0x113100e8 */
  if (!C.zf) goto L_113100e8;
  /* 113100e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113100e6 jmp 0x113100eb */
  goto L_113100eb;
L_113100e8:;
  /* 113100e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113100eb:;
  /* 113100eb mov esp, ebp */
  ESP = (EBP);
  /* 113100ed pop ebp */
  EBP = (pop32());
  /* 113100ee ret  */
  ESPCHK(0x1130ffb0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x113100f0 (15 bytes, 7 insns) */
void f_113100f0(void) {
  FTRACE(0x113100f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113100f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113100f1 mov ebp, esp */
  EBP = (ESP);
  /* 113100f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113100f5 call 0x11305520 */
  push32(0x113100fau); f_11305520();
  /* 113100fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113100fd pop ebp */
  EBP = (pop32());
  /* 113100fe ret  */
  ESPCHK(0x113100f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010100 @ 0x11310100 (1007 bytes, 269 insns) */
void f_11310100(void) {
  FTRACE(0x11310100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310100 push ebp */
  push32((uint32_t)(EBP));
  /* 11310101 mov ebp, esp */
  EBP = (ESP);
  /* 11310103 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310109 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131010d jl 0x11310115 */
  if ((C.sf!=C.of)) goto L_11310115;
  /* 1131010f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310113 jle 0x1131011c */
  if ((C.zf||C.sf!=C.of)) goto L_1131011c;
L_11310115:;
  /* 11310115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310117 jmp 0x113104eb */
  goto L_113104eb;
L_1131011c:;
  /* 1131011c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1131011e call 0x11309fb0 */
  push32(0x11310123u); f_11309fb0();
  /* 11310123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310126 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1131012d mov eax, dword ptr [0x11332b04] */
  EAX = (r32((uint32_t)(0x11332b04)));
  /* 11310132 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310135 mov dword ptr [0x11332b04], eax */
  w32((uint32_t)(0x11332b04), (EAX));
L_1131013a:;
  /* 1131013a cmp dword ptr [0x11332b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310141 je 0x1131014d */
  if (C.zf) goto L_1131014d;
  /* 11310143 push 1 */
  push32((uint32_t)(0x1u));
  /* 11310145 call dword ptr [0x1133530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1133530c))), 0x1131014bu);
  /* 1131014b jmp 0x1131013a */
  goto L_1131013a;
L_1131014d:;
  /* 1131014d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310151 je 0x11310191 */
  if (C.zf) goto L_11310191;
  /* 11310153 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310157 je 0x11310171 */
  if (C.zf) goto L_11310171;
  /* 11310159 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1131015c push ecx */
  push32((uint32_t)(ECX));
  /* 1131015d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310160 push edx */
  push32((uint32_t)(EDX));
  /* 11310161 call 0x113104f0 */
  push32(0x11310166u); f_113104f0();
  /* 11310166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310169 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1131016f jmp 0x11310183 */
  goto L_11310183;
L_11310171:;
  /* 11310171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310174 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310177 mov ecx, dword ptr [eax + 0x113314dc] */
  ECX = (r32((uint32_t)(EAX + 0x113314dc)));
  /* 1131017d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11310183:;
  /* 11310183 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11310189 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1131018c jmp 0x113104cb */
  goto L_113104cb;
L_11310191:;
  /* 11310191 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11310198 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1131019f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113101a3 je 0x113104c3 */
  if (C.zf) goto L_113104c3;
  /* 113101a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113101ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113101af cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113101b2 jne 0x113103d4 */
  if (!C.zf) goto L_113103d4;
  /* 113101b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113101bb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113101bf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113101c2 jne 0x113103d4 */
  if (!C.zf) goto L_113103d4;
  /* 113101c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113101cb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 113101cf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113101d2 jne 0x113103d4 */
  if (!C.zf) goto L_113103d4;
  /* 113101d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113101db mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_113101e1:;
  /* 113101e1 push 0x1132e45c */
  push32((uint32_t)(0x1132e45cu));
  /* 113101e6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113101ec push ecx */
  push32((uint32_t)(ECX));
  /* 113101ed call 0x11312350 */
  push32(0x113101f2u); f_11312350();
  /* 113101f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113101f5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 113101fb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310202 je 0x1131022d */
  if (C.zf) goto L_1131022d;
  /* 11310204 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1131020a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310210 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11310216 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131021d je 0x1131022d */
  if (C.zf) goto L_1131022d;
  /* 1131021f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11310225 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11310228 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131022b jne 0x11310253 */
  if (!C.zf) goto L_11310253;
L_1131022d:;
  /* 1131022d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310231 je 0x1131024c */
  if (C.zf) goto L_1131024c;
  /* 11310233 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11310235 call 0x1130a050 */
  push32(0x1131023au); f_1130a050();
  /* 1131023a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131023d mov edx, dword ptr [0x11332b04] */
  EDX = (r32((uint32_t)(0x11332b04)));
  /* 11310243 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310246 mov dword ptr [0x11332b04], edx */
  w32((uint32_t)(0x11332b04), (EDX));
L_1131024c:;
  /* 1131024c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131024e jmp 0x113104eb */
  goto L_113104eb;
L_11310253:;
  /* 11310253 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1131025a jmp 0x11310265 */
  goto L_11310265;
L_1131025c:;
  /* 1131025c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131025f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310262 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11310265:;
  /* 11310265 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310269 jg 0x113102b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_113102b3;
  /* 1131026b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11310271 push ecx */
  push32((uint32_t)(ECX));
  /* 11310272 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11310278 push edx */
  push32((uint32_t)(EDX));
  /* 11310279 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131027c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131027f mov ecx, dword ptr [eax + 0x113314d8] */
  ECX = (r32((uint32_t)(EAX + 0x113314d8)));
  /* 11310285 push ecx */
  push32((uint32_t)(ECX));
  /* 11310286 call 0x11312310 */
  push32(0x1131028bu); f_11312310();
  /* 1131028b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131028e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310290 jne 0x113102b1 */
  if (!C.zf) goto L_113102b1;
  /* 11310292 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11310295 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310298 mov eax, dword ptr [edx + 0x113314d8] */
  EAX = (r32((uint32_t)(EDX + 0x113314d8)));
  /* 1131029e push eax */
  push32((uint32_t)(EAX));
  /* 1131029f call 0x113093e0 */
  push32(0x113102a4u); f_113093e0();
  /* 113102a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113102a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113102ad jne 0x113102b1 */
  if (!C.zf) goto L_113102b1;
  /* 113102af jmp 0x113102b3 */
  goto L_113102b3;
L_113102b1:;
  /* 113102b1 jmp 0x1131025c */
  goto L_1131025c;
L_113102b3:;
  /* 113102b3 push 0x1132e458 */
  push32((uint32_t)(0x1132e458u));
  /* 113102b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113102be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113102c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 113102c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113102cd push edx */
  push32((uint32_t)(EDX));
  /* 113102ce call 0x113122d0 */
  push32(0x113102d3u); f_113122d0();
  /* 113102d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113102d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 113102dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113102e3 jne 0x11310319 */
  if (!C.zf) goto L_11310319;
  /* 113102e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113102eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113102ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113102f1 je 0x11310319 */
  if (C.zf) goto L_11310319;
  /* 113102f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113102f7 je 0x11310312 */
  if (C.zf) goto L_11310312;
  /* 113102f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113102fb call 0x1130a050 */
  push32(0x11310300u); f_1130a050();
  /* 11310300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310303 mov edx, dword ptr [0x11332b04] */
  EDX = (r32((uint32_t)(0x11332b04)));
  /* 11310309 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131030c mov dword ptr [0x11332b04], edx */
  w32((uint32_t)(0x11332b04), (EDX));
L_11310312:;
  /* 11310312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310314 jmp 0x113104eb */
  goto L_113104eb;
L_11310319:;
  /* 11310319 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131031d jg 0x1131036a */
  if ((!C.zf&&C.sf==C.of)) goto L_1131036a;
  /* 1131031f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11310325 push eax */
  push32((uint32_t)(EAX));
  /* 11310326 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1131032c push ecx */
  push32((uint32_t)(ECX));
  /* 1131032d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11310333 push edx */
  push32((uint32_t)(EDX));
  /* 11310334 call 0x11309dd0 */
  push32(0x11310339u); f_11309dd0();
  /* 11310339 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131033c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11310342 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1131034a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11310350 push ecx */
  push32((uint32_t)(ECX));
  /* 11310351 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11310354 push edx */
  push32((uint32_t)(EDX));
  /* 11310355 call 0x113104f0 */
  push32(0x1131035au); f_113104f0();
  /* 1131035a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131035d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131035f je 0x1131036a */
  if (C.zf) goto L_1131036a;
  /* 11310361 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310364 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310367 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1131036a:;
  /* 1131036a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11310370 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310376 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1131037c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11310382 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11310385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310387 je 0x11310398 */
  if (C.zf) goto L_11310398;
  /* 11310389 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1131038f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310392 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11310398:;
  /* 11310398 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1131039e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113103a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113103a3 jne 0x113101e1 */
  if (!C.zf) goto L_113101e1;
  /* 113103a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113103ad je 0x113103bc */
  if (C.zf) goto L_113103bc;
  /* 113103af call 0x11310690 */
  push32(0x113103b4u); f_11310690();
  /* 113103b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 113103ba jmp 0x113103c6 */
  goto L_113103c6;
L_113103bc:;
  /* 113103bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_113103c6:;
  /* 113103c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 113103cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113103cf jmp 0x113104c1 */
  goto L_113104c1;
L_113103d4:;
  /* 113103d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113103d7 push edx */
  push32((uint32_t)(EDX));
  /* 113103d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113103da push 0 */
  push32((uint32_t)(0x0u));
  /* 113103dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 113103e2 push eax */
  push32((uint32_t)(EAX));
  /* 113103e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113103e6 push ecx */
  push32((uint32_t)(ECX));
  /* 113103e7 call 0x11310790 */
  push32(0x113103ecu); f_11310790();
  /* 113103ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113103ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113103f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113103f6 je 0x113104c1 */
  if (C.zf) goto L_113104c1;
  /* 113103fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11310403 jmp 0x1131040e */
  goto L_1131040e;
L_11310405:;
  /* 11310405 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11310408 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131040b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1131040e:;
  /* 1131040e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310412 jg 0x11310470 */
  if ((!C.zf&&C.sf==C.of)) goto L_11310470;
  /* 11310414 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310418 je 0x1131046e */
  if (C.zf) goto L_1131046e;
  /* 1131041a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131041d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310420 mov ecx, dword ptr [eax + 0x113314dc] */
  ECX = (r32((uint32_t)(EAX + 0x113314dc)));
  /* 11310426 push ecx */
  push32((uint32_t)(ECX));
  /* 11310427 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1131042d push edx */
  push32((uint32_t)(EDX));
  /* 1131042e call 0x11312240 */
  push32(0x11310433u); f_11312240();
  /* 11310433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310438 je 0x11310465 */
  if (C.zf) goto L_11310465;
  /* 1131043a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11310440 push eax */
  push32((uint32_t)(EAX));
  /* 11310441 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11310444 push ecx */
  push32((uint32_t)(ECX));
  /* 11310445 call 0x113104f0 */
  push32(0x1131044au); f_113104f0();
  /* 1131044a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131044d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131044f je 0x1131045c */
  if (C.zf) goto L_1131045c;
  /* 11310451 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310454 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310457 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1131045a jmp 0x11310463 */
  goto L_11310463;
L_1131045c:;
  /* 1131045c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11310463:;
  /* 11310463 jmp 0x1131046e */
  goto L_1131046e;
L_11310465:;
  /* 11310465 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310468 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131046b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1131046e:;
  /* 1131046e jmp 0x11310405 */
  goto L_11310405;
L_11310470:;
  /* 11310470 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310474 je 0x1131049b */
  if (C.zf) goto L_1131049b;
  /* 11310476 call 0x11310690 */
  push32(0x1131047bu); f_11310690();
  /* 1131047b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1131047e push 2 */
  push32((uint32_t)(0x2u));
  /* 11310480 mov ecx, dword ptr [0x113314dc] */
  ECX = (r32((uint32_t)(0x113314dc)));
  /* 11310486 push ecx */
  push32((uint32_t)(ECX));
  /* 11310487 call 0x11307040 */
  push32(0x1131048cu); f_11307040();
  /* 1131048c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131048f mov dword ptr [0x113314dc], 0 */
  w32((uint32_t)(0x113314dc), (0x0u));
  /* 11310499 jmp 0x113104c1 */
  goto L_113104c1;
L_1131049b:;
  /* 1131049b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131049f je 0x113104ae */
  if (C.zf) goto L_113104ae;
  /* 113104a1 call 0x11310690 */
  push32(0x113104a6u); f_11310690();
  /* 113104a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 113104ac jmp 0x113104b8 */
  goto L_113104b8;
L_113104ae:;
  /* 113104ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_113104b8:;
  /* 113104b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 113104be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113104c1:;
  /* 113104c1 jmp 0x113104cb */
  goto L_113104cb;
L_113104c3:;
  /* 113104c3 call 0x11310690 */
  push32(0x113104c8u); f_11310690();
  /* 113104c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113104cb:;
  /* 113104cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113104cf je 0x113104e8 */
  if (C.zf) goto L_113104e8;
  /* 113104d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113104d3 call 0x1130a050 */
  push32(0x113104d8u); f_1130a050();
  /* 113104d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113104db mov eax, dword ptr [0x11332b04] */
  EAX = (r32((uint32_t)(0x11332b04)));
  /* 113104e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113104e3 mov dword ptr [0x11332b04], eax */
  w32((uint32_t)(0x11332b04), (EAX));
L_113104e8:;
  /* 113104e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113104eb:;
  /* 113104eb mov esp, ebp */
  ESP = (EBP);
  /* 113104ed pop ebp */
  EBP = (pop32());
  /* 113104ee ret  */
  ESPCHK(0x11310100u, _esp0);
  ESP += 4; return;
}

/* FUN_100104f0 @ 0x113104f0 (403 bytes, 117 insns) */
void f_113104f0(void) {
  FTRACE(0x113104f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113104f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113104f1 mov ebp, esp */
  EBP = (ESP);
  /* 113104f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113104f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113104fc push eax */
  push32((uint32_t)(EAX));
  /* 113104fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11310503 push ecx */
  push32((uint32_t)(ECX));
  /* 11310504 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1131050a push edx */
  push32((uint32_t)(EDX));
  /* 1131050b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11310511 push eax */
  push32((uint32_t)(EAX));
  /* 11310512 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310515 push ecx */
  push32((uint32_t)(ECX));
  /* 11310516 call 0x11310790 */
  push32(0x1131051bu); f_11310790();
  /* 1131051b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131051e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310520 jne 0x11310529 */
  if (!C.zf) goto L_11310529;
  /* 11310522 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310524 jmp 0x1131067f */
  goto L_1131067f;
L_11310529:;
  /* 11310529 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1131052e push 0x1132e460 */
  push32((uint32_t)(0x1132e460u));
  /* 11310533 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310535 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1131053b push edx */
  push32((uint32_t)(EDX));
  /* 1131053c call 0x113093e0 */
  push32(0x11310541u); f_113093e0();
  /* 11310541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310544 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310547 push eax */
  push32((uint32_t)(EAX));
  /* 11310548 call 0x113065b0 */
  push32(0x1131054du); f_113065b0();
  /* 1131054d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310550 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11310553 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310557 jne 0x11310560 */
  if (!C.zf) goto L_11310560;
  /* 11310559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131055b jmp 0x1131067f */
  goto L_1131067f;
L_11310560:;
  /* 11310560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310563 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310566 mov ecx, dword ptr [eax + 0x113314dc] */
  ECX = (r32((uint32_t)(EAX + 0x113314dc)));
  /* 1131056c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131056f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310572 mov eax, dword ptr [edx*4 + 0x11332980] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11332980)));
  /* 11310579 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1131057c push 6 */
  push32((uint32_t)(0x6u));
  /* 1131057e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310581 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310584 add ecx, 0x113329d0 */
  { uint32_t _a=(ECX),_b=(0x113329d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131058a push ecx */
  push32((uint32_t)(ECX));
  /* 1131058b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1131058e push edx */
  push32((uint32_t)(EDX));
  /* 1131058f call 0x1130ce90 */
  push32(0x11310594u); f_1130ce90();
  /* 11310594 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310597 mov eax, dword ptr [0x11332998] */
  EAX = (r32((uint32_t)(0x11332998)));
  /* 1131059c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1131059f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 113105a5 push ecx */
  push32((uint32_t)(ECX));
  /* 113105a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113105a9 push edx */
  push32((uint32_t)(EDX));
  /* 113105aa call 0x11309560 */
  push32(0x113105afu); f_11309560();
  /* 113105af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113105b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113105b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113105b8 mov dword ptr [ecx + 0x113314dc], eax */
  w32((uint32_t)(ECX + 0x113314dc), (EAX));
  /* 113105be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 113105c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113105ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113105cd mov dword ptr [eax*4 + 0x11332980], edx */
  w32((uint32_t)(EAX*4 + 0x11332980), (EDX));
  /* 113105d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 113105d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 113105dc push ecx */
  push32((uint32_t)(ECX));
  /* 113105dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113105e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113105e3 add edx, 0x113329d0 */
  { uint32_t _a=(EDX),_b=(0x113329d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113105e9 push edx */
  push32((uint32_t)(EDX));
  /* 113105ea call 0x1130ce90 */
  push32(0x113105efu); f_1130ce90();
  /* 113105ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113105f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113105f6 jne 0x11310603 */
  if (!C.zf) goto L_11310603;
  /* 113105f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113105fe mov dword ptr [0x11332998], eax */
  w32((uint32_t)(0x11332998), (EAX));
L_11310603:;
  /* 11310603 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310607 jne 0x11310615 */
  if (!C.zf) goto L_11310615;
  /* 11310609 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1131060f mov dword ptr [0x1133299c], ecx */
  w32((uint32_t)(0x1133299c), (ECX));
L_11310615:;
  /* 11310615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310618 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131061b call dword ptr [edx + 0x113314e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x113314e0))), 0x11310621u);
  /* 11310621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310623 je 0x1131065c */
  if (C.zf) goto L_1131065c;
  /* 11310625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310628 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131062b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131062e mov dword ptr [eax + 0x113314dc], ecx */
  w32((uint32_t)(EAX + 0x113314dc), (ECX));
  /* 11310634 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310636 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310639 push edx */
  push32((uint32_t)(EDX));
  /* 1131063a call 0x11307040 */
  push32(0x1131063fu); f_11307040();
  /* 1131063f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310648 mov dword ptr [eax*4 + 0x11332980], ecx */
  w32((uint32_t)(EAX*4 + 0x11332980), (ECX));
  /* 1131064f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11310652 mov dword ptr [0x11332998], edx */
  w32((uint32_t)(0x11332998), (EDX));
  /* 11310658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131065a jmp 0x1131067f */
  goto L_1131067f;
L_1131065c:;
  /* 1131065c cmp dword ptr [ebp - 0xc], 0x113313c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x113313c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310663 je 0x11310673 */
  if (C.zf) goto L_11310673;
  /* 11310665 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310667 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131066a push eax */
  push32((uint32_t)(EAX));
  /* 1131066b call 0x11307040 */
  push32(0x11310670u); f_11307040();
  /* 11310670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11310673:;
  /* 11310673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310676 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310679 mov eax, dword ptr [ecx + 0x113314dc] */
  EAX = (r32((uint32_t)(ECX + 0x113314dc)));
L_1131067f:;
  /* 1131067f mov esp, ebp */
  ESP = (EBP);
  /* 11310681 pop ebp */
  EBP = (pop32());
  /* 11310682 ret  */
  ESPCHK(0x113104f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x11310690 (256 bytes, 72 insns) */
void f_11310690(void) {
  FTRACE(0x11310690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310690 push ebp */
  push32((uint32_t)(EBP));
  /* 11310691 mov ebp, esp */
  EBP = (ESP);
  /* 11310693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310696 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1131069d cmp dword ptr [0x113314dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113314dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113106a4 jne 0x113106c4 */
  if (!C.zf) goto L_113106c4;
  /* 113106a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 113106ab push 0x1132e460 */
  push32((uint32_t)(0x1132e460u));
  /* 113106b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113106b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 113106b7 call 0x113065b0 */
  push32(0x113106bcu); f_113065b0();
  /* 113106bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113106bf mov dword ptr [0x113314dc], eax */
  w32((uint32_t)(0x113314dc), (EAX));
L_113106c4:;
  /* 113106c4 mov eax, dword ptr [0x113314dc] */
  EAX = (r32((uint32_t)(0x113314dc)));
  /* 113106c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113106cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113106d3 jmp 0x113106de */
  goto L_113106de;
L_113106d5:;
  /* 113106d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113106d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113106db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113106de:;
  /* 113106de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113106e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113106e4 mov eax, dword ptr [edx + 0x113314dc] */
  EAX = (r32((uint32_t)(EDX + 0x113314dc)));
  /* 113106ea push eax */
  push32((uint32_t)(EAX));
  /* 113106eb push 0x1132e46c */
  push32((uint32_t)(0x1132e46cu));
  /* 113106f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113106f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113106f6 mov edx, dword ptr [ecx + 0x113314d8] */
  EDX = (r32((uint32_t)(ECX + 0x113314d8)));
  /* 113106fc push edx */
  push32((uint32_t)(EDX));
  /* 113106fd push 3 */
  push32((uint32_t)(0x3u));
  /* 113106ff mov eax, dword ptr [0x113314dc] */
  EAX = (r32((uint32_t)(0x113314dc)));
  /* 11310704 push eax */
  push32((uint32_t)(EAX));
  /* 11310705 call 0x11310930 */
  push32(0x1131070au); f_11310930();
  /* 1131070a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131070d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310711 jge 0x11310759 */
  if ((C.sf==C.of)) goto L_11310759;
  /* 11310713 push 0x1132e458 */
  push32((uint32_t)(0x1132e458u));
  /* 11310718 mov ecx, dword ptr [0x113314dc] */
  ECX = (r32((uint32_t)(0x113314dc)));
  /* 1131071e push ecx */
  push32((uint32_t)(ECX));
  /* 1131071f call 0x11309570 */
  push32(0x11310724u); f_11309570();
  /* 11310724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310727 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131072a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131072d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310730 mov eax, dword ptr [edx + 0x113314dc] */
  EAX = (r32((uint32_t)(EDX + 0x113314dc)));
  /* 11310736 push eax */
  push32((uint32_t)(EAX));
  /* 11310737 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131073a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131073d mov edx, dword ptr [ecx + 0x113314dc] */
  EDX = (r32((uint32_t)(ECX + 0x113314dc)));
  /* 11310743 push edx */
  push32((uint32_t)(EDX));
  /* 11310744 call 0x11312240 */
  push32(0x11310749u); f_11312240();
  /* 11310749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131074c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131074e je 0x11310757 */
  if (C.zf) goto L_11310757;
  /* 11310750 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11310757:;
  /* 11310757 jmp 0x11310787 */
  goto L_11310787;
L_11310759:;
  /* 11310759 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131075d jne 0x11310766 */
  if (!C.zf) goto L_11310766;
  /* 1131075f mov eax, dword ptr [0x113314dc] */
  EAX = (r32((uint32_t)(0x113314dc)));
  /* 11310764 jmp 0x1131078c */
  goto L_1131078c;
L_11310766:;
  /* 11310766 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310768 mov eax, dword ptr [0x113314dc] */
  EAX = (r32((uint32_t)(0x113314dc)));
  /* 1131076d push eax */
  push32((uint32_t)(EAX));
  /* 1131076e call 0x11307040 */
  push32(0x11310773u); f_11307040();
  /* 11310773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310776 mov dword ptr [0x113314dc], 0 */
  w32((uint32_t)(0x113314dc), (0x0u));
  /* 11310780 mov eax, dword ptr [0x113314f4] */
  EAX = (r32((uint32_t)(0x113314f4)));
  /* 11310785 jmp 0x1131078c */
  goto L_1131078c;
L_11310787:;
  /* 11310787 jmp 0x113106d5 */
  goto L_113106d5;
L_1131078c:;
  /* 1131078c mov esp, ebp */
  ESP = (EBP);
  /* 1131078e pop ebp */
  EBP = (pop32());
  /* 1131078f ret  */
  ESPCHK(0x11310690u, _esp0);
  ESP += 4; return;
}

/* FUN_10010790 @ 0x11310790 (388 bytes, 115 insns) */
void f_11310790(void) {
  FTRACE(0x11310790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310790 push ebp */
  push32((uint32_t)(EBP));
  /* 11310791 mov ebp, esp */
  EBP = (ESP);
  /* 11310793 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310799 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131079d jne 0x113107a6 */
  if (!C.zf) goto L_113107a6;
  /* 1131079f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113107a1 jmp 0x11310910 */
  goto L_11310910;
L_113107a6:;
  /* 113107a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113107a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113107ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113107af jne 0x11310800 */
  if (!C.zf) goto L_11310800;
  /* 113107b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113107b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113107b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113107ba jne 0x11310800 */
  if (!C.zf) goto L_11310800;
  /* 113107bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113107bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 113107c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113107c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 113107c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113107cd je 0x113107e9 */
  if (C.zf) goto L_113107e9;
  /* 113107cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113107d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 113107d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113107da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 113107e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113107e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_113107e9:;
  /* 113107e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113107ed je 0x113107f8 */
  if (C.zf) goto L_113107f8;
  /* 113107ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113107f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113107f8:;
  /* 113107f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113107fb jmp 0x11310910 */
  goto L_11310910;
L_11310800:;
  /* 11310800 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310803 push ecx */
  push32((uint32_t)(ECX));
  /* 11310804 push 0x11331450 */
  push32((uint32_t)(0x11331450u));
  /* 11310809 call 0x11312240 */
  push32(0x1131080eu); f_11312240();
  /* 1131080e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310813 je 0x113108c8 */
  if (C.zf) goto L_113108c8;
  /* 11310819 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131081c push edx */
  push32((uint32_t)(EDX));
  /* 1131081d push 0x113313cc */
  push32((uint32_t)(0x113313ccu));
  /* 11310822 call 0x11312240 */
  push32(0x11310827u); f_11312240();
  /* 11310827 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131082a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131082c je 0x113108c8 */
  if (C.zf) goto L_113108c8;
  /* 11310832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310835 push eax */
  push32((uint32_t)(EAX));
  /* 11310836 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1131083c push ecx */
  push32((uint32_t)(ECX));
  /* 1131083d call 0x11310980 */
  push32(0x11310842u); f_11310980();
  /* 11310842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310847 je 0x11310850 */
  if (C.zf) goto L_11310850;
  /* 11310849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131084b jmp 0x11310910 */
  goto L_11310910;
L_11310850:;
  /* 11310850 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11310856 push edx */
  push32((uint32_t)(EDX));
  /* 11310857 push 0x113329a8 */
  push32((uint32_t)(0x113329a8u));
  /* 1131085c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11310862 push eax */
  push32((uint32_t)(EAX));
  /* 11310863 call 0x11312390 */
  push32(0x11310868u); f_11312390();
  /* 11310868 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131086b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131086d jne 0x11310876 */
  if (!C.zf) goto L_11310876;
  /* 1131086f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310871 jmp 0x11310910 */
  goto L_11310910;
L_11310876:;
  /* 11310876 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11310878 mov cx, word ptr [0x113329ac] */
  CX = (r16((uint32_t)(0x113329ac)));
  /* 1131087f mov dword ptr [0x113329b0], ecx */
  w32((uint32_t)(0x113329b0), (ECX));
  /* 11310885 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1131088b push edx */
  push32((uint32_t)(EDX));
  /* 1131088c push 0x11331450 */
  push32((uint32_t)(0x11331450u));
  /* 11310891 call 0x11310ae0 */
  push32(0x11310896u); f_11310ae0();
  /* 11310896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131089c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1131089f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113108a1 je 0x113108b6 */
  if (C.zf) goto L_113108b6;
  /* 113108a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113108a6 push edx */
  push32((uint32_t)(EDX));
  /* 113108a7 push 0x113313cc */
  push32((uint32_t)(0x113313ccu));
  /* 113108ac call 0x11309560 */
  push32(0x113108b1u); f_11309560();
  /* 113108b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113108b4 jmp 0x113108c8 */
  goto L_113108c8;
L_113108b6:;
  /* 113108b6 push 0x11331450 */
  push32((uint32_t)(0x11331450u));
  /* 113108bb push 0x113313cc */
  push32((uint32_t)(0x113313ccu));
  /* 113108c0 call 0x11309560 */
  push32(0x113108c5u); f_11309560();
  /* 113108c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113108c8:;
  /* 113108c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113108cc je 0x113108e1 */
  if (C.zf) goto L_113108e1;
  /* 113108ce push 6 */
  push32((uint32_t)(0x6u));
  /* 113108d0 push 0x113329a8 */
  push32((uint32_t)(0x113329a8u));
  /* 113108d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113108d8 push eax */
  push32((uint32_t)(EAX));
  /* 113108d9 call 0x1130ce90 */
  push32(0x113108deu); f_1130ce90();
  /* 113108de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113108e1:;
  /* 113108e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113108e5 je 0x113108fa */
  if (C.zf) goto L_113108fa;
  /* 113108e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 113108e9 push 0x113329b0 */
  push32((uint32_t)(0x113329b0u));
  /* 113108ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113108f1 push ecx */
  push32((uint32_t)(ECX));
  /* 113108f2 call 0x1130ce90 */
  push32(0x113108f7u); f_1130ce90();
  /* 113108f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113108fa:;
  /* 113108fa push 0x11331450 */
  push32((uint32_t)(0x11331450u));
  /* 113108ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310902 push edx */
  push32((uint32_t)(EDX));
  /* 11310903 call 0x11309560 */
  push32(0x11310908u); f_11309560();
  /* 11310908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131090b mov eax, 0x11331450 */
  EAX = (0x11331450u);
L_11310910:;
  /* 11310910 mov esp, ebp */
  ESP = (EBP);
  /* 11310912 pop ebp */
  EBP = (pop32());
  /* 11310913 ret  */
  ESPCHK(0x11310790u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x11310920 (7 bytes, 5 insns) */
void f_11310920(void) {
  FTRACE(0x11310920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310920 push ebp */
  push32((uint32_t)(EBP));
  /* 11310921 mov ebp, esp */
  EBP = (ESP);
  /* 11310923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310925 pop ebp */
  EBP = (pop32());
  /* 11310926 ret  */
  ESPCHK(0x11310920u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11310930 (79 bytes, 28 insns) */
void f_11310930(void) {
  FTRACE(0x11310930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310930 push ebp */
  push32((uint32_t)(EBP));
  /* 11310931 mov ebp, esp */
  EBP = (ESP);
  /* 11310933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310936 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11310939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1131093c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11310943 jmp 0x1131094e */
  goto L_1131094e;
L_11310945:;
  /* 11310945 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310948 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131094b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1131094e:;
  /* 1131094e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310951 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310954 jge 0x11310974 */
  if ((C.sf==C.of)) goto L_11310974;
  /* 11310956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310959 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131095c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1131095f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310962 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11310965 push edx */
  push32((uint32_t)(EDX));
  /* 11310966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310969 push eax */
  push32((uint32_t)(EAX));
  /* 1131096a call 0x11309570 */
  push32(0x1131096fu); f_11309570();
  /* 1131096f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310972 jmp 0x11310945 */
  goto L_11310945;
L_11310974:;
  /* 11310974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1131097b mov esp, ebp */
  ESP = (EBP);
  /* 1131097d pop ebp */
  EBP = (pop32());
  /* 1131097e ret  */
  ESPCHK(0x11310930u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x11310980 (349 bytes, 122 insns) */
void f_11310980(void) {
  FTRACE(0x11310980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310980 push ebp */
  push32((uint32_t)(EBP));
  /* 11310981 mov ebp, esp */
  EBP = (ESP);
  /* 11310983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310986 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1131098b push 0 */
  push32((uint32_t)(0x0u));
  /* 1131098d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310990 push eax */
  push32((uint32_t)(EAX));
  /* 11310991 call 0x1130a320 */
  push32(0x11310996u); f_1130a320();
  /* 11310996 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310999 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1131099c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1131099f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113109a1 jne 0x113109aa */
  if (!C.zf) goto L_113109aa;
  /* 113109a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113109a5 jmp 0x11310ad9 */
  goto L_11310ad9;
L_113109aa:;
  /* 113109aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113109ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113109b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113109b3 jne 0x113109e0 */
  if (!C.zf) goto L_113109e0;
  /* 113109b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113109b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113109bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113109be je 0x113109e0 */
  if (C.zf) goto L_113109e0;
  /* 113109c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113109c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113109c6 push ecx */
  push32((uint32_t)(ECX));
  /* 113109c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113109ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113109d0 push edx */
  push32((uint32_t)(EDX));
  /* 113109d1 call 0x11309560 */
  push32(0x113109d6u); f_11309560();
  /* 113109d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113109d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113109db jmp 0x11310ad9 */
  goto L_11310ad9;
L_113109e0:;
  /* 113109e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113109e7 jmp 0x113109f2 */
  goto L_113109f2;
L_113109e9:;
  /* 113109e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113109ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113109ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113109f2:;
  /* 113109f2 push 0x1132e470 */
  push32((uint32_t)(0x1132e470u));
  /* 113109f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113109fa push ecx */
  push32((uint32_t)(ECX));
  /* 113109fb call 0x113122d0 */
  push32(0x11310a00u); f_113122d0();
  /* 11310a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310a03 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11310a06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a0a jne 0x11310a14 */
  if (!C.zf) goto L_11310a14;
  /* 11310a0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11310a0f jmp 0x11310ad9 */
  goto L_11310ad9;
L_11310a14:;
  /* 11310a14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310a17 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310a1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11310a1c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11310a1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a23 jne 0x11310a4a */
  if (!C.zf) goto L_11310a4a;
  /* 11310a25 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a29 jge 0x11310a4a */
  if ((C.sf==C.of)) goto L_11310a4a;
  /* 11310a2b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11310a2f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a32 je 0x11310a4a */
  if (C.zf) goto L_11310a4a;
  /* 11310a34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310a37 push edx */
  push32((uint32_t)(EDX));
  /* 11310a38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310a3b push eax */
  push32((uint32_t)(EAX));
  /* 11310a3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310a3f push ecx */
  push32((uint32_t)(ECX));
  /* 11310a40 call 0x11309dd0 */
  push32(0x11310a45u); f_11309dd0();
  /* 11310a45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310a48 jmp 0x11310ab0 */
  goto L_11310ab0;
L_11310a4a:;
  /* 11310a4a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a4e jne 0x11310a78 */
  if (!C.zf) goto L_11310a78;
  /* 11310a50 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a54 jge 0x11310a78 */
  if ((C.sf==C.of)) goto L_11310a78;
  /* 11310a56 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11310a5a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a5d je 0x11310a78 */
  if (C.zf) goto L_11310a78;
  /* 11310a5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310a62 push eax */
  push32((uint32_t)(EAX));
  /* 11310a63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310a66 push ecx */
  push32((uint32_t)(ECX));
  /* 11310a67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310a6a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310a6d push edx */
  push32((uint32_t)(EDX));
  /* 11310a6e call 0x11309dd0 */
  push32(0x11310a73u); f_11309dd0();
  /* 11310a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310a76 jmp 0x11310ab0 */
  goto L_11310ab0;
L_11310a78:;
  /* 11310a78 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a7c jne 0x11310aab */
  if (!C.zf) goto L_11310aab;
  /* 11310a7e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11310a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310a84 je 0x11310a8f */
  if (C.zf) goto L_11310a8f;
  /* 11310a86 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11310a8a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310a8d jne 0x11310aab */
  if (!C.zf) goto L_11310aab;
L_11310a8f:;
  /* 11310a8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310a92 push edx */
  push32((uint32_t)(EDX));
  /* 11310a93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310a96 push eax */
  push32((uint32_t)(EAX));
  /* 11310a97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310a9a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 11310aa1 call 0x11309dd0 */
  push32(0x11310aa6u); f_11309dd0();
  /* 11310aa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310aa9 jmp 0x11310ab0 */
  goto L_11310ab0;
L_11310aab:;
  /* 11310aab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11310aae jmp 0x11310ad9 */
  goto L_11310ad9;
L_11310ab0:;
  /* 11310ab0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11310ab4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310ab7 jne 0x11310abb */
  if (!C.zf) goto L_11310abb;
  /* 11310ab9 jmp 0x11310ad7 */
  goto L_11310ad7;
L_11310abb:;
  /* 11310abb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11310abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310ac1 jne 0x11310ac5 */
  if (!C.zf) goto L_11310ac5;
  /* 11310ac3 jmp 0x11310ad7 */
  goto L_11310ad7;
L_11310ac5:;
  /* 11310ac5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310ac8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310acb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11310acf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11310ad2 jmp 0x113109e9 */
  goto L_113109e9;
L_11310ad7:;
  /* 11310ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11310ad9:;
  /* 11310ad9 mov esp, ebp */
  ESP = (EBP);
  /* 11310adb pop ebp */
  EBP = (pop32());
  /* 11310adc ret  */
  ESPCHK(0x11310980u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11310ae0 (101 bytes, 36 insns) */
void f_11310ae0(void) {
  FTRACE(0x11310ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11310ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11310ae3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11310ae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310aea push ecx */
  push32((uint32_t)(ECX));
  /* 11310aeb call 0x11309560 */
  push32(0x11310af0u); f_11309560();
  /* 11310af0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310af3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310af6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11310afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310afc je 0x11310b18 */
  if (C.zf) goto L_11310b18;
  /* 11310afe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310b01 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310b04 push ecx */
  push32((uint32_t)(ECX));
  /* 11310b05 push 0x1132e478 */
  push32((uint32_t)(0x1132e478u));
  /* 11310b0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11310b0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310b0f push edx */
  push32((uint32_t)(EDX));
  /* 11310b10 call 0x11310930 */
  push32(0x11310b15u); f_11310930();
  /* 11310b15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11310b18:;
  /* 11310b18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310b1b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11310b22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11310b24 je 0x11310b43 */
  if (C.zf) goto L_11310b43;
  /* 11310b26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11310b29 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310b2f push edx */
  push32((uint32_t)(EDX));
  /* 11310b30 push 0x1132e474 */
  push32((uint32_t)(0x1132e474u));
  /* 11310b35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310b3a push eax */
  push32((uint32_t)(EAX));
  /* 11310b3b call 0x11310930 */
  push32(0x11310b40u); f_11310930();
  /* 11310b40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11310b43:;
  /* 11310b43 pop ebp */
  EBP = (pop32());
  /* 11310b44 ret  */
  ESPCHK(0x11310ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b50 @ 0x11310b50 (130 bytes, 50 insns) */
void f_11310b50(void) {
  FTRACE(0x11310b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11310b51 mov ebp, esp */
  EBP = (ESP);
  /* 11310b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11310b54 push ebx */
  push32((uint32_t)(EBX));
  /* 11310b55 push esi */
  push32((uint32_t)(ESI));
  /* 11310b56 push edi */
  push32((uint32_t)(EDI));
  /* 11310b57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11310b5e:;
  /* 11310b5e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310b62 jne 0x11310b82 */
  if (!C.zf) goto L_11310b82;
  /* 11310b64 push 0x1132e488 */
  push32((uint32_t)(0x1132e488u));
  /* 11310b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11310b6b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11310b6d push 0x1132e47c */
  push32((uint32_t)(0x1132e47cu));
  /* 11310b72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310b74 call 0x11305670 */
  push32(0x11310b79u); f_11305670();
  /* 11310b79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310b7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310b7f jne 0x11310b82 */
  if (!C.zf) goto L_11310b82;
  /* 11310b81 int3  */
  x86_unimpl("int3 @ 0x11310b81");
L_11310b82:;
  /* 11310b82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310b86 jne 0x11310b5e */
  if (!C.zf) goto L_11310b5e;
  /* 11310b88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310b8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11310b8e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11310b91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11310b93 je 0x11310ba1 */
  if (C.zf) goto L_11310ba1;
  /* 11310b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310b98 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11310b9f jmp 0x11310bc8 */
  goto L_11310bc8;
L_11310ba1:;
  /* 11310ba1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 11310ba5 call 0x1130f3c0 */
  push32(0x11310baau); f_1130f3c0();
  /* 11310baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310bad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310bb0 push edx */
  push32((uint32_t)(EDX));
  /* 11310bb1 call 0x11310be0 */
  push32(0x11310bb6u); f_11310be0();
  /* 11310bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11310bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310bbf push eax */
  push32((uint32_t)(EAX));
  /* 11310bc0 call 0x1130f430 */
  push32(0x11310bc5u); f_1130f430();
  /* 11310bc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11310bc8:;
  /* 11310bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310bcb pop edi */
  EDI = (pop32());
  /* 11310bcc pop esi */
  ESI = (pop32());
  /* 11310bcd pop ebx */
  EBX = (pop32());
  /* 11310bce mov esp, ebp */
  ESP = (EBP);
  /* 11310bd0 pop ebp */
  EBP = (pop32());
  /* 11310bd1 ret  */
  ESPCHK(0x11310b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010be0 @ 0x11310be0 (190 bytes, 67 insns) */
void f_11310be0(void) {
  FTRACE(0x11310be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11310be1 mov ebp, esp */
  EBP = (ESP);
  /* 11310be3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310be6 push ebx */
  push32((uint32_t)(EBX));
  /* 11310be7 push esi */
  push32((uint32_t)(ESI));
  /* 11310be8 push edi */
  push32((uint32_t)(EDI));
  /* 11310be9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11310bf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310bf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11310bf6:;
  /* 11310bf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310bfa jne 0x11310c1a */
  if (!C.zf) goto L_11310c1a;
  /* 11310bfc push 0x1132e32c */
  push32((uint32_t)(0x1132e32cu));
  /* 11310c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11310c03 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11310c05 push 0x1132e47c */
  push32((uint32_t)(0x1132e47cu));
  /* 11310c0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11310c0c call 0x11305670 */
  push32(0x11310c11u); f_11305670();
  /* 11310c11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310c14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310c17 jne 0x11310c1a */
  if (!C.zf) goto L_11310c1a;
  /* 11310c19 int3  */
  x86_unimpl("int3 @ 0x11310c19");
L_11310c1a:;
  /* 11310c1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11310c1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11310c1e jne 0x11310bf6 */
  if (!C.zf) goto L_11310bf6;
  /* 11310c20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c23 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11310c26 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11310c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310c2d je 0x11310c8a */
  if (C.zf) goto L_11310c8a;
  /* 11310c2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c32 push ecx */
  push32((uint32_t)(ECX));
  /* 11310c33 call 0x1130fee0 */
  push32(0x11310c38u); f_1130fee0();
  /* 11310c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310c3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11310c3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c41 push edx */
  push32((uint32_t)(EDX));
  /* 11310c42 call 0x11313260 */
  push32(0x11310c47u); f_11313260();
  /* 11310c47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310c4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11310c50 push ecx */
  push32((uint32_t)(ECX));
  /* 11310c51 call 0x11313130 */
  push32(0x11310c56u); f_11313130();
  /* 11310c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310c5b jge 0x11310c66 */
  if ((C.sf==C.of)) goto L_11310c66;
  /* 11310c5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11310c64 jmp 0x11310c8a */
  goto L_11310c8a;
L_11310c66:;
  /* 11310c66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c69 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310c6d je 0x11310c8a */
  if (C.zf) goto L_11310c8a;
  /* 11310c6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11310c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c74 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11310c77 push ecx */
  push32((uint32_t)(ECX));
  /* 11310c78 call 0x11307040 */
  push32(0x11310c7du); f_11307040();
  /* 11310c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310c80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c83 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11310c8a:;
  /* 11310c8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11310c8d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11310c94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310c97 pop edi */
  EDI = (pop32());
  /* 11310c98 pop esi */
  ESI = (pop32());
  /* 11310c99 pop ebx */
  EBX = (pop32());
  /* 11310c9a mov esp, ebp */
  ESP = (EBP);
  /* 11310c9c pop ebp */
  EBP = (pop32());
  /* 11310c9d ret  */
  ESPCHK(0x11310be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ca0 @ 0x11310ca0 (210 bytes, 63 insns) */
void f_11310ca0(void) {
  FTRACE(0x11310ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11310ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11310ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11310ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310ca7 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310cad jae 0x11310cd1 */
  if (!C.cf) goto L_11310cd1;
  /* 11310caf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310cb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11310cb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310cb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11310cbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310cbe mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 11310cc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11310cca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11310ccd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11310ccf jne 0x11310ce4 */
  if (!C.zf) goto L_11310ce4;
L_11310cd1:;
  /* 11310cd1 call 0x1130e480 */
  push32(0x11310cd6u); f_1130e480();
  /* 11310cd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11310cdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11310cdf jmp 0x11310d6e */
  goto L_11310d6e;
L_11310ce4:;
  /* 11310ce4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310ce7 push edx */
  push32((uint32_t)(EDX));
  /* 11310ce8 call 0x1130fca0 */
  push32(0x11310cedu); f_1130fca0();
  /* 11310ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310cf3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11310cf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310cf9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11310cfc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11310cff mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 11310d06 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11310d0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11310d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310d10 je 0x11310d4d */
  if (C.zf) goto L_11310d4d;
  /* 11310d12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310d15 push ecx */
  push32((uint32_t)(ECX));
  /* 11310d16 call 0x1130fb20 */
  push32(0x11310d1bu); f_1130fb20();
  /* 11310d1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310d1e push eax */
  push32((uint32_t)(EAX));
  /* 11310d1f call dword ptr [0x11335308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335308))), 0x11310d25u);
  /* 11310d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310d27 jne 0x11310d34 */
  if (!C.zf) goto L_11310d34;
  /* 11310d29 call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x11310d2fu);
  /* 11310d2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11310d32 jmp 0x11310d3b */
  goto L_11310d3b;
L_11310d34:;
  /* 11310d34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11310d3b:;
  /* 11310d3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310d3f jne 0x11310d43 */
  if (!C.zf) goto L_11310d43;
  /* 11310d41 jmp 0x11310d5f */
  goto L_11310d5f;
L_11310d43:;
  /* 11310d43 call 0x1130e490 */
  push32(0x11310d48u); f_1130e490();
  /* 11310d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310d4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11310d4d:;
  /* 11310d4d call 0x1130e480 */
  push32(0x11310d52u); f_1130e480();
  /* 11310d52 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11310d58 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11310d5f:;
  /* 11310d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310d62 push eax */
  push32((uint32_t)(EAX));
  /* 11310d63 call 0x1130fd30 */
  push32(0x11310d68u); f_1130fd30();
  /* 11310d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310d6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11310d6e:;
  /* 11310d6e mov esp, ebp */
  ESP = (EBP);
  /* 11310d70 pop ebp */
  EBP = (pop32());
  /* 11310d71 ret  */
  ESPCHK(0x11310ca0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11310d80 (219 bytes, 64 insns) */
void f_11310d80(void) {
  FTRACE(0x11310d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11310d81 mov ebp, esp */
  EBP = (ESP);
  /* 11310d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11310d84 cmp dword ptr [0x11332994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310d8b je 0x11310e21 */
  if (C.zf) goto L_11310e21;
  /* 11310d91 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11310d93 push 0x1132e498 */
  push32((uint32_t)(0x1132e498u));
  /* 11310d98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310d9a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11310d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11310da1 call 0x113069c0 */
  push32(0x11310da6u); f_113069c0();
  /* 11310da6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310da9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11310dac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310db0 jne 0x11310dbc */
  if (!C.zf) goto L_11310dbc;
  /* 11310db2 mov eax, 1 */
  EAX = (0x1u);
  /* 11310db7 jmp 0x11310e57 */
  goto L_11310e57;
L_11310dbc:;
  /* 11310dbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310dbf push eax */
  push32((uint32_t)(EAX));
  /* 11310dc0 call 0x11310e60 */
  push32(0x11310dc5u); f_11310e60();
  /* 11310dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11310dca je 0x11310ded */
  if (C.zf) goto L_11310ded;
  /* 11310dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310dcf push ecx */
  push32((uint32_t)(ECX));
  /* 11310dd0 call 0x113113f0 */
  push32(0x11310dd5u); f_113113f0();
  /* 11310dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310dd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310dda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310ddd push edx */
  push32((uint32_t)(EDX));
  /* 11310dde call 0x11307040 */
  push32(0x11310de3u); f_11307040();
  /* 11310de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310de6 mov eax, 1 */
  EAX = (0x1u);
  /* 11310deb jmp 0x11310e57 */
  goto L_11310e57;
L_11310ded:;
  /* 11310ded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310df0 mov dword ptr [0x11331c98], eax */
  w32((uint32_t)(0x11331c98), (EAX));
  /* 11310df5 mov ecx, dword ptr [0x113329b4] */
  ECX = (r32((uint32_t)(0x113329b4)));
  /* 11310dfb push ecx */
  push32((uint32_t)(ECX));
  /* 11310dfc call 0x113113f0 */
  push32(0x11310e01u); f_113113f0();
  /* 11310e01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310e04 push 2 */
  push32((uint32_t)(0x2u));
  /* 11310e06 mov edx, dword ptr [0x113329b4] */
  EDX = (r32((uint32_t)(0x113329b4)));
  /* 11310e0c push edx */
  push32((uint32_t)(EDX));
  /* 11310e0d call 0x11307040 */
  push32(0x11310e12u); f_11307040();
  /* 11310e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310e18 mov dword ptr [0x113329b4], eax */
  w32((uint32_t)(0x113329b4), (EAX));
  /* 11310e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310e1f jmp 0x11310e57 */
  goto L_11310e57;
L_11310e21:;
  /* 11310e21 mov dword ptr [0x11331c98], 0x11331ca0 */
  w32((uint32_t)(0x11331c98), (0x11331ca0u));
  /* 11310e2b mov ecx, dword ptr [0x113329b4] */
  ECX = (r32((uint32_t)(0x113329b4)));
  /* 11310e31 push ecx */
  push32((uint32_t)(ECX));
  /* 11310e32 call 0x113113f0 */
  push32(0x11310e37u); f_113113f0();
  /* 11310e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310e3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11310e3c mov edx, dword ptr [0x113329b4] */
  EDX = (r32((uint32_t)(0x113329b4)));
  /* 11310e42 push edx */
  push32((uint32_t)(EDX));
  /* 11310e43 call 0x11307040 */
  push32(0x11310e48u); f_11307040();
  /* 11310e48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310e4b mov dword ptr [0x113329b4], 0 */
  w32((uint32_t)(0x113329b4), (0x0u));
  /* 11310e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11310e57:;
  /* 11310e57 mov esp, ebp */
  ESP = (EBP);
  /* 11310e59 pop ebp */
  EBP = (pop32());
  /* 11310e5a ret  */
  ESPCHK(0x11310d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e60 @ 0x11310e60 (1423 bytes, 533 insns) */
void f_11310e60(void) {
  FTRACE(0x11310e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11310e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11310e61 mov ebp, esp */
  EBP = (ESP);
  /* 11310e63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11310e66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11310e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11310e6f mov ax, word ptr [0x113329ee] */
  AX = (r16((uint32_t)(0x113329ee)));
  /* 11310e75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11310e78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11310e7a mov cx, word ptr [0x113329f0] */
  CX = (r16((uint32_t)(0x113329f0)));
  /* 11310e81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11310e84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11310e88 jne 0x11310e92 */
  if (!C.zf) goto L_11310e92;
  /* 11310e8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11310e8d jmp 0x113113eb */
  goto L_113113eb;
L_11310e92:;
  /* 11310e92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310e95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310e98 push edx */
  push32((uint32_t)(EDX));
  /* 11310e99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11310e9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310e9e push eax */
  push32((uint32_t)(EAX));
  /* 11310e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11310ea1 call 0x11314770 */
  push32(0x11310ea6u); f_11314770();
  /* 11310ea6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310ea9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310eac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310eae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310eb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310eb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310eb7 push edx */
  push32((uint32_t)(EDX));
  /* 11310eb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11310eba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310ebd push eax */
  push32((uint32_t)(EAX));
  /* 11310ebe push 1 */
  push32((uint32_t)(0x1u));
  /* 11310ec0 call 0x11314770 */
  push32(0x11310ec5u); f_11314770();
  /* 11310ec5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310ec8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310ecb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310ecd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310ed0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310ed3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310ed6 push edx */
  push32((uint32_t)(EDX));
  /* 11310ed7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11310ed9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310edc push eax */
  push32((uint32_t)(EAX));
  /* 11310edd push 1 */
  push32((uint32_t)(0x1u));
  /* 11310edf call 0x11314770 */
  push32(0x11310ee4u); f_11314770();
  /* 11310ee4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310ee7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310eea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310eec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310eef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310ef2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310ef5 push edx */
  push32((uint32_t)(EDX));
  /* 11310ef6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11310ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310efb push eax */
  push32((uint32_t)(EAX));
  /* 11310efc push 1 */
  push32((uint32_t)(0x1u));
  /* 11310efe call 0x11314770 */
  push32(0x11310f03u); f_11314770();
  /* 11310f03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310f09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310f0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310f11 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f14 push edx */
  push32((uint32_t)(EDX));
  /* 11310f15 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11310f17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310f1a push eax */
  push32((uint32_t)(EAX));
  /* 11310f1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11310f1d call 0x11314770 */
  push32(0x11310f22u); f_11314770();
  /* 11310f22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310f28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310f2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310f2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310f30 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f33 push edx */
  push32((uint32_t)(EDX));
  /* 11310f34 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11310f36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310f39 push eax */
  push32((uint32_t)(EAX));
  /* 11310f3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11310f3c call 0x11314770 */
  push32(0x11310f41u); f_11314770();
  /* 11310f41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310f47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310f49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310f4f push edx */
  push32((uint32_t)(EDX));
  /* 11310f50 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11310f52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310f55 push eax */
  push32((uint32_t)(EAX));
  /* 11310f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11310f58 call 0x11314770 */
  push32(0x11310f5du); f_11314770();
  /* 11310f5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310f63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310f65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310f68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310f6b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f6e push edx */
  push32((uint32_t)(EDX));
  /* 11310f6f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11310f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310f74 push eax */
  push32((uint32_t)(EAX));
  /* 11310f75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11310f77 call 0x11314770 */
  push32(0x11310f7cu); f_11314770();
  /* 11310f7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310f82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310f84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310f87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310f8a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f8d push edx */
  push32((uint32_t)(EDX));
  /* 11310f8e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11310f90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310f93 push eax */
  push32((uint32_t)(EAX));
  /* 11310f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11310f96 call 0x11314770 */
  push32(0x11310f9bu); f_11314770();
  /* 11310f9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310f9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310fa1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310fa3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310fa6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310fa9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310fac push edx */
  push32((uint32_t)(EDX));
  /* 11310fad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11310faf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310fb2 push eax */
  push32((uint32_t)(EAX));
  /* 11310fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11310fb5 call 0x11314770 */
  push32(0x11310fbau); f_11314770();
  /* 11310fba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310fbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310fc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310fc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310fc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310fc8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310fcb push edx */
  push32((uint32_t)(EDX));
  /* 11310fcc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11310fce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310fd1 push eax */
  push32((uint32_t)(EAX));
  /* 11310fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11310fd4 call 0x11314770 */
  push32(0x11310fd9u); f_11314770();
  /* 11310fd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310fdc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310fdf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11310fe1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11310fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11310fe7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11310fea push edx */
  push32((uint32_t)(EDX));
  /* 11310feb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11310fed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11310ff0 push eax */
  push32((uint32_t)(EAX));
  /* 11310ff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11310ff3 call 0x11314770 */
  push32(0x11310ff8u); f_11314770();
  /* 11310ff8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11310ffb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11310ffe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311000 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311003 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311006 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311009 push edx */
  push32((uint32_t)(EDX));
  /* 1131100a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1131100c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131100f push eax */
  push32((uint32_t)(EAX));
  /* 11311010 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311012 call 0x11314770 */
  push32(0x11311017u); f_11314770();
  /* 11311017 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131101a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131101d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131101f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311022 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311025 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311028 push edx */
  push32((uint32_t)(EDX));
  /* 11311029 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1131102b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131102e push eax */
  push32((uint32_t)(EAX));
  /* 1131102f push 1 */
  push32((uint32_t)(0x1u));
  /* 11311031 call 0x11314770 */
  push32(0x11311036u); f_11314770();
  /* 11311036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311039 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131103c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131103e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311041 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311044 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311047 push edx */
  push32((uint32_t)(EDX));
  /* 11311048 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1131104a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131104d push eax */
  push32((uint32_t)(EAX));
  /* 1131104e push 1 */
  push32((uint32_t)(0x1u));
  /* 11311050 call 0x11314770 */
  push32(0x11311055u); f_11314770();
  /* 11311055 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311058 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131105b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131105d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311063 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311066 push edx */
  push32((uint32_t)(EDX));
  /* 11311067 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11311069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131106c push eax */
  push32((uint32_t)(EAX));
  /* 1131106d push 1 */
  push32((uint32_t)(0x1u));
  /* 1131106f call 0x11314770 */
  push32(0x11311074u); f_11314770();
  /* 11311074 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311077 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131107a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131107c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131107f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311082 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311085 push edx */
  push32((uint32_t)(EDX));
  /* 11311086 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11311088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131108b push eax */
  push32((uint32_t)(EAX));
  /* 1131108c push 1 */
  push32((uint32_t)(0x1u));
  /* 1131108e call 0x11314770 */
  push32(0x11311093u); f_11314770();
  /* 11311093 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311096 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311099 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131109b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131109e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113110a1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113110a4 push edx */
  push32((uint32_t)(EDX));
  /* 113110a5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 113110a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113110aa push eax */
  push32((uint32_t)(EAX));
  /* 113110ab push 1 */
  push32((uint32_t)(0x1u));
  /* 113110ad call 0x11314770 */
  push32(0x113110b2u); f_11314770();
  /* 113110b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113110b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113110b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113110ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113110bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113110c0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113110c3 push edx */
  push32((uint32_t)(EDX));
  /* 113110c4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 113110c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113110c9 push eax */
  push32((uint32_t)(EAX));
  /* 113110ca push 1 */
  push32((uint32_t)(0x1u));
  /* 113110cc call 0x11314770 */
  push32(0x113110d1u); f_11314770();
  /* 113110d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113110d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113110d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113110d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113110dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113110df add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113110e2 push edx */
  push32((uint32_t)(EDX));
  /* 113110e3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 113110e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113110e8 push eax */
  push32((uint32_t)(EAX));
  /* 113110e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 113110eb call 0x11314770 */
  push32(0x113110f0u); f_11314770();
  /* 113110f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113110f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113110f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113110f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113110fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113110fe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311101 push edx */
  push32((uint32_t)(EDX));
  /* 11311102 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11311104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311107 push eax */
  push32((uint32_t)(EAX));
  /* 11311108 push 1 */
  push32((uint32_t)(0x1u));
  /* 1131110a call 0x11314770 */
  push32(0x1131110fu); f_11314770();
  /* 1131110f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311112 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311115 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311117 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131111a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131111d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311120 push edx */
  push32((uint32_t)(EDX));
  /* 11311121 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11311123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311126 push eax */
  push32((uint32_t)(EAX));
  /* 11311127 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311129 call 0x11314770 */
  push32(0x1131112eu); f_11314770();
  /* 1131112e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311131 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311134 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131113c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131113f push edx */
  push32((uint32_t)(EDX));
  /* 11311140 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11311142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311145 push eax */
  push32((uint32_t)(EAX));
  /* 11311146 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311148 call 0x11314770 */
  push32(0x1131114du); f_11314770();
  /* 1131114d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311150 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311153 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311155 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311158 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131115b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131115e push edx */
  push32((uint32_t)(EDX));
  /* 1131115f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11311161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311164 push eax */
  push32((uint32_t)(EAX));
  /* 11311165 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311167 call 0x11314770 */
  push32(0x1131116cu); f_11314770();
  /* 1131116c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131116f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311172 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311174 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131117a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131117d push edx */
  push32((uint32_t)(EDX));
  /* 1131117e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11311180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311183 push eax */
  push32((uint32_t)(EAX));
  /* 11311184 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311186 call 0x11314770 */
  push32(0x1131118bu); f_11314770();
  /* 1131118b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131118e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311191 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311193 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311196 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311199 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131119c push edx */
  push32((uint32_t)(EDX));
  /* 1131119d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1131119f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113111a2 push eax */
  push32((uint32_t)(EAX));
  /* 113111a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113111a5 call 0x11314770 */
  push32(0x113111aau); f_11314770();
  /* 113111aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113111ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113111b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113111b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113111b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113111b8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113111bb push edx */
  push32((uint32_t)(EDX));
  /* 113111bc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 113111be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113111c1 push eax */
  push32((uint32_t)(EAX));
  /* 113111c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113111c4 call 0x11314770 */
  push32(0x113111c9u); f_11314770();
  /* 113111c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113111cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113111cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113111d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113111d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113111d7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113111da push edx */
  push32((uint32_t)(EDX));
  /* 113111db push 0x39 */
  push32((uint32_t)(0x39u));
  /* 113111dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113111e0 push eax */
  push32((uint32_t)(EAX));
  /* 113111e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113111e3 call 0x11314770 */
  push32(0x113111e8u); f_11314770();
  /* 113111e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113111eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113111ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113111f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113111f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113111f6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113111f9 push edx */
  push32((uint32_t)(EDX));
  /* 113111fa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 113111fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113111ff push eax */
  push32((uint32_t)(EAX));
  /* 11311200 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311202 call 0x11314770 */
  push32(0x11311207u); f_11314770();
  /* 11311207 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131120a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131120d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131120f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311212 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311215 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311218 push edx */
  push32((uint32_t)(EDX));
  /* 11311219 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1131121b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131121e push eax */
  push32((uint32_t)(EAX));
  /* 1131121f push 1 */
  push32((uint32_t)(0x1u));
  /* 11311221 call 0x11314770 */
  push32(0x11311226u); f_11314770();
  /* 11311226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311229 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131122c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131122e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311234 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311237 push edx */
  push32((uint32_t)(EDX));
  /* 11311238 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1131123a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131123d push eax */
  push32((uint32_t)(EAX));
  /* 1131123e push 1 */
  push32((uint32_t)(0x1u));
  /* 11311240 call 0x11314770 */
  push32(0x11311245u); f_11314770();
  /* 11311245 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311248 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131124b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131124d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311250 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311253 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311256 push edx */
  push32((uint32_t)(EDX));
  /* 11311257 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11311259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131125c push eax */
  push32((uint32_t)(EAX));
  /* 1131125d push 1 */
  push32((uint32_t)(0x1u));
  /* 1131125f call 0x11314770 */
  push32(0x11311264u); f_11314770();
  /* 11311264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131126a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131126c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131126f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311272 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311278 push edx */
  push32((uint32_t)(EDX));
  /* 11311279 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1131127b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131127e push eax */
  push32((uint32_t)(EAX));
  /* 1131127f push 1 */
  push32((uint32_t)(0x1u));
  /* 11311281 call 0x11314770 */
  push32(0x11311286u); f_11314770();
  /* 11311286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311289 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131128c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131128e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311294 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131129a push edx */
  push32((uint32_t)(EDX));
  /* 1131129b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1131129d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113112a0 push eax */
  push32((uint32_t)(EAX));
  /* 113112a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113112a3 call 0x11314770 */
  push32(0x113112a8u); f_11314770();
  /* 113112a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113112ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113112ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113112b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113112b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113112b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113112bc push edx */
  push32((uint32_t)(EDX));
  /* 113112bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113112bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113112c2 push eax */
  push32((uint32_t)(EAX));
  /* 113112c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113112c5 call 0x11314770 */
  push32(0x113112cau); f_11314770();
  /* 113112ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113112cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113112d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113112d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113112d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113112d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113112de push edx */
  push32((uint32_t)(EDX));
  /* 113112df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113112e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113112e4 push eax */
  push32((uint32_t)(EAX));
  /* 113112e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113112e7 call 0x11314770 */
  push32(0x113112ecu); f_11314770();
  /* 113112ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113112ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113112f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113112f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113112f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113112fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311300 push edx */
  push32((uint32_t)(EDX));
  /* 11311301 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11311303 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311306 push eax */
  push32((uint32_t)(EAX));
  /* 11311307 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311309 call 0x11314770 */
  push32(0x1131130eu); f_11314770();
  /* 1131130e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311311 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311314 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311316 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11311319 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131131c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311322 push edx */
  push32((uint32_t)(EDX));
  /* 11311323 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11311325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311328 push eax */
  push32((uint32_t)(EAX));
  /* 11311329 push 1 */
  push32((uint32_t)(0x1u));
  /* 1131132b call 0x11314770 */
  push32(0x11311330u); f_11314770();
  /* 11311330 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311333 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311336 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311338 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131133b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131133e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311344 push edx */
  push32((uint32_t)(EDX));
  /* 11311345 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11311347 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131134a push eax */
  push32((uint32_t)(EAX));
  /* 1131134b push 1 */
  push32((uint32_t)(0x1u));
  /* 1131134d call 0x11314770 */
  push32(0x11311352u); f_11314770();
  /* 11311352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311355 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11311358 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131135a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131135d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311360 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311366 push edx */
  push32((uint32_t)(EDX));
  /* 11311367 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11311369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131136c push eax */
  push32((uint32_t)(EAX));
  /* 1131136d push 1 */
  push32((uint32_t)(0x1u));
  /* 1131136f call 0x11314770 */
  push32(0x11311374u); f_11314770();
  /* 11311374 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131137a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131137c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1131137f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311382 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311388 push edx */
  push32((uint32_t)(EDX));
  /* 11311389 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1131138b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131138e push eax */
  push32((uint32_t)(EAX));
  /* 1131138f push 1 */
  push32((uint32_t)(0x1u));
  /* 11311391 call 0x11314770 */
  push32(0x11311396u); f_11314770();
  /* 11311396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311399 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131139c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131139e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113113a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113113a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113113aa push edx */
  push32((uint32_t)(EDX));
  /* 113113ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113113ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113113b0 push eax */
  push32((uint32_t)(EAX));
  /* 113113b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113113b3 call 0x11314770 */
  push32(0x113113b8u); f_11314770();
  /* 113113b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113113bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113113be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113113c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113113c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113113c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113113cc push edx */
  push32((uint32_t)(EDX));
  /* 113113cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 113113d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113113d5 push eax */
  push32((uint32_t)(EAX));
  /* 113113d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113113d8 call 0x11314770 */
  push32(0x113113ddu); f_11314770();
  /* 113113dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113113e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113113e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113113e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113113e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_113113eb:;
  /* 113113eb mov esp, ebp */
  ESP = (EBP);
  /* 113113ed pop ebp */
  EBP = (pop32());
  /* 113113ee ret  */
  ESPCHK(0x11310e60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x113113f0 (779 bytes, 265 insns) */
void f_113113f0(void) {
  FTRACE(0x113113f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113113f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113113f1 mov ebp, esp */
  EBP = (ESP);
  /* 113113f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113113f7 jne 0x113113fe */
  if (!C.zf) goto L_113113fe;
  /* 113113f9 jmp 0x113116f9 */
  goto L_113116f9;
L_113113fe:;
  /* 113113fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11311400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311403 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11311406 push ecx */
  push32((uint32_t)(ECX));
  /* 11311407 call 0x11307040 */
  push32(0x1131140cu); f_11307040();
  /* 1131140c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131140f push 2 */
  push32((uint32_t)(0x2u));
  /* 11311411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311414 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11311417 push eax */
  push32((uint32_t)(EAX));
  /* 11311418 call 0x11307040 */
  push32(0x1131141du); f_11307040();
  /* 1131141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311420 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311422 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311425 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11311428 push edx */
  push32((uint32_t)(EDX));
  /* 11311429 call 0x11307040 */
  push32(0x1131142eu); f_11307040();
  /* 1131142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311431 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311436 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11311439 push ecx */
  push32((uint32_t)(ECX));
  /* 1131143a call 0x11307040 */
  push32(0x1131143fu); f_11307040();
  /* 1131143f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311442 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311447 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1131144a push eax */
  push32((uint32_t)(EAX));
  /* 1131144b call 0x11307040 */
  push32(0x11311450u); f_11307040();
  /* 11311450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311453 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311455 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311458 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1131145b push edx */
  push32((uint32_t)(EDX));
  /* 1131145c call 0x11307040 */
  push32(0x11311461u); f_11307040();
  /* 11311461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311464 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311469 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1131146b push ecx */
  push32((uint32_t)(ECX));
  /* 1131146c call 0x11307040 */
  push32(0x11311471u); f_11307040();
  /* 11311471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311474 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311476 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311479 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1131147c push eax */
  push32((uint32_t)(EAX));
  /* 1131147d call 0x11307040 */
  push32(0x11311482u); f_11307040();
  /* 11311482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311485 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131148a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1131148d push edx */
  push32((uint32_t)(EDX));
  /* 1131148e call 0x11307040 */
  push32(0x11311493u); f_11307040();
  /* 11311493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311496 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131149b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1131149e push ecx */
  push32((uint32_t)(ECX));
  /* 1131149f call 0x11307040 */
  push32(0x113114a4u); f_11307040();
  /* 113114a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113114a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113114a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113114ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 113114af push eax */
  push32((uint32_t)(EAX));
  /* 113114b0 call 0x11307040 */
  push32(0x113114b5u); f_11307040();
  /* 113114b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113114b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113114ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113114bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 113114c0 push edx */
  push32((uint32_t)(EDX));
  /* 113114c1 call 0x11307040 */
  push32(0x113114c6u); f_11307040();
  /* 113114c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113114c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113114cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113114ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 113114d1 push ecx */
  push32((uint32_t)(ECX));
  /* 113114d2 call 0x11307040 */
  push32(0x113114d7u); f_11307040();
  /* 113114d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113114da push 2 */
  push32((uint32_t)(0x2u));
  /* 113114dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113114df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113114e2 push eax */
  push32((uint32_t)(EAX));
  /* 113114e3 call 0x11307040 */
  push32(0x113114e8u); f_11307040();
  /* 113114e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113114eb push 2 */
  push32((uint32_t)(0x2u));
  /* 113114ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113114f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 113114f3 push edx */
  push32((uint32_t)(EDX));
  /* 113114f4 call 0x11307040 */
  push32(0x113114f9u); f_11307040();
  /* 113114f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113114fc push 2 */
  push32((uint32_t)(0x2u));
  /* 113114fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311501 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11311504 push ecx */
  push32((uint32_t)(ECX));
  /* 11311505 call 0x11307040 */
  push32(0x1131150au); f_11307040();
  /* 1131150a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131150d push 2 */
  push32((uint32_t)(0x2u));
  /* 1131150f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311512 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11311515 push eax */
  push32((uint32_t)(EAX));
  /* 11311516 call 0x11307040 */
  push32(0x1131151bu); f_11307040();
  /* 1131151b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131151e push 2 */
  push32((uint32_t)(0x2u));
  /* 11311520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311523 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11311526 push edx */
  push32((uint32_t)(EDX));
  /* 11311527 call 0x11307040 */
  push32(0x1131152cu); f_11307040();
  /* 1131152c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131152f push 2 */
  push32((uint32_t)(0x2u));
  /* 11311531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311534 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11311537 push ecx */
  push32((uint32_t)(ECX));
  /* 11311538 call 0x11307040 */
  push32(0x1131153du); f_11307040();
  /* 1131153d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311540 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311542 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311545 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11311548 push eax */
  push32((uint32_t)(EAX));
  /* 11311549 call 0x11307040 */
  push32(0x1131154eu); f_11307040();
  /* 1131154e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311551 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311556 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11311559 push edx */
  push32((uint32_t)(EDX));
  /* 1131155a call 0x11307040 */
  push32(0x1131155fu); f_11307040();
  /* 1131155f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311562 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311567 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1131156a push ecx */
  push32((uint32_t)(ECX));
  /* 1131156b call 0x11307040 */
  push32(0x11311570u); f_11307040();
  /* 11311570 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311573 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311575 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311578 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1131157b push eax */
  push32((uint32_t)(EAX));
  /* 1131157c call 0x11307040 */
  push32(0x11311581u); f_11307040();
  /* 11311581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311584 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311589 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1131158c push edx */
  push32((uint32_t)(EDX));
  /* 1131158d call 0x11307040 */
  push32(0x11311592u); f_11307040();
  /* 11311592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311595 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131159a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1131159d push ecx */
  push32((uint32_t)(ECX));
  /* 1131159e call 0x11307040 */
  push32(0x113115a3u); f_11307040();
  /* 113115a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113115a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113115a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113115ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 113115ae push eax */
  push32((uint32_t)(EAX));
  /* 113115af call 0x11307040 */
  push32(0x113115b4u); f_11307040();
  /* 113115b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113115b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113115b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113115bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 113115bf push edx */
  push32((uint32_t)(EDX));
  /* 113115c0 call 0x11307040 */
  push32(0x113115c5u); f_11307040();
  /* 113115c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113115c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113115ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113115cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 113115d0 push ecx */
  push32((uint32_t)(ECX));
  /* 113115d1 call 0x11307040 */
  push32(0x113115d6u); f_11307040();
  /* 113115d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113115d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113115db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113115de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 113115e1 push eax */
  push32((uint32_t)(EAX));
  /* 113115e2 call 0x11307040 */
  push32(0x113115e7u); f_11307040();
  /* 113115e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113115ea push 2 */
  push32((uint32_t)(0x2u));
  /* 113115ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113115ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 113115f2 push edx */
  push32((uint32_t)(EDX));
  /* 113115f3 call 0x11307040 */
  push32(0x113115f8u); f_11307040();
  /* 113115f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113115fb push 2 */
  push32((uint32_t)(0x2u));
  /* 113115fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311600 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11311603 push ecx */
  push32((uint32_t)(ECX));
  /* 11311604 call 0x11307040 */
  push32(0x11311609u); f_11307040();
  /* 11311609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131160c push 2 */
  push32((uint32_t)(0x2u));
  /* 1131160e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311611 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11311614 push eax */
  push32((uint32_t)(EAX));
  /* 11311615 call 0x11307040 */
  push32(0x1131161au); f_11307040();
  /* 1131161a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131161d push 2 */
  push32((uint32_t)(0x2u));
  /* 1131161f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311622 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11311628 push edx */
  push32((uint32_t)(EDX));
  /* 11311629 call 0x11307040 */
  push32(0x1131162eu); f_11307040();
  /* 1131162e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311631 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311636 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1131163c push ecx */
  push32((uint32_t)(ECX));
  /* 1131163d call 0x11307040 */
  push32(0x11311642u); f_11307040();
  /* 11311642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311645 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131164a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11311650 push eax */
  push32((uint32_t)(EAX));
  /* 11311651 call 0x11307040 */
  push32(0x11311656u); f_11307040();
  /* 11311656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311659 push 2 */
  push32((uint32_t)(0x2u));
  /* 1131165b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131165e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11311664 push edx */
  push32((uint32_t)(EDX));
  /* 11311665 call 0x11307040 */
  push32(0x1131166au); f_11307040();
  /* 1131166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131166d push 2 */
  push32((uint32_t)(0x2u));
  /* 1131166f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311672 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11311678 push ecx */
  push32((uint32_t)(ECX));
  /* 11311679 call 0x11307040 */
  push32(0x1131167eu); f_11307040();
  /* 1131167e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311681 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311683 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311686 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1131168c push eax */
  push32((uint32_t)(EAX));
  /* 1131168d call 0x11307040 */
  push32(0x11311692u); f_11307040();
  /* 11311692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311695 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131169a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 113116a0 push edx */
  push32((uint32_t)(EDX));
  /* 113116a1 call 0x11307040 */
  push32(0x113116a6u); f_11307040();
  /* 113116a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113116a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113116ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113116ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 113116b4 push ecx */
  push32((uint32_t)(ECX));
  /* 113116b5 call 0x11307040 */
  push32(0x113116bau); f_11307040();
  /* 113116ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113116bd push 2 */
  push32((uint32_t)(0x2u));
  /* 113116bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113116c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 113116c8 push eax */
  push32((uint32_t)(EAX));
  /* 113116c9 call 0x11307040 */
  push32(0x113116ceu); f_11307040();
  /* 113116ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113116d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113116d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113116d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 113116dc push edx */
  push32((uint32_t)(EDX));
  /* 113116dd call 0x11307040 */
  push32(0x113116e2u); f_11307040();
  /* 113116e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113116e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113116e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113116ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 113116f0 push ecx */
  push32((uint32_t)(ECX));
  /* 113116f1 call 0x11307040 */
  push32(0x113116f6u); f_11307040();
  /* 113116f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113116f9:;
  /* 113116f9 pop ebp */
  EBP = (pop32());
  /* 113116fa ret  */
  ESPCHK(0x113113f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011700 @ 0x11311700 (678 bytes, 180 insns) */
void f_11311700(void) {
  FTRACE(0x11311700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11311700 push ebp */
  push32((uint32_t)(EBP));
  /* 11311701 mov ebp, esp */
  EBP = (ESP);
  /* 11311703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11311706 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1131170d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131170f mov ax, word ptr [0x113329ea] */
  AX = (r16((uint32_t)(0x113329ea)));
  /* 11311715 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11311718 cmp dword ptr [0x11332990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131171f je 0x1131187a */
  if (C.zf) goto L_1131187a;
  /* 11311725 push 0x113329b8 */
  push32((uint32_t)(0x113329b8u));
  /* 1131172a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1131172c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131172f push ecx */
  push32((uint32_t)(ECX));
  /* 11311730 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311732 call 0x11314770 */
  push32(0x11311737u); f_11314770();
  /* 11311737 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131173a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131173d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1131173f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11311742 push 0x113329bc */
  push32((uint32_t)(0x113329bcu));
  /* 11311747 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11311749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131174c push eax */
  push32((uint32_t)(EAX));
  /* 1131174d push 1 */
  push32((uint32_t)(0x1u));
  /* 1131174f call 0x11314770 */
  push32(0x11311754u); f_11314770();
  /* 11311754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311757 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131175a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1131175c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1131175f push 0x113329c0 */
  push32((uint32_t)(0x113329c0u));
  /* 11311764 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11311766 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311769 push edx */
  push32((uint32_t)(EDX));
  /* 1131176a push 1 */
  push32((uint32_t)(0x1u));
  /* 1131176c call 0x11314770 */
  push32(0x11311771u); f_11314770();
  /* 11311771 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311777 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311779 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1131177c mov edx, dword ptr [0x113329c0] */
  EDX = (r32((uint32_t)(0x113329c0)));
  /* 11311782 push edx */
  push32((uint32_t)(EDX));
  /* 11311783 call 0x113119b0 */
  push32(0x11311788u); f_113119b0();
  /* 11311788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131178b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131178f je 0x113117e9 */
  if (C.zf) goto L_113117e9;
  /* 11311791 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311793 mov eax, dword ptr [0x113329b8] */
  EAX = (r32((uint32_t)(0x113329b8)));
  /* 11311798 push eax */
  push32((uint32_t)(EAX));
  /* 11311799 call 0x11307040 */
  push32(0x1131179eu); f_11307040();
  /* 1131179e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113117a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113117a3 mov ecx, dword ptr [0x113329bc] */
  ECX = (r32((uint32_t)(0x113329bc)));
  /* 113117a9 push ecx */
  push32((uint32_t)(ECX));
  /* 113117aa call 0x11307040 */
  push32(0x113117afu); f_11307040();
  /* 113117af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113117b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113117b4 mov edx, dword ptr [0x113329c0] */
  EDX = (r32((uint32_t)(0x113329c0)));
  /* 113117ba push edx */
  push32((uint32_t)(EDX));
  /* 113117bb call 0x11307040 */
  push32(0x113117c0u); f_11307040();
  /* 113117c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113117c3 mov dword ptr [0x113329b8], 0 */
  w32((uint32_t)(0x113329b8), (0x0u));
  /* 113117cd mov dword ptr [0x113329bc], 0 */
  w32((uint32_t)(0x113329bc), (0x0u));
  /* 113117d7 mov dword ptr [0x113329c0], 0 */
  w32((uint32_t)(0x113329c0), (0x0u));
  /* 113117e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113117e4 jmp 0x113119a2 */
  goto L_113119a2;
L_113117e9:;
  /* 113117e9 mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 113117ee cmp dword ptr [eax], 0x11331d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11331d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113117f4 je 0x11311830 */
  if (C.zf) goto L_11311830;
  /* 113117f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113117f8 mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 113117fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11311800 push edx */
  push32((uint32_t)(EDX));
  /* 11311801 call 0x11307040 */
  push32(0x11311806u); f_11307040();
  /* 11311806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311809 push 2 */
  push32((uint32_t)(0x2u));
  /* 1131180b mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 11311810 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11311813 push ecx */
  push32((uint32_t)(ECX));
  /* 11311814 call 0x11307040 */
  push32(0x11311819u); f_11307040();
  /* 11311819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131181c push 2 */
  push32((uint32_t)(0x2u));
  /* 1131181e mov edx, dword ptr [0x11331d88] */
  EDX = (r32((uint32_t)(0x11331d88)));
  /* 11311824 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11311827 push eax */
  push32((uint32_t)(EAX));
  /* 11311828 call 0x11307040 */
  push32(0x1131182du); f_11307040();
  /* 1131182d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11311830:;
  /* 11311830 mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311836 mov edx, dword ptr [0x113329b8] */
  EDX = (r32((uint32_t)(0x113329b8)));
  /* 1131183c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1131183e mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 11311843 mov ecx, dword ptr [0x113329bc] */
  ECX = (r32((uint32_t)(0x113329bc)));
  /* 11311849 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1131184c mov edx, dword ptr [0x11331d88] */
  EDX = (r32((uint32_t)(0x11331d88)));
  /* 11311852 mov eax, dword ptr [0x113329c0] */
  EAX = (r32((uint32_t)(0x113329c0)));
  /* 11311857 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1131185a mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311860 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11311862 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11311864 mov byte ptr [0x11330ea8], al */
  w8((uint32_t)(0x11330ea8), (AL));
  /* 11311869 mov dword ptr [0x11330eac], 1 */
  w32((uint32_t)(0x11330eac), (0x1u));
  /* 11311873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11311875 jmp 0x113119a2 */
  goto L_113119a2;
L_1131187a:;
  /* 1131187a push 2 */
  push32((uint32_t)(0x2u));
  /* 1131187c mov ecx, dword ptr [0x113329b8] */
  ECX = (r32((uint32_t)(0x113329b8)));
  /* 11311882 push ecx */
  push32((uint32_t)(ECX));
  /* 11311883 call 0x11307040 */
  push32(0x11311888u); f_11307040();
  /* 11311888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131188b push 2 */
  push32((uint32_t)(0x2u));
  /* 1131188d mov edx, dword ptr [0x113329bc] */
  EDX = (r32((uint32_t)(0x113329bc)));
  /* 11311893 push edx */
  push32((uint32_t)(EDX));
  /* 11311894 call 0x11307040 */
  push32(0x11311899u); f_11307040();
  /* 11311899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131189c push 2 */
  push32((uint32_t)(0x2u));
  /* 1131189e mov eax, dword ptr [0x113329c0] */
  EAX = (r32((uint32_t)(0x113329c0)));
  /* 113118a3 push eax */
  push32((uint32_t)(EAX));
  /* 113118a4 call 0x11307040 */
  push32(0x113118a9u); f_11307040();
  /* 113118a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113118ac mov dword ptr [0x113329b8], 0 */
  w32((uint32_t)(0x113329b8), (0x0u));
  /* 113118b6 mov dword ptr [0x113329bc], 0 */
  w32((uint32_t)(0x113329bc), (0x0u));
  /* 113118c0 mov dword ptr [0x113329c0], 0 */
  w32((uint32_t)(0x113329c0), (0x0u));
  /* 113118ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 113118cf push 0x1132e4a4 */
  push32((uint32_t)(0x1132e4a4u));
  /* 113118d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113118d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113118d8 call 0x113065b0 */
  push32(0x113118ddu); f_113065b0();
  /* 113118dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113118e0 mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 113118e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113118e8 mov edx, dword ptr [0x11331d88] */
  EDX = (r32((uint32_t)(0x11331d88)));
  /* 113118ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113118f1 jne 0x113118fb */
  if (!C.zf) goto L_113118fb;
  /* 113118f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113118f6 jmp 0x113119a2 */
  goto L_113119a2;
L_113118fb:;
  /* 113118fb push 0x1132e474 */
  push32((uint32_t)(0x1132e474u));
  /* 11311900 mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 11311905 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11311907 push ecx */
  push32((uint32_t)(ECX));
  /* 11311908 call 0x11309560 */
  push32(0x1131190du); f_11309560();
  /* 1131190d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311910 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11311915 push 0x1132e4a4 */
  push32((uint32_t)(0x1132e4a4u));
  /* 1131191a push 2 */
  push32((uint32_t)(0x2u));
  /* 1131191c push 2 */
  push32((uint32_t)(0x2u));
  /* 1131191e call 0x113065b0 */
  push32(0x11311923u); f_113065b0();
  /* 11311923 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311926 mov edx, dword ptr [0x11331d88] */
  EDX = (r32((uint32_t)(0x11331d88)));
  /* 1131192c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1131192f mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 11311934 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311938 jne 0x1131193f */
  if (!C.zf) goto L_1131193f;
  /* 1131193a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1131193d jmp 0x113119a2 */
  goto L_113119a2;
L_1131193f:;
  /* 1131193f mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311945 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11311948 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1131194b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11311950 push 0x1132e4a4 */
  push32((uint32_t)(0x1132e4a4u));
  /* 11311955 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311957 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311959 call 0x113065b0 */
  push32(0x1131195eu); f_113065b0();
  /* 1131195e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311961 mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311967 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1131196a mov edx, dword ptr [0x11331d88] */
  EDX = (r32((uint32_t)(0x11331d88)));
  /* 11311970 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311974 jne 0x1131197b */
  if (!C.zf) goto L_1131197b;
  /* 11311976 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11311979 jmp 0x113119a2 */
  goto L_113119a2;
L_1131197b:;
  /* 1131197b mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 11311980 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11311983 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11311986 mov edx, dword ptr [0x11331d88] */
  EDX = (r32((uint32_t)(0x11331d88)));
  /* 1131198c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1131198e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11311990 mov byte ptr [0x11330ea8], cl */
  w8((uint32_t)(0x11330ea8), (CL));
  /* 11311996 mov dword ptr [0x11330eac], 1 */
  w32((uint32_t)(0x11330eac), (0x1u));
  /* 113119a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113119a2:;
  /* 113119a2 mov esp, ebp */
  ESP = (EBP);
  /* 113119a4 pop ebp */
  EBP = (pop32());
  /* 113119a5 ret  */
  ESPCHK(0x11311700u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x113119b0 (125 bytes, 49 insns) */
void f_113119b0(void) {
  FTRACE(0x113119b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113119b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113119b1 mov ebp, esp */
  EBP = (ESP);
  /* 113119b3 push ecx */
  push32((uint32_t)(ECX));
L_113119b4:;
  /* 113119b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113119ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113119bc je 0x11311a29 */
  if (C.zf) goto L_11311a29;
  /* 113119be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113119c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113119c7 jl 0x113119ed */
  if ((C.sf!=C.of)) goto L_113119ed;
  /* 113119c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113119cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113119d2 jg 0x113119ed */
  if ((!C.zf&&C.sf==C.of)) goto L_113119ed;
  /* 113119d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113119da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113119dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113119e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113119e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113119eb jmp 0x11311a27 */
  goto L_11311a27;
L_113119ed:;
  /* 113119ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113119f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113119f6 jne 0x11311a1e */
  if (!C.zf) goto L_11311a1e;
  /* 113119f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113119fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113119fe:;
  /* 113119fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311a01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311a04 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11311a07 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11311a09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311a0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311a0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11311a12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311a15 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11311a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11311a1a jne 0x113119fe */
  if (!C.zf) goto L_113119fe;
  /* 11311a1c jmp 0x11311a27 */
  goto L_11311a27;
L_11311a1e:;
  /* 11311a1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311a21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311a24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11311a27:;
  /* 11311a27 jmp 0x113119b4 */
  goto L_113119b4;
L_11311a29:;
  /* 11311a29 mov esp, ebp */
  ESP = (EBP);
  /* 11311a2b pop ebp */
  EBP = (pop32());
  /* 11311a2c ret  */
  ESPCHK(0x113119b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a30 @ 0x11311a30 (304 bytes, 85 insns) */
void f_11311a30(void) {
  FTRACE(0x11311a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11311a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11311a31 mov ebp, esp */
  EBP = (ESP);
  /* 11311a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11311a34 cmp dword ptr [0x1133298c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1133298c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311a3b je 0x11311afc */
  if (C.zf) goto L_11311afc;
  /* 11311a41 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11311a43 push 0x1132e4b0 */
  push32((uint32_t)(0x1132e4b0u));
  /* 11311a48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311a4a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11311a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11311a4e call 0x113069c0 */
  push32(0x11311a53u); f_113069c0();
  /* 11311a53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311a56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11311a59 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311a5d jne 0x11311a69 */
  if (!C.zf) goto L_11311a69;
  /* 11311a5f mov eax, 1 */
  EAX = (0x1u);
  /* 11311a64 jmp 0x11311b5c */
  goto L_11311b5c;
L_11311a69:;
  /* 11311a69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311a6c push eax */
  push32((uint32_t)(EAX));
  /* 11311a6d call 0x11311b60 */
  push32(0x11311a72u); f_11311b60();
  /* 11311a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11311a77 je 0x11311a9d */
  if (C.zf) goto L_11311a9d;
  /* 11311a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311a7c push ecx */
  push32((uint32_t)(ECX));
  /* 11311a7d call 0x11311df0 */
  push32(0x11311a82u); f_11311df0();
  /* 11311a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311a85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311a87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311a8a push edx */
  push32((uint32_t)(EDX));
  /* 11311a8b call 0x11307040 */
  push32(0x11311a90u); f_11307040();
  /* 11311a90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311a93 mov eax, 1 */
  EAX = (0x1u);
  /* 11311a98 jmp 0x11311b5c */
  goto L_11311b5c;
L_11311a9d:;
  /* 11311a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311aa0 mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311aa6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11311aa8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11311aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311aad mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311ab3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11311ab6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11311ab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311abc mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311ac2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11311ac5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11311ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311acb mov dword ptr [0x11331d88], eax */
  w32((uint32_t)(0x11331d88), (EAX));
  /* 11311ad0 mov ecx, dword ptr [0x113329c4] */
  ECX = (r32((uint32_t)(0x113329c4)));
  /* 11311ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 11311ad7 call 0x11311df0 */
  push32(0x11311adcu); f_11311df0();
  /* 11311adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311adf push 2 */
  push32((uint32_t)(0x2u));
  /* 11311ae1 mov edx, dword ptr [0x113329c4] */
  EDX = (r32((uint32_t)(0x113329c4)));
  /* 11311ae7 push edx */
  push32((uint32_t)(EDX));
  /* 11311ae8 call 0x11307040 */
  push32(0x11311aedu); f_11307040();
  /* 11311aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311af0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311af3 mov dword ptr [0x113329c4], eax */
  w32((uint32_t)(0x113329c4), (EAX));
  /* 11311af8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11311afa jmp 0x11311b5c */
  goto L_11311b5c;
L_11311afc:;
  /* 11311afc mov ecx, dword ptr [0x11331d88] */
  ECX = (r32((uint32_t)(0x11331d88)));
  /* 11311b02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11311b04 mov dword ptr [0x11331d58], edx */
  w32((uint32_t)(0x11331d58), (EDX));
  /* 11311b0a mov eax, dword ptr [0x11331d88] */
  EAX = (r32((uint32_t)(0x11331d88)));
  /* 11311b0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11311b12 mov dword ptr [0x11331d5c], ecx */
  w32((uint32_t)(0x11331d5c), (ECX));
  /* 11311b18 mov edx, dword ptr [0x11331d88] */
  EDX = (r32((uint32_t)(0x11331d88)));
  /* 11311b1e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11311b21 mov dword ptr [0x11331d60], eax */
  w32((uint32_t)(0x11331d60), (EAX));
  /* 11311b26 mov dword ptr [0x11331d88], 0x11331d58 */
  w32((uint32_t)(0x11331d88), (0x11331d58u));
  /* 11311b30 mov ecx, dword ptr [0x113329c4] */
  ECX = (r32((uint32_t)(0x113329c4)));
  /* 11311b36 push ecx */
  push32((uint32_t)(ECX));
  /* 11311b37 call 0x11311df0 */
  push32(0x11311b3cu); f_11311df0();
  /* 11311b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311b3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11311b41 mov edx, dword ptr [0x113329c4] */
  EDX = (r32((uint32_t)(0x113329c4)));
  /* 11311b47 push edx */
  push32((uint32_t)(EDX));
  /* 11311b48 call 0x11307040 */
  push32(0x11311b4du); f_11307040();
  /* 11311b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311b50 mov dword ptr [0x113329c4], 0 */
  w32((uint32_t)(0x113329c4), (0x0u));
  /* 11311b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11311b5c:;
  /* 11311b5c mov esp, ebp */
  ESP = (EBP);
  /* 11311b5e pop ebp */
  EBP = (pop32());
  /* 11311b5f ret  */
  ESPCHK(0x11311a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x11311b60 (525 bytes, 200 insns) */
void f_11311b60(void) {
  FTRACE(0x11311b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11311b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11311b61 mov ebp, esp */
  EBP = (ESP);
  /* 11311b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11311b66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11311b6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11311b6f mov ax, word ptr [0x113329e4] */
  AX = (r16((uint32_t)(0x113329e4)));
  /* 11311b75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11311b78 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311b7c jne 0x11311b86 */
  if (!C.zf) goto L_11311b86;
  /* 11311b7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11311b81 jmp 0x11311d69 */
  goto L_11311d69;
L_11311b86:;
  /* 11311b86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311b89 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311b8c push ecx */
  push32((uint32_t)(ECX));
  /* 11311b8d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11311b8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311b92 push edx */
  push32((uint32_t)(EDX));
  /* 11311b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311b95 call 0x11314770 */
  push32(0x11311b9au); f_11314770();
  /* 11311b9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311b9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311ba0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311ba2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311ba8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311bab push edx */
  push32((uint32_t)(EDX));
  /* 11311bac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11311bae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311bb1 push eax */
  push32((uint32_t)(EAX));
  /* 11311bb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311bb4 call 0x11314770 */
  push32(0x11311bb9u); f_11314770();
  /* 11311bb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311bbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311bbf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311bc1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311bc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311bc7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311bca push edx */
  push32((uint32_t)(EDX));
  /* 11311bcb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11311bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11311bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311bd3 call 0x11314770 */
  push32(0x11311bd8u); f_11314770();
  /* 11311bd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311bdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311bde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311be0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311be3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311be6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311be9 push edx */
  push32((uint32_t)(EDX));
  /* 11311bea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11311bec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311bef push eax */
  push32((uint32_t)(EAX));
  /* 11311bf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11311bf2 call 0x11314770 */
  push32(0x11311bf7u); f_11314770();
  /* 11311bf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311bfa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311bfd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311bff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311c02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311c05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c08 push edx */
  push32((uint32_t)(EDX));
  /* 11311c09 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11311c0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311c0e push eax */
  push32((uint32_t)(EAX));
  /* 11311c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11311c11 call 0x11314770 */
  push32(0x11311c16u); f_11314770();
  /* 11311c16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311c1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311c1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311c21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311c24 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11311c27 push eax */
  push32((uint32_t)(EAX));
  /* 11311c28 call 0x11311d70 */
  push32(0x11311c2du); f_11311d70();
  /* 11311c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311c33 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c36 push ecx */
  push32((uint32_t)(ECX));
  /* 11311c37 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11311c39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311c3c push edx */
  push32((uint32_t)(EDX));
  /* 11311c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11311c3f call 0x11314770 */
  push32(0x11311c44u); f_11314770();
  /* 11311c44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311c4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311c4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311c4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311c52 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c55 push edx */
  push32((uint32_t)(EDX));
  /* 11311c56 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11311c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311c5b push eax */
  push32((uint32_t)(EAX));
  /* 11311c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11311c5e call 0x11314770 */
  push32(0x11311c63u); f_11314770();
  /* 11311c63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311c69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311c6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311c71 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c74 push edx */
  push32((uint32_t)(EDX));
  /* 11311c75 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11311c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311c7a push eax */
  push32((uint32_t)(EAX));
  /* 11311c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11311c7d call 0x11314770 */
  push32(0x11311c82u); f_11314770();
  /* 11311c82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311c88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311c8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311c90 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311c93 push edx */
  push32((uint32_t)(EDX));
  /* 11311c94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11311c96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311c99 push eax */
  push32((uint32_t)(EAX));
  /* 11311c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11311c9c call 0x11314770 */
  push32(0x11311ca1u); f_11314770();
  /* 11311ca1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311ca4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311ca7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311ca9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311cac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311caf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311cb2 push edx */
  push32((uint32_t)(EDX));
  /* 11311cb3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11311cb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11311cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11311cbb call 0x11314770 */
  push32(0x11311cc0u); f_11314770();
  /* 11311cc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311cc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311cc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311cc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311ccb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311cce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11311cd2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11311cd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311cd7 push eax */
  push32((uint32_t)(EAX));
  /* 11311cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11311cda call 0x11314770 */
  push32(0x11311cdfu); f_11314770();
  /* 11311cdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311ce2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311ce5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311ce7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311cea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311ced add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311cf0 push edx */
  push32((uint32_t)(EDX));
  /* 11311cf1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11311cf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311cf6 push eax */
  push32((uint32_t)(EAX));
  /* 11311cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11311cf9 call 0x11314770 */
  push32(0x11311cfeu); f_11314770();
  /* 11311cfe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311d01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311d04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311d06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311d09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311d0c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311d0f push edx */
  push32((uint32_t)(EDX));
  /* 11311d10 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11311d12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311d15 push eax */
  push32((uint32_t)(EAX));
  /* 11311d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11311d18 call 0x11314770 */
  push32(0x11311d1du); f_11314770();
  /* 11311d1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311d20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311d23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311d25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311d28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311d2b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311d2e push edx */
  push32((uint32_t)(EDX));
  /* 11311d2f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11311d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311d34 push eax */
  push32((uint32_t)(EAX));
  /* 11311d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11311d37 call 0x11314770 */
  push32(0x11311d3cu); f_11314770();
  /* 11311d3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311d3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311d42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311d44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311d47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311d4a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311d4d push edx */
  push32((uint32_t)(EDX));
  /* 11311d4e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11311d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311d53 push eax */
  push32((uint32_t)(EAX));
  /* 11311d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11311d56 call 0x11314770 */
  push32(0x11311d5bu); f_11314770();
  /* 11311d5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311d5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11311d61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11311d63 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11311d66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11311d69:;
  /* 11311d69 mov esp, ebp */
  ESP = (EBP);
  /* 11311d6b pop ebp */
  EBP = (pop32());
  /* 11311d6c ret  */
  ESPCHK(0x11311b60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11311d70 (125 bytes, 49 insns) */
void f_11311d70(void) {
  FTRACE(0x11311d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11311d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11311d71 mov ebp, esp */
  EBP = (ESP);
  /* 11311d73 push ecx */
  push32((uint32_t)(ECX));
L_11311d74:;
  /* 11311d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311d77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11311d7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11311d7c je 0x11311de9 */
  if (C.zf) goto L_11311de9;
  /* 11311d7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311d81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11311d84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311d87 jl 0x11311dad */
  if ((C.sf!=C.of)) goto L_11311dad;
  /* 11311d89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311d8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11311d8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311d92 jg 0x11311dad */
  if ((!C.zf&&C.sf==C.of)) goto L_11311dad;
  /* 11311d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311d97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11311d9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11311d9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311da0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11311da2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311da5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311da8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11311dab jmp 0x11311de7 */
  goto L_11311de7;
L_11311dad:;
  /* 11311dad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311db0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11311db3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311db6 jne 0x11311dde */
  if (!C.zf) goto L_11311dde;
  /* 11311db8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311dbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11311dbe:;
  /* 11311dbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311dc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311dc4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11311dc7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11311dc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311dcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311dcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11311dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11311dd5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11311dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11311dda jne 0x11311dbe */
  if (!C.zf) goto L_11311dbe;
  /* 11311ddc jmp 0x11311de7 */
  goto L_11311de7;
L_11311dde:;
  /* 11311dde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311de1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311de4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11311de7:;
  /* 11311de7 jmp 0x11311d74 */
  goto L_11311d74;
L_11311de9:;
  /* 11311de9 mov esp, ebp */
  ESP = (EBP);
  /* 11311deb pop ebp */
  EBP = (pop32());
  /* 11311dec ret  */
  ESPCHK(0x11311d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011df0 @ 0x11311df0 (147 bytes, 52 insns) */
void f_11311df0(void) {
  FTRACE(0x11311df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11311df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11311df1 mov ebp, esp */
  EBP = (ESP);
  /* 11311df3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311df7 jne 0x11311dfe */
  if (!C.zf) goto L_11311dfe;
  /* 11311df9 jmp 0x11311e81 */
  goto L_11311e81;
L_11311dfe:;
  /* 11311dfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e01 cmp dword ptr [eax + 0xc], 0x11332a20 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11332a20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311e08 je 0x11311e81 */
  if (C.zf) goto L_11311e81;
  /* 11311e0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11311e0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11311e12 push edx */
  push32((uint32_t)(EDX));
  /* 11311e13 call 0x11307040 */
  push32(0x11311e18u); f_11307040();
  /* 11311e18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311e1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11311e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11311e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11311e24 call 0x11307040 */
  push32(0x11311e29u); f_11307040();
  /* 11311e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311e2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11311e2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11311e34 push eax */
  push32((uint32_t)(EAX));
  /* 11311e35 call 0x11307040 */
  push32(0x11311e3au); f_11307040();
  /* 11311e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311e3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11311e3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11311e45 push edx */
  push32((uint32_t)(EDX));
  /* 11311e46 call 0x11307040 */
  push32(0x11311e4bu); f_11307040();
  /* 11311e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311e4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11311e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11311e56 push ecx */
  push32((uint32_t)(ECX));
  /* 11311e57 call 0x11307040 */
  push32(0x11311e5cu); f_11307040();
  /* 11311e5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311e5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11311e61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11311e67 push eax */
  push32((uint32_t)(EAX));
  /* 11311e68 call 0x11307040 */
  push32(0x11311e6du); f_11307040();
  /* 11311e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311e70 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311e72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11311e75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11311e78 push edx */
  push32((uint32_t)(EDX));
  /* 11311e79 call 0x11307040 */
  push32(0x11311e7eu); f_11307040();
  /* 11311e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11311e81:;
  /* 11311e81 pop ebp */
  EBP = (pop32());
  /* 11311e82 ret  */
  ESPCHK(0x11311df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x11311e90 (928 bytes, 284 insns) */
void f_11311e90(void) {
  FTRACE(0x11311e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11311e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11311e91 mov ebp, esp */
  EBP = (ESP);
  /* 11311e93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11311e96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11311e9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11311ea4 cmp dword ptr [0x11332988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311eab je 0x113121e1 */
  if (C.zf) goto L_113121e1;
  /* 11311eb1 cmp dword ptr [0x11332998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311eb8 jne 0x11311ee0 */
  if (!C.zf) goto L_11311ee0;
  /* 11311eba push 0x11332998 */
  push32((uint32_t)(0x11332998u));
  /* 11311ebf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11311ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11311ec6 mov ax, word ptr [0x113329dc] */
  AX = (r16((uint32_t)(0x113329dc)));
  /* 11311ecc push eax */
  push32((uint32_t)(EAX));
  /* 11311ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11311ecf call 0x11314770 */
  push32(0x11311ed4u); f_11314770();
  /* 11311ed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11311ed9 je 0x11311ee0 */
  if (C.zf) goto L_11311ee0;
  /* 11311edb jmp 0x113121a2 */
  goto L_113121a2;
L_11311ee0:;
  /* 11311ee0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11311ee2 push 0x1132e4bc */
  push32((uint32_t)(0x1132e4bcu));
  /* 11311ee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311ee9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11311eee call 0x113065b0 */
  push32(0x11311ef3u); f_113065b0();
  /* 11311ef3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311ef6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11311ef9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11311efb push 0x1132e4bc */
  push32((uint32_t)(0x1132e4bcu));
  /* 11311f00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311f02 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11311f07 call 0x113065b0 */
  push32(0x11311f0cu); f_113065b0();
  /* 11311f0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311f0f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11311f12 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11311f14 push 0x1132e4bc */
  push32((uint32_t)(0x1132e4bcu));
  /* 11311f19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311f1b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11311f20 call 0x113065b0 */
  push32(0x11311f25u); f_113065b0();
  /* 11311f25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311f28 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11311f2b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11311f2d push 0x1132e4bc */
  push32((uint32_t)(0x1132e4bcu));
  /* 11311f32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11311f34 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11311f39 call 0x113065b0 */
  push32(0x11311f3eu); f_113065b0();
  /* 11311f3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11311f41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11311f44 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311f48 je 0x11311f5c */
  if (C.zf) goto L_11311f5c;
  /* 11311f4a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311f4e je 0x11311f5c */
  if (C.zf) goto L_11311f5c;
  /* 11311f50 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311f54 je 0x11311f5c */
  if (C.zf) goto L_11311f5c;
  /* 11311f56 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311f5a jne 0x11311f61 */
  if (!C.zf) goto L_11311f61;
L_11311f5c:;
  /* 11311f5c jmp 0x113121a2 */
  goto L_113121a2;
L_11311f61:;
  /* 11311f61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11311f64 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11311f67 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11311f6e jmp 0x11311f79 */
  goto L_11311f79;
L_11311f70:;
  /* 11311f70 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11311f73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311f76 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11311f79:;
  /* 11311f79 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311f80 jge 0x11311f95 */
  if ((C.sf==C.of)) goto L_11311f95;
  /* 11311f82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11311f85 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11311f88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11311f8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11311f8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311f90 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11311f93 jmp 0x11311f70 */
  goto L_11311f70;
L_11311f95:;
  /* 11311f95 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11311f98 push eax */
  push32((uint32_t)(EAX));
  /* 11311f99 mov ecx, dword ptr [0x11332998] */
  ECX = (r32((uint32_t)(0x11332998)));
  /* 11311f9f push ecx */
  push32((uint32_t)(ECX));
  /* 11311fa0 call dword ptr [0x11335338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335338))), 0x11311fa6u);
  /* 11311fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11311fa8 jne 0x11311faf */
  if (!C.zf) goto L_11311faf;
  /* 11311faa jmp 0x113121a2 */
  goto L_113121a2;
L_11311faf:;
  /* 11311faf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311fb3 jbe 0x11311fba */
  if ((C.cf||C.zf)) goto L_11311fba;
  /* 11311fb5 jmp 0x113121a2 */
  goto L_113121a2;
L_11311fba:;
  /* 11311fba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11311fbd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11311fc3 mov dword ptr [0x11330ea4], edx */
  w32((uint32_t)(0x11330ea4), (EDX));
  /* 11311fc9 cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11311fd0 jle 0x11312029 */
  if ((C.zf||C.sf!=C.of)) goto L_11312029;
  /* 11311fd2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11311fd5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11311fd8 jmp 0x11311fe3 */
  goto L_11311fe3;
L_11311fda:;
  /* 11311fda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11311fdd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11311fe0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11311fe3:;
  /* 11311fe3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11311fe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11311fe8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11311fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11311fec je 0x11312029 */
  if (C.zf) goto L_11312029;
  /* 11311fee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11311ff1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11311ff3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11311ff6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11311ff8 je 0x11312029 */
  if (C.zf) goto L_11312029;
  /* 11311ffa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11311ffd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11311fff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11312001 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11312004 jmp 0x1131200f */
  goto L_1131200f;
L_11312006:;
  /* 11312006 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11312009 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131200c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1131200f:;
  /* 1131200f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11312012 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11312014 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11312017 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131201a jg 0x11312027 */
  if ((!C.zf&&C.sf==C.of)) goto L_11312027;
  /* 1131201c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1131201f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312022 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11312025 jmp 0x11312006 */
  goto L_11312006;
L_11312027:;
  /* 11312027 jmp 0x11311fda */
  goto L_11311fda;
L_11312029:;
  /* 11312029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1131202b push 0 */
  push32((uint32_t)(0x0u));
  /* 1131202d push 0 */
  push32((uint32_t)(0x0u));
  /* 1131202f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11312032 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312035 push eax */
  push32((uint32_t)(EAX));
  /* 11312036 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1131203b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1131203e push ecx */
  push32((uint32_t)(ECX));
  /* 1131203f push 1 */
  push32((uint32_t)(0x1u));
  /* 11312041 call 0x1130e7e0 */
  push32(0x11312046u); f_1130e7e0();
  /* 11312046 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131204b jne 0x11312052 */
  if (!C.zf) goto L_11312052;
  /* 1131204d jmp 0x113121a2 */
  goto L_113121a2;
L_11312052:;
  /* 11312052 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11312055 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1131205a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1131205d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11312060 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11312067 jmp 0x11312072 */
  goto L_11312072;
L_11312069:;
  /* 11312069 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1131206c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131206f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11312072:;
  /* 11312072 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312079 jge 0x11312090 */
  if ((C.sf==C.of)) goto L_11312090;
  /* 1131207b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1131207e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11312082 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11312085 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11312088 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131208b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1131208e jmp 0x11312069 */
  goto L_11312069;
L_11312090:;
  /* 11312090 push 0 */
  push32((uint32_t)(0x0u));
  /* 11312092 push 0 */
  push32((uint32_t)(0x0u));
  /* 11312094 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11312097 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131209a push edx */
  push32((uint32_t)(EDX));
  /* 1131209b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113120a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113120a3 push eax */
  push32((uint32_t)(EAX));
  /* 113120a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113120a6 call 0x11314a10 */
  push32(0x113120abu); f_11314a10();
  /* 113120ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113120ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113120b0 jne 0x113120b7 */
  if (!C.zf) goto L_113120b7;
  /* 113120b2 jmp 0x113121a2 */
  goto L_113121a2;
L_113120b7:;
  /* 113120b7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113120ba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 113120bf cmp dword ptr [0x11330ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11330ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113120c6 jle 0x11312123 */
  if ((C.zf||C.sf!=C.of)) goto L_11312123;
  /* 113120c8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 113120cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113120ce jmp 0x113120d9 */
  goto L_113120d9;
L_113120d0:;
  /* 113120d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113120d3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113120d6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_113120d9:;
  /* 113120d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113120dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113120de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113120e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113120e2 je 0x11312123 */
  if (C.zf) goto L_11312123;
  /* 113120e4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113120e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113120e9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113120ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113120ee je 0x11312123 */
  if (C.zf) goto L_11312123;
  /* 113120f0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113120f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113120f5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113120f7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113120fa jmp 0x11312105 */
  goto L_11312105;
L_113120fc:;
  /* 113120fc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113120ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312102 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11312105:;
  /* 11312105 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11312108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131210a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1131210d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312110 jg 0x11312121 */
  if ((!C.zf&&C.sf==C.of)) goto L_11312121;
  /* 11312112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11312115 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11312118 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1131211f jmp 0x113120fc */
  goto L_113120fc;
L_11312121:;
  /* 11312121 jmp 0x113120d0 */
  goto L_113120d0;
L_11312123:;
  /* 11312123 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11312126 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312129 mov dword ptr [0x11330c98], eax */
  w32((uint32_t)(0x11330c98), (EAX));
  /* 1131212e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11312131 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312134 mov dword ptr [0x11330c9c], ecx */
  w32((uint32_t)(0x11330c9c), (ECX));
  /* 1131213a cmp dword ptr [0x113329c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312141 je 0x11312154 */
  if (C.zf) goto L_11312154;
  /* 11312143 push 2 */
  push32((uint32_t)(0x2u));
  /* 11312145 mov edx, dword ptr [0x113329c8] */
  EDX = (r32((uint32_t)(0x113329c8)));
  /* 1131214b push edx */
  push32((uint32_t)(EDX));
  /* 1131214c call 0x11307040 */
  push32(0x11312151u); f_11307040();
  /* 11312151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11312154:;
  /* 11312154 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11312157 mov dword ptr [0x113329c8], eax */
  w32((uint32_t)(0x113329c8), (EAX));
  /* 1131215c cmp dword ptr [0x113329cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312163 je 0x11312176 */
  if (C.zf) goto L_11312176;
  /* 11312165 push 2 */
  push32((uint32_t)(0x2u));
  /* 11312167 mov ecx, dword ptr [0x113329cc] */
  ECX = (r32((uint32_t)(0x113329cc)));
  /* 1131216d push ecx */
  push32((uint32_t)(ECX));
  /* 1131216e call 0x11307040 */
  push32(0x11312173u); f_11307040();
  /* 11312173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11312176:;
  /* 11312176 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11312179 mov dword ptr [0x113329cc], edx */
  w32((uint32_t)(0x113329cc), (EDX));
  /* 1131217f push 2 */
  push32((uint32_t)(0x2u));
  /* 11312181 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11312184 push eax */
  push32((uint32_t)(EAX));
  /* 11312185 call 0x11307040 */
  push32(0x1131218au); f_11307040();
  /* 1131218a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131218d push 2 */
  push32((uint32_t)(0x2u));
  /* 1131218f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11312192 push ecx */
  push32((uint32_t)(ECX));
  /* 11312193 call 0x11307040 */
  push32(0x11312198u); f_11307040();
  /* 11312198 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131219b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131219d jmp 0x1131222c */
  goto L_1131222c;
L_113121a2:;
  /* 113121a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113121a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113121a7 push edx */
  push32((uint32_t)(EDX));
  /* 113121a8 call 0x11307040 */
  push32(0x113121adu); f_11307040();
  /* 113121ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113121b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113121b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113121b5 push eax */
  push32((uint32_t)(EAX));
  /* 113121b6 call 0x11307040 */
  push32(0x113121bbu); f_11307040();
  /* 113121bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113121be push 2 */
  push32((uint32_t)(0x2u));
  /* 113121c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113121c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113121c4 call 0x11307040 */
  push32(0x113121c9u); f_11307040();
  /* 113121c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113121cc push 2 */
  push32((uint32_t)(0x2u));
  /* 113121ce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113121d1 push edx */
  push32((uint32_t)(EDX));
  /* 113121d2 call 0x11307040 */
  push32(0x113121d7u); f_11307040();
  /* 113121d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113121da mov eax, 1 */
  EAX = (0x1u);
  /* 113121df jmp 0x1131222c */
  goto L_1131222c;
L_113121e1:;
  /* 113121e1 mov dword ptr [0x11330c98], 0x11330ca2 */
  w32((uint32_t)(0x11330c98), (0x11330ca2u));
  /* 113121eb mov dword ptr [0x11330c9c], 0x11330ca2 */
  w32((uint32_t)(0x11330c9c), (0x11330ca2u));
  /* 113121f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113121f7 mov eax, dword ptr [0x113329c8] */
  EAX = (r32((uint32_t)(0x113329c8)));
  /* 113121fc push eax */
  push32((uint32_t)(EAX));
  /* 113121fd call 0x11307040 */
  push32(0x11312202u); f_11307040();
  /* 11312202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312205 push 2 */
  push32((uint32_t)(0x2u));
  /* 11312207 mov ecx, dword ptr [0x113329cc] */
  ECX = (r32((uint32_t)(0x113329cc)));
  /* 1131220d push ecx */
  push32((uint32_t)(ECX));
  /* 1131220e call 0x11307040 */
  push32(0x11312213u); f_11307040();
  /* 11312213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312216 mov dword ptr [0x113329c8], 0 */
  w32((uint32_t)(0x113329c8), (0x0u));
  /* 11312220 mov dword ptr [0x113329cc], 0 */
  w32((uint32_t)(0x113329cc), (0x0u));
  /* 1131222a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1131222c:;
  /* 1131222c mov esp, ebp */
  ESP = (EBP);
  /* 1131222e pop ebp */
  EBP = (pop32());
  /* 1131222f ret  */
  ESPCHK(0x11311e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x11312230 (7 bytes, 5 insns) */
void f_11312230(void) {
  FTRACE(0x11312230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312230 push ebp */
  push32((uint32_t)(EBP));
  /* 11312231 mov ebp, esp */
  EBP = (ESP);
  /* 11312233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312235 pop ebp */
  EBP = (pop32());
  /* 11312236 ret  */
  ESPCHK(0x11312230u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11312240 (129 bytes, 56 insns) */
void f_11312240(void) {
  FTRACE(0x11312240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312240 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11312244 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11312248 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1131224e jne 0x1131228c */
  if (!C.zf) goto L_1131228c;
L_11312250:;
  /* 11312250 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11312252 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11312254 jne 0x11312284 */
  if (!C.zf) goto L_11312284;
  /* 11312256 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11312258 je 0x11312280 */
  if (C.zf) goto L_11312280;
  /* 1131225a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1131225d jne 0x11312284 */
  if (!C.zf) goto L_11312284;
  /* 1131225f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11312261 je 0x11312280 */
  if (C.zf) goto L_11312280;
  /* 11312263 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11312266 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11312269 jne 0x11312284 */
  if (!C.zf) goto L_11312284;
  /* 1131226b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1131226d je 0x11312280 */
  if (C.zf) goto L_11312280;
  /* 1131226f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11312272 jne 0x11312284 */
  if (!C.zf) goto L_11312284;
  /* 11312274 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312277 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131227a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1131227c jne 0x11312250 */
  if (!C.zf) goto L_11312250;
  /* 1131227e mov edi, edi */
  EDI = (EDI);
L_11312280:;
  /* 11312280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312282 ret  */
  ESPCHK(0x11312240u, _esp0);
  ESP += 4; return;
  /* 11312283 nop  */
  /* nop */
L_11312284:;
  /* 11312284 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312286 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11312288 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11312289 ret  */
  ESPCHK(0x11312240u, _esp0);
  ESP += 4; return;
  /* 1131228a mov edi, edi */
  EDI = (EDI);
L_1131228c:;
  /* 1131228c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11312292 je 0x113122a8 */
  if (C.zf) goto L_113122a8;
  /* 11312294 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11312296 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11312297 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11312299 jne 0x11312284 */
  if (!C.zf) goto L_11312284;
  /* 1131229b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1131229c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1131229e je 0x11312280 */
  if (C.zf) goto L_11312280;
  /* 113122a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 113122a6 je 0x11312250 */
  if (C.zf) goto L_11312250;
L_113122a8:;
  /* 113122a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 113122ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113122ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113122b0 jne 0x11312284 */
  if (!C.zf) goto L_11312284;
  /* 113122b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113122b4 je 0x11312280 */
  if (C.zf) goto L_11312280;
  /* 113122b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113122b9 jne 0x11312284 */
  if (!C.zf) goto L_11312284;
  /* 113122bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 113122bd je 0x11312280 */
  if (C.zf) goto L_11312280;
  /* 113122bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113122c2 jmp 0x11312250 */
  goto L_11312250;
}

/* FUN_100122d0 @ 0x113122d0 (62 bytes, 35 insns) */
void f_113122d0(void) {
  FTRACE(0x113122d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113122d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113122d1 mov ebp, esp */
  EBP = (ESP);
  /* 113122d3 push esi */
  push32((uint32_t)(ESI));
  /* 113122d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113122d6 push eax */
  push32((uint32_t)(EAX));
  /* 113122d7 push eax */
  push32((uint32_t)(EAX));
  /* 113122d8 push eax */
  push32((uint32_t)(EAX));
  /* 113122d9 push eax */
  push32((uint32_t)(EAX));
  /* 113122da push eax */
  push32((uint32_t)(EAX));
  /* 113122db push eax */
  push32((uint32_t)(EAX));
  /* 113122dc push eax */
  push32((uint32_t)(EAX));
  /* 113122dd push eax */
  push32((uint32_t)(EAX));
  /* 113122de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113122e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113122e4:;
  /* 113122e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113122e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113122e8 je 0x113122f1 */
  if (C.zf) goto L_113122f1;
  /* 113122ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113122eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x113122eb");
  /* 113122ef jmp 0x113122e4 */
  goto L_113122e4;
L_113122f1:;
  /* 113122f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 113122f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113122f7 nop  */
  /* nop */
L_113122f8:;
  /* 113122f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113122f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113122fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113122fd je 0x11312306 */
  if (C.zf) goto L_11312306;
  /* 113122ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11312300 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11312300");
  /* 11312304 jae 0x113122f8 */
  if (!C.cf) goto L_113122f8;
L_11312306:;
  /* 11312306 mov eax, ecx */
  EAX = (ECX);
  /* 11312308 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131230b pop esi */
  ESI = (pop32());
  /* 1131230c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1131230d ret  */
  ESPCHK(0x113122d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11312310 (56 bytes, 31 insns) */
void f_11312310(void) {
  FTRACE(0x11312310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312310 push ebp */
  push32((uint32_t)(EBP));
  /* 11312311 mov ebp, esp */
  EBP = (ESP);
  /* 11312313 push edi */
  push32((uint32_t)(EDI));
  /* 11312314 push esi */
  push32((uint32_t)(ESI));
  /* 11312315 push ebx */
  push32((uint32_t)(EBX));
  /* 11312316 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11312319 jecxz 0x11312341 */
  x86_unimpl("jecxz @ 0x11312319");
  /* 1131231b mov ebx, ecx */
  EBX = (ECX);
  /* 1131231d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11312320 mov esi, edi */
  ESI = (EDI);
  /* 11312322 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312324 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11312326 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11312328 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131232a mov edi, esi */
  EDI = (ESI);
  /* 1131232c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1131232f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11312331 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11312334 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11312336 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11312339 ja 0x1131233f */
  if ((!C.cf&&!C.zf)) goto L_1131233f;
  /* 1131233b je 0x11312341 */
  if (C.zf) goto L_11312341;
  /* 1131233d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1131233e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1131233f:;
  /* 1131233f not ecx */
  ECX = (~(ECX));
L_11312341:;
  /* 11312341 mov eax, ecx */
  EAX = (ECX);
  /* 11312343 pop ebx */
  EBX = (pop32());
  /* 11312344 pop esi */
  ESI = (pop32());
  /* 11312345 pop edi */
  EDI = (pop32());
  /* 11312346 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11312347 ret  */
  ESPCHK(0x11312310u, _esp0);
  ESP += 4; return;
}

/* FUN_10012350 @ 0x11312350 (58 bytes, 32 insns) */
void f_11312350(void) {
  FTRACE(0x11312350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312350 push ebp */
  push32((uint32_t)(EBP));
  /* 11312351 mov ebp, esp */
  EBP = (ESP);
  /* 11312353 push esi */
  push32((uint32_t)(ESI));
  /* 11312354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312356 push eax */
  push32((uint32_t)(EAX));
  /* 11312357 push eax */
  push32((uint32_t)(EAX));
  /* 11312358 push eax */
  push32((uint32_t)(EAX));
  /* 11312359 push eax */
  push32((uint32_t)(EAX));
  /* 1131235a push eax */
  push32((uint32_t)(EAX));
  /* 1131235b push eax */
  push32((uint32_t)(EAX));
  /* 1131235c push eax */
  push32((uint32_t)(EAX));
  /* 1131235d push eax */
  push32((uint32_t)(EAX));
  /* 1131235e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11312361 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11312364:;
  /* 11312364 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11312366 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11312368 je 0x11312371 */
  if (C.zf) goto L_11312371;
  /* 1131236a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1131236b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1131236b");
  /* 1131236f jmp 0x11312364 */
  goto L_11312364;
L_11312371:;
  /* 11312371 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11312374:;
  /* 11312374 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11312376 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11312378 je 0x11312384 */
  if (C.zf) goto L_11312384;
  /* 1131237a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1131237b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1131237b");
  /* 1131237f jae 0x11312374 */
  if (!C.cf) goto L_11312374;
  /* 11312381 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11312384:;
  /* 11312384 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312387 pop esi */
  ESI = (pop32());
  /* 11312388 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11312389 ret  */
  ESPCHK(0x11312350u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x11312390 (512 bytes, 147 insns) */
void f_11312390(void) {
  FTRACE(0x11312390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312390 push ebp */
  push32((uint32_t)(EBP));
  /* 11312391 mov ebp, esp */
  EBP = (ESP);
  /* 11312393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312396 cmp dword ptr [0x11332a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131239d jne 0x113123c2 */
  if (!C.zf) goto L_113123c2;
  /* 1131239f call 0x11312e60 */
  push32(0x113123a4u); f_11312e60();
  /* 113123a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113123a6 je 0x113123b2 */
  if (C.zf) goto L_113123b2;
  /* 113123a8 mov eax, dword ptr [0x113352fc] */
  EAX = (r32((uint32_t)(0x113352fc)));
  /* 113123ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113123b0 jmp 0x113123b9 */
  goto L_113123b9;
L_113123b2:;
  /* 113123b2 mov dword ptr [ebp - 8], 0x11312eb0 */
  w32((uint32_t)(EBP + -0x8), (0x11312eb0u));
L_113123b9:;
  /* 113123b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113123bc mov dword ptr [0x11332a14], ecx */
  w32((uint32_t)(0x11332a14), (ECX));
L_113123c2:;
  /* 113123c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113123c6 jne 0x113123d2 */
  if (!C.zf) goto L_113123d2;
  /* 113123c8 call 0x11312cb0 */
  push32(0x113123cdu); f_11312cb0();
  /* 113123cd jmp 0x1131249e */
  goto L_1131249e;
L_113123d2:;
  /* 113123d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113123d5 mov dword ptr [0x11332a04], edx */
  w32((uint32_t)(0x11332a04), (EDX));
  /* 113123db cmp dword ptr [0x11332a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113123e2 je 0x11312404 */
  if (C.zf) goto L_11312404;
  /* 113123e4 mov eax, dword ptr [0x11332a04] */
  EAX = (r32((uint32_t)(0x11332a04)));
  /* 113123e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113123ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113123ee je 0x11312404 */
  if (C.zf) goto L_11312404;
  /* 113123f0 push 0x11332a04 */
  push32((uint32_t)(0x11332a04u));
  /* 113123f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113123f7 push 0x11331a90 */
  push32((uint32_t)(0x11331a90u));
  /* 113123fc call 0x11312590 */
  push32(0x11312401u); f_11312590();
  /* 11312401 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11312404:;
  /* 11312404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312407 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131240a mov dword ptr [0x11332a08], edx */
  w32((uint32_t)(0x11332a08), (EDX));
  /* 11312410 cmp dword ptr [0x11332a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312417 je 0x11312439 */
  if (C.zf) goto L_11312439;
  /* 11312419 mov eax, dword ptr [0x11332a08] */
  EAX = (r32((uint32_t)(0x11332a08)));
  /* 1131241e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11312421 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11312423 je 0x11312439 */
  if (C.zf) goto L_11312439;
  /* 11312425 push 0x11332a08 */
  push32((uint32_t)(0x11332a08u));
  /* 1131242a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1131242c push 0x113319d8 */
  push32((uint32_t)(0x113319d8u));
  /* 11312431 call 0x11312590 */
  push32(0x11312436u); f_11312590();
  /* 11312436 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11312439:;
  /* 11312439 mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
  /* 11312443 cmp dword ptr [0x11332a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131244a je 0x1131247d */
  if (C.zf) goto L_1131247d;
  /* 1131244c mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 11312452 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11312455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312457 je 0x1131247d */
  if (C.zf) goto L_1131247d;
  /* 11312459 cmp dword ptr [0x11332a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312460 je 0x11312476 */
  if (C.zf) goto L_11312476;
  /* 11312462 mov ecx, dword ptr [0x11332a08] */
  ECX = (r32((uint32_t)(0x11332a08)));
  /* 11312468 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1131246b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1131246d je 0x11312476 */
  if (C.zf) goto L_11312476;
  /* 1131246f call 0x11312620 */
  push32(0x11312474u); f_11312620();
  /* 11312474 jmp 0x1131247b */
  goto L_1131247b;
L_11312476:;
  /* 11312476 call 0x11312a10 */
  push32(0x1131247bu); f_11312a10();
L_1131247b:;
  /* 1131247b jmp 0x1131249e */
  goto L_1131249e;
L_1131247d:;
  /* 1131247d cmp dword ptr [0x11332a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312484 je 0x11312499 */
  if (C.zf) goto L_11312499;
  /* 11312486 mov eax, dword ptr [0x11332a08] */
  EAX = (r32((uint32_t)(0x11332a08)));
  /* 1131248b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1131248e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11312490 je 0x11312499 */
  if (C.zf) goto L_11312499;
  /* 11312492 call 0x11312bb0 */
  push32(0x11312497u); f_11312bb0();
  /* 11312497 jmp 0x1131249e */
  goto L_1131249e;
L_11312499:;
  /* 11312499 call 0x11312cb0 */
  push32(0x1131249eu); f_11312cb0();
L_1131249e:;
  /* 1131249e cmp dword ptr [0x11332a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113124a5 jne 0x113124ae */
  if (!C.zf) goto L_113124ae;
  /* 113124a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113124a9 jmp 0x1131258c */
  goto L_1131258c;
L_113124ae:;
  /* 113124ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113124b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113124b7 push edx */
  push32((uint32_t)(EDX));
  /* 113124b8 call 0x11312ce0 */
  push32(0x113124bdu); f_11312ce0();
  /* 113124bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113124c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113124c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113124c7 je 0x113124dc */
  if (C.zf) goto L_113124dc;
  /* 113124c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113124cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113124d1 push eax */
  push32((uint32_t)(EAX));
  /* 113124d2 call dword ptr [0x11335300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335300))), 0x113124d8u);
  /* 113124d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113124da jne 0x113124e3 */
  if (!C.zf) goto L_113124e3;
L_113124dc:;
  /* 113124dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113124de jmp 0x1131258c */
  goto L_1131258c;
L_113124e3:;
  /* 113124e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113124e5 mov ecx, dword ptr [0x113329f4] */
  ECX = (r32((uint32_t)(0x113329f4)));
  /* 113124eb push ecx */
  push32((uint32_t)(ECX));
  /* 113124ec call dword ptr [0x11335310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335310))), 0x113124f2u);
  /* 113124f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113124f4 jne 0x113124fd */
  if (!C.zf) goto L_113124fd;
  /* 113124f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113124f8 jmp 0x1131258c */
  goto L_1131258c;
L_113124fd:;
  /* 113124fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312501 je 0x11312528 */
  if (C.zf) goto L_11312528;
  /* 11312503 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11312506 mov ax, word ptr [0x113329f4] */
  AX = (r16((uint32_t)(0x113329f4)));
  /* 1131250c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1131250f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11312512 mov dx, word ptr [0x11332a10] */
  DX = (r16((uint32_t)(0x11332a10)));
  /* 11312519 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1131251d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11312520 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11312524 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11312528:;
  /* 11312528 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131252c je 0x11312587 */
  if (C.zf) goto L_11312587;
  /* 1131252e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11312530 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11312533 push edx */
  push32((uint32_t)(EDX));
  /* 11312534 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11312539 mov eax, dword ptr [0x113329f4] */
  EAX = (r32((uint32_t)(0x113329f4)));
  /* 1131253e push eax */
  push32((uint32_t)(EAX));
  /* 1131253f call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312545u);
  /* 11312545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312547 jne 0x1131254d */
  if (!C.zf) goto L_1131254d;
  /* 11312549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131254b jmp 0x1131258c */
  goto L_1131258c;
L_1131254d:;
  /* 1131254d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1131254f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11312552 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312555 push ecx */
  push32((uint32_t)(ECX));
  /* 11312556 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1131255b mov edx, dword ptr [0x11332a10] */
  EDX = (r32((uint32_t)(0x11332a10)));
  /* 11312561 push edx */
  push32((uint32_t)(EDX));
  /* 11312562 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312568u);
  /* 11312568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131256a jne 0x11312570 */
  if (!C.zf) goto L_11312570;
  /* 1131256c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131256e jmp 0x1131258c */
  goto L_1131258c;
L_11312570:;
  /* 11312570 push 0xa */
  push32((uint32_t)(0xau));
  /* 11312572 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11312575 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131257a push eax */
  push32((uint32_t)(EAX));
  /* 1131257b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131257e push ecx */
  push32((uint32_t)(ECX));
  /* 1131257f call 0x113090f0 */
  push32(0x11312584u); f_113090f0();
  /* 11312584 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11312587:;
  /* 11312587 mov eax, 1 */
  EAX = (0x1u);
L_1131258c:;
  /* 1131258c mov esp, ebp */
  ESP = (EBP);
  /* 1131258e pop ebp */
  EBP = (pop32());
  /* 1131258f ret  */
  ESPCHK(0x11312390u, _esp0);
  ESP += 4; return;
}

/* FUN_10012590 @ 0x11312590 (130 bytes, 47 insns) */
void f_11312590(void) {
  FTRACE(0x11312590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312590 push ebp */
  push32((uint32_t)(EBP));
  /* 11312591 mov ebp, esp */
  EBP = (ESP);
  /* 11312593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312596 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1131259d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_113125a4:;
  /* 113125a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113125a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113125aa jg 0x1131260e */
  if ((!C.zf&&C.sf==C.of)) goto L_1131260e;
  /* 113125ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113125b0 je 0x1131260e */
  if (C.zf) goto L_1131260e;
  /* 113125b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113125b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113125b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113125b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113125bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113125bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113125c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113125c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113125c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 113125c9 push eax */
  push32((uint32_t)(EAX));
  /* 113125ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113125cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113125cf push edx */
  push32((uint32_t)(EDX));
  /* 113125d0 call 0x11314c80 */
  push32(0x113125d5u); f_11314c80();
  /* 113125d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113125d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113125db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113125df jne 0x113125f2 */
  if (!C.zf) goto L_113125f2;
  /* 113125e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113125e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113125e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 113125eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113125ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113125f0 jmp 0x1131260c */
  goto L_1131260c;
L_113125f2:;
  /* 113125f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113125f6 jge 0x11312603 */
  if ((C.sf==C.of)) goto L_11312603;
  /* 113125f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113125fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113125fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11312601 jmp 0x1131260c */
  goto L_1131260c;
L_11312603:;
  /* 11312603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11312606 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312609 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1131260c:;
  /* 1131260c jmp 0x113125a4 */
  goto L_113125a4;
L_1131260e:;
  /* 1131260e mov esp, ebp */
  ESP = (EBP);
  /* 11312610 pop ebp */
  EBP = (pop32());
  /* 11312611 ret  */
  ESPCHK(0x11312590u, _esp0);
  ESP += 4; return;
}

/* FUN_10012620 @ 0x11312620 (186 bytes, 50 insns) */
void f_11312620(void) {
  FTRACE(0x11312620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312620 push ebp */
  push32((uint32_t)(EBP));
  /* 11312621 mov ebp, esp */
  EBP = (ESP);
  /* 11312623 push ecx */
  push32((uint32_t)(ECX));
  /* 11312624 mov eax, dword ptr [0x11332a04] */
  EAX = (r32((uint32_t)(0x11332a04)));
  /* 11312629 push eax */
  push32((uint32_t)(EAX));
  /* 1131262a call 0x113093e0 */
  push32(0x1131262fu); f_113093e0();
  /* 1131262f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312632 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11312634 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312637 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1131263a mov dword ptr [0x11332a00], ecx */
  w32((uint32_t)(0x11332a00), (ECX));
  /* 11312640 mov edx, dword ptr [0x11332a08] */
  EDX = (r32((uint32_t)(0x11332a08)));
  /* 11312646 push edx */
  push32((uint32_t)(EDX));
  /* 11312647 call 0x113093e0 */
  push32(0x1131264cu); f_113093e0();
  /* 1131264c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131264f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11312651 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312654 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11312657 mov dword ptr [0x113329f8], ecx */
  w32((uint32_t)(0x113329f8), (ECX));
  /* 1131265d mov dword ptr [0x113329f4], 0 */
  w32((uint32_t)(0x113329f4), (0x0u));
  /* 11312667 cmp dword ptr [0x11332a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131266e je 0x11312679 */
  if (C.zf) goto L_11312679;
  /* 11312670 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11312677 jmp 0x1131268b */
  goto L_1131268b;
L_11312679:;
  /* 11312679 mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 1131267f push edx */
  push32((uint32_t)(EDX));
  /* 11312680 call 0x113130c0 */
  push32(0x11312685u); f_113130c0();
  /* 11312685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312688 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1131268b:;
  /* 1131268b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131268e mov dword ptr [0x113329fc], eax */
  w32((uint32_t)(0x113329fc), (EAX));
  /* 11312693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11312695 push 0x113126e0 */
  push32((uint32_t)(0x113126e0u));
  /* 1131269a call dword ptr [0x11335304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335304))), 0x113126a0u);
  /* 113126a0 mov ecx, dword ptr [0x11332a0c] */
  ECX = (r32((uint32_t)(0x11332a0c)));
  /* 113126a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 113126ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113126ae je 0x113126cc */
  if (C.zf) goto L_113126cc;
  /* 113126b0 mov edx, dword ptr [0x11332a0c] */
  EDX = (r32((uint32_t)(0x11332a0c)));
  /* 113126b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 113126bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113126be je 0x113126cc */
  if (C.zf) goto L_113126cc;
  /* 113126c0 mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 113126c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 113126c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113126ca jne 0x113126d6 */
  if (!C.zf) goto L_113126d6;
L_113126cc:;
  /* 113126cc mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
L_113126d6:;
  /* 113126d6 mov esp, ebp */
  ESP = (EBP);
  /* 113126d8 pop ebp */
  EBP = (pop32());
  /* 113126d9 ret  */
  ESPCHK(0x11312620u, _esp0);
  ESP += 4; return;
}

/* FUN_100126e0 @ 0x113126e0 (804 bytes, 220 insns) */
void f_113126e0(void) {
  FTRACE(0x113126e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113126e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113126e1 mov ebp, esp */
  EBP = (ESP);
  /* 113126e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113126e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113126e9 push eax */
  push32((uint32_t)(EAX));
  /* 113126ea call 0x11313040 */
  push32(0x113126efu); f_11313040();
  /* 113126ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113126f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 113126f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113126f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113126fa push ecx */
  push32((uint32_t)(ECX));
  /* 113126fb mov edx, dword ptr [0x113329f8] */
  EDX = (r32((uint32_t)(0x113329f8)));
  /* 11312701 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11312703 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312705 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1131270b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312711 push edx */
  push32((uint32_t)(EDX));
  /* 11312712 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312715 push eax */
  push32((uint32_t)(EAX));
  /* 11312716 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x1131271cu);
  /* 1131271c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131271e jne 0x11312734 */
  if (!C.zf) goto L_11312734;
  /* 11312720 mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
  /* 1131272a mov eax, 1 */
  EAX = (0x1u);
  /* 1131272f jmp 0x113129fe */
  goto L_113129fe;
L_11312734:;
  /* 11312734 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11312737 push ecx */
  push32((uint32_t)(ECX));
  /* 11312738 mov edx, dword ptr [0x11332a08] */
  EDX = (r32((uint32_t)(0x11332a08)));
  /* 1131273e push edx */
  push32((uint32_t)(EDX));
  /* 1131273f call 0x11314c80 */
  push32(0x11312744u); f_11314c80();
  /* 11312744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312749 jne 0x1131286f */
  if (!C.zf) goto L_1131286f;
  /* 1131274f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11312751 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11312754 push eax */
  push32((uint32_t)(EAX));
  /* 11312755 mov ecx, dword ptr [0x11332a00] */
  ECX = (r32((uint32_t)(0x11332a00)));
  /* 1131275b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1131275d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1131275f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11312765 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131276b push ecx */
  push32((uint32_t)(ECX));
  /* 1131276c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1131276f push edx */
  push32((uint32_t)(EDX));
  /* 11312770 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312776u);
  /* 11312776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312778 jne 0x1131278e */
  if (!C.zf) goto L_1131278e;
  /* 1131277a mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
  /* 11312784 mov eax, 1 */
  EAX = (0x1u);
  /* 11312789 jmp 0x113129fe */
  goto L_113129fe;
L_1131278e:;
  /* 1131278e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11312791 push eax */
  push32((uint32_t)(EAX));
  /* 11312792 mov ecx, dword ptr [0x11332a04] */
  ECX = (r32((uint32_t)(0x11332a04)));
  /* 11312798 push ecx */
  push32((uint32_t)(ECX));
  /* 11312799 call 0x11314c80 */
  push32(0x1131279eu); f_11314c80();
  /* 1131279e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113127a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113127a3 jne 0x113127d0 */
  if (!C.zf) goto L_113127d0;
  /* 113127a5 mov edx, dword ptr [0x11332a0c] */
  EDX = (r32((uint32_t)(0x11332a0c)));
  /* 113127ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 113127b1 mov dword ptr [0x11332a0c], edx */
  w32((uint32_t)(0x11332a0c), (EDX));
  /* 113127b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113127ba mov dword ptr [0x11332a10], eax */
  w32((uint32_t)(0x11332a10), (EAX));
  /* 113127bf mov ecx, dword ptr [0x11332a10] */
  ECX = (r32((uint32_t)(0x11332a10)));
  /* 113127c5 mov dword ptr [0x113329f4], ecx */
  w32((uint32_t)(0x113329f4), (ECX));
  /* 113127cb jmp 0x1131286f */
  goto L_1131286f;
L_113127d0:;
  /* 113127d0 mov edx, dword ptr [0x11332a0c] */
  EDX = (r32((uint32_t)(0x11332a0c)));
  /* 113127d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 113127d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113127db jne 0x1131286f */
  if (!C.zf) goto L_1131286f;
  /* 113127e1 cmp dword ptr [0x113329fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113127e8 je 0x1131283d */
  if (C.zf) goto L_1131283d;
  /* 113127ea mov eax, dword ptr [0x113329fc] */
  EAX = (r32((uint32_t)(0x113329fc)));
  /* 113127ef push eax */
  push32((uint32_t)(EAX));
  /* 113127f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113127f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113127f4 mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 113127fa push edx */
  push32((uint32_t)(EDX));
  /* 113127fb call 0x11314d50 */
  push32(0x11312800u); f_11314d50();
  /* 11312800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312805 jne 0x1131283d */
  if (!C.zf) goto L_1131283d;
  /* 11312807 mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 1131280c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1131280e mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
  /* 11312813 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312816 mov dword ptr [0x11332a10], ecx */
  w32((uint32_t)(0x11332a10), (ECX));
  /* 1131281c mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 11312822 push edx */
  push32((uint32_t)(EDX));
  /* 11312823 call 0x113093e0 */
  push32(0x11312828u); f_113093e0();
  /* 11312828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131282b cmp eax, dword ptr [0x113329fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113329fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312831 jne 0x1131283b */
  if (!C.zf) goto L_1131283b;
  /* 11312833 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312836 mov dword ptr [0x113329f4], eax */
  w32((uint32_t)(0x113329f4), (EAX));
L_1131283b:;
  /* 1131283b jmp 0x1131286f */
  goto L_1131286f;
L_1131283d:;
  /* 1131283d mov ecx, dword ptr [0x11332a0c] */
  ECX = (r32((uint32_t)(0x11332a0c)));
  /* 11312843 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11312846 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11312848 jne 0x1131286f */
  if (!C.zf) goto L_1131286f;
  /* 1131284a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1131284d push edx */
  push32((uint32_t)(EDX));
  /* 1131284e call 0x11312d80 */
  push32(0x11312853u); f_11312d80();
  /* 11312853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312858 je 0x1131286f */
  if (C.zf) goto L_1131286f;
  /* 1131285a mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 1131285f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11312861 mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
  /* 11312866 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312869 mov dword ptr [0x11332a10], ecx */
  w32((uint32_t)(0x11332a10), (ECX));
L_1131286f:;
  /* 1131286f mov edx, dword ptr [0x11332a0c] */
  EDX = (r32((uint32_t)(0x11332a0c)));
  /* 11312875 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1131287b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312881 je 0x113129f1 */
  if (C.zf) goto L_113129f1;
  /* 11312887 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11312889 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1131288c push eax */
  push32((uint32_t)(EAX));
  /* 1131288d mov ecx, dword ptr [0x11332a00] */
  ECX = (r32((uint32_t)(0x11332a00)));
  /* 11312893 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11312895 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312897 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1131289d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113128a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113128a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113128a7 push edx */
  push32((uint32_t)(EDX));
  /* 113128a8 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x113128aeu);
  /* 113128ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113128b0 jne 0x113128c6 */
  if (!C.zf) goto L_113128c6;
  /* 113128b2 mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
  /* 113128bc mov eax, 1 */
  EAX = (0x1u);
  /* 113128c1 jmp 0x113129fe */
  goto L_113129fe;
L_113128c6:;
  /* 113128c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113128c9 push eax */
  push32((uint32_t)(EAX));
  /* 113128ca mov ecx, dword ptr [0x11332a04] */
  ECX = (r32((uint32_t)(0x11332a04)));
  /* 113128d0 push ecx */
  push32((uint32_t)(ECX));
  /* 113128d1 call 0x11314c80 */
  push32(0x113128d6u); f_11314c80();
  /* 113128d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113128d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113128db jne 0x11312990 */
  if (!C.zf) goto L_11312990;
  /* 113128e1 mov edx, dword ptr [0x11332a0c] */
  EDX = (r32((uint32_t)(0x11332a0c)));
  /* 113128e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 113128ea mov dword ptr [0x11332a0c], edx */
  w32((uint32_t)(0x11332a0c), (EDX));
  /* 113128f0 cmp dword ptr [0x11332a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113128f7 je 0x1131291a */
  if (C.zf) goto L_1131291a;
  /* 113128f9 mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 113128fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11312901 mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
  /* 11312906 cmp dword ptr [0x113329f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131290d jne 0x11312918 */
  if (!C.zf) goto L_11312918;
  /* 1131290f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312912 mov dword ptr [0x113329f4], ecx */
  w32((uint32_t)(0x113329f4), (ECX));
L_11312918:;
  /* 11312918 jmp 0x1131298e */
  goto L_1131298e;
L_1131291a:;
  /* 1131291a cmp dword ptr [0x113329fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312921 je 0x1131296f */
  if (C.zf) goto L_1131296f;
  /* 11312923 mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 11312929 push edx */
  push32((uint32_t)(EDX));
  /* 1131292a call 0x113093e0 */
  push32(0x1131292fu); f_113093e0();
  /* 1131292f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312932 cmp eax, dword ptr [0x113329fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113329fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312938 jne 0x1131296f */
  if (!C.zf) goto L_1131296f;
  /* 1131293a push 1 */
  push32((uint32_t)(0x1u));
  /* 1131293c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1131293f push eax */
  push32((uint32_t)(EAX));
  /* 11312940 call 0x11312dd0 */
  push32(0x11312945u); f_11312dd0();
  /* 11312945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131294a je 0x1131296d */
  if (C.zf) goto L_1131296d;
  /* 1131294c mov ecx, dword ptr [0x11332a0c] */
  ECX = (r32((uint32_t)(0x11332a0c)));
  /* 11312952 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11312955 mov dword ptr [0x11332a0c], ecx */
  w32((uint32_t)(0x11332a0c), (ECX));
  /* 1131295b cmp dword ptr [0x113329f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312962 jne 0x1131296d */
  if (!C.zf) goto L_1131296d;
  /* 11312964 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312967 mov dword ptr [0x113329f4], edx */
  w32((uint32_t)(0x113329f4), (EDX));
L_1131296d:;
  /* 1131296d jmp 0x1131298e */
  goto L_1131298e;
L_1131296f:;
  /* 1131296f mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 11312974 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11312977 mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
  /* 1131297c cmp dword ptr [0x113329f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312983 jne 0x1131298e */
  if (!C.zf) goto L_1131298e;
  /* 11312985 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312988 mov dword ptr [0x113329f4], ecx */
  w32((uint32_t)(0x113329f4), (ECX));
L_1131298e:;
  /* 1131298e jmp 0x113129f1 */
  goto L_113129f1;
L_11312990:;
  /* 11312990 cmp dword ptr [0x11332a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312997 jne 0x113129f1 */
  if (!C.zf) goto L_113129f1;
  /* 11312999 cmp dword ptr [0x113329fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113129a0 je 0x113129f1 */
  if (C.zf) goto L_113129f1;
  /* 113129a2 mov edx, dword ptr [0x113329fc] */
  EDX = (r32((uint32_t)(0x113329fc)));
  /* 113129a8 push edx */
  push32((uint32_t)(EDX));
  /* 113129a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113129ac push eax */
  push32((uint32_t)(EAX));
  /* 113129ad mov ecx, dword ptr [0x11332a04] */
  ECX = (r32((uint32_t)(0x11332a04)));
  /* 113129b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113129b4 call 0x11314d50 */
  push32(0x113129b9u); f_11314d50();
  /* 113129b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113129bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113129be jne 0x113129f1 */
  if (!C.zf) goto L_113129f1;
  /* 113129c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113129c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113129c5 push edx */
  push32((uint32_t)(EDX));
  /* 113129c6 call 0x11312dd0 */
  push32(0x113129cbu); f_11312dd0();
  /* 113129cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113129ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113129d0 je 0x113129f1 */
  if (C.zf) goto L_113129f1;
  /* 113129d2 mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 113129d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 113129da mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
  /* 113129df cmp dword ptr [0x113329f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113129e6 jne 0x113129f1 */
  if (!C.zf) goto L_113129f1;
  /* 113129e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113129eb mov dword ptr [0x113329f4], ecx */
  w32((uint32_t)(0x113329f4), (ECX));
L_113129f1:;
  /* 113129f1 mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 113129f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113129f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113129fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113129fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_113129fe:;
  /* 113129fe mov esp, ebp */
  ESP = (EBP);
  /* 11312a00 pop ebp */
  EBP = (pop32());
  /* 11312a01 ret 4 */
  ESPCHK(0x113126e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10012a10 @ 0x11312a10 (116 bytes, 33 insns) */
void f_11312a10(void) {
  FTRACE(0x11312a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11312a11 mov ebp, esp */
  EBP = (ESP);
  /* 11312a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11312a14 mov eax, dword ptr [0x11332a04] */
  EAX = (r32((uint32_t)(0x11332a04)));
  /* 11312a19 push eax */
  push32((uint32_t)(EAX));
  /* 11312a1a call 0x113093e0 */
  push32(0x11312a1fu); f_113093e0();
  /* 11312a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312a22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11312a24 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312a27 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11312a2a mov dword ptr [0x11332a00], ecx */
  w32((uint32_t)(0x11332a00), (ECX));
  /* 11312a30 cmp dword ptr [0x11332a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312a37 je 0x11312a42 */
  if (C.zf) goto L_11312a42;
  /* 11312a39 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11312a40 jmp 0x11312a54 */
  goto L_11312a54;
L_11312a42:;
  /* 11312a42 mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 11312a48 push edx */
  push32((uint32_t)(EDX));
  /* 11312a49 call 0x113130c0 */
  push32(0x11312a4eu); f_113130c0();
  /* 11312a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312a51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11312a54:;
  /* 11312a54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11312a57 mov dword ptr [0x113329fc], eax */
  w32((uint32_t)(0x113329fc), (EAX));
  /* 11312a5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11312a5e push 0x11312a90 */
  push32((uint32_t)(0x11312a90u));
  /* 11312a63 call dword ptr [0x11335304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335304))), 0x11312a69u);
  /* 11312a69 mov ecx, dword ptr [0x11332a0c] */
  ECX = (r32((uint32_t)(0x11332a0c)));
  /* 11312a6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11312a72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11312a74 jne 0x11312a80 */
  if (!C.zf) goto L_11312a80;
  /* 11312a76 mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
L_11312a80:;
  /* 11312a80 mov esp, ebp */
  ESP = (EBP);
  /* 11312a82 pop ebp */
  EBP = (pop32());
  /* 11312a83 ret  */
  ESPCHK(0x11312a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a90 @ 0x11312a90 (287 bytes, 86 insns) */
void f_11312a90(void) {
  FTRACE(0x11312a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11312a91 mov ebp, esp */
  EBP = (ESP);
  /* 11312a93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312a99 push eax */
  push32((uint32_t)(EAX));
  /* 11312a9a call 0x11313040 */
  push32(0x11312a9fu); f_11313040();
  /* 11312a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312aa2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11312aa5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11312aa7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11312aaa push ecx */
  push32((uint32_t)(ECX));
  /* 11312aab mov edx, dword ptr [0x11332a00] */
  EDX = (r32((uint32_t)(0x11332a00)));
  /* 11312ab1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11312ab3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312ab5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11312abb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312ac1 push edx */
  push32((uint32_t)(EDX));
  /* 11312ac2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312ac5 push eax */
  push32((uint32_t)(EAX));
  /* 11312ac6 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312accu);
  /* 11312acc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312ace jne 0x11312ae4 */
  if (!C.zf) goto L_11312ae4;
  /* 11312ad0 mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
  /* 11312ada mov eax, 1 */
  EAX = (0x1u);
  /* 11312adf jmp 0x11312ba9 */
  goto L_11312ba9;
L_11312ae4:;
  /* 11312ae4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11312ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 11312ae8 mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 11312aee push edx */
  push32((uint32_t)(EDX));
  /* 11312aef call 0x11314c80 */
  push32(0x11312af4u); f_11314c80();
  /* 11312af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312af9 jne 0x11312b39 */
  if (!C.zf) goto L_11312b39;
  /* 11312afb cmp dword ptr [0x11332a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312b02 jne 0x11312b16 */
  if (!C.zf) goto L_11312b16;
  /* 11312b04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11312b06 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312b09 push eax */
  push32((uint32_t)(EAX));
  /* 11312b0a call 0x11312dd0 */
  push32(0x11312b0fu); f_11312dd0();
  /* 11312b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312b14 je 0x11312b37 */
  if (C.zf) goto L_11312b37;
L_11312b16:;
  /* 11312b16 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312b19 mov dword ptr [0x11332a10], ecx */
  w32((uint32_t)(0x11332a10), (ECX));
  /* 11312b1f mov edx, dword ptr [0x11332a10] */
  EDX = (r32((uint32_t)(0x11332a10)));
  /* 11312b25 mov dword ptr [0x113329f4], edx */
  w32((uint32_t)(0x113329f4), (EDX));
  /* 11312b2b mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 11312b30 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11312b32 mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
L_11312b37:;
  /* 11312b37 jmp 0x11312b9c */
  goto L_11312b9c;
L_11312b39:;
  /* 11312b39 cmp dword ptr [0x11332a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11332a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312b40 jne 0x11312b9c */
  if (!C.zf) goto L_11312b9c;
  /* 11312b42 cmp dword ptr [0x113329fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113329fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312b49 je 0x11312b9c */
  if (C.zf) goto L_11312b9c;
  /* 11312b4b mov ecx, dword ptr [0x113329fc] */
  ECX = (r32((uint32_t)(0x113329fc)));
  /* 11312b51 push ecx */
  push32((uint32_t)(ECX));
  /* 11312b52 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11312b55 push edx */
  push32((uint32_t)(EDX));
  /* 11312b56 mov eax, dword ptr [0x11332a04] */
  EAX = (r32((uint32_t)(0x11332a04)));
  /* 11312b5b push eax */
  push32((uint32_t)(EAX));
  /* 11312b5c call 0x11314d50 */
  push32(0x11312b61u); f_11314d50();
  /* 11312b61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312b66 jne 0x11312b9c */
  if (!C.zf) goto L_11312b9c;
  /* 11312b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11312b6a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312b6d push ecx */
  push32((uint32_t)(ECX));
  /* 11312b6e call 0x11312dd0 */
  push32(0x11312b73u); f_11312dd0();
  /* 11312b73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312b78 je 0x11312b9c */
  if (C.zf) goto L_11312b9c;
  /* 11312b7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312b7d mov dword ptr [0x11332a10], edx */
  w32((uint32_t)(0x11332a10), (EDX));
  /* 11312b83 mov eax, dword ptr [0x11332a10] */
  EAX = (r32((uint32_t)(0x11332a10)));
  /* 11312b88 mov dword ptr [0x113329f4], eax */
  w32((uint32_t)(0x113329f4), (EAX));
  /* 11312b8d mov ecx, dword ptr [0x11332a0c] */
  ECX = (r32((uint32_t)(0x11332a0c)));
  /* 11312b93 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11312b96 mov dword ptr [0x11332a0c], ecx */
  w32((uint32_t)(0x11332a0c), (ECX));
L_11312b9c:;
  /* 11312b9c mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 11312ba1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11312ba4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11312ba6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312ba8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11312ba9:;
  /* 11312ba9 mov esp, ebp */
  ESP = (EBP);
  /* 11312bab pop ebp */
  EBP = (pop32());
  /* 11312bac ret 4 */
  ESPCHK(0x11312a90u, _esp0);
  ESP += 8; return;
}

/* FUN_10012bb0 @ 0x11312bb0 (69 bytes, 20 insns) */
void f_11312bb0(void) {
  FTRACE(0x11312bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11312bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11312bb3 mov eax, dword ptr [0x11332a08] */
  EAX = (r32((uint32_t)(0x11332a08)));
  /* 11312bb8 push eax */
  push32((uint32_t)(EAX));
  /* 11312bb9 call 0x113093e0 */
  push32(0x11312bbeu); f_113093e0();
  /* 11312bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312bc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11312bc3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312bc6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11312bc9 mov dword ptr [0x113329f8], ecx */
  w32((uint32_t)(0x113329f8), (ECX));
  /* 11312bcf push 1 */
  push32((uint32_t)(0x1u));
  /* 11312bd1 push 0x11312c00 */
  push32((uint32_t)(0x11312c00u));
  /* 11312bd6 call dword ptr [0x11335304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11335304))), 0x11312bdcu);
  /* 11312bdc mov edx, dword ptr [0x11332a0c] */
  EDX = (r32((uint32_t)(0x11332a0c)));
  /* 11312be2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11312be5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11312be7 jne 0x11312bf3 */
  if (!C.zf) goto L_11312bf3;
  /* 11312be9 mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
L_11312bf3:;
  /* 11312bf3 pop ebp */
  EBP = (pop32());
  /* 11312bf4 ret  */
  ESPCHK(0x11312bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c00 @ 0x11312c00 (172 bytes, 54 insns) */
void f_11312c00(void) {
  FTRACE(0x11312c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11312c01 mov ebp, esp */
  EBP = (ESP);
  /* 11312c03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312c09 push eax */
  push32((uint32_t)(EAX));
  /* 11312c0a call 0x11313040 */
  push32(0x11312c0fu); f_11313040();
  /* 11312c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312c12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11312c15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11312c17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11312c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11312c1b mov edx, dword ptr [0x113329f8] */
  EDX = (r32((uint32_t)(0x113329f8)));
  /* 11312c21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11312c23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312c25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11312c2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312c31 push edx */
  push32((uint32_t)(EDX));
  /* 11312c32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312c35 push eax */
  push32((uint32_t)(EAX));
  /* 11312c36 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312c3cu);
  /* 11312c3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312c3e jne 0x11312c51 */
  if (!C.zf) goto L_11312c51;
  /* 11312c40 mov dword ptr [0x11332a0c], 0 */
  w32((uint32_t)(0x11332a0c), (0x0u));
  /* 11312c4a mov eax, 1 */
  EAX = (0x1u);
  /* 11312c4f jmp 0x11312ca6 */
  goto L_11312ca6;
L_11312c51:;
  /* 11312c51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11312c54 push ecx */
  push32((uint32_t)(ECX));
  /* 11312c55 mov edx, dword ptr [0x11332a08] */
  EDX = (r32((uint32_t)(0x11332a08)));
  /* 11312c5b push edx */
  push32((uint32_t)(EDX));
  /* 11312c5c call 0x11314c80 */
  push32(0x11312c61u); f_11314c80();
  /* 11312c61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312c66 jne 0x11312c99 */
  if (!C.zf) goto L_11312c99;
  /* 11312c68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312c6b push eax */
  push32((uint32_t)(EAX));
  /* 11312c6c call 0x11312d80 */
  push32(0x11312c71u); f_11312d80();
  /* 11312c71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312c76 je 0x11312c99 */
  if (C.zf) goto L_11312c99;
  /* 11312c78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11312c7b mov dword ptr [0x11332a10], ecx */
  w32((uint32_t)(0x11332a10), (ECX));
  /* 11312c81 mov edx, dword ptr [0x11332a10] */
  EDX = (r32((uint32_t)(0x11332a10)));
  /* 11312c87 mov dword ptr [0x113329f4], edx */
  w32((uint32_t)(0x113329f4), (EDX));
  /* 11312c8d mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 11312c92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11312c94 mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
L_11312c99:;
  /* 11312c99 mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 11312c9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11312ca1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11312ca3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312ca5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11312ca6:;
  /* 11312ca6 mov esp, ebp */
  ESP = (EBP);
  /* 11312ca8 pop ebp */
  EBP = (pop32());
  /* 11312ca9 ret 4 */
  ESPCHK(0x11312c00u, _esp0);
  ESP += 8; return;
}

/* FUN_10012cb0 @ 0x11312cb0 (43 bytes, 11 insns) */
void f_11312cb0(void) {
  FTRACE(0x11312cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11312cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11312cb3 mov eax, dword ptr [0x11332a0c] */
  EAX = (r32((uint32_t)(0x11332a0c)));
  /* 11312cb8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11312cbd mov dword ptr [0x11332a0c], eax */
  w32((uint32_t)(0x11332a0c), (EAX));
  /* 11312cc2 call dword ptr [0x113352f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352f4))), 0x11312cc8u);
  /* 11312cc8 mov dword ptr [0x11332a10], eax */
  w32((uint32_t)(0x11332a10), (EAX));
  /* 11312ccd mov ecx, dword ptr [0x11332a10] */
  ECX = (r32((uint32_t)(0x11332a10)));
  /* 11312cd3 mov dword ptr [0x113329f4], ecx */
  w32((uint32_t)(0x113329f4), (ECX));
  /* 11312cd9 pop ebp */
  EBP = (pop32());
  /* 11312cda ret  */
  ESPCHK(0x11312cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x11312ce0 (155 bytes, 57 insns) */
void f_11312ce0(void) {
  FTRACE(0x11312ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11312ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11312ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312ce6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312cea je 0x11312d0b */
  if (C.zf) goto L_11312d0b;
  /* 11312cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312cef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11312cf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11312cf4 je 0x11312d0b */
  if (C.zf) goto L_11312d0b;
  /* 11312cf6 push 0x1132eb4c */
  push32((uint32_t)(0x1132eb4cu));
  /* 11312cfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312cfe push edx */
  push32((uint32_t)(EDX));
  /* 11312cff call 0x11312240 */
  push32(0x11312d04u); f_11312240();
  /* 11312d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312d09 jne 0x11312d33 */
  if (!C.zf) goto L_11312d33;
L_11312d0b:;
  /* 11312d0b push 8 */
  push32((uint32_t)(0x8u));
  /* 11312d0d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11312d10 push eax */
  push32((uint32_t)(EAX));
  /* 11312d11 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11312d16 mov ecx, dword ptr [0x11332a10] */
  ECX = (r32((uint32_t)(0x11332a10)));
  /* 11312d1c push ecx */
  push32((uint32_t)(ECX));
  /* 11312d1d call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312d23u);
  /* 11312d23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312d25 jne 0x11312d2b */
  if (!C.zf) goto L_11312d2b;
  /* 11312d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312d29 jmp 0x11312d77 */
  goto L_11312d77;
L_11312d2b:;
  /* 11312d2b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11312d2e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11312d31 jmp 0x11312d6b */
  goto L_11312d6b;
L_11312d33:;
  /* 11312d33 push 0x1132eb48 */
  push32((uint32_t)(0x1132eb48u));
  /* 11312d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312d3b push eax */
  push32((uint32_t)(EAX));
  /* 11312d3c call 0x11312240 */
  push32(0x11312d41u); f_11312240();
  /* 11312d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312d46 jne 0x11312d6b */
  if (!C.zf) goto L_11312d6b;
  /* 11312d48 push 8 */
  push32((uint32_t)(0x8u));
  /* 11312d4a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11312d4d push ecx */
  push32((uint32_t)(ECX));
  /* 11312d4e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11312d50 mov edx, dword ptr [0x11332a10] */
  EDX = (r32((uint32_t)(0x11332a10)));
  /* 11312d56 push edx */
  push32((uint32_t)(EDX));
  /* 11312d57 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312d5du);
  /* 11312d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312d5f jne 0x11312d65 */
  if (!C.zf) goto L_11312d65;
  /* 11312d61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312d63 jmp 0x11312d77 */
  goto L_11312d77;
L_11312d65:;
  /* 11312d65 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11312d68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11312d6b:;
  /* 11312d6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312d6e push ecx */
  push32((uint32_t)(ECX));
  /* 11312d6f call 0x11314e60 */
  push32(0x11312d74u); f_11314e60();
  /* 11312d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11312d77:;
  /* 11312d77 mov esp, ebp */
  ESP = (EBP);
  /* 11312d79 pop ebp */
  EBP = (pop32());
  /* 11312d7a ret  */
  ESPCHK(0x11312ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d80 @ 0x11312d80 (79 bytes, 26 insns) */
void f_11312d80(void) {
  FTRACE(0x11312d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11312d81 mov ebp, esp */
  EBP = (ESP);
  /* 11312d83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312d86 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11312d8a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11312d8e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11312d95 jmp 0x11312da0 */
  goto L_11312da0;
L_11312d97:;
  /* 11312d97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11312d9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312d9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11312da0:;
  /* 11312da0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312da4 jae 0x11312dc6 */
  if (!C.cf) goto L_11312dc6;
  /* 11312da6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11312da9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11312daf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11312db2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11312db4 mov cx, word ptr [eax*2 + 0x113319c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x113319c4)));
  /* 11312dbc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312dbe jne 0x11312dc4 */
  if (!C.zf) goto L_11312dc4;
  /* 11312dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312dc2 jmp 0x11312dcb */
  goto L_11312dcb;
L_11312dc4:;
  /* 11312dc4 jmp 0x11312d97 */
  goto L_11312d97;
L_11312dc6:;
  /* 11312dc6 mov eax, 1 */
  EAX = (0x1u);
L_11312dcb:;
  /* 11312dcb mov esp, ebp */
  ESP = (EBP);
  /* 11312dcd pop ebp */
  EBP = (pop32());
  /* 11312dce ret  */
  ESPCHK(0x11312d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x11312dd0 (135 bytes, 48 insns) */
void f_11312dd0(void) {
  FTRACE(0x11312dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11312dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11312dd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312dd6 push esi */
  push32((uint32_t)(ESI));
  /* 11312dd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312dda and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11312ddf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11312de4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11312de9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11312dec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11312df1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11312df4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11312df6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11312df9 push ecx */
  push32((uint32_t)(ECX));
  /* 11312dfa push 1 */
  push32((uint32_t)(0x1u));
  /* 11312dfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11312dff push edx */
  push32((uint32_t)(EDX));
  /* 11312e00 call dword ptr [0x11332a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11332a14))), 0x11312e06u);
  /* 11312e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312e08 jne 0x11312e0e */
  if (!C.zf) goto L_11312e0e;
  /* 11312e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312e0c jmp 0x11312e52 */
  goto L_11312e52;
L_11312e0e:;
  /* 11312e0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11312e11 push eax */
  push32((uint32_t)(EAX));
  /* 11312e12 call 0x11313040 */
  push32(0x11312e17u); f_11313040();
  /* 11312e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312e1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312e1d je 0x11312e4d */
  if (C.zf) goto L_11312e4d;
  /* 11312e1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312e23 je 0x11312e4d */
  if (C.zf) goto L_11312e4d;
  /* 11312e25 mov ecx, dword ptr [0x11332a04] */
  ECX = (r32((uint32_t)(0x11332a04)));
  /* 11312e2b push ecx */
  push32((uint32_t)(ECX));
  /* 11312e2c call 0x113130c0 */
  push32(0x11312e31u); f_113130c0();
  /* 11312e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312e34 mov esi, eax */
  ESI = (EAX);
  /* 11312e36 mov edx, dword ptr [0x11332a04] */
  EDX = (r32((uint32_t)(0x11332a04)));
  /* 11312e3c push edx */
  push32((uint32_t)(EDX));
  /* 11312e3d call 0x113093e0 */
  push32(0x11312e42u); f_113093e0();
  /* 11312e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312e45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312e47 jne 0x11312e4d */
  if (!C.zf) goto L_11312e4d;
  /* 11312e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11312e4b jmp 0x11312e52 */
  goto L_11312e52;
L_11312e4d:;
  /* 11312e4d mov eax, 1 */
  EAX = (0x1u);
L_11312e52:;
  /* 11312e52 pop esi */
  ESI = (pop32());
  /* 11312e53 mov esp, ebp */
  ESP = (EBP);
  /* 11312e55 pop ebp */
  EBP = (pop32());
  /* 11312e56 ret  */
  ESPCHK(0x11312dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e60 @ 0x11312e60 (77 bytes, 18 insns) */
void f_11312e60(void) {
  FTRACE(0x11312e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11312e61 mov ebp, esp */
  EBP = (ESP);
  /* 11312e63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312e69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11312e73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11312e79 push eax */
  push32((uint32_t)(EAX));
  /* 11312e7a call dword ptr [0x113352f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352f0))), 0x11312e80u);
  /* 11312e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11312e82 je 0x11312e99 */
  if (C.zf) goto L_11312e99;
  /* 11312e84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312e8b jne 0x11312e99 */
  if (!C.zf) goto L_11312e99;
  /* 11312e8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11312e97 jmp 0x11312ea3 */
  goto L_11312ea3;
L_11312e99:;
  /* 11312e99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11312ea3:;
  /* 11312ea3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11312ea9 mov esp, ebp */
  ESP = (EBP);
  /* 11312eab pop ebp */
  EBP = (pop32());
  /* 11312eac ret  */
  ESPCHK(0x11312e60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11312eb0 (388 bytes, 118 insns) */
void f_11312eb0(void) {
  FTRACE(0x11312eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11312eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11312eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11312eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312eb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11312ebd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11312ec4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11312ecb:;
  /* 11312ecb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11312ece cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312ed1 jg 0x11313018 */
  if ((!C.zf&&C.sf==C.of)) goto L_11313018;
  /* 11312ed7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11312eda add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312edd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11312ede sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312ee0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11312ee2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11312ee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312ee8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312eeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312eee cmp edx, dword ptr [ecx + 0x11331520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11331520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312ef4 jne 0x11312fee */
  if (!C.zf) goto L_11312fee;
  /* 11312efa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11312efd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11312f00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f04 ja 0x11312f27 */
  if ((!C.cf&&!C.zf)) goto L_11312f27;
  /* 11312f06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f0a je 0x11312f99 */
  if (C.zf) goto L_11312f99;
  /* 11312f10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f14 je 0x11312f44 */
  if (C.zf) goto L_11312f44;
  /* 11312f16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f1a je 0x11312f66 */
  if (C.zf) goto L_11312f66;
  /* 11312f1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f20 je 0x11312f88 */
  if (C.zf) goto L_11312f88;
  /* 11312f22 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312f27:;
  /* 11312f27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f2e je 0x11312f55 */
  if (C.zf) goto L_11312f55;
  /* 11312f30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f37 je 0x11312f77 */
  if (C.zf) goto L_11312f77;
  /* 11312f39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312f40 je 0x11312faa */
  if (C.zf) goto L_11312faa;
  /* 11312f42 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312f44:;
  /* 11312f44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312f47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312f4a add ecx, 0x11331524 */
  { uint32_t _a=(ECX),_b=(0x11331524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312f50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11312f53 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312f55:;
  /* 11312f55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312f58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312f5b mov eax, dword ptr [edx + 0x1133152c] */
  EAX = (r32((uint32_t)(EDX + 0x1133152c)));
  /* 11312f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11312f64 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312f66:;
  /* 11312f66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312f69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312f6c add ecx, 0x11331530 */
  { uint32_t _a=(ECX),_b=(0x11331530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312f72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11312f75 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312f77:;
  /* 11312f77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312f7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312f7d mov eax, dword ptr [edx + 0x11331534] */
  EAX = (r32((uint32_t)(EDX + 0x11331534)));
  /* 11312f83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11312f86 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312f88:;
  /* 11312f88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312f8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312f8e add ecx, 0x11331538 */
  { uint32_t _a=(ECX),_b=(0x11331538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312f94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11312f97 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312f99:;
  /* 11312f99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312f9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312f9f add edx, 0x1133153c */
  { uint32_t _a=(EDX),_b=(0x1133153cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312fa5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11312fa8 jmp 0x11312fb8 */
  goto L_11312fb8;
L_11312faa:;
  /* 11312faa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312fad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312fb0 add eax, 0x11331544 */
  { uint32_t _a=(EAX),_b=(0x11331544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312fb5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11312fb8:;
  /* 11312fb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312fbc je 0x11312fc4 */
  if (C.zf) goto L_11312fc4;
  /* 11312fbe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312fc2 jge 0x11312fc6 */
  if ((C.sf==C.of)) goto L_11312fc6;
L_11312fc4:;
  /* 11312fc4 jmp 0x11313018 */
  goto L_11313018;
L_11312fc6:;
  /* 11312fc6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11312fc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11312fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11312fcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11312fd0 push edx */
  push32((uint32_t)(EDX));
  /* 11312fd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11312fd4 push eax */
  push32((uint32_t)(EAX));
  /* 11312fd5 call 0x11309dd0 */
  push32(0x11312fdau); f_11309dd0();
  /* 11312fda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11312fdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11312fe0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11312fe3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11312fe7 mov eax, 1 */
  EAX = (0x1u);
  /* 11312fec jmp 0x1131302e */
  goto L_1131302e;
L_11312fee:;
  /* 11312fee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11312ff1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11312ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11312ff7 cmp eax, dword ptr [edx + 0x11331520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11331520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11312ffd jae 0x1131300a */
  if (!C.cf) goto L_1131300a;
  /* 11312fff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313002 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313005 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11313008 jmp 0x11313013 */
  goto L_11313013;
L_1131300a:;
  /* 1131300a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131300d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313010 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11313013:;
  /* 11313013 jmp 0x11312ecb */
  goto L_11312ecb;
L_11313018:;
  /* 11313018 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1131301b push eax */
  push32((uint32_t)(EAX));
  /* 1131301c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1131301f push ecx */
  push32((uint32_t)(ECX));
  /* 11313020 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11313023 push edx */
  push32((uint32_t)(EDX));
  /* 11313024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313027 push eax */
  push32((uint32_t)(EAX));
  /* 11313028 call dword ptr [0x113352fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352fc))), 0x1131302eu);
L_1131302e:;
  /* 1131302e mov esp, ebp */
  ESP = (EBP);
  /* 11313030 pop ebp */
  EBP = (pop32());
  /* 11313031 ret 0x10 */
  ESPCHK(0x11312eb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10013040 @ 0x11313040 (118 bytes, 42 insns) */
void f_11313040(void) {
  FTRACE(0x11313040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11313040 push ebp */
  push32((uint32_t)(EBP));
  /* 11313041 mov ebp, esp */
  EBP = (ESP);
  /* 11313043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313046 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1131304d:;
  /* 1131304d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313050 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11313052 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11313055 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11313059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131305c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131305f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11313062 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11313064 je 0x113130af */
  if (C.zf) goto L_113130af;
  /* 11313066 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1131306a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131306d jl 0x11313082 */
  if ((C.sf!=C.of)) goto L_11313082;
  /* 1131306f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11313073 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313076 jg 0x11313082 */
  if ((!C.zf&&C.sf==C.of)) goto L_11313082;
  /* 11313078 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1131307b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1131307d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11313080 jmp 0x1131309c */
  goto L_1131309c;
L_11313082:;
  /* 11313082 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11313086 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313089 jl 0x1131309c */
  if ((C.sf!=C.of)) goto L_1131309c;
  /* 1131308b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1131308f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313092 jg 0x1131309c */
  if ((!C.zf&&C.sf==C.of)) goto L_1131309c;
  /* 11313094 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11313097 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11313099 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1131309c:;
  /* 1131309c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131309f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 113130a2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113130a6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 113130aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113130ad jmp 0x1131304d */
  goto L_1131304d;
L_113130af:;
  /* 113130af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113130b2 mov esp, ebp */
  ESP = (EBP);
  /* 113130b4 pop ebp */
  EBP = (pop32());
  /* 113130b5 ret  */
  ESPCHK(0x11313040u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x113130c0 (101 bytes, 36 insns) */
void f_113130c0(void) {
  FTRACE(0x113130c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113130c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113130c1 mov ebp, esp */
  EBP = (ESP);
  /* 113130c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113130c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113130cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113130d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113130d2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 113130d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113130d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113130db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113130de:;
  /* 113130de movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113130e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113130e5 jl 0x113130f0 */
  if ((C.sf!=C.of)) goto L_113130f0;
  /* 113130e7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113130eb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113130ee jle 0x11313102 */
  if ((C.zf||C.sf!=C.of)) goto L_11313102;
L_113130f0:;
  /* 113130f0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113130f4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113130f7 jl 0x1131311e */
  if ((C.sf!=C.of)) goto L_1131311e;
  /* 113130f9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113130fd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313100 jg 0x1131311e */
  if ((!C.zf&&C.sf==C.of)) goto L_1131311e;
L_11313102:;
  /* 11313102 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11313105 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313108 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1131310b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131310e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11313110 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11313113 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313116 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313119 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1131311c jmp 0x113130de */
  goto L_113130de;
L_1131311e:;
  /* 1131311e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11313121 mov esp, ebp */
  ESP = (EBP);
  /* 11313123 pop ebp */
  EBP = (pop32());
  /* 11313124 ret  */
  ESPCHK(0x113130c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013130 @ 0x11313130 (122 bytes, 39 insns) */
void f_11313130(void) {
  FTRACE(0x11313130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11313130 push ebp */
  push32((uint32_t)(EBP));
  /* 11313131 mov ebp, esp */
  EBP = (ESP);
  /* 11313133 push ecx */
  push32((uint32_t)(ECX));
  /* 11313134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313137 cmp eax, dword ptr [0x1133429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1133429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131313d jae 0x11313161 */
  if (!C.cf) goto L_11313161;
  /* 1131313f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313142 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11313145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313148 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1131314b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1131314e mov eax, dword ptr [ecx*4 + 0x11334160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11334160)));
  /* 11313155 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1131315a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1131315d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1131315f jne 0x1131317c */
  if (!C.zf) goto L_1131317c;
L_11313161:;
  /* 11313161 call 0x1130e480 */
  push32(0x11313166u); f_1130e480();
  /* 11313166 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1131316c call 0x1130e490 */
  push32(0x11313171u); f_1130e490();
  /* 11313171 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11313177 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1131317a jmp 0x113131a6 */
  goto L_113131a6;
L_1131317c:;
  /* 1131317c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131317f push edx */
  push32((uint32_t)(EDX));
  /* 11313180 call 0x1130fca0 */
  push32(0x11313185u); f_1130fca0();
  /* 11313185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131318b push eax */
  push32((uint32_t)(EAX));
  /* 1131318c call 0x113131b0 */
  push32(0x11313191u); f_113131b0();
  /* 11313191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313194 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11313197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131319a push ecx */
  push32((uint32_t)(ECX));
  /* 1131319b call 0x1130fd30 */
  push32(0x113131a0u); f_1130fd30();
  /* 113131a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113131a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113131a6:;
  /* 113131a6 mov esp, ebp */
  ESP = (EBP);
  /* 113131a8 pop ebp */
  EBP = (pop32());
  /* 113131a9 ret  */
  ESPCHK(0x11313130u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x113131b0 (170 bytes, 59 insns) */
void f_113131b0(void) {
  FTRACE(0x113131b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113131b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113131b1 mov ebp, esp */
  EBP = (ESP);
  /* 113131b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113131b4 push esi */
  push32((uint32_t)(ESI));
  /* 113131b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113131b8 push eax */
  push32((uint32_t)(EAX));
  /* 113131b9 call 0x1130fb20 */
  push32(0x113131beu); f_1130fb20();
  /* 113131be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113131c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113131c4 je 0x11313203 */
  if (C.zf) goto L_11313203;
  /* 113131c6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113131ca je 0x113131d2 */
  if (C.zf) goto L_113131d2;
  /* 113131cc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113131d0 jne 0x113131ec */
  if (!C.zf) goto L_113131ec;
L_113131d2:;
  /* 113131d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113131d4 call 0x1130fb20 */
  push32(0x113131d9u); f_1130fb20();
  /* 113131d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113131dc mov esi, eax */
  ESI = (EAX);
  /* 113131de push 2 */
  push32((uint32_t)(0x2u));
  /* 113131e0 call 0x1130fb20 */
  push32(0x113131e5u); f_1130fb20();
  /* 113131e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113131e8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113131ea je 0x11313203 */
  if (C.zf) goto L_11313203;
L_113131ec:;
  /* 113131ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113131ef push ecx */
  push32((uint32_t)(ECX));
  /* 113131f0 call 0x1130fb20 */
  push32(0x113131f5u); f_1130fb20();
  /* 113131f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113131f8 push eax */
  push32((uint32_t)(EAX));
  /* 113131f9 call dword ptr [0x113352f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113352f8))), 0x113131ffu);
  /* 113131ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11313201 je 0x1131320c */
  if (C.zf) goto L_1131320c;
L_11313203:;
  /* 11313203 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1131320a jmp 0x11313215 */
  goto L_11313215;
L_1131320c:;
  /* 1131320c call dword ptr [0x113353e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113353e8))), 0x11313212u);
  /* 11313212 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11313215:;
  /* 11313215 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313218 push edx */
  push32((uint32_t)(EDX));
  /* 11313219 call 0x1130fa40 */
  push32(0x1131321eu); f_1130fa40();
  /* 1131321e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313224 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11313227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1131322a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1131322d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11313230 mov edx, dword ptr [eax*4 + 0x11334160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11334160)));
  /* 11313237 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1131323c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313240 je 0x11313253 */
  if (C.zf) goto L_11313253;
  /* 11313242 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11313245 push eax */
  push32((uint32_t)(EAX));
  /* 11313246 call 0x1130e3e0 */
  push32(0x1131324bu); f_1130e3e0();
  /* 1131324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131324e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11313251 jmp 0x11313255 */
  goto L_11313255;
L_11313253:;
  /* 11313253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11313255:;
  /* 11313255 pop esi */
  ESI = (pop32());
  /* 11313256 mov esp, ebp */
  ESP = (EBP);
  /* 11313258 pop ebp */
  EBP = (pop32());
  /* 11313259 ret  */
  ESPCHK(0x113131b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x11313260 (146 bytes, 52 insns) */
void f_11313260(void) {
  FTRACE(0x11313260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11313260 push ebp */
  push32((uint32_t)(EBP));
  /* 11313261 mov ebp, esp */
  EBP = (ESP);
  /* 11313263 push ebx */
  push32((uint32_t)(EBX));
  /* 11313264 push esi */
  push32((uint32_t)(ESI));
  /* 11313265 push edi */
  push32((uint32_t)(EDI));
L_11313266:;
  /* 11313266 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131326a jne 0x1131328a */
  if (!C.zf) goto L_1131328a;
  /* 1131326c push 0x1132e488 */
  push32((uint32_t)(0x1132e488u));
  /* 11313271 push 0 */
  push32((uint32_t)(0x0u));
  /* 11313273 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11313275 push 0x1132eb50 */
  push32((uint32_t)(0x1132eb50u));
  /* 1131327a push 2 */
  push32((uint32_t)(0x2u));
  /* 1131327c call 0x11305670 */
  push32(0x11313281u); f_11305670();
  /* 11313281 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313284 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313287 jne 0x1131328a */
  if (!C.zf) goto L_1131328a;
  /* 11313289 int3  */
  x86_unimpl("int3 @ 0x11313289");
L_1131328a:;
  /* 1131328a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1131328c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1131328e jne 0x11313266 */
  if (!C.zf) goto L_11313266;
  /* 11313290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11313293 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11313296 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1131329c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1131329e je 0x113132ed */
  if (C.zf) goto L_113132ed;
  /* 113132a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113132a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113132a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 113132a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113132ab je 0x113132ed */
  if (C.zf) goto L_113132ed;
  /* 113132ad push 2 */
  push32((uint32_t)(0x2u));
  /* 113132af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113132b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113132b5 push eax */
  push32((uint32_t)(EAX));
  /* 113132b6 call 0x11307040 */
  push32(0x113132bbu); f_11307040();
  /* 113132bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113132be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113132c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113132c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 113132ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113132cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113132d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113132d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 113132d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113132dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 113132e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113132e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_113132ed:;
  /* 113132ed pop edi */
  EDI = (pop32());
  /* 113132ee pop esi */
  ESI = (pop32());
  /* 113132ef pop ebx */
  EBX = (pop32());
  /* 113132f0 pop ebp */
  EBP = (pop32());
  /* 113132f1 ret  */
  ESPCHK(0x11313260u, _esp0);
  ESP += 4; return;
}

/* FUN_10013300 @ 0x11313300 (289 bytes, 97 insns) */
void f_11313300(void) {
  FTRACE(0x11313300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11313300 push ebp */
  push32((uint32_t)(EBP));
  /* 11313301 mov ebp, esp */
  EBP = (ESP);
  /* 11313303 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313306 push esi */
  push32((uint32_t)(ESI));
  /* 11313307 mov eax, dword ptr [0x11331c98] */
  EAX = (r32((uint32_t)(0x11331c98)));
  /* 1131330c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1131330f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11313316 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1131331d jmp 0x11313328 */
  goto L_11313328;
L_1131331f:;
  /* 1131331f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313322 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313325 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11313328:;
  /* 11313328 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131332c jae 0x11313361 */
  if (!C.cf) goto L_11313361;
  /* 1131332e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313331 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313334 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11313337 push ecx */
  push32((uint32_t)(ECX));
  /* 11313338 call 0x113093e0 */
  push32(0x1131333du); f_113093e0();
  /* 1131333d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313340 mov esi, eax */
  ESI = (EAX);
  /* 11313342 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313345 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313348 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1131334c push ecx */
  push32((uint32_t)(ECX));
  /* 1131334d call 0x113093e0 */
  push32(0x11313352u); f_113093e0();
  /* 11313352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313355 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313358 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1131335c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1131335f jmp 0x1131331f */
  goto L_1131331f;
L_11313361:;
  /* 11313361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11313364 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313367 push eax */
  push32((uint32_t)(EAX));
  /* 11313368 call 0x11306590 */
  push32(0x1131336du); f_11306590();
  /* 1131336d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313370 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11313373 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313377 je 0x11313419 */
  if (C.zf) goto L_11313419;
  /* 1131337d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11313380 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11313383 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1131338a jmp 0x11313395 */
  goto L_11313395;
L_1131338c:;
  /* 1131338c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131338f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313392 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11313395:;
  /* 11313395 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313399 jae 0x1131340a */
  if (!C.cf) goto L_1131340a;
  /* 1131339b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131339e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 113133a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113133a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113133a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113133aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113133ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113133b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113133b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113133b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113133b7 push edx */
  push32((uint32_t)(EDX));
  /* 113133b8 call 0x11309560 */
  push32(0x113133bdu); f_11309560();
  /* 113133bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113133c0 push eax */
  push32((uint32_t)(EAX));
  /* 113133c1 call 0x113093e0 */
  push32(0x113133c6u); f_113093e0();
  /* 113133c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113133c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113133cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113133ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113133d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113133d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 113133d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113133da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113133dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113133e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113133e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113133e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 113133ea push eax */
  push32((uint32_t)(EAX));
  /* 113133eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113133ee push ecx */
  push32((uint32_t)(ECX));
  /* 113133ef call 0x11309560 */
  push32(0x113133f4u); f_11309560();
  /* 113133f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113133f7 push eax */
  push32((uint32_t)(EAX));
  /* 113133f8 call 0x113093e0 */
  push32(0x113133fdu); f_113093e0();
  /* 113133fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313400 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313403 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313405 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11313408 jmp 0x1131338c */
  goto L_1131338c;
L_1131340a:;
  /* 1131340a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131340d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11313410 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313413 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313416 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11313419:;
  /* 11313419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131341c pop esi */
  ESI = (pop32());
  /* 1131341d mov esp, ebp */
  ESP = (EBP);
  /* 1131341f pop ebp */
  EBP = (pop32());
  /* 11313420 ret  */
  ESPCHK(0x11313300u, _esp0);
  ESP += 4; return;
}

/* FUN_10013430 @ 0x11313430 (291 bytes, 97 insns) */
void f_11313430(void) {
  FTRACE(0x11313430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11313430 push ebp */
  push32((uint32_t)(EBP));
  /* 11313431 mov ebp, esp */
  EBP = (ESP);
  /* 11313433 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313436 push esi */
  push32((uint32_t)(ESI));
  /* 11313437 mov eax, dword ptr [0x11331c98] */
  EAX = (r32((uint32_t)(0x11331c98)));
  /* 1131343c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1131343f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11313446 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1131344d jmp 0x11313458 */
  goto L_11313458;
L_1131344f:;
  /* 1131344f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313452 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313455 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11313458:;
  /* 11313458 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131345c jae 0x11313492 */
  if (!C.cf) goto L_11313492;
  /* 1131345e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313461 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313464 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11313468 push ecx */
  push32((uint32_t)(ECX));
  /* 11313469 call 0x113093e0 */
  push32(0x1131346eu); f_113093e0();
  /* 1131346e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313471 mov esi, eax */
  ESI = (EAX);
  /* 11313473 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313476 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313479 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1131347d push ecx */
  push32((uint32_t)(ECX));
  /* 1131347e call 0x113093e0 */
  push32(0x11313483u); f_113093e0();
  /* 11313483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313486 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313489 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1131348d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11313490 jmp 0x1131344f */
  goto L_1131344f;
L_11313492:;
  /* 11313492 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11313495 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313498 push eax */
  push32((uint32_t)(EAX));
  /* 11313499 call 0x11306590 */
  push32(0x1131349eu); f_11306590();
  /* 1131349e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113134a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113134a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113134a8 je 0x1131354b */
  if (C.zf) goto L_1131354b;
  /* 113134ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113134b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113134b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113134bb jmp 0x113134c6 */
  goto L_113134c6;
L_113134bd:;
  /* 113134bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113134c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113134c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113134c6:;
  /* 113134c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113134ca jae 0x1131353c */
  if (!C.cf) goto L_1131353c;
  /* 113134cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113134cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 113134d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113134d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113134d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113134db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113134de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113134e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 113134e5 push ecx */
  push32((uint32_t)(ECX));
  /* 113134e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113134e9 push edx */
  push32((uint32_t)(EDX));
  /* 113134ea call 0x11309560 */
  push32(0x113134efu); f_11309560();
  /* 113134ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113134f2 push eax */
  push32((uint32_t)(EAX));
  /* 113134f3 call 0x113093e0 */
  push32(0x113134f8u); f_113093e0();
  /* 113134f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113134fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113134fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313500 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11313503 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313506 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11313509 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131350c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131350f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11313512 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313515 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313518 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1131351c push eax */
  push32((uint32_t)(EAX));
  /* 1131351d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313520 push ecx */
  push32((uint32_t)(ECX));
  /* 11313521 call 0x11309560 */
  push32(0x11313526u); f_11309560();
  /* 11313526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313529 push eax */
  push32((uint32_t)(EAX));
  /* 1131352a call 0x113093e0 */
  push32(0x1131352fu); f_113093e0();
  /* 1131352f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313532 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313535 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313537 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1131353a jmp 0x113134bd */
  goto L_113134bd;
L_1131353c:;
  /* 1131353c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131353f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11313542 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313548 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1131354b:;
  /* 1131354b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1131354e pop esi */
  ESI = (pop32());
  /* 1131354f mov esp, ebp */
  ESP = (EBP);
  /* 11313551 pop ebp */
  EBP = (pop32());
  /* 11313552 ret  */
  ESPCHK(0x11313430u, _esp0);
  ESP += 4; return;
}

/* FUN_10013560 @ 0x11313560 (878 bytes, 273 insns) */
void f_11313560(void) {
  FTRACE(0x11313560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11313560 push ebp */
  push32((uint32_t)(EBP));
  /* 11313561 mov ebp, esp */
  EBP = (ESP);
  /* 11313563 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11313566 push esi */
  push32((uint32_t)(ESI));
  /* 11313567 mov eax, dword ptr [0x11331c98] */
  EAX = (r32((uint32_t)(0x11331c98)));
  /* 1131356c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1131356f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11313576 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1131357d jmp 0x11313588 */
  goto L_11313588;
L_1131357f:;
  /* 1131357f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313582 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313585 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11313588:;
  /* 11313588 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1131358c jae 0x113135c1 */
  if (!C.cf) goto L_113135c1;
  /* 1131358e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313594 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11313597 push ecx */
  push32((uint32_t)(ECX));
  /* 11313598 call 0x113093e0 */
  push32(0x1131359du); f_113093e0();
  /* 1131359d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113135a0 mov esi, eax */
  ESI = (EAX);
  /* 113135a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113135a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113135a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 113135ac push ecx */
  push32((uint32_t)(ECX));
  /* 113135ad call 0x113093e0 */
  push32(0x113135b2u); f_113093e0();
  /* 113135b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113135b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113135b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113135bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113135bf jmp 0x1131357f */
  goto L_1131357f;
L_113135c1:;
  /* 113135c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113135c8 jmp 0x113135d3 */
  goto L_113135d3;
L_113135ca:;
  /* 113135ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113135cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113135d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113135d3:;
  /* 113135d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113135d7 jae 0x1131360d */
  if (!C.cf) goto L_1131360d;
  /* 113135d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113135dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113135df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113135e3 push eax */
  push32((uint32_t)(EAX));
  /* 113135e4 call 0x113093e0 */
  push32(0x113135e9u); f_113093e0();
  /* 113135e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113135ec mov esi, eax */
  ESI = (EAX);
  /* 113135ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113135f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113135f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113135f8 push eax */
  push32((uint32_t)(EAX));
  /* 113135f9 call 0x113093e0 */
  push32(0x113135feu); f_113093e0();
  /* 113135fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313601 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313604 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11313608 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1131360b jmp 0x113135ca */
  goto L_113135ca;
L_1131360d:;
  /* 1131360d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313610 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11313616 push eax */
  push32((uint32_t)(EAX));
  /* 11313617 call 0x113093e0 */
  push32(0x1131361cu); f_113093e0();
  /* 1131361c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131361f mov esi, eax */
  ESI = (EAX);
  /* 11313621 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313624 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1131362a push edx */
  push32((uint32_t)(EDX));
  /* 1131362b call 0x113093e0 */
  push32(0x11313630u); f_113093e0();
  /* 11313630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313633 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313636 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1131363a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1131363d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313640 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11313646 push edx */
  push32((uint32_t)(EDX));
  /* 11313647 call 0x113093e0 */
  push32(0x1131364cu); f_113093e0();
  /* 1131364c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131364f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11313652 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11313656 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11313659 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131365c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11313662 push ecx */
  push32((uint32_t)(ECX));
  /* 11313663 call 0x113093e0 */
  push32(0x11313668u); f_113093e0();
  /* 11313668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131366b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131366e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11313672 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11313675 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313678 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1131367e push edx */
  push32((uint32_t)(EDX));
  /* 1131367f call 0x113093e0 */
  push32(0x11313684u); f_113093e0();
  /* 11313684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313687 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1131368a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1131368e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11313691 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11313694 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11313699 push eax */
  push32((uint32_t)(EAX));
  /* 1131369a call 0x11306590 */
  push32(0x1131369fu); f_11306590();
  /* 1131369f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113136a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113136a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113136a9 je 0x113138c6 */
  if (C.zf) goto L_113138c6;
  /* 113136af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113136b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113136b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113136b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113136be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113136c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 113136c6 mov eax, dword ptr [0x11331c98] */
  EAX = (r32((uint32_t)(0x11331c98)));
  /* 113136cb push eax */
  push32((uint32_t)(EAX));
  /* 113136cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113136cf push ecx */
  push32((uint32_t)(ECX));
  /* 113136d0 call 0x1130ce90 */
  push32(0x113136d5u); f_1130ce90();
  /* 113136d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113136d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113136df jmp 0x113136ea */
  goto L_113136ea;
L_113136e1:;
  /* 113136e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113136e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113136e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113136ea:;
  /* 113136ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113136ee jae 0x1131375e */
  if (!C.cf) goto L_1131375e;
  /* 113136f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113136f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113136f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113136f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 113136fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113136ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313702 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11313705 push edx */
  push32((uint32_t)(EDX));
  /* 11313706 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313709 push eax */
  push32((uint32_t)(EAX));
  /* 1131370a call 0x11309560 */
  push32(0x1131370fu); f_11309560();
  /* 1131370f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313712 push eax */
  push32((uint32_t)(EAX));
  /* 11313713 call 0x113093e0 */
  push32(0x11313718u); f_113093e0();
  /* 11313718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131371b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131371e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11313722 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11313725 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313728 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1131372b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131372e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11313732 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313735 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313738 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1131373c push edx */
  push32((uint32_t)(EDX));
  /* 1131373d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313740 push eax */
  push32((uint32_t)(EAX));
  /* 11313741 call 0x11309560 */
  push32(0x11313746u); f_11309560();
  /* 11313746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313749 push eax */
  push32((uint32_t)(EAX));
  /* 1131374a call 0x113093e0 */
  push32(0x1131374fu); f_113093e0();
  /* 1131374f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313752 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313755 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11313759 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1131375c jmp 0x113136e1 */
  goto L_113136e1;
L_1131375e:;
  /* 1131375e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11313765 jmp 0x11313770 */
  goto L_11313770;
L_11313767:;
  /* 11313767 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1131376a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1131376d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11313770:;
  /* 11313770 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11313774 jae 0x113137e6 */
  if (!C.cf) goto L_113137e6;
  /* 11313776 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313779 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1131377c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131377f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11313783 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11313786 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313789 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1131378d push eax */
  push32((uint32_t)(EAX));
  /* 1131378e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313791 push ecx */
  push32((uint32_t)(ECX));
  /* 11313792 call 0x11309560 */
  push32(0x11313797u); f_11309560();
  /* 11313797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131379a push eax */
  push32((uint32_t)(EAX));
  /* 1131379b call 0x113093e0 */
  push32(0x113137a0u); f_113093e0();
  /* 113137a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113137a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113137a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113137aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113137ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113137b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113137b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113137b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 113137ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113137bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113137c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113137c4 push eax */
  push32((uint32_t)(EAX));
  /* 113137c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113137c8 push ecx */
  push32((uint32_t)(ECX));
  /* 113137c9 call 0x11309560 */
  push32(0x113137ceu); f_11309560();
  /* 113137ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113137d1 push eax */
  push32((uint32_t)(EAX));
  /* 113137d2 call 0x113093e0 */
  push32(0x113137d7u); f_113093e0();
  /* 113137d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113137da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113137dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113137e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113137e4 jmp 0x11313767 */
  goto L_11313767;
L_113137e6:;
  /* 113137e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113137e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113137ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 113137f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113137f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 113137fb push ecx */
  push32((uint32_t)(ECX));
  /* 113137fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113137ff push edx */
  push32((uint32_t)(EDX));
  /* 11313800 call 0x11309560 */
  push32(0x11313805u); f_11309560();
  /* 11313805 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313808 push eax */
  push32((uint32_t)(EAX));
  /* 11313809 call 0x113093e0 */
  push32(0x1131380eu); f_113093e0();
  /* 1131380e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313811 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313814 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11313818 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1131381b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1131381e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313821 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11313827 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131382a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11313830 push eax */
  push32((uint32_t)(EAX));
  /* 11313831 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313834 push ecx */
  push32((uint32_t)(ECX));
  /* 11313835 call 0x11309560 */
  push32(0x1131383au); f_11309560();
  /* 1131383a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131383d push eax */
  push32((uint32_t)(EAX));
  /* 1131383e call 0x113093e0 */
  push32(0x11313843u); f_113093e0();
  /* 11313843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313846 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313849 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1131384d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11313850 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11313853 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313856 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1131385c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1131385f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11313865 push ecx */
  push32((uint32_t)(ECX));
  /* 11313866 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11313869 push edx */
  push32((uint32_t)(EDX));
  /* 1131386a call 0x11309560 */
  push32(0x1131386fu); f_11309560();
  /* 1131386f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11313872 push eax */
  push32((uint32_t)(EAX));
  /* 11313873 call 0x113093e0 */
  push32(0x11313878u); f_113093e0();
  /* 11313878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1131387b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131387e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11313882 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11313885 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11313888 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131388b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11313891 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11313894 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1131389a push eax */
  push32((uint32_t)(EAX));
  /* 1131389b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1131389e push ecx */
  push32((uint32_t)(ECX));
  /* 1131389f call 0x11309560 */
  push32(0x113138a4u); f_11309560();
  /* 113138a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113138a7 push eax */
  push32((uint32_t)(EAX));
  /* 113138a8 call 0x113093e0 */
  push32(0x113138adu); f_113093e0();
  /* 113138ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113138b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113138b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113138b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113138ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113138bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113138c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_113138c6:;
  /* 113138c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113138c9 pop esi */
  ESI = (pop32());
  /* 113138ca mov esp, ebp */
  ESP = (EBP);
  /* 113138cc pop ebp */
  EBP = (pop32());
  /* 113138cd ret  */
  ESPCHK(0x11313560u, _esp0);
  ESP += 4; return;
}

/* FUN_100138d0 @ 0x113138d0 (31 bytes, 15 insns) */
void f_113138d0(void) {
  FTRACE(0x113138d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113138d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113138d1 mov ebp, esp */
  EBP = (ESP);
  /* 113138d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113138d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113138d8 push eax */
  push32((uint32_t)(EAX));
  /* 113138d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113138dc push ecx */
  push32((uint32_t)(ECX));
  /* 113138dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113138e0 push edx */
  push32((uint32_t)(EDX));
  /* 113138e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113138e4 push eax */
  push32((uint32_t)(EAX));
  /* 113138e5 call 0x113138f0 */
  push32(0x113138eau); f_113138f0();
  /* 113138ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113138ed pop ebp */
  EBP = (pop32());
  /* 113138ee ret  */
  ESPCHK(0x113138d0u, _esp0);
  ESP += 4; return;
}

