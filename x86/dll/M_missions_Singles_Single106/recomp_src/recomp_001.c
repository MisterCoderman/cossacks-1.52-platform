#include "recomp.h"

/* FUN_1000e870 @ 0x1105e870 (10 bytes, 5 insns) */
void f_1105e870(void) {
  FTRACE(0x1105e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105e870 push ebp */
  push32((uint32_t)(EBP));
  /* 1105e871 mov ebp, esp */
  EBP = (ESP);
  /* 1105e873 mov eax, dword ptr [0x11084c94] */
  EAX = (r32((uint32_t)(0x11084c94)));
  /* 1105e878 pop ebp */
  EBP = (pop32());
  /* 1105e879 ret  */
  ESPCHK(0x1105e870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e880 @ 0x1105e880 (31 bytes, 11 insns) */
void f_1105e880(void) {
  FTRACE(0x1105e880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105e880 push ebp */
  push32((uint32_t)(EBP));
  /* 1105e881 mov ebp, esp */
  EBP = (ESP);
  /* 1105e883 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105e88a jbe 0x1105e890 */
  if ((C.cf||C.zf)) goto L_1105e890;
  /* 1105e88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105e88e jmp 0x1105e89d */
  goto L_1105e89d;
L_1105e890:;
  /* 1105e890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105e893 mov dword ptr [0x11084c94], eax */
  w32((uint32_t)(0x11084c94), (EAX));
  /* 1105e898 mov eax, 1 */
  EAX = (0x1u);
L_1105e89d:;
  /* 1105e89d pop ebp */
  EBP = (pop32());
  /* 1105e89e ret  */
  ESPCHK(0x1105e880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x1105e8a0 (89 bytes, 20 insns) */
void f_1105e8a0(void) {
  FTRACE(0x1105e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1105e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1105e8a3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1105e8a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1105e8aa mov eax, dword ptr [0x1108812c] */
  EAX = (r32((uint32_t)(0x1108812c)));
  /* 1105e8af push eax */
  push32((uint32_t)(EAX));
  /* 1105e8b0 call dword ptr [0x11089344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089344))), 0x1105e8b6u);
  /* 1105e8b6 mov dword ptr [0x11088128], eax */
  w32((uint32_t)(0x11088128), (EAX));
  /* 1105e8bb cmp dword ptr [0x11088128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11088128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105e8c2 jne 0x1105e8c8 */
  if (!C.zf) goto L_1105e8c8;
  /* 1105e8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105e8c6 jmp 0x1105e8f7 */
  goto L_1105e8f7;
L_1105e8c8:;
  /* 1105e8c8 mov ecx, dword ptr [0x11088128] */
  ECX = (r32((uint32_t)(0x11088128)));
  /* 1105e8ce mov dword ptr [0x1108811c], ecx */
  w32((uint32_t)(0x1108811c), (ECX));
  /* 1105e8d4 mov dword ptr [0x11088120], 0 */
  w32((uint32_t)(0x11088120), (0x0u));
  /* 1105e8de mov dword ptr [0x11088124], 0 */
  w32((uint32_t)(0x11088124), (0x0u));
  /* 1105e8e8 mov dword ptr [0x11088108], 0x10 */
  w32((uint32_t)(0x11088108), (0x10u));
  /* 1105e8f2 mov eax, 1 */
  EAX = (0x1u);
L_1105e8f7:;
  /* 1105e8f7 pop ebp */
  EBP = (pop32());
  /* 1105e8f8 ret  */
  ESPCHK(0x1105e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e900 @ 0x1105e900 (85 bytes, 29 insns) */
void f_1105e900(void) {
  FTRACE(0x1105e900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105e900 push ebp */
  push32((uint32_t)(EBP));
  /* 1105e901 mov ebp, esp */
  EBP = (ESP);
  /* 1105e903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105e906 mov eax, dword ptr [0x11088124] */
  EAX = (r32((uint32_t)(0x11088124)));
  /* 1105e90b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105e90e mov ecx, dword ptr [0x11088128] */
  ECX = (r32((uint32_t)(0x11088128)));
  /* 1105e914 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105e916 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1105e919 mov edx, dword ptr [0x11088128] */
  EDX = (r32((uint32_t)(0x11088128)));
  /* 1105e91f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1105e922:;
  /* 1105e922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105e925 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105e928 jae 0x1105e94f */
  if (!C.cf) goto L_1105e94f;
  /* 1105e92a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105e92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105e930 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105e933 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1105e936 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105e93d jae 0x1105e944 */
  if (!C.cf) goto L_1105e944;
  /* 1105e93f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105e942 jmp 0x1105e951 */
  goto L_1105e951;
L_1105e944:;
  /* 1105e944 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105e947 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105e94a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1105e94d jmp 0x1105e922 */
  goto L_1105e922;
L_1105e94f:;
  /* 1105e94f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1105e951:;
  /* 1105e951 mov esp, ebp */
  ESP = (EBP);
  /* 1105e953 pop ebp */
  EBP = (pop32());
  /* 1105e954 ret  */
  ESPCHK(0x1105e900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e960 @ 0x1105e960 (95 bytes, 33 insns) */
void f_1105e960(void) {
  FTRACE(0x1105e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105e960 push ebp */
  push32((uint32_t)(EBP));
  /* 1105e961 mov ebp, esp */
  EBP = (ESP);
  /* 1105e963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105e966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105e969 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1105e96c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105e96f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1105e972 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105e975 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1105e978 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1105e97b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105e980 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105e983 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105e985 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105e988 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1105e98b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105e98d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105e98f jne 0x1105e9b1 */
  if (!C.zf) goto L_1105e9b1;
  /* 1105e991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105e994 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1105e997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1105e999 jne 0x1105e9b1 */
  if (!C.zf) goto L_1105e9b1;
  /* 1105e99b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105e99e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1105e9a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105e9a6 je 0x1105e9b1 */
  if (C.zf) goto L_1105e9b1;
  /* 1105e9a8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1105e9af jmp 0x1105e9b8 */
  goto L_1105e9b8;
L_1105e9b1:;
  /* 1105e9b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1105e9b8:;
  /* 1105e9b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105e9bb mov esp, ebp */
  ESP = (EBP);
  /* 1105e9bd pop ebp */
  EBP = (pop32());
  /* 1105e9be ret  */
  ESPCHK(0x1105e960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x1105e9c0 (1485 bytes, 453 insns) */
void f_1105e9c0(void) {
  FTRACE(0x1105e9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105e9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1105e9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1105e9c3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105e9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105e9c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105e9cc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1105e9cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105e9d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1105e9d5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105e9d8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1105e9db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105e9de shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1105e9e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1105e9e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105e9e7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105e9ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105e9f0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1105e9f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1105e9fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1105e9fd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ea00 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1105ea03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ea06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105ea08 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ea0b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1105ea0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ea11 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ea14 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1105ea17 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105ea1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105ea1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1105ea1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ea22 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1105ea25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1105ea28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105ea2b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1105ea2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105ea30 jne 0x1105eb58 */
  if (!C.zf) goto L_1105eb58;
  /* 1105ea36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105ea39 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1105ea3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ea3f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1105ea42 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ea46 jbe 0x1105ea4f */
  if ((C.cf||C.zf)) goto L_1105ea4f;
  /* 1105ea48 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1105ea4f:;
  /* 1105ea4f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105ea52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105ea55 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105ea58 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ea5b jne 0x1105eb31 */
  if (!C.zf) goto L_1105eb31;
  /* 1105ea61 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ea65 jae 0x1105eac6 */
  if (!C.cf) goto L_1105eac6;
  /* 1105ea67 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105ea6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105ea6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105ea71 not eax */
  EAX = (~(EAX));
  /* 1105ea73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ea76 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ea79 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1105ea7d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105ea7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ea82 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ea85 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1105ea89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ea8c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ea8f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1105ea92 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105ea95 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ea98 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ea9b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1105ea9e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105eaa1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105eaa4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105eaa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105eaaa jne 0x1105eac4 */
  if (!C.zf) goto L_1105eac4;
  /* 1105eaac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105eab1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105eab4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105eab6 not eax */
  EAX = (~(EAX));
  /* 1105eab8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105eabb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1105eabd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105eabf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105eac2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1105eac4:;
  /* 1105eac4 jmp 0x1105eb31 */
  goto L_1105eb31;
L_1105eac6:;
  /* 1105eac6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105eac9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105eacc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105ead1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105ead3 not edx */
  EDX = (~(EDX));
  /* 1105ead5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ead8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105eadb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1105eae2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105eae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105eae7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105eaea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1105eaf1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105eaf4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105eaf7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105eafa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105eafd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105eb00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105eb03 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1105eb06 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105eb09 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105eb0c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105eb10 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105eb12 jne 0x1105eb31 */
  if (!C.zf) goto L_1105eb31;
  /* 1105eb14 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105eb17 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105eb1a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105eb1f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105eb21 not edx */
  EDX = (~(EDX));
  /* 1105eb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105eb26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105eb29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105eb2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105eb2e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1105eb31:;
  /* 1105eb31 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105eb34 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1105eb37 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105eb3a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105eb3d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1105eb40 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105eb43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105eb46 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105eb49 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1105eb4c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1105eb4f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105eb52 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105eb55 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1105eb58:;
  /* 1105eb58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105eb5b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1105eb5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105eb61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1105eb64 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105eb68 jbe 0x1105eb71 */
  if ((C.cf||C.zf)) goto L_1105eb71;
  /* 1105eb6a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1105eb71:;
  /* 1105eb71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105eb74 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1105eb77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105eb79 jne 0x1105ecd5 */
  if (!C.zf) goto L_1105ecd5;
  /* 1105eb7f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105eb82 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105eb85 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1105eb88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105eb8b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1105eb8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105eb91 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1105eb94 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105eb98 jbe 0x1105eba1 */
  if ((C.cf||C.zf)) goto L_1105eba1;
  /* 1105eb9a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1105eba1:;
  /* 1105eba1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105eba4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105eba7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1105ebaa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105ebad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1105ebb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ebb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1105ebb6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ebba jbe 0x1105ebc3 */
  if ((C.cf||C.zf)) goto L_1105ebc3;
  /* 1105ebbc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1105ebc3:;
  /* 1105ebc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105ebc6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ebc9 je 0x1105eccf */
  if (C.zf) goto L_1105eccf;
  /* 1105ebcf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105ebd2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105ebd5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105ebd8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ebdb jne 0x1105ecb1 */
  if (!C.zf) goto L_1105ecb1;
  /* 1105ebe1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ebe5 jae 0x1105ec46 */
  if (!C.cf) goto L_1105ec46;
  /* 1105ebe7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105ebec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105ebef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105ebf1 not edx */
  EDX = (~(EDX));
  /* 1105ebf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ebf6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ebf9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1105ebfd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105ebff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ec02 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec05 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1105ec09 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec0c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ec0f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105ec12 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105ec15 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec18 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ec1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1105ec1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec21 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ec24 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105ec28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105ec2a jne 0x1105ec44 */
  if (!C.zf) goto L_1105ec44;
  /* 1105ec2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105ec31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105ec34 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105ec36 not edx */
  EDX = (~(EDX));
  /* 1105ec38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ec3b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105ec3d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105ec3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ec42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1105ec44:;
  /* 1105ec44 jmp 0x1105ecb1 */
  goto L_1105ecb1;
L_1105ec46:;
  /* 1105ec46 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105ec49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ec4c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105ec51 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105ec53 not eax */
  EAX = (~(EAX));
  /* 1105ec55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ec58 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec5b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1105ec62 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105ec64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ec67 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec6a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1105ec71 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec74 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ec77 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1105ec7a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105ec7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec80 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ec83 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1105ec86 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ec89 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ec8c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105ec90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105ec92 jne 0x1105ecb1 */
  if (!C.zf) goto L_1105ecb1;
  /* 1105ec94 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105ec97 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ec9a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105ec9f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105eca1 not eax */
  EAX = (~(EAX));
  /* 1105eca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105eca6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105eca9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105ecab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ecae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1105ecb1:;
  /* 1105ecb1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105ecb4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1105ecb7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105ecba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105ecbd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1105ecc0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105ecc3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105ecc6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105ecc9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1105eccc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1105eccf:;
  /* 1105eccf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105ecd2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1105ecd5:;
  /* 1105ecd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105ecd8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1105ecdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105ecdd jne 0x1105eceb */
  if (!C.zf) goto L_1105eceb;
  /* 1105ecdf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105ece2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ece5 je 0x1105edfb */
  if (C.zf) goto L_1105edfb;
L_1105eceb:;
  /* 1105eceb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105ecee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105ecf1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1105ecf4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1105ecf7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ecfa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105ecfd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105ed00 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1105ed03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ed06 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105ed09 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1105ed0c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105ed0f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ed12 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1105ed15 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ed18 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105ed1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ed1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1105ed21 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ed24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ed27 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105ed2a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ed2d jne 0x1105edfb */
  if (!C.zf) goto L_1105edfb;
  /* 1105ed33 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ed37 jae 0x1105ed94 */
  if (!C.cf) goto L_1105ed94;
  /* 1105ed39 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ed3c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ed3f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105ed43 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ed46 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ed49 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105ed4c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105ed4f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ed52 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ed55 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1105ed58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105ed5a jne 0x1105ed72 */
  if (!C.zf) goto L_1105ed72;
  /* 1105ed5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105ed61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105ed64 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105ed66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ed69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105ed6b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105ed6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ed70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1105ed72:;
  /* 1105ed72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105ed77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105ed7a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105ed7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ed7f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ed82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1105ed86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105ed88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ed8b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ed8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1105ed92 jmp 0x1105edfb */
  goto L_1105edfb;
L_1105ed94:;
  /* 1105ed94 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ed97 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ed9a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105ed9e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105eda1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105eda4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105eda7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105edaa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105edad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105edb0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1105edb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105edb5 jne 0x1105edd2 */
  if (!C.zf) goto L_1105edd2;
  /* 1105edb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105edba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105edbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105edc2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105edc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105edc7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105edca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105edcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105edcf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1105edd2:;
  /* 1105edd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105edd5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105edd8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105eddd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105eddf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ede2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105ede5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1105edec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105edee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105edf1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1105edf4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1105edfb:;
  /* 1105edfb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105edfe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105ee01 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1105ee03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105ee06 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ee09 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105ee0c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1105ee0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105ee12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1105ee14 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ee17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105ee1a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1105ee1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105ee1f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ee22 jne 0x1105ef89 */
  if (!C.zf) goto L_1105ef89;
  /* 1105ee28 cmp dword ptr [0x11088120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11088120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ee2f je 0x1105ef78 */
  if (C.zf) goto L_1105ef78;
  /* 1105ee35 mov eax, dword ptr [0x11088118] */
  EAX = (r32((uint32_t)(0x11088118)));
  /* 1105ee3a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1105ee3d mov ecx, dword ptr [0x11088120] */
  ECX = (r32((uint32_t)(0x11088120)));
  /* 1105ee43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1105ee46 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ee48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1105ee4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1105ee50 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1105ee55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105ee58 push eax */
  push32((uint32_t)(EAX));
  /* 1105ee59 call dword ptr [0x11089360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089360))), 0x1105ee5fu);
  /* 1105ee5f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105ee64 mov ecx, dword ptr [0x11088118] */
  ECX = (r32((uint32_t)(0x11088118)));
  /* 1105ee6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105ee6c mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105ee71 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1105ee74 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105ee76 mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105ee7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1105ee7f mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105ee84 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105ee87 mov edx, dword ptr [0x11088118] */
  EDX = (r32((uint32_t)(0x11088118)));
  /* 1105ee8d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1105ee98 mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105ee9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105eea0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1105eea3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105eea6 mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105eeab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105eeae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1105eeb1 mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105eeb7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1105eeba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1105eebe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105eec0 jne 0x1105eed6 */
  if (!C.zf) goto L_1105eed6;
  /* 1105eec2 mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105eec8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105eecb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1105eecd mov ecx, dword ptr [0x11088120] */
  ECX = (r32((uint32_t)(0x11088120)));
  /* 1105eed3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1105eed6:;
  /* 1105eed6 mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105eedc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105eee0 jne 0x1105ef78 */
  if (!C.zf) goto L_1105ef78;
  /* 1105eee6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1105eeeb push 0 */
  push32((uint32_t)(0x0u));
  /* 1105eeed mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105eef2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1105eef5 push ecx */
  push32((uint32_t)(ECX));
  /* 1105eef6 call dword ptr [0x11089360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089360))), 0x1105eefcu);
  /* 1105eefc mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105ef02 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1105ef05 push eax */
  push32((uint32_t)(EAX));
  /* 1105ef06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1105ef08 mov ecx, dword ptr [0x1108812c] */
  ECX = (r32((uint32_t)(0x1108812c)));
  /* 1105ef0e push ecx */
  push32((uint32_t)(ECX));
  /* 1105ef0f call dword ptr [0x11089364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089364))), 0x1105ef15u);
  /* 1105ef15 mov edx, dword ptr [0x11088124] */
  EDX = (r32((uint32_t)(0x11088124)));
  /* 1105ef1b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105ef1e mov eax, dword ptr [0x11088128] */
  EAX = (r32((uint32_t)(0x11088128)));
  /* 1105ef23 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ef25 mov ecx, dword ptr [0x11088120] */
  ECX = (r32((uint32_t)(0x11088120)));
  /* 1105ef2b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ef2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ef30 push eax */
  push32((uint32_t)(EAX));
  /* 1105ef31 mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105ef37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ef3a push edx */
  push32((uint32_t)(EDX));
  /* 1105ef3b mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105ef40 push eax */
  push32((uint32_t)(EAX));
  /* 1105ef41 call 0x110624f0 */
  push32(0x1105ef46u); f_110624f0();
  /* 1105ef46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ef49 mov ecx, dword ptr [0x11088124] */
  ECX = (r32((uint32_t)(0x11088124)));
  /* 1105ef4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ef52 mov dword ptr [0x11088124], ecx */
  w32((uint32_t)(0x11088124), (ECX));
  /* 1105ef58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ef5b cmp edx, dword ptr [0x11088120] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11088120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ef61 jbe 0x1105ef6c */
  if ((C.cf||C.zf)) goto L_1105ef6c;
  /* 1105ef63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ef66 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ef69 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1105ef6c:;
  /* 1105ef6c mov ecx, dword ptr [0x11088128] */
  ECX = (r32((uint32_t)(0x11088128)));
  /* 1105ef72 mov dword ptr [0x1108811c], ecx */
  w32((uint32_t)(0x1108811c), (ECX));
L_1105ef78:;
  /* 1105ef78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105ef7b mov dword ptr [0x11088120], edx */
  w32((uint32_t)(0x11088120), (EDX));
  /* 1105ef81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105ef84 mov dword ptr [0x11088118], eax */
  w32((uint32_t)(0x11088118), (EAX));
L_1105ef89:;
  /* 1105ef89 mov esp, ebp */
  ESP = (EBP);
  /* 1105ef8b pop ebp */
  EBP = (pop32());
  /* 1105ef8c ret  */
  ESPCHK(0x1105e9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef90 @ 0x1105ef90 (1334 bytes, 427 insns) */
void f_1105ef90(void) {
  FTRACE(0x1105ef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105ef90 push ebp */
  push32((uint32_t)(EBP));
  /* 1105ef91 mov ebp, esp */
  EBP = (ESP);
  /* 1105ef93 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105ef96 push esi */
  push32((uint32_t)(ESI));
  /* 1105ef97 mov eax, dword ptr [0x11088124] */
  EAX = (r32((uint32_t)(0x11088124)));
  /* 1105ef9c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105ef9f mov ecx, dword ptr [0x11088128] */
  ECX = (r32((uint32_t)(0x11088128)));
  /* 1105efa5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105efa7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1105efaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105efad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105efb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1105efb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1105efb6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105efb9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1105efbc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105efbf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1105efc2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105efc6 jge 0x1105efdc */
  if ((C.sf==C.of)) goto L_1105efdc;
  /* 1105efc8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1105efcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105efce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105efd0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1105efd3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1105efda jmp 0x1105eff1 */
  goto L_1105eff1;
L_1105efdc:;
  /* 1105efdc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1105efe3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105efe6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105efe9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1105efec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105efee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1105eff1:;
  /* 1105eff1 mov ecx, dword ptr [0x1108811c] */
  ECX = (r32((uint32_t)(0x1108811c)));
  /* 1105eff7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1105effa:;
  /* 1105effa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105effd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f000 jae 0x1105f026 */
  if (!C.cf) goto L_1105f026;
  /* 1105f002 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f005 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105f008 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1105f00a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f00d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105f010 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1105f013 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105f015 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105f017 je 0x1105f01b */
  if (C.zf) goto L_1105f01b;
  /* 1105f019 jmp 0x1105f026 */
  goto L_1105f026;
L_1105f01b:;
  /* 1105f01b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f01e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f021 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1105f024 jmp 0x1105effa */
  goto L_1105effa;
L_1105f026:;
  /* 1105f026 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f029 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f02c jne 0x1105f10d */
  if (!C.zf) goto L_1105f10d;
  /* 1105f032 mov eax, dword ptr [0x11088128] */
  EAX = (r32((uint32_t)(0x11088128)));
  /* 1105f037 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1105f03a:;
  /* 1105f03a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f03d cmp ecx, dword ptr [0x1108811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1108811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f043 jae 0x1105f069 */
  if (!C.cf) goto L_1105f069;
  /* 1105f045 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f048 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105f04b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1105f04d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f050 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105f053 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1105f056 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1105f05a je 0x1105f05e */
  if (C.zf) goto L_1105f05e;
  /* 1105f05c jmp 0x1105f069 */
  goto L_1105f069;
L_1105f05e:;
  /* 1105f05e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f061 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f064 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1105f067 jmp 0x1105f03a */
  goto L_1105f03a;
L_1105f069:;
  /* 1105f069 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f06c cmp ecx, dword ptr [0x1108811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1108811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f072 jne 0x1105f10d */
  if (!C.zf) goto L_1105f10d;
L_1105f078:;
  /* 1105f078 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f07b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f07e jae 0x1105f096 */
  if (!C.cf) goto L_1105f096;
  /* 1105f080 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f083 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f087 je 0x1105f08b */
  if (C.zf) goto L_1105f08b;
  /* 1105f089 jmp 0x1105f096 */
  goto L_1105f096;
L_1105f08b:;
  /* 1105f08b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f08e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f091 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1105f094 jmp 0x1105f078 */
  goto L_1105f078;
L_1105f096:;
  /* 1105f096 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f099 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f09c jne 0x1105f0e7 */
  if (!C.zf) goto L_1105f0e7;
  /* 1105f09e mov eax, dword ptr [0x11088128] */
  EAX = (r32((uint32_t)(0x11088128)));
  /* 1105f0a3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1105f0a6:;
  /* 1105f0a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f0a9 cmp ecx, dword ptr [0x1108811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1108811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f0af jae 0x1105f0c7 */
  if (!C.cf) goto L_1105f0c7;
  /* 1105f0b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f0b4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f0b8 je 0x1105f0bc */
  if (C.zf) goto L_1105f0bc;
  /* 1105f0ba jmp 0x1105f0c7 */
  goto L_1105f0c7;
L_1105f0bc:;
  /* 1105f0bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f0bf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f0c2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1105f0c5 jmp 0x1105f0a6 */
  goto L_1105f0a6;
L_1105f0c7:;
  /* 1105f0c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f0ca cmp ecx, dword ptr [0x1108811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1108811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f0d0 jne 0x1105f0e7 */
  if (!C.zf) goto L_1105f0e7;
  /* 1105f0d2 call 0x1105f4d0 */
  push32(0x1105f0d7u); f_1105f4d0();
  /* 1105f0d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1105f0da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f0de jne 0x1105f0e7 */
  if (!C.zf) goto L_1105f0e7;
  /* 1105f0e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f0e2 jmp 0x1105f4c1 */
  goto L_1105f4c1;
L_1105f0e7:;
  /* 1105f0e7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f0ea push edx */
  push32((uint32_t)(EDX));
  /* 1105f0eb call 0x1105f5e0 */
  push32(0x1105f0f0u); f_1105f5e0();
  /* 1105f0f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f0f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f0f6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1105f0f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1105f0fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f0fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105f101 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f104 jne 0x1105f10d */
  if (!C.zf) goto L_1105f10d;
  /* 1105f106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f108 jmp 0x1105f4c1 */
  goto L_1105f4c1;
L_1105f10d:;
  /* 1105f10d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f110 mov dword ptr [0x1108811c], edx */
  w32((uint32_t)(0x1108811c), (EDX));
  /* 1105f116 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f119 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105f11c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1105f11f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f122 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1105f124 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1105f127 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f12b je 0x1105f150 */
  if (C.zf) goto L_1105f150;
  /* 1105f12d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f130 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f133 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105f136 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1105f13a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f13d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f140 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1105f143 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1105f14a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1105f14c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1105f14e jne 0x1105f185 */
  if (!C.zf) goto L_1105f185;
L_1105f150:;
  /* 1105f150 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1105f157:;
  /* 1105f157 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f15a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f15d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105f160 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1105f164 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f167 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f16a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1105f16d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1105f174 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1105f176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105f178 jne 0x1105f185 */
  if (!C.zf) goto L_1105f185;
  /* 1105f17a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f17d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f180 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1105f183 jmp 0x1105f157 */
  goto L_1105f157;
L_1105f185:;
  /* 1105f185 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f188 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105f18e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f191 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1105f198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1105f19b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1105f1a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f1a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f1a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105f1ab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1105f1af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1105f1b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f1b6 jne 0x1105f1d2 */
  if (!C.zf) goto L_1105f1d2;
  /* 1105f1b8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1105f1bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f1c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f1c5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1105f1c8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1105f1cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1105f1d2:;
  /* 1105f1d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f1d6 jl 0x1105f1eb */
  if ((C.sf!=C.of)) goto L_1105f1eb;
  /* 1105f1d8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105f1db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1105f1dd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1105f1e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f1e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f1e6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1105f1e9 jmp 0x1105f1d2 */
  goto L_1105f1d2;
L_1105f1eb:;
  /* 1105f1eb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f1ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f1f1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1105f1f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1105f1f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f1fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1105f1fd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f200 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1105f203 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105f206 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1105f209 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f20c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1105f20f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f213 jle 0x1105f21c */
  if ((C.zf||C.sf!=C.of)) goto L_1105f21c;
  /* 1105f215 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1105f21c:;
  /* 1105f21c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f21f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f222 je 0x1105f440 */
  if (C.zf) goto L_1105f440;
  /* 1105f228 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f22b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f22e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105f231 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f234 jne 0x1105f30a */
  if (!C.zf) goto L_1105f30a;
  /* 1105f23a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f23e jge 0x1105f29f */
  if ((C.sf==C.of)) goto L_1105f29f;
  /* 1105f240 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105f245 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f248 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105f24a not eax */
  EAX = (~(EAX));
  /* 1105f24c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f24f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f252 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1105f256 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105f258 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f25b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f25e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1105f262 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f265 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f268 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1105f26b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105f26e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f271 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f274 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1105f277 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f27a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f27d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105f281 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105f283 jne 0x1105f29d */
  if (!C.zf) goto L_1105f29d;
  /* 1105f285 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105f28a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f28d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105f28f not eax */
  EAX = (~(EAX));
  /* 1105f291 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f294 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1105f296 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105f298 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f29b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1105f29d:;
  /* 1105f29d jmp 0x1105f30a */
  goto L_1105f30a;
L_1105f29f:;
  /* 1105f29f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f2a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f2a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105f2aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105f2ac not edx */
  EDX = (~(EDX));
  /* 1105f2ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f2b1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f2b4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1105f2bb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f2bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f2c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f2c3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1105f2ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f2cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f2d0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105f2d3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105f2d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f2d9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f2dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1105f2df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f2e2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f2e5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105f2e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105f2eb jne 0x1105f30a */
  if (!C.zf) goto L_1105f30a;
  /* 1105f2ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f2f0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f2f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105f2f8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105f2fa not edx */
  EDX = (~(EDX));
  /* 1105f2fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f2ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105f302 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105f304 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f307 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1105f30a:;
  /* 1105f30a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f30d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1105f310 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f313 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105f316 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1105f319 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f31c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f31f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f322 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1105f325 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1105f328 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f32c je 0x1105f440 */
  if (C.zf) goto L_1105f440;
  /* 1105f332 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f335 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f338 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1105f33b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1105f33e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f341 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105f344 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105f347 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1105f34a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f34d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105f350 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1105f353 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105f356 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f359 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1105f35c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f35f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105f362 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f365 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1105f368 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f36b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f36e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105f371 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f374 jne 0x1105f440 */
  if (!C.zf) goto L_1105f440;
  /* 1105f37a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f37e jge 0x1105f3da */
  if ((C.sf==C.of)) goto L_1105f3da;
  /* 1105f380 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f383 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f386 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105f38a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f38d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f390 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1105f393 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105f395 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f398 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f39b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1105f39e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105f3a0 jne 0x1105f3b8 */
  if (!C.zf) goto L_1105f3b8;
  /* 1105f3a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105f3a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f3aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105f3ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f3af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1105f3b1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105f3b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f3b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1105f3b8:;
  /* 1105f3b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105f3bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f3c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105f3c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f3c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f3c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1105f3cc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f3ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f3d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f3d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1105f3d8 jmp 0x1105f440 */
  goto L_1105f440;
L_1105f3da:;
  /* 1105f3da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f3dd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f3e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105f3e4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f3e7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f3ea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1105f3ed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105f3ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f3f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f3f5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1105f3f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105f3fa jne 0x1105f417 */
  if (!C.zf) goto L_1105f417;
  /* 1105f3fc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f3ff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f402 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105f407 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105f409 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f40c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f40f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105f411 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f414 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1105f417:;
  /* 1105f417 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f41a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f41d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105f422 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105f424 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f427 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f42a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1105f431 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f433 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f436 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f439 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1105f440:;
  /* 1105f440 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f444 je 0x1105f45a */
  if (C.zf) goto L_1105f45a;
  /* 1105f446 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105f44c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1105f44e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f451 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f454 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105f457 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1105f45a:;
  /* 1105f45a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f45d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f460 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1105f463 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f466 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f469 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f46c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1105f46e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f471 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f474 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f477 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f47a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1105f47d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f480 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105f482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f485 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1105f487 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f48a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f48d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1105f48f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105f491 jne 0x1105f4b3 */
  if (!C.zf) goto L_1105f4b3;
  /* 1105f493 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f496 cmp eax, dword ptr [0x11088120] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11088120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f49c jne 0x1105f4b3 */
  if (!C.zf) goto L_1105f4b3;
  /* 1105f49e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f4a1 cmp ecx, dword ptr [0x11088118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11088118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f4a7 jne 0x1105f4b3 */
  if (!C.zf) goto L_1105f4b3;
  /* 1105f4a9 mov dword ptr [0x11088120], 0 */
  w32((uint32_t)(0x11088120), (0x0u));
L_1105f4b3:;
  /* 1105f4b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1105f4b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f4b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1105f4bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f4be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1105f4c1:;
  /* 1105f4c1 pop esi */
  ESI = (pop32());
  /* 1105f4c2 mov esp, ebp */
  ESP = (EBP);
  /* 1105f4c4 pop ebp */
  EBP = (pop32());
  /* 1105f4c5 ret  */
  ESPCHK(0x1105ef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x1105f4d0 (271 bytes, 78 insns) */
void f_1105f4d0(void) {
  FTRACE(0x1105f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1105f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1105f4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1105f4d4 mov eax, dword ptr [0x11088124] */
  EAX = (r32((uint32_t)(0x11088124)));
  /* 1105f4d9 cmp eax, dword ptr [0x11088108] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11088108))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f4df jne 0x1105f52b */
  if (!C.zf) goto L_1105f52b;
  /* 1105f4e1 mov ecx, dword ptr [0x11088108] */
  ECX = (r32((uint32_t)(0x11088108)));
  /* 1105f4e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f4ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105f4ed push ecx */
  push32((uint32_t)(ECX));
  /* 1105f4ee mov edx, dword ptr [0x11088128] */
  EDX = (r32((uint32_t)(0x11088128)));
  /* 1105f4f4 push edx */
  push32((uint32_t)(EDX));
  /* 1105f4f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1105f4f7 mov eax, dword ptr [0x1108812c] */
  EAX = (r32((uint32_t)(0x1108812c)));
  /* 1105f4fc push eax */
  push32((uint32_t)(EAX));
  /* 1105f4fd call dword ptr [0x11089340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089340))), 0x1105f503u);
  /* 1105f503 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1105f506 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f50a jne 0x1105f513 */
  if (!C.zf) goto L_1105f513;
  /* 1105f50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f50e jmp 0x1105f5db */
  goto L_1105f5db;
L_1105f513:;
  /* 1105f513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f516 mov dword ptr [0x11088128], ecx */
  w32((uint32_t)(0x11088128), (ECX));
  /* 1105f51c mov edx, dword ptr [0x11088108] */
  EDX = (r32((uint32_t)(0x11088108)));
  /* 1105f522 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f525 mov dword ptr [0x11088108], edx */
  w32((uint32_t)(0x11088108), (EDX));
L_1105f52b:;
  /* 1105f52b mov eax, dword ptr [0x11088124] */
  EAX = (r32((uint32_t)(0x11088124)));
  /* 1105f530 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105f533 mov ecx, dword ptr [0x11088128] */
  ECX = (r32((uint32_t)(0x11088128)));
  /* 1105f539 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f53b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1105f53e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1105f543 push 8 */
  push32((uint32_t)(0x8u));
  /* 1105f545 mov edx, dword ptr [0x1108812c] */
  EDX = (r32((uint32_t)(0x1108812c)));
  /* 1105f54b push edx */
  push32((uint32_t)(EDX));
  /* 1105f54c call dword ptr [0x11089344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089344))), 0x1105f552u);
  /* 1105f552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f555 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1105f558 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f55b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f55f jne 0x1105f565 */
  if (!C.zf) goto L_1105f565;
  /* 1105f561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f563 jmp 0x1105f5db */
  goto L_1105f5db;
L_1105f565:;
  /* 1105f565 push 4 */
  push32((uint32_t)(0x4u));
  /* 1105f567 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1105f56c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1105f571 push 0 */
  push32((uint32_t)(0x0u));
  /* 1105f573 call dword ptr [0x1108933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108933c))), 0x1105f579u);
  /* 1105f579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f57c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1105f57f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f582 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f586 jne 0x1105f5a2 */
  if (!C.zf) goto L_1105f5a2;
  /* 1105f588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f58b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105f58e push ecx */
  push32((uint32_t)(ECX));
  /* 1105f58f push 0 */
  push32((uint32_t)(0x0u));
  /* 1105f591 mov edx, dword ptr [0x1108812c] */
  EDX = (r32((uint32_t)(0x1108812c)));
  /* 1105f597 push edx */
  push32((uint32_t)(EDX));
  /* 1105f598 call dword ptr [0x11089364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089364))), 0x1105f59eu);
  /* 1105f59e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f5a0 jmp 0x1105f5db */
  goto L_1105f5db;
L_1105f5a2:;
  /* 1105f5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f5a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1105f5ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f5ae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1105f5b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f5b8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1105f5bf mov eax, dword ptr [0x11088124] */
  EAX = (r32((uint32_t)(0x11088124)));
  /* 1105f5c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f5c7 mov dword ptr [0x11088124], eax */
  w32((uint32_t)(0x11088124), (EAX));
  /* 1105f5cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f5cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1105f5d2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1105f5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1105f5db:;
  /* 1105f5db mov esp, ebp */
  ESP = (EBP);
  /* 1105f5dd pop ebp */
  EBP = (pop32());
  /* 1105f5de ret  */
  ESPCHK(0x1105f4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x1105f5e0 (494 bytes, 149 insns) */
void f_1105f5e0(void) {
  FTRACE(0x1105f5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105f5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1105f5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1105f5e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f5e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f5e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105f5ec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1105f5ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f5f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1105f5f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1105f5f8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1105f5ff:;
  /* 1105f5ff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f603 jl 0x1105f618 */
  if ((C.sf!=C.of)) goto L_1105f618;
  /* 1105f605 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105f608 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1105f60a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1105f60d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f610 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f613 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1105f616 jmp 0x1105f5ff */
  goto L_1105f5ff;
L_1105f618:;
  /* 1105f618 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f61b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105f621 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f624 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1105f62b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1105f62e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1105f635 jmp 0x1105f640 */
  goto L_1105f640;
L_1105f637:;
  /* 1105f637 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f63a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f63d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1105f640:;
  /* 1105f640 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f644 jge 0x1105f666 */
  if ((C.sf==C.of)) goto L_1105f666;
  /* 1105f646 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f649 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105f64c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1105f64f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1105f652 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f655 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f658 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1105f65b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f65e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f661 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1105f664 jmp 0x1105f637 */
  goto L_1105f637;
L_1105f666:;
  /* 1105f666 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f669 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1105f66c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f66f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1105f672 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f674 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1105f677 push 4 */
  push32((uint32_t)(0x4u));
  /* 1105f679 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1105f67e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1105f683 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f686 push edx */
  push32((uint32_t)(EDX));
  /* 1105f687 call dword ptr [0x1108933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108933c))), 0x1105f68du);
  /* 1105f68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1105f68f jne 0x1105f699 */
  if (!C.zf) goto L_1105f699;
  /* 1105f691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1105f694 jmp 0x1105f7ca */
  goto L_1105f7ca;
L_1105f699:;
  /* 1105f699 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f69c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f6a1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1105f6a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f6a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1105f6aa jmp 0x1105f6b8 */
  goto L_1105f6b8;
L_1105f6ac:;
  /* 1105f6ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f6af add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f6b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1105f6b8:;
  /* 1105f6b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f6bb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f6be ja 0x1105f71d */
  if ((!C.cf&&!C.zf)) goto L_1105f71d;
  /* 1105f6c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f6c3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1105f6ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f6cd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1105f6d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f6da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f6dd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1105f6e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f6e3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1105f6e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f6ec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f6f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f6f5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1105f6f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f6fb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f701 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f704 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1105f707 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f70a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f70f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1105f712 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105f715 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1105f71b jmp 0x1105f6ac */
  goto L_1105f6ac;
L_1105f71d:;
  /* 1105f71d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105f720 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f726 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1105f729 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f72c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f72f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f732 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1105f735 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f738 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105f73b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1105f73e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f741 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f744 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1105f747 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105f74a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f74d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f750 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1105f753 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f756 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1105f759 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1105f75c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f75f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f762 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1105f765 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f768 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f76b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1105f773 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f776 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f779 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1105f784 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f787 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1105f78b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f78e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1105f791 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105f794 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f797 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1105f79a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105f79c jne 0x1105f7ad */
  if (!C.zf) goto L_1105f7ad;
  /* 1105f79e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f7a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f7a4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1105f7a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f7aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1105f7ad:;
  /* 1105f7ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105f7b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f7b5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105f7b7 not edx */
  EDX = (~(EDX));
  /* 1105f7b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f7bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1105f7bf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105f7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f7c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1105f7c7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1105f7ca:;
  /* 1105f7ca mov esp, ebp */
  ESP = (EBP);
  /* 1105f7cc pop ebp */
  EBP = (pop32());
  /* 1105f7cd ret  */
  ESPCHK(0x1105f5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x1105f7d0 (1515 bytes, 489 insns) */
void f_1105f7d0(void) {
  FTRACE(0x1105f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1105f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1105f7d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f7d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1105f7d9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f7dc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1105f7de mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1105f7e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f7e4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1105f7e7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1105f7ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f7ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1105f7f0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f7f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1105f7f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105f7f9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1105f7fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1105f7ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f802 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105f808 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f80b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1105f812 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1105f815 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1105f818 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f81b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1105f81e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f821 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1105f823 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f826 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1105f829 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f82c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f82f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1105f832 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f835 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1105f837 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1105f83a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105f83d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f840 jle 0x1105faf6 */
  if ((C.zf||C.sf!=C.of)) goto L_1105faf6;
  /* 1105f846 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f849 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1105f84c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105f84e jne 0x1105f85b */
  if (!C.zf) goto L_1105f85b;
  /* 1105f850 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f853 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f856 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f859 jle 0x1105f862 */
  if ((C.zf||C.sf!=C.of)) goto L_1105f862;
L_1105f85b:;
  /* 1105f85b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f85d jmp 0x1105fdb7 */
  goto L_1105fdb7;
L_1105f862:;
  /* 1105f862 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f865 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1105f868 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f86b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1105f86e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f872 jbe 0x1105f87b */
  if ((C.cf||C.zf)) goto L_1105f87b;
  /* 1105f874 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1105f87b:;
  /* 1105f87b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f87e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f881 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f884 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f887 jne 0x1105f95d */
  if (!C.zf) goto L_1105f95d;
  /* 1105f88d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f891 jae 0x1105f8f2 */
  if (!C.cf) goto L_1105f8f2;
  /* 1105f893 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105f898 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f89b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105f89d not edx */
  EDX = (~(EDX));
  /* 1105f89f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f8a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f8a5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1105f8a9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105f8ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f8ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f8b1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1105f8b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f8b8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f8bb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105f8be sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105f8c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f8c4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f8c7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1105f8ca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f8cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f8d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105f8d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105f8d6 jne 0x1105f8f0 */
  if (!C.zf) goto L_1105f8f0;
  /* 1105f8d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105f8dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f8e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105f8e2 not edx */
  EDX = (~(EDX));
  /* 1105f8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f8e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105f8e9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105f8eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f8ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1105f8f0:;
  /* 1105f8f0 jmp 0x1105f95d */
  goto L_1105f95d;
L_1105f8f2:;
  /* 1105f8f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f8f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f8f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105f8fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105f8ff not eax */
  EAX = (~(EAX));
  /* 1105f901 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f904 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f907 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1105f90e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105f910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105f913 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f916 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1105f91d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f920 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f923 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1105f926 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105f929 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f92c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f92f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1105f932 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105f935 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f938 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105f93c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105f93e jne 0x1105f95d */
  if (!C.zf) goto L_1105f95d;
  /* 1105f940 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f943 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f946 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105f94b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105f94d not eax */
  EAX = (~(EAX));
  /* 1105f94f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f952 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f955 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105f957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105f95a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1105f95d:;
  /* 1105f95d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f960 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1105f963 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f966 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105f969 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1105f96c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f96f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105f972 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f975 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1105f978 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1105f97b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105f97e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f981 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f984 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1105f987 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f98b jle 0x1105fad7 */
  if ((C.zf||C.sf!=C.of)) goto L_1105fad7;
  /* 1105f991 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105f994 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105f997 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1105f99a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105f99d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1105f9a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105f9a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1105f9a6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f9aa jbe 0x1105f9b3 */
  if ((C.cf||C.zf)) goto L_1105f9b3;
  /* 1105f9ac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1105f9b3:;
  /* 1105f9b3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105f9b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105f9b9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1105f9bc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1105f9bf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f9c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f9c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f9c8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1105f9cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f9ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f9d1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1105f9d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105f9d7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f9da mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1105f9dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f9e0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f9e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f9e6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1105f9e9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f9ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105f9ef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105f9f2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f9f5 jne 0x1105fac3 */
  if (!C.zf) goto L_1105fac3;
  /* 1105f9fb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105f9ff jae 0x1105fa5c */
  if (!C.cf) goto L_1105fa5c;
  /* 1105fa01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa04 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fa07 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105fa0b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa0e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fa11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105fa14 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105fa17 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa1a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fa1d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1105fa20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105fa22 jne 0x1105fa3a */
  if (!C.zf) goto L_1105fa3a;
  /* 1105fa24 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105fa29 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fa2c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105fa2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fa31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105fa33 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105fa35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fa38 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1105fa3a:;
  /* 1105fa3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105fa3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fa42 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105fa44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fa47 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa4a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1105fa4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105fa50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fa53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa56 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1105fa5a jmp 0x1105fac3 */
  goto L_1105fac3;
L_1105fa5c:;
  /* 1105fa5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa5f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fa62 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105fa66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa69 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fa6c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105fa6f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105fa72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fa75 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fa78 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1105fa7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105fa7d jne 0x1105fa9a */
  if (!C.zf) goto L_1105fa9a;
  /* 1105fa7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fa82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fa85 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105fa8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105fa8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fa8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105fa92 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105fa94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fa97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1105fa9a:;
  /* 1105fa9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fa9d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105faa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105faa5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105faa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105faaa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105faad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1105fab4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105fab6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fab9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fabc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1105fac3:;
  /* 1105fac3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105fac6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105fac9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1105facb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105face add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fad1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105fad4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1105fad7:;
  /* 1105fad7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105fada add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fadd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fae0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1105fae2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105fae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fae8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105faeb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105faee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1105faf1 jmp 0x1105fdb2 */
  goto L_1105fdb2;
L_1105faf6:;
  /* 1105faf6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105faf9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fafc jge 0x1105fdb2 */
  if ((C.sf==C.of)) goto L_1105fdb2;
  /* 1105fb02 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105fb05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fb08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fb0b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1105fb0d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1105fb10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fb13 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fb16 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fb19 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1105fb1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fb1f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fb22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1105fb25 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105fb28 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fb2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1105fb2e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105fb31 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1105fb34 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fb37 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1105fb3a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fb3e jbe 0x1105fb47 */
  if ((C.cf||C.zf)) goto L_1105fb47;
  /* 1105fb40 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1105fb47:;
  /* 1105fb47 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105fb4a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1105fb4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105fb4f jne 0x1105fc90 */
  if (!C.zf) goto L_1105fc90;
  /* 1105fb55 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1105fb58 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1105fb5b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fb5e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1105fb61 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fb65 jbe 0x1105fb6e */
  if ((C.cf||C.zf)) goto L_1105fb6e;
  /* 1105fb67 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1105fb6e:;
  /* 1105fb6e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105fb71 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105fb74 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105fb77 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fb7a jne 0x1105fc50 */
  if (!C.zf) goto L_1105fc50;
  /* 1105fb80 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fb84 jae 0x1105fbe5 */
  if (!C.cf) goto L_1105fbe5;
  /* 1105fb86 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105fb8b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fb8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105fb90 not edx */
  EDX = (~(EDX));
  /* 1105fb92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fb95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fb98 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1105fb9c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105fb9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fba1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fba4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1105fba8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fbab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fbae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1105fbb1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105fbb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fbb7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fbba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1105fbbd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fbc0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fbc3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105fbc7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105fbc9 jne 0x1105fbe3 */
  if (!C.zf) goto L_1105fbe3;
  /* 1105fbcb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105fbd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fbd3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105fbd5 not edx */
  EDX = (~(EDX));
  /* 1105fbd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fbda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1105fbdc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105fbde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fbe1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1105fbe3:;
  /* 1105fbe3 jmp 0x1105fc50 */
  goto L_1105fc50;
L_1105fbe5:;
  /* 1105fbe5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fbe8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fbeb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105fbf0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105fbf2 not eax */
  EAX = (~(EAX));
  /* 1105fbf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fbf7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fbfa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1105fc01 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1105fc03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fc06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fc09 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1105fc10 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fc13 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fc16 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1105fc19 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105fc1c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fc1f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fc22 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1105fc25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fc28 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fc2b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1105fc2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1105fc31 jne 0x1105fc50 */
  if (!C.zf) goto L_1105fc50;
  /* 1105fc33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1105fc36 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fc39 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105fc3e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105fc40 not eax */
  EAX = (~(EAX));
  /* 1105fc42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fc45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105fc48 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105fc4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fc4d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1105fc50:;
  /* 1105fc50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105fc53 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1105fc56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105fc59 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105fc5c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1105fc5f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105fc62 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105fc65 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1105fc68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1105fc6b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1105fc6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105fc71 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fc74 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1105fc77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105fc7a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1105fc7d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fc80 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1105fc83 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fc87 jbe 0x1105fc90 */
  if ((C.cf||C.zf)) goto L_1105fc90;
  /* 1105fc89 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1105fc90:;
  /* 1105fc90 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105fc93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1105fc96 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1105fc99 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1105fc9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fc9f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105fca2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105fca5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1105fca8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fcab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105fcae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1105fcb1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1105fcb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fcb7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1105fcba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fcbd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105fcc0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fcc3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1105fcc6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fcc9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fccc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1105fccf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fcd2 jne 0x1105fd9e */
  if (!C.zf) goto L_1105fd9e;
  /* 1105fcd8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fcdc jae 0x1105fd38 */
  if (!C.cf) goto L_1105fd38;
  /* 1105fcde mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fce1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fce4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105fce8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fceb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fcee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1105fcf1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105fcf3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fcf6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fcf9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1105fcfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105fcfe jne 0x1105fd16 */
  if (!C.zf) goto L_1105fd16;
  /* 1105fd00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105fd05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105fd08 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105fd0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fd0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1105fd0f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105fd11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fd14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1105fd16:;
  /* 1105fd16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105fd1b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105fd1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105fd20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fd23 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fd26 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1105fd2a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105fd2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fd2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fd32 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1105fd36 jmp 0x1105fd9e */
  goto L_1105fd9e;
L_1105fd38:;
  /* 1105fd38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fd3b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fd3e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1105fd42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fd45 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fd48 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1105fd4b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1105fd4d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fd50 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fd53 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1105fd56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105fd58 jne 0x1105fd75 */
  if (!C.zf) goto L_1105fd75;
  /* 1105fd5a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105fd5d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fd60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1105fd65 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1105fd67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fd6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1105fd6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1105fd6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1105fd72 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1105fd75:;
  /* 1105fd75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1105fd78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fd7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105fd80 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105fd82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fd85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fd88 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1105fd8f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1105fd91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fd94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1105fd97 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1105fd9e:;
  /* 1105fd9e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fda1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105fda4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1105fda6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1105fda9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fdac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1105fdaf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1105fdb2:;
  /* 1105fdb2 mov eax, 1 */
  EAX = (0x1u);
L_1105fdb7:;
  /* 1105fdb7 mov esp, ebp */
  ESP = (EBP);
  /* 1105fdb9 pop ebp */
  EBP = (pop32());
  /* 1105fdba ret  */
  ESPCHK(0x1105f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdc0 @ 0x1105fdc0 (304 bytes, 79 insns) */
void f_1105fdc0(void) {
  FTRACE(0x1105fdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105fdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1105fdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1105fdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1105fdc4 cmp dword ptr [0x11088120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11088120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fdcb je 0x1105feec */
  if (C.zf) goto L_1105feec;
  /* 1105fdd1 mov eax, dword ptr [0x11088118] */
  EAX = (r32((uint32_t)(0x11088118)));
  /* 1105fdd6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1105fdd9 mov ecx, dword ptr [0x11088120] */
  ECX = (r32((uint32_t)(0x11088120)));
  /* 1105fddf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1105fde2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fde4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1105fde7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1105fdec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1105fdf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1105fdf4 push eax */
  push32((uint32_t)(EAX));
  /* 1105fdf5 call dword ptr [0x11089360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089360))), 0x1105fdfbu);
  /* 1105fdfb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1105fe00 mov ecx, dword ptr [0x11088118] */
  ECX = (r32((uint32_t)(0x11088118)));
  /* 1105fe06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1105fe08 mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105fe0d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1105fe10 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1105fe12 mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105fe18 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1105fe1b mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105fe20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105fe23 mov edx, dword ptr [0x11088118] */
  EDX = (r32((uint32_t)(0x11088118)));
  /* 1105fe29 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1105fe34 mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105fe39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105fe3c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1105fe3f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1105fe42 mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105fe47 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105fe4a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1105fe4d mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105fe53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1105fe56 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1105fe5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1105fe5c jne 0x1105fe72 */
  if (!C.zf) goto L_1105fe72;
  /* 1105fe5e mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105fe64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1105fe67 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1105fe69 mov ecx, dword ptr [0x11088120] */
  ECX = (r32((uint32_t)(0x11088120)));
  /* 1105fe6f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1105fe72:;
  /* 1105fe72 mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105fe78 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fe7c jne 0x1105fee2 */
  if (!C.zf) goto L_1105fee2;
  /* 1105fe7e cmp dword ptr [0x11088124], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11088124))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105fe85 jle 0x1105fee2 */
  if ((C.zf||C.sf!=C.of)) goto L_1105fee2;
  /* 1105fe87 mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105fe8c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1105fe8f push ecx */
  push32((uint32_t)(ECX));
  /* 1105fe90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1105fe92 mov edx, dword ptr [0x1108812c] */
  EDX = (r32((uint32_t)(0x1108812c)));
  /* 1105fe98 push edx */
  push32((uint32_t)(EDX));
  /* 1105fe99 call dword ptr [0x11089364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089364))), 0x1105fe9fu);
  /* 1105fe9f mov eax, dword ptr [0x11088124] */
  EAX = (r32((uint32_t)(0x11088124)));
  /* 1105fea4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105fea7 mov ecx, dword ptr [0x11088128] */
  ECX = (r32((uint32_t)(0x11088128)));
  /* 1105fead add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105feaf mov edx, dword ptr [0x11088120] */
  EDX = (r32((uint32_t)(0x11088120)));
  /* 1105feb5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105feb8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105feba push ecx */
  push32((uint32_t)(ECX));
  /* 1105febb mov eax, dword ptr [0x11088120] */
  EAX = (r32((uint32_t)(0x11088120)));
  /* 1105fec0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fec3 push eax */
  push32((uint32_t)(EAX));
  /* 1105fec4 mov ecx, dword ptr [0x11088120] */
  ECX = (r32((uint32_t)(0x11088120)));
  /* 1105feca push ecx */
  push32((uint32_t)(ECX));
  /* 1105fecb call 0x110624f0 */
  push32(0x1105fed0u); f_110624f0();
  /* 1105fed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1105fed3 mov edx, dword ptr [0x11088124] */
  EDX = (r32((uint32_t)(0x11088124)));
  /* 1105fed9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fedc mov dword ptr [0x11088124], edx */
  w32((uint32_t)(0x11088124), (EDX));
L_1105fee2:;
  /* 1105fee2 mov dword ptr [0x11088120], 0 */
  w32((uint32_t)(0x11088120), (0x0u));
L_1105feec:;
  /* 1105feec mov esp, ebp */
  ESP = (EBP);
  /* 1105feee pop ebp */
  EBP = (pop32());
  /* 1105feef ret  */
  ESPCHK(0x1105fdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fef0 @ 0x1105fef0 (1565 bytes, 343 insns) */
void f_1105fef0(void) {
  FTRACE(0x1105fef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1105fef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1105fef1 mov ebp, esp */
  EBP = (ESP);
  /* 1105fef3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1105fef9 mov eax, dword ptr [0x11088124] */
  EAX = (r32((uint32_t)(0x11088124)));
  /* 1105fefe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1105ff01 push eax */
  push32((uint32_t)(EAX));
  /* 1105ff02 mov ecx, dword ptr [0x11088128] */
  ECX = (r32((uint32_t)(0x11088128)));
  /* 1105ff08 push ecx */
  push32((uint32_t)(ECX));
  /* 1105ff09 call dword ptr [0x1108938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108938c))), 0x1105ff0fu);
  /* 1105ff0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1105ff11 je 0x1105ff1b */
  if (C.zf) goto L_1105ff1b;
  /* 1105ff13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1105ff16 jmp 0x11060509 */
  goto L_11060509;
L_1105ff1b:;
  /* 1105ff1b mov edx, dword ptr [0x11088128] */
  EDX = (r32((uint32_t)(0x11088128)));
  /* 1105ff21 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1105ff27 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1105ff31 jmp 0x1105ff42 */
  goto L_1105ff42;
L_1105ff33:;
  /* 1105ff33 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1105ff39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ff3c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1105ff42:;
  /* 1105ff42 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1105ff48 cmp ecx, dword ptr [0x11088124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11088124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ff4e jge 0x11060507 */
  if ((C.sf==C.of)) goto L_11060507;
  /* 1105ff54 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1105ff5a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1105ff5d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1105ff63 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1105ff68 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1105ff6e push ecx */
  push32((uint32_t)(ECX));
  /* 1105ff6f call dword ptr [0x1108938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108938c))), 0x1105ff75u);
  /* 1105ff75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1105ff77 je 0x1105ff83 */
  if (C.zf) goto L_1105ff83;
  /* 1105ff79 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1105ff7e jmp 0x11060509 */
  goto L_11060509;
L_1105ff83:;
  /* 1105ff83 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1105ff89 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1105ff8c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1105ff92 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1105ff98 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ff9e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1105ffa1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1105ffa7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1105ffaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1105ffad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1105ffb7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1105ffc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1105ffc8 jmp 0x1105ffd3 */
  goto L_1105ffd3;
L_1105ffca:;
  /* 1105ffca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1105ffcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1105ffd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1105ffd3:;
  /* 1105ffd3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1105ffd7 jge 0x110604cb */
  if ((C.sf==C.of)) goto L_110604cb;
  /* 1105ffdd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1105ffe7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1105fff1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1105fffb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11060005 jmp 0x11060016 */
  goto L_11060016;
L_11060007:;
  /* 11060007 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1106000d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060010 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11060016:;
  /* 11060016 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106001d jge 0x11060032 */
  if ((C.sf==C.of)) goto L_11060032;
  /* 1106001f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11060025 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11060030 jmp 0x11060007 */
  goto L_11060007;
L_11060032:;
  /* 11060032 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060036 jl 0x1106046d */
  if ((C.sf!=C.of)) goto L_1106046d;
  /* 1106003c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11060041 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11060047 push ecx */
  push32((uint32_t)(ECX));
  /* 11060048 call dword ptr [0x1108938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108938c))), 0x1106004eu);
  /* 1106004e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11060050 je 0x1106005c */
  if (C.zf) goto L_1106005c;
  /* 11060052 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11060057 jmp 0x11060509 */
  goto L_11060509;
L_1106005c:;
  /* 1106005c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11060062 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11060065 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1106006f jmp 0x11060080 */
  goto L_11060080;
L_11060071:;
  /* 11060071 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11060077 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106007a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11060080:;
  /* 11060080 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060087 jge 0x11060204 */
  if ((C.sf==C.of)) goto L_11060204;
  /* 1106008d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11060090 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060093 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11060099 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1106009f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110600a5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 110600ab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 110600b1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110600b5 jne 0x110600c2 */
  if (!C.zf) goto L_110600c2;
  /* 110600b7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 110600bd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110600c0 je 0x110600cc */
  if (C.zf) goto L_110600cc;
L_110600c2:;
  /* 110600c2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 110600c7 jmp 0x11060509 */
  goto L_11060509;
L_110600cc:;
  /* 110600cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 110600d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110600d4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 110600da mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 110600e0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 110600e6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 110600ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 110600ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110600f1 je 0x11060129 */
  if (C.zf) goto L_11060129;
  /* 110600f3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 110600f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110600fc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11060102 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106010c jle 0x11060118 */
  if ((C.zf||C.sf!=C.of)) goto L_11060118;
  /* 1106010e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11060113 jmp 0x11060509 */
  goto L_11060509;
L_11060118:;
  /* 11060118 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1106011e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060121 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11060127 jmp 0x1106016b */
  goto L_1106016b;
L_11060129:;
  /* 11060129 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1106012f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11060132 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060135 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1106013b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060142 jle 0x1106014e */
  if ((C.zf||C.sf!=C.of)) goto L_1106014e;
  /* 11060144 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1106014e:;
  /* 1106014e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11060154 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1106015b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106015e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11060164 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1106016b:;
  /* 1106016b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060172 jl 0x1106018d */
  if ((C.sf!=C.of)) goto L_1106018d;
  /* 11060174 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1106017a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1106017d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106017f jne 0x1106018d */
  if (!C.zf) goto L_1106018d;
  /* 11060181 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106018b jle 0x11060197 */
  if ((C.zf||C.sf!=C.of)) goto L_11060197;
L_1106018d:;
  /* 1106018d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11060192 jmp 0x11060509 */
  goto L_11060509;
L_11060197:;
  /* 11060197 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1106019d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110601a3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 110601a6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110601ac je 0x110601b8 */
  if (C.zf) goto L_110601b8;
  /* 110601ae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 110601b3 jmp 0x11060509 */
  goto L_11060509;
L_110601b8:;
  /* 110601b8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 110601be add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110601c4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 110601ca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 110601d0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110601d6 jb 0x110600cc */
  if (C.cf) goto L_110600cc;
  /* 110601dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 110601e2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110601e8 je 0x110601f4 */
  if (C.zf) goto L_110601f4;
  /* 110601ea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 110601ef jmp 0x11060509 */
  goto L_11060509;
L_110601f4:;
  /* 110601f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110601f7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110601fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110601ff jmp 0x11060071 */
  goto L_11060071;
L_11060204:;
  /* 11060204 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11060207 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11060209 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106020f je 0x1106021b */
  if (C.zf) goto L_1106021b;
  /* 11060211 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11060216 jmp 0x11060509 */
  goto L_11060509;
L_1106021b:;
  /* 1106021b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106021e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11060224 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1106022b jmp 0x11060236 */
  goto L_11060236;
L_1106022d:;
  /* 1106022d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11060230 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060233 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11060236:;
  /* 11060236 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106023a jge 0x1106046d */
  if ((C.sf==C.of)) goto L_1106046d;
  /* 11060240 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1106024a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11060250 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11060256:;
  /* 11060256 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1106025c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1106025f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11060265 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1106026b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060271 je 0x1106039a */
  if (C.zf) goto L_1106039a;
  /* 11060277 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106027a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11060280 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060287 je 0x1106039a */
  if (C.zf) goto L_1106039a;
  /* 1106028d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11060293 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060299 jb 0x110602ae */
  if (C.cf) goto L_110602ae;
  /* 1106029b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 110602a1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110602a6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110602ac jb 0x110602b8 */
  if (C.cf) goto L_110602b8;
L_110602ae:;
  /* 110602ae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 110602b3 jmp 0x11060509 */
  goto L_11060509;
L_110602b8:;
  /* 110602b8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 110602be and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 110602c4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 110602ca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 110602d0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110602d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 110602d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110602d9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110602de mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_110602e4:;
  /* 110602e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110602e7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110602ed je 0x1106030e */
  if (C.zf) goto L_1106030e;
  /* 110602ef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110602f2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110602f8 jne 0x110602fc */
  if (!C.zf) goto L_110602fc;
  /* 110602fa jmp 0x1106030e */
  goto L_1106030e;
L_110602fc:;
  /* 110602fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110602ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11060301 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11060304 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11060307 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060309 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1106030c jmp 0x110602e4 */
  goto L_110602e4;
L_1106030e:;
  /* 1106030e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11060311 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060317 jne 0x11060323 */
  if (!C.zf) goto L_11060323;
  /* 11060319 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1106031e jmp 0x11060509 */
  goto L_11060509;
L_11060323:;
  /* 11060323 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11060329 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106032b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1106032e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060331 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11060337 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106033e jle 0x1106034a */
  if ((C.zf||C.sf!=C.of)) goto L_1106034a;
  /* 11060340 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1106034a:;
  /* 1106034a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11060350 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060353 je 0x1106035f */
  if (C.zf) goto L_1106035f;
  /* 11060355 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1106035a jmp 0x11060509 */
  goto L_11060509;
L_1106035f:;
  /* 1106035f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11060365 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11060368 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106036e je 0x1106037a */
  if (C.zf) goto L_1106037a;
  /* 11060370 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11060375 jmp 0x11060509 */
  goto L_11060509;
L_1106037a:;
  /* 1106037a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11060380 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11060386 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1106038c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106038f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11060395 jmp 0x11060256 */
  goto L_11060256;
L_1106039a:;
  /* 1106039a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110603a1 je 0x11060411 */
  if (C.zf) goto L_11060411;
  /* 110603a3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110603a7 jge 0x110603db */
  if ((C.sf==C.of)) goto L_110603db;
  /* 110603a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110603ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110603b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110603b3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 110603b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110603bb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 110603c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110603c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110603c9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110603cb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 110603d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110603d3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 110603d9 jmp 0x11060411 */
  goto L_11060411;
L_110603db:;
  /* 110603db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110603de sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110603e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110603e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110603e8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 110603ee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110603f0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 110603f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110603f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110603fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11060401 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11060403 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11060409 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1106040b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11060411:;
  /* 11060411 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11060417 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1106041a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060420 jne 0x11060434 */
  if (!C.zf) goto L_11060434;
  /* 11060422 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11060425 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1106042b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060432 je 0x1106043e */
  if (C.zf) goto L_1106043e;
L_11060434:;
  /* 11060434 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11060439 jmp 0x11060509 */
  goto L_11060509;
L_1106043e:;
  /* 1106043e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11060444 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11060447 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106044d je 0x11060459 */
  if (C.zf) goto L_11060459;
  /* 1106044f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11060454 jmp 0x11060509 */
  goto L_11060509;
L_11060459:;
  /* 11060459 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1106045f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060462 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11060468 jmp 0x1106022d */
  goto L_1106022d;
L_1106046d:;
  /* 1106046d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11060470 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11060476 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1106047c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060480 jne 0x1106049a */
  if (!C.zf) goto L_1106049a;
  /* 11060482 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11060485 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1106048b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11060491 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060498 je 0x110604a1 */
  if (C.zf) goto L_110604a1;
L_1106049a:;
  /* 1106049a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1106049f jmp 0x11060509 */
  goto L_11060509;
L_110604a1:;
  /* 110604a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 110604a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110604ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 110604b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110604b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110604bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110604be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110604c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 110604c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110604c6 jmp 0x1105ffca */
  goto L_1105ffca;
L_110604cb:;
  /* 110604cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 110604d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 110604d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110604d9 jne 0x110604ec */
  if (!C.zf) goto L_110604ec;
  /* 110604db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 110604e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 110604e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110604ea je 0x110604f3 */
  if (C.zf) goto L_110604f3;
L_110604ec:;
  /* 110604ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 110604f1 jmp 0x11060509 */
  goto L_11060509;
L_110604f3:;
  /* 110604f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 110604f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110604fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11060502 jmp 0x1105ff33 */
  goto L_1105ff33;
L_11060507:;
  /* 11060507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11060509:;
  /* 11060509 mov esp, ebp */
  ESP = (EBP);
  /* 1106050b pop ebp */
  EBP = (pop32());
  /* 1106050c ret  */
  ESPCHK(0x1105fef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010510 @ 0x11060510 (250 bytes, 92 insns) */
void f_11060510(void) {
  FTRACE(0x11060510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060510 push ebp */
  push32((uint32_t)(EBP));
  /* 11060511 mov ebp, esp */
  EBP = (ESP);
  /* 11060513 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060516 push ebx */
  push32((uint32_t)(EBX));
  /* 11060517 push esi */
  push32((uint32_t)(ESI));
  /* 11060518 push edi */
  push32((uint32_t)(EDI));
  /* 11060519 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1106051c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1106051f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11060522 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11060525:;
  /* 11060525 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060529 jne 0x11060549 */
  if (!C.zf) goto L_11060549;
  /* 1106052b push 0x110822a8 */
  push32((uint32_t)(0x110822a8u));
  /* 11060530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11060532 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11060534 push 0x1108229c */
  push32((uint32_t)(0x1108229cu));
  /* 11060539 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106053b call 0x110596c0 */
  push32(0x11060540u); f_110596c0();
  /* 11060540 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060543 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060546 jne 0x11060549 */
  if (!C.zf) goto L_11060549;
  /* 11060548 int3  */
  x86_unimpl("int3 @ 0x11060548");
L_11060549:;
  /* 11060549 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106054b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106054d jne 0x11060525 */
  if (!C.zf) goto L_11060525;
L_1106054f:;
  /* 1106054f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060553 jne 0x11060573 */
  if (!C.zf) goto L_11060573;
  /* 11060555 push 0x1108228c */
  push32((uint32_t)(0x1108228cu));
  /* 1106055a push 0 */
  push32((uint32_t)(0x0u));
  /* 1106055c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1106055e push 0x1108229c */
  push32((uint32_t)(0x1108229cu));
  /* 11060563 push 2 */
  push32((uint32_t)(0x2u));
  /* 11060565 call 0x110596c0 */
  push32(0x1106056au); f_110596c0();
  /* 1106056a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106056d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060570 jne 0x11060573 */
  if (!C.zf) goto L_11060573;
  /* 11060572 int3  */
  x86_unimpl("int3 @ 0x11060572");
L_11060573:;
  /* 11060573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11060575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11060577 jne 0x1106054f */
  if (!C.zf) goto L_1106054f;
  /* 11060579 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106057c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11060583 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11060589 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1106058c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106058f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11060592 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11060594 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060597 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1106059e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110605a1 push ecx */
  push32((uint32_t)(ECX));
  /* 110605a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110605a5 push edx */
  push32((uint32_t)(EDX));
  /* 110605a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605a9 push eax */
  push32((uint32_t)(EAX));
  /* 110605aa call 0x11061590 */
  push32(0x110605afu); f_11061590();
  /* 110605af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110605b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 110605b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605b8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110605bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110605be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 110605c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605c7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110605cb jl 0x110605ef */
  if ((C.sf!=C.of)) goto L_110605ef;
  /* 110605cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110605d2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110605d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110605d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 110605dd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 110605e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110605e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110605e8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110605ed jmp 0x11060600 */
  goto L_11060600;
L_110605ef:;
  /* 110605ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110605f2 push edx */
  push32((uint32_t)(EDX));
  /* 110605f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110605f5 call 0x11061310 */
  push32(0x110605fau); f_11061310();
  /* 110605fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110605fd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11060600:;
  /* 11060600 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11060603 pop edi */
  EDI = (pop32());
  /* 11060604 pop esi */
  ESI = (pop32());
  /* 11060605 pop ebx */
  EBX = (pop32());
  /* 11060606 mov esp, ebp */
  ESP = (EBP);
  /* 11060608 pop ebp */
  EBP = (pop32());
  /* 11060609 ret  */
  ESPCHK(0x11060510u, _esp0);
  ESP += 4; return;
}

/* FUN_10010610 @ 0x11060610 (183 bytes, 58 insns) */
void f_11060610(void) {
  FTRACE(0x11060610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060610 push ebp */
  push32((uint32_t)(EBP));
  /* 11060611 mov ebp, esp */
  EBP = (ESP);
  /* 11060613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11060619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106061c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060621 ja 0x1106063a */
  if ((!C.cf&&!C.zf)) goto L_1106063a;
  /* 11060623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11060626 mov edx, dword ptr [0x11084c98] */
  EDX = (r32((uint32_t)(0x11084c98)));
  /* 1106062c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106062e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11060632 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11060635 jmp 0x110606c3 */
  goto L_110606c3;
L_1106063a:;
  /* 1106063a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106063d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11060640 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11060646 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1106064c mov edx, dword ptr [0x11084c98] */
  EDX = (r32((uint32_t)(0x11084c98)));
  /* 11060652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11060654 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11060658 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1106065d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106065f je 0x11060683 */
  if (C.zf) goto L_11060683;
  /* 11060661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11060664 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11060667 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1106066d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11060670 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11060673 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11060676 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1106067a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11060681 jmp 0x11060694 */
  goto L_11060694;
L_11060683:;
  /* 11060683 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11060686 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11060689 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1106068d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11060694:;
  /* 11060694 push 1 */
  push32((uint32_t)(0x1u));
  /* 11060696 push 0 */
  push32((uint32_t)(0x0u));
  /* 11060698 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106069a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1106069d push ecx */
  push32((uint32_t)(ECX));
  /* 1106069e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110606a1 push edx */
  push32((uint32_t)(EDX));
  /* 110606a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 110606a5 push eax */
  push32((uint32_t)(EAX));
  /* 110606a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110606a8 call 0x11062830 */
  push32(0x110606adu); f_11062830();
  /* 110606ad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110606b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110606b2 jne 0x110606b8 */
  if (!C.zf) goto L_110606b8;
  /* 110606b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110606b6 jmp 0x110606c3 */
  goto L_110606c3;
L_110606b8:;
  /* 110606b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110606bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110606c0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_110606c3:;
  /* 110606c3 mov esp, ebp */
  ESP = (EBP);
  /* 110606c5 pop ebp */
  EBP = (pop32());
  /* 110606c6 ret  */
  ESPCHK(0x11060610u, _esp0);
  ESP += 4; return;
}

/* FUN_100106d0 @ 0x110606d0 (836 bytes, 238 insns) */
void f_110606d0(void) {
  FTRACE(0x110606d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110606d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110606d1 mov ebp, esp */
  EBP = (ESP);
  /* 110606d3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110606d6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110606d8 call 0x1105e000 */
  push32(0x110606ddu); f_1105e000();
  /* 110606dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110606e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110606e3 push eax */
  push32((uint32_t)(EAX));
  /* 110606e4 call 0x11060a20 */
  push32(0x110606e9u); f_11060a20();
  /* 110606e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110606ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110606ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110606f2 cmp ecx, dword ptr [0x11087e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11087e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110606f8 jne 0x1106070b */
  if (!C.zf) goto L_1106070b;
  /* 110606fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110606fc call 0x1105e0a0 */
  push32(0x11060701u); f_1105e0a0();
  /* 11060701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11060706 jmp 0x11060a10 */
  goto L_11060a10;
L_1106070b:;
  /* 1106070b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106070f jne 0x1106072c */
  if (!C.zf) goto L_1106072c;
  /* 11060711 call 0x11060b00 */
  push32(0x11060716u); f_11060b00();
  /* 11060716 call 0x11060b80 */
  push32(0x1106071bu); f_11060b80();
  /* 1106071b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1106071d call 0x1105e0a0 */
  push32(0x11060722u); f_1105e0a0();
  /* 11060722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060725 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11060727 jmp 0x11060a10 */
  goto L_11060a10;
L_1106072c:;
  /* 1106072c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11060733 jmp 0x1106073e */
  goto L_1106073e;
L_11060735:;
  /* 11060735 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060738 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106073b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1106073e:;
  /* 1106073e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060742 jae 0x1106088f */
  if (!C.cf) goto L_1106088f;
  /* 11060748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106074b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106074e mov ecx, dword ptr [eax + 0x11084eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11084eb8)));
  /* 11060754 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060757 jne 0x1106088a */
  if (!C.zf) goto L_1106088a;
  /* 1106075d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11060764 jmp 0x1106076f */
  goto L_1106076f;
L_11060766:;
  /* 11060766 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060769 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106076c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1106076f:;
  /* 1106076f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060776 jae 0x11060784 */
  if (!C.cf) goto L_11060784;
  /* 11060778 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106077b mov byte ptr [eax + 0x11088000], 0 */
  w8((uint32_t)(EAX + 0x11088000), (0x0u));
  /* 11060782 jmp 0x11060766 */
  goto L_11060766;
L_11060784:;
  /* 11060784 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1106078b jmp 0x11060796 */
  goto L_11060796;
L_1106078d:;
  /* 1106078d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11060790 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060793 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11060796:;
  /* 11060796 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106079a jae 0x11060817 */
  if (!C.cf) goto L_11060817;
  /* 1106079c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106079f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110607a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110607a5 lea ecx, [edx + eax*8 + 0x11084ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11084ec8));
  /* 110607ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110607af jmp 0x110607ba */
  goto L_110607ba;
L_110607b1:;
  /* 110607b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110607b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110607b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_110607ba:;
  /* 110607ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110607bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110607bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110607c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110607c3 je 0x11060812 */
  if (C.zf) goto L_11060812;
  /* 110607c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110607c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110607ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 110607cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110607cf je 0x11060812 */
  if (C.zf) goto L_11060812;
  /* 110607d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110607d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110607d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110607d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 110607db jmp 0x110607e6 */
  goto L_110607e6;
L_110607dd:;
  /* 110607dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110607e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110607e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_110607e6:;
  /* 110607e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110607e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110607eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 110607ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110607f1 ja 0x11060810 */
  if ((!C.cf&&!C.zf)) goto L_11060810;
  /* 110607f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110607f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110607f9 mov dl, byte ptr [eax + 0x11088001] */
  DL = (r8((uint32_t)(EAX + 0x11088001)));
  /* 110607ff or dl, byte ptr [ecx + 0x11084eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11084eb0))); DL = (_r); fl_logic(_r,8); }
  /* 11060805 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060808 mov byte ptr [eax + 0x11088001], dl */
  w8((uint32_t)(EAX + 0x11088001), (DL));
  /* 1106080e jmp 0x110607dd */
  goto L_110607dd;
L_11060810:;
  /* 11060810 jmp 0x110607b1 */
  goto L_110607b1;
L_11060812:;
  /* 11060812 jmp 0x1106078d */
  goto L_1106078d;
L_11060817:;
  /* 11060817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106081a mov dword ptr [0x11087e64], ecx */
  w32((uint32_t)(0x11087e64), (ECX));
  /* 11060820 mov dword ptr [0x11087eec], 1 */
  w32((uint32_t)(0x11087eec), (0x1u));
  /* 1106082a mov edx, dword ptr [0x11087e64] */
  EDX = (r32((uint32_t)(0x11087e64)));
  /* 11060830 push edx */
  push32((uint32_t)(EDX));
  /* 11060831 call 0x11060a80 */
  push32(0x11060836u); f_11060a80();
  /* 11060836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060839 mov dword ptr [0x11088104], eax */
  w32((uint32_t)(0x11088104), (EAX));
  /* 1106083e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11060845 jmp 0x11060850 */
  goto L_11060850;
L_11060847:;
  /* 11060847 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106084a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106084d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11060850:;
  /* 11060850 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060854 jae 0x11060874 */
  if (!C.cf) goto L_11060874;
  /* 11060856 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060859 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106085c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106085f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11060862 mov cx, word ptr [ecx + eax*2 + 0x11084ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11084ebc)));
  /* 1106086a mov word ptr [edx*2 + 0x11087ee0], cx */
  w16((uint32_t)(EDX*2 + 0x11087ee0), (CX));
  /* 11060872 jmp 0x11060847 */
  goto L_11060847;
L_11060874:;
  /* 11060874 call 0x11060b80 */
  push32(0x11060879u); f_11060b80();
  /* 11060879 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1106087b call 0x1105e0a0 */
  push32(0x11060880u); f_1105e0a0();
  /* 11060880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11060885 jmp 0x11060a10 */
  goto L_11060a10;
L_1106088a:;
  /* 1106088a jmp 0x11060735 */
  goto L_11060735;
L_1106088f:;
  /* 1106088f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11060892 push edx */
  push32((uint32_t)(EDX));
  /* 11060893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11060896 push eax */
  push32((uint32_t)(EAX));
  /* 11060897 call dword ptr [0x11089338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089338))), 0x1106089du);
  /* 1106089d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110608a0 jne 0x110609e2 */
  if (!C.zf) goto L_110609e2;
  /* 110608a6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 110608ad jmp 0x110608b8 */
  goto L_110608b8;
L_110608af:;
  /* 110608af mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110608b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110608b5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_110608b8:;
  /* 110608b8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110608bf jae 0x110608cd */
  if (!C.cf) goto L_110608cd;
  /* 110608c1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110608c4 mov byte ptr [edx + 0x11088000], 0 */
  w8((uint32_t)(EDX + 0x11088000), (0x0u));
  /* 110608cb jmp 0x110608af */
  goto L_110608af;
L_110608cd:;
  /* 110608cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110608d0 mov dword ptr [0x11087e64], eax */
  w32((uint32_t)(0x11087e64), (EAX));
  /* 110608d5 mov dword ptr [0x11088104], 0 */
  w32((uint32_t)(0x11088104), (0x0u));
  /* 110608df cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110608e3 jbe 0x1106099e */
  if ((C.cf||C.zf)) goto L_1106099e;
  /* 110608e9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 110608ec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 110608ef jmp 0x110608fa */
  goto L_110608fa;
L_110608f1:;
  /* 110608f1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 110608f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110608f7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_110608fa:;
  /* 110608fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110608fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110608ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11060901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11060903 je 0x1106094c */
  if (C.zf) goto L_1106094c;
  /* 11060905 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11060908 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106090a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1106090d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106090f je 0x1106094c */
  if (C.zf) goto L_1106094c;
  /* 11060911 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11060914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11060916 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11060918 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1106091b jmp 0x11060926 */
  goto L_11060926;
L_1106091d:;
  /* 1106091d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060923 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11060926:;
  /* 11060926 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11060929 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106092b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1106092e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060931 ja 0x1106094a */
  if ((!C.cf&&!C.zf)) goto L_1106094a;
  /* 11060933 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060936 mov cl, byte ptr [eax + 0x11088001] */
  CL = (r8((uint32_t)(EAX + 0x11088001)));
  /* 1106093c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1106093f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060942 mov byte ptr [edx + 0x11088001], cl */
  w8((uint32_t)(EDX + 0x11088001), (CL));
  /* 11060948 jmp 0x1106091d */
  goto L_1106091d;
L_1106094a:;
  /* 1106094a jmp 0x110608f1 */
  goto L_110608f1;
L_1106094c:;
  /* 1106094c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11060953 jmp 0x1106095e */
  goto L_1106095e;
L_11060955:;
  /* 11060955 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060958 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106095b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1106095e:;
  /* 1106095e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060965 jae 0x1106097e */
  if (!C.cf) goto L_1106097e;
  /* 11060967 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106096a mov dl, byte ptr [ecx + 0x11088001] */
  DL = (r8((uint32_t)(ECX + 0x11088001)));
  /* 11060970 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11060973 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11060976 mov byte ptr [eax + 0x11088001], dl */
  w8((uint32_t)(EAX + 0x11088001), (DL));
  /* 1106097c jmp 0x11060955 */
  goto L_11060955;
L_1106097e:;
  /* 1106097e mov ecx, dword ptr [0x11087e64] */
  ECX = (r32((uint32_t)(0x11087e64)));
  /* 11060984 push ecx */
  push32((uint32_t)(ECX));
  /* 11060985 call 0x11060a80 */
  push32(0x1106098au); f_11060a80();
  /* 1106098a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106098d mov dword ptr [0x11088104], eax */
  w32((uint32_t)(0x11088104), (EAX));
  /* 11060992 mov dword ptr [0x11087eec], 1 */
  w32((uint32_t)(0x11087eec), (0x1u));
  /* 1106099c jmp 0x110609a8 */
  goto L_110609a8;
L_1106099e:;
  /* 1106099e mov dword ptr [0x11087eec], 0 */
  w32((uint32_t)(0x11087eec), (0x0u));
L_110609a8:;
  /* 110609a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110609af jmp 0x110609ba */
  goto L_110609ba;
L_110609b1:;
  /* 110609b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110609b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110609b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110609ba:;
  /* 110609ba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110609be jae 0x110609cf */
  if (!C.cf) goto L_110609cf;
  /* 110609c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110609c3 mov word ptr [eax*2 + 0x11087ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x11087ee0), (0x0u));
  /* 110609cd jmp 0x110609b1 */
  goto L_110609b1;
L_110609cf:;
  /* 110609cf call 0x11060b80 */
  push32(0x110609d4u); f_11060b80();
  /* 110609d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110609d6 call 0x1105e0a0 */
  push32(0x110609dbu); f_1105e0a0();
  /* 110609db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110609de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110609e0 jmp 0x11060a10 */
  goto L_11060a10;
L_110609e2:;
  /* 110609e2 cmp dword ptr [0x11086980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110609e9 je 0x11060a03 */
  if (C.zf) goto L_11060a03;
  /* 110609eb call 0x11060b00 */
  push32(0x110609f0u); f_11060b00();
  /* 110609f0 call 0x11060b80 */
  push32(0x110609f5u); f_11060b80();
  /* 110609f5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110609f7 call 0x1105e0a0 */
  push32(0x110609fcu); f_1105e0a0();
  /* 110609fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110609ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11060a01 jmp 0x11060a10 */
  goto L_11060a10;
L_11060a03:;
  /* 11060a03 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11060a05 call 0x1105e0a0 */
  push32(0x11060a0au); f_1105e0a0();
  /* 11060a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060a0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11060a10:;
  /* 11060a10 mov esp, ebp */
  ESP = (EBP);
  /* 11060a12 pop ebp */
  EBP = (pop32());
  /* 11060a13 ret  */
  ESPCHK(0x110606d0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11060a20 (89 bytes, 21 insns) */
void f_11060a20(void) {
  FTRACE(0x11060a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11060a21 mov ebp, esp */
  EBP = (ESP);
  /* 11060a23 mov dword ptr [0x11086980], 0 */
  w32((uint32_t)(0x11086980), (0x0u));
  /* 11060a2d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060a31 jne 0x11060a45 */
  if (!C.zf) goto L_11060a45;
  /* 11060a33 mov dword ptr [0x11086980], 1 */
  w32((uint32_t)(0x11086980), (0x1u));
  /* 11060a3d call dword ptr [0x11089330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089330))), 0x11060a43u);
  /* 11060a43 jmp 0x11060a77 */
  goto L_11060a77;
L_11060a45:;
  /* 11060a45 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060a49 jne 0x11060a5d */
  if (!C.zf) goto L_11060a5d;
  /* 11060a4b mov dword ptr [0x11086980], 1 */
  w32((uint32_t)(0x11086980), (0x1u));
  /* 11060a55 call dword ptr [0x11089334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089334))), 0x11060a5bu);
  /* 11060a5b jmp 0x11060a77 */
  goto L_11060a77;
L_11060a5d:;
  /* 11060a5d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060a61 jne 0x11060a74 */
  if (!C.zf) goto L_11060a74;
  /* 11060a63 mov dword ptr [0x11086980], 1 */
  w32((uint32_t)(0x11086980), (0x1u));
  /* 11060a6d mov eax, dword ptr [0x110869a0] */
  EAX = (r32((uint32_t)(0x110869a0)));
  /* 11060a72 jmp 0x11060a77 */
  goto L_11060a77;
L_11060a74:;
  /* 11060a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11060a77:;
  /* 11060a77 pop ebp */
  EBP = (pop32());
  /* 11060a78 ret  */
  ESPCHK(0x11060a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x11060a80 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11060a80(void) {
  FTRACE(0x11060a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11060a81 mov ebp, esp */
  EBP = (ESP);
  /* 11060a83 push ecx */
  push32((uint32_t)(ECX));
  /* 11060a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11060a87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11060a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060a8d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060a93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11060a96 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060a9a ja 0x11060aca */
  if ((!C.cf&&!C.zf)) goto L_11060aca;
  /* 11060a9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11060aa1 mov dl, byte ptr [eax + 0x11060ae4] */
  DL = (r8((uint32_t)(EAX + 0x11060ae4)));
  /* 11060aa7 jmp dword ptr [edx*4 + 0x11060ad0] */
  switch (EDX) {
    case 0: goto L_11060aae;
    case 1: goto L_11060ab5;
    case 2: goto L_11060abc;
    case 3: goto L_11060ac3;
    case 4: goto L_11060aca;
    default: x86_unimpl("switch@0x11060aa7 out of table"); return;
  }
L_11060aae:;
  /* 11060aae mov eax, 0x411 */
  EAX = (0x411u);
  /* 11060ab3 jmp 0x11060acc */
  goto L_11060acc;
L_11060ab5:;
  /* 11060ab5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11060aba jmp 0x11060acc */
  goto L_11060acc;
L_11060abc:;
  /* 11060abc mov eax, 0x412 */
  EAX = (0x412u);
  /* 11060ac1 jmp 0x11060acc */
  goto L_11060acc;
L_11060ac3:;
  /* 11060ac3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11060ac8 jmp 0x11060acc */
  goto L_11060acc;
L_11060aca:;
  /* 11060aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11060acc:;
  /* 11060acc mov esp, ebp */
  ESP = (EBP);
  /* 11060ace pop ebp */
  EBP = (pop32());
  /* 11060acf ret  */
  ESPCHK(0x11060a80u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11060b00 (116 bytes, 29 insns) */
void f_11060b00(void) {
  FTRACE(0x11060b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11060b01 mov ebp, esp */
  EBP = (ESP);
  /* 11060b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11060b04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11060b0b jmp 0x11060b16 */
  goto L_11060b16;
L_11060b0d:;
  /* 11060b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060b10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060b13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11060b16:;
  /* 11060b16 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060b1d jge 0x11060b2b */
  if ((C.sf==C.of)) goto L_11060b2b;
  /* 11060b1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060b22 mov byte ptr [ecx + 0x11088000], 0 */
  w8((uint32_t)(ECX + 0x11088000), (0x0u));
  /* 11060b29 jmp 0x11060b0d */
  goto L_11060b0d;
L_11060b2b:;
  /* 11060b2b mov dword ptr [0x11087e64], 0 */
  w32((uint32_t)(0x11087e64), (0x0u));
  /* 11060b35 mov dword ptr [0x11087eec], 0 */
  w32((uint32_t)(0x11087eec), (0x0u));
  /* 11060b3f mov dword ptr [0x11088104], 0 */
  w32((uint32_t)(0x11088104), (0x0u));
  /* 11060b49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11060b50 jmp 0x11060b5b */
  goto L_11060b5b;
L_11060b52:;
  /* 11060b52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060b55 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060b58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11060b5b:;
  /* 11060b5b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060b5f jge 0x11060b70 */
  if ((C.sf==C.of)) goto L_11060b70;
  /* 11060b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060b64 mov word ptr [eax*2 + 0x11087ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x11087ee0), (0x0u));
  /* 11060b6e jmp 0x11060b52 */
  goto L_11060b52;
L_11060b70:;
  /* 11060b70 mov esp, ebp */
  ESP = (EBP);
  /* 11060b72 pop ebp */
  EBP = (pop32());
  /* 11060b73 ret  */
  ESPCHK(0x11060b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b80 @ 0x11060b80 (770 bytes, 175 insns) */
void f_11060b80(void) {
  FTRACE(0x11060b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11060b81 mov ebp, esp */
  EBP = (ESP);
  /* 11060b83 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060b89 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11060b8f push eax */
  push32((uint32_t)(EAX));
  /* 11060b90 mov ecx, dword ptr [0x11087e64] */
  ECX = (r32((uint32_t)(0x11087e64)));
  /* 11060b96 push ecx */
  push32((uint32_t)(ECX));
  /* 11060b97 call dword ptr [0x11089338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089338))), 0x11060b9du);
  /* 11060b9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060ba0 jne 0x11060db9 */
  if (!C.zf) goto L_11060db9;
  /* 11060ba6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11060bb0 jmp 0x11060bc1 */
  goto L_11060bc1;
L_11060bb2:;
  /* 11060bb2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060bb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060bbb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11060bc1:;
  /* 11060bc1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060bcb jae 0x11060be2 */
  if (!C.cf) goto L_11060be2;
  /* 11060bcd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060bd3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11060bd9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11060be0 jmp 0x11060bb2 */
  goto L_11060bb2;
L_11060be2:;
  /* 11060be2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11060be9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11060bef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11060bf2 jmp 0x11060bfd */
  goto L_11060bfd;
L_11060bf4:;
  /* 11060bf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060bf7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060bfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11060bfd:;
  /* 11060bfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060c00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11060c02 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11060c04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11060c06 je 0x11060c48 */
  if (C.zf) goto L_11060c48;
  /* 11060c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060c0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11060c0d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11060c0f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11060c15 jmp 0x11060c26 */
  goto L_11060c26;
L_11060c17:;
  /* 11060c17 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060c1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060c20 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11060c26:;
  /* 11060c26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11060c29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11060c2b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11060c2e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060c34 ja 0x11060c46 */
  if ((!C.cf&&!C.zf)) goto L_11060c46;
  /* 11060c36 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060c3c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11060c44 jmp 0x11060c17 */
  goto L_11060c17;
L_11060c46:;
  /* 11060c46 jmp 0x11060bf4 */
  goto L_11060bf4;
L_11060c48:;
  /* 11060c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11060c4a mov eax, dword ptr [0x11088104] */
  EAX = (r32((uint32_t)(0x11088104)));
  /* 11060c4f push eax */
  push32((uint32_t)(EAX));
  /* 11060c50 mov ecx, dword ptr [0x11087e64] */
  ECX = (r32((uint32_t)(0x11087e64)));
  /* 11060c56 push ecx */
  push32((uint32_t)(ECX));
  /* 11060c57 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11060c5d push edx */
  push32((uint32_t)(EDX));
  /* 11060c5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11060c63 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11060c69 push eax */
  push32((uint32_t)(EAX));
  /* 11060c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11060c6c call 0x11062830 */
  push32(0x11060c71u); f_11062830();
  /* 11060c71 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11060c76 mov ecx, dword ptr [0x11087e64] */
  ECX = (r32((uint32_t)(0x11087e64)));
  /* 11060c7c push ecx */
  push32((uint32_t)(ECX));
  /* 11060c7d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11060c82 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11060c88 push edx */
  push32((uint32_t)(EDX));
  /* 11060c89 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11060c8e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11060c94 push eax */
  push32((uint32_t)(EAX));
  /* 11060c95 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11060c9a mov ecx, dword ptr [0x11088104] */
  ECX = (r32((uint32_t)(0x11088104)));
  /* 11060ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 11060ca1 call 0x110629f0 */
  push32(0x11060ca6u); f_110629f0();
  /* 11060ca6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11060cab mov edx, dword ptr [0x11087e64] */
  EDX = (r32((uint32_t)(0x11087e64)));
  /* 11060cb1 push edx */
  push32((uint32_t)(EDX));
  /* 11060cb2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11060cb7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11060cbd push eax */
  push32((uint32_t)(EAX));
  /* 11060cbe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11060cc3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11060cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11060cca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11060ccf mov edx, dword ptr [0x11088104] */
  EDX = (r32((uint32_t)(0x11088104)));
  /* 11060cd5 push edx */
  push32((uint32_t)(EDX));
  /* 11060cd6 call 0x110629f0 */
  push32(0x11060cdbu); f_110629f0();
  /* 11060cdb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060cde mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11060ce8 jmp 0x11060cf9 */
  goto L_11060cf9;
L_11060cea:;
  /* 11060cea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060cf3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11060cf9:;
  /* 11060cf9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060d03 jae 0x11060db4 */
  if (!C.cf) goto L_11060db4;
  /* 11060d09 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11060d11 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11060d19 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11060d1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11060d1e je 0x11060d56 */
  if (C.zf) goto L_11060d56;
  /* 11060d20 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d26 mov cl, byte ptr [eax + 0x11088001] */
  CL = (r8((uint32_t)(EAX + 0x11088001)));
  /* 11060d2c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11060d2f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d35 mov byte ptr [edx + 0x11088001], cl */
  w8((uint32_t)(EDX + 0x11088001), (CL));
  /* 11060d3b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d41 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d47 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11060d4e mov byte ptr [eax + 0x11087f00], dl */
  w8((uint32_t)(EAX + 0x11087f00), (DL));
  /* 11060d54 jmp 0x11060daf */
  goto L_11060daf;
L_11060d56:;
  /* 11060d56 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11060d5e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11060d66 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11060d69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11060d6b je 0x11060da2 */
  if (C.zf) goto L_11060da2;
  /* 11060d6d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d73 mov al, byte ptr [edx + 0x11088001] */
  AL = (r8((uint32_t)(EDX + 0x11088001)));
  /* 11060d79 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11060d7b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d81 mov byte ptr [ecx + 0x11088001], al */
  w8((uint32_t)(ECX + 0x11088001), (AL));
  /* 11060d87 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060d93 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11060d9a mov byte ptr [edx + 0x11087f00], cl */
  w8((uint32_t)(EDX + 0x11087f00), (CL));
  /* 11060da0 jmp 0x11060daf */
  goto L_11060daf;
L_11060da2:;
  /* 11060da2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060da8 mov byte ptr [edx + 0x11087f00], 0 */
  w8((uint32_t)(EDX + 0x11087f00), (0x0u));
L_11060daf:;
  /* 11060daf jmp 0x11060cea */
  goto L_11060cea;
L_11060db4:;
  /* 11060db4 jmp 0x11060e7e */
  goto L_11060e7e;
L_11060db9:;
  /* 11060db9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11060dc3 jmp 0x11060dd4 */
  goto L_11060dd4;
L_11060dc5:;
  /* 11060dc5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060dcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060dce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11060dd4:;
  /* 11060dd4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060dde jae 0x11060e7e */
  if (!C.cf) goto L_11060e7e;
  /* 11060de4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060deb jb 0x11060e28 */
  if (C.cf) goto L_11060e28;
  /* 11060ded cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060df4 ja 0x11060e28 */
  if ((!C.cf&&!C.zf)) goto L_11060e28;
  /* 11060df6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060dfc mov dl, byte ptr [ecx + 0x11088001] */
  DL = (r8((uint32_t)(ECX + 0x11088001)));
  /* 11060e02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11060e05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e0b mov byte ptr [eax + 0x11088001], dl */
  w8((uint32_t)(EAX + 0x11088001), (DL));
  /* 11060e11 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e17 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060e1a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e20 mov byte ptr [edx + 0x11087f00], cl */
  w8((uint32_t)(EDX + 0x11087f00), (CL));
  /* 11060e26 jmp 0x11060e79 */
  goto L_11060e79;
L_11060e28:;
  /* 11060e28 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060e2f jb 0x11060e6c */
  if (C.cf) goto L_11060e6c;
  /* 11060e31 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060e38 ja 0x11060e6c */
  if ((!C.cf&&!C.zf)) goto L_11060e6c;
  /* 11060e3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e40 mov cl, byte ptr [eax + 0x11088001] */
  CL = (r8((uint32_t)(EAX + 0x11088001)));
  /* 11060e46 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11060e49 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e4f mov byte ptr [edx + 0x11088001], cl */
  w8((uint32_t)(EDX + 0x11088001), (CL));
  /* 11060e55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e5b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060e5e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e64 mov byte ptr [ecx + 0x11087f00], al */
  w8((uint32_t)(ECX + 0x11087f00), (AL));
  /* 11060e6a jmp 0x11060e79 */
  goto L_11060e79;
L_11060e6c:;
  /* 11060e6c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11060e72 mov byte ptr [edx + 0x11087f00], 0 */
  w8((uint32_t)(EDX + 0x11087f00), (0x0u));
L_11060e79:;
  /* 11060e79 jmp 0x11060dc5 */
  goto L_11060dc5;
L_11060e7e:;
  /* 11060e7e mov esp, ebp */
  ESP = (EBP);
  /* 11060e80 pop ebp */
  EBP = (pop32());
  /* 11060e81 ret  */
  ESPCHK(0x11060b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x11060e90 (23 bytes, 9 insns) */
void f_11060e90(void) {
  FTRACE(0x11060e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11060e91 mov ebp, esp */
  EBP = (ESP);
  /* 11060e93 cmp dword ptr [0x11087eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11087eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060e9a je 0x11060ea3 */
  if (C.zf) goto L_11060ea3;
  /* 11060e9c mov eax, dword ptr [0x11087e64] */
  EAX = (r32((uint32_t)(0x11087e64)));
  /* 11060ea1 jmp 0x11060ea5 */
  goto L_11060ea5;
L_11060ea3:;
  /* 11060ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11060ea5:;
  /* 11060ea5 pop ebp */
  EBP = (pop32());
  /* 11060ea6 ret  */
  ESPCHK(0x11060e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x11060eb0 (34 bytes, 10 insns) */
void f_11060eb0(void) {
  FTRACE(0x11060eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11060eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11060eb3 cmp dword ptr [0x110882b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110882b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060eba jne 0x11060ed0 */
  if (!C.zf) goto L_11060ed0;
  /* 11060ebc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11060ebe call 0x110606d0 */
  push32(0x11060ec3u); f_110606d0();
  /* 11060ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11060ec6 mov dword ptr [0x110882b0], 1 */
  w32((uint32_t)(0x110882b0), (0x1u));
L_11060ed0:;
  /* 11060ed0 pop ebp */
  EBP = (pop32());
  /* 11060ed1 ret  */
  ESPCHK(0x11060eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ee0 @ 0x11060ee0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11060ee0(void) {
  FTRACE(0x11060ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11060ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11060ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11060ee3 push edi */
  push32((uint32_t)(EDI));
  /* 11060ee4 push esi */
  push32((uint32_t)(ESI));
  /* 11060ee5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11060ee8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11060eeb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11060eee mov eax, ecx */
  EAX = (ECX);
  /* 11060ef0 mov edx, ecx */
  EDX = (ECX);
  /* 11060ef2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060ef4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060ef6 jbe 0x11060f00 */
  if ((C.cf||C.zf)) goto L_11060f00;
  /* 11060ef8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060efa jb 0x11061078 */
  if (C.cf) goto L_11061078;
L_11060f00:;
  /* 11060f00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11060f06 jne 0x11060f1c */
  if (!C.zf) goto L_11060f1c;
  /* 11060f08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11060f0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11060f0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060f11 jb 0x11060f3c */
  if (C.cf) goto L_11060f3c;
  /* 11060f13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11060f15 jmp dword ptr [edx*4 + 0x11061028] */
  switch (EDX) {
    case 0: goto L_11061038;
    case 1: goto L_11061040;
    case 2: goto L_1106104c;
    case 3: goto L_11061060;
    default: x86_unimpl("switch@0x11060f15 out of table"); return;
  }
L_11060f1c:;
  /* 11060f1c mov eax, edi */
  EAX = (EDI);
  /* 11060f1e mov edx, 3 */
  EDX = (0x3u);
  /* 11060f23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11060f26 jb 0x11060f34 */
  if (C.cf) goto L_11060f34;
  /* 11060f28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11060f2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11060f2d jmp dword ptr [eax*4 + 0x11060f40] */
  switch (EAX) {
    case 1: goto L_11060f50;
    case 2: goto L_11060f7c;
    case 3: goto L_11060fa0;
    default: x86_unimpl("switch@0x11060f2d out of table"); return;
  }
L_11060f34:;
  /* 11060f34 jmp dword ptr [ecx*4 + 0x11061038] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11061038)))); return;
  /* 11060f3b nop  */
  /* nop */
L_11060f3c:;
  /* 11060f3c jmp dword ptr [ecx*4 + 0x11060fbc] */
  switch (ECX) {
    case 0: goto L_1106101f;
    case 1: goto L_1106100c;
    case 2: goto L_11061004;
    case 3: goto L_11060ffc;
    case 4: goto L_11060ff4;
    case 5: goto L_11060fec;
    case 6: goto L_11060fe4;
    case 7: goto L_11060fdc;
    default: x86_unimpl("switch@0x11060f3c out of table"); return;
  }
  /* 11060f43 nop  */
  /* nop */
L_11060f50:;
  /* 11060f50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11060f52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11060f54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11060f56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11060f59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11060f5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11060f5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11060f62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11060f65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11060f68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11060f6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060f6e jb 0x11060f3c */
  if (C.cf) goto L_11060f3c;
  /* 11060f70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11060f72 jmp dword ptr [edx*4 + 0x11061028] */
  switch (EDX) {
    case 0: goto L_11061038;
    case 1: goto L_11061040;
    case 2: goto L_1106104c;
    case 3: goto L_11061060;
    default: x86_unimpl("switch@0x11060f72 out of table"); return;
  }
  /* 11060f79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11060f7c:;
  /* 11060f7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11060f7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11060f80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11060f82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11060f85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11060f88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11060f8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11060f8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11060f91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060f94 jb 0x11060f3c */
  if (C.cf) goto L_11060f3c;
  /* 11060f96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11060f98 jmp dword ptr [edx*4 + 0x11061028] */
  switch (EDX) {
    case 0: goto L_11061038;
    case 1: goto L_11061040;
    case 2: goto L_1106104c;
    case 3: goto L_11061060;
    default: x86_unimpl("switch@0x11060f98 out of table"); return;
  }
  /* 11060f9f nop  */
  /* nop */
L_11060fa0:;
  /* 11060fa0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11060fa2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11060fa4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11060fa6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11060fa7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11060faa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11060fab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11060fae jb 0x11060f3c */
  if (C.cf) goto L_11060f3c;
  /* 11060fb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11060fb2 jmp dword ptr [edx*4 + 0x11061028] */
  switch (EDX) {
    case 0: goto L_11061038;
    case 1: goto L_11061040;
    case 2: goto L_1106104c;
    case 3: goto L_11061060;
    default: x86_unimpl("switch@0x11060fb2 out of table"); return;
  }
  /* 11060fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11060fdc:;
  /* 11060fdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11060fe0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11060fe4:;
  /* 11060fe4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11060fe8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11060fec:;
  /* 11060fec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11060ff0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11060ff4:;
  /* 11060ff4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11060ff8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11060ffc:;
  /* 11060ffc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11061000 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11061004:;
  /* 11061004 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11061008 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1106100c:;
  /* 1106100c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11061010 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11061014 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1106101b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1106101d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1106101f:;
  /* 1106101f jmp dword ptr [edx*4 + 0x11061028] */
  switch (EDX) {
    case 0: goto L_11061038;
    case 1: goto L_11061040;
    case 2: goto L_1106104c;
    case 3: goto L_11061060;
    default: x86_unimpl("switch@0x1106101f out of table"); return;
  }
  /* 11061026 mov edi, edi */
  EDI = (EDI);
L_11061038:;
  /* 11061038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106103b pop esi */
  ESI = (pop32());
  /* 1106103c pop edi */
  EDI = (pop32());
  /* 1106103d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106103e ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
  /* 1106103f nop  */
  /* nop */
L_11061040:;
  /* 11061040 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11061042 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11061044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11061047 pop esi */
  ESI = (pop32());
  /* 11061048 pop edi */
  EDI = (pop32());
  /* 11061049 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106104a ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
  /* 1106104b nop  */
  /* nop */
L_1106104c:;
  /* 1106104c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1106104e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11061050 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11061053 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11061056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11061059 pop esi */
  ESI = (pop32());
  /* 1106105a pop edi */
  EDI = (pop32());
  /* 1106105b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106105c ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
  /* 1106105d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11061060:;
  /* 11061060 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11061062 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11061064 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11061067 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1106106a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1106106d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11061070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11061073 pop esi */
  ESI = (pop32());
  /* 11061074 pop edi */
  EDI = (pop32());
  /* 11061075 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11061076 ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
  /* 11061077 nop  */
  /* nop */
L_11061078:;
  /* 11061078 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1106107c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11061080 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11061086 jne 0x110610ac */
  if (!C.zf) goto L_110610ac;
  /* 11061088 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1106108b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1106108e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061091 jb 0x110610a0 */
  if (C.cf) goto L_110610a0;
  /* 11061093 std  */
  C.df=1;
  /* 11061094 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11061096 cld  */
  C.df=0;
  /* 11061097 jmp dword ptr [edx*4 + 0x110611c0] */
  switch (EDX) {
    case 0: goto L_110611d0;
    case 1: goto L_110611d8;
    case 2: goto L_110611e8;
    case 3: goto L_110611fc;
    default: x86_unimpl("switch@0x11061097 out of table"); return;
  }
  /* 1106109e mov edi, edi */
  EDI = (EDI);
L_110610a0:;
  /* 110610a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110610a2 jmp dword ptr [ecx*4 + 0x11061170] */
  switch (ECX) {
    case 0: goto L_110611b7;
    default: x86_unimpl("switch@0x110610a2 out of table"); return;
  }
  /* 110610a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110610ac:;
  /* 110610ac mov eax, edi */
  EAX = (EDI);
  /* 110610ae mov edx, 3 */
  EDX = (0x3u);
  /* 110610b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110610b6 jb 0x110610c4 */
  if (C.cf) goto L_110610c4;
  /* 110610b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110610bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110610bd jmp dword ptr [eax*4 + 0x110610c8] */
  switch (EAX) {
    case 1: goto L_110610d8;
    case 2: goto L_110610f8;
    case 3: goto L_11061120;
    default: x86_unimpl("switch@0x110610bd out of table"); return;
  }
L_110610c4:;
  /* 110610c4 jmp dword ptr [ecx*4 + 0x110611c0] */
  switch (ECX) {
    case 0: goto L_110611d0;
    case 1: goto L_110611d8;
    case 2: goto L_110611e8;
    case 3: goto L_110611fc;
    default: x86_unimpl("switch@0x110610c4 out of table"); return;
  }
  /* 110610cb nop  */
  /* nop */
L_110610d8:;
  /* 110610d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110610db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110610dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110610e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110610e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110610e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110610e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110610e8 jb 0x110610a0 */
  if (C.cf) goto L_110610a0;
  /* 110610ea std  */
  C.df=1;
  /* 110610eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110610ed cld  */
  C.df=0;
  /* 110610ee jmp dword ptr [edx*4 + 0x110611c0] */
  switch (EDX) {
    case 0: goto L_110611d0;
    case 1: goto L_110611d8;
    case 2: goto L_110611e8;
    case 3: goto L_110611fc;
    default: x86_unimpl("switch@0x110610ee out of table"); return;
  }
  /* 110610f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110610f8:;
  /* 110610f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110610fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110610fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11061100 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11061103 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11061106 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11061109 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106110c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106110f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061112 jb 0x110610a0 */
  if (C.cf) goto L_110610a0;
  /* 11061114 std  */
  C.df=1;
  /* 11061115 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11061117 cld  */
  C.df=0;
  /* 11061118 jmp dword ptr [edx*4 + 0x110611c0] */
  switch (EDX) {
    case 0: goto L_110611d0;
    case 1: goto L_110611d8;
    case 2: goto L_110611e8;
    case 3: goto L_110611fc;
    default: x86_unimpl("switch@0x11061118 out of table"); return;
  }
  /* 1106111f nop  */
  /* nop */
L_11061120:;
  /* 11061120 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11061123 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11061125 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11061128 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1106112b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1106112e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11061131 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11061134 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11061137 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106113a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106113d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061140 jb 0x110610a0 */
  if (C.cf) goto L_110610a0;
  /* 11061146 std  */
  C.df=1;
  /* 11061147 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11061149 cld  */
  C.df=0;
  /* 1106114a jmp dword ptr [edx*4 + 0x110611c0] */
  switch (EDX) {
    case 0: goto L_110611d0;
    case 1: goto L_110611d8;
    case 2: goto L_110611e8;
    case 3: goto L_110611fc;
    default: x86_unimpl("switch@0x1106114a out of table"); return;
  }
  /* 11061151 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11061154 je 0x11061167 */
  if (C.zf) goto L_11061167;
  /* 11061156 push es */
  push32((uint32_t)(C.seg_es));
  /* 11061157 adc dword ptr [ecx + edx + 6], edi */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x6))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDX*1 + 0x6), (_r)); fl_add(_a,_b,_r,32); }
  /* 1106115b adc dword ptr [ecx + edx + 0x118c1106], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x118c1106))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDX*1 + 0x118c1106), (_r)); fl_add(_a,_b,_r,32); }
  /* 11061162 push es */
  push32((uint32_t)(C.seg_es));
  /* 11061163 adc dword ptr [ecx + edx + 0x119c1106], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x119c1106))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDX*1 + 0x119c1106), (_r)); fl_add(_a,_b,_r,32); }
  /* 1106116a push es */
  push32((uint32_t)(C.seg_es));
  /* 1106116c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1106116d adc dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11061174 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11061178 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1106117c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11061180 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11061184 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11061188 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1106118c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11061190 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11061194 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11061198 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1106119c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 110611a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 110611a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 110611a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 110611ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110611b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110611b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110611b7:;
  /* 110611b7 jmp dword ptr [edx*4 + 0x110611c0] */
  switch (EDX) {
    case 0: goto L_110611d0;
    case 1: goto L_110611d8;
    case 2: goto L_110611e8;
    case 3: goto L_110611fc;
    default: x86_unimpl("switch@0x110611b7 out of table"); return;
  }
  /* 110611be mov edi, edi */
  EDI = (EDI);
L_110611d0:;
  /* 110611d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110611d3 pop esi */
  ESI = (pop32());
  /* 110611d4 pop edi */
  EDI = (pop32());
  /* 110611d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110611d6 ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
  /* 110611d7 nop  */
  /* nop */
L_110611d8:;
  /* 110611d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110611db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110611de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110611e1 pop esi */
  ESI = (pop32());
  /* 110611e2 pop edi */
  EDI = (pop32());
  /* 110611e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110611e4 ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
  /* 110611e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110611e8:;
  /* 110611e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110611eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110611ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110611f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110611f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110611f7 pop esi */
  ESI = (pop32());
  /* 110611f8 pop edi */
  EDI = (pop32());
  /* 110611f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110611fa ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
  /* 110611fb nop  */
  /* nop */
L_110611fc:;
  /* 110611fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110611ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11061202 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11061205 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11061208 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1106120b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1106120e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11061211 pop esi */
  ESI = (pop32());
  /* 11061212 pop edi */
  EDI = (pop32());
  /* 11061213 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11061214 ret  */
  ESPCHK(0x11060ee0u, _esp0);
  ESP += 4; return;
L_11061167: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11061167 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x11061220 (104 bytes, 43 insns) */
void f_11061220(void) {
  FTRACE(0x11061220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11061220 push ebx */
  push32((uint32_t)(EBX));
  /* 11061221 push esi */
  push32((uint32_t)(ESI));
  /* 11061222 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11061226 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11061228 jne 0x11061242 */
  if (!C.zf) goto L_11061242;
  /* 1106122a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1106122e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11061232 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11061234 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11061236 mov ebx, eax */
  EBX = (EAX);
  /* 11061238 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1106123c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1106123e mov edx, ebx */
  EDX = (EBX);
  /* 11061240 jmp 0x11061283 */
  goto L_11061283;
L_11061242:;
  /* 11061242 mov ecx, eax */
  ECX = (EAX);
  /* 11061244 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11061248 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1106124c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11061250:;
  /* 11061250 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11061252 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11061254 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11061256 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11061258 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106125a jne 0x11061250 */
  if (!C.zf) goto L_11061250;
  /* 1106125c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1106125e mov esi, eax */
  ESI = (EAX);
  /* 11061260 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11061264 mov ecx, eax */
  ECX = (EAX);
  /* 11061266 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1106126a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1106126c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106126e jb 0x1106127e */
  if (C.cf) goto L_1106127e;
  /* 11061270 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061274 ja 0x1106127e */
  if ((!C.cf&&!C.zf)) goto L_1106127e;
  /* 11061276 jb 0x1106127f */
  if (C.cf) goto L_1106127f;
  /* 11061278 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106127c jbe 0x1106127f */
  if ((C.cf||C.zf)) goto L_1106127f;
L_1106127e:;
  /* 1106127e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1106127f:;
  /* 1106127f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11061281 mov eax, esi */
  EAX = (ESI);
L_11061283:;
  /* 11061283 pop esi */
  ESI = (pop32());
  /* 11061284 pop ebx */
  EBX = (pop32());
  /* 11061285 ret 0x10 */
  ESPCHK(0x11061220u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11061290 (117 bytes, 44 insns) */
void f_11061290(void) {
  FTRACE(0x11061290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11061290 push ebx */
  push32((uint32_t)(EBX));
  /* 11061291 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11061295 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11061297 jne 0x110612b1 */
  if (!C.zf) goto L_110612b1;
  /* 11061299 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1106129d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 110612a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110612a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110612a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110612a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110612ab mov eax, edx */
  EAX = (EDX);
  /* 110612ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110612af jmp 0x11061301 */
  goto L_11061301;
L_110612b1:;
  /* 110612b1 mov ecx, eax */
  ECX = (EAX);
  /* 110612b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 110612b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 110612bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_110612bf:;
  /* 110612bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 110612c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 110612c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 110612c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 110612c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110612c9 jne 0x110612bf */
  if (!C.zf) goto L_110612bf;
  /* 110612cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110612cd mov ecx, eax */
  ECX = (EAX);
  /* 110612cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 110612d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 110612d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 110612d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110612da jb 0x110612ea */
  if (C.cf) goto L_110612ea;
  /* 110612dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110612e0 ja 0x110612ea */
  if ((!C.cf&&!C.zf)) goto L_110612ea;
  /* 110612e2 jb 0x110612f2 */
  if (C.cf) goto L_110612f2;
  /* 110612e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110612e8 jbe 0x110612f2 */
  if ((C.cf||C.zf)) goto L_110612f2;
L_110612ea:;
  /* 110612ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110612ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_110612f2:;
  /* 110612f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110612f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110612fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110612fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110612fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11061301:;
  /* 11061301 pop ebx */
  EBX = (pop32());
  /* 11061302 ret 0x10 */
  ESPCHK(0x11061290u, _esp0);
  ESP += 20; return;
}

/* FUN_10011310 @ 0x11061310 (628 bytes, 214 insns) */
void f_11061310(void) {
  FTRACE(0x11061310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11061310 push ebp */
  push32((uint32_t)(EBP));
  /* 11061311 mov ebp, esp */
  EBP = (ESP);
  /* 11061313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061316 push ebx */
  push32((uint32_t)(EBX));
  /* 11061317 push esi */
  push32((uint32_t)(ESI));
  /* 11061318 push edi */
  push32((uint32_t)(EDI));
L_11061319:;
  /* 11061319 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106131d jne 0x1106133d */
  if (!C.zf) goto L_1106133d;
  /* 1106131f push 0x11082354 */
  push32((uint32_t)(0x11082354u));
  /* 11061324 push 0 */
  push32((uint32_t)(0x0u));
  /* 11061326 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11061328 push 0x11082348 */
  push32((uint32_t)(0x11082348u));
  /* 1106132d push 2 */
  push32((uint32_t)(0x2u));
  /* 1106132f call 0x110596c0 */
  push32(0x11061334u); f_110596c0();
  /* 11061334 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061337 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106133a jne 0x1106133d */
  if (!C.zf) goto L_1106133d;
  /* 1106133c int3  */
  x86_unimpl("int3 @ 0x1106133c");
L_1106133d:;
  /* 1106133d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106133f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061341 jne 0x11061319 */
  if (!C.zf) goto L_11061319;
  /* 11061343 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11061346 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11061349 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106134c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1106134f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11061352 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061355 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11061358 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1106135e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061360 je 0x1106136f */
  if (C.zf) goto L_1106136f;
  /* 11061362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061365 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11061368 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1106136b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106136d je 0x11061385 */
  if (C.zf) goto L_11061385;
L_1106136f:;
  /* 1106136f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061372 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11061375 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11061377 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106137a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1106137d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11061380 jmp 0x1106157d */
  goto L_1106157d;
L_11061385:;
  /* 11061385 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061388 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1106138b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1106138e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061390 je 0x110613dc */
  if (C.zf) goto L_110613dc;
  /* 11061392 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061395 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1106139c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106139f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 110613a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 110613a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110613a7 je 0x110613c5 */
  if (C.zf) goto L_110613c5;
  /* 110613a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613af mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110613b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110613b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110613ba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 110613bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613c0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 110613c3 jmp 0x110613dc */
  goto L_110613dc;
L_110613c5:;
  /* 110613c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613c8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110613cb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 110613ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613d1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 110613d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110613d7 jmp 0x1106157d */
  goto L_1106157d;
L_110613dc:;
  /* 110613dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110613e2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 110613e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613e8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 110613eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613ee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110613f1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 110613f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613f7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 110613fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110613fd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11061404 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106140b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106140e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11061411 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061414 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11061417 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1106141d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106141f jne 0x1106144f */
  if (!C.zf) goto L_1106144f;
  /* 11061421 cmp dword ptr [ebp - 8], 0x11085140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11085140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061428 je 0x11061433 */
  if (C.zf) goto L_11061433;
  /* 1106142a cmp dword ptr [ebp - 8], 0x11085160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11085160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061431 jne 0x11061443 */
  if (!C.zf) goto L_11061443;
L_11061433:;
  /* 11061433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11061436 push edx */
  push32((uint32_t)(EDX));
  /* 11061437 call 0x11063280 */
  push32(0x1106143cu); f_11063280();
  /* 1106143c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106143f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061441 jne 0x1106144f */
  if (!C.zf) goto L_1106144f;
L_11061443:;
  /* 11061443 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061446 push eax */
  push32((uint32_t)(EAX));
  /* 11061447 call 0x110631b0 */
  push32(0x1106144cu); f_110631b0();
  /* 1106144c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106144f:;
  /* 1106144f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061452 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11061455 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1106145b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106145d je 0x1106153b */
  if (C.zf) goto L_1106153b;
L_11061463:;
  /* 11061463 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061466 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061469 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1106146b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106146e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061470 jge 0x11061493 */
  if ((C.sf==C.of)) goto L_11061493;
  /* 11061472 push 0x11082308 */
  push32((uint32_t)(0x11082308u));
  /* 11061477 push 0 */
  push32((uint32_t)(0x0u));
  /* 11061479 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1106147e push 0x11082348 */
  push32((uint32_t)(0x11082348u));
  /* 11061483 push 2 */
  push32((uint32_t)(0x2u));
  /* 11061485 call 0x110596c0 */
  push32(0x1106148au); f_110596c0();
  /* 1106148a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106148d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061490 jne 0x11061493 */
  if (!C.zf) goto L_11061493;
  /* 11061492 int3  */
  x86_unimpl("int3 @ 0x11061492");
L_11061493:;
  /* 11061493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11061495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061497 jne 0x11061463 */
  if (!C.zf) goto L_11061463;
  /* 11061499 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106149c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106149f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110614a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110614a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110614a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110614aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 110614ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110614b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110614b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110614b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110614b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 110614bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110614be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110614c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 110614c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110614c8 jle 0x110614e6 */
  if ((C.zf||C.sf!=C.of)) goto L_110614e6;
  /* 110614ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110614cd push ecx */
  push32((uint32_t)(ECX));
  /* 110614ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110614d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110614d4 push eax */
  push32((uint32_t)(EAX));
  /* 110614d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110614d8 push ecx */
  push32((uint32_t)(ECX));
  /* 110614d9 call 0x11062ea0 */
  push32(0x110614deu); f_11062ea0();
  /* 110614de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110614e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110614e4 jmp 0x1106152e */
  goto L_1106152e;
L_110614e6:;
  /* 110614e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110614ea je 0x11061509 */
  if (C.zf) goto L_11061509;
  /* 110614ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110614ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 110614f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110614f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110614f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110614fb mov ecx, dword ptr [edx*4 + 0x11088160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11088160)));
  /* 11061502 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061504 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11061507 jmp 0x11061510 */
  goto L_11061510;
L_11061509:;
  /* 11061509 mov dword ptr [ebp - 0x14], 0x11084a60 */
  w32((uint32_t)(EBP + -0x14), (0x11084a60u));
L_11061510:;
  /* 11061510 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11061513 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11061517 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1106151a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106151c je 0x1106152e */
  if (C.zf) goto L_1106152e;
  /* 1106151e push 2 */
  push32((uint32_t)(0x2u));
  /* 11061520 push 0 */
  push32((uint32_t)(0x0u));
  /* 11061522 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11061525 push ecx */
  push32((uint32_t)(ECX));
  /* 11061526 call 0x11062d50 */
  push32(0x1106152bu); f_11062d50();
  /* 1106152b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106152e:;
  /* 1106152e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061531 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11061534 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11061537 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11061539 jmp 0x11061559 */
  goto L_11061559;
L_1106153b:;
  /* 1106153b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11061542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061545 push edx */
  push32((uint32_t)(EDX));
  /* 11061546 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11061549 push eax */
  push32((uint32_t)(EAX));
  /* 1106154a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106154d push ecx */
  push32((uint32_t)(ECX));
  /* 1106154e call 0x11062ea0 */
  push32(0x11061553u); f_11062ea0();
  /* 11061553 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061556 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11061559:;
  /* 11061559 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106155c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106155f je 0x11061575 */
  if (C.zf) goto L_11061575;
  /* 11061561 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061564 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11061567 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1106156a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106156d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11061570 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11061573 jmp 0x1106157d */
  goto L_1106157d;
L_11061575:;
  /* 11061575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11061578 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1106157d:;
  /* 1106157d pop edi */
  EDI = (pop32());
  /* 1106157e pop esi */
  ESI = (pop32());
  /* 1106157f pop ebx */
  EBX = (pop32());
  /* 11061580 mov esp, ebp */
  ESP = (EBP);
  /* 11061582 pop ebp */
  EBP = (pop32());
  /* 11061583 ret  */
  ESPCHK(0x11061310u, _esp0);
  ESP += 4; return;
}

/* FUN_10011590 @ 0x11061590 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11061590(void) {
  FTRACE(0x11061590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11061590 push ebp */
  push32((uint32_t)(EBP));
  /* 11061591 mov ebp, esp */
  EBP = (ESP);
  /* 11061593 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061599 push ebx */
  push32((uint32_t)(EBX));
  /* 1106159a push esi */
  push32((uint32_t)(ESI));
  /* 1106159b push edi */
  push32((uint32_t)(EDI));
  /* 1106159c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 110615a3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 110615ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_110615b4:;
  /* 110615b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110615b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110615b9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 110615bc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110615c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110615c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110615c6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 110615c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110615cb je 0x110621a7 */
  if (C.zf) goto L_110621a7;
  /* 110615d1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110615d8 jl 0x110621a7 */
  if ((C.sf!=C.of)) goto L_110621a7;
  /* 110615de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110615e2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110615e5 jl 0x11061606 */
  if ((C.sf!=C.of)) goto L_11061606;
  /* 110615e7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110615eb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110615ee jg 0x11061606 */
  if ((!C.zf&&C.sf==C.of)) goto L_11061606;
  /* 110615f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110615f4 movsx ecx, byte ptr [eax + 0x11082340] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11082340))));
  /* 110615fb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 110615fe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11061604 jmp 0x11061610 */
  goto L_11061610;
L_11061606:;
  /* 11061606 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11061610:;
  /* 11061610 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11061616 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11061619 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106161c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106161f movsx edx, byte ptr [ecx + eax*8 + 0x11082360] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11082360))));
  /* 11061627 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1106162a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1106162d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11061630 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11061636 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106163d ja 0x110621a2 */
  if ((!C.cf&&!C.zf)) goto L_110621a2;
  /* 11061643 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11061649 jmp dword ptr [ecx*4 + 0x110621b4] */
  switch (ECX) {
    case 0: goto L_11061650;
    case 1: goto L_110616ea;
    case 2: goto L_1106172c;
    case 3: goto L_1106179b;
    case 4: goto L_110617f3;
    case 5: goto L_11061802;
    case 6: goto L_1106184e;
    case 7: goto L_110618e1;
    case 8: goto L_11061778;
    case 9: goto L_11061783;
    case 10: goto L_1106176e;
    case 11: goto L_11061763;
    case 12: goto L_1106178e;
    case 13: goto L_11061796;
    default: x86_unimpl("switch@0x11061649 out of table"); return;
  }
L_11061650:;
  /* 11061650 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11061657 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1106165a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11061660 mov eax, dword ptr [0x11084c98] */
  EAX = (r32((uint32_t)(0x11084c98)));
  /* 11061665 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11061667 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1106166b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11061671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11061673 je 0x110616cd */
  if (C.zf) goto L_110616cd;
  /* 11061675 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1106167b push edx */
  push32((uint32_t)(EDX));
  /* 1106167c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106167f push eax */
  push32((uint32_t)(EAX));
  /* 11061680 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11061684 push ecx */
  push32((uint32_t)(ECX));
  /* 11061685 call 0x110622c0 */
  push32(0x1106168au); f_110622c0();
  /* 1106168a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106168d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11061690 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11061692 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11061695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11061698 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106169b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1106169e:;
  /* 1106169e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110616a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110616a4 jne 0x110616c7 */
  if (!C.zf) goto L_110616c7;
  /* 110616a6 push 0x110823e0 */
  push32((uint32_t)(0x110823e0u));
  /* 110616ab push 0 */
  push32((uint32_t)(0x0u));
  /* 110616ad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 110616b2 push 0x110823d4 */
  push32((uint32_t)(0x110823d4u));
  /* 110616b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110616b9 call 0x110596c0 */
  push32(0x110616beu); f_110596c0();
  /* 110616be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110616c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110616c4 jne 0x110616c7 */
  if (!C.zf) goto L_110616c7;
  /* 110616c6 int3  */
  x86_unimpl("int3 @ 0x110616c6");
L_110616c7:;
  /* 110616c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110616c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110616cb jne 0x1106169e */
  if (!C.zf) goto L_1106169e;
L_110616cd:;
  /* 110616cd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 110616d3 push ecx */
  push32((uint32_t)(ECX));
  /* 110616d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110616d7 push edx */
  push32((uint32_t)(EDX));
  /* 110616d8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110616dc push eax */
  push32((uint32_t)(EAX));
  /* 110616dd call 0x110622c0 */
  push32(0x110616e2u); f_110622c0();
  /* 110616e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110616e5 jmp 0x110621a2 */
  goto L_110621a2;
L_110616ea:;
  /* 110616ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110616f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110616f4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 110616fa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11061700 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11061706 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1106170c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1106170f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11061716 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11061720 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11061727 jmp 0x110621a2 */
  goto L_110621a2;
L_1106172c:;
  /* 1106172c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11061730 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11061736 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1106173c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106173f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11061745 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106174c ja 0x11061796 */
  if ((!C.cf&&!C.zf)) goto L_11061796;
  /* 1106174e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11061754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11061756 mov al, byte ptr [ecx + 0x110621ec] */
  AL = (r8((uint32_t)(ECX + 0x110621ec)));
  /* 1106175c jmp dword ptr [eax*4 + 0x110621d4] */
  switch (EAX) {
    case 0: goto L_11061778;
    case 1: goto L_11061783;
    case 2: goto L_1106176e;
    case 3: goto L_11061763;
    case 4: goto L_1106178e;
    case 5: goto L_11061796;
    default: x86_unimpl("switch@0x1106175c out of table"); return;
  }
L_11061763:;
  /* 11061763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061766 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11061769 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1106176c jmp 0x11061796 */
  goto L_11061796;
L_1106176e:;
  /* 1106176e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061771 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11061773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11061776 jmp 0x11061796 */
  goto L_11061796;
L_11061778:;
  /* 11061778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106177b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1106177e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11061781 jmp 0x11061796 */
  goto L_11061796;
L_11061783:;
  /* 11061783 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061786 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11061789 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1106178c jmp 0x11061796 */
  goto L_11061796;
L_1106178e:;
  /* 1106178e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061791 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11061793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11061796:;
  /* 11061796 jmp 0x110621a2 */
  goto L_110621a2;
L_1106179b:;
  /* 1106179b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1106179f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110617a2 jne 0x110617d7 */
  if (!C.zf) goto L_110617d7;
  /* 110617a4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 110617a7 push edx */
  push32((uint32_t)(EDX));
  /* 110617a8 call 0x110623d0 */
  push32(0x110617adu); f_110623d0();
  /* 110617ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110617b0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 110617b6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110617bd jge 0x110617d5 */
  if ((C.sf==C.of)) goto L_110617d5;
  /* 110617bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110617c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 110617c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110617c7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 110617cd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110617cf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_110617d5:;
  /* 110617d5 jmp 0x110617ee */
  goto L_110617ee;
L_110617d7:;
  /* 110617d7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 110617dd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110617e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110617e4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 110617e8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_110617ee:;
  /* 110617ee jmp 0x110621a2 */
  goto L_110621a2;
L_110617f3:;
  /* 110617f3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 110617fd jmp 0x110621a2 */
  goto L_110621a2;
L_11061802:;
  /* 11061802 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11061806 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061809 jne 0x11061832 */
  if (!C.zf) goto L_11061832;
  /* 1106180b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1106180e push eax */
  push32((uint32_t)(EAX));
  /* 1106180f call 0x110623d0 */
  push32(0x11061814u); f_110623d0();
  /* 11061814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061817 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1106181d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061824 jge 0x11061830 */
  if ((C.sf==C.of)) goto L_11061830;
  /* 11061826 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11061830:;
  /* 11061830 jmp 0x11061849 */
  goto L_11061849;
L_11061832:;
  /* 11061832 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11061838 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106183b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1106183f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11061843 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11061849:;
  /* 11061849 jmp 0x110621a2 */
  goto L_110621a2;
L_1106184e:;
  /* 1106184e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11061852 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11061858 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1106185e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061861 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11061867 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106186e ja 0x110618dc */
  if ((!C.cf&&!C.zf)) goto L_110618dc;
  /* 11061870 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11061876 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11061878 mov al, byte ptr [ecx + 0x11062211] */
  AL = (r8((uint32_t)(ECX + 0x11062211)));
  /* 1106187e jmp dword ptr [eax*4 + 0x110621fd] */
  switch (EAX) {
    case 0: goto L_11061890;
    case 1: goto L_110618c9;
    case 2: goto L_11061885;
    case 3: goto L_110618d3;
    case 4: goto L_110618dc;
    default: x86_unimpl("switch@0x1106187e out of table"); return;
  }
L_11061885:;
  /* 11061885 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061888 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1106188b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1106188e jmp 0x110618dc */
  goto L_110618dc;
L_11061890:;
  /* 11061890 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11061893 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11061896 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061899 jne 0x110618bb */
  if (!C.zf) goto L_110618bb;
  /* 1106189b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106189e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 110618a2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110618a5 jne 0x110618bb */
  if (!C.zf) goto L_110618bb;
  /* 110618a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110618aa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110618ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 110618b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110618b3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 110618b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110618b9 jmp 0x110618c7 */
  goto L_110618c7;
L_110618bb:;
  /* 110618bb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 110618c2 jmp 0x11061650 */
  goto L_11061650;
L_110618c7:;
  /* 110618c7 jmp 0x110618dc */
  goto L_110618dc;
L_110618c9:;
  /* 110618c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110618cc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 110618ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110618d1 jmp 0x110618dc */
  goto L_110618dc;
L_110618d3:;
  /* 110618d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110618d6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 110618d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110618dc:;
  /* 110618dc jmp 0x110621a2 */
  goto L_110621a2;
L_110618e1:;
  /* 110618e1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 110618e5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 110618eb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 110618f1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110618f4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 110618fa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061901 ja 0x11061fc7 */
  if ((!C.cf&&!C.zf)) goto L_11061fc7;
  /* 11061907 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1106190d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106190f mov cl, byte ptr [edx + 0x1106227c] */
  CL = (r8((uint32_t)(EDX + 0x1106227c)));
  /* 11061915 jmp dword ptr [ecx*4 + 0x11062240] */
  switch (ECX) {
    case 0: goto L_1106191c;
    case 1: goto L_11061bb0;
    case 2: goto L_11061a40;
    case 3: goto L_11061ce9;
    case 4: goto L_110619ab;
    case 5: goto L_11061931;
    case 6: goto L_11061cbb;
    case 7: goto L_11061bc0;
    case 8: goto L_11061b65;
    case 9: goto L_11061d35;
    case 10: goto L_11061cdf;
    case 11: goto L_11061a56;
    case 12: goto L_11061cd3;
    case 13: goto L_11061cf5;
    case 14: goto L_11061fc7;
    default: x86_unimpl("switch@0x11061915 out of table"); return;
  }
L_1106191c:;
  /* 1106191c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106191f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11061924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061926 jne 0x11061931 */
  if (!C.zf) goto L_11061931;
  /* 11061928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106192b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1106192e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11061931:;
  /* 11061931 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061934 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1106193a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106193c je 0x11061977 */
  if (C.zf) goto L_11061977;
  /* 1106193e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11061941 push eax */
  push32((uint32_t)(EAX));
  /* 11061942 call 0x11062410 */
  push32(0x11061947u); f_11062410();
  /* 11061947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106194a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1106194e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11061952 push ecx */
  push32((uint32_t)(ECX));
  /* 11061953 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11061959 push edx */
  push32((uint32_t)(EDX));
  /* 1106195a call 0x110634f0 */
  push32(0x1106195fu); f_110634f0();
  /* 1106195f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061962 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11061965 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061969 jge 0x11061975 */
  if ((C.sf==C.of)) goto L_11061975;
  /* 1106196b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11061975:;
  /* 11061975 jmp 0x1106199d */
  goto L_1106199d;
L_11061977:;
  /* 11061977 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1106197a push eax */
  push32((uint32_t)(EAX));
  /* 1106197b call 0x110623d0 */
  push32(0x11061980u); f_110623d0();
  /* 11061980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061983 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1106198a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11061990 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11061996 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1106199d:;
  /* 1106199d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 110619a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 110619a6 jmp 0x11061fc7 */
  goto L_11061fc7;
L_110619ab:;
  /* 110619ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 110619ae push eax */
  push32((uint32_t)(EAX));
  /* 110619af call 0x110623d0 */
  push32(0x110619b4u); f_110623d0();
  /* 110619b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110619b7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 110619bd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110619c4 je 0x110619d2 */
  if (C.zf) goto L_110619d2;
  /* 110619c6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 110619cc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110619d0 jne 0x110619ec */
  if (!C.zf) goto L_110619ec;
L_110619d2:;
  /* 110619d2 mov edx, dword ptr [0x11084fb0] */
  EDX = (r32((uint32_t)(0x11084fb0)));
  /* 110619d8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 110619db mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110619de push eax */
  push32((uint32_t)(EAX));
  /* 110619df call 0x1105d430 */
  push32(0x110619e4u); f_1105d430();
  /* 110619e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110619e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110619ea jmp 0x11061a3b */
  goto L_11061a3b;
L_110619ec:;
  /* 110619ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110619ef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 110619f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110619f7 je 0x11061a1c */
  if (C.zf) goto L_11061a1c;
  /* 110619f9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 110619ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11061a02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11061a05 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11061a0b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11061a0e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11061a10 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11061a13 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11061a1a jmp 0x11061a3b */
  goto L_11061a3b;
L_11061a1c:;
  /* 11061a1c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11061a23 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11061a29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11061a2c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11061a2f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11061a35 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11061a38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11061a3b:;
  /* 11061a3b jmp 0x11061fc7 */
  goto L_11061fc7;
L_11061a40:;
  /* 11061a40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061a43 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11061a49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11061a4b jne 0x11061a56 */
  if (!C.zf) goto L_11061a56;
  /* 11061a4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061a50 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11061a53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11061a56:;
  /* 11061a56 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061a5d jne 0x11061a6b */
  if (!C.zf) goto L_11061a6b;
  /* 11061a5f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11061a69 jmp 0x11061a77 */
  goto L_11061a77;
L_11061a6b:;
  /* 11061a6b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11061a71 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11061a77:;
  /* 11061a77 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11061a7d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11061a83 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11061a86 push edx */
  push32((uint32_t)(EDX));
  /* 11061a87 call 0x110623d0 */
  push32(0x11061a8cu); f_110623d0();
  /* 11061a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061a8f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11061a92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061a95 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11061a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061a9c je 0x11061b06 */
  if (C.zf) goto L_11061b06;
  /* 11061a9e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061aa2 jne 0x11061aad */
  if (!C.zf) goto L_11061aad;
  /* 11061aa4 mov ecx, dword ptr [0x11084fb4] */
  ECX = (r32((uint32_t)(0x11084fb4)));
  /* 11061aaa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11061aad:;
  /* 11061aad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11061ab4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061ab7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11061abd:;
  /* 11061abd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11061ac3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11061ac9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061acc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11061ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061ad4 je 0x11061af6 */
  if (C.zf) goto L_11061af6;
  /* 11061ad6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11061adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11061ade mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11061ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061ae3 je 0x11061af6 */
  if (C.zf) goto L_11061af6;
  /* 11061ae5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11061aeb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061aee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11061af4 jmp 0x11061abd */
  goto L_11061abd;
L_11061af6:;
  /* 11061af6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11061afc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061aff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11061b01 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11061b04 jmp 0x11061b60 */
  goto L_11061b60;
L_11061b06:;
  /* 11061b06 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061b0a jne 0x11061b14 */
  if (!C.zf) goto L_11061b14;
  /* 11061b0c mov eax, dword ptr [0x11084fb0] */
  EAX = (r32((uint32_t)(0x11084fb0)));
  /* 11061b11 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11061b14:;
  /* 11061b14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061b17 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11061b1d:;
  /* 11061b1d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11061b23 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11061b29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061b2c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11061b32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061b34 je 0x11061b54 */
  if (C.zf) goto L_11061b54;
  /* 11061b36 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11061b3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11061b3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061b41 je 0x11061b54 */
  if (C.zf) goto L_11061b54;
  /* 11061b43 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11061b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061b4c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11061b52 jmp 0x11061b1d */
  goto L_11061b1d;
L_11061b54:;
  /* 11061b54 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11061b5a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061b5d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11061b60:;
  /* 11061b60 jmp 0x11061fc7 */
  goto L_11061fc7;
L_11061b65:;
  /* 11061b65 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11061b68 push edx */
  push32((uint32_t)(EDX));
  /* 11061b69 call 0x110623d0 */
  push32(0x11061b6eu); f_110623d0();
  /* 11061b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061b71 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11061b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061b7a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11061b7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061b7f je 0x11061b93 */
  if (C.zf) goto L_11061b93;
  /* 11061b81 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11061b87 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11061b8e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11061b91 jmp 0x11061ba1 */
  goto L_11061ba1;
L_11061b93:;
  /* 11061b93 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11061b99 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11061b9f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11061ba1:;
  /* 11061ba1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11061bab jmp 0x11061fc7 */
  goto L_11061fc7;
L_11061bb0:;
  /* 11061bb0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11061bb7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11061bba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11061bbd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11061bc0:;
  /* 11061bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061bc3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11061bc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11061bc8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11061bce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11061bd1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061bd8 jge 0x11061be6 */
  if ((C.sf==C.of)) goto L_11061be6;
  /* 11061bda mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11061be4 jmp 0x11061c02 */
  goto L_11061c02;
L_11061be6:;
  /* 11061be6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061bed jne 0x11061c02 */
  if (!C.zf) goto L_11061c02;
  /* 11061bef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11061bf3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061bf6 jne 0x11061c02 */
  if (!C.zf) goto L_11061c02;
  /* 11061bf8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11061c02:;
  /* 11061c02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11061c05 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061c08 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11061c0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11061c0e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061c11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11061c13 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11061c16 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11061c1c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11061c22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11061c25 push ecx */
  push32((uint32_t)(ECX));
  /* 11061c26 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11061c2c push edx */
  push32((uint32_t)(EDX));
  /* 11061c2d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11061c31 push eax */
  push32((uint32_t)(EAX));
  /* 11061c32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061c35 push ecx */
  push32((uint32_t)(ECX));
  /* 11061c36 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11061c3c push edx */
  push32((uint32_t)(EDX));
  /* 11061c3d call dword ptr [0x110853a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110853a0))), 0x11061c43u);
  /* 11061c43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061c46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061c49 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11061c4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061c50 je 0x11061c68 */
  if (C.zf) goto L_11061c68;
  /* 11061c52 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061c59 jne 0x11061c68 */
  if (!C.zf) goto L_11061c68;
  /* 11061c5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061c5e push ecx */
  push32((uint32_t)(ECX));
  /* 11061c5f call dword ptr [0x110853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110853ac))), 0x11061c65u);
  /* 11061c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11061c68:;
  /* 11061c68 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11061c6c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061c6f jne 0x11061c8a */
  if (!C.zf) goto L_11061c8a;
  /* 11061c71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061c74 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11061c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061c7b jne 0x11061c8a */
  if (!C.zf) goto L_11061c8a;
  /* 11061c7d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061c80 push ecx */
  push32((uint32_t)(ECX));
  /* 11061c81 call dword ptr [0x110853a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110853a4))), 0x11061c87u);
  /* 11061c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11061c8a:;
  /* 11061c8a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061c8d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11061c90 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061c93 jne 0x11061ca7 */
  if (!C.zf) goto L_11061ca7;
  /* 11061c95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061c98 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11061c9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11061c9e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061ca1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061ca4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11061ca7:;
  /* 11061ca7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061caa push eax */
  push32((uint32_t)(EAX));
  /* 11061cab call 0x1105d430 */
  push32(0x11061cb0u); f_1105d430();
  /* 11061cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061cb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11061cb6 jmp 0x11061fc7 */
  goto L_11061fc7;
L_11061cbb:;
  /* 11061cbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061cbe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11061cc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11061cc4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11061cce jmp 0x11061d55 */
  goto L_11061d55;
L_11061cd3:;
  /* 11061cd3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11061cdd jmp 0x11061d55 */
  goto L_11061d55;
L_11061cdf:;
  /* 11061cdf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11061ce9:;
  /* 11061ce9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11061cf3 jmp 0x11061cff */
  goto L_11061cff;
L_11061cf5:;
  /* 11061cf5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11061cff:;
  /* 11061cff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11061d09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061d0c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11061d12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061d14 je 0x11061d33 */
  if (C.zf) goto L_11061d33;
  /* 11061d16 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11061d1d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11061d23 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061d26 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11061d2c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11061d33:;
  /* 11061d33 jmp 0x11061d55 */
  goto L_11061d55;
L_11061d35:;
  /* 11061d35 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11061d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061d42 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11061d48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11061d4a je 0x11061d55 */
  if (C.zf) goto L_11061d55;
  /* 11061d4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061d4f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11061d52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11061d55:;
  /* 11061d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061d58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11061d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061d5f je 0x11061d7e */
  if (C.zf) goto L_11061d7e;
  /* 11061d61 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11061d64 push ecx */
  push32((uint32_t)(ECX));
  /* 11061d65 call 0x110623f0 */
  push32(0x11061d6au); f_110623f0();
  /* 11061d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061d6d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11061d73 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11061d79 jmp 0x11061e0f */
  goto L_11061e0f;
L_11061d7e:;
  /* 11061d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061d81 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11061d84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061d86 je 0x11061dd0 */
  if (C.zf) goto L_11061dd0;
  /* 11061d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061d8b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11061d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061d90 je 0x11061db0 */
  if (C.zf) goto L_11061db0;
  /* 11061d92 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11061d95 push ecx */
  push32((uint32_t)(ECX));
  /* 11061d96 call 0x110623d0 */
  push32(0x11061d9bu); f_110623d0();
  /* 11061d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061d9e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11061da1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11061da2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11061da8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11061dae jmp 0x11061dce */
  goto L_11061dce;
L_11061db0:;
  /* 11061db0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11061db3 push edx */
  push32((uint32_t)(EDX));
  /* 11061db4 call 0x110623d0 */
  push32(0x11061db9u); f_110623d0();
  /* 11061db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061dbc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11061dc1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11061dc2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11061dc8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11061dce:;
  /* 11061dce jmp 0x11061e0f */
  goto L_11061e0f;
L_11061dd0:;
  /* 11061dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061dd3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11061dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061dd8 je 0x11061df5 */
  if (C.zf) goto L_11061df5;
  /* 11061dda lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11061ddd push ecx */
  push32((uint32_t)(ECX));
  /* 11061dde call 0x110623d0 */
  push32(0x11061de3u); f_110623d0();
  /* 11061de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061de6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11061de7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11061ded mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11061df3 jmp 0x11061e0f */
  goto L_11061e0f;
L_11061df5:;
  /* 11061df5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11061df8 push edx */
  push32((uint32_t)(EDX));
  /* 11061df9 call 0x110623d0 */
  push32(0x11061dfeu); f_110623d0();
  /* 11061dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11061e01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11061e03 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11061e09 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11061e0f:;
  /* 11061e0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061e12 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11061e15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061e17 je 0x11061e57 */
  if (C.zf) goto L_11061e57;
  /* 11061e19 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061e20 jg 0x11061e57 */
  if ((!C.zf&&C.sf==C.of)) goto L_11061e57;
  /* 11061e22 jl 0x11061e2d */
  if ((C.sf!=C.of)) goto L_11061e2d;
  /* 11061e24 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061e2b jae 0x11061e57 */
  if (!C.cf) goto L_11061e57;
L_11061e2d:;
  /* 11061e2d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11061e33 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11061e35 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11061e3b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061e3e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11061e40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11061e46 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11061e4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061e4f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11061e52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11061e55 jmp 0x11061e6f */
  goto L_11061e6f;
L_11061e57:;
  /* 11061e57 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11061e5d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11061e63 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11061e69 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11061e6f:;
  /* 11061e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061e72 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11061e78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061e7a jne 0x11061e97 */
  if (!C.zf) goto L_11061e97;
  /* 11061e7c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11061e82 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11061e88 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11061e8b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11061e91 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11061e97:;
  /* 11061e97 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061e9e jge 0x11061eac */
  if ((C.sf==C.of)) goto L_11061eac;
  /* 11061ea0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11061eaa jmp 0x11061eb5 */
  goto L_11061eb5;
L_11061eac:;
  /* 11061eac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061eaf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11061eb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11061eb5:;
  /* 11061eb5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11061ebb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11061ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061ec3 jne 0x11061ecc */
  if (!C.zf) goto L_11061ecc;
  /* 11061ec5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11061ecc:;
  /* 11061ecc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11061ecf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11061ed2:;
  /* 11061ed2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11061ed8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11061ede sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061ee1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11061ee7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11061ee9 jg 0x11061eff */
  if ((!C.zf&&C.sf==C.of)) goto L_11061eff;
  /* 11061eeb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11061ef1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11061ef7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11061ef9 je 0x11061f80 */
  if (C.zf) goto L_11061f80;
L_11061eff:;
  /* 11061eff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11061f05 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11061f06 push edx */
  push32((uint32_t)(EDX));
  /* 11061f07 push eax */
  push32((uint32_t)(EAX));
  /* 11061f08 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11061f0e push edx */
  push32((uint32_t)(EDX));
  /* 11061f0f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11061f15 push eax */
  push32((uint32_t)(EAX));
  /* 11061f16 call 0x11061290 */
  push32(0x11061f1bu); f_11061290();
  /* 11061f1b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061f1e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11061f24 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11061f2a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11061f2b push edx */
  push32((uint32_t)(EDX));
  /* 11061f2c push eax */
  push32((uint32_t)(EAX));
  /* 11061f2d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11061f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11061f34 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11061f3a push edx */
  push32((uint32_t)(EDX));
  /* 11061f3b call 0x11061220 */
  push32(0x11061f40u); f_11061220();
  /* 11061f40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11061f46 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11061f4c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061f53 jle 0x11061f67 */
  if ((C.zf||C.sf!=C.of)) goto L_11061f67;
  /* 11061f55 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11061f5b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061f61 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11061f67:;
  /* 11061f67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061f6a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11061f70 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11061f72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061f75 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061f78 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11061f7b jmp 0x11061ed2 */
  goto L_11061ed2;
L_11061f80:;
  /* 11061f80 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11061f83 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061f86 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11061f89 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061f8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061f8f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11061f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061f95 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11061f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061f9c je 0x11061fc7 */
  if (C.zf) goto L_11061fc7;
  /* 11061f9e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061fa1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11061fa4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061fa7 jne 0x11061faf */
  if (!C.zf) goto L_11061faf;
  /* 11061fa9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061fad jne 0x11061fc7 */
  if (!C.zf) goto L_11061fc7;
L_11061faf:;
  /* 11061faf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061fb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11061fb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11061fb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11061fbb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11061fbe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11061fc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11061fc4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11061fc7:;
  /* 11061fc7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11061fce jne 0x110621a2 */
  if (!C.zf) goto L_110621a2;
  /* 11061fd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061fd7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11061fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11061fdc je 0x1106202d */
  if (C.zf) goto L_1106202d;
  /* 11061fde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061fe1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11061fe7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11061fe9 je 0x11061ffb */
  if (C.zf) goto L_11061ffb;
  /* 11061feb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11061ff2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11061ff9 jmp 0x1106202d */
  goto L_1106202d;
L_11061ffb:;
  /* 11061ffb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11061ffe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11062001 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062003 je 0x11062015 */
  if (C.zf) goto L_11062015;
  /* 11062005 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1106200c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11062013 jmp 0x1106202d */
  goto L_1106202d;
L_11062015:;
  /* 11062015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062018 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1106201b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106201d je 0x1106202d */
  if (C.zf) goto L_1106202d;
  /* 1106201f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11062026 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1106202d:;
  /* 1106202d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11062033 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062036 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062039 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1106203f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062042 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11062045 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062047 jne 0x11062065 */
  if (!C.zf) goto L_11062065;
  /* 11062049 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1106204f push eax */
  push32((uint32_t)(EAX));
  /* 11062050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062053 push ecx */
  push32((uint32_t)(ECX));
  /* 11062054 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1106205a push edx */
  push32((uint32_t)(EDX));
  /* 1106205b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1106205d call 0x11062340 */
  push32(0x11062062u); f_11062340();
  /* 11062062 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11062065:;
  /* 11062065 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1106206b push eax */
  push32((uint32_t)(EAX));
  /* 1106206c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106206f push ecx */
  push32((uint32_t)(ECX));
  /* 11062070 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11062073 push edx */
  push32((uint32_t)(EDX));
  /* 11062074 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1106207a push eax */
  push32((uint32_t)(EAX));
  /* 1106207b call 0x11062380 */
  push32(0x11062080u); f_11062380();
  /* 11062080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062086 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11062089 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106208b je 0x110620b3 */
  if (C.zf) goto L_110620b3;
  /* 1106208d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062090 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11062093 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062095 jne 0x110620b3 */
  if (!C.zf) goto L_110620b3;
  /* 11062097 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1106209d push eax */
  push32((uint32_t)(EAX));
  /* 1106209e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110620a1 push ecx */
  push32((uint32_t)(ECX));
  /* 110620a2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 110620a8 push edx */
  push32((uint32_t)(EDX));
  /* 110620a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 110620ab call 0x11062340 */
  push32(0x110620b0u); f_11062340();
  /* 110620b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110620b3:;
  /* 110620b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110620b7 je 0x11062161 */
  if (C.zf) goto L_11062161;
  /* 110620bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110620c1 jle 0x11062161 */
  if ((C.zf||C.sf!=C.of)) goto L_11062161;
  /* 110620c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110620ca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 110620d0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110620d3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_110620d9:;
  /* 110620d9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 110620df mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 110620e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110620e8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 110620ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110620f0 je 0x1106215f */
  if (C.zf) goto L_1106215f;
  /* 110620f2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 110620f8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 110620fb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11062102 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11062109 push eax */
  push32((uint32_t)(EAX));
  /* 1106210a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11062110 push ecx */
  push32((uint32_t)(ECX));
  /* 11062111 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11062117 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106211a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11062120 call 0x110634f0 */
  push32(0x11062125u); f_110634f0();
  /* 11062125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062128 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1106212e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062135 jg 0x11062139 */
  if ((!C.zf&&C.sf==C.of)) goto L_11062139;
  /* 11062137 jmp 0x1106215f */
  goto L_1106215f;
L_11062139:;
  /* 11062139 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1106213f push eax */
  push32((uint32_t)(EAX));
  /* 11062140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062143 push ecx */
  push32((uint32_t)(ECX));
  /* 11062144 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1106214a push edx */
  push32((uint32_t)(EDX));
  /* 1106214b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11062151 push eax */
  push32((uint32_t)(EAX));
  /* 11062152 call 0x11062380 */
  push32(0x11062157u); f_11062380();
  /* 11062157 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106215a jmp 0x110620d9 */
  goto L_110620d9;
L_1106215f:;
  /* 1106215f jmp 0x1106217c */
  goto L_1106217c;
L_11062161:;
  /* 11062161 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11062167 push ecx */
  push32((uint32_t)(ECX));
  /* 11062168 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106216b push edx */
  push32((uint32_t)(EDX));
  /* 1106216c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106216f push eax */
  push32((uint32_t)(EAX));
  /* 11062170 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11062173 push ecx */
  push32((uint32_t)(ECX));
  /* 11062174 call 0x11062380 */
  push32(0x11062179u); f_11062380();
  /* 11062179 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106217c:;
  /* 1106217c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106217f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11062182 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062184 je 0x110621a2 */
  if (C.zf) goto L_110621a2;
  /* 11062186 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1106218c push eax */
  push32((uint32_t)(EAX));
  /* 1106218d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062190 push ecx */
  push32((uint32_t)(ECX));
  /* 11062191 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11062197 push edx */
  push32((uint32_t)(EDX));
  /* 11062198 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1106219a call 0x11062340 */
  push32(0x1106219fu); f_11062340();
  /* 1106219f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110621a2:;
  /* 110621a2 jmp 0x110615b4 */
  goto L_110615b4;
L_110621a7:;
  /* 110621a7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 110621ad pop edi */
  EDI = (pop32());
  /* 110621ae pop esi */
  ESI = (pop32());
  /* 110621af pop ebx */
  EBX = (pop32());
  /* 110621b0 mov esp, ebp */
  ESP = (EBP);
  /* 110621b2 pop ebp */
  EBP = (pop32());
  /* 110621b3 ret  */
  ESPCHK(0x11061590u, _esp0);
  ESP += 4; return;
}

/* FUN_100122c0 @ 0x110622c0 (119 bytes, 44 insns) */
void f_110622c0(void) {
  FTRACE(0x110622c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110622c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110622c1 mov ebp, esp */
  EBP = (ESP);
  /* 110622c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110622c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110622c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110622ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110622cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110622d0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 110622d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110622d6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110622da jl 0x11062302 */
  if ((C.sf!=C.of)) goto L_11062302;
  /* 110622dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110622df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110622e1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 110622e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 110622e6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 110622ea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 110622f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110622f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110622f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110622f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110622fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110622fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11062300 jmp 0x11062315 */
  goto L_11062315;
L_11062302:;
  /* 11062302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062305 push edx */
  push32((uint32_t)(EDX));
  /* 11062306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062309 push eax */
  push32((uint32_t)(EAX));
  /* 1106230a call 0x11061310 */
  push32(0x1106230fu); f_11061310();
  /* 1106230f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062312 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11062315:;
  /* 11062315 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062319 jne 0x11062326 */
  if (!C.zf) goto L_11062326;
  /* 1106231b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106231e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11062324 jmp 0x11062333 */
  goto L_11062333;
L_11062326:;
  /* 11062326 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062329 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106232b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106232e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062331 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11062333:;
  /* 11062333 mov esp, ebp */
  ESP = (EBP);
  /* 11062335 pop ebp */
  EBP = (pop32());
  /* 11062336 ret  */
  ESPCHK(0x110622c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012340 @ 0x11062340 (53 bytes, 23 insns) */
void f_11062340(void) {
  FTRACE(0x11062340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062340 push ebp */
  push32((uint32_t)(EBP));
  /* 11062341 mov ebp, esp */
  EBP = (ESP);
L_11062343:;
  /* 11062343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062346 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062349 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106234c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1106234f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062351 jle 0x11062373 */
  if ((C.zf||C.sf!=C.of)) goto L_11062373;
  /* 11062353 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11062356 push edx */
  push32((uint32_t)(EDX));
  /* 11062357 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106235a push eax */
  push32((uint32_t)(EAX));
  /* 1106235b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106235e push ecx */
  push32((uint32_t)(ECX));
  /* 1106235f call 0x110622c0 */
  push32(0x11062364u); f_110622c0();
  /* 11062364 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062367 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106236a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106236d jne 0x11062371 */
  if (!C.zf) goto L_11062371;
  /* 1106236f jmp 0x11062373 */
  goto L_11062373;
L_11062371:;
  /* 11062371 jmp 0x11062343 */
  goto L_11062343;
L_11062373:;
  /* 11062373 pop ebp */
  EBP = (pop32());
  /* 11062374 ret  */
  ESPCHK(0x11062340u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x11062380 (74 bytes, 31 insns) */
void f_11062380(void) {
  FTRACE(0x11062380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062380 push ebp */
  push32((uint32_t)(EBP));
  /* 11062381 mov ebp, esp */
  EBP = (ESP);
  /* 11062383 push ecx */
  push32((uint32_t)(ECX));
L_11062384:;
  /* 11062384 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062387 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106238a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106238d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11062390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062392 jle 0x110623c6 */
  if ((C.zf||C.sf!=C.of)) goto L_110623c6;
  /* 11062394 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11062397 push edx */
  push32((uint32_t)(EDX));
  /* 11062398 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106239b push eax */
  push32((uint32_t)(EAX));
  /* 1106239c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106239f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110623a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110623a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110623a8 push eax */
  push32((uint32_t)(EAX));
  /* 110623a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110623ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110623af mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110623b2 call 0x110622c0 */
  push32(0x110623b7u); f_110622c0();
  /* 110623b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110623ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110623bd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110623c0 jne 0x110623c4 */
  if (!C.zf) goto L_110623c4;
  /* 110623c2 jmp 0x110623c6 */
  goto L_110623c6;
L_110623c4:;
  /* 110623c4 jmp 0x11062384 */
  goto L_11062384;
L_110623c6:;
  /* 110623c6 mov esp, ebp */
  ESP = (EBP);
  /* 110623c8 pop ebp */
  EBP = (pop32());
  /* 110623c9 ret  */
  ESPCHK(0x11062380u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x110623d0 (26 bytes, 12 insns) */
void f_110623d0(void) {
  FTRACE(0x110623d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110623d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110623d1 mov ebp, esp */
  EBP = (ESP);
  /* 110623d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110623d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110623d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110623db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110623de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110623e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110623e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110623e5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 110623e8 pop ebp */
  EBP = (pop32());
  /* 110623e9 ret  */
  ESPCHK(0x110623d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123f0 @ 0x110623f0 (31 bytes, 14 insns) */
void f_110623f0(void) {
  FTRACE(0x110623f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110623f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110623f1 mov ebp, esp */
  EBP = (ESP);
  /* 110623f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110623f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110623f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110623fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110623fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11062400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062403 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11062405 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062408 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1106240a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1106240d pop ebp */
  EBP = (pop32());
  /* 1106240e ret  */
  ESPCHK(0x110623f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012410 @ 0x11062410 (27 bytes, 12 insns) */
void f_11062410(void) {
  FTRACE(0x11062410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062410 push ebp */
  push32((uint32_t)(EBP));
  /* 11062411 mov ebp, esp */
  EBP = (ESP);
  /* 11062413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062416 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11062418 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106241b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106241e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11062420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062423 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11062425 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11062429 pop ebp */
  EBP = (pop32());
  /* 1106242a ret  */
  ESPCHK(0x11062410u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11062430 (145 bytes, 42 insns) */
void f_11062430(void) {
  FTRACE(0x11062430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062430 push ebp */
  push32((uint32_t)(EBP));
  /* 11062431 mov ebp, esp */
  EBP = (ESP);
  /* 11062433 push ecx */
  push32((uint32_t)(ECX));
  /* 11062434 call 0x110624e0 */
  push32(0x11062439u); f_110624e0();
  /* 11062439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106243c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1106243e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11062445 jmp 0x11062450 */
  goto L_11062450;
L_11062447:;
  /* 11062447 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106244a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106244d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11062450:;
  /* 11062450 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062454 jae 0x1106247a */
  if (!C.cf) goto L_1106247a;
  /* 11062456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062459 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106245c cmp ecx, dword ptr [eax*8 + 0x11084fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11084fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062463 jne 0x11062478 */
  if (!C.zf) goto L_11062478;
  /* 11062465 call 0x110624d0 */
  push32(0x1106246au); f_110624d0();
  /* 1106246a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106246d mov ecx, dword ptr [edx*8 + 0x11084fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11084fbc)));
  /* 11062474 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11062476 jmp 0x110624bd */
  goto L_110624bd;
L_11062478:;
  /* 11062478 jmp 0x11062447 */
  goto L_11062447;
L_1106247a:;
  /* 1106247a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106247e jb 0x11062493 */
  if (C.cf) goto L_11062493;
  /* 11062480 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062484 ja 0x11062493 */
  if ((!C.cf&&!C.zf)) goto L_11062493;
  /* 11062486 call 0x110624d0 */
  push32(0x1106248bu); f_110624d0();
  /* 1106248b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11062491 jmp 0x110624bd */
  goto L_110624bd;
L_11062493:;
  /* 11062493 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106249a jb 0x110624b2 */
  if (C.cf) goto L_110624b2;
  /* 1106249c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110624a3 ja 0x110624b2 */
  if ((!C.cf&&!C.zf)) goto L_110624b2;
  /* 110624a5 call 0x110624d0 */
  push32(0x110624aau); f_110624d0();
  /* 110624aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 110624b0 jmp 0x110624bd */
  goto L_110624bd;
L_110624b2:;
  /* 110624b2 call 0x110624d0 */
  push32(0x110624b7u); f_110624d0();
  /* 110624b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_110624bd:;
  /* 110624bd mov esp, ebp */
  ESP = (EBP);
  /* 110624bf pop ebp */
  EBP = (pop32());
  /* 110624c0 ret  */
  ESPCHK(0x11062430u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x110624d0 (13 bytes, 6 insns) */
void f_110624d0(void) {
  FTRACE(0x110624d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110624d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110624d1 mov ebp, esp */
  EBP = (ESP);
  /* 110624d3 call 0x1105a040 */
  push32(0x110624d8u); f_1105a040();
  /* 110624d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110624db pop ebp */
  EBP = (pop32());
  /* 110624dc ret  */
  ESPCHK(0x110624d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x110624e0 (13 bytes, 6 insns) */
void f_110624e0(void) {
  FTRACE(0x110624e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110624e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110624e1 mov ebp, esp */
  EBP = (ESP);
  /* 110624e3 call 0x1105a040 */
  push32(0x110624e8u); f_1105a040();
  /* 110624e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110624eb pop ebp */
  EBP = (pop32());
  /* 110624ec ret  */
  ESPCHK(0x110624e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x110624f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_110624f0(void) {
  FTRACE(0x110624f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110624f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110624f1 mov ebp, esp */
  EBP = (ESP);
  /* 110624f3 push edi */
  push32((uint32_t)(EDI));
  /* 110624f4 push esi */
  push32((uint32_t)(ESI));
  /* 110624f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110624f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110624fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110624fe mov eax, ecx */
  EAX = (ECX);
  /* 11062500 mov edx, ecx */
  EDX = (ECX);
  /* 11062502 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11062504 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062506 jbe 0x11062510 */
  if ((C.cf||C.zf)) goto L_11062510;
  /* 11062508 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106250a jb 0x11062688 */
  if (C.cf) goto L_11062688;
L_11062510:;
  /* 11062510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11062516 jne 0x1106252c */
  if (!C.zf) goto L_1106252c;
  /* 11062518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1106251b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1106251e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062521 jb 0x1106254c */
  if (C.cf) goto L_1106254c;
  /* 11062523 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11062525 jmp dword ptr [edx*4 + 0x11062638] */
  switch (EDX) {
    case 0: goto L_11062648;
    case 1: goto L_11062650;
    case 2: goto L_1106265c;
    case 3: goto L_11062670;
    default: x86_unimpl("switch@0x11062525 out of table"); return;
  }
L_1106252c:;
  /* 1106252c mov eax, edi */
  EAX = (EDI);
  /* 1106252e mov edx, 3 */
  EDX = (0x3u);
  /* 11062533 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062536 jb 0x11062544 */
  if (C.cf) goto L_11062544;
  /* 11062538 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1106253b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106253d jmp dword ptr [eax*4 + 0x11062550] */
  switch (EAX) {
    case 1: goto L_11062560;
    case 2: goto L_1106258c;
    case 3: goto L_110625b0;
    default: x86_unimpl("switch@0x1106253d out of table"); return;
  }
L_11062544:;
  /* 11062544 jmp dword ptr [ecx*4 + 0x11062648] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11062648)))); return;
  /* 1106254b nop  */
  /* nop */
L_1106254c:;
  /* 1106254c jmp dword ptr [ecx*4 + 0x110625cc] */
  switch (ECX) {
    case 0: goto L_1106262f;
    case 1: goto L_1106261c;
    case 2: goto L_11062614;
    case 3: goto L_1106260c;
    case 4: goto L_11062604;
    case 5: goto L_110625fc;
    case 6: goto L_110625f4;
    case 7: goto L_110625ec;
    default: x86_unimpl("switch@0x1106254c out of table"); return;
  }
  /* 11062553 nop  */
  /* nop */
L_11062560:;
  /* 11062560 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11062562 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11062564 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11062566 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11062569 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1106256c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1106256f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11062572 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11062575 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11062578 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1106257b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106257e jb 0x1106254c */
  if (C.cf) goto L_1106254c;
  /* 11062580 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11062582 jmp dword ptr [edx*4 + 0x11062638] */
  switch (EDX) {
    case 0: goto L_11062648;
    case 1: goto L_11062650;
    case 2: goto L_1106265c;
    case 3: goto L_11062670;
    default: x86_unimpl("switch@0x11062582 out of table"); return;
  }
  /* 11062589 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1106258c:;
  /* 1106258c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1106258e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11062590 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11062592 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11062595 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11062598 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1106259b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1106259e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110625a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110625a4 jb 0x1106254c */
  if (C.cf) goto L_1106254c;
  /* 110625a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110625a8 jmp dword ptr [edx*4 + 0x11062638] */
  switch (EDX) {
    case 0: goto L_11062648;
    case 1: goto L_11062650;
    case 2: goto L_1106265c;
    case 3: goto L_11062670;
    default: x86_unimpl("switch@0x110625a8 out of table"); return;
  }
  /* 110625af nop  */
  /* nop */
L_110625b0:;
  /* 110625b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110625b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110625b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110625b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110625b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110625ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110625bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110625be jb 0x1106254c */
  if (C.cf) goto L_1106254c;
  /* 110625c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110625c2 jmp dword ptr [edx*4 + 0x11062638] */
  switch (EDX) {
    case 0: goto L_11062648;
    case 1: goto L_11062650;
    case 2: goto L_1106265c;
    case 3: goto L_11062670;
    default: x86_unimpl("switch@0x110625c2 out of table"); return;
  }
  /* 110625c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110625ec:;
  /* 110625ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 110625f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_110625f4:;
  /* 110625f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 110625f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_110625fc:;
  /* 110625fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11062600 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11062604:;
  /* 11062604 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11062608 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1106260c:;
  /* 1106260c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11062610 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11062614:;
  /* 11062614 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11062618 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1106261c:;
  /* 1106261c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11062620 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11062624 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1106262b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1106262d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1106262f:;
  /* 1106262f jmp dword ptr [edx*4 + 0x11062638] */
  switch (EDX) {
    case 0: goto L_11062648;
    case 1: goto L_11062650;
    case 2: goto L_1106265c;
    case 3: goto L_11062670;
    default: x86_unimpl("switch@0x1106262f out of table"); return;
  }
  /* 11062636 mov edi, edi */
  EDI = (EDI);
L_11062648:;
  /* 11062648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106264b pop esi */
  ESI = (pop32());
  /* 1106264c pop edi */
  EDI = (pop32());
  /* 1106264d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106264e ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
  /* 1106264f nop  */
  /* nop */
L_11062650:;
  /* 11062650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11062652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11062654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062657 pop esi */
  ESI = (pop32());
  /* 11062658 pop edi */
  EDI = (pop32());
  /* 11062659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106265a ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
  /* 1106265b nop  */
  /* nop */
L_1106265c:;
  /* 1106265c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1106265e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11062660 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11062663 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11062666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062669 pop esi */
  ESI = (pop32());
  /* 1106266a pop edi */
  EDI = (pop32());
  /* 1106266b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106266c ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
  /* 1106266d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11062670:;
  /* 11062670 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11062672 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11062674 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11062677 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1106267a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1106267d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11062680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062683 pop esi */
  ESI = (pop32());
  /* 11062684 pop edi */
  EDI = (pop32());
  /* 11062685 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11062686 ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
  /* 11062687 nop  */
  /* nop */
L_11062688:;
  /* 11062688 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1106268c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11062690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11062696 jne 0x110626bc */
  if (!C.zf) goto L_110626bc;
  /* 11062698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1106269b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1106269e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110626a1 jb 0x110626b0 */
  if (C.cf) goto L_110626b0;
  /* 110626a3 std  */
  C.df=1;
  /* 110626a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110626a6 cld  */
  C.df=0;
  /* 110626a7 jmp dword ptr [edx*4 + 0x110627d0] */
  switch (EDX) {
    case 0: goto L_110627e0;
    case 1: goto L_110627e8;
    case 2: goto L_110627f8;
    case 3: goto L_1106280c;
    default: x86_unimpl("switch@0x110626a7 out of table"); return;
  }
  /* 110626ae mov edi, edi */
  EDI = (EDI);
L_110626b0:;
  /* 110626b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110626b2 jmp dword ptr [ecx*4 + 0x11062780] */
  switch (ECX) {
    case 0: goto L_110627c7;
    default: x86_unimpl("switch@0x110626b2 out of table"); return;
  }
  /* 110626b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110626bc:;
  /* 110626bc mov eax, edi */
  EAX = (EDI);
  /* 110626be mov edx, 3 */
  EDX = (0x3u);
  /* 110626c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110626c6 jb 0x110626d4 */
  if (C.cf) goto L_110626d4;
  /* 110626c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110626cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110626cd jmp dword ptr [eax*4 + 0x110626d8] */
  switch (EAX) {
    case 1: goto L_110626e8;
    case 2: goto L_11062708;
    case 3: goto L_11062730;
    default: x86_unimpl("switch@0x110626cd out of table"); return;
  }
L_110626d4:;
  /* 110626d4 jmp dword ptr [ecx*4 + 0x110627d0] */
  switch (ECX) {
    case 0: goto L_110627e0;
    case 1: goto L_110627e8;
    case 2: goto L_110627f8;
    case 3: goto L_1106280c;
    default: x86_unimpl("switch@0x110626d4 out of table"); return;
  }
  /* 110626db nop  */
  /* nop */
L_110626e8:;
  /* 110626e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110626eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110626ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110626f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110626f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110626f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110626f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110626f8 jb 0x110626b0 */
  if (C.cf) goto L_110626b0;
  /* 110626fa std  */
  C.df=1;
  /* 110626fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110626fd cld  */
  C.df=0;
  /* 110626fe jmp dword ptr [edx*4 + 0x110627d0] */
  switch (EDX) {
    case 0: goto L_110627e0;
    case 1: goto L_110627e8;
    case 2: goto L_110627f8;
    case 3: goto L_1106280c;
    default: x86_unimpl("switch@0x110626fe out of table"); return;
  }
  /* 11062705 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11062708:;
  /* 11062708 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1106270b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1106270d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11062710 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11062713 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11062716 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11062719 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106271c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106271f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062722 jb 0x110626b0 */
  if (C.cf) goto L_110626b0;
  /* 11062724 std  */
  C.df=1;
  /* 11062725 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11062727 cld  */
  C.df=0;
  /* 11062728 jmp dword ptr [edx*4 + 0x110627d0] */
  switch (EDX) {
    case 0: goto L_110627e0;
    case 1: goto L_110627e8;
    case 2: goto L_110627f8;
    case 3: goto L_1106280c;
    default: x86_unimpl("switch@0x11062728 out of table"); return;
  }
  /* 1106272f nop  */
  /* nop */
L_11062730:;
  /* 11062730 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11062733 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11062735 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11062738 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1106273b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1106273e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11062741 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11062744 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11062747 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106274a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106274d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062750 jb 0x110626b0 */
  if (C.cf) goto L_110626b0;
  /* 11062756 std  */
  C.df=1;
  /* 11062757 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11062759 cld  */
  C.df=0;
  /* 1106275a jmp dword ptr [edx*4 + 0x110627d0] */
  switch (EDX) {
    case 0: goto L_110627e0;
    case 1: goto L_110627e8;
    case 2: goto L_110627f8;
    case 3: goto L_1106280c;
    default: x86_unimpl("switch@0x1106275a out of table"); return;
  }
  /* 11062761 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11062764 test byte ptr [edi], ah */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(AH); fl_logic(_r,8); }
  /* 11062766 push es */
  push32((uint32_t)(C.seg_es));
  /* 11062767 adc dword ptr [edi + 0x27941106], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x27941106))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x27941106), (_r)); fl_add(_a,_b,_r,32); }
  /* 1106276e push es */
  push32((uint32_t)(C.seg_es));
  /* 1106276f adc dword ptr [edi + 0x27a41106], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x27a41106))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x27a41106), (_r)); fl_add(_a,_b,_r,32); }
  /* 11062776 push es */
  push32((uint32_t)(C.seg_es));
  /* 11062777 adc dword ptr [edi + 0x27b41106], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x27b41106))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x27b41106), (_r)); fl_add(_a,_b,_r,32); }
  /* 1106277e push es */
  push32((uint32_t)(C.seg_es));
  /* 11062784 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11062788 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1106278c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11062790 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11062794 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11062798 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1106279c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 110627a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 110627a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 110627a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 110627ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 110627b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 110627b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 110627b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 110627bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110627c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110627c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110627c7:;
  /* 110627c7 jmp dword ptr [edx*4 + 0x110627d0] */
  switch (EDX) {
    case 0: goto L_110627e0;
    case 1: goto L_110627e8;
    case 2: goto L_110627f8;
    case 3: goto L_1106280c;
    default: x86_unimpl("switch@0x110627c7 out of table"); return;
  }
  /* 110627ce mov edi, edi */
  EDI = (EDI);
L_110627e0:;
  /* 110627e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110627e3 pop esi */
  ESI = (pop32());
  /* 110627e4 pop edi */
  EDI = (pop32());
  /* 110627e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110627e6 ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
  /* 110627e7 nop  */
  /* nop */
L_110627e8:;
  /* 110627e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110627eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110627ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110627f1 pop esi */
  ESI = (pop32());
  /* 110627f2 pop edi */
  EDI = (pop32());
  /* 110627f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110627f4 ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
  /* 110627f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110627f8:;
  /* 110627f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110627fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110627fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11062801 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11062804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062807 pop esi */
  ESI = (pop32());
  /* 11062808 pop edi */
  EDI = (pop32());
  /* 11062809 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106280a ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
  /* 1106280b nop  */
  /* nop */
L_1106280c:;
  /* 1106280c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1106280f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11062812 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11062815 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11062818 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1106281b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1106281e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062821 pop esi */
  ESI = (pop32());
  /* 11062822 pop edi */
  EDI = (pop32());
  /* 11062823 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11062824 ret  */
  ESPCHK(0x110624f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x11062830 (421 bytes, 148 insns) */
void f_11062830(void) {
  FTRACE(0x11062830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062830 push ebp */
  push32((uint32_t)(EBP));
  /* 11062831 mov ebp, esp */
  EBP = (ESP);
  /* 11062833 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11062835 push 0x110823f8 */
  push32((uint32_t)(0x110823f8u));
  /* 1106283a push 0x11063708 */
  push32((uint32_t)(0x11063708u));
  /* 1106283f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11062845 push eax */
  push32((uint32_t)(EAX));
  /* 11062846 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1106284d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062850 push ebx */
  push32((uint32_t)(EBX));
  /* 11062851 push esi */
  push32((uint32_t)(ESI));
  /* 11062852 push edi */
  push32((uint32_t)(EDI));
  /* 11062853 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11062856 cmp dword ptr [0x11086984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106285d jne 0x110628ae */
  if (!C.zf) goto L_110628ae;
  /* 1106285f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11062862 push eax */
  push32((uint32_t)(EAX));
  /* 11062863 push 1 */
  push32((uint32_t)(0x1u));
  /* 11062865 push 0x110823f4 */
  push32((uint32_t)(0x110823f4u));
  /* 1106286a push 1 */
  push32((uint32_t)(0x1u));
  /* 1106286c call dword ptr [0x11089324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089324))), 0x11062872u);
  /* 11062872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062874 je 0x11062882 */
  if (C.zf) goto L_11062882;
  /* 11062876 mov dword ptr [0x11086984], 1 */
  w32((uint32_t)(0x11086984), (0x1u));
  /* 11062880 jmp 0x110628ae */
  goto L_110628ae;
L_11062882:;
  /* 11062882 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11062885 push ecx */
  push32((uint32_t)(ECX));
  /* 11062886 push 1 */
  push32((uint32_t)(0x1u));
  /* 11062888 push 0x110823f0 */
  push32((uint32_t)(0x110823f0u));
  /* 1106288d push 1 */
  push32((uint32_t)(0x1u));
  /* 1106288f push 0 */
  push32((uint32_t)(0x0u));
  /* 11062891 call dword ptr [0x11089328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089328))), 0x11062897u);
  /* 11062897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062899 je 0x110628a7 */
  if (C.zf) goto L_110628a7;
  /* 1106289b mov dword ptr [0x11086984], 2 */
  w32((uint32_t)(0x11086984), (0x2u));
  /* 110628a5 jmp 0x110628ae */
  goto L_110628ae;
L_110628a7:;
  /* 110628a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110628a9 jmp 0x110629d8 */
  goto L_110629d8;
L_110628ae:;
  /* 110628ae cmp dword ptr [0x11086984], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11086984))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110628b5 jne 0x110628e5 */
  if (!C.zf) goto L_110628e5;
  /* 110628b7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110628bb jne 0x110628c6 */
  if (!C.zf) goto L_110628c6;
  /* 110628bd mov edx, dword ptr [0x11086990] */
  EDX = (r32((uint32_t)(0x11086990)));
  /* 110628c3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_110628c6:;
  /* 110628c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110628c9 push eax */
  push32((uint32_t)(EAX));
  /* 110628ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110628cd push ecx */
  push32((uint32_t)(ECX));
  /* 110628ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110628d1 push edx */
  push32((uint32_t)(EDX));
  /* 110628d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110628d5 push eax */
  push32((uint32_t)(EAX));
  /* 110628d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110628d9 push ecx */
  push32((uint32_t)(ECX));
  /* 110628da call dword ptr [0x11089328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089328))), 0x110628e0u);
  /* 110628e0 jmp 0x110629d8 */
  goto L_110629d8;
L_110628e5:;
  /* 110628e5 cmp dword ptr [0x11086984], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11086984))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110628ec jne 0x110629d6 */
  if (!C.zf) goto L_110629d6;
  /* 110628f2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110628f6 jne 0x11062901 */
  if (!C.zf) goto L_11062901;
  /* 110628f8 mov edx, dword ptr [0x110869a0] */
  EDX = (r32((uint32_t)(0x110869a0)));
  /* 110628fe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11062901:;
  /* 11062901 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062905 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062908 push eax */
  push32((uint32_t)(EAX));
  /* 11062909 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106290c push ecx */
  push32((uint32_t)(ECX));
  /* 1106290d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11062910 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11062912 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062914 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11062917 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106291a push edx */
  push32((uint32_t)(EDX));
  /* 1106291b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106291e push eax */
  push32((uint32_t)(EAX));
  /* 1106291f call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x11062925u);
  /* 11062925 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11062928 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106292c jne 0x11062935 */
  if (!C.zf) goto L_11062935;
  /* 1106292e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062930 jmp 0x110629d8 */
  goto L_110629d8;
L_11062935:;
  /* 11062935 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106293c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1106293f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11062941 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11062944 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11062946 call 0x1105d7a0 */
  push32(0x1106294bu); f_1105d7a0();
  /* 1106294b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1106294e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11062951 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11062954 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11062957 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1106295a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1106295c push edx */
  push32((uint32_t)(EDX));
  /* 1106295d push 0 */
  push32((uint32_t)(0x0u));
  /* 1106295f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11062962 push eax */
  push32((uint32_t)(EAX));
  /* 11062963 call 0x1105e370 */
  push32(0x11062968u); f_1105e370();
  /* 11062968 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106296b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11062972 jmp 0x1106298b */
  goto L_1106298b;
  /* 11062974 mov eax, 1 */
  EAX = (0x1u);
  /* 11062979 ret  */
  ESPCHK(0x11062830u, _esp0);
  ESP += 4; return;
  /* 1106297a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1106297d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11062984 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1106298b:;
  /* 1106298b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106298f jne 0x11062995 */
  if (!C.zf) goto L_11062995;
  /* 11062991 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062993 jmp 0x110629d8 */
  goto L_110629d8;
L_11062995:;
  /* 11062995 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11062998 push ecx */
  push32((uint32_t)(ECX));
  /* 11062999 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106299c push edx */
  push32((uint32_t)(EDX));
  /* 1106299d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110629a0 push eax */
  push32((uint32_t)(EAX));
  /* 110629a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110629a4 push ecx */
  push32((uint32_t)(ECX));
  /* 110629a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110629a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110629aa push edx */
  push32((uint32_t)(EDX));
  /* 110629ab call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x110629b1u);
  /* 110629b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 110629b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110629b8 jne 0x110629be */
  if (!C.zf) goto L_110629be;
  /* 110629ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110629bc jmp 0x110629d8 */
  goto L_110629d8;
L_110629be:;
  /* 110629be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110629c1 push eax */
  push32((uint32_t)(EAX));
  /* 110629c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110629c5 push ecx */
  push32((uint32_t)(ECX));
  /* 110629c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110629c9 push edx */
  push32((uint32_t)(EDX));
  /* 110629ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110629cd push eax */
  push32((uint32_t)(EAX));
  /* 110629ce call dword ptr [0x11089324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089324))), 0x110629d4u);
  /* 110629d4 jmp 0x110629d8 */
  goto L_110629d8;
L_110629d6:;
  /* 110629d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110629d8:;
  /* 110629d8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 110629db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110629de mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110629e5 pop edi */
  EDI = (pop32());
  /* 110629e6 pop esi */
  ESI = (pop32());
  /* 110629e7 pop ebx */
  EBX = (pop32());
  /* 110629e8 mov esp, ebp */
  ESP = (EBP);
  /* 110629ea pop ebp */
  EBP = (pop32());
  /* 110629eb ret  */
  ESPCHK(0x11062830u, _esp0);
  ESP += 4; return;
}

/* FUN_100129f0 @ 0x110629f0 (727 bytes, 263 insns) */
void f_110629f0(void) {
  FTRACE(0x110629f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110629f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110629f1 mov ebp, esp */
  EBP = (ESP);
  /* 110629f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110629f5 push 0x11082408 */
  push32((uint32_t)(0x11082408u));
  /* 110629fa push 0x11063708 */
  push32((uint32_t)(0x11063708u));
  /* 110629ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11062a05 push eax */
  push32((uint32_t)(EAX));
  /* 11062a06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11062a0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062a10 push ebx */
  push32((uint32_t)(EBX));
  /* 11062a11 push esi */
  push32((uint32_t)(ESI));
  /* 11062a12 push edi */
  push32((uint32_t)(EDI));
  /* 11062a13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11062a16 cmp dword ptr [0x110869a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062a1d jne 0x11062a76 */
  if (!C.zf) goto L_11062a76;
  /* 11062a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11062a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11062a25 push 0x110823f4 */
  push32((uint32_t)(0x110823f4u));
  /* 11062a2a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11062a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11062a31 call dword ptr [0x1108931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108931c))), 0x11062a37u);
  /* 11062a37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062a39 je 0x11062a47 */
  if (C.zf) goto L_11062a47;
  /* 11062a3b mov dword ptr [0x110869a8], 1 */
  w32((uint32_t)(0x110869a8), (0x1u));
  /* 11062a45 jmp 0x11062a76 */
  goto L_11062a76;
L_11062a47:;
  /* 11062a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062a4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11062a4d push 0x110823f0 */
  push32((uint32_t)(0x110823f0u));
  /* 11062a52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11062a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062a59 call dword ptr [0x11089320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089320))), 0x11062a5fu);
  /* 11062a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062a61 je 0x11062a6f */
  if (C.zf) goto L_11062a6f;
  /* 11062a63 mov dword ptr [0x110869a8], 2 */
  w32((uint32_t)(0x110869a8), (0x2u));
  /* 11062a6d jmp 0x11062a76 */
  goto L_11062a76;
L_11062a6f:;
  /* 11062a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062a71 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062a76:;
  /* 11062a76 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062a7a jle 0x11062a8f */
  if ((C.zf||C.sf!=C.of)) goto L_11062a8f;
  /* 11062a7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11062a7f push eax */
  push32((uint32_t)(EAX));
  /* 11062a80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062a83 push ecx */
  push32((uint32_t)(ECX));
  /* 11062a84 call 0x11062d00 */
  push32(0x11062a89u); f_11062d00();
  /* 11062a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062a8c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11062a8f:;
  /* 11062a8f cmp dword ptr [0x110869a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110869a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062a96 jne 0x11062abb */
  if (!C.zf) goto L_11062abb;
  /* 11062a98 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11062a9b push edx */
  push32((uint32_t)(EDX));
  /* 11062a9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11062a9f push eax */
  push32((uint32_t)(EAX));
  /* 11062aa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11062aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11062aa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062aa7 push edx */
  push32((uint32_t)(EDX));
  /* 11062aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062aab push eax */
  push32((uint32_t)(EAX));
  /* 11062aac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062aaf push ecx */
  push32((uint32_t)(ECX));
  /* 11062ab0 call dword ptr [0x11089320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089320))), 0x11062ab6u);
  /* 11062ab6 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062abb:;
  /* 11062abb cmp dword ptr [0x110869a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110869a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062ac2 jne 0x11062cdf */
  if (!C.zf) goto L_11062cdf;
  /* 11062ac8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062acc jne 0x11062ad7 */
  if (!C.zf) goto L_11062ad7;
  /* 11062ace mov edx, dword ptr [0x110869a0] */
  EDX = (r32((uint32_t)(0x110869a0)));
  /* 11062ad4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11062ad7:;
  /* 11062ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062adb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11062ade push eax */
  push32((uint32_t)(EAX));
  /* 11062adf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 11062ae3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11062ae6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11062ae8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062aea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11062aed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11062af0 push edx */
  push32((uint32_t)(EDX));
  /* 11062af1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11062af4 push eax */
  push32((uint32_t)(EAX));
  /* 11062af5 call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x11062afbu);
  /* 11062afb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11062afe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062b02 jne 0x11062b0b */
  if (!C.zf) goto L_11062b0b;
  /* 11062b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062b06 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062b0b:;
  /* 11062b0b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11062b12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11062b15 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11062b17 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11062b1a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11062b1c call 0x1105d7a0 */
  push32(0x11062b21u); f_1105d7a0();
  /* 11062b21 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11062b24 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11062b27 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11062b2a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11062b2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11062b34 jmp 0x11062b4d */
  goto L_11062b4d;
  /* 11062b36 mov eax, 1 */
  EAX = (0x1u);
  /* 11062b3b ret  */
  ESPCHK(0x110629f0u, _esp0);
  ESP += 4; return;
  /* 11062b3c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11062b3f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11062b46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11062b4d:;
  /* 11062b4d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062b51 jne 0x11062b5a */
  if (!C.zf) goto L_11062b5a;
  /* 11062b53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062b55 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062b5a:;
  /* 11062b5a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11062b5d push edx */
  push32((uint32_t)(EDX));
  /* 11062b5e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11062b61 push eax */
  push32((uint32_t)(EAX));
  /* 11062b62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11062b65 push ecx */
  push32((uint32_t)(ECX));
  /* 11062b66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062b69 push edx */
  push32((uint32_t)(EDX));
  /* 11062b6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11062b6c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11062b6f push eax */
  push32((uint32_t)(EAX));
  /* 11062b70 call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x11062b76u);
  /* 11062b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062b78 jne 0x11062b81 */
  if (!C.zf) goto L_11062b81;
  /* 11062b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062b7c jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062b81:;
  /* 11062b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062b85 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11062b88 push ecx */
  push32((uint32_t)(ECX));
  /* 11062b89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11062b8c push edx */
  push32((uint32_t)(EDX));
  /* 11062b8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062b90 push eax */
  push32((uint32_t)(EAX));
  /* 11062b91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062b94 push ecx */
  push32((uint32_t)(ECX));
  /* 11062b95 call dword ptr [0x1108931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108931c))), 0x11062b9bu);
  /* 11062b9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11062b9e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062ba2 jne 0x11062bab */
  if (!C.zf) goto L_11062bab;
  /* 11062ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062ba6 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062bab:;
  /* 11062bab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062bae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11062bb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062bb6 je 0x11062bfb */
  if (C.zf) goto L_11062bfb;
  /* 11062bb8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062bbc je 0x11062bf6 */
  if (C.zf) goto L_11062bf6;
  /* 11062bbe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11062bc1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062bc4 jle 0x11062bcd */
  if ((C.zf||C.sf!=C.of)) goto L_11062bcd;
  /* 11062bc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062bc8 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062bcd:;
  /* 11062bcd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11062bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11062bd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11062bd4 push edx */
  push32((uint32_t)(EDX));
  /* 11062bd5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11062bd8 push eax */
  push32((uint32_t)(EAX));
  /* 11062bd9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11062bdc push ecx */
  push32((uint32_t)(ECX));
  /* 11062bdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062be0 push edx */
  push32((uint32_t)(EDX));
  /* 11062be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062be4 push eax */
  push32((uint32_t)(EAX));
  /* 11062be5 call dword ptr [0x1108931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108931c))), 0x11062bebu);
  /* 11062beb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062bed jne 0x11062bf6 */
  if (!C.zf) goto L_11062bf6;
  /* 11062bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062bf1 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062bf6:;
  /* 11062bf6 jmp 0x11062cda */
  goto L_11062cda;
L_11062bfb:;
  /* 11062bfb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11062bfe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11062c01 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11062c08 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11062c0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11062c0d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11062c10 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11062c12 call 0x1105d7a0 */
  push32(0x11062c17u); f_1105d7a0();
  /* 11062c17 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11062c1a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11062c1d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11062c20 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11062c23 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11062c2a jmp 0x11062c43 */
  goto L_11062c43;
  /* 11062c2c mov eax, 1 */
  EAX = (0x1u);
  /* 11062c31 ret  */
  ESPCHK(0x110629f0u, _esp0);
  ESP += 4; return;
  /* 11062c32 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11062c35 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11062c3c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11062c43:;
  /* 11062c43 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062c47 jne 0x11062c50 */
  if (!C.zf) goto L_11062c50;
  /* 11062c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062c4b jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062c50:;
  /* 11062c50 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11062c53 push eax */
  push32((uint32_t)(EAX));
  /* 11062c54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11062c57 push ecx */
  push32((uint32_t)(ECX));
  /* 11062c58 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11062c5b push edx */
  push32((uint32_t)(EDX));
  /* 11062c5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11062c5f push eax */
  push32((uint32_t)(EAX));
  /* 11062c60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062c63 push ecx */
  push32((uint32_t)(ECX));
  /* 11062c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062c67 push edx */
  push32((uint32_t)(EDX));
  /* 11062c68 call dword ptr [0x1108931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108931c))), 0x11062c6eu);
  /* 11062c6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062c70 jne 0x11062c76 */
  if (!C.zf) goto L_11062c76;
  /* 11062c72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062c74 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062c76:;
  /* 11062c76 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062c7a jne 0x11062caa */
  if (!C.zf) goto L_11062caa;
  /* 11062c7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11062c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11062c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062c84 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11062c87 push eax */
  push32((uint32_t)(EAX));
  /* 11062c88 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11062c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11062c8c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11062c91 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11062c94 push edx */
  push32((uint32_t)(EDX));
  /* 11062c95 call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x11062c9bu);
  /* 11062c9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11062c9e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062ca2 jne 0x11062ca8 */
  if (!C.zf) goto L_11062ca8;
  /* 11062ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062ca6 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062ca8:;
  /* 11062ca8 jmp 0x11062cda */
  goto L_11062cda;
L_11062caa:;
  /* 11062caa push 0 */
  push32((uint32_t)(0x0u));
  /* 11062cac push 0 */
  push32((uint32_t)(0x0u));
  /* 11062cae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11062cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11062cb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11062cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11062cb6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11062cb9 push edx */
  push32((uint32_t)(EDX));
  /* 11062cba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11062cbd push eax */
  push32((uint32_t)(EAX));
  /* 11062cbe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11062cc3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11062cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11062cc7 call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x11062ccdu);
  /* 11062ccd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11062cd0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062cd4 jne 0x11062cda */
  if (!C.zf) goto L_11062cda;
  /* 11062cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062cd8 jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062cda:;
  /* 11062cda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11062cdd jmp 0x11062ce1 */
  goto L_11062ce1;
L_11062cdf:;
  /* 11062cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11062ce1:;
  /* 11062ce1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11062ce4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11062ce7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11062cee pop edi */
  EDI = (pop32());
  /* 11062cef pop esi */
  ESI = (pop32());
  /* 11062cf0 pop ebx */
  EBX = (pop32());
  /* 11062cf1 mov esp, ebp */
  ESP = (EBP);
  /* 11062cf3 pop ebp */
  EBP = (pop32());
  /* 11062cf4 ret  */
  ESPCHK(0x110629f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d00 @ 0x11062d00 (80 bytes, 32 insns) */
void f_11062d00(void) {
  FTRACE(0x11062d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11062d01 mov ebp, esp */
  EBP = (ESP);
  /* 11062d03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062d06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062d09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11062d0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062d0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11062d12:;
  /* 11062d12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11062d15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11062d18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062d1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11062d1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062d20 je 0x11062d37 */
  if (C.zf) goto L_11062d37;
  /* 11062d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062d25 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11062d28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062d2a je 0x11062d37 */
  if (C.zf) goto L_11062d37;
  /* 11062d2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062d2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11062d32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11062d35 jmp 0x11062d12 */
  goto L_11062d12;
L_11062d37:;
  /* 11062d37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062d3a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11062d3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11062d3f jne 0x11062d49 */
  if (!C.zf) goto L_11062d49;
  /* 11062d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062d44 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062d47 jmp 0x11062d4c */
  goto L_11062d4c;
L_11062d49:;
  /* 11062d49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11062d4c:;
  /* 11062d4c mov esp, ebp */
  ESP = (EBP);
  /* 11062d4e pop ebp */
  EBP = (pop32());
  /* 11062d4f ret  */
  ESPCHK(0x11062d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d50 @ 0x11062d50 (130 bytes, 43 insns) */
void f_11062d50(void) {
  FTRACE(0x11062d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11062d51 mov ebp, esp */
  EBP = (ESP);
  /* 11062d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11062d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062d57 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062d5d jae 0x11062d81 */
  if (!C.cf) goto L_11062d81;
  /* 11062d5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062d62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11062d65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062d68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11062d6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11062d6e mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 11062d75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11062d7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11062d7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11062d7f jne 0x11062d9c */
  if (!C.zf) goto L_11062d9c;
L_11062d81:;
  /* 11062d81 call 0x110624d0 */
  push32(0x11062d86u); f_110624d0();
  /* 11062d86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11062d8c call 0x110624e0 */
  push32(0x11062d91u); f_110624e0();
  /* 11062d91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11062d97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11062d9a jmp 0x11062dce */
  goto L_11062dce;
L_11062d9c:;
  /* 11062d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062d9f push edx */
  push32((uint32_t)(EDX));
  /* 11062da0 call 0x11063cf0 */
  push32(0x11062da5u); f_11063cf0();
  /* 11062da5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062da8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062dab push eax */
  push32((uint32_t)(EAX));
  /* 11062dac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062daf push ecx */
  push32((uint32_t)(ECX));
  /* 11062db0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062db3 push edx */
  push32((uint32_t)(EDX));
  /* 11062db4 call 0x11062de0 */
  push32(0x11062db9u); f_11062de0();
  /* 11062db9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062dbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11062dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062dc2 push eax */
  push32((uint32_t)(EAX));
  /* 11062dc3 call 0x11063d80 */
  push32(0x11062dc8u); f_11063d80();
  /* 11062dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11062dce:;
  /* 11062dce mov esp, ebp */
  ESP = (EBP);
  /* 11062dd0 pop ebp */
  EBP = (pop32());
  /* 11062dd1 ret  */
  ESPCHK(0x11062d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012de0 @ 0x11062de0 (178 bytes, 56 insns) */
void f_11062de0(void) {
  FTRACE(0x11062de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11062de1 mov ebp, esp */
  EBP = (ESP);
  /* 11062de3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062de9 push eax */
  push32((uint32_t)(EAX));
  /* 11062dea call 0x11063b70 */
  push32(0x11062defu); f_11063b70();
  /* 11062def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062df2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11062df5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062df9 jne 0x11062e0e */
  if (!C.zf) goto L_11062e0e;
  /* 11062dfb call 0x110624d0 */
  push32(0x11062e00u); f_110624d0();
  /* 11062e00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11062e06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11062e09 jmp 0x11062e8e */
  goto L_11062e8e;
L_11062e0e:;
  /* 11062e0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062e11 push ecx */
  push32((uint32_t)(ECX));
  /* 11062e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11062e14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062e17 push edx */
  push32((uint32_t)(EDX));
  /* 11062e18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11062e1b push eax */
  push32((uint32_t)(EAX));
  /* 11062e1c call dword ptr [0x11089318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089318))), 0x11062e22u);
  /* 11062e22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11062e25 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062e29 jne 0x11062e36 */
  if (!C.zf) goto L_11062e36;
  /* 11062e2b call dword ptr [0x110893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893dc))), 0x11062e31u);
  /* 11062e31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11062e34 jmp 0x11062e3d */
  goto L_11062e3d;
L_11062e36:;
  /* 11062e36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11062e3d:;
  /* 11062e3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062e41 je 0x11062e54 */
  if (C.zf) goto L_11062e54;
  /* 11062e43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062e46 push ecx */
  push32((uint32_t)(ECX));
  /* 11062e47 call 0x11062430 */
  push32(0x11062e4cu); f_11062430();
  /* 11062e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062e4f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11062e52 jmp 0x11062e8e */
  goto L_11062e8e;
L_11062e54:;
  /* 11062e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062e57 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11062e5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062e5d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11062e60 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11062e63 mov ecx, dword ptr [edx*4 + 0x11088160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11088160)));
  /* 11062e6a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11062e6e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11062e71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062e74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11062e77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062e7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11062e7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11062e80 mov eax, dword ptr [eax*4 + 0x11088160] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11062e87 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11062e8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11062e8e:;
  /* 11062e8e mov esp, ebp */
  ESP = (EBP);
  /* 11062e90 pop ebp */
  EBP = (pop32());
  /* 11062e91 ret  */
  ESPCHK(0x11062de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ea0 @ 0x11062ea0 (130 bytes, 43 insns) */
void f_11062ea0(void) {
  FTRACE(0x11062ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11062ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11062ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11062ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062ea7 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062ead jae 0x11062ed1 */
  if (!C.cf) goto L_11062ed1;
  /* 11062eaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062eb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11062eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062eb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11062ebb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11062ebe mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 11062ec5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11062eca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11062ecd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11062ecf jne 0x11062eec */
  if (!C.zf) goto L_11062eec;
L_11062ed1:;
  /* 11062ed1 call 0x110624d0 */
  push32(0x11062ed6u); f_110624d0();
  /* 11062ed6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11062edc call 0x110624e0 */
  push32(0x11062ee1u); f_110624e0();
  /* 11062ee1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11062ee7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11062eea jmp 0x11062f1e */
  goto L_11062f1e;
L_11062eec:;
  /* 11062eec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062eef push edx */
  push32((uint32_t)(EDX));
  /* 11062ef0 call 0x11063cf0 */
  push32(0x11062ef5u); f_11063cf0();
  /* 11062ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062ef8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11062efb push eax */
  push32((uint32_t)(EAX));
  /* 11062efc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062eff push ecx */
  push32((uint32_t)(ECX));
  /* 11062f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062f03 push edx */
  push32((uint32_t)(EDX));
  /* 11062f04 call 0x11062f30 */
  push32(0x11062f09u); f_11062f30();
  /* 11062f09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062f0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11062f0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062f12 push eax */
  push32((uint32_t)(EAX));
  /* 11062f13 call 0x11063d80 */
  push32(0x11062f18u); f_11063d80();
  /* 11062f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11062f1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11062f1e:;
  /* 11062f1e mov esp, ebp */
  ESP = (EBP);
  /* 11062f20 pop ebp */
  EBP = (pop32());
  /* 11062f21 ret  */
  ESPCHK(0x11062ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f30 @ 0x11062f30 (627 bytes, 182 insns) */
void f_11062f30(void) {
  FTRACE(0x11062f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11062f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11062f31 mov ebp, esp */
  EBP = (ESP);
  /* 11062f33 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062f39 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11062f40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11062f43 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11062f49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062f4d jne 0x11062f56 */
  if (!C.zf) goto L_11062f56;
  /* 11062f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11062f51 jmp 0x1106319f */
  goto L_1106319f;
L_11062f56:;
  /* 11062f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062f59 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11062f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062f5f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11062f62 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11062f65 mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 11062f6c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11062f71 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11062f74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11062f76 je 0x11062f88 */
  if (C.zf) goto L_11062f88;
  /* 11062f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11062f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11062f7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062f7f push edx */
  push32((uint32_t)(EDX));
  /* 11062f80 call 0x11062de0 */
  push32(0x11062f85u); f_11062de0();
  /* 11062f85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11062f88:;
  /* 11062f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062f8b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11062f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11062f91 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11062f94 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11062f97 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11062f9e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11062fa3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11062fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11062faa je 0x110630bc */
  if (C.zf) goto L_110630bc;
  /* 11062fb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11062fb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11062fb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11062fbd:;
  /* 11062fbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062fc0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062fc3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062fc6 jae 0x110630ba */
  if (!C.cf) goto L_110630ba;
  /* 11062fcc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11062fd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11062fd5:;
  /* 11062fd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11062fd8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11062fde sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062fe0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062fe6 jge 0x11063047 */
  if ((C.sf==C.of)) goto L_11063047;
  /* 11062fe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062feb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11062fee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11062ff1 jae 0x11063047 */
  if (!C.cf) goto L_11063047;
  /* 11062ff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11062ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11062ff8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11062ffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063001 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063004 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11063007 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1106300e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063011 jne 0x11063031 */
  if (!C.zf) goto L_11063031;
  /* 11063013 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11063019 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106301c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11063022 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063025 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11063028 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106302b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106302e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11063031:;
  /* 11063031 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063034 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1106303a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1106303c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106303f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063042 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11063045 jmp 0x11062fd5 */
  goto L_11062fd5;
L_11063047:;
  /* 11063047 push 0 */
  push32((uint32_t)(0x0u));
  /* 11063049 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1106304f push edx */
  push32((uint32_t)(EDX));
  /* 11063050 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063053 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11063059 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106305b push eax */
  push32((uint32_t)(EAX));
  /* 1106305c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11063062 push edx */
  push32((uint32_t)(EDX));
  /* 11063063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063066 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106306c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1106306f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063072 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11063079 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1106307c push eax */
  push32((uint32_t)(EAX));
  /* 1106307d call dword ptr [0x110893a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a0))), 0x11063083u);
  /* 11063083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11063085 je 0x110630aa */
  if (C.zf) goto L_110630aa;
  /* 11063087 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106308a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063090 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11063093 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063096 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1106309c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106309e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110630a4 jge 0x110630a8 */
  if ((C.sf==C.of)) goto L_110630a8;
  /* 110630a6 jmp 0x110630ba */
  goto L_110630ba;
L_110630a8:;
  /* 110630a8 jmp 0x110630b5 */
  goto L_110630b5;
L_110630aa:;
  /* 110630aa call dword ptr [0x110893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893dc))), 0x110630b0u);
  /* 110630b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110630b3 jmp 0x110630ba */
  goto L_110630ba;
L_110630b5:;
  /* 110630b5 jmp 0x11062fbd */
  goto L_11062fbd;
L_110630ba:;
  /* 110630ba jmp 0x1106310c */
  goto L_1106310c;
L_110630bc:;
  /* 110630bc push 0 */
  push32((uint32_t)(0x0u));
  /* 110630be lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 110630c4 push ecx */
  push32((uint32_t)(ECX));
  /* 110630c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110630c8 push edx */
  push32((uint32_t)(EDX));
  /* 110630c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110630cc push eax */
  push32((uint32_t)(EAX));
  /* 110630cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110630d0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110630d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110630d6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 110630d9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110630dc mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 110630e3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 110630e6 push ecx */
  push32((uint32_t)(ECX));
  /* 110630e7 call dword ptr [0x110893a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a0))), 0x110630edu);
  /* 110630ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110630ef je 0x11063103 */
  if (C.zf) goto L_11063103;
  /* 110630f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110630f8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 110630fe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11063101 jmp 0x1106310c */
  goto L_1106310c;
L_11063103:;
  /* 11063103 call dword ptr [0x110893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893dc))), 0x11063109u);
  /* 11063109 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1106310c:;
  /* 1106310c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063110 jne 0x11063196 */
  if (!C.zf) goto L_11063196;
  /* 11063116 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106311a je 0x1106314a */
  if (C.zf) goto L_1106314a;
  /* 1106311c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063120 jne 0x11063139 */
  if (!C.zf) goto L_11063139;
  /* 11063122 call 0x110624d0 */
  push32(0x11063127u); f_110624d0();
  /* 11063127 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1106312d call 0x110624e0 */
  push32(0x11063132u); f_110624e0();
  /* 11063132 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063135 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11063137 jmp 0x11063145 */
  goto L_11063145;
L_11063139:;
  /* 11063139 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106313c push edx */
  push32((uint32_t)(EDX));
  /* 1106313d call 0x11062430 */
  push32(0x11063142u); f_11062430();
  /* 11063142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11063145:;
  /* 11063145 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11063148 jmp 0x1106319f */
  goto L_1106319f;
L_1106314a:;
  /* 1106314a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106314d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063153 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11063156 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063159 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11063160 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11063165 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11063168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106316a je 0x1106317b */
  if (C.zf) goto L_1106317b;
  /* 1106316c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106316f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11063172 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063175 jne 0x1106317b */
  if (!C.zf) goto L_1106317b;
  /* 11063177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11063179 jmp 0x1106319f */
  goto L_1106319f;
L_1106317b:;
  /* 1106317b call 0x110624d0 */
  push32(0x11063180u); f_110624d0();
  /* 11063180 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11063186 call 0x110624e0 */
  push32(0x1106318bu); f_110624e0();
  /* 1106318b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11063191 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11063194 jmp 0x1106319f */
  goto L_1106319f;
L_11063196:;
  /* 11063196 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11063199 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1106319f:;
  /* 1106319f mov esp, ebp */
  ESP = (EBP);
  /* 110631a1 pop ebp */
  EBP = (pop32());
  /* 110631a2 ret  */
  ESPCHK(0x11062f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100131b0 @ 0x110631b0 (199 bytes, 68 insns) */
void f_110631b0(void) {
  FTRACE(0x110631b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110631b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110631b1 mov ebp, esp */
  EBP = (ESP);
  /* 110631b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110631b4 push ebx */
  push32((uint32_t)(EBX));
  /* 110631b5 push esi */
  push32((uint32_t)(ESI));
  /* 110631b6 push edi */
  push32((uint32_t)(EDI));
L_110631b7:;
  /* 110631b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110631bb jne 0x110631db */
  if (!C.zf) goto L_110631db;
  /* 110631bd push 0x11082354 */
  push32((uint32_t)(0x11082354u));
  /* 110631c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110631c4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 110631c6 push 0x11082420 */
  push32((uint32_t)(0x11082420u));
  /* 110631cb push 2 */
  push32((uint32_t)(0x2u));
  /* 110631cd call 0x110596c0 */
  push32(0x110631d2u); f_110596c0();
  /* 110631d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110631d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110631d8 jne 0x110631db */
  if (!C.zf) goto L_110631db;
  /* 110631da int3  */
  x86_unimpl("int3 @ 0x110631da");
L_110631db:;
  /* 110631db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110631dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110631df jne 0x110631b7 */
  if (!C.zf) goto L_110631b7;
  /* 110631e1 mov ecx, dword ptr [0x110869ac] */
  ECX = (r32((uint32_t)(0x110869ac)));
  /* 110631e7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110631ea mov dword ptr [0x110869ac], ecx */
  w32((uint32_t)(0x110869ac), (ECX));
  /* 110631f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110631f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110631f6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 110631f8 push 0x11082420 */
  push32((uint32_t)(0x11082420u));
  /* 110631fd push 2 */
  push32((uint32_t)(0x2u));
  /* 110631ff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11063204 call 0x1105a600 */
  push32(0x11063209u); f_1105a600();
  /* 11063209 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106320c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106320f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11063212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063215 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063219 je 0x11063236 */
  if (C.zf) goto L_11063236;
  /* 1106321b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106321e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11063221 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11063224 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063227 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1106322a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106322d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11063234 jmp 0x1106325b */
  goto L_1106325b;
L_11063236:;
  /* 11063236 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063239 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1106323c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1106323f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063242 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11063245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063248 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106324b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106324e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11063251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063254 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1106325b:;
  /* 1106325b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106325e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063261 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11063264 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11063266 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063269 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11063270 pop edi */
  EDI = (pop32());
  /* 11063271 pop esi */
  ESI = (pop32());
  /* 11063272 pop ebx */
  EBX = (pop32());
  /* 11063273 mov esp, ebp */
  ESP = (EBP);
  /* 11063275 pop ebp */
  EBP = (pop32());
  /* 11063276 ret  */
  ESPCHK(0x110631b0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11063280 (50 bytes, 17 insns) */
void f_11063280(void) {
  FTRACE(0x11063280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063280 push ebp */
  push32((uint32_t)(EBP));
  /* 11063281 mov ebp, esp */
  EBP = (ESP);
  /* 11063283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063286 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106328c jb 0x11063292 */
  if (C.cf) goto L_11063292;
  /* 1106328e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11063290 jmp 0x110632b0 */
  goto L_110632b0;
L_11063292:;
  /* 11063292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063295 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11063298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106329b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1106329e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110632a1 mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 110632a8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 110632ad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_110632b0:;
  /* 110632b0 pop ebp */
  EBP = (pop32());
  /* 110632b1 ret  */
  ESPCHK(0x11063280u, _esp0);
  ESP += 4; return;
}

/* FUN_100132c0 @ 0x110632c0 (300 bytes, 80 insns) */
void f_110632c0(void) {
  FTRACE(0x110632c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110632c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110632c1 mov ebp, esp */
  EBP = (ESP);
  /* 110632c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110632c4 cmp dword ptr [0x11087e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11087e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110632cb jne 0x110632d9 */
  if (!C.zf) goto L_110632d9;
  /* 110632cd mov dword ptr [0x11087e60], 0x200 */
  w32((uint32_t)(0x11087e60), (0x200u));
  /* 110632d7 jmp 0x110632ec */
  goto L_110632ec;
L_110632d9:;
  /* 110632d9 cmp dword ptr [0x11087e60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11087e60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110632e0 jge 0x110632ec */
  if ((C.sf==C.of)) goto L_110632ec;
  /* 110632e2 mov dword ptr [0x11087e60], 0x14 */
  w32((uint32_t)(0x11087e60), (0x14u));
L_110632ec:;
  /* 110632ec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 110632f1 push 0x1108242c */
  push32((uint32_t)(0x1108242cu));
  /* 110632f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110632f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 110632fa mov eax, dword ptr [0x11087e60] */
  EAX = (r32((uint32_t)(0x11087e60)));
  /* 110632ff push eax */
  push32((uint32_t)(EAX));
  /* 11063300 call 0x1105aa10 */
  push32(0x11063305u); f_1105aa10();
  /* 11063305 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063308 mov dword ptr [0x11086b20], eax */
  w32((uint32_t)(0x11086b20), (EAX));
  /* 1106330d cmp dword ptr [0x11086b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063314 jne 0x11063355 */
  if (!C.zf) goto L_11063355;
  /* 11063316 mov dword ptr [0x11087e60], 0x14 */
  w32((uint32_t)(0x11087e60), (0x14u));
  /* 11063320 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11063325 push 0x1108242c */
  push32((uint32_t)(0x1108242cu));
  /* 1106332a push 2 */
  push32((uint32_t)(0x2u));
  /* 1106332c push 4 */
  push32((uint32_t)(0x4u));
  /* 1106332e mov ecx, dword ptr [0x11087e60] */
  ECX = (r32((uint32_t)(0x11087e60)));
  /* 11063334 push ecx */
  push32((uint32_t)(ECX));
  /* 11063335 call 0x1105aa10 */
  push32(0x1106333au); f_1105aa10();
  /* 1106333a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106333d mov dword ptr [0x11086b20], eax */
  w32((uint32_t)(0x11086b20), (EAX));
  /* 11063342 cmp dword ptr [0x11086b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063349 jne 0x11063355 */
  if (!C.zf) goto L_11063355;
  /* 1106334b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1106334d call 0x11059570 */
  push32(0x11063352u); f_11059570();
  /* 11063352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11063355:;
  /* 11063355 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106335c jmp 0x11063367 */
  goto L_11063367;
L_1106335e:;
  /* 1106335e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063361 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063364 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11063367:;
  /* 11063367 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106336b jge 0x11063386 */
  if ((C.sf==C.of)) goto L_11063386;
  /* 1106336d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063370 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063373 add eax, 0x11085120 */
  { uint32_t _a=(EAX),_b=(0x11085120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106337b mov edx, dword ptr [0x11086b20] */
  EDX = (r32((uint32_t)(0x11086b20)));
  /* 11063381 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11063384 jmp 0x1106335e */
  goto L_1106335e;
L_11063386:;
  /* 11063386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106338d jmp 0x11063398 */
  goto L_11063398;
L_1106338f:;
  /* 1106338f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063392 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063395 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11063398:;
  /* 11063398 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106339c jge 0x110633e8 */
  if ((C.sf==C.of)) goto L_110633e8;
  /* 1106339e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110633a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110633a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110633a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 110633aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110633ad mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 110633b4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110633b8 je 0x110633d6 */
  if (C.zf) goto L_110633d6;
  /* 110633ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110633bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110633c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110633c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 110633c6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110633c9 mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 110633d0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110633d4 jne 0x110633e6 */
  if (!C.zf) goto L_110633e6;
L_110633d6:;
  /* 110633d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110633d9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110633dc mov dword ptr [ecx + 0x11085130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11085130), (0xffffffffu));
L_110633e6:;
  /* 110633e6 jmp 0x1106338f */
  goto L_1106338f;
L_110633e8:;
  /* 110633e8 mov esp, ebp */
  ESP = (EBP);
  /* 110633ea pop ebp */
  EBP = (pop32());
  /* 110633eb ret  */
  ESPCHK(0x110632c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x110633f0 (26 bytes, 9 insns) */
void f_110633f0(void) {
  FTRACE(0x110633f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110633f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110633f1 mov ebp, esp */
  EBP = (ESP);
  /* 110633f3 call 0x11063ff0 */
  push32(0x110633f8u); f_11063ff0();
  /* 110633f8 movsx eax, byte ptr [0x110867c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x110867c4))));
  /* 110633ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11063401 je 0x11063408 */
  if (C.zf) goto L_11063408;
  /* 11063403 call 0x11063db0 */
  push32(0x11063408u); f_11063db0();
L_11063408:;
  /* 11063408 pop ebp */
  EBP = (pop32());
  /* 11063409 ret  */
  ESPCHK(0x110633f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013410 @ 0x11063410 (61 bytes, 20 insns) */
void f_11063410(void) {
  FTRACE(0x11063410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063410 push ebp */
  push32((uint32_t)(EBP));
  /* 11063411 mov ebp, esp */
  EBP = (ESP);
  /* 11063413 cmp dword ptr [ebp + 8], 0x11085120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11085120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106341a jb 0x1106343e */
  if (C.cf) goto L_1106343e;
  /* 1106341c cmp dword ptr [ebp + 8], 0x11085380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11085380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063423 ja 0x1106343e */
  if ((!C.cf&&!C.zf)) goto L_1106343e;
  /* 11063425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063428 sub eax, 0x11085120 */
  { uint32_t _a=(EAX),_b=(0x11085120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106342d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063430 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063433 push eax */
  push32((uint32_t)(EAX));
  /* 11063434 call 0x1105e000 */
  push32(0x11063439u); f_1105e000();
  /* 11063439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106343c jmp 0x1106344b */
  goto L_1106344b;
L_1106343e:;
  /* 1106343e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063441 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063444 push ecx */
  push32((uint32_t)(ECX));
  /* 11063445 call dword ptr [0x11089354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089354))), 0x1106344bu);
L_1106344b:;
  /* 1106344b pop ebp */
  EBP = (pop32());
  /* 1106344c ret  */
  ESPCHK(0x11063410u, _esp0);
  ESP += 4; return;
}

/* FUN_10013450 @ 0x11063450 (41 bytes, 16 insns) */
void f_11063450(void) {
  FTRACE(0x11063450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063450 push ebp */
  push32((uint32_t)(EBP));
  /* 11063451 mov ebp, esp */
  EBP = (ESP);
  /* 11063453 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063457 jge 0x1106346a */
  if ((C.sf==C.of)) goto L_1106346a;
  /* 11063459 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106345c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106345f push eax */
  push32((uint32_t)(EAX));
  /* 11063460 call 0x1105e000 */
  push32(0x11063465u); f_1105e000();
  /* 11063465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063468 jmp 0x11063477 */
  goto L_11063477;
L_1106346a:;
  /* 1106346a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106346d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063470 push ecx */
  push32((uint32_t)(ECX));
  /* 11063471 call dword ptr [0x11089354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089354))), 0x11063477u);
L_11063477:;
  /* 11063477 pop ebp */
  EBP = (pop32());
  /* 11063478 ret  */
  ESPCHK(0x11063450u, _esp0);
  ESP += 4; return;
}

/* FUN_10013480 @ 0x11063480 (61 bytes, 20 insns) */
void f_11063480(void) {
  FTRACE(0x11063480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063480 push ebp */
  push32((uint32_t)(EBP));
  /* 11063481 mov ebp, esp */
  EBP = (ESP);
  /* 11063483 cmp dword ptr [ebp + 8], 0x11085120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11085120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106348a jb 0x110634ae */
  if (C.cf) goto L_110634ae;
  /* 1106348c cmp dword ptr [ebp + 8], 0x11085380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11085380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063493 ja 0x110634ae */
  if ((!C.cf&&!C.zf)) goto L_110634ae;
  /* 11063495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063498 sub eax, 0x11085120 */
  { uint32_t _a=(EAX),_b=(0x11085120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106349d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110634a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110634a3 push eax */
  push32((uint32_t)(EAX));
  /* 110634a4 call 0x1105e0a0 */
  push32(0x110634a9u); f_1105e0a0();
  /* 110634a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110634ac jmp 0x110634bb */
  goto L_110634bb;
L_110634ae:;
  /* 110634ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110634b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110634b4 push ecx */
  push32((uint32_t)(ECX));
  /* 110634b5 call dword ptr [0x11089350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089350))), 0x110634bbu);
L_110634bb:;
  /* 110634bb pop ebp */
  EBP = (pop32());
  /* 110634bc ret  */
  ESPCHK(0x11063480u, _esp0);
  ESP += 4; return;
}

/* FUN_100134c0 @ 0x110634c0 (41 bytes, 16 insns) */
void f_110634c0(void) {
  FTRACE(0x110634c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110634c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110634c1 mov ebp, esp */
  EBP = (ESP);
  /* 110634c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110634c7 jge 0x110634da */
  if ((C.sf==C.of)) goto L_110634da;
  /* 110634c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110634cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110634cf push eax */
  push32((uint32_t)(EAX));
  /* 110634d0 call 0x1105e0a0 */
  push32(0x110634d5u); f_1105e0a0();
  /* 110634d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110634d8 jmp 0x110634e7 */
  goto L_110634e7;
L_110634da:;
  /* 110634da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110634dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110634e0 push ecx */
  push32((uint32_t)(ECX));
  /* 110634e1 call dword ptr [0x11089350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089350))), 0x110634e7u);
L_110634e7:;
  /* 110634e7 pop ebp */
  EBP = (pop32());
  /* 110634e8 ret  */
  ESPCHK(0x110634c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134f0 @ 0x110634f0 (119 bytes, 34 insns) */
void f_110634f0(void) {
  FTRACE(0x110634f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110634f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110634f1 mov ebp, esp */
  EBP = (ESP);
  /* 110634f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110634f6 push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 110634fb call dword ptr [0x110893b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893b4))), 0x11063501u);
  /* 11063501 cmp dword ptr [0x11086b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063508 je 0x11063528 */
  if (C.zf) goto L_11063528;
  /* 1106350a push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 1106350f call dword ptr [0x110893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a4))), 0x11063515u);
  /* 11063515 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11063517 call 0x1105e000 */
  push32(0x1106351cu); f_1105e000();
  /* 1106351c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106351f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11063526 jmp 0x1106352f */
  goto L_1106352f;
L_11063528:;
  /* 11063528 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1106352f:;
  /* 1106352f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11063533 push eax */
  push32((uint32_t)(EAX));
  /* 11063534 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063537 push ecx */
  push32((uint32_t)(ECX));
  /* 11063538 call 0x11063570 */
  push32(0x1106353du); f_11063570();
  /* 1106353d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063540 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11063543 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063547 je 0x11063555 */
  if (C.zf) goto L_11063555;
  /* 11063549 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1106354b call 0x1105e0a0 */
  push32(0x11063550u); f_1105e0a0();
  /* 11063550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063553 jmp 0x11063560 */
  goto L_11063560;
L_11063555:;
  /* 11063555 push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 1106355a call dword ptr [0x110893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a4))), 0x11063560u);
L_11063560:;
  /* 11063560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063563 mov esp, ebp */
  ESP = (EBP);
  /* 11063565 pop ebp */
  EBP = (pop32());
  /* 11063566 ret  */
  ESPCHK(0x110634f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x11063570 (160 bytes, 50 insns) */
void f_11063570(void) {
  FTRACE(0x11063570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063570 push ebp */
  push32((uint32_t)(EBP));
  /* 11063571 mov ebp, esp */
  EBP = (ESP);
  /* 11063573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11063576 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106357a jne 0x11063583 */
  if (!C.zf) goto L_11063583;
  /* 1106357c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106357e jmp 0x1106360c */
  goto L_1106360c;
L_11063583:;
  /* 11063583 cmp dword ptr [0x11086990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106358a jne 0x110635ba */
  if (!C.zf) goto L_110635ba;
  /* 1106358c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106358f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11063594 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063599 jle 0x110635ab */
  if ((C.zf||C.sf!=C.of)) goto L_110635ab;
  /* 1106359b call 0x110624d0 */
  push32(0x110635a0u); f_110624d0();
  /* 110635a0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 110635a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110635a9 jmp 0x1106360c */
  goto L_1106360c;
L_110635ab:;
  /* 110635ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110635ae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 110635b1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 110635b3 mov eax, 1 */
  EAX = (0x1u);
  /* 110635b8 jmp 0x1106360c */
  goto L_1106360c;
L_110635ba:;
  /* 110635ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110635c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110635c4 push eax */
  push32((uint32_t)(EAX));
  /* 110635c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110635c7 mov ecx, dword ptr [0x11084ea4] */
  ECX = (r32((uint32_t)(0x11084ea4)));
  /* 110635cd push ecx */
  push32((uint32_t)(ECX));
  /* 110635ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110635d1 push edx */
  push32((uint32_t)(EDX));
  /* 110635d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 110635d4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 110635d7 push eax */
  push32((uint32_t)(EAX));
  /* 110635d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110635dd mov ecx, dword ptr [0x110869a0] */
  ECX = (r32((uint32_t)(0x110869a0)));
  /* 110635e3 push ecx */
  push32((uint32_t)(ECX));
  /* 110635e4 call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x110635eau);
  /* 110635ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110635ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110635f1 je 0x110635f9 */
  if (C.zf) goto L_110635f9;
  /* 110635f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110635f7 je 0x11063609 */
  if (C.zf) goto L_11063609;
L_110635f9:;
  /* 110635f9 call 0x110624d0 */
  push32(0x110635feu); f_110624d0();
  /* 110635fe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11063604 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11063607 jmp 0x1106360c */
  goto L_1106360c;
L_11063609:;
  /* 11063609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1106360c:;
  /* 1106360c mov esp, ebp */
  ESP = (EBP);
  /* 1106360e pop ebp */
  EBP = (pop32());
  /* 1106360f ret  */
  ESPCHK(0x11063570u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11063610 (32 bytes, 18 insns) */
void f_11063610(void) {
  FTRACE(0x11063610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063610 push ebp */
  push32((uint32_t)(EBP));
  /* 11063611 mov ebp, esp */
  EBP = (ESP);
  /* 11063613 push ebx */
  push32((uint32_t)(EBX));
  /* 11063614 push esi */
  push32((uint32_t)(ESI));
  /* 11063615 push edi */
  push32((uint32_t)(EDI));
  /* 11063616 push ebp */
  push32((uint32_t)(EBP));
  /* 11063617 push 0 */
  push32((uint32_t)(0x0u));
  /* 11063619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106361b push 0x11063628 */
  push32((uint32_t)(0x11063628u));
  /* 11063620 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11063623 call 0x1106ad5c */
  push32(0x11063628u); f_1106ad5c();
  /* 11063628 pop ebp */
  EBP = (pop32());
  /* 11063629 pop edi */
  EDI = (pop32());
  /* 1106362a pop esi */
  ESI = (pop32());
  /* 1106362b pop ebx */
  EBX = (pop32());
  /* 1106362c mov esp, ebp */
  ESP = (EBP);
  /* 1106362e pop ebp */
  EBP = (pop32());
  /* 1106362f ret  */
  ESPCHK(0x11063610u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11063652 (104 bytes, 33 insns) */
void f_11063652(void) {
  FTRACE(0x11063652u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063652 push ebx */
  push32((uint32_t)(EBX));
  /* 11063653 push esi */
  push32((uint32_t)(ESI));
  /* 11063654 push edi */
  push32((uint32_t)(EDI));
  /* 11063655 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11063659 push eax */
  push32((uint32_t)(EAX));
  /* 1106365a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1106365c push 0x11063630 */
  push32((uint32_t)(0x11063630u));
  /* 11063661 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11063668 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1106366f:;
  /* 1106366f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11063673 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11063676 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11063679 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106367c je 0x110636ac */
  if (C.zf) goto L_110636ac;
  /* 1106367e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063682 je 0x110636ac */
  if (C.zf) goto L_110636ac;
  /* 11063684 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11063687 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1106368a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1106368e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11063691 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063696 jne 0x110636aa */
  if (!C.zf) goto L_110636aa;
  /* 11063698 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1106369d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 110636a1 call 0x110636e6 */
  push32(0x110636a6u); f_110636e6();
  /* 110636a6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x110636aau);
L_110636aa:;
  /* 110636aa jmp 0x1106366f */
  goto L_1106366f;
L_110636ac:;
  /* 110636ac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 110636b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110636b6 pop edi */
  EDI = (pop32());
  /* 110636b7 pop esi */
  ESI = (pop32());
  /* 110636b8 pop ebx */
  EBX = (pop32());
  /* 110636b9 ret  */
  ESPCHK(0x11063652u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e6 @ 0x110636e6 (24 bytes, 10 insns) */
void f_110636e6(void) {
  FTRACE(0x110636e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110636e6 push ebx */
  push32((uint32_t)(EBX));
  /* 110636e7 push ecx */
  push32((uint32_t)(ECX));
  /* 110636e8 mov ebx, 0x110853b8 */
  EBX = (0x110853b8u);
  /* 110636ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110636f0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 110636f3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 110636f6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 110636f9 pop ecx */
  ECX = (pop32());
  /* 110636fa pop ebx */
  EBX = (pop32());
  /* 110636fb ret 4 */
  ESPCHK(0x110636e6u, _esp0);
  ESP += 8; return;
}

/* FUN_100137c5 @ 0x110637c5 (27 bytes, 11 insns) */
void f_110637c5(void) {
  FTRACE(0x110637c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110637c5 push ebp */
  push32((uint32_t)(EBP));
  /* 110637c6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 110637ca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 110637cc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110637cf push eax */
  push32((uint32_t)(EAX));
  /* 110637d0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 110637d3 push eax */
  push32((uint32_t)(EAX));
  /* 110637d4 call 0x11063652 */
  push32(0x110637d9u); f_11063652();
  /* 110637d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110637dc pop ebp */
  EBP = (pop32());
  /* 110637dd ret 4 */
  ESPCHK(0x110637c5u, _esp0);
  ESP += 8; return;
}

/* FUN_100137e0 @ 0x110637e0 (482 bytes, 138 insns) */
void f_110637e0(void) {
  FTRACE(0x110637e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110637e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110637e1 mov ebp, esp */
  EBP = (ESP);
  /* 110637e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110637e6 push esi */
  push32((uint32_t)(ESI));
  /* 110637e7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 110637ee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 110637f0 call 0x1105e000 */
  push32(0x110637f5u); f_1105e000();
  /* 110637f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110637f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110637ff jmp 0x1106380a */
  goto L_1106380a;
L_11063801:;
  /* 11063801 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063804 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063807 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1106380a:;
  /* 1106380a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106380e jge 0x110639b0 */
  if ((C.sf==C.of)) goto L_110639b0;
  /* 11063814 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063817 cmp dword ptr [ecx*4 + 0x11088160], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11088160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106381f je 0x11063916 */
  if (C.zf) goto L_11063916;
  /* 11063825 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063828 mov eax, dword ptr [edx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11088160)));
  /* 1106382f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11063832 jmp 0x1106383d */
  goto L_1106383d;
L_11063834:;
  /* 11063834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063837 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106383a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1106383d:;
  /* 1106383d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063840 mov eax, dword ptr [edx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11088160)));
  /* 11063847 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106384c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106384f jae 0x11063906 */
  if (!C.cf) goto L_11063906;
  /* 11063855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063858 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1106385c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1106385f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11063861 jne 0x11063901 */
  if (!C.zf) goto L_11063901;
  /* 11063867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106386a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106386e jne 0x110638a9 */
  if (!C.zf) goto L_110638a9;
  /* 11063870 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11063872 call 0x1105e000 */
  push32(0x11063877u); f_1105e000();
  /* 11063877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106387a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106387d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063881 jne 0x1106389f */
  if (!C.zf) goto L_1106389f;
  /* 11063883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063886 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063889 push edx */
  push32((uint32_t)(EDX));
  /* 1106388a call dword ptr [0x11089358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089358))), 0x11063890u);
  /* 11063890 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063893 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11063896 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106389c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1106389f:;
  /* 1106389f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110638a1 call 0x1105e0a0 */
  push32(0x110638a6u); f_1105e0a0();
  /* 110638a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110638a9:;
  /* 110638a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110638ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110638af push eax */
  push32((uint32_t)(EAX));
  /* 110638b0 call dword ptr [0x11089354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089354))), 0x110638b6u);
  /* 110638b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110638b9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 110638bd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 110638c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110638c2 je 0x110638d6 */
  if (C.zf) goto L_110638d6;
  /* 110638c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110638c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110638ca push eax */
  push32((uint32_t)(EAX));
  /* 110638cb call dword ptr [0x11089350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089350))), 0x110638d1u);
  /* 110638d1 jmp 0x11063834 */
  goto L_11063834;
L_110638d6:;
  /* 110638d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110638d9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 110638df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110638e2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110638e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110638e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110638eb sub eax, dword ptr [edx*4 + 0x11088160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11088160))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110638f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110638f3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 110638f8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110638fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110638fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110638ff jmp 0x11063906 */
  goto L_11063906;
L_11063901:;
  /* 11063901 jmp 0x11063834 */
  goto L_11063834;
L_11063906:;
  /* 11063906 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106390a je 0x11063911 */
  if (C.zf) goto L_11063911;
  /* 1106390c jmp 0x110639b0 */
  goto L_110639b0;
L_11063911:;
  /* 11063911 jmp 0x110639ab */
  goto L_110639ab;
L_11063916:;
  /* 11063916 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11063918 push 0x11082434 */
  push32((uint32_t)(0x11082434u));
  /* 1106391d push 2 */
  push32((uint32_t)(0x2u));
  /* 1106391f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11063924 call 0x1105a600 */
  push32(0x11063929u); f_1105a600();
  /* 11063929 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106392c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1106392f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063933 je 0x110639a9 */
  if (C.zf) goto L_110639a9;
  /* 11063935 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106393b mov dword ptr [eax*4 + 0x11088160], ecx */
  w32((uint32_t)(EAX*4 + 0x11088160), (ECX));
  /* 11063942 mov edx, dword ptr [0x1108829c] */
  EDX = (r32((uint32_t)(0x1108829c)));
  /* 11063948 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106394b mov dword ptr [0x1108829c], edx */
  w32((uint32_t)(0x1108829c), (EDX));
  /* 11063951 jmp 0x1106395c */
  goto L_1106395c;
L_11063953:;
  /* 11063953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063956 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1106395c:;
  /* 1106395c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106395f mov edx, dword ptr [ecx*4 + 0x11088160] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 11063966 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106396c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106396f jae 0x11063994 */
  if (!C.cf) goto L_11063994;
  /* 11063971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063974 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11063978 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106397b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11063981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063984 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11063988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106398b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11063992 jmp 0x11063953 */
  goto L_11063953;
L_11063994:;
  /* 11063994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063997 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1106399a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1106399d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110639a0 push edx */
  push32((uint32_t)(EDX));
  /* 110639a1 call 0x11063cf0 */
  push32(0x110639a6u); f_11063cf0();
  /* 110639a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110639a9:;
  /* 110639a9 jmp 0x110639b0 */
  goto L_110639b0;
L_110639ab:;
  /* 110639ab jmp 0x11063801 */
  goto L_11063801;
L_110639b0:;
  /* 110639b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 110639b2 call 0x1105e0a0 */
  push32(0x110639b7u); f_1105e0a0();
  /* 110639b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110639ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110639bd pop esi */
  ESI = (pop32());
  /* 110639be mov esp, ebp */
  ESP = (EBP);
  /* 110639c0 pop ebp */
  EBP = (pop32());
  /* 110639c1 ret  */
  ESPCHK(0x110637e0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x110639d0 (183 bytes, 57 insns) */
void f_110639d0(void) {
  FTRACE(0x110639d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110639d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110639d1 mov ebp, esp */
  EBP = (ESP);
  /* 110639d3 push ecx */
  push32((uint32_t)(ECX));
  /* 110639d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110639d7 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110639dd jae 0x11063a6a */
  if (!C.cf) goto L_11063a6a;
  /* 110639e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110639e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110639e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110639ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 110639ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110639f2 mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 110639f9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110639fd jne 0x11063a6a */
  if (!C.zf) goto L_11063a6a;
  /* 110639ff cmp dword ptr [0x11086784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11086784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063a06 jne 0x11063a4a */
  if (!C.zf) goto L_11063a4a;
  /* 11063a08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063a0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11063a0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063a12 je 0x11063a22 */
  if (C.zf) goto L_11063a22;
  /* 11063a14 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063a18 je 0x11063a30 */
  if (C.zf) goto L_11063a30;
  /* 11063a1a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063a1e je 0x11063a3e */
  if (C.zf) goto L_11063a3e;
  /* 11063a20 jmp 0x11063a4a */
  goto L_11063a4a;
L_11063a22:;
  /* 11063a22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11063a25 push edx */
  push32((uint32_t)(EDX));
  /* 11063a26 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11063a28 call dword ptr [0x11089310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089310))), 0x11063a2eu);
  /* 11063a2e jmp 0x11063a4a */
  goto L_11063a4a;
L_11063a30:;
  /* 11063a30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11063a33 push eax */
  push32((uint32_t)(EAX));
  /* 11063a34 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11063a36 call dword ptr [0x11089310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089310))), 0x11063a3cu);
  /* 11063a3c jmp 0x11063a4a */
  goto L_11063a4a;
L_11063a3e:;
  /* 11063a3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11063a41 push ecx */
  push32((uint32_t)(ECX));
  /* 11063a42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11063a44 call dword ptr [0x11089310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089310))), 0x11063a4au);
L_11063a4a:;
  /* 11063a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063a4d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11063a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063a53 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11063a56 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063a59 mov ecx, dword ptr [edx*4 + 0x11088160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11088160)));
  /* 11063a60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11063a63 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11063a66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11063a68 jmp 0x11063a83 */
  goto L_11063a83;
L_11063a6a:;
  /* 11063a6a call 0x110624d0 */
  push32(0x11063a6fu); f_110624d0();
  /* 11063a6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11063a75 call 0x110624e0 */
  push32(0x11063a7au); f_110624e0();
  /* 11063a7a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11063a80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11063a83:;
  /* 11063a83 mov esp, ebp */
  ESP = (EBP);
  /* 11063a85 pop ebp */
  EBP = (pop32());
  /* 11063a86 ret  */
  ESPCHK(0x110639d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a90 @ 0x11063a90 (216 bytes, 63 insns) */
void f_11063a90(void) {
  FTRACE(0x11063a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11063a91 mov ebp, esp */
  EBP = (ESP);
  /* 11063a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11063a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063a97 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063a9d jae 0x11063b4b */
  if (!C.cf) goto L_11063b4b;
  /* 11063aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063aa6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11063aa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063aac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11063aaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063ab2 mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 11063ab9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11063abe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11063ac1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11063ac3 je 0x11063b4b */
  if (C.zf) goto L_11063b4b;
  /* 11063ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063acc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11063acf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063ad2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11063ad5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063ad8 mov ecx, dword ptr [edx*4 + 0x11088160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11088160)));
  /* 11063adf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063ae3 je 0x11063b4b */
  if (C.zf) goto L_11063b4b;
  /* 11063ae5 cmp dword ptr [0x11086784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11086784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063aec jne 0x11063b2a */
  if (!C.zf) goto L_11063b2a;
  /* 11063aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063af1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11063af4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063af8 je 0x11063b08 */
  if (C.zf) goto L_11063b08;
  /* 11063afa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063afe je 0x11063b14 */
  if (C.zf) goto L_11063b14;
  /* 11063b00 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063b04 je 0x11063b20 */
  if (C.zf) goto L_11063b20;
  /* 11063b06 jmp 0x11063b2a */
  goto L_11063b2a;
L_11063b08:;
  /* 11063b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11063b0a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11063b0c call dword ptr [0x11089310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089310))), 0x11063b12u);
  /* 11063b12 jmp 0x11063b2a */
  goto L_11063b2a;
L_11063b14:;
  /* 11063b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11063b16 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11063b18 call dword ptr [0x11089310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089310))), 0x11063b1eu);
  /* 11063b1e jmp 0x11063b2a */
  goto L_11063b2a;
L_11063b20:;
  /* 11063b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11063b22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11063b24 call dword ptr [0x11089310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089310))), 0x11063b2au);
L_11063b2a:;
  /* 11063b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063b2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063b30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063b33 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11063b36 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063b39 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11063b40 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11063b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11063b49 jmp 0x11063b64 */
  goto L_11063b64;
L_11063b4b:;
  /* 11063b4b call 0x110624d0 */
  push32(0x11063b50u); f_110624d0();
  /* 11063b50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11063b56 call 0x110624e0 */
  push32(0x11063b5bu); f_110624e0();
  /* 11063b5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11063b61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11063b64:;
  /* 11063b64 mov esp, ebp */
  ESP = (EBP);
  /* 11063b66 pop ebp */
  EBP = (pop32());
  /* 11063b67 ret  */
  ESPCHK(0x11063a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b70 @ 0x11063b70 (102 bytes, 30 insns) */
void f_11063b70(void) {
  FTRACE(0x11063b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11063b71 mov ebp, esp */
  EBP = (ESP);
  /* 11063b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063b76 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063b7c jae 0x11063bbb */
  if (!C.cf) goto L_11063bbb;
  /* 11063b7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063b81 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11063b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063b87 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11063b8a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063b8d mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 11063b94 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11063b99 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11063b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11063b9e je 0x11063bbb */
  if (C.zf) goto L_11063bbb;
  /* 11063ba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063ba3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11063ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063ba9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11063bac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063baf mov ecx, dword ptr [edx*4 + 0x11088160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11088160)));
  /* 11063bb6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11063bb9 jmp 0x11063bd4 */
  goto L_11063bd4;
L_11063bbb:;
  /* 11063bbb call 0x110624d0 */
  push32(0x11063bc0u); f_110624d0();
  /* 11063bc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11063bc6 call 0x110624e0 */
  push32(0x11063bcbu); f_110624e0();
  /* 11063bcb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11063bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11063bd4:;
  /* 11063bd4 pop ebp */
  EBP = (pop32());
  /* 11063bd5 ret  */
  ESPCHK(0x11063b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013be0 @ 0x11063be0 (260 bytes, 83 insns) */
void f_11063be0(void) {
  FTRACE(0x11063be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11063be1 mov ebp, esp */
  EBP = (ESP);
  /* 11063be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11063be6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11063bea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11063bed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11063bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11063bf2 je 0x11063bfd */
  if (C.zf) goto L_11063bfd;
  /* 11063bf4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11063bf7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11063bfa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11063bfd:;
  /* 11063bfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11063c00 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11063c06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11063c08 je 0x11063c12 */
  if (C.zf) goto L_11063c12;
  /* 11063c0a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11063c0d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11063c0f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11063c12:;
  /* 11063c12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11063c15 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11063c1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11063c1d je 0x11063c28 */
  if (C.zf) goto L_11063c28;
  /* 11063c1f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11063c22 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11063c25 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11063c28:;
  /* 11063c28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063c2b push eax */
  push32((uint32_t)(EAX));
  /* 11063c2c call dword ptr [0x110893e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893e8))), 0x11063c32u);
  /* 11063c32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11063c35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063c39 jne 0x11063c52 */
  if (!C.zf) goto L_11063c52;
  /* 11063c3b call dword ptr [0x110893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893dc))), 0x11063c41u);
  /* 11063c41 push eax */
  push32((uint32_t)(EAX));
  /* 11063c42 call 0x11062430 */
  push32(0x11063c47u); f_11062430();
  /* 11063c47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063c4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11063c4d jmp 0x11063ce0 */
  goto L_11063ce0;
L_11063c52:;
  /* 11063c52 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063c56 jne 0x11063c63 */
  if (!C.zf) goto L_11063c63;
  /* 11063c58 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11063c5b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11063c5e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11063c61 jmp 0x11063c72 */
  goto L_11063c72;
L_11063c63:;
  /* 11063c63 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063c67 jne 0x11063c72 */
  if (!C.zf) goto L_11063c72;
  /* 11063c69 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11063c6c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11063c6f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11063c72:;
  /* 11063c72 call 0x110637e0 */
  push32(0x11063c77u); f_110637e0();
  /* 11063c77 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11063c7a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063c7e jne 0x11063c9b */
  if (!C.zf) goto L_11063c9b;
  /* 11063c80 call 0x110624d0 */
  push32(0x11063c85u); f_110624d0();
  /* 11063c85 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11063c8b call 0x110624e0 */
  push32(0x11063c90u); f_110624e0();
  /* 11063c90 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11063c96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11063c99 jmp 0x11063ce0 */
  goto L_11063ce0;
L_11063c9b:;
  /* 11063c9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063c9e push eax */
  push32((uint32_t)(EAX));
  /* 11063c9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 11063ca3 call 0x110639d0 */
  push32(0x11063ca8u); f_110639d0();
  /* 11063ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063cab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11063cae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11063cb1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11063cb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063cb7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063cba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063cbd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11063cc0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063cc3 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11063cca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11063ccd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11063cd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063cd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11063cd5 call 0x11063d80 */
  push32(0x11063cdau); f_11063d80();
  /* 11063cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063cdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11063ce0:;
  /* 11063ce0 mov esp, ebp */
  ESP = (EBP);
  /* 11063ce2 pop ebp */
  EBP = (pop32());
  /* 11063ce3 ret  */
  ESPCHK(0x11063be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cf0 @ 0x11063cf0 (134 bytes, 44 insns) */
void f_11063cf0(void) {
  FTRACE(0x11063cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11063cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11063cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11063cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063cf7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063cfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063cfd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11063d00 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063d03 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11063d0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063d0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11063d0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063d12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063d16 jne 0x11063d51 */
  if (!C.zf) goto L_11063d51;
  /* 11063d18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11063d1a call 0x1105e000 */
  push32(0x11063d1fu); f_1105e000();
  /* 11063d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063d25 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063d29 jne 0x11063d47 */
  if (!C.zf) goto L_11063d47;
  /* 11063d2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063d2e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063d31 push edx */
  push32((uint32_t)(EDX));
  /* 11063d32 call dword ptr [0x11089358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089358))), 0x11063d38u);
  /* 11063d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063d3b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11063d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063d41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063d44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11063d47:;
  /* 11063d47 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11063d49 call 0x1105e0a0 */
  push32(0x11063d4eu); f_1105e0a0();
  /* 11063d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11063d51:;
  /* 11063d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063d54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063d57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063d5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11063d5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063d60 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11063d67 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11063d6b push eax */
  push32((uint32_t)(EAX));
  /* 11063d6c call dword ptr [0x11089354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089354))), 0x11063d72u);
  /* 11063d72 mov esp, ebp */
  ESP = (EBP);
  /* 11063d74 pop ebp */
  EBP = (pop32());
  /* 11063d75 ret  */
  ESPCHK(0x11063cf0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11063d80 (38 bytes, 13 insns) */
void f_11063d80(void) {
  FTRACE(0x11063d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11063d81 mov ebp, esp */
  EBP = (ESP);
  /* 11063d83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063d86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11063d89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063d8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11063d8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11063d92 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11063d99 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11063d9d push eax */
  push32((uint32_t)(EAX));
  /* 11063d9e call dword ptr [0x11089350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089350))), 0x11063da4u);
  /* 11063da4 pop ebp */
  EBP = (pop32());
  /* 11063da5 ret  */
  ESPCHK(0x11063d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013db0 @ 0x11063db0 (218 bytes, 63 insns) */
void f_11063db0(void) {
  FTRACE(0x11063db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11063db1 mov ebp, esp */
  EBP = (ESP);
  /* 11063db3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11063db6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11063dbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11063dbf call 0x1105e000 */
  push32(0x11063dc4u); f_1105e000();
  /* 11063dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063dc7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11063dce jmp 0x11063dd9 */
  goto L_11063dd9;
L_11063dd0:;
  /* 11063dd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063dd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063dd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11063dd9:;
  /* 11063dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063ddc cmp ecx, dword ptr [0x11087e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11087e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063de2 jge 0x11063e79 */
  if ((C.sf==C.of)) goto L_11063e79;
  /* 11063de8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063deb mov eax, dword ptr [0x11086b20] */
  EAX = (r32((uint32_t)(0x11086b20)));
  /* 11063df0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063df4 je 0x11063e74 */
  if (C.zf) goto L_11063e74;
  /* 11063df6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063df9 mov edx, dword ptr [0x11086b20] */
  EDX = (r32((uint32_t)(0x11086b20)));
  /* 11063dff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11063e02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11063e05 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11063e0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11063e0d je 0x11063e31 */
  if (C.zf) goto L_11063e31;
  /* 11063e0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063e12 mov eax, dword ptr [0x11086b20] */
  EAX = (r32((uint32_t)(0x11086b20)));
  /* 11063e17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11063e1a push ecx */
  push32((uint32_t)(ECX));
  /* 11063e1b call 0x11064ba0 */
  push32(0x11063e20u); f_11064ba0();
  /* 11063e20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063e23 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063e26 je 0x11063e31 */
  if (C.zf) goto L_11063e31;
  /* 11063e28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063e2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063e2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11063e31:;
  /* 11063e31 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063e35 jl 0x11063e74 */
  if ((C.sf!=C.of)) goto L_11063e74;
  /* 11063e37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063e3a mov ecx, dword ptr [0x11086b20] */
  ECX = (r32((uint32_t)(0x11086b20)));
  /* 11063e40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11063e43 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11063e46 push edx */
  push32((uint32_t)(EDX));
  /* 11063e47 call dword ptr [0x110893bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893bc))), 0x11063e4du);
  /* 11063e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11063e4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063e52 mov ecx, dword ptr [0x11086b20] */
  ECX = (r32((uint32_t)(0x11086b20)));
  /* 11063e58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11063e5b push edx */
  push32((uint32_t)(EDX));
  /* 11063e5c call 0x1105b090 */
  push32(0x11063e61u); f_1105b090();
  /* 11063e61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063e64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063e67 mov ecx, dword ptr [0x11086b20] */
  ECX = (r32((uint32_t)(0x11086b20)));
  /* 11063e6d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11063e74:;
  /* 11063e74 jmp 0x11063dd0 */
  goto L_11063dd0;
L_11063e79:;
  /* 11063e79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11063e7b call 0x1105e0a0 */
  push32(0x11063e80u); f_1105e0a0();
  /* 11063e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063e83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063e86 mov esp, ebp */
  ESP = (EBP);
  /* 11063e88 pop ebp */
  EBP = (pop32());
  /* 11063e89 ret  */
  ESPCHK(0x11063db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e90 @ 0x11063e90 (68 bytes, 26 insns) */
void f_11063e90(void) {
  FTRACE(0x11063e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11063e91 mov ebp, esp */
  EBP = (ESP);
  /* 11063e93 push ecx */
  push32((uint32_t)(ECX));
  /* 11063e94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063e98 jne 0x11063ea6 */
  if (!C.zf) goto L_11063ea6;
  /* 11063e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11063e9c call 0x11064000 */
  push32(0x11063ea1u); f_11064000();
  /* 11063ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063ea4 jmp 0x11063ed0 */
  goto L_11063ed0;
L_11063ea6:;
  /* 11063ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063ea9 push eax */
  push32((uint32_t)(EAX));
  /* 11063eaa call 0x11063410 */
  push32(0x11063eafu); f_11063410();
  /* 11063eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063eb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11063eb6 call 0x11063ee0 */
  push32(0x11063ebbu); f_11063ee0();
  /* 11063ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063ebe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11063ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063ec4 push edx */
  push32((uint32_t)(EDX));
  /* 11063ec5 call 0x11063480 */
  push32(0x11063ecau); f_11063480();
  /* 11063eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11063ed0:;
  /* 11063ed0 mov esp, ebp */
  ESP = (EBP);
  /* 11063ed2 pop ebp */
  EBP = (pop32());
  /* 11063ed3 ret  */
  ESPCHK(0x11063e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x11063ee0 (65 bytes, 26 insns) */
void f_11063ee0(void) {
  FTRACE(0x11063ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11063ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11063ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063ee6 push eax */
  push32((uint32_t)(EAX));
  /* 11063ee7 call 0x11063f30 */
  push32(0x11063eecu); f_11063f30();
  /* 11063eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11063ef1 je 0x11063ef8 */
  if (C.zf) goto L_11063ef8;
  /* 11063ef3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11063ef6 jmp 0x11063f1f */
  goto L_11063f1f;
L_11063ef8:;
  /* 11063ef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063efb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11063efe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11063f04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11063f06 je 0x11063f1d */
  if (C.zf) goto L_11063f1d;
  /* 11063f08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063f0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11063f0e push ecx */
  push32((uint32_t)(ECX));
  /* 11063f0f call 0x11064cf0 */
  push32(0x11063f14u); f_11064cf0();
  /* 11063f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063f17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11063f19 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11063f1b jmp 0x11063f1f */
  goto L_11063f1f;
L_11063f1d:;
  /* 11063f1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11063f1f:;
  /* 11063f1f pop ebp */
  EBP = (pop32());
  /* 11063f20 ret  */
  ESPCHK(0x11063ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f30 @ 0x11063f30 (183 bytes, 62 insns) */
void f_11063f30(void) {
  FTRACE(0x11063f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11063f31 mov ebp, esp */
  EBP = (ESP);
  /* 11063f33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11063f36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11063f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11063f40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11063f43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063f46 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11063f49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11063f4c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063f4f jne 0x11063fcb */
  if (!C.zf) goto L_11063fcb;
  /* 11063f51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063f54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11063f57 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11063f5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11063f5f je 0x11063fcb */
  if (C.zf) goto L_11063fcb;
  /* 11063f61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063f64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063f67 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11063f69 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11063f6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11063f6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063f73 jle 0x11063fcb */
  if ((C.zf||C.sf!=C.of)) goto L_11063fcb;
  /* 11063f75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11063f78 push edx */
  push32((uint32_t)(EDX));
  /* 11063f79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063f7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11063f7f push ecx */
  push32((uint32_t)(ECX));
  /* 11063f80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063f83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11063f86 push eax */
  push32((uint32_t)(EAX));
  /* 11063f87 call 0x11062ea0 */
  push32(0x11063f8cu); f_11062ea0();
  /* 11063f8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063f8f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11063f92 jne 0x11063fb5 */
  if (!C.zf) goto L_11063fb5;
  /* 11063f94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063f97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11063f9a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11063fa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11063fa2 je 0x11063fb3 */
  if (C.zf) goto L_11063fb3;
  /* 11063fa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063fa7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11063faa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11063fad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063fb0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11063fb3:;
  /* 11063fb3 jmp 0x11063fcb */
  goto L_11063fcb;
L_11063fb5:;
  /* 11063fb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063fb8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11063fbb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11063fbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063fc1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11063fc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11063fcb:;
  /* 11063fcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063fce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063fd1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11063fd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11063fd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11063fd9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11063fe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11063fe3 mov esp, ebp */
  ESP = (EBP);
  /* 11063fe5 pop ebp */
  EBP = (pop32());
  /* 11063fe6 ret  */
  ESPCHK(0x11063f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ff0 @ 0x11063ff0 (15 bytes, 7 insns) */
void f_11063ff0(void) {
  FTRACE(0x11063ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11063ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11063ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11063ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11063ff5 call 0x11064000 */
  push32(0x11063ffau); f_11064000();
  /* 11063ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11063ffd pop ebp */
  EBP = (pop32());
  /* 11063ffe ret  */
  ESPCHK(0x11063ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014000 @ 0x11064000 (319 bytes, 94 insns) */
void f_11064000(void) {
  FTRACE(0x11064000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064000 push ebp */
  push32((uint32_t)(EBP));
  /* 11064001 mov ebp, esp */
  EBP = (ESP);
  /* 11064003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064006 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106400d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11064014 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064016 call 0x1105e000 */
  push32(0x1106401bu); f_1105e000();
  /* 1106401b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106401e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11064025 jmp 0x11064030 */
  goto L_11064030;
L_11064027:;
  /* 11064027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106402a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106402d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11064030:;
  /* 11064030 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064033 cmp ecx, dword ptr [0x11087e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11087e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064039 jge 0x11064123 */
  if ((C.sf==C.of)) goto L_11064123;
  /* 1106403f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064042 mov eax, dword ptr [0x11086b20] */
  EAX = (r32((uint32_t)(0x11086b20)));
  /* 11064047 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106404b je 0x1106411e */
  if (C.zf) goto L_1106411e;
  /* 11064051 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064054 mov edx, dword ptr [0x11086b20] */
  EDX = (r32((uint32_t)(0x11086b20)));
  /* 1106405a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1106405d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11064060 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11064066 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11064068 je 0x1106411e */
  if (C.zf) goto L_1106411e;
  /* 1106406e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064071 mov eax, dword ptr [0x11086b20] */
  EAX = (r32((uint32_t)(0x11086b20)));
  /* 11064076 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11064079 push ecx */
  push32((uint32_t)(ECX));
  /* 1106407a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106407d push edx */
  push32((uint32_t)(EDX));
  /* 1106407e call 0x11063450 */
  push32(0x11064083u); f_11063450();
  /* 11064083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064086 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064089 mov ecx, dword ptr [0x11086b20] */
  ECX = (r32((uint32_t)(0x11086b20)));
  /* 1106408f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11064092 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11064095 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1106409a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106409c je 0x11064105 */
  if (C.zf) goto L_11064105;
  /* 1106409e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110640a2 jne 0x110640c9 */
  if (!C.zf) goto L_110640c9;
  /* 110640a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110640a7 mov edx, dword ptr [0x11086b20] */
  EDX = (r32((uint32_t)(0x11086b20)));
  /* 110640ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 110640b0 push eax */
  push32((uint32_t)(EAX));
  /* 110640b1 call 0x11063ee0 */
  push32(0x110640b6u); f_11063ee0();
  /* 110640b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110640b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110640bc je 0x110640c7 */
  if (C.zf) goto L_110640c7;
  /* 110640be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110640c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110640c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110640c7:;
  /* 110640c7 jmp 0x11064105 */
  goto L_11064105;
L_110640c9:;
  /* 110640c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110640cd jne 0x11064105 */
  if (!C.zf) goto L_11064105;
  /* 110640cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110640d2 mov eax, dword ptr [0x11086b20] */
  EAX = (r32((uint32_t)(0x11086b20)));
  /* 110640d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 110640da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110640dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 110640e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110640e2 je 0x11064105 */
  if (C.zf) goto L_11064105;
  /* 110640e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110640e7 mov ecx, dword ptr [0x11086b20] */
  ECX = (r32((uint32_t)(0x11086b20)));
  /* 110640ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 110640f0 push edx */
  push32((uint32_t)(EDX));
  /* 110640f1 call 0x11063ee0 */
  push32(0x110640f6u); f_11063ee0();
  /* 110640f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110640f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110640fc jne 0x11064105 */
  if (!C.zf) goto L_11064105;
  /* 110640fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11064105:;
  /* 11064105 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064108 mov ecx, dword ptr [0x11086b20] */
  ECX = (r32((uint32_t)(0x11086b20)));
  /* 1106410e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11064111 push edx */
  push32((uint32_t)(EDX));
  /* 11064112 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064115 push eax */
  push32((uint32_t)(EAX));
  /* 11064116 call 0x110634c0 */
  push32(0x1106411bu); f_110634c0();
  /* 1106411b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106411e:;
  /* 1106411e jmp 0x11064027 */
  goto L_11064027;
L_11064123:;
  /* 11064123 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064125 call 0x1105e0a0 */
  push32(0x1106412au); f_1105e0a0();
  /* 1106412a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106412d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064131 jne 0x11064138 */
  if (!C.zf) goto L_11064138;
  /* 11064133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064136 jmp 0x1106413b */
  goto L_1106413b;
L_11064138:;
  /* 11064138 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1106413b:;
  /* 1106413b mov esp, ebp */
  ESP = (EBP);
  /* 1106413d pop ebp */
  EBP = (pop32());
  /* 1106413e ret  */
  ESPCHK(0x11064000u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11064140 (15 bytes, 7 insns) */
void f_11064140(void) {
  FTRACE(0x11064140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064140 push ebp */
  push32((uint32_t)(EBP));
  /* 11064141 mov ebp, esp */
  EBP = (ESP);
  /* 11064143 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064145 call 0x11059570 */
  push32(0x1106414au); f_11059570();
  /* 1106414a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106414d pop ebp */
  EBP = (pop32());
  /* 1106414e ret  */
  ESPCHK(0x11064140u, _esp0);
  ESP += 4; return;
}

/* FUN_10014150 @ 0x11064150 (1007 bytes, 269 insns) */
void f_11064150(void) {
  FTRACE(0x11064150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064150 push ebp */
  push32((uint32_t)(EBP));
  /* 11064151 mov ebp, esp */
  EBP = (ESP);
  /* 11064153 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064159 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106415d jl 0x11064165 */
  if ((C.sf!=C.of)) goto L_11064165;
  /* 1106415f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064163 jle 0x1106416c */
  if ((C.zf||C.sf!=C.of)) goto L_1106416c;
L_11064165:;
  /* 11064165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064167 jmp 0x1106453b */
  goto L_1106453b;
L_1106416c:;
  /* 1106416c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1106416e call 0x1105e000 */
  push32(0x11064173u); f_1105e000();
  /* 11064173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064176 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1106417d mov eax, dword ptr [0x11086b0c] */
  EAX = (r32((uint32_t)(0x11086b0c)));
  /* 11064182 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064185 mov dword ptr [0x11086b0c], eax */
  w32((uint32_t)(0x11086b0c), (EAX));
L_1106418a:;
  /* 1106418a cmp dword ptr [0x11086b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064191 je 0x1106419d */
  if (C.zf) goto L_1106419d;
  /* 11064193 push 1 */
  push32((uint32_t)(0x1u));
  /* 11064195 call dword ptr [0x1108930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108930c))), 0x1106419bu);
  /* 1106419b jmp 0x1106418a */
  goto L_1106418a;
L_1106419d:;
  /* 1106419d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110641a1 je 0x110641e1 */
  if (C.zf) goto L_110641e1;
  /* 110641a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110641a7 je 0x110641c1 */
  if (C.zf) goto L_110641c1;
  /* 110641a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110641ac push ecx */
  push32((uint32_t)(ECX));
  /* 110641ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110641b0 push edx */
  push32((uint32_t)(EDX));
  /* 110641b1 call 0x11064540 */
  push32(0x110641b6u); f_11064540();
  /* 110641b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110641b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 110641bf jmp 0x110641d3 */
  goto L_110641d3;
L_110641c1:;
  /* 110641c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110641c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110641c7 mov ecx, dword ptr [eax + 0x110854dc] */
  ECX = (r32((uint32_t)(EAX + 0x110854dc)));
  /* 110641cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_110641d3:;
  /* 110641d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 110641d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110641dc jmp 0x1106451b */
  goto L_1106451b;
L_110641e1:;
  /* 110641e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 110641e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110641ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110641f3 je 0x11064513 */
  if (C.zf) goto L_11064513;
  /* 110641f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110641fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110641ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064202 jne 0x11064424 */
  if (!C.zf) goto L_11064424;
  /* 11064208 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106420b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1106420f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064212 jne 0x11064424 */
  if (!C.zf) goto L_11064424;
  /* 11064218 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106421b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1106421f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064222 jne 0x11064424 */
  if (!C.zf) goto L_11064424;
  /* 11064228 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106422b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11064231:;
  /* 11064231 push 0x11082484 */
  push32((uint32_t)(0x11082484u));
  /* 11064236 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1106423c push ecx */
  push32((uint32_t)(ECX));
  /* 1106423d call 0x110663a0 */
  push32(0x11064242u); f_110663a0();
  /* 11064242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064245 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1106424b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064252 je 0x1106427d */
  if (C.zf) goto L_1106427d;
  /* 11064254 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106425a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064260 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11064266 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106426d je 0x1106427d */
  if (C.zf) goto L_1106427d;
  /* 1106426f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11064275 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11064278 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106427b jne 0x110642a3 */
  if (!C.zf) goto L_110642a3;
L_1106427d:;
  /* 1106427d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064281 je 0x1106429c */
  if (C.zf) goto L_1106429c;
  /* 11064283 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11064285 call 0x1105e0a0 */
  push32(0x1106428au); f_1105e0a0();
  /* 1106428a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106428d mov edx, dword ptr [0x11086b0c] */
  EDX = (r32((uint32_t)(0x11086b0c)));
  /* 11064293 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064296 mov dword ptr [0x11086b0c], edx */
  w32((uint32_t)(0x11086b0c), (EDX));
L_1106429c:;
  /* 1106429c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106429e jmp 0x1106453b */
  goto L_1106453b;
L_110642a3:;
  /* 110642a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 110642aa jmp 0x110642b5 */
  goto L_110642b5;
L_110642ac:;
  /* 110642ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110642af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110642b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_110642b5:;
  /* 110642b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110642b9 jg 0x11064303 */
  if ((!C.zf&&C.sf==C.of)) goto L_11064303;
  /* 110642bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 110642c1 push ecx */
  push32((uint32_t)(ECX));
  /* 110642c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110642c8 push edx */
  push32((uint32_t)(EDX));
  /* 110642c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110642cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110642cf mov ecx, dword ptr [eax + 0x110854d8] */
  ECX = (r32((uint32_t)(EAX + 0x110854d8)));
  /* 110642d5 push ecx */
  push32((uint32_t)(ECX));
  /* 110642d6 call 0x11066360 */
  push32(0x110642dbu); f_11066360();
  /* 110642db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110642de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110642e0 jne 0x11064301 */
  if (!C.zf) goto L_11064301;
  /* 110642e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110642e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110642e8 mov eax, dword ptr [edx + 0x110854d8] */
  EAX = (r32((uint32_t)(EDX + 0x110854d8)));
  /* 110642ee push eax */
  push32((uint32_t)(EAX));
  /* 110642ef call 0x1105d430 */
  push32(0x110642f4u); f_1105d430();
  /* 110642f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110642f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110642fd jne 0x11064301 */
  if (!C.zf) goto L_11064301;
  /* 110642ff jmp 0x11064303 */
  goto L_11064303;
L_11064301:;
  /* 11064301 jmp 0x110642ac */
  goto L_110642ac;
L_11064303:;
  /* 11064303 push 0x11082480 */
  push32((uint32_t)(0x11082480u));
  /* 11064308 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106430e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064311 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11064317 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106431d push edx */
  push32((uint32_t)(EDX));
  /* 1106431e call 0x11066320 */
  push32(0x11064323u); f_11066320();
  /* 11064323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064326 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1106432c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064333 jne 0x11064369 */
  if (!C.zf) goto L_11064369;
  /* 11064335 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106433b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1106433e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064341 je 0x11064369 */
  if (C.zf) goto L_11064369;
  /* 11064343 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064347 je 0x11064362 */
  if (C.zf) goto L_11064362;
  /* 11064349 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1106434b call 0x1105e0a0 */
  push32(0x11064350u); f_1105e0a0();
  /* 11064350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064353 mov edx, dword ptr [0x11086b0c] */
  EDX = (r32((uint32_t)(0x11086b0c)));
  /* 11064359 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106435c mov dword ptr [0x11086b0c], edx */
  w32((uint32_t)(0x11086b0c), (EDX));
L_11064362:;
  /* 11064362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064364 jmp 0x1106453b */
  goto L_1106453b;
L_11064369:;
  /* 11064369 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106436d jg 0x110643ba */
  if ((!C.zf&&C.sf==C.of)) goto L_110643ba;
  /* 1106436f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11064375 push eax */
  push32((uint32_t)(EAX));
  /* 11064376 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106437c push ecx */
  push32((uint32_t)(ECX));
  /* 1106437d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11064383 push edx */
  push32((uint32_t)(EDX));
  /* 11064384 call 0x1105de20 */
  push32(0x11064389u); f_1105de20();
  /* 11064389 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106438c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11064392 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1106439a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 110643a0 push ecx */
  push32((uint32_t)(ECX));
  /* 110643a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110643a4 push edx */
  push32((uint32_t)(EDX));
  /* 110643a5 call 0x11064540 */
  push32(0x110643aau); f_11064540();
  /* 110643aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110643ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110643af je 0x110643ba */
  if (C.zf) goto L_110643ba;
  /* 110643b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110643b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110643b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_110643ba:;
  /* 110643ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110643c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110643c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 110643cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110643d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110643d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110643d7 je 0x110643e8 */
  if (C.zf) goto L_110643e8;
  /* 110643d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110643df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110643e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_110643e8:;
  /* 110643e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110643ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110643f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110643f3 jne 0x11064231 */
  if (!C.zf) goto L_11064231;
  /* 110643f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110643fd je 0x1106440c */
  if (C.zf) goto L_1106440c;
  /* 110643ff call 0x110646e0 */
  push32(0x11064404u); f_110646e0();
  /* 11064404 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1106440a jmp 0x11064416 */
  goto L_11064416;
L_1106440c:;
  /* 1106440c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11064416:;
  /* 11064416 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1106441c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1106441f jmp 0x11064511 */
  goto L_11064511;
L_11064424:;
  /* 11064424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064427 push edx */
  push32((uint32_t)(EDX));
  /* 11064428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106442a push 0 */
  push32((uint32_t)(0x0u));
  /* 1106442c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11064432 push eax */
  push32((uint32_t)(EAX));
  /* 11064433 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064436 push ecx */
  push32((uint32_t)(ECX));
  /* 11064437 call 0x110647e0 */
  push32(0x1106443cu); f_110647e0();
  /* 1106443c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106443f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11064442 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064446 je 0x11064511 */
  if (C.zf) goto L_11064511;
  /* 1106444c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11064453 jmp 0x1106445e */
  goto L_1106445e;
L_11064455:;
  /* 11064455 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11064458 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106445b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1106445e:;
  /* 1106445e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064462 jg 0x110644c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_110644c0;
  /* 11064464 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064468 je 0x110644be */
  if (C.zf) goto L_110644be;
  /* 1106446a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106446d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064470 mov ecx, dword ptr [eax + 0x110854dc] */
  ECX = (r32((uint32_t)(EAX + 0x110854dc)));
  /* 11064476 push ecx */
  push32((uint32_t)(ECX));
  /* 11064477 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1106447d push edx */
  push32((uint32_t)(EDX));
  /* 1106447e call 0x11066290 */
  push32(0x11064483u); f_11066290();
  /* 11064483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064488 je 0x110644b5 */
  if (C.zf) goto L_110644b5;
  /* 1106448a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11064490 push eax */
  push32((uint32_t)(EAX));
  /* 11064491 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11064494 push ecx */
  push32((uint32_t)(ECX));
  /* 11064495 call 0x11064540 */
  push32(0x1106449au); f_11064540();
  /* 1106449a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106449d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106449f je 0x110644ac */
  if (C.zf) goto L_110644ac;
  /* 110644a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110644a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110644a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110644aa jmp 0x110644b3 */
  goto L_110644b3;
L_110644ac:;
  /* 110644ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_110644b3:;
  /* 110644b3 jmp 0x110644be */
  goto L_110644be;
L_110644b5:;
  /* 110644b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110644b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110644bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_110644be:;
  /* 110644be jmp 0x11064455 */
  goto L_11064455;
L_110644c0:;
  /* 110644c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110644c4 je 0x110644eb */
  if (C.zf) goto L_110644eb;
  /* 110644c6 call 0x110646e0 */
  push32(0x110644cbu); f_110646e0();
  /* 110644cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110644ce push 2 */
  push32((uint32_t)(0x2u));
  /* 110644d0 mov ecx, dword ptr [0x110854dc] */
  ECX = (r32((uint32_t)(0x110854dc)));
  /* 110644d6 push ecx */
  push32((uint32_t)(ECX));
  /* 110644d7 call 0x1105b090 */
  push32(0x110644dcu); f_1105b090();
  /* 110644dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110644df mov dword ptr [0x110854dc], 0 */
  w32((uint32_t)(0x110854dc), (0x0u));
  /* 110644e9 jmp 0x11064511 */
  goto L_11064511;
L_110644eb:;
  /* 110644eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110644ef je 0x110644fe */
  if (C.zf) goto L_110644fe;
  /* 110644f1 call 0x110646e0 */
  push32(0x110644f6u); f_110646e0();
  /* 110644f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 110644fc jmp 0x11064508 */
  goto L_11064508;
L_110644fe:;
  /* 110644fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11064508:;
  /* 11064508 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1106450e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11064511:;
  /* 11064511 jmp 0x1106451b */
  goto L_1106451b;
L_11064513:;
  /* 11064513 call 0x110646e0 */
  push32(0x11064518u); f_110646e0();
  /* 11064518 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1106451b:;
  /* 1106451b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106451f je 0x11064538 */
  if (C.zf) goto L_11064538;
  /* 11064521 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11064523 call 0x1105e0a0 */
  push32(0x11064528u); f_1105e0a0();
  /* 11064528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106452b mov eax, dword ptr [0x11086b0c] */
  EAX = (r32((uint32_t)(0x11086b0c)));
  /* 11064530 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064533 mov dword ptr [0x11086b0c], eax */
  w32((uint32_t)(0x11086b0c), (EAX));
L_11064538:;
  /* 11064538 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1106453b:;
  /* 1106453b mov esp, ebp */
  ESP = (EBP);
  /* 1106453d pop ebp */
  EBP = (pop32());
  /* 1106453e ret  */
  ESPCHK(0x11064150u, _esp0);
  ESP += 4; return;
}

/* FUN_10014540 @ 0x11064540 (403 bytes, 117 insns) */
void f_11064540(void) {
  FTRACE(0x11064540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064540 push ebp */
  push32((uint32_t)(EBP));
  /* 11064541 mov ebp, esp */
  EBP = (ESP);
  /* 11064543 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106454c push eax */
  push32((uint32_t)(EAX));
  /* 1106454d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11064553 push ecx */
  push32((uint32_t)(ECX));
  /* 11064554 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1106455a push edx */
  push32((uint32_t)(EDX));
  /* 1106455b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11064561 push eax */
  push32((uint32_t)(EAX));
  /* 11064562 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064565 push ecx */
  push32((uint32_t)(ECX));
  /* 11064566 call 0x110647e0 */
  push32(0x1106456bu); f_110647e0();
  /* 1106456b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106456e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064570 jne 0x11064579 */
  if (!C.zf) goto L_11064579;
  /* 11064572 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064574 jmp 0x110646cf */
  goto L_110646cf;
L_11064579:;
  /* 11064579 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1106457e push 0x11082488 */
  push32((uint32_t)(0x11082488u));
  /* 11064583 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064585 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1106458b push edx */
  push32((uint32_t)(EDX));
  /* 1106458c call 0x1105d430 */
  push32(0x11064591u); f_1105d430();
  /* 11064591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064594 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064597 push eax */
  push32((uint32_t)(EAX));
  /* 11064598 call 0x1105a600 */
  push32(0x1106459du); f_1105a600();
  /* 1106459d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110645a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110645a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110645a7 jne 0x110645b0 */
  if (!C.zf) goto L_110645b0;
  /* 110645a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110645ab jmp 0x110646cf */
  goto L_110646cf;
L_110645b0:;
  /* 110645b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110645b3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110645b6 mov ecx, dword ptr [eax + 0x110854dc] */
  ECX = (r32((uint32_t)(EAX + 0x110854dc)));
  /* 110645bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110645bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110645c2 mov eax, dword ptr [edx*4 + 0x11086988] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11086988)));
  /* 110645c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110645cc push 6 */
  push32((uint32_t)(0x6u));
  /* 110645ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110645d1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110645d4 add ecx, 0x110869d8 */
  { uint32_t _a=(ECX),_b=(0x110869d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110645da push ecx */
  push32((uint32_t)(ECX));
  /* 110645db lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 110645de push edx */
  push32((uint32_t)(EDX));
  /* 110645df call 0x11060ee0 */
  push32(0x110645e4u); f_11060ee0();
  /* 110645e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110645e7 mov eax, dword ptr [0x110869a0] */
  EAX = (r32((uint32_t)(0x110869a0)));
  /* 110645ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110645ef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 110645f5 push ecx */
  push32((uint32_t)(ECX));
  /* 110645f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110645f9 push edx */
  push32((uint32_t)(EDX));
  /* 110645fa call 0x1105d5b0 */
  push32(0x110645ffu); f_1105d5b0();
  /* 110645ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064605 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064608 mov dword ptr [ecx + 0x110854dc], eax */
  w32((uint32_t)(ECX + 0x110854dc), (EAX));
  /* 1106460e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11064614 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1106461a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106461d mov dword ptr [eax*4 + 0x11086988], edx */
  w32((uint32_t)(EAX*4 + 0x11086988), (EDX));
  /* 11064624 push 6 */
  push32((uint32_t)(0x6u));
  /* 11064626 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1106462c push ecx */
  push32((uint32_t)(ECX));
  /* 1106462d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064630 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064633 add edx, 0x110869d8 */
  { uint32_t _a=(EDX),_b=(0x110869d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064639 push edx */
  push32((uint32_t)(EDX));
  /* 1106463a call 0x11060ee0 */
  push32(0x1106463fu); f_11060ee0();
  /* 1106463f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064642 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064646 jne 0x11064653 */
  if (!C.zf) goto L_11064653;
  /* 11064648 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106464e mov dword ptr [0x110869a0], eax */
  w32((uint32_t)(0x110869a0), (EAX));
L_11064653:;
  /* 11064653 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064657 jne 0x11064665 */
  if (!C.zf) goto L_11064665;
  /* 11064659 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106465f mov dword ptr [0x110869a4], ecx */
  w32((uint32_t)(0x110869a4), (ECX));
L_11064665:;
  /* 11064665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064668 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106466b call dword ptr [edx + 0x110854e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x110854e0))), 0x11064671u);
  /* 11064671 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064673 je 0x110646ac */
  if (C.zf) goto L_110646ac;
  /* 11064675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064678 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106467b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106467e mov dword ptr [eax + 0x110854dc], ecx */
  w32((uint32_t)(EAX + 0x110854dc), (ECX));
  /* 11064684 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064686 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064689 push edx */
  push32((uint32_t)(EDX));
  /* 1106468a call 0x1105b090 */
  push32(0x1106468fu); f_1105b090();
  /* 1106468f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064695 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064698 mov dword ptr [eax*4 + 0x11086988], ecx */
  w32((uint32_t)(EAX*4 + 0x11086988), (ECX));
  /* 1106469f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110646a2 mov dword ptr [0x110869a0], edx */
  w32((uint32_t)(0x110869a0), (EDX));
  /* 110646a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110646aa jmp 0x110646cf */
  goto L_110646cf;
L_110646ac:;
  /* 110646ac cmp dword ptr [ebp - 0xc], 0x110853c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x110853c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110646b3 je 0x110646c3 */
  if (C.zf) goto L_110646c3;
  /* 110646b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110646b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110646ba push eax */
  push32((uint32_t)(EAX));
  /* 110646bb call 0x1105b090 */
  push32(0x110646c0u); f_1105b090();
  /* 110646c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110646c3:;
  /* 110646c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110646c6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110646c9 mov eax, dword ptr [ecx + 0x110854dc] */
  EAX = (r32((uint32_t)(ECX + 0x110854dc)));
L_110646cf:;
  /* 110646cf mov esp, ebp */
  ESP = (EBP);
  /* 110646d1 pop ebp */
  EBP = (pop32());
  /* 110646d2 ret  */
  ESPCHK(0x11064540u, _esp0);
  ESP += 4; return;
}

/* FUN_100146e0 @ 0x110646e0 (256 bytes, 72 insns) */
void f_110646e0(void) {
  FTRACE(0x110646e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110646e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110646e1 mov ebp, esp */
  EBP = (ESP);
  /* 110646e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110646e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110646ed cmp dword ptr [0x110854dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110854dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110646f4 jne 0x11064714 */
  if (!C.zf) goto L_11064714;
  /* 110646f6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 110646fb push 0x11082488 */
  push32((uint32_t)(0x11082488u));
  /* 11064700 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064702 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11064707 call 0x1105a600 */
  push32(0x1106470cu); f_1105a600();
  /* 1106470c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106470f mov dword ptr [0x110854dc], eax */
  w32((uint32_t)(0x110854dc), (EAX));
L_11064714:;
  /* 11064714 mov eax, dword ptr [0x110854dc] */
  EAX = (r32((uint32_t)(0x110854dc)));
  /* 11064719 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1106471c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11064723 jmp 0x1106472e */
  goto L_1106472e;
L_11064725:;
  /* 11064725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064728 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106472b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1106472e:;
  /* 1106472e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064731 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064734 mov eax, dword ptr [edx + 0x110854dc] */
  EAX = (r32((uint32_t)(EDX + 0x110854dc)));
  /* 1106473a push eax */
  push32((uint32_t)(EAX));
  /* 1106473b push 0x11082494 */
  push32((uint32_t)(0x11082494u));
  /* 11064740 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064743 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064746 mov edx, dword ptr [ecx + 0x110854d8] */
  EDX = (r32((uint32_t)(ECX + 0x110854d8)));
  /* 1106474c push edx */
  push32((uint32_t)(EDX));
  /* 1106474d push 3 */
  push32((uint32_t)(0x3u));
  /* 1106474f mov eax, dword ptr [0x110854dc] */
  EAX = (r32((uint32_t)(0x110854dc)));
  /* 11064754 push eax */
  push32((uint32_t)(EAX));
  /* 11064755 call 0x11064980 */
  push32(0x1106475au); f_11064980();
  /* 1106475a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106475d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064761 jge 0x110647a9 */
  if ((C.sf==C.of)) goto L_110647a9;
  /* 11064763 push 0x11082480 */
  push32((uint32_t)(0x11082480u));
  /* 11064768 mov ecx, dword ptr [0x110854dc] */
  ECX = (r32((uint32_t)(0x110854dc)));
  /* 1106476e push ecx */
  push32((uint32_t)(ECX));
  /* 1106476f call 0x1105d5c0 */
  push32(0x11064774u); f_1105d5c0();
  /* 11064774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064777 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106477a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106477d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064780 mov eax, dword ptr [edx + 0x110854dc] */
  EAX = (r32((uint32_t)(EDX + 0x110854dc)));
  /* 11064786 push eax */
  push32((uint32_t)(EAX));
  /* 11064787 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106478a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106478d mov edx, dword ptr [ecx + 0x110854dc] */
  EDX = (r32((uint32_t)(ECX + 0x110854dc)));
  /* 11064793 push edx */
  push32((uint32_t)(EDX));
  /* 11064794 call 0x11066290 */
  push32(0x11064799u); f_11066290();
  /* 11064799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106479c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106479e je 0x110647a7 */
  if (C.zf) goto L_110647a7;
  /* 110647a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110647a7:;
  /* 110647a7 jmp 0x110647d7 */
  goto L_110647d7;
L_110647a9:;
  /* 110647a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110647ad jne 0x110647b6 */
  if (!C.zf) goto L_110647b6;
  /* 110647af mov eax, dword ptr [0x110854dc] */
  EAX = (r32((uint32_t)(0x110854dc)));
  /* 110647b4 jmp 0x110647dc */
  goto L_110647dc;
L_110647b6:;
  /* 110647b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110647b8 mov eax, dword ptr [0x110854dc] */
  EAX = (r32((uint32_t)(0x110854dc)));
  /* 110647bd push eax */
  push32((uint32_t)(EAX));
  /* 110647be call 0x1105b090 */
  push32(0x110647c3u); f_1105b090();
  /* 110647c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110647c6 mov dword ptr [0x110854dc], 0 */
  w32((uint32_t)(0x110854dc), (0x0u));
  /* 110647d0 mov eax, dword ptr [0x110854f4] */
  EAX = (r32((uint32_t)(0x110854f4)));
  /* 110647d5 jmp 0x110647dc */
  goto L_110647dc;
L_110647d7:;
  /* 110647d7 jmp 0x11064725 */
  goto L_11064725;
L_110647dc:;
  /* 110647dc mov esp, ebp */
  ESP = (EBP);
  /* 110647de pop ebp */
  EBP = (pop32());
  /* 110647df ret  */
  ESPCHK(0x110646e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147e0 @ 0x110647e0 (388 bytes, 115 insns) */
void f_110647e0(void) {
  FTRACE(0x110647e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110647e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110647e1 mov ebp, esp */
  EBP = (ESP);
  /* 110647e3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110647e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110647ed jne 0x110647f6 */
  if (!C.zf) goto L_110647f6;
  /* 110647ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110647f1 jmp 0x11064960 */
  goto L_11064960;
L_110647f6:;
  /* 110647f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110647f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110647fc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110647ff jne 0x11064850 */
  if (!C.zf) goto L_11064850;
  /* 11064801 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064804 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11064808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106480a jne 0x11064850 */
  if (!C.zf) goto L_11064850;
  /* 1106480c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106480f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11064812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064815 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11064819 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106481d je 0x11064839 */
  if (C.zf) goto L_11064839;
  /* 1106481f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11064822 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11064827 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106482a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11064830 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11064833 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11064839:;
  /* 11064839 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106483d je 0x11064848 */
  if (C.zf) goto L_11064848;
  /* 1106483f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11064842 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11064848:;
  /* 11064848 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106484b jmp 0x11064960 */
  goto L_11064960;
L_11064850:;
  /* 11064850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064853 push ecx */
  push32((uint32_t)(ECX));
  /* 11064854 push 0x11085450 */
  push32((uint32_t)(0x11085450u));
  /* 11064859 call 0x11066290 */
  push32(0x1106485eu); f_11066290();
  /* 1106485e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064863 je 0x11064918 */
  if (C.zf) goto L_11064918;
  /* 11064869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106486c push edx */
  push32((uint32_t)(EDX));
  /* 1106486d push 0x110853cc */
  push32((uint32_t)(0x110853ccu));
  /* 11064872 call 0x11066290 */
  push32(0x11064877u); f_11066290();
  /* 11064877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106487a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106487c je 0x11064918 */
  if (C.zf) goto L_11064918;
  /* 11064882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064885 push eax */
  push32((uint32_t)(EAX));
  /* 11064886 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1106488c push ecx */
  push32((uint32_t)(ECX));
  /* 1106488d call 0x110649d0 */
  push32(0x11064892u); f_110649d0();
  /* 11064892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064897 je 0x110648a0 */
  if (C.zf) goto L_110648a0;
  /* 11064899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106489b jmp 0x11064960 */
  goto L_11064960;
L_110648a0:;
  /* 110648a0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 110648a6 push edx */
  push32((uint32_t)(EDX));
  /* 110648a7 push 0x110869b0 */
  push32((uint32_t)(0x110869b0u));
  /* 110648ac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 110648b2 push eax */
  push32((uint32_t)(EAX));
  /* 110648b3 call 0x110663e0 */
  push32(0x110648b8u); f_110663e0();
  /* 110648b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110648bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110648bd jne 0x110648c6 */
  if (!C.zf) goto L_110648c6;
  /* 110648bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110648c1 jmp 0x11064960 */
  goto L_11064960;
L_110648c6:;
  /* 110648c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110648c8 mov cx, word ptr [0x110869b4] */
  CX = (r16((uint32_t)(0x110869b4)));
  /* 110648cf mov dword ptr [0x110869b8], ecx */
  w32((uint32_t)(0x110869b8), (ECX));
  /* 110648d5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 110648db push edx */
  push32((uint32_t)(EDX));
  /* 110648dc push 0x11085450 */
  push32((uint32_t)(0x11085450u));
  /* 110648e1 call 0x11064b30 */
  push32(0x110648e6u); f_11064b30();
  /* 110648e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110648e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110648ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110648ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110648f1 je 0x11064906 */
  if (C.zf) goto L_11064906;
  /* 110648f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110648f6 push edx */
  push32((uint32_t)(EDX));
  /* 110648f7 push 0x110853cc */
  push32((uint32_t)(0x110853ccu));
  /* 110648fc call 0x1105d5b0 */
  push32(0x11064901u); f_1105d5b0();
  /* 11064901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064904 jmp 0x11064918 */
  goto L_11064918;
L_11064906:;
  /* 11064906 push 0x11085450 */
  push32((uint32_t)(0x11085450u));
  /* 1106490b push 0x110853cc */
  push32((uint32_t)(0x110853ccu));
  /* 11064910 call 0x1105d5b0 */
  push32(0x11064915u); f_1105d5b0();
  /* 11064915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11064918:;
  /* 11064918 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106491c je 0x11064931 */
  if (C.zf) goto L_11064931;
  /* 1106491e push 6 */
  push32((uint32_t)(0x6u));
  /* 11064920 push 0x110869b0 */
  push32((uint32_t)(0x110869b0u));
  /* 11064925 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11064928 push eax */
  push32((uint32_t)(EAX));
  /* 11064929 call 0x11060ee0 */
  push32(0x1106492eu); f_11060ee0();
  /* 1106492e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11064931:;
  /* 11064931 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064935 je 0x1106494a */
  if (C.zf) goto L_1106494a;
  /* 11064937 push 4 */
  push32((uint32_t)(0x4u));
  /* 11064939 push 0x110869b8 */
  push32((uint32_t)(0x110869b8u));
  /* 1106493e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11064941 push ecx */
  push32((uint32_t)(ECX));
  /* 11064942 call 0x11060ee0 */
  push32(0x11064947u); f_11060ee0();
  /* 11064947 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106494a:;
  /* 1106494a push 0x11085450 */
  push32((uint32_t)(0x11085450u));
  /* 1106494f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064952 push edx */
  push32((uint32_t)(EDX));
  /* 11064953 call 0x1105d5b0 */
  push32(0x11064958u); f_1105d5b0();
  /* 11064958 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106495b mov eax, 0x11085450 */
  EAX = (0x11085450u);
L_11064960:;
  /* 11064960 mov esp, ebp */
  ESP = (EBP);
  /* 11064962 pop ebp */
  EBP = (pop32());
  /* 11064963 ret  */
  ESPCHK(0x110647e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014970 @ 0x11064970 (7 bytes, 5 insns) */
void f_11064970(void) {
  FTRACE(0x11064970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064970 push ebp */
  push32((uint32_t)(EBP));
  /* 11064971 mov ebp, esp */
  EBP = (ESP);
  /* 11064973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064975 pop ebp */
  EBP = (pop32());
  /* 11064976 ret  */
  ESPCHK(0x11064970u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11064980 (79 bytes, 28 insns) */
void f_11064980(void) {
  FTRACE(0x11064980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064980 push ebp */
  push32((uint32_t)(EBP));
  /* 11064981 mov ebp, esp */
  EBP = (ESP);
  /* 11064983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064986 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11064989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1106498c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11064993 jmp 0x1106499e */
  goto L_1106499e;
L_11064995:;
  /* 11064995 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064998 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106499b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1106499e:;
  /* 1106499e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110649a1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110649a4 jge 0x110649c4 */
  if ((C.sf==C.of)) goto L_110649c4;
  /* 110649a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110649a9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110649ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110649af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110649b2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 110649b5 push edx */
  push32((uint32_t)(EDX));
  /* 110649b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110649b9 push eax */
  push32((uint32_t)(EAX));
  /* 110649ba call 0x1105d5c0 */
  push32(0x110649bfu); f_1105d5c0();
  /* 110649bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110649c2 jmp 0x11064995 */
  goto L_11064995;
L_110649c4:;
  /* 110649c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110649cb mov esp, ebp */
  ESP = (EBP);
  /* 110649cd pop ebp */
  EBP = (pop32());
  /* 110649ce ret  */
  ESPCHK(0x11064980u, _esp0);
  ESP += 4; return;
}

/* FUN_100149d0 @ 0x110649d0 (349 bytes, 122 insns) */
void f_110649d0(void) {
  FTRACE(0x110649d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110649d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110649d1 mov ebp, esp */
  EBP = (ESP);
  /* 110649d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110649d6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 110649db push 0 */
  push32((uint32_t)(0x0u));
  /* 110649dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110649e0 push eax */
  push32((uint32_t)(EAX));
  /* 110649e1 call 0x1105e370 */
  push32(0x110649e6u); f_1105e370();
  /* 110649e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110649e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110649ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110649ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110649f1 jne 0x110649fa */
  if (!C.zf) goto L_110649fa;
  /* 110649f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110649f5 jmp 0x11064b29 */
  goto L_11064b29;
L_110649fa:;
  /* 110649fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110649fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11064a00 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064a03 jne 0x11064a30 */
  if (!C.zf) goto L_11064a30;
  /* 11064a05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064a08 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11064a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064a0e je 0x11064a30 */
  if (C.zf) goto L_11064a30;
  /* 11064a10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064a13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064a16 push ecx */
  push32((uint32_t)(ECX));
  /* 11064a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064a1a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064a20 push edx */
  push32((uint32_t)(EDX));
  /* 11064a21 call 0x1105d5b0 */
  push32(0x11064a26u); f_1105d5b0();
  /* 11064a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064a2b jmp 0x11064b29 */
  goto L_11064b29;
L_11064a30:;
  /* 11064a30 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11064a37 jmp 0x11064a42 */
  goto L_11064a42;
L_11064a39:;
  /* 11064a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064a3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064a3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11064a42:;
  /* 11064a42 push 0x11082498 */
  push32((uint32_t)(0x11082498u));
  /* 11064a47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064a4a push ecx */
  push32((uint32_t)(ECX));
  /* 11064a4b call 0x11066320 */
  push32(0x11064a50u); f_11066320();
  /* 11064a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064a53 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11064a56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064a5a jne 0x11064a64 */
  if (!C.zf) goto L_11064a64;
  /* 11064a5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11064a5f jmp 0x11064b29 */
  goto L_11064b29;
L_11064a64:;
  /* 11064a64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064a67 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064a6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11064a6c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11064a6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064a73 jne 0x11064a9a */
  if (!C.zf) goto L_11064a9a;
  /* 11064a75 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064a79 jge 0x11064a9a */
  if ((C.sf==C.of)) goto L_11064a9a;
  /* 11064a7b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11064a7f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064a82 je 0x11064a9a */
  if (C.zf) goto L_11064a9a;
  /* 11064a84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064a87 push edx */
  push32((uint32_t)(EDX));
  /* 11064a88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064a8b push eax */
  push32((uint32_t)(EAX));
  /* 11064a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064a8f push ecx */
  push32((uint32_t)(ECX));
  /* 11064a90 call 0x1105de20 */
  push32(0x11064a95u); f_1105de20();
  /* 11064a95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064a98 jmp 0x11064b00 */
  goto L_11064b00;
L_11064a9a:;
  /* 11064a9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064a9e jne 0x11064ac8 */
  if (!C.zf) goto L_11064ac8;
  /* 11064aa0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064aa4 jge 0x11064ac8 */
  if ((C.sf==C.of)) goto L_11064ac8;
  /* 11064aa6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11064aaa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064aad je 0x11064ac8 */
  if (C.zf) goto L_11064ac8;
  /* 11064aaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064ab2 push eax */
  push32((uint32_t)(EAX));
  /* 11064ab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 11064ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064aba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064abd push edx */
  push32((uint32_t)(EDX));
  /* 11064abe call 0x1105de20 */
  push32(0x11064ac3u); f_1105de20();
  /* 11064ac3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064ac6 jmp 0x11064b00 */
  goto L_11064b00;
L_11064ac8:;
  /* 11064ac8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064acc jne 0x11064afb */
  if (!C.zf) goto L_11064afb;
  /* 11064ace movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11064ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064ad4 je 0x11064adf */
  if (C.zf) goto L_11064adf;
  /* 11064ad6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11064ada cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064add jne 0x11064afb */
  if (!C.zf) goto L_11064afb;
L_11064adf:;
  /* 11064adf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064ae2 push edx */
  push32((uint32_t)(EDX));
  /* 11064ae3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11064ae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064aea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064af0 push ecx */
  push32((uint32_t)(ECX));
  /* 11064af1 call 0x1105de20 */
  push32(0x11064af6u); f_1105de20();
  /* 11064af6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064af9 jmp 0x11064b00 */
  goto L_11064b00;
L_11064afb:;
  /* 11064afb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11064afe jmp 0x11064b29 */
  goto L_11064b29;
L_11064b00:;
  /* 11064b00 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11064b04 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064b07 jne 0x11064b0b */
  if (!C.zf) goto L_11064b0b;
  /* 11064b09 jmp 0x11064b27 */
  goto L_11064b27;
L_11064b0b:;
  /* 11064b0b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11064b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064b11 jne 0x11064b15 */
  if (!C.zf) goto L_11064b15;
  /* 11064b13 jmp 0x11064b27 */
  goto L_11064b27;
L_11064b15:;
  /* 11064b15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064b18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064b1b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11064b1f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11064b22 jmp 0x11064a39 */
  goto L_11064a39;
L_11064b27:;
  /* 11064b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11064b29:;
  /* 11064b29 mov esp, ebp */
  ESP = (EBP);
  /* 11064b2b pop ebp */
  EBP = (pop32());
  /* 11064b2c ret  */
  ESPCHK(0x110649d0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11064b30 (101 bytes, 36 insns) */
void f_11064b30(void) {
  FTRACE(0x11064b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11064b31 mov ebp, esp */
  EBP = (ESP);
  /* 11064b33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064b36 push eax */
  push32((uint32_t)(EAX));
  /* 11064b37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064b3a push ecx */
  push32((uint32_t)(ECX));
  /* 11064b3b call 0x1105d5b0 */
  push32(0x11064b40u); f_1105d5b0();
  /* 11064b40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064b43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064b46 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11064b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064b4c je 0x11064b68 */
  if (C.zf) goto L_11064b68;
  /* 11064b4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064b51 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11064b55 push 0x110824a0 */
  push32((uint32_t)(0x110824a0u));
  /* 11064b5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11064b5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064b5f push edx */
  push32((uint32_t)(EDX));
  /* 11064b60 call 0x11064980 */
  push32(0x11064b65u); f_11064980();
  /* 11064b65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11064b68:;
  /* 11064b68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064b6b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11064b72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11064b74 je 0x11064b93 */
  if (C.zf) goto L_11064b93;
  /* 11064b76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11064b79 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064b7f push edx */
  push32((uint32_t)(EDX));
  /* 11064b80 push 0x1108249c */
  push32((uint32_t)(0x1108249cu));
  /* 11064b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064b87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064b8a push eax */
  push32((uint32_t)(EAX));
  /* 11064b8b call 0x11064980 */
  push32(0x11064b90u); f_11064980();
  /* 11064b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11064b93:;
  /* 11064b93 pop ebp */
  EBP = (pop32());
  /* 11064b94 ret  */
  ESPCHK(0x11064b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ba0 @ 0x11064ba0 (130 bytes, 50 insns) */
void f_11064ba0(void) {
  FTRACE(0x11064ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11064ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11064ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11064ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 11064ba5 push esi */
  push32((uint32_t)(ESI));
  /* 11064ba6 push edi */
  push32((uint32_t)(EDI));
  /* 11064ba7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11064bae:;
  /* 11064bae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064bb2 jne 0x11064bd2 */
  if (!C.zf) goto L_11064bd2;
  /* 11064bb4 push 0x110824b0 */
  push32((uint32_t)(0x110824b0u));
  /* 11064bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11064bbb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11064bbd push 0x110824a4 */
  push32((uint32_t)(0x110824a4u));
  /* 11064bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064bc4 call 0x110596c0 */
  push32(0x11064bc9u); f_110596c0();
  /* 11064bc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064bcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064bcf jne 0x11064bd2 */
  if (!C.zf) goto L_11064bd2;
  /* 11064bd1 int3  */
  x86_unimpl("int3 @ 0x11064bd1");
L_11064bd2:;
  /* 11064bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064bd6 jne 0x11064bae */
  if (!C.zf) goto L_11064bae;
  /* 11064bd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064bdb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11064bde and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11064be1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11064be3 je 0x11064bf1 */
  if (C.zf) goto L_11064bf1;
  /* 11064be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064be8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11064bef jmp 0x11064c18 */
  goto L_11064c18;
L_11064bf1:;
  /* 11064bf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11064bf5 call 0x11063410 */
  push32(0x11064bfau); f_11063410();
  /* 11064bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064bfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064c00 push edx */
  push32((uint32_t)(EDX));
  /* 11064c01 call 0x11064c30 */
  push32(0x11064c06u); f_11064c30();
  /* 11064c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11064c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064c0f push eax */
  push32((uint32_t)(EAX));
  /* 11064c10 call 0x11063480 */
  push32(0x11064c15u); f_11063480();
  /* 11064c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11064c18:;
  /* 11064c18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064c1b pop edi */
  EDI = (pop32());
  /* 11064c1c pop esi */
  ESI = (pop32());
  /* 11064c1d pop ebx */
  EBX = (pop32());
  /* 11064c1e mov esp, ebp */
  ESP = (EBP);
  /* 11064c20 pop ebp */
  EBP = (pop32());
  /* 11064c21 ret  */
  ESPCHK(0x11064ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c30 @ 0x11064c30 (190 bytes, 67 insns) */
void f_11064c30(void) {
  FTRACE(0x11064c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11064c31 mov ebp, esp */
  EBP = (ESP);
  /* 11064c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064c36 push ebx */
  push32((uint32_t)(EBX));
  /* 11064c37 push esi */
  push32((uint32_t)(ESI));
  /* 11064c38 push edi */
  push32((uint32_t)(EDI));
  /* 11064c39 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11064c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064c43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11064c46:;
  /* 11064c46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064c4a jne 0x11064c6a */
  if (!C.zf) goto L_11064c6a;
  /* 11064c4c push 0x11082354 */
  push32((uint32_t)(0x11082354u));
  /* 11064c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11064c53 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11064c55 push 0x110824a4 */
  push32((uint32_t)(0x110824a4u));
  /* 11064c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11064c5c call 0x110596c0 */
  push32(0x11064c61u); f_110596c0();
  /* 11064c61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064c64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064c67 jne 0x11064c6a */
  if (!C.zf) goto L_11064c6a;
  /* 11064c69 int3  */
  x86_unimpl("int3 @ 0x11064c69");
L_11064c6a:;
  /* 11064c6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11064c6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11064c6e jne 0x11064c46 */
  if (!C.zf) goto L_11064c46;
  /* 11064c70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064c73 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11064c76 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11064c7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064c7d je 0x11064cda */
  if (C.zf) goto L_11064cda;
  /* 11064c7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064c82 push ecx */
  push32((uint32_t)(ECX));
  /* 11064c83 call 0x11063f30 */
  push32(0x11064c88u); f_11063f30();
  /* 11064c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064c8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11064c8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064c91 push edx */
  push32((uint32_t)(EDX));
  /* 11064c92 call 0x110672b0 */
  push32(0x11064c97u); f_110672b0();
  /* 11064c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064c9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064c9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11064ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 11064ca1 call 0x11067180 */
  push32(0x11064ca6u); f_11067180();
  /* 11064ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064cab jge 0x11064cb6 */
  if ((C.sf==C.of)) goto L_11064cb6;
  /* 11064cad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11064cb4 jmp 0x11064cda */
  goto L_11064cda;
L_11064cb6:;
  /* 11064cb6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064cb9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064cbd je 0x11064cda */
  if (C.zf) goto L_11064cda;
  /* 11064cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 11064cc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064cc4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11064cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11064cc8 call 0x1105b090 */
  push32(0x11064ccdu); f_1105b090();
  /* 11064ccd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064cd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064cd3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11064cda:;
  /* 11064cda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11064cdd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11064ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064ce7 pop edi */
  EDI = (pop32());
  /* 11064ce8 pop esi */
  ESI = (pop32());
  /* 11064ce9 pop ebx */
  EBX = (pop32());
  /* 11064cea mov esp, ebp */
  ESP = (EBP);
  /* 11064cec pop ebp */
  EBP = (pop32());
  /* 11064ced ret  */
  ESPCHK(0x11064c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cf0 @ 0x11064cf0 (210 bytes, 63 insns) */
void f_11064cf0(void) {
  FTRACE(0x11064cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11064cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11064cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11064cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064cf7 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064cfd jae 0x11064d21 */
  if (!C.cf) goto L_11064d21;
  /* 11064cff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064d02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11064d05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064d08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11064d0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064d0e mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 11064d15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11064d1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11064d1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11064d1f jne 0x11064d34 */
  if (!C.zf) goto L_11064d34;
L_11064d21:;
  /* 11064d21 call 0x110624d0 */
  push32(0x11064d26u); f_110624d0();
  /* 11064d26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11064d2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11064d2f jmp 0x11064dbe */
  goto L_11064dbe;
L_11064d34:;
  /* 11064d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064d37 push edx */
  push32((uint32_t)(EDX));
  /* 11064d38 call 0x11063cf0 */
  push32(0x11064d3du); f_11063cf0();
  /* 11064d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064d43 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11064d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064d49 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11064d4c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11064d4f mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11064d56 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11064d5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11064d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064d60 je 0x11064d9d */
  if (C.zf) goto L_11064d9d;
  /* 11064d62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064d65 push ecx */
  push32((uint32_t)(ECX));
  /* 11064d66 call 0x11063b70 */
  push32(0x11064d6bu); f_11063b70();
  /* 11064d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064d6e push eax */
  push32((uint32_t)(EAX));
  /* 11064d6f call dword ptr [0x11089308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089308))), 0x11064d75u);
  /* 11064d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064d77 jne 0x11064d84 */
  if (!C.zf) goto L_11064d84;
  /* 11064d79 call dword ptr [0x110893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893dc))), 0x11064d7fu);
  /* 11064d7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11064d82 jmp 0x11064d8b */
  goto L_11064d8b;
L_11064d84:;
  /* 11064d84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11064d8b:;
  /* 11064d8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064d8f jne 0x11064d93 */
  if (!C.zf) goto L_11064d93;
  /* 11064d91 jmp 0x11064daf */
  goto L_11064daf;
L_11064d93:;
  /* 11064d93 call 0x110624e0 */
  push32(0x11064d98u); f_110624e0();
  /* 11064d98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064d9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11064d9d:;
  /* 11064d9d call 0x110624d0 */
  push32(0x11064da2u); f_110624d0();
  /* 11064da2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11064da8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11064daf:;
  /* 11064daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064db2 push eax */
  push32((uint32_t)(EAX));
  /* 11064db3 call 0x11063d80 */
  push32(0x11064db8u); f_11063d80();
  /* 11064db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11064dbe:;
  /* 11064dbe mov esp, ebp */
  ESP = (EBP);
  /* 11064dc0 pop ebp */
  EBP = (pop32());
  /* 11064dc1 ret  */
  ESPCHK(0x11064cf0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11064dd0 (219 bytes, 64 insns) */
void f_11064dd0(void) {
  FTRACE(0x11064dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11064dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11064dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11064dd4 cmp dword ptr [0x1108699c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1108699c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064ddb je 0x11064e71 */
  if (C.zf) goto L_11064e71;
  /* 11064de1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11064de3 push 0x110824c0 */
  push32((uint32_t)(0x110824c0u));
  /* 11064de8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064dea push 0xac */
  push32((uint32_t)(0xacu));
  /* 11064def push 1 */
  push32((uint32_t)(0x1u));
  /* 11064df1 call 0x1105aa10 */
  push32(0x11064df6u); f_1105aa10();
  /* 11064df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11064dfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064e00 jne 0x11064e0c */
  if (!C.zf) goto L_11064e0c;
  /* 11064e02 mov eax, 1 */
  EAX = (0x1u);
  /* 11064e07 jmp 0x11064ea7 */
  goto L_11064ea7;
L_11064e0c:;
  /* 11064e0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064e0f push eax */
  push32((uint32_t)(EAX));
  /* 11064e10 call 0x11064eb0 */
  push32(0x11064e15u); f_11064eb0();
  /* 11064e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11064e1a je 0x11064e3d */
  if (C.zf) goto L_11064e3d;
  /* 11064e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064e1f push ecx */
  push32((uint32_t)(ECX));
  /* 11064e20 call 0x11065440 */
  push32(0x11064e25u); f_11065440();
  /* 11064e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064e28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064e2d push edx */
  push32((uint32_t)(EDX));
  /* 11064e2e call 0x1105b090 */
  push32(0x11064e33u); f_1105b090();
  /* 11064e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064e36 mov eax, 1 */
  EAX = (0x1u);
  /* 11064e3b jmp 0x11064ea7 */
  goto L_11064ea7;
L_11064e3d:;
  /* 11064e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064e40 mov dword ptr [0x11085c98], eax */
  w32((uint32_t)(0x11085c98), (EAX));
  /* 11064e45 mov ecx, dword ptr [0x110869bc] */
  ECX = (r32((uint32_t)(0x110869bc)));
  /* 11064e4b push ecx */
  push32((uint32_t)(ECX));
  /* 11064e4c call 0x11065440 */
  push32(0x11064e51u); f_11065440();
  /* 11064e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064e54 push 2 */
  push32((uint32_t)(0x2u));
  /* 11064e56 mov edx, dword ptr [0x110869bc] */
  EDX = (r32((uint32_t)(0x110869bc)));
  /* 11064e5c push edx */
  push32((uint32_t)(EDX));
  /* 11064e5d call 0x1105b090 */
  push32(0x11064e62u); f_1105b090();
  /* 11064e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064e68 mov dword ptr [0x110869bc], eax */
  w32((uint32_t)(0x110869bc), (EAX));
  /* 11064e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064e6f jmp 0x11064ea7 */
  goto L_11064ea7;
L_11064e71:;
  /* 11064e71 mov dword ptr [0x11085c98], 0x11085ca0 */
  w32((uint32_t)(0x11085c98), (0x11085ca0u));
  /* 11064e7b mov ecx, dword ptr [0x110869bc] */
  ECX = (r32((uint32_t)(0x110869bc)));
  /* 11064e81 push ecx */
  push32((uint32_t)(ECX));
  /* 11064e82 call 0x11065440 */
  push32(0x11064e87u); f_11065440();
  /* 11064e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064e8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11064e8c mov edx, dword ptr [0x110869bc] */
  EDX = (r32((uint32_t)(0x110869bc)));
  /* 11064e92 push edx */
  push32((uint32_t)(EDX));
  /* 11064e93 call 0x1105b090 */
  push32(0x11064e98u); f_1105b090();
  /* 11064e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064e9b mov dword ptr [0x110869bc], 0 */
  w32((uint32_t)(0x110869bc), (0x0u));
  /* 11064ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11064ea7:;
  /* 11064ea7 mov esp, ebp */
  ESP = (EBP);
  /* 11064ea9 pop ebp */
  EBP = (pop32());
  /* 11064eaa ret  */
  ESPCHK(0x11064dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014eb0 @ 0x11064eb0 (1423 bytes, 533 insns) */
void f_11064eb0(void) {
  FTRACE(0x11064eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11064eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11064eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11064eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11064eb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11064ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11064ebf mov ax, word ptr [0x110869f6] */
  AX = (r16((uint32_t)(0x110869f6)));
  /* 11064ec5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11064ec8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11064eca mov cx, word ptr [0x110869f8] */
  CX = (r16((uint32_t)(0x110869f8)));
  /* 11064ed1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11064ed4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11064ed8 jne 0x11064ee2 */
  if (!C.zf) goto L_11064ee2;
  /* 11064eda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11064edd jmp 0x1106543b */
  goto L_1106543b;
L_11064ee2:;
  /* 11064ee2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064ee5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064ee8 push edx */
  push32((uint32_t)(EDX));
  /* 11064ee9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11064eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064eee push eax */
  push32((uint32_t)(EAX));
  /* 11064eef push 1 */
  push32((uint32_t)(0x1u));
  /* 11064ef1 call 0x110687c0 */
  push32(0x11064ef6u); f_110687c0();
  /* 11064ef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064ef9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064efc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064efe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064f04 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f07 push edx */
  push32((uint32_t)(EDX));
  /* 11064f08 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11064f0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064f0d push eax */
  push32((uint32_t)(EAX));
  /* 11064f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11064f10 call 0x110687c0 */
  push32(0x11064f15u); f_110687c0();
  /* 11064f15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064f1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064f1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064f20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064f23 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f26 push edx */
  push32((uint32_t)(EDX));
  /* 11064f27 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11064f29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064f2c push eax */
  push32((uint32_t)(EAX));
  /* 11064f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11064f2f call 0x110687c0 */
  push32(0x11064f34u); f_110687c0();
  /* 11064f34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064f3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064f3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064f42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f45 push edx */
  push32((uint32_t)(EDX));
  /* 11064f46 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11064f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064f4b push eax */
  push32((uint32_t)(EAX));
  /* 11064f4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11064f4e call 0x110687c0 */
  push32(0x11064f53u); f_110687c0();
  /* 11064f53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064f59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064f5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064f61 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f64 push edx */
  push32((uint32_t)(EDX));
  /* 11064f65 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11064f67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064f6a push eax */
  push32((uint32_t)(EAX));
  /* 11064f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11064f6d call 0x110687c0 */
  push32(0x11064f72u); f_110687c0();
  /* 11064f72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064f78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064f7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064f7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064f80 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f83 push edx */
  push32((uint32_t)(EDX));
  /* 11064f84 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11064f86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064f89 push eax */
  push32((uint32_t)(EAX));
  /* 11064f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11064f8c call 0x110687c0 */
  push32(0x11064f91u); f_110687c0();
  /* 11064f91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064f97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064f99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064f9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064f9f push edx */
  push32((uint32_t)(EDX));
  /* 11064fa0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11064fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064fa5 push eax */
  push32((uint32_t)(EAX));
  /* 11064fa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11064fa8 call 0x110687c0 */
  push32(0x11064fadu); f_110687c0();
  /* 11064fad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064fb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064fb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064fb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064fb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064fbb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064fbe push edx */
  push32((uint32_t)(EDX));
  /* 11064fbf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11064fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064fc4 push eax */
  push32((uint32_t)(EAX));
  /* 11064fc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11064fc7 call 0x110687c0 */
  push32(0x11064fccu); f_110687c0();
  /* 11064fcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064fcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064fd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064fd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064fd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064fda add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064fdd push edx */
  push32((uint32_t)(EDX));
  /* 11064fde push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11064fe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11064fe3 push eax */
  push32((uint32_t)(EAX));
  /* 11064fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11064fe6 call 0x110687c0 */
  push32(0x11064febu); f_110687c0();
  /* 11064feb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11064fee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11064ff1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11064ff3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11064ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11064ff9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11064ffc push edx */
  push32((uint32_t)(EDX));
  /* 11064ffd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11064fff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065002 push eax */
  push32((uint32_t)(EAX));
  /* 11065003 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065005 call 0x110687c0 */
  push32(0x1106500au); f_110687c0();
  /* 1106500a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106500d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065010 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065012 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065018 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106501b push edx */
  push32((uint32_t)(EDX));
  /* 1106501c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1106501e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065021 push eax */
  push32((uint32_t)(EAX));
  /* 11065022 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065024 call 0x110687c0 */
  push32(0x11065029u); f_110687c0();
  /* 11065029 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106502c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106502f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065031 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065037 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106503a push edx */
  push32((uint32_t)(EDX));
  /* 1106503b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1106503d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065040 push eax */
  push32((uint32_t)(EAX));
  /* 11065041 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065043 call 0x110687c0 */
  push32(0x11065048u); f_110687c0();
  /* 11065048 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106504b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106504e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065050 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065056 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065059 push edx */
  push32((uint32_t)(EDX));
  /* 1106505a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1106505c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106505f push eax */
  push32((uint32_t)(EAX));
  /* 11065060 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065062 call 0x110687c0 */
  push32(0x11065067u); f_110687c0();
  /* 11065067 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106506a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106506d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1106506f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065072 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065075 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065078 push edx */
  push32((uint32_t)(EDX));
  /* 11065079 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1106507b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106507e push eax */
  push32((uint32_t)(EAX));
  /* 1106507f push 1 */
  push32((uint32_t)(0x1u));
  /* 11065081 call 0x110687c0 */
  push32(0x11065086u); f_110687c0();
  /* 11065086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065089 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106508c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1106508e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065094 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065097 push edx */
  push32((uint32_t)(EDX));
  /* 11065098 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1106509a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106509d push eax */
  push32((uint32_t)(EAX));
  /* 1106509e push 1 */
  push32((uint32_t)(0x1u));
  /* 110650a0 call 0x110687c0 */
  push32(0x110650a5u); f_110687c0();
  /* 110650a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110650a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110650ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110650ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110650b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110650b3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110650b6 push edx */
  push32((uint32_t)(EDX));
  /* 110650b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 110650b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110650bc push eax */
  push32((uint32_t)(EAX));
  /* 110650bd push 1 */
  push32((uint32_t)(0x1u));
  /* 110650bf call 0x110687c0 */
  push32(0x110650c4u); f_110687c0();
  /* 110650c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110650c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110650ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110650cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110650cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110650d2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110650d5 push edx */
  push32((uint32_t)(EDX));
  /* 110650d6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 110650d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110650db push eax */
  push32((uint32_t)(EAX));
  /* 110650dc push 1 */
  push32((uint32_t)(0x1u));
  /* 110650de call 0x110687c0 */
  push32(0x110650e3u); f_110687c0();
  /* 110650e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110650e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110650e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110650eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110650ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110650f1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110650f4 push edx */
  push32((uint32_t)(EDX));
  /* 110650f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 110650f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110650fa push eax */
  push32((uint32_t)(EAX));
  /* 110650fb push 1 */
  push32((uint32_t)(0x1u));
  /* 110650fd call 0x110687c0 */
  push32(0x11065102u); f_110687c0();
  /* 11065102 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065108 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1106510a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1106510d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065110 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065113 push edx */
  push32((uint32_t)(EDX));
  /* 11065114 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11065116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065119 push eax */
  push32((uint32_t)(EAX));
  /* 1106511a push 1 */
  push32((uint32_t)(0x1u));
  /* 1106511c call 0x110687c0 */
  push32(0x11065121u); f_110687c0();
  /* 11065121 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065124 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065127 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065129 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1106512c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106512f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065132 push edx */
  push32((uint32_t)(EDX));
  /* 11065133 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11065135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065138 push eax */
  push32((uint32_t)(EAX));
  /* 11065139 push 1 */
  push32((uint32_t)(0x1u));
  /* 1106513b call 0x110687c0 */
  push32(0x11065140u); f_110687c0();
  /* 11065140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065143 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065146 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065148 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1106514b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106514e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065151 push edx */
  push32((uint32_t)(EDX));
  /* 11065152 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11065154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065157 push eax */
  push32((uint32_t)(EAX));
  /* 11065158 push 1 */
  push32((uint32_t)(0x1u));
  /* 1106515a call 0x110687c0 */
  push32(0x1106515fu); f_110687c0();
  /* 1106515f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065162 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065165 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065167 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1106516a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106516d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065170 push edx */
  push32((uint32_t)(EDX));
  /* 11065171 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11065173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065176 push eax */
  push32((uint32_t)(EAX));
  /* 11065177 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065179 call 0x110687c0 */
  push32(0x1106517eu); f_110687c0();
  /* 1106517e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065184 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065186 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106518c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106518f push edx */
  push32((uint32_t)(EDX));
  /* 11065190 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11065192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065195 push eax */
  push32((uint32_t)(EAX));
  /* 11065196 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065198 call 0x110687c0 */
  push32(0x1106519du); f_110687c0();
  /* 1106519d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110651a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110651a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110651a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110651a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110651ab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110651ae push edx */
  push32((uint32_t)(EDX));
  /* 110651af push 0x4d */
  push32((uint32_t)(0x4du));
  /* 110651b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110651b4 push eax */
  push32((uint32_t)(EAX));
  /* 110651b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110651b7 call 0x110687c0 */
  push32(0x110651bcu); f_110687c0();
  /* 110651bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110651bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110651c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110651c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110651c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110651ca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110651cd push edx */
  push32((uint32_t)(EDX));
  /* 110651ce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 110651d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110651d3 push eax */
  push32((uint32_t)(EAX));
  /* 110651d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110651d6 call 0x110687c0 */
  push32(0x110651dbu); f_110687c0();
  /* 110651db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110651de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110651e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110651e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110651e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110651e9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110651ec push edx */
  push32((uint32_t)(EDX));
  /* 110651ed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 110651ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110651f2 push eax */
  push32((uint32_t)(EAX));
  /* 110651f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110651f5 call 0x110687c0 */
  push32(0x110651fau); f_110687c0();
  /* 110651fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110651fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065200 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065202 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065208 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106520b push edx */
  push32((uint32_t)(EDX));
  /* 1106520c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1106520e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065211 push eax */
  push32((uint32_t)(EAX));
  /* 11065212 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065214 call 0x110687c0 */
  push32(0x11065219u); f_110687c0();
  /* 11065219 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106521c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106521f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065221 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065227 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106522a push edx */
  push32((uint32_t)(EDX));
  /* 1106522b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1106522d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065230 push eax */
  push32((uint32_t)(EAX));
  /* 11065231 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065233 call 0x110687c0 */
  push32(0x11065238u); f_110687c0();
  /* 11065238 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106523b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106523e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065246 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065249 push edx */
  push32((uint32_t)(EDX));
  /* 1106524a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1106524c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106524f push eax */
  push32((uint32_t)(EAX));
  /* 11065250 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065252 call 0x110687c0 */
  push32(0x11065257u); f_110687c0();
  /* 11065257 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106525a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106525d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1106525f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065265 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065268 push edx */
  push32((uint32_t)(EDX));
  /* 11065269 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1106526b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106526e push eax */
  push32((uint32_t)(EAX));
  /* 1106526f push 1 */
  push32((uint32_t)(0x1u));
  /* 11065271 call 0x110687c0 */
  push32(0x11065276u); f_110687c0();
  /* 11065276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065279 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106527c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1106527e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065284 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065287 push edx */
  push32((uint32_t)(EDX));
  /* 11065288 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1106528a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106528d push eax */
  push32((uint32_t)(EAX));
  /* 1106528e push 1 */
  push32((uint32_t)(0x1u));
  /* 11065290 call 0x110687c0 */
  push32(0x11065295u); f_110687c0();
  /* 11065295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065298 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106529b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1106529d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110652a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110652a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110652a6 push edx */
  push32((uint32_t)(EDX));
  /* 110652a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 110652a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110652ac push eax */
  push32((uint32_t)(EAX));
  /* 110652ad push 1 */
  push32((uint32_t)(0x1u));
  /* 110652af call 0x110687c0 */
  push32(0x110652b4u); f_110687c0();
  /* 110652b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110652b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110652ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110652bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110652bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110652c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110652c8 push edx */
  push32((uint32_t)(EDX));
  /* 110652c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 110652cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110652ce push eax */
  push32((uint32_t)(EAX));
  /* 110652cf push 1 */
  push32((uint32_t)(0x1u));
  /* 110652d1 call 0x110687c0 */
  push32(0x110652d6u); f_110687c0();
  /* 110652d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110652d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110652dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110652de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110652e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110652e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110652ea push edx */
  push32((uint32_t)(EDX));
  /* 110652eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110652ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110652f0 push eax */
  push32((uint32_t)(EAX));
  /* 110652f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 110652f3 call 0x110687c0 */
  push32(0x110652f8u); f_110687c0();
  /* 110652f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110652fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110652fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065300 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065306 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106530c push edx */
  push32((uint32_t)(EDX));
  /* 1106530d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1106530f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065312 push eax */
  push32((uint32_t)(EAX));
  /* 11065313 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065315 call 0x110687c0 */
  push32(0x1106531au); f_110687c0();
  /* 1106531a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106531d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065320 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065322 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065328 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106532e push edx */
  push32((uint32_t)(EDX));
  /* 1106532f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11065331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065334 push eax */
  push32((uint32_t)(EAX));
  /* 11065335 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065337 call 0x110687c0 */
  push32(0x1106533cu); f_110687c0();
  /* 1106533c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106533f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065342 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065344 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065347 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106534a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065350 push edx */
  push32((uint32_t)(EDX));
  /* 11065351 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11065353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065356 push eax */
  push32((uint32_t)(EAX));
  /* 11065357 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065359 call 0x110687c0 */
  push32(0x1106535eu); f_110687c0();
  /* 1106535e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065361 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065364 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065366 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106536c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065372 push edx */
  push32((uint32_t)(EDX));
  /* 11065373 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11065375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065378 push eax */
  push32((uint32_t)(EAX));
  /* 11065379 push 1 */
  push32((uint32_t)(0x1u));
  /* 1106537b call 0x110687c0 */
  push32(0x11065380u); f_110687c0();
  /* 11065380 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065383 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065386 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065388 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1106538b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106538e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065394 push edx */
  push32((uint32_t)(EDX));
  /* 11065395 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11065397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106539a push eax */
  push32((uint32_t)(EAX));
  /* 1106539b push 1 */
  push32((uint32_t)(0x1u));
  /* 1106539d call 0x110687c0 */
  push32(0x110653a2u); f_110687c0();
  /* 110653a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110653a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110653a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110653aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110653ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110653b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110653b6 push edx */
  push32((uint32_t)(EDX));
  /* 110653b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 110653b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110653bc push eax */
  push32((uint32_t)(EAX));
  /* 110653bd push 1 */
  push32((uint32_t)(0x1u));
  /* 110653bf call 0x110687c0 */
  push32(0x110653c4u); f_110687c0();
  /* 110653c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110653c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110653ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110653cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110653cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110653d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110653d8 push edx */
  push32((uint32_t)(EDX));
  /* 110653d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 110653db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110653de push eax */
  push32((uint32_t)(EAX));
  /* 110653df push 1 */
  push32((uint32_t)(0x1u));
  /* 110653e1 call 0x110687c0 */
  push32(0x110653e6u); f_110687c0();
  /* 110653e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110653e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110653ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110653ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110653f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110653f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110653fa push edx */
  push32((uint32_t)(EDX));
  /* 110653fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 110653fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065400 push eax */
  push32((uint32_t)(EAX));
  /* 11065401 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065403 call 0x110687c0 */
  push32(0x11065408u); f_110687c0();
  /* 11065408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106540b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106540e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065410 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065416 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106541c push edx */
  push32((uint32_t)(EDX));
  /* 1106541d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11065422 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065425 push eax */
  push32((uint32_t)(EAX));
  /* 11065426 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065428 call 0x110687c0 */
  push32(0x1106542du); f_110687c0();
  /* 1106542d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065430 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11065433 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065435 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11065438 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1106543b:;
  /* 1106543b mov esp, ebp */
  ESP = (EBP);
  /* 1106543d pop ebp */
  EBP = (pop32());
  /* 1106543e ret  */
  ESPCHK(0x11064eb0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11065440 (779 bytes, 265 insns) */
void f_11065440(void) {
  FTRACE(0x11065440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065440 push ebp */
  push32((uint32_t)(EBP));
  /* 11065441 mov ebp, esp */
  EBP = (ESP);
  /* 11065443 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065447 jne 0x1106544e */
  if (!C.zf) goto L_1106544e;
  /* 11065449 jmp 0x11065749 */
  goto L_11065749;
L_1106544e:;
  /* 1106544e push 2 */
  push32((uint32_t)(0x2u));
  /* 11065450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065453 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11065456 push ecx */
  push32((uint32_t)(ECX));
  /* 11065457 call 0x1105b090 */
  push32(0x1106545cu); f_1105b090();
  /* 1106545c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106545f push 2 */
  push32((uint32_t)(0x2u));
  /* 11065461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065464 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11065467 push eax */
  push32((uint32_t)(EAX));
  /* 11065468 call 0x1105b090 */
  push32(0x1106546du); f_1105b090();
  /* 1106546d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065470 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065475 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11065478 push edx */
  push32((uint32_t)(EDX));
  /* 11065479 call 0x1105b090 */
  push32(0x1106547eu); f_1105b090();
  /* 1106547e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065481 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065486 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11065489 push ecx */
  push32((uint32_t)(ECX));
  /* 1106548a call 0x1105b090 */
  push32(0x1106548fu); f_1105b090();
  /* 1106548f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065492 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065497 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1106549a push eax */
  push32((uint32_t)(EAX));
  /* 1106549b call 0x1105b090 */
  push32(0x110654a0u); f_1105b090();
  /* 110654a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110654a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110654a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110654a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 110654ab push edx */
  push32((uint32_t)(EDX));
  /* 110654ac call 0x1105b090 */
  push32(0x110654b1u); f_1105b090();
  /* 110654b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110654b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110654b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110654b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110654bb push ecx */
  push32((uint32_t)(ECX));
  /* 110654bc call 0x1105b090 */
  push32(0x110654c1u); f_1105b090();
  /* 110654c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110654c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110654c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110654c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 110654cc push eax */
  push32((uint32_t)(EAX));
  /* 110654cd call 0x1105b090 */
  push32(0x110654d2u); f_1105b090();
  /* 110654d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110654d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110654d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110654da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 110654dd push edx */
  push32((uint32_t)(EDX));
  /* 110654de call 0x1105b090 */
  push32(0x110654e3u); f_1105b090();
  /* 110654e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110654e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110654e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110654eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 110654ee push ecx */
  push32((uint32_t)(ECX));
  /* 110654ef call 0x1105b090 */
  push32(0x110654f4u); f_1105b090();
  /* 110654f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110654f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110654f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110654fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 110654ff push eax */
  push32((uint32_t)(EAX));
  /* 11065500 call 0x1105b090 */
  push32(0x11065505u); f_1105b090();
  /* 11065505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065508 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106550a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106550d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11065510 push edx */
  push32((uint32_t)(EDX));
  /* 11065511 call 0x1105b090 */
  push32(0x11065516u); f_1105b090();
  /* 11065516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065519 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106551b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106551e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11065521 push ecx */
  push32((uint32_t)(ECX));
  /* 11065522 call 0x1105b090 */
  push32(0x11065527u); f_1105b090();
  /* 11065527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106552a push 2 */
  push32((uint32_t)(0x2u));
  /* 1106552c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106552f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11065532 push eax */
  push32((uint32_t)(EAX));
  /* 11065533 call 0x1105b090 */
  push32(0x11065538u); f_1105b090();
  /* 11065538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106553b push 2 */
  push32((uint32_t)(0x2u));
  /* 1106553d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065540 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11065543 push edx */
  push32((uint32_t)(EDX));
  /* 11065544 call 0x1105b090 */
  push32(0x11065549u); f_1105b090();
  /* 11065549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106554c push 2 */
  push32((uint32_t)(0x2u));
  /* 1106554e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065551 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11065554 push ecx */
  push32((uint32_t)(ECX));
  /* 11065555 call 0x1105b090 */
  push32(0x1106555au); f_1105b090();
  /* 1106555a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106555d push 2 */
  push32((uint32_t)(0x2u));
  /* 1106555f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065562 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11065565 push eax */
  push32((uint32_t)(EAX));
  /* 11065566 call 0x1105b090 */
  push32(0x1106556bu); f_1105b090();
  /* 1106556b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106556e push 2 */
  push32((uint32_t)(0x2u));
  /* 11065570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065573 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11065576 push edx */
  push32((uint32_t)(EDX));
  /* 11065577 call 0x1105b090 */
  push32(0x1106557cu); f_1105b090();
  /* 1106557c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106557f push 2 */
  push32((uint32_t)(0x2u));
  /* 11065581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065584 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11065587 push ecx */
  push32((uint32_t)(ECX));
  /* 11065588 call 0x1105b090 */
  push32(0x1106558du); f_1105b090();
  /* 1106558d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065590 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065592 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065595 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11065598 push eax */
  push32((uint32_t)(EAX));
  /* 11065599 call 0x1105b090 */
  push32(0x1106559eu); f_1105b090();
  /* 1106559e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110655a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110655a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110655a6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 110655a9 push edx */
  push32((uint32_t)(EDX));
  /* 110655aa call 0x1105b090 */
  push32(0x110655afu); f_1105b090();
  /* 110655af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110655b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110655b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110655b7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 110655ba push ecx */
  push32((uint32_t)(ECX));
  /* 110655bb call 0x1105b090 */
  push32(0x110655c0u); f_1105b090();
  /* 110655c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110655c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110655c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110655c8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 110655cb push eax */
  push32((uint32_t)(EAX));
  /* 110655cc call 0x1105b090 */
  push32(0x110655d1u); f_1105b090();
  /* 110655d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110655d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110655d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110655d9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 110655dc push edx */
  push32((uint32_t)(EDX));
  /* 110655dd call 0x1105b090 */
  push32(0x110655e2u); f_1105b090();
  /* 110655e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110655e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110655e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110655ea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 110655ed push ecx */
  push32((uint32_t)(ECX));
  /* 110655ee call 0x1105b090 */
  push32(0x110655f3u); f_1105b090();
  /* 110655f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110655f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110655f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110655fb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 110655fe push eax */
  push32((uint32_t)(EAX));
  /* 110655ff call 0x1105b090 */
  push32(0x11065604u); f_1105b090();
  /* 11065604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065607 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106560c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1106560f push edx */
  push32((uint32_t)(EDX));
  /* 11065610 call 0x1105b090 */
  push32(0x11065615u); f_1105b090();
  /* 11065615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065618 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106561a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106561d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11065620 push ecx */
  push32((uint32_t)(ECX));
  /* 11065621 call 0x1105b090 */
  push32(0x11065626u); f_1105b090();
  /* 11065626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065629 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106562b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106562e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11065631 push eax */
  push32((uint32_t)(EAX));
  /* 11065632 call 0x1105b090 */
  push32(0x11065637u); f_1105b090();
  /* 11065637 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106563a push 2 */
  push32((uint32_t)(0x2u));
  /* 1106563c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106563f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11065642 push edx */
  push32((uint32_t)(EDX));
  /* 11065643 call 0x1105b090 */
  push32(0x11065648u); f_1105b090();
  /* 11065648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106564b push 2 */
  push32((uint32_t)(0x2u));
  /* 1106564d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065650 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11065653 push ecx */
  push32((uint32_t)(ECX));
  /* 11065654 call 0x1105b090 */
  push32(0x11065659u); f_1105b090();
  /* 11065659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106565c push 2 */
  push32((uint32_t)(0x2u));
  /* 1106565e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065661 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11065664 push eax */
  push32((uint32_t)(EAX));
  /* 11065665 call 0x1105b090 */
  push32(0x1106566au); f_1105b090();
  /* 1106566a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106566d push 2 */
  push32((uint32_t)(0x2u));
  /* 1106566f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065672 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11065678 push edx */
  push32((uint32_t)(EDX));
  /* 11065679 call 0x1105b090 */
  push32(0x1106567eu); f_1105b090();
  /* 1106567e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065681 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065686 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1106568c push ecx */
  push32((uint32_t)(ECX));
  /* 1106568d call 0x1105b090 */
  push32(0x11065692u); f_1105b090();
  /* 11065692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065695 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106569a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 110656a0 push eax */
  push32((uint32_t)(EAX));
  /* 110656a1 call 0x1105b090 */
  push32(0x110656a6u); f_1105b090();
  /* 110656a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110656a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 110656ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110656ae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 110656b4 push edx */
  push32((uint32_t)(EDX));
  /* 110656b5 call 0x1105b090 */
  push32(0x110656bau); f_1105b090();
  /* 110656ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110656bd push 2 */
  push32((uint32_t)(0x2u));
  /* 110656bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110656c2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 110656c8 push ecx */
  push32((uint32_t)(ECX));
  /* 110656c9 call 0x1105b090 */
  push32(0x110656ceu); f_1105b090();
  /* 110656ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110656d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110656d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110656d6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 110656dc push eax */
  push32((uint32_t)(EAX));
  /* 110656dd call 0x1105b090 */
  push32(0x110656e2u); f_1105b090();
  /* 110656e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110656e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110656e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110656ea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 110656f0 push edx */
  push32((uint32_t)(EDX));
  /* 110656f1 call 0x1105b090 */
  push32(0x110656f6u); f_1105b090();
  /* 110656f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110656f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 110656fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110656fe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11065704 push ecx */
  push32((uint32_t)(ECX));
  /* 11065705 call 0x1105b090 */
  push32(0x1106570au); f_1105b090();
  /* 1106570a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106570d push 2 */
  push32((uint32_t)(0x2u));
  /* 1106570f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065712 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11065718 push eax */
  push32((uint32_t)(EAX));
  /* 11065719 call 0x1105b090 */
  push32(0x1106571eu); f_1105b090();
  /* 1106571e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065721 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065723 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065726 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1106572c push edx */
  push32((uint32_t)(EDX));
  /* 1106572d call 0x1105b090 */
  push32(0x11065732u); f_1105b090();
  /* 11065732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065735 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106573a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11065740 push ecx */
  push32((uint32_t)(ECX));
  /* 11065741 call 0x1105b090 */
  push32(0x11065746u); f_1105b090();
  /* 11065746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11065749:;
  /* 11065749 pop ebp */
  EBP = (pop32());
  /* 1106574a ret  */
  ESPCHK(0x11065440u, _esp0);
  ESP += 4; return;
}

/* FUN_10015750 @ 0x11065750 (678 bytes, 180 insns) */
void f_11065750(void) {
  FTRACE(0x11065750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065750 push ebp */
  push32((uint32_t)(EBP));
  /* 11065751 mov ebp, esp */
  EBP = (ESP);
  /* 11065753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11065756 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1106575d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106575f mov ax, word ptr [0x110869f2] */
  AX = (r16((uint32_t)(0x110869f2)));
  /* 11065765 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11065768 cmp dword ptr [0x11086998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106576f je 0x110658ca */
  if (C.zf) goto L_110658ca;
  /* 11065775 push 0x110869c0 */
  push32((uint32_t)(0x110869c0u));
  /* 1106577a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1106577c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106577f push ecx */
  push32((uint32_t)(ECX));
  /* 11065780 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065782 call 0x110687c0 */
  push32(0x11065787u); f_110687c0();
  /* 11065787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106578a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106578d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1106578f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11065792 push 0x110869c4 */
  push32((uint32_t)(0x110869c4u));
  /* 11065797 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11065799 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106579c push eax */
  push32((uint32_t)(EAX));
  /* 1106579d push 1 */
  push32((uint32_t)(0x1u));
  /* 1106579f call 0x110687c0 */
  push32(0x110657a4u); f_110687c0();
  /* 110657a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110657a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110657aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110657ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110657af push 0x110869c8 */
  push32((uint32_t)(0x110869c8u));
  /* 110657b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110657b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110657b9 push edx */
  push32((uint32_t)(EDX));
  /* 110657ba push 1 */
  push32((uint32_t)(0x1u));
  /* 110657bc call 0x110687c0 */
  push32(0x110657c1u); f_110687c0();
  /* 110657c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110657c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110657c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110657c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110657cc mov edx, dword ptr [0x110869c8] */
  EDX = (r32((uint32_t)(0x110869c8)));
  /* 110657d2 push edx */
  push32((uint32_t)(EDX));
  /* 110657d3 call 0x11065a00 */
  push32(0x110657d8u); f_11065a00();
  /* 110657d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110657db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110657df je 0x11065839 */
  if (C.zf) goto L_11065839;
  /* 110657e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110657e3 mov eax, dword ptr [0x110869c0] */
  EAX = (r32((uint32_t)(0x110869c0)));
  /* 110657e8 push eax */
  push32((uint32_t)(EAX));
  /* 110657e9 call 0x1105b090 */
  push32(0x110657eeu); f_1105b090();
  /* 110657ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110657f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110657f3 mov ecx, dword ptr [0x110869c4] */
  ECX = (r32((uint32_t)(0x110869c4)));
  /* 110657f9 push ecx */
  push32((uint32_t)(ECX));
  /* 110657fa call 0x1105b090 */
  push32(0x110657ffu); f_1105b090();
  /* 110657ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065802 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065804 mov edx, dword ptr [0x110869c8] */
  EDX = (r32((uint32_t)(0x110869c8)));
  /* 1106580a push edx */
  push32((uint32_t)(EDX));
  /* 1106580b call 0x1105b090 */
  push32(0x11065810u); f_1105b090();
  /* 11065810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065813 mov dword ptr [0x110869c0], 0 */
  w32((uint32_t)(0x110869c0), (0x0u));
  /* 1106581d mov dword ptr [0x110869c4], 0 */
  w32((uint32_t)(0x110869c4), (0x0u));
  /* 11065827 mov dword ptr [0x110869c8], 0 */
  w32((uint32_t)(0x110869c8), (0x0u));
  /* 11065831 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11065834 jmp 0x110659f2 */
  goto L_110659f2;
L_11065839:;
  /* 11065839 mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 1106583e cmp dword ptr [eax], 0x11085d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11085d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065844 je 0x11065880 */
  if (C.zf) goto L_11065880;
  /* 11065846 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065848 mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 1106584e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11065850 push edx */
  push32((uint32_t)(EDX));
  /* 11065851 call 0x1105b090 */
  push32(0x11065856u); f_1105b090();
  /* 11065856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065859 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106585b mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 11065860 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11065863 push ecx */
  push32((uint32_t)(ECX));
  /* 11065864 call 0x1105b090 */
  push32(0x11065869u); f_1105b090();
  /* 11065869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106586c push 2 */
  push32((uint32_t)(0x2u));
  /* 1106586e mov edx, dword ptr [0x11085d88] */
  EDX = (r32((uint32_t)(0x11085d88)));
  /* 11065874 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11065877 push eax */
  push32((uint32_t)(EAX));
  /* 11065878 call 0x1105b090 */
  push32(0x1106587du); f_1105b090();
  /* 1106587d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11065880:;
  /* 11065880 mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 11065886 mov edx, dword ptr [0x110869c0] */
  EDX = (r32((uint32_t)(0x110869c0)));
  /* 1106588c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1106588e mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 11065893 mov ecx, dword ptr [0x110869c4] */
  ECX = (r32((uint32_t)(0x110869c4)));
  /* 11065899 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1106589c mov edx, dword ptr [0x11085d88] */
  EDX = (r32((uint32_t)(0x11085d88)));
  /* 110658a2 mov eax, dword ptr [0x110869c8] */
  EAX = (r32((uint32_t)(0x110869c8)));
  /* 110658a7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 110658aa mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 110658b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110658b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110658b4 mov byte ptr [0x11084ea8], al */
  w8((uint32_t)(0x11084ea8), (AL));
  /* 110658b9 mov dword ptr [0x11084eac], 1 */
  w32((uint32_t)(0x11084eac), (0x1u));
  /* 110658c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110658c5 jmp 0x110659f2 */
  goto L_110659f2;
L_110658ca:;
  /* 110658ca push 2 */
  push32((uint32_t)(0x2u));
  /* 110658cc mov ecx, dword ptr [0x110869c0] */
  ECX = (r32((uint32_t)(0x110869c0)));
  /* 110658d2 push ecx */
  push32((uint32_t)(ECX));
  /* 110658d3 call 0x1105b090 */
  push32(0x110658d8u); f_1105b090();
  /* 110658d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110658db push 2 */
  push32((uint32_t)(0x2u));
  /* 110658dd mov edx, dword ptr [0x110869c4] */
  EDX = (r32((uint32_t)(0x110869c4)));
  /* 110658e3 push edx */
  push32((uint32_t)(EDX));
  /* 110658e4 call 0x1105b090 */
  push32(0x110658e9u); f_1105b090();
  /* 110658e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110658ec push 2 */
  push32((uint32_t)(0x2u));
  /* 110658ee mov eax, dword ptr [0x110869c8] */
  EAX = (r32((uint32_t)(0x110869c8)));
  /* 110658f3 push eax */
  push32((uint32_t)(EAX));
  /* 110658f4 call 0x1105b090 */
  push32(0x110658f9u); f_1105b090();
  /* 110658f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110658fc mov dword ptr [0x110869c0], 0 */
  w32((uint32_t)(0x110869c0), (0x0u));
  /* 11065906 mov dword ptr [0x110869c4], 0 */
  w32((uint32_t)(0x110869c4), (0x0u));
  /* 11065910 mov dword ptr [0x110869c8], 0 */
  w32((uint32_t)(0x110869c8), (0x0u));
  /* 1106591a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1106591f push 0x110824cc */
  push32((uint32_t)(0x110824ccu));
  /* 11065924 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065926 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065928 call 0x1105a600 */
  push32(0x1106592du); f_1105a600();
  /* 1106592d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065930 mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 11065936 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11065938 mov edx, dword ptr [0x11085d88] */
  EDX = (r32((uint32_t)(0x11085d88)));
  /* 1106593e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065941 jne 0x1106594b */
  if (!C.zf) goto L_1106594b;
  /* 11065943 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11065946 jmp 0x110659f2 */
  goto L_110659f2;
L_1106594b:;
  /* 1106594b push 0x1108249c */
  push32((uint32_t)(0x1108249cu));
  /* 11065950 mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 11065955 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11065957 push ecx */
  push32((uint32_t)(ECX));
  /* 11065958 call 0x1105d5b0 */
  push32(0x1106595du); f_1105d5b0();
  /* 1106595d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065960 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11065965 push 0x110824cc */
  push32((uint32_t)(0x110824ccu));
  /* 1106596a push 2 */
  push32((uint32_t)(0x2u));
  /* 1106596c push 2 */
  push32((uint32_t)(0x2u));
  /* 1106596e call 0x1105a600 */
  push32(0x11065973u); f_1105a600();
  /* 11065973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065976 mov edx, dword ptr [0x11085d88] */
  EDX = (r32((uint32_t)(0x11085d88)));
  /* 1106597c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1106597f mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 11065984 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065988 jne 0x1106598f */
  if (!C.zf) goto L_1106598f;
  /* 1106598a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106598d jmp 0x110659f2 */
  goto L_110659f2;
L_1106598f:;
  /* 1106598f mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 11065995 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11065998 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1106599b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 110659a0 push 0x110824cc */
  push32((uint32_t)(0x110824ccu));
  /* 110659a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110659a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110659a9 call 0x1105a600 */
  push32(0x110659aeu); f_1105a600();
  /* 110659ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110659b1 mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 110659b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 110659ba mov edx, dword ptr [0x11085d88] */
  EDX = (r32((uint32_t)(0x11085d88)));
  /* 110659c0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110659c4 jne 0x110659cb */
  if (!C.zf) goto L_110659cb;
  /* 110659c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110659c9 jmp 0x110659f2 */
  goto L_110659f2;
L_110659cb:;
  /* 110659cb mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 110659d0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110659d3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 110659d6 mov edx, dword ptr [0x11085d88] */
  EDX = (r32((uint32_t)(0x11085d88)));
  /* 110659dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110659de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110659e0 mov byte ptr [0x11084ea8], cl */
  w8((uint32_t)(0x11084ea8), (CL));
  /* 110659e6 mov dword ptr [0x11084eac], 1 */
  w32((uint32_t)(0x11084eac), (0x1u));
  /* 110659f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110659f2:;
  /* 110659f2 mov esp, ebp */
  ESP = (EBP);
  /* 110659f4 pop ebp */
  EBP = (pop32());
  /* 110659f5 ret  */
  ESPCHK(0x11065750u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11065a00 (125 bytes, 49 insns) */
void f_11065a00(void) {
  FTRACE(0x11065a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11065a01 mov ebp, esp */
  EBP = (ESP);
  /* 11065a03 push ecx */
  push32((uint32_t)(ECX));
L_11065a04:;
  /* 11065a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11065a0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11065a0c je 0x11065a79 */
  if (C.zf) goto L_11065a79;
  /* 11065a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11065a14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065a17 jl 0x11065a3d */
  if ((C.sf!=C.of)) goto L_11065a3d;
  /* 11065a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11065a1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065a22 jg 0x11065a3d */
  if ((!C.zf&&C.sf==C.of)) goto L_11065a3d;
  /* 11065a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11065a2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11065a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11065a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065a38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11065a3b jmp 0x11065a77 */
  goto L_11065a77;
L_11065a3d:;
  /* 11065a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11065a43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065a46 jne 0x11065a6e */
  if (!C.zf) goto L_11065a6e;
  /* 11065a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11065a4e:;
  /* 11065a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065a54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11065a57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11065a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065a5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065a5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11065a62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065a65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11065a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11065a6a jne 0x11065a4e */
  if (!C.zf) goto L_11065a4e;
  /* 11065a6c jmp 0x11065a77 */
  goto L_11065a77;
L_11065a6e:;
  /* 11065a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065a71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065a74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11065a77:;
  /* 11065a77 jmp 0x11065a04 */
  goto L_11065a04;
L_11065a79:;
  /* 11065a79 mov esp, ebp */
  ESP = (EBP);
  /* 11065a7b pop ebp */
  EBP = (pop32());
  /* 11065a7c ret  */
  ESPCHK(0x11065a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a80 @ 0x11065a80 (304 bytes, 85 insns) */
void f_11065a80(void) {
  FTRACE(0x11065a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11065a81 mov ebp, esp */
  EBP = (ESP);
  /* 11065a83 push ecx */
  push32((uint32_t)(ECX));
  /* 11065a84 cmp dword ptr [0x11086994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065a8b je 0x11065b4c */
  if (C.zf) goto L_11065b4c;
  /* 11065a91 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11065a93 push 0x110824d8 */
  push32((uint32_t)(0x110824d8u));
  /* 11065a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065a9a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11065a9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11065a9e call 0x1105aa10 */
  push32(0x11065aa3u); f_1105aa10();
  /* 11065aa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065aa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11065aa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065aad jne 0x11065ab9 */
  if (!C.zf) goto L_11065ab9;
  /* 11065aaf mov eax, 1 */
  EAX = (0x1u);
  /* 11065ab4 jmp 0x11065bac */
  goto L_11065bac;
L_11065ab9:;
  /* 11065ab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065abc push eax */
  push32((uint32_t)(EAX));
  /* 11065abd call 0x11065bb0 */
  push32(0x11065ac2u); f_11065bb0();
  /* 11065ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11065ac7 je 0x11065aed */
  if (C.zf) goto L_11065aed;
  /* 11065ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065acc push ecx */
  push32((uint32_t)(ECX));
  /* 11065acd call 0x11065e40 */
  push32(0x11065ad2u); f_11065e40();
  /* 11065ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065ad7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065ada push edx */
  push32((uint32_t)(EDX));
  /* 11065adb call 0x1105b090 */
  push32(0x11065ae0u); f_1105b090();
  /* 11065ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065ae3 mov eax, 1 */
  EAX = (0x1u);
  /* 11065ae8 jmp 0x11065bac */
  goto L_11065bac;
L_11065aed:;
  /* 11065aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065af0 mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 11065af6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11065af8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11065afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065afd mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 11065b03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11065b06 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11065b09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065b0c mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 11065b12 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11065b15 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11065b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065b1b mov dword ptr [0x11085d88], eax */
  w32((uint32_t)(0x11085d88), (EAX));
  /* 11065b20 mov ecx, dword ptr [0x110869cc] */
  ECX = (r32((uint32_t)(0x110869cc)));
  /* 11065b26 push ecx */
  push32((uint32_t)(ECX));
  /* 11065b27 call 0x11065e40 */
  push32(0x11065b2cu); f_11065e40();
  /* 11065b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065b2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11065b31 mov edx, dword ptr [0x110869cc] */
  EDX = (r32((uint32_t)(0x110869cc)));
  /* 11065b37 push edx */
  push32((uint32_t)(EDX));
  /* 11065b38 call 0x1105b090 */
  push32(0x11065b3du); f_1105b090();
  /* 11065b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065b40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065b43 mov dword ptr [0x110869cc], eax */
  w32((uint32_t)(0x110869cc), (EAX));
  /* 11065b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11065b4a jmp 0x11065bac */
  goto L_11065bac;
L_11065b4c:;
  /* 11065b4c mov ecx, dword ptr [0x11085d88] */
  ECX = (r32((uint32_t)(0x11085d88)));
  /* 11065b52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11065b54 mov dword ptr [0x11085d58], edx */
  w32((uint32_t)(0x11085d58), (EDX));
  /* 11065b5a mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 11065b5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11065b62 mov dword ptr [0x11085d5c], ecx */
  w32((uint32_t)(0x11085d5c), (ECX));
  /* 11065b68 mov edx, dword ptr [0x11085d88] */
  EDX = (r32((uint32_t)(0x11085d88)));
  /* 11065b6e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11065b71 mov dword ptr [0x11085d60], eax */
  w32((uint32_t)(0x11085d60), (EAX));
  /* 11065b76 mov dword ptr [0x11085d88], 0x11085d58 */
  w32((uint32_t)(0x11085d88), (0x11085d58u));
  /* 11065b80 mov ecx, dword ptr [0x110869cc] */
  ECX = (r32((uint32_t)(0x110869cc)));
  /* 11065b86 push ecx */
  push32((uint32_t)(ECX));
  /* 11065b87 call 0x11065e40 */
  push32(0x11065b8cu); f_11065e40();
  /* 11065b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065b8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11065b91 mov edx, dword ptr [0x110869cc] */
  EDX = (r32((uint32_t)(0x110869cc)));
  /* 11065b97 push edx */
  push32((uint32_t)(EDX));
  /* 11065b98 call 0x1105b090 */
  push32(0x11065b9du); f_1105b090();
  /* 11065b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065ba0 mov dword ptr [0x110869cc], 0 */
  w32((uint32_t)(0x110869cc), (0x0u));
  /* 11065baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11065bac:;
  /* 11065bac mov esp, ebp */
  ESP = (EBP);
  /* 11065bae pop ebp */
  EBP = (pop32());
  /* 11065baf ret  */
  ESPCHK(0x11065a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bb0 @ 0x11065bb0 (525 bytes, 200 insns) */
void f_11065bb0(void) {
  FTRACE(0x11065bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11065bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11065bb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11065bb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11065bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11065bbf mov ax, word ptr [0x110869ec] */
  AX = (r16((uint32_t)(0x110869ec)));
  /* 11065bc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11065bc8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065bcc jne 0x11065bd6 */
  if (!C.zf) goto L_11065bd6;
  /* 11065bce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11065bd1 jmp 0x11065db9 */
  goto L_11065db9;
L_11065bd6:;
  /* 11065bd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065bd9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065bdc push ecx */
  push32((uint32_t)(ECX));
  /* 11065bdd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11065bdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065be2 push edx */
  push32((uint32_t)(EDX));
  /* 11065be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065be5 call 0x110687c0 */
  push32(0x11065beau); f_110687c0();
  /* 11065bea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065bed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065bf0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065bf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065bf8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065bfb push edx */
  push32((uint32_t)(EDX));
  /* 11065bfc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11065bfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065c01 push eax */
  push32((uint32_t)(EAX));
  /* 11065c02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065c04 call 0x110687c0 */
  push32(0x11065c09u); f_110687c0();
  /* 11065c09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065c0f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065c11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065c17 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c1a push edx */
  push32((uint32_t)(EDX));
  /* 11065c1b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11065c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065c20 push eax */
  push32((uint32_t)(EAX));
  /* 11065c21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065c23 call 0x110687c0 */
  push32(0x11065c28u); f_110687c0();
  /* 11065c28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065c2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065c30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065c33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065c36 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c39 push edx */
  push32((uint32_t)(EDX));
  /* 11065c3a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11065c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065c3f push eax */
  push32((uint32_t)(EAX));
  /* 11065c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11065c42 call 0x110687c0 */
  push32(0x11065c47u); f_110687c0();
  /* 11065c47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065c4d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065c4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065c55 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c58 push edx */
  push32((uint32_t)(EDX));
  /* 11065c59 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11065c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065c5e push eax */
  push32((uint32_t)(EAX));
  /* 11065c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11065c61 call 0x110687c0 */
  push32(0x11065c66u); f_110687c0();
  /* 11065c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065c6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065c6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065c71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065c74 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11065c77 push eax */
  push32((uint32_t)(EAX));
  /* 11065c78 call 0x11065dc0 */
  push32(0x11065c7du); f_11065dc0();
  /* 11065c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065c83 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c86 push ecx */
  push32((uint32_t)(ECX));
  /* 11065c87 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11065c89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065c8c push edx */
  push32((uint32_t)(EDX));
  /* 11065c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11065c8f call 0x110687c0 */
  push32(0x11065c94u); f_110687c0();
  /* 11065c94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065c97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065c9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065c9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065c9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065ca2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065ca5 push edx */
  push32((uint32_t)(EDX));
  /* 11065ca6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11065ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065cab push eax */
  push32((uint32_t)(EAX));
  /* 11065cac push 1 */
  push32((uint32_t)(0x1u));
  /* 11065cae call 0x110687c0 */
  push32(0x11065cb3u); f_110687c0();
  /* 11065cb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065cb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065cb9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065cbb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065cbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065cc1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065cc4 push edx */
  push32((uint32_t)(EDX));
  /* 11065cc5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11065cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065cca push eax */
  push32((uint32_t)(EAX));
  /* 11065ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 11065ccd call 0x110687c0 */
  push32(0x11065cd2u); f_110687c0();
  /* 11065cd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065cd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065cda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065ce0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065ce3 push edx */
  push32((uint32_t)(EDX));
  /* 11065ce4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11065ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065ce9 push eax */
  push32((uint32_t)(EAX));
  /* 11065cea push 0 */
  push32((uint32_t)(0x0u));
  /* 11065cec call 0x110687c0 */
  push32(0x11065cf1u); f_110687c0();
  /* 11065cf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065cf4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065cf7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065cf9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065cfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065cff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d02 push edx */
  push32((uint32_t)(EDX));
  /* 11065d03 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11065d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065d08 push eax */
  push32((uint32_t)(EAX));
  /* 11065d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11065d0b call 0x110687c0 */
  push32(0x11065d10u); f_110687c0();
  /* 11065d10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065d16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065d18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065d1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065d1e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d21 push edx */
  push32((uint32_t)(EDX));
  /* 11065d22 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11065d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065d27 push eax */
  push32((uint32_t)(EAX));
  /* 11065d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11065d2a call 0x110687c0 */
  push32(0x11065d2fu); f_110687c0();
  /* 11065d2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065d35 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065d37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065d3d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d40 push edx */
  push32((uint32_t)(EDX));
  /* 11065d41 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11065d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065d46 push eax */
  push32((uint32_t)(EAX));
  /* 11065d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11065d49 call 0x110687c0 */
  push32(0x11065d4eu); f_110687c0();
  /* 11065d4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065d54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065d56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065d59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065d5c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d5f push edx */
  push32((uint32_t)(EDX));
  /* 11065d60 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11065d62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065d65 push eax */
  push32((uint32_t)(EAX));
  /* 11065d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11065d68 call 0x110687c0 */
  push32(0x11065d6du); f_110687c0();
  /* 11065d6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065d73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065d75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065d7b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d7e push edx */
  push32((uint32_t)(EDX));
  /* 11065d7f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11065d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065d84 push eax */
  push32((uint32_t)(EAX));
  /* 11065d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11065d87 call 0x110687c0 */
  push32(0x11065d8cu); f_110687c0();
  /* 11065d8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065d92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065d94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065d9a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065d9d push edx */
  push32((uint32_t)(EDX));
  /* 11065d9e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11065da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065da3 push eax */
  push32((uint32_t)(EAX));
  /* 11065da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11065da6 call 0x110687c0 */
  push32(0x11065dabu); f_110687c0();
  /* 11065dab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065dae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11065db1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11065db3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11065db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11065db9:;
  /* 11065db9 mov esp, ebp */
  ESP = (EBP);
  /* 11065dbb pop ebp */
  EBP = (pop32());
  /* 11065dbc ret  */
  ESPCHK(0x11065bb0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11065dc0 (125 bytes, 49 insns) */
void f_11065dc0(void) {
  FTRACE(0x11065dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11065dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11065dc3 push ecx */
  push32((uint32_t)(ECX));
L_11065dc4:;
  /* 11065dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065dc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11065dca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11065dcc je 0x11065e39 */
  if (C.zf) goto L_11065e39;
  /* 11065dce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065dd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11065dd4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065dd7 jl 0x11065dfd */
  if ((C.sf!=C.of)) goto L_11065dfd;
  /* 11065dd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065ddc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11065ddf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065de2 jg 0x11065dfd */
  if ((!C.zf&&C.sf==C.of)) goto L_11065dfd;
  /* 11065de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11065dea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11065ded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065df0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11065df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065df5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065df8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11065dfb jmp 0x11065e37 */
  goto L_11065e37;
L_11065dfd:;
  /* 11065dfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11065e03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065e06 jne 0x11065e2e */
  if (!C.zf) goto L_11065e2e;
  /* 11065e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11065e0e:;
  /* 11065e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065e14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11065e17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11065e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065e1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11065e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11065e25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11065e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11065e2a jne 0x11065e0e */
  if (!C.zf) goto L_11065e0e;
  /* 11065e2c jmp 0x11065e37 */
  goto L_11065e37;
L_11065e2e:;
  /* 11065e2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065e34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11065e37:;
  /* 11065e37 jmp 0x11065dc4 */
  goto L_11065dc4;
L_11065e39:;
  /* 11065e39 mov esp, ebp */
  ESP = (EBP);
  /* 11065e3b pop ebp */
  EBP = (pop32());
  /* 11065e3c ret  */
  ESPCHK(0x11065dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e40 @ 0x11065e40 (147 bytes, 52 insns) */
void f_11065e40(void) {
  FTRACE(0x11065e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11065e41 mov ebp, esp */
  EBP = (ESP);
  /* 11065e43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065e47 jne 0x11065e4e */
  if (!C.zf) goto L_11065e4e;
  /* 11065e49 jmp 0x11065ed1 */
  goto L_11065ed1;
L_11065e4e:;
  /* 11065e4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e51 cmp dword ptr [eax + 0xc], 0x11086a28 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11086a28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065e58 je 0x11065ed1 */
  if (C.zf) goto L_11065ed1;
  /* 11065e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11065e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11065e62 push edx */
  push32((uint32_t)(EDX));
  /* 11065e63 call 0x1105b090 */
  push32(0x11065e68u); f_1105b090();
  /* 11065e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11065e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11065e73 push ecx */
  push32((uint32_t)(ECX));
  /* 11065e74 call 0x1105b090 */
  push32(0x11065e79u); f_1105b090();
  /* 11065e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11065e7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11065e84 push eax */
  push32((uint32_t)(EAX));
  /* 11065e85 call 0x1105b090 */
  push32(0x11065e8au); f_1105b090();
  /* 11065e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065e8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11065e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065e92 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11065e95 push edx */
  push32((uint32_t)(EDX));
  /* 11065e96 call 0x1105b090 */
  push32(0x11065e9bu); f_1105b090();
  /* 11065e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065e9e push 2 */
  push32((uint32_t)(0x2u));
  /* 11065ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065ea3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11065ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 11065ea7 call 0x1105b090 */
  push32(0x11065eacu); f_1105b090();
  /* 11065eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065eaf push 2 */
  push32((uint32_t)(0x2u));
  /* 11065eb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065eb4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11065eb7 push eax */
  push32((uint32_t)(EAX));
  /* 11065eb8 call 0x1105b090 */
  push32(0x11065ebdu); f_1105b090();
  /* 11065ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065ec0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065ec2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11065ec5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11065ec8 push edx */
  push32((uint32_t)(EDX));
  /* 11065ec9 call 0x1105b090 */
  push32(0x11065eceu); f_1105b090();
  /* 11065ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11065ed1:;
  /* 11065ed1 pop ebp */
  EBP = (pop32());
  /* 11065ed2 ret  */
  ESPCHK(0x11065e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ee0 @ 0x11065ee0 (928 bytes, 284 insns) */
void f_11065ee0(void) {
  FTRACE(0x11065ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11065ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11065ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11065ee3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11065ee6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11065eed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11065ef4 cmp dword ptr [0x11086990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065efb je 0x11066231 */
  if (C.zf) goto L_11066231;
  /* 11065f01 cmp dword ptr [0x110869a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065f08 jne 0x11065f30 */
  if (!C.zf) goto L_11065f30;
  /* 11065f0a push 0x110869a0 */
  push32((uint32_t)(0x110869a0u));
  /* 11065f0f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11065f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11065f16 mov ax, word ptr [0x110869e4] */
  AX = (r16((uint32_t)(0x110869e4)));
  /* 11065f1c push eax */
  push32((uint32_t)(EAX));
  /* 11065f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11065f1f call 0x110687c0 */
  push32(0x11065f24u); f_110687c0();
  /* 11065f24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11065f29 je 0x11065f30 */
  if (C.zf) goto L_11065f30;
  /* 11065f2b jmp 0x110661f2 */
  goto L_110661f2;
L_11065f30:;
  /* 11065f30 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11065f32 push 0x110824e4 */
  push32((uint32_t)(0x110824e4u));
  /* 11065f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065f39 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11065f3e call 0x1105a600 */
  push32(0x11065f43u); f_1105a600();
  /* 11065f43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065f46 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11065f49 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11065f4b push 0x110824e4 */
  push32((uint32_t)(0x110824e4u));
  /* 11065f50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065f52 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11065f57 call 0x1105a600 */
  push32(0x11065f5cu); f_1105a600();
  /* 11065f5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065f5f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11065f62 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11065f64 push 0x110824e4 */
  push32((uint32_t)(0x110824e4u));
  /* 11065f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065f6b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11065f70 call 0x1105a600 */
  push32(0x11065f75u); f_1105a600();
  /* 11065f75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065f78 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11065f7b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11065f7d push 0x110824e4 */
  push32((uint32_t)(0x110824e4u));
  /* 11065f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11065f84 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11065f89 call 0x1105a600 */
  push32(0x11065f8eu); f_1105a600();
  /* 11065f8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11065f91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11065f94 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065f98 je 0x11065fac */
  if (C.zf) goto L_11065fac;
  /* 11065f9a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065f9e je 0x11065fac */
  if (C.zf) goto L_11065fac;
  /* 11065fa0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065fa4 je 0x11065fac */
  if (C.zf) goto L_11065fac;
  /* 11065fa6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065faa jne 0x11065fb1 */
  if (!C.zf) goto L_11065fb1;
L_11065fac:;
  /* 11065fac jmp 0x110661f2 */
  goto L_110661f2;
L_11065fb1:;
  /* 11065fb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11065fb4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11065fb7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11065fbe jmp 0x11065fc9 */
  goto L_11065fc9;
L_11065fc0:;
  /* 11065fc0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11065fc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065fc6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11065fc9:;
  /* 11065fc9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11065fd0 jge 0x11065fe5 */
  if ((C.sf==C.of)) goto L_11065fe5;
  /* 11065fd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11065fd5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11065fd8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11065fda mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11065fdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11065fe0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11065fe3 jmp 0x11065fc0 */
  goto L_11065fc0;
L_11065fe5:;
  /* 11065fe5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11065fe8 push eax */
  push32((uint32_t)(EAX));
  /* 11065fe9 mov ecx, dword ptr [0x110869a0] */
  ECX = (r32((uint32_t)(0x110869a0)));
  /* 11065fef push ecx */
  push32((uint32_t)(ECX));
  /* 11065ff0 call dword ptr [0x11089338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089338))), 0x11065ff6u);
  /* 11065ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11065ff8 jne 0x11065fff */
  if (!C.zf) goto L_11065fff;
  /* 11065ffa jmp 0x110661f2 */
  goto L_110661f2;
L_11065fff:;
  /* 11065fff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066003 jbe 0x1106600a */
  if ((C.cf||C.zf)) goto L_1106600a;
  /* 11066005 jmp 0x110661f2 */
  goto L_110661f2;
L_1106600a:;
  /* 1106600a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106600d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11066013 mov dword ptr [0x11084ea4], edx */
  w32((uint32_t)(0x11084ea4), (EDX));
  /* 11066019 cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066020 jle 0x11066079 */
  if ((C.zf||C.sf!=C.of)) goto L_11066079;
  /* 11066022 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11066025 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11066028 jmp 0x11066033 */
  goto L_11066033;
L_1106602a:;
  /* 1106602a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106602d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066030 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11066033:;
  /* 11066033 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11066036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066038 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1106603a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106603c je 0x11066079 */
  if (C.zf) goto L_11066079;
  /* 1106603e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11066041 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11066043 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11066046 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11066048 je 0x11066079 */
  if (C.zf) goto L_11066079;
  /* 1106604a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106604d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106604f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11066051 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11066054 jmp 0x1106605f */
  goto L_1106605f;
L_11066056:;
  /* 11066056 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11066059 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106605c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1106605f:;
  /* 1106605f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11066062 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11066064 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11066067 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106606a jg 0x11066077 */
  if ((!C.zf&&C.sf==C.of)) goto L_11066077;
  /* 1106606c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1106606f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066072 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11066075 jmp 0x11066056 */
  goto L_11066056;
L_11066077:;
  /* 11066077 jmp 0x1106602a */
  goto L_1106602a;
L_11066079:;
  /* 11066079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106607b push 0 */
  push32((uint32_t)(0x0u));
  /* 1106607d push 0 */
  push32((uint32_t)(0x0u));
  /* 1106607f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11066082 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066085 push eax */
  push32((uint32_t)(EAX));
  /* 11066086 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1106608b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1106608e push ecx */
  push32((uint32_t)(ECX));
  /* 1106608f push 1 */
  push32((uint32_t)(0x1u));
  /* 11066091 call 0x11062830 */
  push32(0x11066096u); f_11062830();
  /* 11066096 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106609b jne 0x110660a2 */
  if (!C.zf) goto L_110660a2;
  /* 1106609d jmp 0x110661f2 */
  goto L_110661f2;
L_110660a2:;
  /* 110660a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 110660a5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 110660aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110660ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110660b0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 110660b7 jmp 0x110660c2 */
  goto L_110660c2;
L_110660b9:;
  /* 110660b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110660bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110660bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_110660c2:;
  /* 110660c2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110660c9 jge 0x110660e0 */
  if ((C.sf==C.of)) goto L_110660e0;
  /* 110660cb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110660ce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 110660d2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 110660d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110660d8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110660db mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 110660de jmp 0x110660b9 */
  goto L_110660b9;
L_110660e0:;
  /* 110660e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110660e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110660e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110660e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110660ea push edx */
  push32((uint32_t)(EDX));
  /* 110660eb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 110660f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110660f3 push eax */
  push32((uint32_t)(EAX));
  /* 110660f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110660f6 call 0x11068a60 */
  push32(0x110660fbu); f_11068a60();
  /* 110660fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110660fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066100 jne 0x11066107 */
  if (!C.zf) goto L_11066107;
  /* 11066102 jmp 0x110661f2 */
  goto L_110661f2;
L_11066107:;
  /* 11066107 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1106610a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1106610f cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066116 jle 0x11066173 */
  if ((C.zf||C.sf!=C.of)) goto L_11066173;
  /* 11066118 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1106611b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1106611e jmp 0x11066129 */
  goto L_11066129;
L_11066120:;
  /* 11066120 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11066123 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066126 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11066129:;
  /* 11066129 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106612c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106612e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11066130 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11066132 je 0x11066173 */
  if (C.zf) goto L_11066173;
  /* 11066134 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11066137 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11066139 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1106613c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106613e je 0x11066173 */
  if (C.zf) goto L_11066173;
  /* 11066140 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11066143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066145 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11066147 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1106614a jmp 0x11066155 */
  goto L_11066155;
L_1106614c:;
  /* 1106614c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1106614f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066152 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11066155:;
  /* 11066155 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11066158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106615a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1106615d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066160 jg 0x11066171 */
  if ((!C.zf&&C.sf==C.of)) goto L_11066171;
  /* 11066162 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11066165 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11066168 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1106616f jmp 0x1106614c */
  goto L_1106614c;
L_11066171:;
  /* 11066171 jmp 0x11066120 */
  goto L_11066120;
L_11066173:;
  /* 11066173 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11066176 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066179 mov dword ptr [0x11084c98], eax */
  w32((uint32_t)(0x11084c98), (EAX));
  /* 1106617e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11066181 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066184 mov dword ptr [0x11084c9c], ecx */
  w32((uint32_t)(0x11084c9c), (ECX));
  /* 1106618a cmp dword ptr [0x110869d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066191 je 0x110661a4 */
  if (C.zf) goto L_110661a4;
  /* 11066193 push 2 */
  push32((uint32_t)(0x2u));
  /* 11066195 mov edx, dword ptr [0x110869d0] */
  EDX = (r32((uint32_t)(0x110869d0)));
  /* 1106619b push edx */
  push32((uint32_t)(EDX));
  /* 1106619c call 0x1105b090 */
  push32(0x110661a1u); f_1105b090();
  /* 110661a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110661a4:;
  /* 110661a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 110661a7 mov dword ptr [0x110869d0], eax */
  w32((uint32_t)(0x110869d0), (EAX));
  /* 110661ac cmp dword ptr [0x110869d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110661b3 je 0x110661c6 */
  if (C.zf) goto L_110661c6;
  /* 110661b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110661b7 mov ecx, dword ptr [0x110869d4] */
  ECX = (r32((uint32_t)(0x110869d4)));
  /* 110661bd push ecx */
  push32((uint32_t)(ECX));
  /* 110661be call 0x1105b090 */
  push32(0x110661c3u); f_1105b090();
  /* 110661c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110661c6:;
  /* 110661c6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110661c9 mov dword ptr [0x110869d4], edx */
  w32((uint32_t)(0x110869d4), (EDX));
  /* 110661cf push 2 */
  push32((uint32_t)(0x2u));
  /* 110661d1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110661d4 push eax */
  push32((uint32_t)(EAX));
  /* 110661d5 call 0x1105b090 */
  push32(0x110661dau); f_1105b090();
  /* 110661da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110661dd push 2 */
  push32((uint32_t)(0x2u));
  /* 110661df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110661e2 push ecx */
  push32((uint32_t)(ECX));
  /* 110661e3 call 0x1105b090 */
  push32(0x110661e8u); f_1105b090();
  /* 110661e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110661eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110661ed jmp 0x1106627c */
  goto L_1106627c;
L_110661f2:;
  /* 110661f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110661f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 110661f7 push edx */
  push32((uint32_t)(EDX));
  /* 110661f8 call 0x1105b090 */
  push32(0x110661fdu); f_1105b090();
  /* 110661fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066200 push 2 */
  push32((uint32_t)(0x2u));
  /* 11066202 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11066205 push eax */
  push32((uint32_t)(EAX));
  /* 11066206 call 0x1105b090 */
  push32(0x1106620bu); f_1105b090();
  /* 1106620b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106620e push 2 */
  push32((uint32_t)(0x2u));
  /* 11066210 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11066213 push ecx */
  push32((uint32_t)(ECX));
  /* 11066214 call 0x1105b090 */
  push32(0x11066219u); f_1105b090();
  /* 11066219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106621c push 2 */
  push32((uint32_t)(0x2u));
  /* 1106621e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11066221 push edx */
  push32((uint32_t)(EDX));
  /* 11066222 call 0x1105b090 */
  push32(0x11066227u); f_1105b090();
  /* 11066227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106622a mov eax, 1 */
  EAX = (0x1u);
  /* 1106622f jmp 0x1106627c */
  goto L_1106627c;
L_11066231:;
  /* 11066231 mov dword ptr [0x11084c98], 0x11084ca2 */
  w32((uint32_t)(0x11084c98), (0x11084ca2u));
  /* 1106623b mov dword ptr [0x11084c9c], 0x11084ca2 */
  w32((uint32_t)(0x11084c9c), (0x11084ca2u));
  /* 11066245 push 2 */
  push32((uint32_t)(0x2u));
  /* 11066247 mov eax, dword ptr [0x110869d0] */
  EAX = (r32((uint32_t)(0x110869d0)));
  /* 1106624c push eax */
  push32((uint32_t)(EAX));
  /* 1106624d call 0x1105b090 */
  push32(0x11066252u); f_1105b090();
  /* 11066252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066255 push 2 */
  push32((uint32_t)(0x2u));
  /* 11066257 mov ecx, dword ptr [0x110869d4] */
  ECX = (r32((uint32_t)(0x110869d4)));
  /* 1106625d push ecx */
  push32((uint32_t)(ECX));
  /* 1106625e call 0x1105b090 */
  push32(0x11066263u); f_1105b090();
  /* 11066263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066266 mov dword ptr [0x110869d0], 0 */
  w32((uint32_t)(0x110869d0), (0x0u));
  /* 11066270 mov dword ptr [0x110869d4], 0 */
  w32((uint32_t)(0x110869d4), (0x0u));
  /* 1106627a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1106627c:;
  /* 1106627c mov esp, ebp */
  ESP = (EBP);
  /* 1106627e pop ebp */
  EBP = (pop32());
  /* 1106627f ret  */
  ESPCHK(0x11065ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016280 @ 0x11066280 (7 bytes, 5 insns) */
void f_11066280(void) {
  FTRACE(0x11066280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066280 push ebp */
  push32((uint32_t)(EBP));
  /* 11066281 mov ebp, esp */
  EBP = (ESP);
  /* 11066283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066285 pop ebp */
  EBP = (pop32());
  /* 11066286 ret  */
  ESPCHK(0x11066280u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11066290 (129 bytes, 56 insns) */
void f_11066290(void) {
  FTRACE(0x11066290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066290 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11066294 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11066298 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1106629e jne 0x110662dc */
  if (!C.zf) goto L_110662dc;
L_110662a0:;
  /* 110662a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110662a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110662a4 jne 0x110662d4 */
  if (!C.zf) goto L_110662d4;
  /* 110662a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110662a8 je 0x110662d0 */
  if (C.zf) goto L_110662d0;
  /* 110662aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110662ad jne 0x110662d4 */
  if (!C.zf) goto L_110662d4;
  /* 110662af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 110662b1 je 0x110662d0 */
  if (C.zf) goto L_110662d0;
  /* 110662b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 110662b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110662b9 jne 0x110662d4 */
  if (!C.zf) goto L_110662d4;
  /* 110662bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110662bd je 0x110662d0 */
  if (C.zf) goto L_110662d0;
  /* 110662bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110662c2 jne 0x110662d4 */
  if (!C.zf) goto L_110662d4;
  /* 110662c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110662c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110662ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 110662cc jne 0x110662a0 */
  if (!C.zf) goto L_110662a0;
  /* 110662ce mov edi, edi */
  EDI = (EDI);
L_110662d0:;
  /* 110662d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110662d2 ret  */
  ESPCHK(0x11066290u, _esp0);
  ESP += 4; return;
  /* 110662d3 nop  */
  /* nop */
L_110662d4:;
  /* 110662d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110662d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110662d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110662d9 ret  */
  ESPCHK(0x11066290u, _esp0);
  ESP += 4; return;
  /* 110662da mov edi, edi */
  EDI = (EDI);
L_110662dc:;
  /* 110662dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 110662e2 je 0x110662f8 */
  if (C.zf) goto L_110662f8;
  /* 110662e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110662e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110662e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110662e9 jne 0x110662d4 */
  if (!C.zf) goto L_110662d4;
  /* 110662eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110662ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110662ee je 0x110662d0 */
  if (C.zf) goto L_110662d0;
  /* 110662f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 110662f6 je 0x110662a0 */
  if (C.zf) goto L_110662a0;
L_110662f8:;
  /* 110662f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 110662fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110662fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11066300 jne 0x110662d4 */
  if (!C.zf) goto L_110662d4;
  /* 11066302 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11066304 je 0x110662d0 */
  if (C.zf) goto L_110662d0;
  /* 11066306 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11066309 jne 0x110662d4 */
  if (!C.zf) goto L_110662d4;
  /* 1106630b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1106630d je 0x110662d0 */
  if (C.zf) goto L_110662d0;
  /* 1106630f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066312 jmp 0x110662a0 */
  goto L_110662a0;
}

/* FUN_10016320 @ 0x11066320 (62 bytes, 35 insns) */
void f_11066320(void) {
  FTRACE(0x11066320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066320 push ebp */
  push32((uint32_t)(EBP));
  /* 11066321 mov ebp, esp */
  EBP = (ESP);
  /* 11066323 push esi */
  push32((uint32_t)(ESI));
  /* 11066324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066326 push eax */
  push32((uint32_t)(EAX));
  /* 11066327 push eax */
  push32((uint32_t)(EAX));
  /* 11066328 push eax */
  push32((uint32_t)(EAX));
  /* 11066329 push eax */
  push32((uint32_t)(EAX));
  /* 1106632a push eax */
  push32((uint32_t)(EAX));
  /* 1106632b push eax */
  push32((uint32_t)(EAX));
  /* 1106632c push eax */
  push32((uint32_t)(EAX));
  /* 1106632d push eax */
  push32((uint32_t)(EAX));
  /* 1106632e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11066331 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11066334:;
  /* 11066334 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11066336 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11066338 je 0x11066341 */
  if (C.zf) goto L_11066341;
  /* 1106633a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1106633b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1106633b");
  /* 1106633f jmp 0x11066334 */
  goto L_11066334;
L_11066341:;
  /* 11066341 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11066344 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11066347 nop  */
  /* nop */
L_11066348:;
  /* 11066348 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11066349 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1106634b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1106634d je 0x11066356 */
  if (C.zf) goto L_11066356;
  /* 1106634f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11066350 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11066350");
  /* 11066354 jae 0x11066348 */
  if (!C.cf) goto L_11066348;
L_11066356:;
  /* 11066356 mov eax, ecx */
  EAX = (ECX);
  /* 11066358 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106635b pop esi */
  ESI = (pop32());
  /* 1106635c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1106635d ret  */
  ESPCHK(0x11066320u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11066360 (56 bytes, 31 insns) */
void f_11066360(void) {
  FTRACE(0x11066360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066360 push ebp */
  push32((uint32_t)(EBP));
  /* 11066361 mov ebp, esp */
  EBP = (ESP);
  /* 11066363 push edi */
  push32((uint32_t)(EDI));
  /* 11066364 push esi */
  push32((uint32_t)(ESI));
  /* 11066365 push ebx */
  push32((uint32_t)(EBX));
  /* 11066366 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11066369 jecxz 0x11066391 */
  x86_unimpl("jecxz @ 0x11066369");
  /* 1106636b mov ebx, ecx */
  EBX = (ECX);
  /* 1106636d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11066370 mov esi, edi */
  ESI = (EDI);
  /* 11066372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066374 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11066376 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11066378 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106637a mov edi, esi */
  EDI = (ESI);
  /* 1106637c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1106637f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11066381 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11066384 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11066386 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11066389 ja 0x1106638f */
  if ((!C.cf&&!C.zf)) goto L_1106638f;
  /* 1106638b je 0x11066391 */
  if (C.zf) goto L_11066391;
  /* 1106638d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1106638e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1106638f:;
  /* 1106638f not ecx */
  ECX = (~(ECX));
L_11066391:;
  /* 11066391 mov eax, ecx */
  EAX = (ECX);
  /* 11066393 pop ebx */
  EBX = (pop32());
  /* 11066394 pop esi */
  ESI = (pop32());
  /* 11066395 pop edi */
  EDI = (pop32());
  /* 11066396 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11066397 ret  */
  ESPCHK(0x11066360u, _esp0);
  ESP += 4; return;
}

/* FUN_100163a0 @ 0x110663a0 (58 bytes, 32 insns) */
void f_110663a0(void) {
  FTRACE(0x110663a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110663a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110663a1 mov ebp, esp */
  EBP = (ESP);
  /* 110663a3 push esi */
  push32((uint32_t)(ESI));
  /* 110663a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110663a6 push eax */
  push32((uint32_t)(EAX));
  /* 110663a7 push eax */
  push32((uint32_t)(EAX));
  /* 110663a8 push eax */
  push32((uint32_t)(EAX));
  /* 110663a9 push eax */
  push32((uint32_t)(EAX));
  /* 110663aa push eax */
  push32((uint32_t)(EAX));
  /* 110663ab push eax */
  push32((uint32_t)(EAX));
  /* 110663ac push eax */
  push32((uint32_t)(EAX));
  /* 110663ad push eax */
  push32((uint32_t)(EAX));
  /* 110663ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110663b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110663b4:;
  /* 110663b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110663b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110663b8 je 0x110663c1 */
  if (C.zf) goto L_110663c1;
  /* 110663ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110663bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x110663bb");
  /* 110663bf jmp 0x110663b4 */
  goto L_110663b4;
L_110663c1:;
  /* 110663c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_110663c4:;
  /* 110663c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110663c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110663c8 je 0x110663d4 */
  if (C.zf) goto L_110663d4;
  /* 110663ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110663cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x110663cb");
  /* 110663cf jae 0x110663c4 */
  if (!C.cf) goto L_110663c4;
  /* 110663d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_110663d4:;
  /* 110663d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110663d7 pop esi */
  ESI = (pop32());
  /* 110663d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110663d9 ret  */
  ESPCHK(0x110663a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163e0 @ 0x110663e0 (512 bytes, 147 insns) */
void f_110663e0(void) {
  FTRACE(0x110663e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110663e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110663e1 mov ebp, esp */
  EBP = (ESP);
  /* 110663e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110663e6 cmp dword ptr [0x11086a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110663ed jne 0x11066412 */
  if (!C.zf) goto L_11066412;
  /* 110663ef call 0x11066eb0 */
  push32(0x110663f4u); f_11066eb0();
  /* 110663f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110663f6 je 0x11066402 */
  if (C.zf) goto L_11066402;
  /* 110663f8 mov eax, dword ptr [0x110892fc] */
  EAX = (r32((uint32_t)(0x110892fc)));
  /* 110663fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11066400 jmp 0x11066409 */
  goto L_11066409;
L_11066402:;
  /* 11066402 mov dword ptr [ebp - 8], 0x11066f00 */
  w32((uint32_t)(EBP + -0x8), (0x11066f00u));
L_11066409:;
  /* 11066409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106640c mov dword ptr [0x11086a1c], ecx */
  w32((uint32_t)(0x11086a1c), (ECX));
L_11066412:;
  /* 11066412 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066416 jne 0x11066422 */
  if (!C.zf) goto L_11066422;
  /* 11066418 call 0x11066d00 */
  push32(0x1106641du); f_11066d00();
  /* 1106641d jmp 0x110664ee */
  goto L_110664ee;
L_11066422:;
  /* 11066422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066425 mov dword ptr [0x11086a0c], edx */
  w32((uint32_t)(0x11086a0c), (EDX));
  /* 1106642b cmp dword ptr [0x11086a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066432 je 0x11066454 */
  if (C.zf) goto L_11066454;
  /* 11066434 mov eax, dword ptr [0x11086a0c] */
  EAX = (r32((uint32_t)(0x11086a0c)));
  /* 11066439 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1106643c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106643e je 0x11066454 */
  if (C.zf) goto L_11066454;
  /* 11066440 push 0x11086a0c */
  push32((uint32_t)(0x11086a0cu));
  /* 11066445 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11066447 push 0x11085a90 */
  push32((uint32_t)(0x11085a90u));
  /* 1106644c call 0x110665e0 */
  push32(0x11066451u); f_110665e0();
  /* 11066451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11066454:;
  /* 11066454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066457 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106645a mov dword ptr [0x11086a10], edx */
  w32((uint32_t)(0x11086a10), (EDX));
  /* 11066460 cmp dword ptr [0x11086a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066467 je 0x11066489 */
  if (C.zf) goto L_11066489;
  /* 11066469 mov eax, dword ptr [0x11086a10] */
  EAX = (r32((uint32_t)(0x11086a10)));
  /* 1106646e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11066471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11066473 je 0x11066489 */
  if (C.zf) goto L_11066489;
  /* 11066475 push 0x11086a10 */
  push32((uint32_t)(0x11086a10u));
  /* 1106647a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1106647c push 0x110859d8 */
  push32((uint32_t)(0x110859d8u));
  /* 11066481 call 0x110665e0 */
  push32(0x11066486u); f_110665e0();
  /* 11066486 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11066489:;
  /* 11066489 mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
  /* 11066493 cmp dword ptr [0x11086a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106649a je 0x110664cd */
  if (C.zf) goto L_110664cd;
  /* 1106649c mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 110664a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110664a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110664a7 je 0x110664cd */
  if (C.zf) goto L_110664cd;
  /* 110664a9 cmp dword ptr [0x11086a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110664b0 je 0x110664c6 */
  if (C.zf) goto L_110664c6;
  /* 110664b2 mov ecx, dword ptr [0x11086a10] */
  ECX = (r32((uint32_t)(0x11086a10)));
  /* 110664b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110664bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110664bd je 0x110664c6 */
  if (C.zf) goto L_110664c6;
  /* 110664bf call 0x11066670 */
  push32(0x110664c4u); f_11066670();
  /* 110664c4 jmp 0x110664cb */
  goto L_110664cb;
L_110664c6:;
  /* 110664c6 call 0x11066a60 */
  push32(0x110664cbu); f_11066a60();
L_110664cb:;
  /* 110664cb jmp 0x110664ee */
  goto L_110664ee;
L_110664cd:;
  /* 110664cd cmp dword ptr [0x11086a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110664d4 je 0x110664e9 */
  if (C.zf) goto L_110664e9;
  /* 110664d6 mov eax, dword ptr [0x11086a10] */
  EAX = (r32((uint32_t)(0x11086a10)));
  /* 110664db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110664de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110664e0 je 0x110664e9 */
  if (C.zf) goto L_110664e9;
  /* 110664e2 call 0x11066c00 */
  push32(0x110664e7u); f_11066c00();
  /* 110664e7 jmp 0x110664ee */
  goto L_110664ee;
L_110664e9:;
  /* 110664e9 call 0x11066d00 */
  push32(0x110664eeu); f_11066d00();
L_110664ee:;
  /* 110664ee cmp dword ptr [0x11086a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110664f5 jne 0x110664fe */
  if (!C.zf) goto L_110664fe;
  /* 110664f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110664f9 jmp 0x110665dc */
  goto L_110665dc;
L_110664fe:;
  /* 110664fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066501 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066507 push edx */
  push32((uint32_t)(EDX));
  /* 11066508 call 0x11066d30 */
  push32(0x1106650du); f_11066d30();
  /* 1106650d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066510 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11066513 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066517 je 0x1106652c */
  if (C.zf) goto L_1106652c;
  /* 11066519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106651c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11066521 push eax */
  push32((uint32_t)(EAX));
  /* 11066522 call dword ptr [0x11089300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089300))), 0x11066528u);
  /* 11066528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106652a jne 0x11066533 */
  if (!C.zf) goto L_11066533;
L_1106652c:;
  /* 1106652c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106652e jmp 0x110665dc */
  goto L_110665dc;
L_11066533:;
  /* 11066533 push 1 */
  push32((uint32_t)(0x1u));
  /* 11066535 mov ecx, dword ptr [0x110869fc] */
  ECX = (r32((uint32_t)(0x110869fc)));
  /* 1106653b push ecx */
  push32((uint32_t)(ECX));
  /* 1106653c call dword ptr [0x11089304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089304))), 0x11066542u);
  /* 11066542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066544 jne 0x1106654d */
  if (!C.zf) goto L_1106654d;
  /* 11066546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066548 jmp 0x110665dc */
  goto L_110665dc;
L_1106654d:;
  /* 1106654d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066551 je 0x11066578 */
  if (C.zf) goto L_11066578;
  /* 11066553 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11066556 mov ax, word ptr [0x110869fc] */
  AX = (r16((uint32_t)(0x110869fc)));
  /* 1106655c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1106655f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11066562 mov dx, word ptr [0x11086a18] */
  DX = (r16((uint32_t)(0x11086a18)));
  /* 11066569 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1106656d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11066570 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11066574 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11066578:;
  /* 11066578 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106657c je 0x110665d7 */
  if (C.zf) goto L_110665d7;
  /* 1106657e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11066580 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11066583 push edx */
  push32((uint32_t)(EDX));
  /* 11066584 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11066589 mov eax, dword ptr [0x110869fc] */
  EAX = (r32((uint32_t)(0x110869fc)));
  /* 1106658e push eax */
  push32((uint32_t)(EAX));
  /* 1106658f call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x11066595u);
  /* 11066595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066597 jne 0x1106659d */
  if (!C.zf) goto L_1106659d;
  /* 11066599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106659b jmp 0x110665dc */
  goto L_110665dc;
L_1106659d:;
  /* 1106659d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1106659f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110665a2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110665a5 push ecx */
  push32((uint32_t)(ECX));
  /* 110665a6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 110665ab mov edx, dword ptr [0x11086a18] */
  EDX = (r32((uint32_t)(0x11086a18)));
  /* 110665b1 push edx */
  push32((uint32_t)(EDX));
  /* 110665b2 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x110665b8u);
  /* 110665b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110665ba jne 0x110665c0 */
  if (!C.zf) goto L_110665c0;
  /* 110665bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110665be jmp 0x110665dc */
  goto L_110665dc;
L_110665c0:;
  /* 110665c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 110665c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110665c5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110665ca push eax */
  push32((uint32_t)(EAX));
  /* 110665cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110665ce push ecx */
  push32((uint32_t)(ECX));
  /* 110665cf call 0x1105d140 */
  push32(0x110665d4u); f_1105d140();
  /* 110665d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110665d7:;
  /* 110665d7 mov eax, 1 */
  EAX = (0x1u);
L_110665dc:;
  /* 110665dc mov esp, ebp */
  ESP = (EBP);
  /* 110665de pop ebp */
  EBP = (pop32());
  /* 110665df ret  */
  ESPCHK(0x110663e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100165e0 @ 0x110665e0 (130 bytes, 47 insns) */
void f_110665e0(void) {
  FTRACE(0x110665e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110665e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110665e1 mov ebp, esp */
  EBP = (ESP);
  /* 110665e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110665e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110665ed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_110665f4:;
  /* 110665f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110665f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110665fa jg 0x1106665e */
  if ((!C.zf&&C.sf==C.of)) goto L_1106665e;
  /* 110665fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066600 je 0x1106665e */
  if (C.zf) goto L_1106665e;
  /* 11066602 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066605 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066608 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11066609 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106660b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1106660d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11066610 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11066613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066616 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11066619 push eax */
  push32((uint32_t)(EAX));
  /* 1106661a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106661d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106661f push edx */
  push32((uint32_t)(EDX));
  /* 11066620 call 0x11068cd0 */
  push32(0x11066625u); f_11068cd0();
  /* 11066625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066628 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1106662b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106662f jne 0x11066642 */
  if (!C.zf) goto L_11066642;
  /* 11066631 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11066634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066637 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1106663b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106663e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11066640 jmp 0x1106665c */
  goto L_1106665c;
L_11066642:;
  /* 11066642 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066646 jge 0x11066653 */
  if ((C.sf==C.of)) goto L_11066653;
  /* 11066648 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106664b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106664e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11066651 jmp 0x1106665c */
  goto L_1106665c;
L_11066653:;
  /* 11066653 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11066656 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066659 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1106665c:;
  /* 1106665c jmp 0x110665f4 */
  goto L_110665f4;
L_1106665e:;
  /* 1106665e mov esp, ebp */
  ESP = (EBP);
  /* 11066660 pop ebp */
  EBP = (pop32());
  /* 11066661 ret  */
  ESPCHK(0x110665e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016670 @ 0x11066670 (186 bytes, 50 insns) */
void f_11066670(void) {
  FTRACE(0x11066670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066670 push ebp */
  push32((uint32_t)(EBP));
  /* 11066671 mov ebp, esp */
  EBP = (ESP);
  /* 11066673 push ecx */
  push32((uint32_t)(ECX));
  /* 11066674 mov eax, dword ptr [0x11086a0c] */
  EAX = (r32((uint32_t)(0x11086a0c)));
  /* 11066679 push eax */
  push32((uint32_t)(EAX));
  /* 1106667a call 0x1105d430 */
  push32(0x1106667fu); f_1105d430();
  /* 1106667f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066682 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11066684 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066687 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1106668a mov dword ptr [0x11086a08], ecx */
  w32((uint32_t)(0x11086a08), (ECX));
  /* 11066690 mov edx, dword ptr [0x11086a10] */
  EDX = (r32((uint32_t)(0x11086a10)));
  /* 11066696 push edx */
  push32((uint32_t)(EDX));
  /* 11066697 call 0x1105d430 */
  push32(0x1106669cu); f_1105d430();
  /* 1106669c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106669f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110666a1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110666a4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110666a7 mov dword ptr [0x11086a00], ecx */
  w32((uint32_t)(0x11086a00), (ECX));
  /* 110666ad mov dword ptr [0x110869fc], 0 */
  w32((uint32_t)(0x110869fc), (0x0u));
  /* 110666b7 cmp dword ptr [0x11086a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110666be je 0x110666c9 */
  if (C.zf) goto L_110666c9;
  /* 110666c0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 110666c7 jmp 0x110666db */
  goto L_110666db;
L_110666c9:;
  /* 110666c9 mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 110666cf push edx */
  push32((uint32_t)(EDX));
  /* 110666d0 call 0x11067110 */
  push32(0x110666d5u); f_11067110();
  /* 110666d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110666d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110666db:;
  /* 110666db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110666de mov dword ptr [0x11086a04], eax */
  w32((uint32_t)(0x11086a04), (EAX));
  /* 110666e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110666e5 push 0x11066730 */
  push32((uint32_t)(0x11066730u));
  /* 110666ea call dword ptr [0x110892f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892f8))), 0x110666f0u);
  /* 110666f0 mov ecx, dword ptr [0x11086a14] */
  ECX = (r32((uint32_t)(0x11086a14)));
  /* 110666f6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 110666fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110666fe je 0x1106671c */
  if (C.zf) goto L_1106671c;
  /* 11066700 mov edx, dword ptr [0x11086a14] */
  EDX = (r32((uint32_t)(0x11086a14)));
  /* 11066706 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1106670c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106670e je 0x1106671c */
  if (C.zf) goto L_1106671c;
  /* 11066710 mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066715 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11066718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106671a jne 0x11066726 */
  if (!C.zf) goto L_11066726;
L_1106671c:;
  /* 1106671c mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
L_11066726:;
  /* 11066726 mov esp, ebp */
  ESP = (EBP);
  /* 11066728 pop ebp */
  EBP = (pop32());
  /* 11066729 ret  */
  ESPCHK(0x11066670u, _esp0);
  ESP += 4; return;
}

/* FUN_10016730 @ 0x11066730 (804 bytes, 220 insns) */
void f_11066730(void) {
  FTRACE(0x11066730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066730 push ebp */
  push32((uint32_t)(EBP));
  /* 11066731 mov ebp, esp */
  EBP = (ESP);
  /* 11066733 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066739 push eax */
  push32((uint32_t)(EAX));
  /* 1106673a call 0x11067090 */
  push32(0x1106673fu); f_11067090();
  /* 1106673f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066742 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11066745 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11066747 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1106674a push ecx */
  push32((uint32_t)(ECX));
  /* 1106674b mov edx, dword ptr [0x11086a00] */
  EDX = (r32((uint32_t)(0x11086a00)));
  /* 11066751 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11066753 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066755 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1106675b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066761 push edx */
  push32((uint32_t)(EDX));
  /* 11066762 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066765 push eax */
  push32((uint32_t)(EAX));
  /* 11066766 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x1106676cu);
  /* 1106676c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106676e jne 0x11066784 */
  if (!C.zf) goto L_11066784;
  /* 11066770 mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
  /* 1106677a mov eax, 1 */
  EAX = (0x1u);
  /* 1106677f jmp 0x11066a4e */
  goto L_11066a4e;
L_11066784:;
  /* 11066784 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11066787 push ecx */
  push32((uint32_t)(ECX));
  /* 11066788 mov edx, dword ptr [0x11086a10] */
  EDX = (r32((uint32_t)(0x11086a10)));
  /* 1106678e push edx */
  push32((uint32_t)(EDX));
  /* 1106678f call 0x11068cd0 */
  push32(0x11066794u); f_11068cd0();
  /* 11066794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066799 jne 0x110668bf */
  if (!C.zf) goto L_110668bf;
  /* 1106679f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110667a1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110667a4 push eax */
  push32((uint32_t)(EAX));
  /* 110667a5 mov ecx, dword ptr [0x11086a08] */
  ECX = (r32((uint32_t)(0x11086a08)));
  /* 110667ab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110667ad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110667af and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 110667b5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110667bb push ecx */
  push32((uint32_t)(ECX));
  /* 110667bc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110667bf push edx */
  push32((uint32_t)(EDX));
  /* 110667c0 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x110667c6u);
  /* 110667c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110667c8 jne 0x110667de */
  if (!C.zf) goto L_110667de;
  /* 110667ca mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
  /* 110667d4 mov eax, 1 */
  EAX = (0x1u);
  /* 110667d9 jmp 0x11066a4e */
  goto L_11066a4e;
L_110667de:;
  /* 110667de lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110667e1 push eax */
  push32((uint32_t)(EAX));
  /* 110667e2 mov ecx, dword ptr [0x11086a0c] */
  ECX = (r32((uint32_t)(0x11086a0c)));
  /* 110667e8 push ecx */
  push32((uint32_t)(ECX));
  /* 110667e9 call 0x11068cd0 */
  push32(0x110667eeu); f_11068cd0();
  /* 110667ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110667f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110667f3 jne 0x11066820 */
  if (!C.zf) goto L_11066820;
  /* 110667f5 mov edx, dword ptr [0x11086a14] */
  EDX = (r32((uint32_t)(0x11086a14)));
  /* 110667fb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11066801 mov dword ptr [0x11086a14], edx */
  w32((uint32_t)(0x11086a14), (EDX));
  /* 11066807 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1106680a mov dword ptr [0x11086a18], eax */
  w32((uint32_t)(0x11086a18), (EAX));
  /* 1106680f mov ecx, dword ptr [0x11086a18] */
  ECX = (r32((uint32_t)(0x11086a18)));
  /* 11066815 mov dword ptr [0x110869fc], ecx */
  w32((uint32_t)(0x110869fc), (ECX));
  /* 1106681b jmp 0x110668bf */
  goto L_110668bf;
L_11066820:;
  /* 11066820 mov edx, dword ptr [0x11086a14] */
  EDX = (r32((uint32_t)(0x11086a14)));
  /* 11066826 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11066829 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106682b jne 0x110668bf */
  if (!C.zf) goto L_110668bf;
  /* 11066831 cmp dword ptr [0x11086a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066838 je 0x1106688d */
  if (C.zf) goto L_1106688d;
  /* 1106683a mov eax, dword ptr [0x11086a04] */
  EAX = (r32((uint32_t)(0x11086a04)));
  /* 1106683f push eax */
  push32((uint32_t)(EAX));
  /* 11066840 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11066843 push ecx */
  push32((uint32_t)(ECX));
  /* 11066844 mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 1106684a push edx */
  push32((uint32_t)(EDX));
  /* 1106684b call 0x11068da0 */
  push32(0x11066850u); f_11068da0();
  /* 11066850 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066853 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066855 jne 0x1106688d */
  if (!C.zf) goto L_1106688d;
  /* 11066857 mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 1106685c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1106685e mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
  /* 11066863 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066866 mov dword ptr [0x11086a18], ecx */
  w32((uint32_t)(0x11086a18), (ECX));
  /* 1106686c mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 11066872 push edx */
  push32((uint32_t)(EDX));
  /* 11066873 call 0x1105d430 */
  push32(0x11066878u); f_1105d430();
  /* 11066878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106687b cmp eax, dword ptr [0x11086a04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11086a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066881 jne 0x1106688b */
  if (!C.zf) goto L_1106688b;
  /* 11066883 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066886 mov dword ptr [0x110869fc], eax */
  w32((uint32_t)(0x110869fc), (EAX));
L_1106688b:;
  /* 1106688b jmp 0x110668bf */
  goto L_110668bf;
L_1106688d:;
  /* 1106688d mov ecx, dword ptr [0x11086a14] */
  ECX = (r32((uint32_t)(0x11086a14)));
  /* 11066893 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11066896 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11066898 jne 0x110668bf */
  if (!C.zf) goto L_110668bf;
  /* 1106689a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1106689d push edx */
  push32((uint32_t)(EDX));
  /* 1106689e call 0x11066dd0 */
  push32(0x110668a3u); f_11066dd0();
  /* 110668a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110668a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110668a8 je 0x110668bf */
  if (C.zf) goto L_110668bf;
  /* 110668aa mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 110668af or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 110668b1 mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
  /* 110668b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110668b9 mov dword ptr [0x11086a18], ecx */
  w32((uint32_t)(0x11086a18), (ECX));
L_110668bf:;
  /* 110668bf mov edx, dword ptr [0x11086a14] */
  EDX = (r32((uint32_t)(0x11086a14)));
  /* 110668c5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 110668cb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110668d1 je 0x11066a41 */
  if (C.zf) goto L_11066a41;
  /* 110668d7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110668d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110668dc push eax */
  push32((uint32_t)(EAX));
  /* 110668dd mov ecx, dword ptr [0x11086a08] */
  ECX = (r32((uint32_t)(0x11086a08)));
  /* 110668e3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110668e5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110668e7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 110668ed add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110668f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110668f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110668f7 push edx */
  push32((uint32_t)(EDX));
  /* 110668f8 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x110668feu);
  /* 110668fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066900 jne 0x11066916 */
  if (!C.zf) goto L_11066916;
  /* 11066902 mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
  /* 1106690c mov eax, 1 */
  EAX = (0x1u);
  /* 11066911 jmp 0x11066a4e */
  goto L_11066a4e;
L_11066916:;
  /* 11066916 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11066919 push eax */
  push32((uint32_t)(EAX));
  /* 1106691a mov ecx, dword ptr [0x11086a0c] */
  ECX = (r32((uint32_t)(0x11086a0c)));
  /* 11066920 push ecx */
  push32((uint32_t)(ECX));
  /* 11066921 call 0x11068cd0 */
  push32(0x11066926u); f_11068cd0();
  /* 11066926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106692b jne 0x110669e0 */
  if (!C.zf) goto L_110669e0;
  /* 11066931 mov edx, dword ptr [0x11086a14] */
  EDX = (r32((uint32_t)(0x11086a14)));
  /* 11066937 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1106693a mov dword ptr [0x11086a14], edx */
  w32((uint32_t)(0x11086a14), (EDX));
  /* 11066940 cmp dword ptr [0x11086a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066947 je 0x1106696a */
  if (C.zf) goto L_1106696a;
  /* 11066949 mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 1106694e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11066951 mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
  /* 11066956 cmp dword ptr [0x110869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106695d jne 0x11066968 */
  if (!C.zf) goto L_11066968;
  /* 1106695f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066962 mov dword ptr [0x110869fc], ecx */
  w32((uint32_t)(0x110869fc), (ECX));
L_11066968:;
  /* 11066968 jmp 0x110669de */
  goto L_110669de;
L_1106696a:;
  /* 1106696a cmp dword ptr [0x11086a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066971 je 0x110669bf */
  if (C.zf) goto L_110669bf;
  /* 11066973 mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 11066979 push edx */
  push32((uint32_t)(EDX));
  /* 1106697a call 0x1105d430 */
  push32(0x1106697fu); f_1105d430();
  /* 1106697f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066982 cmp eax, dword ptr [0x11086a04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11086a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066988 jne 0x110669bf */
  if (!C.zf) goto L_110669bf;
  /* 1106698a push 1 */
  push32((uint32_t)(0x1u));
  /* 1106698c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1106698f push eax */
  push32((uint32_t)(EAX));
  /* 11066990 call 0x11066e20 */
  push32(0x11066995u); f_11066e20();
  /* 11066995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106699a je 0x110669bd */
  if (C.zf) goto L_110669bd;
  /* 1106699c mov ecx, dword ptr [0x11086a14] */
  ECX = (r32((uint32_t)(0x11086a14)));
  /* 110669a2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 110669a5 mov dword ptr [0x11086a14], ecx */
  w32((uint32_t)(0x11086a14), (ECX));
  /* 110669ab cmp dword ptr [0x110869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110669b2 jne 0x110669bd */
  if (!C.zf) goto L_110669bd;
  /* 110669b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110669b7 mov dword ptr [0x110869fc], edx */
  w32((uint32_t)(0x110869fc), (EDX));
L_110669bd:;
  /* 110669bd jmp 0x110669de */
  goto L_110669de;
L_110669bf:;
  /* 110669bf mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 110669c4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 110669c7 mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
  /* 110669cc cmp dword ptr [0x110869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110669d3 jne 0x110669de */
  if (!C.zf) goto L_110669de;
  /* 110669d5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110669d8 mov dword ptr [0x110869fc], ecx */
  w32((uint32_t)(0x110869fc), (ECX));
L_110669de:;
  /* 110669de jmp 0x11066a41 */
  goto L_11066a41;
L_110669e0:;
  /* 110669e0 cmp dword ptr [0x11086a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110669e7 jne 0x11066a41 */
  if (!C.zf) goto L_11066a41;
  /* 110669e9 cmp dword ptr [0x11086a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110669f0 je 0x11066a41 */
  if (C.zf) goto L_11066a41;
  /* 110669f2 mov edx, dword ptr [0x11086a04] */
  EDX = (r32((uint32_t)(0x11086a04)));
  /* 110669f8 push edx */
  push32((uint32_t)(EDX));
  /* 110669f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110669fc push eax */
  push32((uint32_t)(EAX));
  /* 110669fd mov ecx, dword ptr [0x11086a0c] */
  ECX = (r32((uint32_t)(0x11086a0c)));
  /* 11066a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11066a04 call 0x11068da0 */
  push32(0x11066a09u); f_11068da0();
  /* 11066a09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066a0e jne 0x11066a41 */
  if (!C.zf) goto L_11066a41;
  /* 11066a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11066a12 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066a15 push edx */
  push32((uint32_t)(EDX));
  /* 11066a16 call 0x11066e20 */
  push32(0x11066a1bu); f_11066e20();
  /* 11066a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066a1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066a20 je 0x11066a41 */
  if (C.zf) goto L_11066a41;
  /* 11066a22 mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066a27 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11066a2a mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
  /* 11066a2f cmp dword ptr [0x110869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066a36 jne 0x11066a41 */
  if (!C.zf) goto L_11066a41;
  /* 11066a38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066a3b mov dword ptr [0x110869fc], ecx */
  w32((uint32_t)(0x110869fc), (ECX));
L_11066a41:;
  /* 11066a41 mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066a46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11066a49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11066a4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066a4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11066a4e:;
  /* 11066a4e mov esp, ebp */
  ESP = (EBP);
  /* 11066a50 pop ebp */
  EBP = (pop32());
  /* 11066a51 ret 4 */
  ESPCHK(0x11066730u, _esp0);
  ESP += 8; return;
}

/* FUN_10016a60 @ 0x11066a60 (116 bytes, 33 insns) */
void f_11066a60(void) {
  FTRACE(0x11066a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11066a61 mov ebp, esp */
  EBP = (ESP);
  /* 11066a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11066a64 mov eax, dword ptr [0x11086a0c] */
  EAX = (r32((uint32_t)(0x11086a0c)));
  /* 11066a69 push eax */
  push32((uint32_t)(EAX));
  /* 11066a6a call 0x1105d430 */
  push32(0x11066a6fu); f_1105d430();
  /* 11066a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066a72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11066a74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066a77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11066a7a mov dword ptr [0x11086a08], ecx */
  w32((uint32_t)(0x11086a08), (ECX));
  /* 11066a80 cmp dword ptr [0x11086a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066a87 je 0x11066a92 */
  if (C.zf) goto L_11066a92;
  /* 11066a89 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11066a90 jmp 0x11066aa4 */
  goto L_11066aa4;
L_11066a92:;
  /* 11066a92 mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 11066a98 push edx */
  push32((uint32_t)(EDX));
  /* 11066a99 call 0x11067110 */
  push32(0x11066a9eu); f_11067110();
  /* 11066a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066aa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11066aa4:;
  /* 11066aa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11066aa7 mov dword ptr [0x11086a04], eax */
  w32((uint32_t)(0x11086a04), (EAX));
  /* 11066aac push 1 */
  push32((uint32_t)(0x1u));
  /* 11066aae push 0x11066ae0 */
  push32((uint32_t)(0x11066ae0u));
  /* 11066ab3 call dword ptr [0x110892f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892f8))), 0x11066ab9u);
  /* 11066ab9 mov ecx, dword ptr [0x11086a14] */
  ECX = (r32((uint32_t)(0x11086a14)));
  /* 11066abf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11066ac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11066ac4 jne 0x11066ad0 */
  if (!C.zf) goto L_11066ad0;
  /* 11066ac6 mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
L_11066ad0:;
  /* 11066ad0 mov esp, ebp */
  ESP = (EBP);
  /* 11066ad2 pop ebp */
  EBP = (pop32());
  /* 11066ad3 ret  */
  ESPCHK(0x11066a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ae0 @ 0x11066ae0 (287 bytes, 86 insns) */
void f_11066ae0(void) {
  FTRACE(0x11066ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11066ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11066ae3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11066aea call 0x11067090 */
  push32(0x11066aefu); f_11067090();
  /* 11066aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066af2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11066af5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11066af7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11066afa push ecx */
  push32((uint32_t)(ECX));
  /* 11066afb mov edx, dword ptr [0x11086a08] */
  EDX = (r32((uint32_t)(0x11086a08)));
  /* 11066b01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11066b03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066b05 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11066b0b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066b11 push edx */
  push32((uint32_t)(EDX));
  /* 11066b12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066b15 push eax */
  push32((uint32_t)(EAX));
  /* 11066b16 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x11066b1cu);
  /* 11066b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066b1e jne 0x11066b34 */
  if (!C.zf) goto L_11066b34;
  /* 11066b20 mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
  /* 11066b2a mov eax, 1 */
  EAX = (0x1u);
  /* 11066b2f jmp 0x11066bf9 */
  goto L_11066bf9;
L_11066b34:;
  /* 11066b34 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11066b37 push ecx */
  push32((uint32_t)(ECX));
  /* 11066b38 mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 11066b3e push edx */
  push32((uint32_t)(EDX));
  /* 11066b3f call 0x11068cd0 */
  push32(0x11066b44u); f_11068cd0();
  /* 11066b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066b49 jne 0x11066b89 */
  if (!C.zf) goto L_11066b89;
  /* 11066b4b cmp dword ptr [0x11086a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066b52 jne 0x11066b66 */
  if (!C.zf) goto L_11066b66;
  /* 11066b54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11066b56 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066b59 push eax */
  push32((uint32_t)(EAX));
  /* 11066b5a call 0x11066e20 */
  push32(0x11066b5fu); f_11066e20();
  /* 11066b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066b64 je 0x11066b87 */
  if (C.zf) goto L_11066b87;
L_11066b66:;
  /* 11066b66 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066b69 mov dword ptr [0x11086a18], ecx */
  w32((uint32_t)(0x11086a18), (ECX));
  /* 11066b6f mov edx, dword ptr [0x11086a18] */
  EDX = (r32((uint32_t)(0x11086a18)));
  /* 11066b75 mov dword ptr [0x110869fc], edx */
  w32((uint32_t)(0x110869fc), (EDX));
  /* 11066b7b mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066b80 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11066b82 mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
L_11066b87:;
  /* 11066b87 jmp 0x11066bec */
  goto L_11066bec;
L_11066b89:;
  /* 11066b89 cmp dword ptr [0x11086a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066b90 jne 0x11066bec */
  if (!C.zf) goto L_11066bec;
  /* 11066b92 cmp dword ptr [0x11086a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066b99 je 0x11066bec */
  if (C.zf) goto L_11066bec;
  /* 11066b9b mov ecx, dword ptr [0x11086a04] */
  ECX = (r32((uint32_t)(0x11086a04)));
  /* 11066ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 11066ba2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11066ba5 push edx */
  push32((uint32_t)(EDX));
  /* 11066ba6 mov eax, dword ptr [0x11086a0c] */
  EAX = (r32((uint32_t)(0x11086a0c)));
  /* 11066bab push eax */
  push32((uint32_t)(EAX));
  /* 11066bac call 0x11068da0 */
  push32(0x11066bb1u); f_11068da0();
  /* 11066bb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066bb6 jne 0x11066bec */
  if (!C.zf) goto L_11066bec;
  /* 11066bb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11066bba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066bbd push ecx */
  push32((uint32_t)(ECX));
  /* 11066bbe call 0x11066e20 */
  push32(0x11066bc3u); f_11066e20();
  /* 11066bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066bc8 je 0x11066bec */
  if (C.zf) goto L_11066bec;
  /* 11066bca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066bcd mov dword ptr [0x11086a18], edx */
  w32((uint32_t)(0x11086a18), (EDX));
  /* 11066bd3 mov eax, dword ptr [0x11086a18] */
  EAX = (r32((uint32_t)(0x11086a18)));
  /* 11066bd8 mov dword ptr [0x110869fc], eax */
  w32((uint32_t)(0x110869fc), (EAX));
  /* 11066bdd mov ecx, dword ptr [0x11086a14] */
  ECX = (r32((uint32_t)(0x11086a14)));
  /* 11066be3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11066be6 mov dword ptr [0x11086a14], ecx */
  w32((uint32_t)(0x11086a14), (ECX));
L_11066bec:;
  /* 11066bec mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066bf1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11066bf4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11066bf6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066bf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11066bf9:;
  /* 11066bf9 mov esp, ebp */
  ESP = (EBP);
  /* 11066bfb pop ebp */
  EBP = (pop32());
  /* 11066bfc ret 4 */
  ESPCHK(0x11066ae0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016c00 @ 0x11066c00 (69 bytes, 20 insns) */
void f_11066c00(void) {
  FTRACE(0x11066c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11066c01 mov ebp, esp */
  EBP = (ESP);
  /* 11066c03 mov eax, dword ptr [0x11086a10] */
  EAX = (r32((uint32_t)(0x11086a10)));
  /* 11066c08 push eax */
  push32((uint32_t)(EAX));
  /* 11066c09 call 0x1105d430 */
  push32(0x11066c0eu); f_1105d430();
  /* 11066c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066c11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11066c13 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066c16 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11066c19 mov dword ptr [0x11086a00], ecx */
  w32((uint32_t)(0x11086a00), (ECX));
  /* 11066c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11066c21 push 0x11066c50 */
  push32((uint32_t)(0x11066c50u));
  /* 11066c26 call dword ptr [0x110892f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892f8))), 0x11066c2cu);
  /* 11066c2c mov edx, dword ptr [0x11086a14] */
  EDX = (r32((uint32_t)(0x11086a14)));
  /* 11066c32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11066c35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11066c37 jne 0x11066c43 */
  if (!C.zf) goto L_11066c43;
  /* 11066c39 mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
L_11066c43:;
  /* 11066c43 pop ebp */
  EBP = (pop32());
  /* 11066c44 ret  */
  ESPCHK(0x11066c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c50 @ 0x11066c50 (172 bytes, 54 insns) */
void f_11066c50(void) {
  FTRACE(0x11066c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11066c51 mov ebp, esp */
  EBP = (ESP);
  /* 11066c53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066c59 push eax */
  push32((uint32_t)(EAX));
  /* 11066c5a call 0x11067090 */
  push32(0x11066c5fu); f_11067090();
  /* 11066c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066c62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11066c65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11066c67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11066c6a push ecx */
  push32((uint32_t)(ECX));
  /* 11066c6b mov edx, dword ptr [0x11086a00] */
  EDX = (r32((uint32_t)(0x11086a00)));
  /* 11066c71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11066c73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066c75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11066c7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066c81 push edx */
  push32((uint32_t)(EDX));
  /* 11066c82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066c85 push eax */
  push32((uint32_t)(EAX));
  /* 11066c86 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x11066c8cu);
  /* 11066c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066c8e jne 0x11066ca1 */
  if (!C.zf) goto L_11066ca1;
  /* 11066c90 mov dword ptr [0x11086a14], 0 */
  w32((uint32_t)(0x11086a14), (0x0u));
  /* 11066c9a mov eax, 1 */
  EAX = (0x1u);
  /* 11066c9f jmp 0x11066cf6 */
  goto L_11066cf6;
L_11066ca1:;
  /* 11066ca1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11066ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 11066ca5 mov edx, dword ptr [0x11086a10] */
  EDX = (r32((uint32_t)(0x11086a10)));
  /* 11066cab push edx */
  push32((uint32_t)(EDX));
  /* 11066cac call 0x11068cd0 */
  push32(0x11066cb1u); f_11068cd0();
  /* 11066cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066cb6 jne 0x11066ce9 */
  if (!C.zf) goto L_11066ce9;
  /* 11066cb8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066cbb push eax */
  push32((uint32_t)(EAX));
  /* 11066cbc call 0x11066dd0 */
  push32(0x11066cc1u); f_11066dd0();
  /* 11066cc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066cc6 je 0x11066ce9 */
  if (C.zf) goto L_11066ce9;
  /* 11066cc8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11066ccb mov dword ptr [0x11086a18], ecx */
  w32((uint32_t)(0x11086a18), (ECX));
  /* 11066cd1 mov edx, dword ptr [0x11086a18] */
  EDX = (r32((uint32_t)(0x11086a18)));
  /* 11066cd7 mov dword ptr [0x110869fc], edx */
  w32((uint32_t)(0x110869fc), (EDX));
  /* 11066cdd mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066ce2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11066ce4 mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
L_11066ce9:;
  /* 11066ce9 mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066cee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11066cf1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11066cf3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066cf5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11066cf6:;
  /* 11066cf6 mov esp, ebp */
  ESP = (EBP);
  /* 11066cf8 pop ebp */
  EBP = (pop32());
  /* 11066cf9 ret 4 */
  ESPCHK(0x11066c50u, _esp0);
  ESP += 8; return;
}

/* FUN_10016d00 @ 0x11066d00 (43 bytes, 11 insns) */
void f_11066d00(void) {
  FTRACE(0x11066d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11066d01 mov ebp, esp */
  EBP = (ESP);
  /* 11066d03 mov eax, dword ptr [0x11086a14] */
  EAX = (r32((uint32_t)(0x11086a14)));
  /* 11066d08 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11066d0d mov dword ptr [0x11086a14], eax */
  w32((uint32_t)(0x11086a14), (EAX));
  /* 11066d12 call dword ptr [0x110892f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892f4))), 0x11066d18u);
  /* 11066d18 mov dword ptr [0x11086a18], eax */
  w32((uint32_t)(0x11086a18), (EAX));
  /* 11066d1d mov ecx, dword ptr [0x11086a18] */
  ECX = (r32((uint32_t)(0x11086a18)));
  /* 11066d23 mov dword ptr [0x110869fc], ecx */
  w32((uint32_t)(0x110869fc), (ECX));
  /* 11066d29 pop ebp */
  EBP = (pop32());
  /* 11066d2a ret  */
  ESPCHK(0x11066d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d30 @ 0x11066d30 (155 bytes, 57 insns) */
void f_11066d30(void) {
  FTRACE(0x11066d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11066d31 mov ebp, esp */
  EBP = (ESP);
  /* 11066d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066d36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066d3a je 0x11066d5b */
  if (C.zf) goto L_11066d5b;
  /* 11066d3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066d3f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11066d42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11066d44 je 0x11066d5b */
  if (C.zf) goto L_11066d5b;
  /* 11066d46 push 0x11082b74 */
  push32((uint32_t)(0x11082b74u));
  /* 11066d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066d4e push edx */
  push32((uint32_t)(EDX));
  /* 11066d4f call 0x11066290 */
  push32(0x11066d54u); f_11066290();
  /* 11066d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066d59 jne 0x11066d83 */
  if (!C.zf) goto L_11066d83;
L_11066d5b:;
  /* 11066d5b push 8 */
  push32((uint32_t)(0x8u));
  /* 11066d5d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11066d60 push eax */
  push32((uint32_t)(EAX));
  /* 11066d61 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11066d66 mov ecx, dword ptr [0x11086a18] */
  ECX = (r32((uint32_t)(0x11086a18)));
  /* 11066d6c push ecx */
  push32((uint32_t)(ECX));
  /* 11066d6d call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x11066d73u);
  /* 11066d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066d75 jne 0x11066d7b */
  if (!C.zf) goto L_11066d7b;
  /* 11066d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066d79 jmp 0x11066dc7 */
  goto L_11066dc7;
L_11066d7b:;
  /* 11066d7b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11066d7e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11066d81 jmp 0x11066dbb */
  goto L_11066dbb;
L_11066d83:;
  /* 11066d83 push 0x11082b70 */
  push32((uint32_t)(0x11082b70u));
  /* 11066d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066d8b push eax */
  push32((uint32_t)(EAX));
  /* 11066d8c call 0x11066290 */
  push32(0x11066d91u); f_11066290();
  /* 11066d91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066d96 jne 0x11066dbb */
  if (!C.zf) goto L_11066dbb;
  /* 11066d98 push 8 */
  push32((uint32_t)(0x8u));
  /* 11066d9a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11066d9d push ecx */
  push32((uint32_t)(ECX));
  /* 11066d9e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11066da0 mov edx, dword ptr [0x11086a18] */
  EDX = (r32((uint32_t)(0x11086a18)));
  /* 11066da6 push edx */
  push32((uint32_t)(EDX));
  /* 11066da7 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x11066dadu);
  /* 11066dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066daf jne 0x11066db5 */
  if (!C.zf) goto L_11066db5;
  /* 11066db1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066db3 jmp 0x11066dc7 */
  goto L_11066dc7;
L_11066db5:;
  /* 11066db5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11066db8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11066dbb:;
  /* 11066dbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066dbe push ecx */
  push32((uint32_t)(ECX));
  /* 11066dbf call 0x11068eb0 */
  push32(0x11066dc4u); f_11068eb0();
  /* 11066dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11066dc7:;
  /* 11066dc7 mov esp, ebp */
  ESP = (EBP);
  /* 11066dc9 pop ebp */
  EBP = (pop32());
  /* 11066dca ret  */
  ESPCHK(0x11066d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016dd0 @ 0x11066dd0 (79 bytes, 26 insns) */
void f_11066dd0(void) {
  FTRACE(0x11066dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11066dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11066dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066dd6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11066dda mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11066dde mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11066de5 jmp 0x11066df0 */
  goto L_11066df0;
L_11066de7:;
  /* 11066de7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11066dea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066ded mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11066df0:;
  /* 11066df0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066df4 jae 0x11066e16 */
  if (!C.cf) goto L_11066e16;
  /* 11066df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11066df9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11066dff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11066e02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11066e04 mov cx, word ptr [eax*2 + 0x110859c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x110859c4)));
  /* 11066e0c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066e0e jne 0x11066e14 */
  if (!C.zf) goto L_11066e14;
  /* 11066e10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066e12 jmp 0x11066e1b */
  goto L_11066e1b;
L_11066e14:;
  /* 11066e14 jmp 0x11066de7 */
  goto L_11066de7;
L_11066e16:;
  /* 11066e16 mov eax, 1 */
  EAX = (0x1u);
L_11066e1b:;
  /* 11066e1b mov esp, ebp */
  ESP = (EBP);
  /* 11066e1d pop ebp */
  EBP = (pop32());
  /* 11066e1e ret  */
  ESPCHK(0x11066dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e20 @ 0x11066e20 (135 bytes, 48 insns) */
void f_11066e20(void) {
  FTRACE(0x11066e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11066e21 mov ebp, esp */
  EBP = (ESP);
  /* 11066e23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066e26 push esi */
  push32((uint32_t)(ESI));
  /* 11066e27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066e2a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11066e2f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11066e34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11066e39 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11066e3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11066e41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11066e44 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11066e46 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11066e49 push ecx */
  push32((uint32_t)(ECX));
  /* 11066e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11066e4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11066e4f push edx */
  push32((uint32_t)(EDX));
  /* 11066e50 call dword ptr [0x11086a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11086a1c))), 0x11066e56u);
  /* 11066e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066e58 jne 0x11066e5e */
  if (!C.zf) goto L_11066e5e;
  /* 11066e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066e5c jmp 0x11066ea2 */
  goto L_11066ea2;
L_11066e5e:;
  /* 11066e5e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11066e61 push eax */
  push32((uint32_t)(EAX));
  /* 11066e62 call 0x11067090 */
  push32(0x11066e67u); f_11067090();
  /* 11066e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066e6a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066e6d je 0x11066e9d */
  if (C.zf) goto L_11066e9d;
  /* 11066e6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066e73 je 0x11066e9d */
  if (C.zf) goto L_11066e9d;
  /* 11066e75 mov ecx, dword ptr [0x11086a0c] */
  ECX = (r32((uint32_t)(0x11086a0c)));
  /* 11066e7b push ecx */
  push32((uint32_t)(ECX));
  /* 11066e7c call 0x11067110 */
  push32(0x11066e81u); f_11067110();
  /* 11066e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066e84 mov esi, eax */
  ESI = (EAX);
  /* 11066e86 mov edx, dword ptr [0x11086a0c] */
  EDX = (r32((uint32_t)(0x11086a0c)));
  /* 11066e8c push edx */
  push32((uint32_t)(EDX));
  /* 11066e8d call 0x1105d430 */
  push32(0x11066e92u); f_1105d430();
  /* 11066e92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11066e95 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066e97 jne 0x11066e9d */
  if (!C.zf) goto L_11066e9d;
  /* 11066e99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11066e9b jmp 0x11066ea2 */
  goto L_11066ea2;
L_11066e9d:;
  /* 11066e9d mov eax, 1 */
  EAX = (0x1u);
L_11066ea2:;
  /* 11066ea2 pop esi */
  ESI = (pop32());
  /* 11066ea3 mov esp, ebp */
  ESP = (EBP);
  /* 11066ea5 pop ebp */
  EBP = (pop32());
  /* 11066ea6 ret  */
  ESPCHK(0x11066e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016eb0 @ 0x11066eb0 (77 bytes, 18 insns) */
void f_11066eb0(void) {
  FTRACE(0x11066eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11066eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11066eb3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066eb9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11066ec3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11066ec9 push eax */
  push32((uint32_t)(EAX));
  /* 11066eca call dword ptr [0x110892f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892f0))), 0x11066ed0u);
  /* 11066ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11066ed2 je 0x11066ee9 */
  if (C.zf) goto L_11066ee9;
  /* 11066ed4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066edb jne 0x11066ee9 */
  if (!C.zf) goto L_11066ee9;
  /* 11066edd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11066ee7 jmp 0x11066ef3 */
  goto L_11066ef3;
L_11066ee9:;
  /* 11066ee9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11066ef3:;
  /* 11066ef3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11066ef9 mov esp, ebp */
  ESP = (EBP);
  /* 11066efb pop ebp */
  EBP = (pop32());
  /* 11066efc ret  */
  ESPCHK(0x11066eb0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11066f00 (388 bytes, 118 insns) */
void f_11066f00(void) {
  FTRACE(0x11066f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11066f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11066f01 mov ebp, esp */
  EBP = (ESP);
  /* 11066f03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066f06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11066f0d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11066f14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11066f1b:;
  /* 11066f1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11066f1e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f21 jg 0x11067068 */
  if ((!C.zf&&C.sf==C.of)) goto L_11067068;
  /* 11066f27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11066f2a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066f2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11066f2e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11066f30 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11066f32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11066f35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066f38 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11066f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11066f3e cmp edx, dword ptr [ecx + 0x11085520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11085520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f44 jne 0x1106703e */
  if (!C.zf) goto L_1106703e;
  /* 11066f4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11066f4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11066f50 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f54 ja 0x11066f77 */
  if ((!C.cf&&!C.zf)) goto L_11066f77;
  /* 11066f56 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f5a je 0x11066fe9 */
  if (C.zf) goto L_11066fe9;
  /* 11066f60 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f64 je 0x11066f94 */
  if (C.zf) goto L_11066f94;
  /* 11066f66 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f6a je 0x11066fb6 */
  if (C.zf) goto L_11066fb6;
  /* 11066f6c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f70 je 0x11066fd8 */
  if (C.zf) goto L_11066fd8;
  /* 11066f72 jmp 0x11067008 */
  goto L_11067008;
L_11066f77:;
  /* 11066f77 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f7e je 0x11066fa5 */
  if (C.zf) goto L_11066fa5;
  /* 11066f80 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f87 je 0x11066fc7 */
  if (C.zf) goto L_11066fc7;
  /* 11066f89 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11066f90 je 0x11066ffa */
  if (C.zf) goto L_11066ffa;
  /* 11066f92 jmp 0x11067008 */
  goto L_11067008;
L_11066f94:;
  /* 11066f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066f97 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11066f9a add ecx, 0x11085524 */
  { uint32_t _a=(ECX),_b=(0x11085524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066fa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11066fa3 jmp 0x11067008 */
  goto L_11067008;
L_11066fa5:;
  /* 11066fa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066fa8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11066fab mov eax, dword ptr [edx + 0x1108552c] */
  EAX = (r32((uint32_t)(EDX + 0x1108552c)));
  /* 11066fb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11066fb4 jmp 0x11067008 */
  goto L_11067008;
L_11066fb6:;
  /* 11066fb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066fb9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11066fbc add ecx, 0x11085530 */
  { uint32_t _a=(ECX),_b=(0x11085530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066fc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11066fc5 jmp 0x11067008 */
  goto L_11067008;
L_11066fc7:;
  /* 11066fc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066fca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11066fcd mov eax, dword ptr [edx + 0x11085534] */
  EAX = (r32((uint32_t)(EDX + 0x11085534)));
  /* 11066fd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11066fd6 jmp 0x11067008 */
  goto L_11067008;
L_11066fd8:;
  /* 11066fd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066fdb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11066fde add ecx, 0x11085538 */
  { uint32_t _a=(ECX),_b=(0x11085538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066fe4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11066fe7 jmp 0x11067008 */
  goto L_11067008;
L_11066fe9:;
  /* 11066fe9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066fec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11066fef add edx, 0x1108553c */
  { uint32_t _a=(EDX),_b=(0x1108553cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11066ff5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11066ff8 jmp 0x11067008 */
  goto L_11067008;
L_11066ffa:;
  /* 11066ffa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11066ffd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11067000 add eax, 0x11085544 */
  { uint32_t _a=(EAX),_b=(0x11085544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067005 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11067008:;
  /* 11067008 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106700c je 0x11067014 */
  if (C.zf) goto L_11067014;
  /* 1106700e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067012 jge 0x11067016 */
  if ((C.sf==C.of)) goto L_11067016;
L_11067014:;
  /* 11067014 jmp 0x11067068 */
  goto L_11067068;
L_11067016:;
  /* 11067016 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106701c push ecx */
  push32((uint32_t)(ECX));
  /* 1106701d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11067020 push edx */
  push32((uint32_t)(EDX));
  /* 11067021 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067024 push eax */
  push32((uint32_t)(EAX));
  /* 11067025 call 0x1105de20 */
  push32(0x1106702au); f_1105de20();
  /* 1106702a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106702d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067030 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067033 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11067037 mov eax, 1 */
  EAX = (0x1u);
  /* 1106703c jmp 0x1106707e */
  goto L_1106707e;
L_1106703e:;
  /* 1106703e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067041 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11067044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067047 cmp eax, dword ptr [edx + 0x11085520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11085520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106704d jae 0x1106705a */
  if (!C.cf) goto L_1106705a;
  /* 1106704f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067052 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067055 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11067058 jmp 0x11067063 */
  goto L_11067063;
L_1106705a:;
  /* 1106705a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106705d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067060 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11067063:;
  /* 11067063 jmp 0x11066f1b */
  goto L_11066f1b;
L_11067068:;
  /* 11067068 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106706b push eax */
  push32((uint32_t)(EAX));
  /* 1106706c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106706f push ecx */
  push32((uint32_t)(ECX));
  /* 11067070 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067073 push edx */
  push32((uint32_t)(EDX));
  /* 11067074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067077 push eax */
  push32((uint32_t)(EAX));
  /* 11067078 call dword ptr [0x110892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892fc))), 0x1106707eu);
L_1106707e:;
  /* 1106707e mov esp, ebp */
  ESP = (EBP);
  /* 11067080 pop ebp */
  EBP = (pop32());
  /* 11067081 ret 0x10 */
  ESPCHK(0x11066f00u, _esp0);
  ESP += 20; return;
}

/* FUN_10017090 @ 0x11067090 (118 bytes, 42 insns) */
void f_11067090(void) {
  FTRACE(0x11067090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067090 push ebp */
  push32((uint32_t)(EBP));
  /* 11067091 mov ebp, esp */
  EBP = (ESP);
  /* 11067093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067096 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1106709d:;
  /* 1106709d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110670a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110670a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 110670a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110670a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110670ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110670af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110670b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110670b4 je 0x110670ff */
  if (C.zf) goto L_110670ff;
  /* 110670b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110670ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110670bd jl 0x110670d2 */
  if ((C.sf!=C.of)) goto L_110670d2;
  /* 110670bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110670c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110670c6 jg 0x110670d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_110670d2;
  /* 110670c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 110670cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110670cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 110670d0 jmp 0x110670ec */
  goto L_110670ec;
L_110670d2:;
  /* 110670d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110670d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110670d9 jl 0x110670ec */
  if ((C.sf!=C.of)) goto L_110670ec;
  /* 110670db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110670df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110670e2 jg 0x110670ec */
  if ((!C.zf&&C.sf==C.of)) goto L_110670ec;
  /* 110670e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 110670e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110670e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_110670ec:;
  /* 110670ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110670ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 110670f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110670f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 110670fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110670fd jmp 0x1106709d */
  goto L_1106709d;
L_110670ff:;
  /* 110670ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067102 mov esp, ebp */
  ESP = (EBP);
  /* 11067104 pop ebp */
  EBP = (pop32());
  /* 11067105 ret  */
  ESPCHK(0x11067090u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11067110 (101 bytes, 36 insns) */
void f_11067110(void) {
  FTRACE(0x11067110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067110 push ebp */
  push32((uint32_t)(EBP));
  /* 11067111 mov ebp, esp */
  EBP = (ESP);
  /* 11067113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067116 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1106711d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067120 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11067122 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11067125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067128 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106712b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1106712e:;
  /* 1106712e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11067132 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067135 jl 0x11067140 */
  if ((C.sf!=C.of)) goto L_11067140;
  /* 11067137 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1106713b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106713e jle 0x11067152 */
  if ((C.zf||C.sf!=C.of)) goto L_11067152;
L_11067140:;
  /* 11067140 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11067144 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067147 jl 0x1106716e */
  if ((C.sf!=C.of)) goto L_1106716e;
  /* 11067149 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1106714d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067150 jg 0x1106716e */
  if ((!C.zf&&C.sf==C.of)) goto L_1106716e;
L_11067152:;
  /* 11067152 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11067155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067158 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1106715b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106715e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11067160 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11067163 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067166 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067169 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1106716c jmp 0x1106712e */
  goto L_1106712e;
L_1106716e:;
  /* 1106716e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11067171 mov esp, ebp */
  ESP = (EBP);
  /* 11067173 pop ebp */
  EBP = (pop32());
  /* 11067174 ret  */
  ESPCHK(0x11067110u, _esp0);
  ESP += 4; return;
}

/* FUN_10017180 @ 0x11067180 (122 bytes, 39 insns) */
void f_11067180(void) {
  FTRACE(0x11067180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067180 push ebp */
  push32((uint32_t)(EBP));
  /* 11067181 mov ebp, esp */
  EBP = (ESP);
  /* 11067183 push ecx */
  push32((uint32_t)(ECX));
  /* 11067184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067187 cmp eax, dword ptr [0x1108829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1108829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106718d jae 0x110671b1 */
  if (!C.cf) goto L_110671b1;
  /* 1106718f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067192 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11067195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067198 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1106719b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106719e mov eax, dword ptr [ecx*4 + 0x11088160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11088160)));
  /* 110671a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 110671aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110671ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110671af jne 0x110671cc */
  if (!C.zf) goto L_110671cc;
L_110671b1:;
  /* 110671b1 call 0x110624d0 */
  push32(0x110671b6u); f_110624d0();
  /* 110671b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110671bc call 0x110624e0 */
  push32(0x110671c1u); f_110624e0();
  /* 110671c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 110671c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110671ca jmp 0x110671f6 */
  goto L_110671f6;
L_110671cc:;
  /* 110671cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110671cf push edx */
  push32((uint32_t)(EDX));
  /* 110671d0 call 0x11063cf0 */
  push32(0x110671d5u); f_11063cf0();
  /* 110671d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110671d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110671db push eax */
  push32((uint32_t)(EAX));
  /* 110671dc call 0x11067200 */
  push32(0x110671e1u); f_11067200();
  /* 110671e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110671e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110671e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110671ea push ecx */
  push32((uint32_t)(ECX));
  /* 110671eb call 0x11063d80 */
  push32(0x110671f0u); f_11063d80();
  /* 110671f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110671f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_110671f6:;
  /* 110671f6 mov esp, ebp */
  ESP = (EBP);
  /* 110671f8 pop ebp */
  EBP = (pop32());
  /* 110671f9 ret  */
  ESPCHK(0x11067180u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11067200 (170 bytes, 59 insns) */
void f_11067200(void) {
  FTRACE(0x11067200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067200 push ebp */
  push32((uint32_t)(EBP));
  /* 11067201 mov ebp, esp */
  EBP = (ESP);
  /* 11067203 push ecx */
  push32((uint32_t)(ECX));
  /* 11067204 push esi */
  push32((uint32_t)(ESI));
  /* 11067205 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067208 push eax */
  push32((uint32_t)(EAX));
  /* 11067209 call 0x11063b70 */
  push32(0x1106720eu); f_11063b70();
  /* 1106720e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067211 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067214 je 0x11067253 */
  if (C.zf) goto L_11067253;
  /* 11067216 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106721a je 0x11067222 */
  if (C.zf) goto L_11067222;
  /* 1106721c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067220 jne 0x1106723c */
  if (!C.zf) goto L_1106723c;
L_11067222:;
  /* 11067222 push 1 */
  push32((uint32_t)(0x1u));
  /* 11067224 call 0x11063b70 */
  push32(0x11067229u); f_11063b70();
  /* 11067229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106722c mov esi, eax */
  ESI = (EAX);
  /* 1106722e push 2 */
  push32((uint32_t)(0x2u));
  /* 11067230 call 0x11063b70 */
  push32(0x11067235u); f_11063b70();
  /* 11067235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067238 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106723a je 0x11067253 */
  if (C.zf) goto L_11067253;
L_1106723c:;
  /* 1106723c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106723f push ecx */
  push32((uint32_t)(ECX));
  /* 11067240 call 0x11063b70 */
  push32(0x11067245u); f_11063b70();
  /* 11067245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067248 push eax */
  push32((uint32_t)(EAX));
  /* 11067249 call dword ptr [0x110892ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892ec))), 0x1106724fu);
  /* 1106724f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11067251 je 0x1106725c */
  if (C.zf) goto L_1106725c;
L_11067253:;
  /* 11067253 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106725a jmp 0x11067265 */
  goto L_11067265;
L_1106725c:;
  /* 1106725c call dword ptr [0x110893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893dc))), 0x11067262u);
  /* 11067262 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11067265:;
  /* 11067265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067268 push edx */
  push32((uint32_t)(EDX));
  /* 11067269 call 0x11063a90 */
  push32(0x1106726eu); f_11063a90();
  /* 1106726e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067274 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11067277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106727a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1106727d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11067280 mov edx, dword ptr [eax*4 + 0x11088160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11088160)));
  /* 11067287 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1106728c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067290 je 0x110672a3 */
  if (C.zf) goto L_110672a3;
  /* 11067292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067295 push eax */
  push32((uint32_t)(EAX));
  /* 11067296 call 0x11062430 */
  push32(0x1106729bu); f_11062430();
  /* 1106729b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106729e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110672a1 jmp 0x110672a5 */
  goto L_110672a5;
L_110672a3:;
  /* 110672a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110672a5:;
  /* 110672a5 pop esi */
  ESI = (pop32());
  /* 110672a6 mov esp, ebp */
  ESP = (EBP);
  /* 110672a8 pop ebp */
  EBP = (pop32());
  /* 110672a9 ret  */
  ESPCHK(0x11067200u, _esp0);
  ESP += 4; return;
}

/* FUN_100172b0 @ 0x110672b0 (146 bytes, 52 insns) */
void f_110672b0(void) {
  FTRACE(0x110672b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110672b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110672b1 mov ebp, esp */
  EBP = (ESP);
  /* 110672b3 push ebx */
  push32((uint32_t)(EBX));
  /* 110672b4 push esi */
  push32((uint32_t)(ESI));
  /* 110672b5 push edi */
  push32((uint32_t)(EDI));
L_110672b6:;
  /* 110672b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110672ba jne 0x110672da */
  if (!C.zf) goto L_110672da;
  /* 110672bc push 0x110824b0 */
  push32((uint32_t)(0x110824b0u));
  /* 110672c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110672c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 110672c5 push 0x11082b78 */
  push32((uint32_t)(0x11082b78u));
  /* 110672ca push 2 */
  push32((uint32_t)(0x2u));
  /* 110672cc call 0x110596c0 */
  push32(0x110672d1u); f_110596c0();
  /* 110672d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110672d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110672d7 jne 0x110672da */
  if (!C.zf) goto L_110672da;
  /* 110672d9 int3  */
  x86_unimpl("int3 @ 0x110672d9");
L_110672da:;
  /* 110672da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110672dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110672de jne 0x110672b6 */
  if (!C.zf) goto L_110672b6;
  /* 110672e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110672e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110672e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 110672ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110672ee je 0x1106733d */
  if (C.zf) goto L_1106733d;
  /* 110672f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110672f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 110672f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 110672f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110672fb je 0x1106733d */
  if (C.zf) goto L_1106733d;
  /* 110672fd push 2 */
  push32((uint32_t)(0x2u));
  /* 110672ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067302 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11067305 push eax */
  push32((uint32_t)(EAX));
  /* 11067306 call 0x1105b090 */
  push32(0x1106730bu); f_1105b090();
  /* 1106730b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106730e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067311 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11067314 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1106731a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106731d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11067320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067323 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11067329 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106732c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11067333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067336 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1106733d:;
  /* 1106733d pop edi */
  EDI = (pop32());
  /* 1106733e pop esi */
  ESI = (pop32());
  /* 1106733f pop ebx */
  EBX = (pop32());
  /* 11067340 pop ebp */
  EBP = (pop32());
  /* 11067341 ret  */
  ESPCHK(0x110672b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017350 @ 0x11067350 (289 bytes, 97 insns) */
void f_11067350(void) {
  FTRACE(0x11067350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067350 push ebp */
  push32((uint32_t)(EBP));
  /* 11067351 mov ebp, esp */
  EBP = (ESP);
  /* 11067353 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067356 push esi */
  push32((uint32_t)(ESI));
  /* 11067357 mov eax, dword ptr [0x11085c98] */
  EAX = (r32((uint32_t)(0x11085c98)));
  /* 1106735c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106735f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11067366 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1106736d jmp 0x11067378 */
  goto L_11067378;
L_1106736f:;
  /* 1106736f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067372 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067375 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11067378:;
  /* 11067378 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106737c jae 0x110673b1 */
  if (!C.cf) goto L_110673b1;
  /* 1106737e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067381 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067384 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11067387 push ecx */
  push32((uint32_t)(ECX));
  /* 11067388 call 0x1105d430 */
  push32(0x1106738du); f_1105d430();
  /* 1106738d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067390 mov esi, eax */
  ESI = (EAX);
  /* 11067392 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067395 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067398 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1106739c push ecx */
  push32((uint32_t)(ECX));
  /* 1106739d call 0x1105d430 */
  push32(0x110673a2u); f_1105d430();
  /* 110673a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110673a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110673a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110673ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110673af jmp 0x1106736f */
  goto L_1106736f;
L_110673b1:;
  /* 110673b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110673b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110673b7 push eax */
  push32((uint32_t)(EAX));
  /* 110673b8 call 0x1105a5e0 */
  push32(0x110673bdu); f_1105a5e0();
  /* 110673bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110673c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110673c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110673c7 je 0x11067469 */
  if (C.zf) goto L_11067469;
  /* 110673cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110673d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110673d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110673da jmp 0x110673e5 */
  goto L_110673e5;
L_110673dc:;
  /* 110673dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110673df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110673e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_110673e5:;
  /* 110673e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110673e9 jae 0x1106745a */
  if (!C.cf) goto L_1106745a;
  /* 110673eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110673ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 110673f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110673f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110673f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110673fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110673fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067400 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11067403 push ecx */
  push32((uint32_t)(ECX));
  /* 11067404 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067407 push edx */
  push32((uint32_t)(EDX));
  /* 11067408 call 0x1105d5b0 */
  push32(0x1106740du); f_1105d5b0();
  /* 1106740d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067410 push eax */
  push32((uint32_t)(EAX));
  /* 11067411 call 0x1105d430 */
  push32(0x11067416u); f_1105d430();
  /* 11067416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067419 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106741c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106741e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11067421 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067424 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11067427 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106742a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106742d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11067430 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067433 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067436 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1106743a push eax */
  push32((uint32_t)(EAX));
  /* 1106743b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106743e push ecx */
  push32((uint32_t)(ECX));
  /* 1106743f call 0x1105d5b0 */
  push32(0x11067444u); f_1105d5b0();
  /* 11067444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067447 push eax */
  push32((uint32_t)(EAX));
  /* 11067448 call 0x1105d430 */
  push32(0x1106744du); f_1105d430();
  /* 1106744d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067450 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067453 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067455 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11067458 jmp 0x110673dc */
  goto L_110673dc;
L_1106745a:;
  /* 1106745a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106745d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11067460 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067463 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067466 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11067469:;
  /* 11067469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106746c pop esi */
  ESI = (pop32());
  /* 1106746d mov esp, ebp */
  ESP = (EBP);
  /* 1106746f pop ebp */
  EBP = (pop32());
  /* 11067470 ret  */
  ESPCHK(0x11067350u, _esp0);
  ESP += 4; return;
}

/* FUN_10017480 @ 0x11067480 (291 bytes, 97 insns) */
void f_11067480(void) {
  FTRACE(0x11067480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067480 push ebp */
  push32((uint32_t)(EBP));
  /* 11067481 mov ebp, esp */
  EBP = (ESP);
  /* 11067483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067486 push esi */
  push32((uint32_t)(ESI));
  /* 11067487 mov eax, dword ptr [0x11085c98] */
  EAX = (r32((uint32_t)(0x11085c98)));
  /* 1106748c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106748f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11067496 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1106749d jmp 0x110674a8 */
  goto L_110674a8;
L_1106749f:;
  /* 1106749f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110674a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110674a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110674a8:;
  /* 110674a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110674ac jae 0x110674e2 */
  if (!C.cf) goto L_110674e2;
  /* 110674ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110674b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110674b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 110674b8 push ecx */
  push32((uint32_t)(ECX));
  /* 110674b9 call 0x1105d430 */
  push32(0x110674beu); f_1105d430();
  /* 110674be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110674c1 mov esi, eax */
  ESI = (EAX);
  /* 110674c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110674c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110674c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 110674cd push ecx */
  push32((uint32_t)(ECX));
  /* 110674ce call 0x1105d430 */
  push32(0x110674d3u); f_1105d430();
  /* 110674d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110674d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110674d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110674dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110674e0 jmp 0x1106749f */
  goto L_1106749f;
L_110674e2:;
  /* 110674e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110674e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110674e8 push eax */
  push32((uint32_t)(EAX));
  /* 110674e9 call 0x1105a5e0 */
  push32(0x110674eeu); f_1105a5e0();
  /* 110674ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110674f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110674f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110674f8 je 0x1106759b */
  if (C.zf) goto L_1106759b;
  /* 110674fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067501 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11067504 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1106750b jmp 0x11067516 */
  goto L_11067516;
L_1106750d:;
  /* 1106750d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067510 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067513 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11067516:;
  /* 11067516 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106751a jae 0x1106758c */
  if (!C.cf) goto L_1106758c;
  /* 1106751c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106751f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11067522 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067528 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1106752b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106752e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067531 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11067535 push ecx */
  push32((uint32_t)(ECX));
  /* 11067536 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067539 push edx */
  push32((uint32_t)(EDX));
  /* 1106753a call 0x1105d5b0 */
  push32(0x1106753fu); f_1105d5b0();
  /* 1106753f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067542 push eax */
  push32((uint32_t)(EAX));
  /* 11067543 call 0x1105d430 */
  push32(0x11067548u); f_1105d430();
  /* 11067548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106754b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106754e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067550 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11067553 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067556 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11067559 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106755c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106755f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11067562 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067565 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067568 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1106756c push eax */
  push32((uint32_t)(EAX));
  /* 1106756d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067570 push ecx */
  push32((uint32_t)(ECX));
  /* 11067571 call 0x1105d5b0 */
  push32(0x11067576u); f_1105d5b0();
  /* 11067576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067579 push eax */
  push32((uint32_t)(EAX));
  /* 1106757a call 0x1105d430 */
  push32(0x1106757fu); f_1105d430();
  /* 1106757f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067582 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067585 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067587 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1106758a jmp 0x1106750d */
  goto L_1106750d;
L_1106758c:;
  /* 1106758c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106758f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11067592 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067598 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1106759b:;
  /* 1106759b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106759e pop esi */
  ESI = (pop32());
  /* 1106759f mov esp, ebp */
  ESP = (EBP);
  /* 110675a1 pop ebp */
  EBP = (pop32());
  /* 110675a2 ret  */
  ESPCHK(0x11067480u, _esp0);
  ESP += 4; return;
}

/* FUN_100175b0 @ 0x110675b0 (878 bytes, 273 insns) */
void f_110675b0(void) {
  FTRACE(0x110675b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110675b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110675b1 mov ebp, esp */
  EBP = (ESP);
  /* 110675b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110675b6 push esi */
  push32((uint32_t)(ESI));
  /* 110675b7 mov eax, dword ptr [0x11085c98] */
  EAX = (r32((uint32_t)(0x11085c98)));
  /* 110675bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110675bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110675c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110675cd jmp 0x110675d8 */
  goto L_110675d8;
L_110675cf:;
  /* 110675cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110675d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110675d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110675d8:;
  /* 110675d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110675dc jae 0x11067611 */
  if (!C.cf) goto L_11067611;
  /* 110675de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110675e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110675e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 110675e7 push ecx */
  push32((uint32_t)(ECX));
  /* 110675e8 call 0x1105d430 */
  push32(0x110675edu); f_1105d430();
  /* 110675ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110675f0 mov esi, eax */
  ESI = (EAX);
  /* 110675f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110675f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110675f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 110675fc push ecx */
  push32((uint32_t)(ECX));
  /* 110675fd call 0x1105d430 */
  push32(0x11067602u); f_1105d430();
  /* 11067602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067605 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067608 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1106760c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1106760f jmp 0x110675cf */
  goto L_110675cf;
L_11067611:;
  /* 11067611 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11067618 jmp 0x11067623 */
  goto L_11067623;
L_1106761a:;
  /* 1106761a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106761d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067620 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11067623:;
  /* 11067623 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067627 jae 0x1106765d */
  if (!C.cf) goto L_1106765d;
  /* 11067629 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106762c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106762f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11067633 push eax */
  push32((uint32_t)(EAX));
  /* 11067634 call 0x1105d430 */
  push32(0x11067639u); f_1105d430();
  /* 11067639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106763c mov esi, eax */
  ESI = (EAX);
  /* 1106763e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067641 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067644 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11067648 push eax */
  push32((uint32_t)(EAX));
  /* 11067649 call 0x1105d430 */
  push32(0x1106764eu); f_1105d430();
  /* 1106764e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067651 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067654 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11067658 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1106765b jmp 0x1106761a */
  goto L_1106761a;
L_1106765d:;
  /* 1106765d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067660 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11067666 push eax */
  push32((uint32_t)(EAX));
  /* 11067667 call 0x1105d430 */
  push32(0x1106766cu); f_1105d430();
  /* 1106766c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106766f mov esi, eax */
  ESI = (EAX);
  /* 11067671 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067674 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1106767a push edx */
  push32((uint32_t)(EDX));
  /* 1106767b call 0x1105d430 */
  push32(0x11067680u); f_1105d430();
  /* 11067680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067683 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067686 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1106768a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1106768d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067690 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11067696 push edx */
  push32((uint32_t)(EDX));
  /* 11067697 call 0x1105d430 */
  push32(0x1106769cu); f_1105d430();
  /* 1106769c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106769f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110676a2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110676a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110676a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110676ac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 110676b2 push ecx */
  push32((uint32_t)(ECX));
  /* 110676b3 call 0x1105d430 */
  push32(0x110676b8u); f_1105d430();
  /* 110676b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110676bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110676be lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110676c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110676c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110676c8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 110676ce push edx */
  push32((uint32_t)(EDX));
  /* 110676cf call 0x1105d430 */
  push32(0x110676d4u); f_1105d430();
  /* 110676d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110676d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110676da lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110676de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110676e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110676e4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110676e9 push eax */
  push32((uint32_t)(EAX));
  /* 110676ea call 0x1105a5e0 */
  push32(0x110676efu); f_1105a5e0();
  /* 110676ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110676f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110676f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110676f9 je 0x11067916 */
  if (C.zf) goto L_11067916;
  /* 110676ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067702 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11067705 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067708 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106770e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11067711 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11067716 mov eax, dword ptr [0x11085c98] */
  EAX = (r32((uint32_t)(0x11085c98)));
  /* 1106771b push eax */
  push32((uint32_t)(EAX));
  /* 1106771c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106771f push ecx */
  push32((uint32_t)(ECX));
  /* 11067720 call 0x11060ee0 */
  push32(0x11067725u); f_11060ee0();
  /* 11067725 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067728 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1106772f jmp 0x1106773a */
  goto L_1106773a;
L_11067731:;
  /* 11067731 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067734 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067737 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1106773a:;
  /* 1106773a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106773e jae 0x110677ae */
  if (!C.cf) goto L_110677ae;
  /* 11067740 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067743 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11067746 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067749 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1106774c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106774f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067752 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11067755 push edx */
  push32((uint32_t)(EDX));
  /* 11067756 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067759 push eax */
  push32((uint32_t)(EAX));
  /* 1106775a call 0x1105d5b0 */
  push32(0x1106775fu); f_1105d5b0();
  /* 1106775f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067762 push eax */
  push32((uint32_t)(EAX));
  /* 11067763 call 0x1105d430 */
  push32(0x11067768u); f_1105d430();
  /* 11067768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106776b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106776e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11067772 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11067775 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067778 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106777b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106777e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11067782 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067785 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067788 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1106778c push edx */
  push32((uint32_t)(EDX));
  /* 1106778d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067790 push eax */
  push32((uint32_t)(EAX));
  /* 11067791 call 0x1105d5b0 */
  push32(0x11067796u); f_1105d5b0();
  /* 11067796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067799 push eax */
  push32((uint32_t)(EAX));
  /* 1106779a call 0x1105d430 */
  push32(0x1106779fu); f_1105d430();
  /* 1106779f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110677a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110677a5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110677a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110677ac jmp 0x11067731 */
  goto L_11067731;
L_110677ae:;
  /* 110677ae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110677b5 jmp 0x110677c0 */
  goto L_110677c0;
L_110677b7:;
  /* 110677b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110677ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110677bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_110677c0:;
  /* 110677c0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110677c4 jae 0x11067836 */
  if (!C.cf) goto L_11067836;
  /* 110677c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110677c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110677cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110677cf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 110677d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110677d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110677d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 110677dd push eax */
  push32((uint32_t)(EAX));
  /* 110677de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110677e1 push ecx */
  push32((uint32_t)(ECX));
  /* 110677e2 call 0x1105d5b0 */
  push32(0x110677e7u); f_1105d5b0();
  /* 110677e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110677ea push eax */
  push32((uint32_t)(EAX));
  /* 110677eb call 0x1105d430 */
  push32(0x110677f0u); f_1105d430();
  /* 110677f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110677f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110677f6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110677fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110677fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11067800 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11067803 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067806 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1106780a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106780d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067810 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11067814 push eax */
  push32((uint32_t)(EAX));
  /* 11067815 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067818 push ecx */
  push32((uint32_t)(ECX));
  /* 11067819 call 0x1105d5b0 */
  push32(0x1106781eu); f_1105d5b0();
  /* 1106781e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067821 push eax */
  push32((uint32_t)(EAX));
  /* 11067822 call 0x1105d430 */
  push32(0x11067827u); f_1105d430();
  /* 11067827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106782a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106782d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11067831 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11067834 jmp 0x110677b7 */
  goto L_110677b7;
L_11067836:;
  /* 11067836 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11067839 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106783c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11067842 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067845 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1106784b push ecx */
  push32((uint32_t)(ECX));
  /* 1106784c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106784f push edx */
  push32((uint32_t)(EDX));
  /* 11067850 call 0x1105d5b0 */
  push32(0x11067855u); f_1105d5b0();
  /* 11067855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067858 push eax */
  push32((uint32_t)(EAX));
  /* 11067859 call 0x1105d430 */
  push32(0x1106785eu); f_1105d430();
  /* 1106785e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067861 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067864 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11067868 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1106786b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106786e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067871 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11067877 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106787a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11067880 push eax */
  push32((uint32_t)(EAX));
  /* 11067881 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067884 push ecx */
  push32((uint32_t)(ECX));
  /* 11067885 call 0x1105d5b0 */
  push32(0x1106788au); f_1105d5b0();
  /* 1106788a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106788d push eax */
  push32((uint32_t)(EAX));
  /* 1106788e call 0x1105d430 */
  push32(0x11067893u); f_1105d430();
  /* 11067893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067896 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067899 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1106789d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110678a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110678a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110678a6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 110678ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110678af mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 110678b5 push ecx */
  push32((uint32_t)(ECX));
  /* 110678b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110678b9 push edx */
  push32((uint32_t)(EDX));
  /* 110678ba call 0x1105d5b0 */
  push32(0x110678bfu); f_1105d5b0();
  /* 110678bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110678c2 push eax */
  push32((uint32_t)(EAX));
  /* 110678c3 call 0x1105d430 */
  push32(0x110678c8u); f_1105d430();
  /* 110678c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110678cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110678ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110678d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110678d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110678d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110678db mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 110678e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110678e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 110678ea push eax */
  push32((uint32_t)(EAX));
  /* 110678eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110678ee push ecx */
  push32((uint32_t)(ECX));
  /* 110678ef call 0x1105d5b0 */
  push32(0x110678f4u); f_1105d5b0();
  /* 110678f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110678f7 push eax */
  push32((uint32_t)(EAX));
  /* 110678f8 call 0x1105d430 */
  push32(0x110678fdu); f_1105d430();
  /* 110678fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067900 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067903 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11067907 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1106790a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106790d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11067910 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11067916:;
  /* 11067916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067919 pop esi */
  ESI = (pop32());
  /* 1106791a mov esp, ebp */
  ESP = (EBP);
  /* 1106791c pop ebp */
  EBP = (pop32());
  /* 1106791d ret  */
  ESPCHK(0x110675b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017920 @ 0x11067920 (31 bytes, 15 insns) */
void f_11067920(void) {
  FTRACE(0x11067920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067920 push ebp */
  push32((uint32_t)(EBP));
  /* 11067921 mov ebp, esp */
  EBP = (ESP);
  /* 11067923 push 0 */
  push32((uint32_t)(0x0u));
  /* 11067925 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067928 push eax */
  push32((uint32_t)(EAX));
  /* 11067929 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106792c push ecx */
  push32((uint32_t)(ECX));
  /* 1106792d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067930 push edx */
  push32((uint32_t)(EDX));
  /* 11067931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067934 push eax */
  push32((uint32_t)(EAX));
  /* 11067935 call 0x11067940 */
  push32(0x1106793au); f_11067940();
  /* 1106793a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106793d pop ebp */
  EBP = (pop32());
  /* 1106793e ret  */
  ESPCHK(0x11067920u, _esp0);
  ESP += 4; return;
}

