#include "recomp.h"

/* FUN_1000e870 @ 0x1225e870 (10 bytes, 5 insns) */
void f_1225e870(void) {
  FTRACE(0x1225e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225e870 push ebp */
  push32((uint32_t)(EBP));
  /* 1225e871 mov ebp, esp */
  EBP = (ESP);
  /* 1225e873 mov eax, dword ptr [0x12284c94] */
  EAX = (r32((uint32_t)(0x12284c94)));
  /* 1225e878 pop ebp */
  EBP = (pop32());
  /* 1225e879 ret  */
  ESPCHK(0x1225e870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e880 @ 0x1225e880 (31 bytes, 11 insns) */
void f_1225e880(void) {
  FTRACE(0x1225e880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225e880 push ebp */
  push32((uint32_t)(EBP));
  /* 1225e881 mov ebp, esp */
  EBP = (ESP);
  /* 1225e883 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225e88a jbe 0x1225e890 */
  if ((C.cf||C.zf)) goto L_1225e890;
  /* 1225e88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225e88e jmp 0x1225e89d */
  goto L_1225e89d;
L_1225e890:;
  /* 1225e890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225e893 mov dword ptr [0x12284c94], eax */
  w32((uint32_t)(0x12284c94), (EAX));
  /* 1225e898 mov eax, 1 */
  EAX = (0x1u);
L_1225e89d:;
  /* 1225e89d pop ebp */
  EBP = (pop32());
  /* 1225e89e ret  */
  ESPCHK(0x1225e880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x1225e8a0 (89 bytes, 20 insns) */
void f_1225e8a0(void) {
  FTRACE(0x1225e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1225e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1225e8a3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1225e8a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1225e8aa mov eax, dword ptr [0x1228812c] */
  EAX = (r32((uint32_t)(0x1228812c)));
  /* 1225e8af push eax */
  push32((uint32_t)(EAX));
  /* 1225e8b0 call dword ptr [0x12289344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289344))), 0x1225e8b6u);
  /* 1225e8b6 mov dword ptr [0x12288128], eax */
  w32((uint32_t)(0x12288128), (EAX));
  /* 1225e8bb cmp dword ptr [0x12288128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12288128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225e8c2 jne 0x1225e8c8 */
  if (!C.zf) goto L_1225e8c8;
  /* 1225e8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225e8c6 jmp 0x1225e8f7 */
  goto L_1225e8f7;
L_1225e8c8:;
  /* 1225e8c8 mov ecx, dword ptr [0x12288128] */
  ECX = (r32((uint32_t)(0x12288128)));
  /* 1225e8ce mov dword ptr [0x1228811c], ecx */
  w32((uint32_t)(0x1228811c), (ECX));
  /* 1225e8d4 mov dword ptr [0x12288120], 0 */
  w32((uint32_t)(0x12288120), (0x0u));
  /* 1225e8de mov dword ptr [0x12288124], 0 */
  w32((uint32_t)(0x12288124), (0x0u));
  /* 1225e8e8 mov dword ptr [0x12288108], 0x10 */
  w32((uint32_t)(0x12288108), (0x10u));
  /* 1225e8f2 mov eax, 1 */
  EAX = (0x1u);
L_1225e8f7:;
  /* 1225e8f7 pop ebp */
  EBP = (pop32());
  /* 1225e8f8 ret  */
  ESPCHK(0x1225e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e900 @ 0x1225e900 (85 bytes, 29 insns) */
void f_1225e900(void) {
  FTRACE(0x1225e900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225e900 push ebp */
  push32((uint32_t)(EBP));
  /* 1225e901 mov ebp, esp */
  EBP = (ESP);
  /* 1225e903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225e906 mov eax, dword ptr [0x12288124] */
  EAX = (r32((uint32_t)(0x12288124)));
  /* 1225e90b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225e90e mov ecx, dword ptr [0x12288128] */
  ECX = (r32((uint32_t)(0x12288128)));
  /* 1225e914 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225e916 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1225e919 mov edx, dword ptr [0x12288128] */
  EDX = (r32((uint32_t)(0x12288128)));
  /* 1225e91f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1225e922:;
  /* 1225e922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225e925 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225e928 jae 0x1225e94f */
  if (!C.cf) goto L_1225e94f;
  /* 1225e92a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225e92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225e930 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225e933 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1225e936 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225e93d jae 0x1225e944 */
  if (!C.cf) goto L_1225e944;
  /* 1225e93f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225e942 jmp 0x1225e951 */
  goto L_1225e951;
L_1225e944:;
  /* 1225e944 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225e947 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225e94a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1225e94d jmp 0x1225e922 */
  goto L_1225e922;
L_1225e94f:;
  /* 1225e94f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1225e951:;
  /* 1225e951 mov esp, ebp */
  ESP = (EBP);
  /* 1225e953 pop ebp */
  EBP = (pop32());
  /* 1225e954 ret  */
  ESPCHK(0x1225e900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e960 @ 0x1225e960 (95 bytes, 33 insns) */
void f_1225e960(void) {
  FTRACE(0x1225e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225e960 push ebp */
  push32((uint32_t)(EBP));
  /* 1225e961 mov ebp, esp */
  EBP = (ESP);
  /* 1225e963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225e966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225e969 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1225e96c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225e96f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1225e972 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225e975 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1225e978 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1225e97b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225e980 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225e983 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225e985 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225e988 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1225e98b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225e98d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225e98f jne 0x1225e9b1 */
  if (!C.zf) goto L_1225e9b1;
  /* 1225e991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225e994 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1225e997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1225e999 jne 0x1225e9b1 */
  if (!C.zf) goto L_1225e9b1;
  /* 1225e99b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225e99e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1225e9a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225e9a6 je 0x1225e9b1 */
  if (C.zf) goto L_1225e9b1;
  /* 1225e9a8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1225e9af jmp 0x1225e9b8 */
  goto L_1225e9b8;
L_1225e9b1:;
  /* 1225e9b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1225e9b8:;
  /* 1225e9b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225e9bb mov esp, ebp */
  ESP = (EBP);
  /* 1225e9bd pop ebp */
  EBP = (pop32());
  /* 1225e9be ret  */
  ESPCHK(0x1225e960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x1225e9c0 (1485 bytes, 453 insns) */
void f_1225e9c0(void) {
  FTRACE(0x1225e9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225e9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1225e9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1225e9c3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225e9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225e9c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225e9cc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1225e9cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225e9d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1225e9d5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225e9d8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1225e9db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225e9de shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1225e9e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1225e9e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225e9e7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225e9ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225e9f0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1225e9f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1225e9fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1225e9fd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ea00 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1225ea03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ea06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225ea08 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ea0b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1225ea0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ea11 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ea14 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1225ea17 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225ea1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225ea1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1225ea1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ea22 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1225ea25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1225ea28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225ea2b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1225ea2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225ea30 jne 0x1225eb58 */
  if (!C.zf) goto L_1225eb58;
  /* 1225ea36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225ea39 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1225ea3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ea3f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1225ea42 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ea46 jbe 0x1225ea4f */
  if ((C.cf||C.zf)) goto L_1225ea4f;
  /* 1225ea48 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1225ea4f:;
  /* 1225ea4f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225ea52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225ea55 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225ea58 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ea5b jne 0x1225eb31 */
  if (!C.zf) goto L_1225eb31;
  /* 1225ea61 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ea65 jae 0x1225eac6 */
  if (!C.cf) goto L_1225eac6;
  /* 1225ea67 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225ea6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225ea6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225ea71 not eax */
  EAX = (~(EAX));
  /* 1225ea73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ea76 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ea79 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1225ea7d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225ea7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ea82 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ea85 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1225ea89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ea8c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ea8f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1225ea92 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225ea95 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ea98 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ea9b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1225ea9e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225eaa1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225eaa4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225eaa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225eaaa jne 0x1225eac4 */
  if (!C.zf) goto L_1225eac4;
  /* 1225eaac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225eab1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225eab4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225eab6 not eax */
  EAX = (~(EAX));
  /* 1225eab8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225eabb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1225eabd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225eabf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225eac2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1225eac4:;
  /* 1225eac4 jmp 0x1225eb31 */
  goto L_1225eb31;
L_1225eac6:;
  /* 1225eac6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225eac9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225eacc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225ead1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225ead3 not edx */
  EDX = (~(EDX));
  /* 1225ead5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ead8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225eadb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1225eae2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225eae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225eae7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225eaea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1225eaf1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225eaf4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225eaf7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225eafa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225eafd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225eb00 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225eb03 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1225eb06 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225eb09 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225eb0c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225eb10 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225eb12 jne 0x1225eb31 */
  if (!C.zf) goto L_1225eb31;
  /* 1225eb14 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225eb17 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225eb1a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225eb1f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225eb21 not edx */
  EDX = (~(EDX));
  /* 1225eb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225eb26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225eb29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225eb2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225eb2e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1225eb31:;
  /* 1225eb31 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225eb34 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1225eb37 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225eb3a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225eb3d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1225eb40 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225eb43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225eb46 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225eb49 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1225eb4c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1225eb4f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225eb52 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225eb55 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1225eb58:;
  /* 1225eb58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225eb5b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1225eb5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225eb61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1225eb64 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225eb68 jbe 0x1225eb71 */
  if ((C.cf||C.zf)) goto L_1225eb71;
  /* 1225eb6a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1225eb71:;
  /* 1225eb71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225eb74 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1225eb77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225eb79 jne 0x1225ecd5 */
  if (!C.zf) goto L_1225ecd5;
  /* 1225eb7f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225eb82 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225eb85 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1225eb88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225eb8b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1225eb8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225eb91 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1225eb94 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225eb98 jbe 0x1225eba1 */
  if ((C.cf||C.zf)) goto L_1225eba1;
  /* 1225eb9a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1225eba1:;
  /* 1225eba1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225eba4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225eba7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1225ebaa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225ebad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1225ebb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ebb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1225ebb6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ebba jbe 0x1225ebc3 */
  if ((C.cf||C.zf)) goto L_1225ebc3;
  /* 1225ebbc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1225ebc3:;
  /* 1225ebc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225ebc6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ebc9 je 0x1225eccf */
  if (C.zf) goto L_1225eccf;
  /* 1225ebcf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225ebd2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225ebd5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225ebd8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ebdb jne 0x1225ecb1 */
  if (!C.zf) goto L_1225ecb1;
  /* 1225ebe1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ebe5 jae 0x1225ec46 */
  if (!C.cf) goto L_1225ec46;
  /* 1225ebe7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225ebec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225ebef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225ebf1 not edx */
  EDX = (~(EDX));
  /* 1225ebf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ebf6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ebf9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1225ebfd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225ebff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ec02 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec05 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1225ec09 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec0c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ec0f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225ec12 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225ec15 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec18 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ec1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1225ec1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec21 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ec24 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225ec28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225ec2a jne 0x1225ec44 */
  if (!C.zf) goto L_1225ec44;
  /* 1225ec2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225ec31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225ec34 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225ec36 not edx */
  EDX = (~(EDX));
  /* 1225ec38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ec3b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225ec3d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225ec3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ec42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1225ec44:;
  /* 1225ec44 jmp 0x1225ecb1 */
  goto L_1225ecb1;
L_1225ec46:;
  /* 1225ec46 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225ec49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ec4c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225ec51 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225ec53 not eax */
  EAX = (~(EAX));
  /* 1225ec55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ec58 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec5b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1225ec62 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225ec64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ec67 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec6a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1225ec71 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec74 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ec77 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1225ec7a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225ec7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec80 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ec83 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1225ec86 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ec89 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ec8c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225ec90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225ec92 jne 0x1225ecb1 */
  if (!C.zf) goto L_1225ecb1;
  /* 1225ec94 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225ec97 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ec9a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225ec9f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225eca1 not eax */
  EAX = (~(EAX));
  /* 1225eca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225eca6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225eca9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225ecab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ecae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1225ecb1:;
  /* 1225ecb1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225ecb4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1225ecb7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225ecba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225ecbd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1225ecc0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225ecc3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225ecc6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225ecc9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1225eccc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1225eccf:;
  /* 1225eccf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225ecd2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1225ecd5:;
  /* 1225ecd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225ecd8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1225ecdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225ecdd jne 0x1225eceb */
  if (!C.zf) goto L_1225eceb;
  /* 1225ecdf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225ece2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ece5 je 0x1225edfb */
  if (C.zf) goto L_1225edfb;
L_1225eceb:;
  /* 1225eceb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225ecee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225ecf1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1225ecf4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1225ecf7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ecfa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225ecfd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225ed00 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1225ed03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ed06 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225ed09 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1225ed0c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225ed0f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ed12 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1225ed15 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ed18 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225ed1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ed1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1225ed21 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ed24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ed27 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225ed2a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ed2d jne 0x1225edfb */
  if (!C.zf) goto L_1225edfb;
  /* 1225ed33 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ed37 jae 0x1225ed94 */
  if (!C.cf) goto L_1225ed94;
  /* 1225ed39 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ed3c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ed3f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225ed43 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ed46 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ed49 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225ed4c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225ed4f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ed52 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ed55 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1225ed58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225ed5a jne 0x1225ed72 */
  if (!C.zf) goto L_1225ed72;
  /* 1225ed5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225ed61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225ed64 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225ed66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ed69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225ed6b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225ed6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ed70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1225ed72:;
  /* 1225ed72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225ed77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225ed7a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225ed7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ed7f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ed82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1225ed86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225ed88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ed8b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ed8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1225ed92 jmp 0x1225edfb */
  goto L_1225edfb;
L_1225ed94:;
  /* 1225ed94 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ed97 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ed9a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225ed9e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225eda1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225eda4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225eda7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225edaa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225edad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225edb0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1225edb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225edb5 jne 0x1225edd2 */
  if (!C.zf) goto L_1225edd2;
  /* 1225edb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225edba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225edbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225edc2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225edc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225edc7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225edca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225edcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225edcf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1225edd2:;
  /* 1225edd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225edd5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225edd8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225eddd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225eddf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ede2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225ede5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1225edec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225edee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225edf1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1225edf4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1225edfb:;
  /* 1225edfb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225edfe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225ee01 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1225ee03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225ee06 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ee09 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225ee0c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1225ee0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225ee12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1225ee14 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ee17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225ee1a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1225ee1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225ee1f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ee22 jne 0x1225ef89 */
  if (!C.zf) goto L_1225ef89;
  /* 1225ee28 cmp dword ptr [0x12288120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12288120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ee2f je 0x1225ef78 */
  if (C.zf) goto L_1225ef78;
  /* 1225ee35 mov eax, dword ptr [0x12288118] */
  EAX = (r32((uint32_t)(0x12288118)));
  /* 1225ee3a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1225ee3d mov ecx, dword ptr [0x12288120] */
  ECX = (r32((uint32_t)(0x12288120)));
  /* 1225ee43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1225ee46 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ee48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1225ee4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1225ee50 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1225ee55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225ee58 push eax */
  push32((uint32_t)(EAX));
  /* 1225ee59 call dword ptr [0x12289360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289360))), 0x1225ee5fu);
  /* 1225ee5f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225ee64 mov ecx, dword ptr [0x12288118] */
  ECX = (r32((uint32_t)(0x12288118)));
  /* 1225ee6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225ee6c mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225ee71 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1225ee74 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225ee76 mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225ee7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1225ee7f mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225ee84 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225ee87 mov edx, dword ptr [0x12288118] */
  EDX = (r32((uint32_t)(0x12288118)));
  /* 1225ee8d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1225ee98 mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225ee9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225eea0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1225eea3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225eea6 mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225eeab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225eeae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1225eeb1 mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225eeb7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1225eeba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1225eebe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225eec0 jne 0x1225eed6 */
  if (!C.zf) goto L_1225eed6;
  /* 1225eec2 mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225eec8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225eecb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1225eecd mov ecx, dword ptr [0x12288120] */
  ECX = (r32((uint32_t)(0x12288120)));
  /* 1225eed3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1225eed6:;
  /* 1225eed6 mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225eedc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225eee0 jne 0x1225ef78 */
  if (!C.zf) goto L_1225ef78;
  /* 1225eee6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1225eeeb push 0 */
  push32((uint32_t)(0x0u));
  /* 1225eeed mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225eef2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1225eef5 push ecx */
  push32((uint32_t)(ECX));
  /* 1225eef6 call dword ptr [0x12289360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289360))), 0x1225eefcu);
  /* 1225eefc mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225ef02 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1225ef05 push eax */
  push32((uint32_t)(EAX));
  /* 1225ef06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1225ef08 mov ecx, dword ptr [0x1228812c] */
  ECX = (r32((uint32_t)(0x1228812c)));
  /* 1225ef0e push ecx */
  push32((uint32_t)(ECX));
  /* 1225ef0f call dword ptr [0x12289364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289364))), 0x1225ef15u);
  /* 1225ef15 mov edx, dword ptr [0x12288124] */
  EDX = (r32((uint32_t)(0x12288124)));
  /* 1225ef1b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225ef1e mov eax, dword ptr [0x12288128] */
  EAX = (r32((uint32_t)(0x12288128)));
  /* 1225ef23 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ef25 mov ecx, dword ptr [0x12288120] */
  ECX = (r32((uint32_t)(0x12288120)));
  /* 1225ef2b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ef2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ef30 push eax */
  push32((uint32_t)(EAX));
  /* 1225ef31 mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225ef37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ef3a push edx */
  push32((uint32_t)(EDX));
  /* 1225ef3b mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225ef40 push eax */
  push32((uint32_t)(EAX));
  /* 1225ef41 call 0x122624f0 */
  push32(0x1225ef46u); f_122624f0();
  /* 1225ef46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ef49 mov ecx, dword ptr [0x12288124] */
  ECX = (r32((uint32_t)(0x12288124)));
  /* 1225ef4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ef52 mov dword ptr [0x12288124], ecx */
  w32((uint32_t)(0x12288124), (ECX));
  /* 1225ef58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ef5b cmp edx, dword ptr [0x12288120] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12288120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ef61 jbe 0x1225ef6c */
  if ((C.cf||C.zf)) goto L_1225ef6c;
  /* 1225ef63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ef66 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ef69 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1225ef6c:;
  /* 1225ef6c mov ecx, dword ptr [0x12288128] */
  ECX = (r32((uint32_t)(0x12288128)));
  /* 1225ef72 mov dword ptr [0x1228811c], ecx */
  w32((uint32_t)(0x1228811c), (ECX));
L_1225ef78:;
  /* 1225ef78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225ef7b mov dword ptr [0x12288120], edx */
  w32((uint32_t)(0x12288120), (EDX));
  /* 1225ef81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225ef84 mov dword ptr [0x12288118], eax */
  w32((uint32_t)(0x12288118), (EAX));
L_1225ef89:;
  /* 1225ef89 mov esp, ebp */
  ESP = (EBP);
  /* 1225ef8b pop ebp */
  EBP = (pop32());
  /* 1225ef8c ret  */
  ESPCHK(0x1225e9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef90 @ 0x1225ef90 (1334 bytes, 427 insns) */
void f_1225ef90(void) {
  FTRACE(0x1225ef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225ef90 push ebp */
  push32((uint32_t)(EBP));
  /* 1225ef91 mov ebp, esp */
  EBP = (ESP);
  /* 1225ef93 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225ef96 push esi */
  push32((uint32_t)(ESI));
  /* 1225ef97 mov eax, dword ptr [0x12288124] */
  EAX = (r32((uint32_t)(0x12288124)));
  /* 1225ef9c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225ef9f mov ecx, dword ptr [0x12288128] */
  ECX = (r32((uint32_t)(0x12288128)));
  /* 1225efa5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225efa7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1225efaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225efad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225efb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1225efb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1225efb6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225efb9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1225efbc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225efbf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1225efc2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225efc6 jge 0x1225efdc */
  if ((C.sf==C.of)) goto L_1225efdc;
  /* 1225efc8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1225efcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225efce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225efd0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1225efd3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1225efda jmp 0x1225eff1 */
  goto L_1225eff1;
L_1225efdc:;
  /* 1225efdc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1225efe3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225efe6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225efe9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1225efec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225efee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1225eff1:;
  /* 1225eff1 mov ecx, dword ptr [0x1228811c] */
  ECX = (r32((uint32_t)(0x1228811c)));
  /* 1225eff7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1225effa:;
  /* 1225effa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225effd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f000 jae 0x1225f026 */
  if (!C.cf) goto L_1225f026;
  /* 1225f002 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f005 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225f008 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1225f00a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f00d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225f010 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1225f013 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225f015 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225f017 je 0x1225f01b */
  if (C.zf) goto L_1225f01b;
  /* 1225f019 jmp 0x1225f026 */
  goto L_1225f026;
L_1225f01b:;
  /* 1225f01b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f01e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f021 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1225f024 jmp 0x1225effa */
  goto L_1225effa;
L_1225f026:;
  /* 1225f026 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f029 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f02c jne 0x1225f10d */
  if (!C.zf) goto L_1225f10d;
  /* 1225f032 mov eax, dword ptr [0x12288128] */
  EAX = (r32((uint32_t)(0x12288128)));
  /* 1225f037 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1225f03a:;
  /* 1225f03a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f03d cmp ecx, dword ptr [0x1228811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1228811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f043 jae 0x1225f069 */
  if (!C.cf) goto L_1225f069;
  /* 1225f045 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f048 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225f04b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1225f04d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f050 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225f053 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1225f056 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1225f05a je 0x1225f05e */
  if (C.zf) goto L_1225f05e;
  /* 1225f05c jmp 0x1225f069 */
  goto L_1225f069;
L_1225f05e:;
  /* 1225f05e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f061 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f064 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1225f067 jmp 0x1225f03a */
  goto L_1225f03a;
L_1225f069:;
  /* 1225f069 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f06c cmp ecx, dword ptr [0x1228811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1228811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f072 jne 0x1225f10d */
  if (!C.zf) goto L_1225f10d;
L_1225f078:;
  /* 1225f078 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f07b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f07e jae 0x1225f096 */
  if (!C.cf) goto L_1225f096;
  /* 1225f080 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f083 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f087 je 0x1225f08b */
  if (C.zf) goto L_1225f08b;
  /* 1225f089 jmp 0x1225f096 */
  goto L_1225f096;
L_1225f08b:;
  /* 1225f08b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f08e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f091 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1225f094 jmp 0x1225f078 */
  goto L_1225f078;
L_1225f096:;
  /* 1225f096 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f099 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f09c jne 0x1225f0e7 */
  if (!C.zf) goto L_1225f0e7;
  /* 1225f09e mov eax, dword ptr [0x12288128] */
  EAX = (r32((uint32_t)(0x12288128)));
  /* 1225f0a3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1225f0a6:;
  /* 1225f0a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f0a9 cmp ecx, dword ptr [0x1228811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1228811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f0af jae 0x1225f0c7 */
  if (!C.cf) goto L_1225f0c7;
  /* 1225f0b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f0b4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f0b8 je 0x1225f0bc */
  if (C.zf) goto L_1225f0bc;
  /* 1225f0ba jmp 0x1225f0c7 */
  goto L_1225f0c7;
L_1225f0bc:;
  /* 1225f0bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f0bf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f0c2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1225f0c5 jmp 0x1225f0a6 */
  goto L_1225f0a6;
L_1225f0c7:;
  /* 1225f0c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f0ca cmp ecx, dword ptr [0x1228811c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1228811c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f0d0 jne 0x1225f0e7 */
  if (!C.zf) goto L_1225f0e7;
  /* 1225f0d2 call 0x1225f4d0 */
  push32(0x1225f0d7u); f_1225f4d0();
  /* 1225f0d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1225f0da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f0de jne 0x1225f0e7 */
  if (!C.zf) goto L_1225f0e7;
  /* 1225f0e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f0e2 jmp 0x1225f4c1 */
  goto L_1225f4c1;
L_1225f0e7:;
  /* 1225f0e7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f0ea push edx */
  push32((uint32_t)(EDX));
  /* 1225f0eb call 0x1225f5e0 */
  push32(0x1225f0f0u); f_1225f5e0();
  /* 1225f0f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f0f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f0f6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1225f0f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1225f0fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f0fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225f101 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f104 jne 0x1225f10d */
  if (!C.zf) goto L_1225f10d;
  /* 1225f106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f108 jmp 0x1225f4c1 */
  goto L_1225f4c1;
L_1225f10d:;
  /* 1225f10d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f110 mov dword ptr [0x1228811c], edx */
  w32((uint32_t)(0x1228811c), (EDX));
  /* 1225f116 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f119 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225f11c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1225f11f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f122 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1225f124 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1225f127 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f12b je 0x1225f150 */
  if (C.zf) goto L_1225f150;
  /* 1225f12d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f130 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f133 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225f136 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1225f13a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f13d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f140 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1225f143 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1225f14a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1225f14c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1225f14e jne 0x1225f185 */
  if (!C.zf) goto L_1225f185;
L_1225f150:;
  /* 1225f150 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1225f157:;
  /* 1225f157 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f15a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f15d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225f160 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1225f164 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f167 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f16a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1225f16d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1225f174 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1225f176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225f178 jne 0x1225f185 */
  if (!C.zf) goto L_1225f185;
  /* 1225f17a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f17d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f180 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1225f183 jmp 0x1225f157 */
  goto L_1225f157;
L_1225f185:;
  /* 1225f185 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f188 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225f18e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f191 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1225f198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1225f19b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1225f1a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f1a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f1a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225f1ab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1225f1af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1225f1b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f1b6 jne 0x1225f1d2 */
  if (!C.zf) goto L_1225f1d2;
  /* 1225f1b8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1225f1bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f1c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f1c5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1225f1c8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1225f1cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1225f1d2:;
  /* 1225f1d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f1d6 jl 0x1225f1eb */
  if ((C.sf!=C.of)) goto L_1225f1eb;
  /* 1225f1d8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225f1db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1225f1dd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1225f1e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f1e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f1e6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1225f1e9 jmp 0x1225f1d2 */
  goto L_1225f1d2;
L_1225f1eb:;
  /* 1225f1eb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f1ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f1f1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1225f1f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1225f1f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f1fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1225f1fd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f200 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1225f203 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225f206 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1225f209 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f20c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1225f20f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f213 jle 0x1225f21c */
  if ((C.zf||C.sf!=C.of)) goto L_1225f21c;
  /* 1225f215 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1225f21c:;
  /* 1225f21c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f21f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f222 je 0x1225f440 */
  if (C.zf) goto L_1225f440;
  /* 1225f228 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f22b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f22e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225f231 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f234 jne 0x1225f30a */
  if (!C.zf) goto L_1225f30a;
  /* 1225f23a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f23e jge 0x1225f29f */
  if ((C.sf==C.of)) goto L_1225f29f;
  /* 1225f240 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225f245 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f248 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225f24a not eax */
  EAX = (~(EAX));
  /* 1225f24c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f24f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f252 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1225f256 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225f258 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f25b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f25e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1225f262 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f265 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f268 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1225f26b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225f26e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f271 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f274 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1225f277 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f27a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f27d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225f281 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225f283 jne 0x1225f29d */
  if (!C.zf) goto L_1225f29d;
  /* 1225f285 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225f28a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f28d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225f28f not eax */
  EAX = (~(EAX));
  /* 1225f291 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f294 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1225f296 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225f298 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f29b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1225f29d:;
  /* 1225f29d jmp 0x1225f30a */
  goto L_1225f30a;
L_1225f29f:;
  /* 1225f29f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f2a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f2a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225f2aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225f2ac not edx */
  EDX = (~(EDX));
  /* 1225f2ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f2b1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f2b4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1225f2bb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f2bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f2c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f2c3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1225f2ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f2cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f2d0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225f2d3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225f2d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f2d9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f2dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1225f2df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f2e2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f2e5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225f2e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225f2eb jne 0x1225f30a */
  if (!C.zf) goto L_1225f30a;
  /* 1225f2ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f2f0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f2f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225f2f8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225f2fa not edx */
  EDX = (~(EDX));
  /* 1225f2fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f2ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225f302 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225f304 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f307 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1225f30a:;
  /* 1225f30a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f30d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1225f310 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f313 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225f316 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1225f319 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f31c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f31f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f322 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1225f325 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1225f328 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f32c je 0x1225f440 */
  if (C.zf) goto L_1225f440;
  /* 1225f332 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f335 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f338 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1225f33b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1225f33e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f341 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225f344 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225f347 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1225f34a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f34d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225f350 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1225f353 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225f356 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f359 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1225f35c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f35f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225f362 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f365 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1225f368 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f36b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f36e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225f371 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f374 jne 0x1225f440 */
  if (!C.zf) goto L_1225f440;
  /* 1225f37a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f37e jge 0x1225f3da */
  if ((C.sf==C.of)) goto L_1225f3da;
  /* 1225f380 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f383 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f386 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225f38a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f38d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f390 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1225f393 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225f395 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f398 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f39b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1225f39e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225f3a0 jne 0x1225f3b8 */
  if (!C.zf) goto L_1225f3b8;
  /* 1225f3a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225f3a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f3aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225f3ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f3af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1225f3b1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225f3b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f3b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1225f3b8:;
  /* 1225f3b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225f3bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f3c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225f3c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f3c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f3c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1225f3cc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f3ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f3d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f3d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1225f3d8 jmp 0x1225f440 */
  goto L_1225f440;
L_1225f3da:;
  /* 1225f3da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f3dd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f3e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225f3e4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f3e7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f3ea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1225f3ed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225f3ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f3f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f3f5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1225f3f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225f3fa jne 0x1225f417 */
  if (!C.zf) goto L_1225f417;
  /* 1225f3fc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f3ff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f402 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225f407 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225f409 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f40c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f40f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225f411 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f414 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1225f417:;
  /* 1225f417 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f41a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f41d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225f422 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225f424 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f427 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f42a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1225f431 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f433 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f436 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f439 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1225f440:;
  /* 1225f440 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f444 je 0x1225f45a */
  if (C.zf) goto L_1225f45a;
  /* 1225f446 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225f44c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1225f44e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f451 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f454 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225f457 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1225f45a:;
  /* 1225f45a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f45d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f460 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1225f463 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f466 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f469 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f46c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1225f46e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f471 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f474 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f477 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f47a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1225f47d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f480 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225f482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f485 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1225f487 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f48a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f48d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1225f48f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225f491 jne 0x1225f4b3 */
  if (!C.zf) goto L_1225f4b3;
  /* 1225f493 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f496 cmp eax, dword ptr [0x12288120] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12288120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f49c jne 0x1225f4b3 */
  if (!C.zf) goto L_1225f4b3;
  /* 1225f49e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f4a1 cmp ecx, dword ptr [0x12288118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12288118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f4a7 jne 0x1225f4b3 */
  if (!C.zf) goto L_1225f4b3;
  /* 1225f4a9 mov dword ptr [0x12288120], 0 */
  w32((uint32_t)(0x12288120), (0x0u));
L_1225f4b3:;
  /* 1225f4b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1225f4b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f4b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1225f4bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f4be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1225f4c1:;
  /* 1225f4c1 pop esi */
  ESI = (pop32());
  /* 1225f4c2 mov esp, ebp */
  ESP = (EBP);
  /* 1225f4c4 pop ebp */
  EBP = (pop32());
  /* 1225f4c5 ret  */
  ESPCHK(0x1225ef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x1225f4d0 (271 bytes, 78 insns) */
void f_1225f4d0(void) {
  FTRACE(0x1225f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1225f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1225f4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1225f4d4 mov eax, dword ptr [0x12288124] */
  EAX = (r32((uint32_t)(0x12288124)));
  /* 1225f4d9 cmp eax, dword ptr [0x12288108] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12288108))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f4df jne 0x1225f52b */
  if (!C.zf) goto L_1225f52b;
  /* 1225f4e1 mov ecx, dword ptr [0x12288108] */
  ECX = (r32((uint32_t)(0x12288108)));
  /* 1225f4e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f4ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225f4ed push ecx */
  push32((uint32_t)(ECX));
  /* 1225f4ee mov edx, dword ptr [0x12288128] */
  EDX = (r32((uint32_t)(0x12288128)));
  /* 1225f4f4 push edx */
  push32((uint32_t)(EDX));
  /* 1225f4f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1225f4f7 mov eax, dword ptr [0x1228812c] */
  EAX = (r32((uint32_t)(0x1228812c)));
  /* 1225f4fc push eax */
  push32((uint32_t)(EAX));
  /* 1225f4fd call dword ptr [0x12289340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289340))), 0x1225f503u);
  /* 1225f503 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1225f506 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f50a jne 0x1225f513 */
  if (!C.zf) goto L_1225f513;
  /* 1225f50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f50e jmp 0x1225f5db */
  goto L_1225f5db;
L_1225f513:;
  /* 1225f513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f516 mov dword ptr [0x12288128], ecx */
  w32((uint32_t)(0x12288128), (ECX));
  /* 1225f51c mov edx, dword ptr [0x12288108] */
  EDX = (r32((uint32_t)(0x12288108)));
  /* 1225f522 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f525 mov dword ptr [0x12288108], edx */
  w32((uint32_t)(0x12288108), (EDX));
L_1225f52b:;
  /* 1225f52b mov eax, dword ptr [0x12288124] */
  EAX = (r32((uint32_t)(0x12288124)));
  /* 1225f530 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225f533 mov ecx, dword ptr [0x12288128] */
  ECX = (r32((uint32_t)(0x12288128)));
  /* 1225f539 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f53b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1225f53e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1225f543 push 8 */
  push32((uint32_t)(0x8u));
  /* 1225f545 mov edx, dword ptr [0x1228812c] */
  EDX = (r32((uint32_t)(0x1228812c)));
  /* 1225f54b push edx */
  push32((uint32_t)(EDX));
  /* 1225f54c call dword ptr [0x12289344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289344))), 0x1225f552u);
  /* 1225f552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f555 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1225f558 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f55b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f55f jne 0x1225f565 */
  if (!C.zf) goto L_1225f565;
  /* 1225f561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f563 jmp 0x1225f5db */
  goto L_1225f5db;
L_1225f565:;
  /* 1225f565 push 4 */
  push32((uint32_t)(0x4u));
  /* 1225f567 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1225f56c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1225f571 push 0 */
  push32((uint32_t)(0x0u));
  /* 1225f573 call dword ptr [0x1228933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228933c))), 0x1225f579u);
  /* 1225f579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f57c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1225f57f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f582 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f586 jne 0x1225f5a2 */
  if (!C.zf) goto L_1225f5a2;
  /* 1225f588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f58b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225f58e push ecx */
  push32((uint32_t)(ECX));
  /* 1225f58f push 0 */
  push32((uint32_t)(0x0u));
  /* 1225f591 mov edx, dword ptr [0x1228812c] */
  EDX = (r32((uint32_t)(0x1228812c)));
  /* 1225f597 push edx */
  push32((uint32_t)(EDX));
  /* 1225f598 call dword ptr [0x12289364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289364))), 0x1225f59eu);
  /* 1225f59e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f5a0 jmp 0x1225f5db */
  goto L_1225f5db;
L_1225f5a2:;
  /* 1225f5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f5a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1225f5ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f5ae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1225f5b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f5b8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1225f5bf mov eax, dword ptr [0x12288124] */
  EAX = (r32((uint32_t)(0x12288124)));
  /* 1225f5c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f5c7 mov dword ptr [0x12288124], eax */
  w32((uint32_t)(0x12288124), (EAX));
  /* 1225f5cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f5cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1225f5d2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1225f5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1225f5db:;
  /* 1225f5db mov esp, ebp */
  ESP = (EBP);
  /* 1225f5dd pop ebp */
  EBP = (pop32());
  /* 1225f5de ret  */
  ESPCHK(0x1225f4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x1225f5e0 (494 bytes, 149 insns) */
void f_1225f5e0(void) {
  FTRACE(0x1225f5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225f5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1225f5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1225f5e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f5e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f5e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225f5ec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1225f5ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f5f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1225f5f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1225f5f8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1225f5ff:;
  /* 1225f5ff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f603 jl 0x1225f618 */
  if ((C.sf!=C.of)) goto L_1225f618;
  /* 1225f605 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225f608 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1225f60a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1225f60d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f610 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f613 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1225f616 jmp 0x1225f5ff */
  goto L_1225f5ff;
L_1225f618:;
  /* 1225f618 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f61b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225f621 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f624 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1225f62b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1225f62e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1225f635 jmp 0x1225f640 */
  goto L_1225f640;
L_1225f637:;
  /* 1225f637 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f63a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f63d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1225f640:;
  /* 1225f640 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f644 jge 0x1225f666 */
  if ((C.sf==C.of)) goto L_1225f666;
  /* 1225f646 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f649 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225f64c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1225f64f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1225f652 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f655 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f658 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1225f65b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f65e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f661 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1225f664 jmp 0x1225f637 */
  goto L_1225f637;
L_1225f666:;
  /* 1225f666 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f669 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1225f66c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f66f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1225f672 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f674 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1225f677 push 4 */
  push32((uint32_t)(0x4u));
  /* 1225f679 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1225f67e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1225f683 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f686 push edx */
  push32((uint32_t)(EDX));
  /* 1225f687 call dword ptr [0x1228933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228933c))), 0x1225f68du);
  /* 1225f68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1225f68f jne 0x1225f699 */
  if (!C.zf) goto L_1225f699;
  /* 1225f691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1225f694 jmp 0x1225f7ca */
  goto L_1225f7ca;
L_1225f699:;
  /* 1225f699 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f69c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f6a1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1225f6a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f6a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1225f6aa jmp 0x1225f6b8 */
  goto L_1225f6b8;
L_1225f6ac:;
  /* 1225f6ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f6af add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f6b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1225f6b8:;
  /* 1225f6b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f6bb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f6be ja 0x1225f71d */
  if ((!C.cf&&!C.zf)) goto L_1225f71d;
  /* 1225f6c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f6c3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1225f6ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f6cd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1225f6d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f6da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f6dd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1225f6e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f6e3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1225f6e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f6ec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f6f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f6f5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1225f6f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f6fb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f701 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f704 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1225f707 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f70a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f70f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1225f712 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225f715 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1225f71b jmp 0x1225f6ac */
  goto L_1225f6ac;
L_1225f71d:;
  /* 1225f71d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225f720 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f726 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1225f729 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f72c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f72f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f732 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1225f735 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f738 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225f73b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1225f73e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f741 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f744 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1225f747 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225f74a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f74d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f750 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1225f753 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f756 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1225f759 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1225f75c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f75f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f762 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1225f765 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f768 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f76b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1225f773 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f776 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f779 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1225f784 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f787 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1225f78b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f78e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1225f791 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225f794 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f797 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1225f79a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225f79c jne 0x1225f7ad */
  if (!C.zf) goto L_1225f7ad;
  /* 1225f79e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f7a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f7a4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1225f7a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f7aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1225f7ad:;
  /* 1225f7ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225f7b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f7b5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225f7b7 not edx */
  EDX = (~(EDX));
  /* 1225f7b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f7bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1225f7bf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225f7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f7c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1225f7c7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1225f7ca:;
  /* 1225f7ca mov esp, ebp */
  ESP = (EBP);
  /* 1225f7cc pop ebp */
  EBP = (pop32());
  /* 1225f7cd ret  */
  ESPCHK(0x1225f5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x1225f7d0 (1515 bytes, 489 insns) */
void f_1225f7d0(void) {
  FTRACE(0x1225f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1225f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1225f7d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f7d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1225f7d9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f7dc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1225f7de mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1225f7e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f7e4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1225f7e7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1225f7ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f7ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1225f7f0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f7f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1225f7f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225f7f9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1225f7fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1225f7ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f802 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225f808 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f80b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1225f812 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1225f815 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1225f818 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f81b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1225f81e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f821 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1225f823 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f826 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1225f829 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f82c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f82f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1225f832 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f835 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1225f837 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1225f83a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225f83d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f840 jle 0x1225faf6 */
  if ((C.zf||C.sf!=C.of)) goto L_1225faf6;
  /* 1225f846 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f849 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1225f84c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225f84e jne 0x1225f85b */
  if (!C.zf) goto L_1225f85b;
  /* 1225f850 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f853 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f856 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f859 jle 0x1225f862 */
  if ((C.zf||C.sf!=C.of)) goto L_1225f862;
L_1225f85b:;
  /* 1225f85b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f85d jmp 0x1225fdb7 */
  goto L_1225fdb7;
L_1225f862:;
  /* 1225f862 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f865 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1225f868 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f86b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1225f86e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f872 jbe 0x1225f87b */
  if ((C.cf||C.zf)) goto L_1225f87b;
  /* 1225f874 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1225f87b:;
  /* 1225f87b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f87e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f881 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f884 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f887 jne 0x1225f95d */
  if (!C.zf) goto L_1225f95d;
  /* 1225f88d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f891 jae 0x1225f8f2 */
  if (!C.cf) goto L_1225f8f2;
  /* 1225f893 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225f898 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f89b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225f89d not edx */
  EDX = (~(EDX));
  /* 1225f89f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f8a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f8a5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1225f8a9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225f8ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f8ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f8b1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1225f8b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f8b8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f8bb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225f8be sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225f8c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f8c4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f8c7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1225f8ca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f8cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f8d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225f8d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225f8d6 jne 0x1225f8f0 */
  if (!C.zf) goto L_1225f8f0;
  /* 1225f8d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225f8dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f8e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225f8e2 not edx */
  EDX = (~(EDX));
  /* 1225f8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f8e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225f8e9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225f8eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f8ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1225f8f0:;
  /* 1225f8f0 jmp 0x1225f95d */
  goto L_1225f95d;
L_1225f8f2:;
  /* 1225f8f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f8f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f8f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225f8fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225f8ff not eax */
  EAX = (~(EAX));
  /* 1225f901 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f904 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f907 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1225f90e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225f910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225f913 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f916 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1225f91d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f920 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f923 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1225f926 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225f929 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f92c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f92f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1225f932 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225f935 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f938 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225f93c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225f93e jne 0x1225f95d */
  if (!C.zf) goto L_1225f95d;
  /* 1225f940 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f943 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f946 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225f94b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225f94d not eax */
  EAX = (~(EAX));
  /* 1225f94f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f952 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f955 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225f957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225f95a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1225f95d:;
  /* 1225f95d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f960 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1225f963 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f966 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225f969 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1225f96c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f96f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225f972 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f975 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1225f978 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1225f97b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225f97e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f981 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f984 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1225f987 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f98b jle 0x1225fad7 */
  if ((C.zf||C.sf!=C.of)) goto L_1225fad7;
  /* 1225f991 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225f994 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225f997 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1225f99a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225f99d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1225f9a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225f9a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1225f9a6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f9aa jbe 0x1225f9b3 */
  if ((C.cf||C.zf)) goto L_1225f9b3;
  /* 1225f9ac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1225f9b3:;
  /* 1225f9b3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225f9b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225f9b9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1225f9bc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1225f9bf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f9c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f9c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f9c8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1225f9cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f9ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f9d1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1225f9d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225f9d7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f9da mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1225f9dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f9e0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f9e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f9e6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1225f9e9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f9ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225f9ef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225f9f2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f9f5 jne 0x1225fac3 */
  if (!C.zf) goto L_1225fac3;
  /* 1225f9fb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225f9ff jae 0x1225fa5c */
  if (!C.cf) goto L_1225fa5c;
  /* 1225fa01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa04 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fa07 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225fa0b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa0e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fa11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225fa14 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225fa17 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa1a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fa1d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1225fa20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225fa22 jne 0x1225fa3a */
  if (!C.zf) goto L_1225fa3a;
  /* 1225fa24 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225fa29 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fa2c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225fa2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fa31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225fa33 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225fa35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fa38 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1225fa3a:;
  /* 1225fa3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225fa3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fa42 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225fa44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fa47 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa4a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1225fa4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225fa50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fa53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa56 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1225fa5a jmp 0x1225fac3 */
  goto L_1225fac3;
L_1225fa5c:;
  /* 1225fa5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa5f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fa62 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225fa66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa69 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fa6c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225fa6f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225fa72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fa75 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fa78 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1225fa7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225fa7d jne 0x1225fa9a */
  if (!C.zf) goto L_1225fa9a;
  /* 1225fa7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fa82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fa85 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225fa8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225fa8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fa8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225fa92 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225fa94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fa97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1225fa9a:;
  /* 1225fa9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fa9d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225faa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225faa5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225faa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225faaa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225faad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1225fab4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225fab6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fab9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fabc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1225fac3:;
  /* 1225fac3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225fac6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225fac9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1225facb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225face add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fad1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225fad4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1225fad7:;
  /* 1225fad7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225fada add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fadd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fae0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1225fae2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225fae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fae8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225faeb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225faee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1225faf1 jmp 0x1225fdb2 */
  goto L_1225fdb2;
L_1225faf6:;
  /* 1225faf6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225faf9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fafc jge 0x1225fdb2 */
  if ((C.sf==C.of)) goto L_1225fdb2;
  /* 1225fb02 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225fb05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fb08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fb0b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1225fb0d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1225fb10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fb13 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fb16 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fb19 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1225fb1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fb1f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fb22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1225fb25 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225fb28 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fb2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1225fb2e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225fb31 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1225fb34 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fb37 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1225fb3a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fb3e jbe 0x1225fb47 */
  if ((C.cf||C.zf)) goto L_1225fb47;
  /* 1225fb40 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1225fb47:;
  /* 1225fb47 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225fb4a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1225fb4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225fb4f jne 0x1225fc90 */
  if (!C.zf) goto L_1225fc90;
  /* 1225fb55 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1225fb58 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1225fb5b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fb5e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1225fb61 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fb65 jbe 0x1225fb6e */
  if ((C.cf||C.zf)) goto L_1225fb6e;
  /* 1225fb67 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1225fb6e:;
  /* 1225fb6e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225fb71 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225fb74 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225fb77 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fb7a jne 0x1225fc50 */
  if (!C.zf) goto L_1225fc50;
  /* 1225fb80 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fb84 jae 0x1225fbe5 */
  if (!C.cf) goto L_1225fbe5;
  /* 1225fb86 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225fb8b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fb8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225fb90 not edx */
  EDX = (~(EDX));
  /* 1225fb92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fb95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fb98 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1225fb9c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225fb9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fba1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fba4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1225fba8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fbab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fbae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1225fbb1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225fbb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fbb7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fbba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1225fbbd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fbc0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fbc3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225fbc7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225fbc9 jne 0x1225fbe3 */
  if (!C.zf) goto L_1225fbe3;
  /* 1225fbcb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225fbd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fbd3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225fbd5 not edx */
  EDX = (~(EDX));
  /* 1225fbd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fbda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1225fbdc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225fbde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fbe1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1225fbe3:;
  /* 1225fbe3 jmp 0x1225fc50 */
  goto L_1225fc50;
L_1225fbe5:;
  /* 1225fbe5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fbe8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fbeb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225fbf0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225fbf2 not eax */
  EAX = (~(EAX));
  /* 1225fbf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fbf7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fbfa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1225fc01 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1225fc03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fc06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fc09 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1225fc10 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fc13 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fc16 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1225fc19 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225fc1c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fc1f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fc22 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1225fc25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fc28 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fc2b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1225fc2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1225fc31 jne 0x1225fc50 */
  if (!C.zf) goto L_1225fc50;
  /* 1225fc33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1225fc36 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fc39 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225fc3e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225fc40 not eax */
  EAX = (~(EAX));
  /* 1225fc42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fc45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225fc48 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225fc4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fc4d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1225fc50:;
  /* 1225fc50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225fc53 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1225fc56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225fc59 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225fc5c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1225fc5f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225fc62 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225fc65 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1225fc68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1225fc6b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1225fc6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225fc71 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fc74 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1225fc77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225fc7a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1225fc7d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fc80 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1225fc83 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fc87 jbe 0x1225fc90 */
  if ((C.cf||C.zf)) goto L_1225fc90;
  /* 1225fc89 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1225fc90:;
  /* 1225fc90 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225fc93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1225fc96 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1225fc99 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1225fc9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fc9f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225fca2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225fca5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1225fca8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fcab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225fcae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1225fcb1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1225fcb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fcb7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1225fcba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fcbd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225fcc0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fcc3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1225fcc6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fcc9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fccc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1225fccf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fcd2 jne 0x1225fd9e */
  if (!C.zf) goto L_1225fd9e;
  /* 1225fcd8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fcdc jae 0x1225fd38 */
  if (!C.cf) goto L_1225fd38;
  /* 1225fcde mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fce1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fce4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225fce8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fceb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fcee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1225fcf1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225fcf3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fcf6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fcf9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1225fcfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225fcfe jne 0x1225fd16 */
  if (!C.zf) goto L_1225fd16;
  /* 1225fd00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225fd05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225fd08 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225fd0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fd0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1225fd0f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225fd11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fd14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1225fd16:;
  /* 1225fd16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225fd1b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225fd1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225fd20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fd23 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fd26 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1225fd2a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225fd2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fd2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fd32 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1225fd36 jmp 0x1225fd9e */
  goto L_1225fd9e;
L_1225fd38:;
  /* 1225fd38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fd3b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fd3e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1225fd42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fd45 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fd48 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1225fd4b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1225fd4d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fd50 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fd53 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1225fd56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225fd58 jne 0x1225fd75 */
  if (!C.zf) goto L_1225fd75;
  /* 1225fd5a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225fd5d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fd60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1225fd65 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1225fd67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fd6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1225fd6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1225fd6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1225fd72 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1225fd75:;
  /* 1225fd75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1225fd78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fd7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225fd80 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225fd82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fd85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fd88 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1225fd8f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1225fd91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fd94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1225fd97 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1225fd9e:;
  /* 1225fd9e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fda1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225fda4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1225fda6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1225fda9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fdac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1225fdaf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1225fdb2:;
  /* 1225fdb2 mov eax, 1 */
  EAX = (0x1u);
L_1225fdb7:;
  /* 1225fdb7 mov esp, ebp */
  ESP = (EBP);
  /* 1225fdb9 pop ebp */
  EBP = (pop32());
  /* 1225fdba ret  */
  ESPCHK(0x1225f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdc0 @ 0x1225fdc0 (304 bytes, 79 insns) */
void f_1225fdc0(void) {
  FTRACE(0x1225fdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225fdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1225fdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1225fdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1225fdc4 cmp dword ptr [0x12288120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12288120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fdcb je 0x1225feec */
  if (C.zf) goto L_1225feec;
  /* 1225fdd1 mov eax, dword ptr [0x12288118] */
  EAX = (r32((uint32_t)(0x12288118)));
  /* 1225fdd6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1225fdd9 mov ecx, dword ptr [0x12288120] */
  ECX = (r32((uint32_t)(0x12288120)));
  /* 1225fddf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1225fde2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fde4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1225fde7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1225fdec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1225fdf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1225fdf4 push eax */
  push32((uint32_t)(EAX));
  /* 1225fdf5 call dword ptr [0x12289360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289360))), 0x1225fdfbu);
  /* 1225fdfb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1225fe00 mov ecx, dword ptr [0x12288118] */
  ECX = (r32((uint32_t)(0x12288118)));
  /* 1225fe06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1225fe08 mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225fe0d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1225fe10 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1225fe12 mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225fe18 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1225fe1b mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225fe20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225fe23 mov edx, dword ptr [0x12288118] */
  EDX = (r32((uint32_t)(0x12288118)));
  /* 1225fe29 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1225fe34 mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225fe39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225fe3c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1225fe3f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1225fe42 mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225fe47 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225fe4a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1225fe4d mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225fe53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1225fe56 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1225fe5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1225fe5c jne 0x1225fe72 */
  if (!C.zf) goto L_1225fe72;
  /* 1225fe5e mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225fe64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1225fe67 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1225fe69 mov ecx, dword ptr [0x12288120] */
  ECX = (r32((uint32_t)(0x12288120)));
  /* 1225fe6f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1225fe72:;
  /* 1225fe72 mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225fe78 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fe7c jne 0x1225fee2 */
  if (!C.zf) goto L_1225fee2;
  /* 1225fe7e cmp dword ptr [0x12288124], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12288124))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225fe85 jle 0x1225fee2 */
  if ((C.zf||C.sf!=C.of)) goto L_1225fee2;
  /* 1225fe87 mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225fe8c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1225fe8f push ecx */
  push32((uint32_t)(ECX));
  /* 1225fe90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1225fe92 mov edx, dword ptr [0x1228812c] */
  EDX = (r32((uint32_t)(0x1228812c)));
  /* 1225fe98 push edx */
  push32((uint32_t)(EDX));
  /* 1225fe99 call dword ptr [0x12289364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289364))), 0x1225fe9fu);
  /* 1225fe9f mov eax, dword ptr [0x12288124] */
  EAX = (r32((uint32_t)(0x12288124)));
  /* 1225fea4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225fea7 mov ecx, dword ptr [0x12288128] */
  ECX = (r32((uint32_t)(0x12288128)));
  /* 1225fead add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225feaf mov edx, dword ptr [0x12288120] */
  EDX = (r32((uint32_t)(0x12288120)));
  /* 1225feb5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225feb8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225feba push ecx */
  push32((uint32_t)(ECX));
  /* 1225febb mov eax, dword ptr [0x12288120] */
  EAX = (r32((uint32_t)(0x12288120)));
  /* 1225fec0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fec3 push eax */
  push32((uint32_t)(EAX));
  /* 1225fec4 mov ecx, dword ptr [0x12288120] */
  ECX = (r32((uint32_t)(0x12288120)));
  /* 1225feca push ecx */
  push32((uint32_t)(ECX));
  /* 1225fecb call 0x122624f0 */
  push32(0x1225fed0u); f_122624f0();
  /* 1225fed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1225fed3 mov edx, dword ptr [0x12288124] */
  EDX = (r32((uint32_t)(0x12288124)));
  /* 1225fed9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fedc mov dword ptr [0x12288124], edx */
  w32((uint32_t)(0x12288124), (EDX));
L_1225fee2:;
  /* 1225fee2 mov dword ptr [0x12288120], 0 */
  w32((uint32_t)(0x12288120), (0x0u));
L_1225feec:;
  /* 1225feec mov esp, ebp */
  ESP = (EBP);
  /* 1225feee pop ebp */
  EBP = (pop32());
  /* 1225feef ret  */
  ESPCHK(0x1225fdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fef0 @ 0x1225fef0 (1565 bytes, 343 insns) */
void f_1225fef0(void) {
  FTRACE(0x1225fef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1225fef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1225fef1 mov ebp, esp */
  EBP = (ESP);
  /* 1225fef3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1225fef9 mov eax, dword ptr [0x12288124] */
  EAX = (r32((uint32_t)(0x12288124)));
  /* 1225fefe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1225ff01 push eax */
  push32((uint32_t)(EAX));
  /* 1225ff02 mov ecx, dword ptr [0x12288128] */
  ECX = (r32((uint32_t)(0x12288128)));
  /* 1225ff08 push ecx */
  push32((uint32_t)(ECX));
  /* 1225ff09 call dword ptr [0x1228938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228938c))), 0x1225ff0fu);
  /* 1225ff0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1225ff11 je 0x1225ff1b */
  if (C.zf) goto L_1225ff1b;
  /* 1225ff13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1225ff16 jmp 0x12260509 */
  goto L_12260509;
L_1225ff1b:;
  /* 1225ff1b mov edx, dword ptr [0x12288128] */
  EDX = (r32((uint32_t)(0x12288128)));
  /* 1225ff21 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1225ff27 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1225ff31 jmp 0x1225ff42 */
  goto L_1225ff42;
L_1225ff33:;
  /* 1225ff33 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1225ff39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ff3c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1225ff42:;
  /* 1225ff42 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1225ff48 cmp ecx, dword ptr [0x12288124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12288124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ff4e jge 0x12260507 */
  if ((C.sf==C.of)) goto L_12260507;
  /* 1225ff54 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1225ff5a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1225ff5d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1225ff63 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1225ff68 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1225ff6e push ecx */
  push32((uint32_t)(ECX));
  /* 1225ff6f call dword ptr [0x1228938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228938c))), 0x1225ff75u);
  /* 1225ff75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1225ff77 je 0x1225ff83 */
  if (C.zf) goto L_1225ff83;
  /* 1225ff79 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1225ff7e jmp 0x12260509 */
  goto L_12260509;
L_1225ff83:;
  /* 1225ff83 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1225ff89 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1225ff8c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1225ff92 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1225ff98 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ff9e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1225ffa1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1225ffa7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1225ffaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1225ffad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1225ffb7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1225ffc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1225ffc8 jmp 0x1225ffd3 */
  goto L_1225ffd3;
L_1225ffca:;
  /* 1225ffca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1225ffcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1225ffd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1225ffd3:;
  /* 1225ffd3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1225ffd7 jge 0x122604cb */
  if ((C.sf==C.of)) goto L_122604cb;
  /* 1225ffdd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1225ffe7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1225fff1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1225fffb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12260005 jmp 0x12260016 */
  goto L_12260016;
L_12260007:;
  /* 12260007 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1226000d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260010 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12260016:;
  /* 12260016 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226001d jge 0x12260032 */
  if ((C.sf==C.of)) goto L_12260032;
  /* 1226001f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12260025 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12260030 jmp 0x12260007 */
  goto L_12260007;
L_12260032:;
  /* 12260032 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260036 jl 0x1226046d */
  if ((C.sf!=C.of)) goto L_1226046d;
  /* 1226003c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12260041 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12260047 push ecx */
  push32((uint32_t)(ECX));
  /* 12260048 call dword ptr [0x1228938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228938c))), 0x1226004eu);
  /* 1226004e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12260050 je 0x1226005c */
  if (C.zf) goto L_1226005c;
  /* 12260052 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12260057 jmp 0x12260509 */
  goto L_12260509;
L_1226005c:;
  /* 1226005c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12260062 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12260065 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1226006f jmp 0x12260080 */
  goto L_12260080;
L_12260071:;
  /* 12260071 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12260077 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226007a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12260080:;
  /* 12260080 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260087 jge 0x12260204 */
  if ((C.sf==C.of)) goto L_12260204;
  /* 1226008d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12260090 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260093 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12260099 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1226009f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122600a5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 122600ab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 122600b1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122600b5 jne 0x122600c2 */
  if (!C.zf) goto L_122600c2;
  /* 122600b7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 122600bd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122600c0 je 0x122600cc */
  if (C.zf) goto L_122600cc;
L_122600c2:;
  /* 122600c2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 122600c7 jmp 0x12260509 */
  goto L_12260509;
L_122600cc:;
  /* 122600cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 122600d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122600d4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 122600da mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 122600e0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 122600e6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 122600ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122600ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122600f1 je 0x12260129 */
  if (C.zf) goto L_12260129;
  /* 122600f3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 122600f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122600fc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12260102 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226010c jle 0x12260118 */
  if ((C.zf||C.sf!=C.of)) goto L_12260118;
  /* 1226010e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12260113 jmp 0x12260509 */
  goto L_12260509;
L_12260118:;
  /* 12260118 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1226011e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260121 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12260127 jmp 0x1226016b */
  goto L_1226016b;
L_12260129:;
  /* 12260129 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1226012f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12260132 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260135 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1226013b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260142 jle 0x1226014e */
  if ((C.zf||C.sf!=C.of)) goto L_1226014e;
  /* 12260144 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1226014e:;
  /* 1226014e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12260154 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1226015b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226015e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12260164 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1226016b:;
  /* 1226016b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260172 jl 0x1226018d */
  if ((C.sf!=C.of)) goto L_1226018d;
  /* 12260174 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1226017a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1226017d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226017f jne 0x1226018d */
  if (!C.zf) goto L_1226018d;
  /* 12260181 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226018b jle 0x12260197 */
  if ((C.zf||C.sf!=C.of)) goto L_12260197;
L_1226018d:;
  /* 1226018d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12260192 jmp 0x12260509 */
  goto L_12260509;
L_12260197:;
  /* 12260197 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1226019d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122601a3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 122601a6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122601ac je 0x122601b8 */
  if (C.zf) goto L_122601b8;
  /* 122601ae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 122601b3 jmp 0x12260509 */
  goto L_12260509;
L_122601b8:;
  /* 122601b8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 122601be add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122601c4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 122601ca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 122601d0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122601d6 jb 0x122600cc */
  if (C.cf) goto L_122600cc;
  /* 122601dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 122601e2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122601e8 je 0x122601f4 */
  if (C.zf) goto L_122601f4;
  /* 122601ea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 122601ef jmp 0x12260509 */
  goto L_12260509;
L_122601f4:;
  /* 122601f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122601f7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122601fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122601ff jmp 0x12260071 */
  goto L_12260071;
L_12260204:;
  /* 12260204 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12260207 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12260209 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226020f je 0x1226021b */
  if (C.zf) goto L_1226021b;
  /* 12260211 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12260216 jmp 0x12260509 */
  goto L_12260509;
L_1226021b:;
  /* 1226021b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226021e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12260224 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1226022b jmp 0x12260236 */
  goto L_12260236;
L_1226022d:;
  /* 1226022d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12260230 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260233 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12260236:;
  /* 12260236 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226023a jge 0x1226046d */
  if ((C.sf==C.of)) goto L_1226046d;
  /* 12260240 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1226024a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12260250 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12260256:;
  /* 12260256 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1226025c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1226025f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12260265 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1226026b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260271 je 0x1226039a */
  if (C.zf) goto L_1226039a;
  /* 12260277 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226027a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12260280 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260287 je 0x1226039a */
  if (C.zf) goto L_1226039a;
  /* 1226028d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12260293 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260299 jb 0x122602ae */
  if (C.cf) goto L_122602ae;
  /* 1226029b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 122602a1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122602a6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122602ac jb 0x122602b8 */
  if (C.cf) goto L_122602b8;
L_122602ae:;
  /* 122602ae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 122602b3 jmp 0x12260509 */
  goto L_12260509;
L_122602b8:;
  /* 122602b8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 122602be and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 122602c4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 122602ca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 122602d0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122602d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122602d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122602d9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122602de mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_122602e4:;
  /* 122602e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122602e7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122602ed je 0x1226030e */
  if (C.zf) goto L_1226030e;
  /* 122602ef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122602f2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122602f8 jne 0x122602fc */
  if (!C.zf) goto L_122602fc;
  /* 122602fa jmp 0x1226030e */
  goto L_1226030e;
L_122602fc:;
  /* 122602fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122602ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12260301 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12260304 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12260307 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260309 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1226030c jmp 0x122602e4 */
  goto L_122602e4;
L_1226030e:;
  /* 1226030e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12260311 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260317 jne 0x12260323 */
  if (!C.zf) goto L_12260323;
  /* 12260319 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1226031e jmp 0x12260509 */
  goto L_12260509;
L_12260323:;
  /* 12260323 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12260329 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226032b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1226032e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260331 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12260337 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226033e jle 0x1226034a */
  if ((C.zf||C.sf!=C.of)) goto L_1226034a;
  /* 12260340 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1226034a:;
  /* 1226034a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12260350 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260353 je 0x1226035f */
  if (C.zf) goto L_1226035f;
  /* 12260355 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1226035a jmp 0x12260509 */
  goto L_12260509;
L_1226035f:;
  /* 1226035f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12260365 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12260368 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226036e je 0x1226037a */
  if (C.zf) goto L_1226037a;
  /* 12260370 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12260375 jmp 0x12260509 */
  goto L_12260509;
L_1226037a:;
  /* 1226037a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12260380 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12260386 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1226038c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226038f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12260395 jmp 0x12260256 */
  goto L_12260256;
L_1226039a:;
  /* 1226039a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122603a1 je 0x12260411 */
  if (C.zf) goto L_12260411;
  /* 122603a3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122603a7 jge 0x122603db */
  if ((C.sf==C.of)) goto L_122603db;
  /* 122603a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122603ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122603b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122603b3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 122603b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122603bb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 122603c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122603c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122603c9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122603cb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 122603d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122603d3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 122603d9 jmp 0x12260411 */
  goto L_12260411;
L_122603db:;
  /* 122603db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122603de sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122603e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122603e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122603e8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 122603ee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122603f0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 122603f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122603f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122603fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12260401 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12260403 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12260409 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1226040b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12260411:;
  /* 12260411 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12260417 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1226041a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260420 jne 0x12260434 */
  if (!C.zf) goto L_12260434;
  /* 12260422 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12260425 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1226042b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260432 je 0x1226043e */
  if (C.zf) goto L_1226043e;
L_12260434:;
  /* 12260434 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12260439 jmp 0x12260509 */
  goto L_12260509;
L_1226043e:;
  /* 1226043e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12260444 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12260447 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226044d je 0x12260459 */
  if (C.zf) goto L_12260459;
  /* 1226044f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12260454 jmp 0x12260509 */
  goto L_12260509;
L_12260459:;
  /* 12260459 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1226045f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260462 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12260468 jmp 0x1226022d */
  goto L_1226022d;
L_1226046d:;
  /* 1226046d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12260470 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12260476 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1226047c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260480 jne 0x1226049a */
  if (!C.zf) goto L_1226049a;
  /* 12260482 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12260485 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1226048b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12260491 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260498 je 0x122604a1 */
  if (C.zf) goto L_122604a1;
L_1226049a:;
  /* 1226049a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1226049f jmp 0x12260509 */
  goto L_12260509;
L_122604a1:;
  /* 122604a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 122604a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122604ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 122604b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122604b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122604bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122604be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122604c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122604c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122604c6 jmp 0x1225ffca */
  goto L_1225ffca;
L_122604cb:;
  /* 122604cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122604d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 122604d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122604d9 jne 0x122604ec */
  if (!C.zf) goto L_122604ec;
  /* 122604db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122604e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 122604e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122604ea je 0x122604f3 */
  if (C.zf) goto L_122604f3;
L_122604ec:;
  /* 122604ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 122604f1 jmp 0x12260509 */
  goto L_12260509;
L_122604f3:;
  /* 122604f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 122604f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122604fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12260502 jmp 0x1225ff33 */
  goto L_1225ff33;
L_12260507:;
  /* 12260507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12260509:;
  /* 12260509 mov esp, ebp */
  ESP = (EBP);
  /* 1226050b pop ebp */
  EBP = (pop32());
  /* 1226050c ret  */
  ESPCHK(0x1225fef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010510 @ 0x12260510 (250 bytes, 92 insns) */
void f_12260510(void) {
  FTRACE(0x12260510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260510 push ebp */
  push32((uint32_t)(EBP));
  /* 12260511 mov ebp, esp */
  EBP = (ESP);
  /* 12260513 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260516 push ebx */
  push32((uint32_t)(EBX));
  /* 12260517 push esi */
  push32((uint32_t)(ESI));
  /* 12260518 push edi */
  push32((uint32_t)(EDI));
  /* 12260519 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1226051c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1226051f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12260522 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12260525:;
  /* 12260525 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260529 jne 0x12260549 */
  if (!C.zf) goto L_12260549;
  /* 1226052b push 0x122822a8 */
  push32((uint32_t)(0x122822a8u));
  /* 12260530 push 0 */
  push32((uint32_t)(0x0u));
  /* 12260532 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12260534 push 0x1228229c */
  push32((uint32_t)(0x1228229cu));
  /* 12260539 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226053b call 0x122596c0 */
  push32(0x12260540u); f_122596c0();
  /* 12260540 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260543 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260546 jne 0x12260549 */
  if (!C.zf) goto L_12260549;
  /* 12260548 int3  */
  x86_unimpl("int3 @ 0x12260548");
L_12260549:;
  /* 12260549 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226054b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226054d jne 0x12260525 */
  if (!C.zf) goto L_12260525;
L_1226054f:;
  /* 1226054f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260553 jne 0x12260573 */
  if (!C.zf) goto L_12260573;
  /* 12260555 push 0x1228228c */
  push32((uint32_t)(0x1228228cu));
  /* 1226055a push 0 */
  push32((uint32_t)(0x0u));
  /* 1226055c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1226055e push 0x1228229c */
  push32((uint32_t)(0x1228229cu));
  /* 12260563 push 2 */
  push32((uint32_t)(0x2u));
  /* 12260565 call 0x122596c0 */
  push32(0x1226056au); f_122596c0();
  /* 1226056a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226056d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260570 jne 0x12260573 */
  if (!C.zf) goto L_12260573;
  /* 12260572 int3  */
  x86_unimpl("int3 @ 0x12260572");
L_12260573:;
  /* 12260573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12260575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12260577 jne 0x1226054f */
  if (!C.zf) goto L_1226054f;
  /* 12260579 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226057c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12260583 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12260589 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1226058c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226058f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12260592 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12260594 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260597 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1226059e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122605a1 push ecx */
  push32((uint32_t)(ECX));
  /* 122605a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122605a5 push edx */
  push32((uint32_t)(EDX));
  /* 122605a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605a9 push eax */
  push32((uint32_t)(EAX));
  /* 122605aa call 0x12261590 */
  push32(0x122605afu); f_12261590();
  /* 122605af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122605b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122605b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605b8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122605bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122605be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122605c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605c7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122605cb jl 0x122605ef */
  if ((C.sf!=C.of)) goto L_122605ef;
  /* 122605cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122605d2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122605d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122605d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122605dd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 122605e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122605e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122605e8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122605ed jmp 0x12260600 */
  goto L_12260600;
L_122605ef:;
  /* 122605ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122605f2 push edx */
  push32((uint32_t)(EDX));
  /* 122605f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122605f5 call 0x12261310 */
  push32(0x122605fau); f_12261310();
  /* 122605fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122605fd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12260600:;
  /* 12260600 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12260603 pop edi */
  EDI = (pop32());
  /* 12260604 pop esi */
  ESI = (pop32());
  /* 12260605 pop ebx */
  EBX = (pop32());
  /* 12260606 mov esp, ebp */
  ESP = (EBP);
  /* 12260608 pop ebp */
  EBP = (pop32());
  /* 12260609 ret  */
  ESPCHK(0x12260510u, _esp0);
  ESP += 4; return;
}

/* FUN_10010610 @ 0x12260610 (183 bytes, 58 insns) */
void f_12260610(void) {
  FTRACE(0x12260610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260610 push ebp */
  push32((uint32_t)(EBP));
  /* 12260611 mov ebp, esp */
  EBP = (ESP);
  /* 12260613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12260619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226061c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260621 ja 0x1226063a */
  if ((!C.cf&&!C.zf)) goto L_1226063a;
  /* 12260623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12260626 mov edx, dword ptr [0x12284c98] */
  EDX = (r32((uint32_t)(0x12284c98)));
  /* 1226062c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226062e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12260632 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12260635 jmp 0x122606c3 */
  goto L_122606c3;
L_1226063a:;
  /* 1226063a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226063d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12260640 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12260646 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1226064c mov edx, dword ptr [0x12284c98] */
  EDX = (r32((uint32_t)(0x12284c98)));
  /* 12260652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12260654 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12260658 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1226065d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226065f je 0x12260683 */
  if (C.zf) goto L_12260683;
  /* 12260661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12260664 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12260667 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1226066d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12260670 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12260673 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12260676 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1226067a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12260681 jmp 0x12260694 */
  goto L_12260694;
L_12260683:;
  /* 12260683 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12260686 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12260689 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1226068d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12260694:;
  /* 12260694 push 1 */
  push32((uint32_t)(0x1u));
  /* 12260696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12260698 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226069a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1226069d push ecx */
  push32((uint32_t)(ECX));
  /* 1226069e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122606a1 push edx */
  push32((uint32_t)(EDX));
  /* 122606a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 122606a5 push eax */
  push32((uint32_t)(EAX));
  /* 122606a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 122606a8 call 0x12262830 */
  push32(0x122606adu); f_12262830();
  /* 122606ad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122606b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122606b2 jne 0x122606b8 */
  if (!C.zf) goto L_122606b8;
  /* 122606b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122606b6 jmp 0x122606c3 */
  goto L_122606c3;
L_122606b8:;
  /* 122606b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122606bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122606c0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_122606c3:;
  /* 122606c3 mov esp, ebp */
  ESP = (EBP);
  /* 122606c5 pop ebp */
  EBP = (pop32());
  /* 122606c6 ret  */
  ESPCHK(0x12260610u, _esp0);
  ESP += 4; return;
}

/* FUN_100106d0 @ 0x122606d0 (836 bytes, 238 insns) */
void f_122606d0(void) {
  FTRACE(0x122606d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122606d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122606d1 mov ebp, esp */
  EBP = (ESP);
  /* 122606d3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122606d6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122606d8 call 0x1225e000 */
  push32(0x122606ddu); f_1225e000();
  /* 122606dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122606e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122606e3 push eax */
  push32((uint32_t)(EAX));
  /* 122606e4 call 0x12260a20 */
  push32(0x122606e9u); f_12260a20();
  /* 122606e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122606ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122606ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122606f2 cmp ecx, dword ptr [0x12287e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12287e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122606f8 jne 0x1226070b */
  if (!C.zf) goto L_1226070b;
  /* 122606fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122606fc call 0x1225e0a0 */
  push32(0x12260701u); f_1225e0a0();
  /* 12260701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12260706 jmp 0x12260a10 */
  goto L_12260a10;
L_1226070b:;
  /* 1226070b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226070f jne 0x1226072c */
  if (!C.zf) goto L_1226072c;
  /* 12260711 call 0x12260b00 */
  push32(0x12260716u); f_12260b00();
  /* 12260716 call 0x12260b80 */
  push32(0x1226071bu); f_12260b80();
  /* 1226071b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1226071d call 0x1225e0a0 */
  push32(0x12260722u); f_1225e0a0();
  /* 12260722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260725 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12260727 jmp 0x12260a10 */
  goto L_12260a10;
L_1226072c:;
  /* 1226072c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12260733 jmp 0x1226073e */
  goto L_1226073e;
L_12260735:;
  /* 12260735 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260738 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226073b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1226073e:;
  /* 1226073e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260742 jae 0x1226088f */
  if (!C.cf) goto L_1226088f;
  /* 12260748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226074b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226074e mov ecx, dword ptr [eax + 0x12284eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12284eb8)));
  /* 12260754 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260757 jne 0x1226088a */
  if (!C.zf) goto L_1226088a;
  /* 1226075d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12260764 jmp 0x1226076f */
  goto L_1226076f;
L_12260766:;
  /* 12260766 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260769 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226076c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1226076f:;
  /* 1226076f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260776 jae 0x12260784 */
  if (!C.cf) goto L_12260784;
  /* 12260778 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226077b mov byte ptr [eax + 0x12288000], 0 */
  w8((uint32_t)(EAX + 0x12288000), (0x0u));
  /* 12260782 jmp 0x12260766 */
  goto L_12260766;
L_12260784:;
  /* 12260784 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1226078b jmp 0x12260796 */
  goto L_12260796;
L_1226078d:;
  /* 1226078d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12260790 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260793 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12260796:;
  /* 12260796 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226079a jae 0x12260817 */
  if (!C.cf) goto L_12260817;
  /* 1226079c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226079f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122607a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122607a5 lea ecx, [edx + eax*8 + 0x12284ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12284ec8));
  /* 122607ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122607af jmp 0x122607ba */
  goto L_122607ba;
L_122607b1:;
  /* 122607b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122607b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122607b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122607ba:;
  /* 122607ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122607bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122607bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122607c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122607c3 je 0x12260812 */
  if (C.zf) goto L_12260812;
  /* 122607c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122607c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122607ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122607cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122607cf je 0x12260812 */
  if (C.zf) goto L_12260812;
  /* 122607d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122607d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122607d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122607d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 122607db jmp 0x122607e6 */
  goto L_122607e6;
L_122607dd:;
  /* 122607dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122607e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122607e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122607e6:;
  /* 122607e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122607e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122607eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 122607ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122607f1 ja 0x12260810 */
  if ((!C.cf&&!C.zf)) goto L_12260810;
  /* 122607f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122607f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122607f9 mov dl, byte ptr [eax + 0x12288001] */
  DL = (r8((uint32_t)(EAX + 0x12288001)));
  /* 122607ff or dl, byte ptr [ecx + 0x12284eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12284eb0))); DL = (_r); fl_logic(_r,8); }
  /* 12260805 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260808 mov byte ptr [eax + 0x12288001], dl */
  w8((uint32_t)(EAX + 0x12288001), (DL));
  /* 1226080e jmp 0x122607dd */
  goto L_122607dd;
L_12260810:;
  /* 12260810 jmp 0x122607b1 */
  goto L_122607b1;
L_12260812:;
  /* 12260812 jmp 0x1226078d */
  goto L_1226078d;
L_12260817:;
  /* 12260817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226081a mov dword ptr [0x12287e64], ecx */
  w32((uint32_t)(0x12287e64), (ECX));
  /* 12260820 mov dword ptr [0x12287eec], 1 */
  w32((uint32_t)(0x12287eec), (0x1u));
  /* 1226082a mov edx, dword ptr [0x12287e64] */
  EDX = (r32((uint32_t)(0x12287e64)));
  /* 12260830 push edx */
  push32((uint32_t)(EDX));
  /* 12260831 call 0x12260a80 */
  push32(0x12260836u); f_12260a80();
  /* 12260836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260839 mov dword ptr [0x12288104], eax */
  w32((uint32_t)(0x12288104), (EAX));
  /* 1226083e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12260845 jmp 0x12260850 */
  goto L_12260850;
L_12260847:;
  /* 12260847 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226084a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226084d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12260850:;
  /* 12260850 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260854 jae 0x12260874 */
  if (!C.cf) goto L_12260874;
  /* 12260856 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260859 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226085c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226085f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12260862 mov cx, word ptr [ecx + eax*2 + 0x12284ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12284ebc)));
  /* 1226086a mov word ptr [edx*2 + 0x12287ee0], cx */
  w16((uint32_t)(EDX*2 + 0x12287ee0), (CX));
  /* 12260872 jmp 0x12260847 */
  goto L_12260847;
L_12260874:;
  /* 12260874 call 0x12260b80 */
  push32(0x12260879u); f_12260b80();
  /* 12260879 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1226087b call 0x1225e0a0 */
  push32(0x12260880u); f_1225e0a0();
  /* 12260880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12260885 jmp 0x12260a10 */
  goto L_12260a10;
L_1226088a:;
  /* 1226088a jmp 0x12260735 */
  goto L_12260735;
L_1226088f:;
  /* 1226088f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12260892 push edx */
  push32((uint32_t)(EDX));
  /* 12260893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12260896 push eax */
  push32((uint32_t)(EAX));
  /* 12260897 call dword ptr [0x12289338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289338))), 0x1226089du);
  /* 1226089d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122608a0 jne 0x122609e2 */
  if (!C.zf) goto L_122609e2;
  /* 122608a6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122608ad jmp 0x122608b8 */
  goto L_122608b8;
L_122608af:;
  /* 122608af mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122608b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122608b5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_122608b8:;
  /* 122608b8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122608bf jae 0x122608cd */
  if (!C.cf) goto L_122608cd;
  /* 122608c1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122608c4 mov byte ptr [edx + 0x12288000], 0 */
  w8((uint32_t)(EDX + 0x12288000), (0x0u));
  /* 122608cb jmp 0x122608af */
  goto L_122608af;
L_122608cd:;
  /* 122608cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122608d0 mov dword ptr [0x12287e64], eax */
  w32((uint32_t)(0x12287e64), (EAX));
  /* 122608d5 mov dword ptr [0x12288104], 0 */
  w32((uint32_t)(0x12288104), (0x0u));
  /* 122608df cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122608e3 jbe 0x1226099e */
  if ((C.cf||C.zf)) goto L_1226099e;
  /* 122608e9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 122608ec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 122608ef jmp 0x122608fa */
  goto L_122608fa;
L_122608f1:;
  /* 122608f1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122608f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122608f7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_122608fa:;
  /* 122608fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122608fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122608ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12260901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12260903 je 0x1226094c */
  if (C.zf) goto L_1226094c;
  /* 12260905 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12260908 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226090a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1226090d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226090f je 0x1226094c */
  if (C.zf) goto L_1226094c;
  /* 12260911 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12260914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12260916 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12260918 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1226091b jmp 0x12260926 */
  goto L_12260926;
L_1226091d:;
  /* 1226091d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260923 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12260926:;
  /* 12260926 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12260929 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226092b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1226092e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260931 ja 0x1226094a */
  if ((!C.cf&&!C.zf)) goto L_1226094a;
  /* 12260933 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260936 mov cl, byte ptr [eax + 0x12288001] */
  CL = (r8((uint32_t)(EAX + 0x12288001)));
  /* 1226093c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1226093f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260942 mov byte ptr [edx + 0x12288001], cl */
  w8((uint32_t)(EDX + 0x12288001), (CL));
  /* 12260948 jmp 0x1226091d */
  goto L_1226091d;
L_1226094a:;
  /* 1226094a jmp 0x122608f1 */
  goto L_122608f1;
L_1226094c:;
  /* 1226094c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12260953 jmp 0x1226095e */
  goto L_1226095e;
L_12260955:;
  /* 12260955 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260958 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226095b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1226095e:;
  /* 1226095e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260965 jae 0x1226097e */
  if (!C.cf) goto L_1226097e;
  /* 12260967 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226096a mov dl, byte ptr [ecx + 0x12288001] */
  DL = (r8((uint32_t)(ECX + 0x12288001)));
  /* 12260970 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12260973 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12260976 mov byte ptr [eax + 0x12288001], dl */
  w8((uint32_t)(EAX + 0x12288001), (DL));
  /* 1226097c jmp 0x12260955 */
  goto L_12260955;
L_1226097e:;
  /* 1226097e mov ecx, dword ptr [0x12287e64] */
  ECX = (r32((uint32_t)(0x12287e64)));
  /* 12260984 push ecx */
  push32((uint32_t)(ECX));
  /* 12260985 call 0x12260a80 */
  push32(0x1226098au); f_12260a80();
  /* 1226098a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226098d mov dword ptr [0x12288104], eax */
  w32((uint32_t)(0x12288104), (EAX));
  /* 12260992 mov dword ptr [0x12287eec], 1 */
  w32((uint32_t)(0x12287eec), (0x1u));
  /* 1226099c jmp 0x122609a8 */
  goto L_122609a8;
L_1226099e:;
  /* 1226099e mov dword ptr [0x12287eec], 0 */
  w32((uint32_t)(0x12287eec), (0x0u));
L_122609a8:;
  /* 122609a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122609af jmp 0x122609ba */
  goto L_122609ba;
L_122609b1:;
  /* 122609b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122609b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122609b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122609ba:;
  /* 122609ba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122609be jae 0x122609cf */
  if (!C.cf) goto L_122609cf;
  /* 122609c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122609c3 mov word ptr [eax*2 + 0x12287ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x12287ee0), (0x0u));
  /* 122609cd jmp 0x122609b1 */
  goto L_122609b1;
L_122609cf:;
  /* 122609cf call 0x12260b80 */
  push32(0x122609d4u); f_12260b80();
  /* 122609d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122609d6 call 0x1225e0a0 */
  push32(0x122609dbu); f_1225e0a0();
  /* 122609db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122609de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122609e0 jmp 0x12260a10 */
  goto L_12260a10;
L_122609e2:;
  /* 122609e2 cmp dword ptr [0x12286980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122609e9 je 0x12260a03 */
  if (C.zf) goto L_12260a03;
  /* 122609eb call 0x12260b00 */
  push32(0x122609f0u); f_12260b00();
  /* 122609f0 call 0x12260b80 */
  push32(0x122609f5u); f_12260b80();
  /* 122609f5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122609f7 call 0x1225e0a0 */
  push32(0x122609fcu); f_1225e0a0();
  /* 122609fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122609ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12260a01 jmp 0x12260a10 */
  goto L_12260a10;
L_12260a03:;
  /* 12260a03 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12260a05 call 0x1225e0a0 */
  push32(0x12260a0au); f_1225e0a0();
  /* 12260a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260a0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12260a10:;
  /* 12260a10 mov esp, ebp */
  ESP = (EBP);
  /* 12260a12 pop ebp */
  EBP = (pop32());
  /* 12260a13 ret  */
  ESPCHK(0x122606d0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12260a20 (89 bytes, 21 insns) */
void f_12260a20(void) {
  FTRACE(0x12260a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12260a21 mov ebp, esp */
  EBP = (ESP);
  /* 12260a23 mov dword ptr [0x12286980], 0 */
  w32((uint32_t)(0x12286980), (0x0u));
  /* 12260a2d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260a31 jne 0x12260a45 */
  if (!C.zf) goto L_12260a45;
  /* 12260a33 mov dword ptr [0x12286980], 1 */
  w32((uint32_t)(0x12286980), (0x1u));
  /* 12260a3d call dword ptr [0x12289330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289330))), 0x12260a43u);
  /* 12260a43 jmp 0x12260a77 */
  goto L_12260a77;
L_12260a45:;
  /* 12260a45 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260a49 jne 0x12260a5d */
  if (!C.zf) goto L_12260a5d;
  /* 12260a4b mov dword ptr [0x12286980], 1 */
  w32((uint32_t)(0x12286980), (0x1u));
  /* 12260a55 call dword ptr [0x12289334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289334))), 0x12260a5bu);
  /* 12260a5b jmp 0x12260a77 */
  goto L_12260a77;
L_12260a5d:;
  /* 12260a5d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260a61 jne 0x12260a74 */
  if (!C.zf) goto L_12260a74;
  /* 12260a63 mov dword ptr [0x12286980], 1 */
  w32((uint32_t)(0x12286980), (0x1u));
  /* 12260a6d mov eax, dword ptr [0x122869a0] */
  EAX = (r32((uint32_t)(0x122869a0)));
  /* 12260a72 jmp 0x12260a77 */
  goto L_12260a77;
L_12260a74:;
  /* 12260a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12260a77:;
  /* 12260a77 pop ebp */
  EBP = (pop32());
  /* 12260a78 ret  */
  ESPCHK(0x12260a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x12260a80 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12260a80(void) {
  FTRACE(0x12260a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12260a81 mov ebp, esp */
  EBP = (ESP);
  /* 12260a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12260a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12260a87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12260a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260a8d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260a93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12260a96 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260a9a ja 0x12260aca */
  if ((!C.cf&&!C.zf)) goto L_12260aca;
  /* 12260a9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12260aa1 mov dl, byte ptr [eax + 0x12260ae4] */
  DL = (r8((uint32_t)(EAX + 0x12260ae4)));
  /* 12260aa7 jmp dword ptr [edx*4 + 0x12260ad0] */
  switch (EDX) {
    case 0: goto L_12260aae;
    case 1: goto L_12260ab5;
    case 2: goto L_12260abc;
    case 3: goto L_12260ac3;
    case 4: goto L_12260aca;
    default: x86_unimpl("switch@0x12260aa7 out of table"); return;
  }
L_12260aae:;
  /* 12260aae mov eax, 0x411 */
  EAX = (0x411u);
  /* 12260ab3 jmp 0x12260acc */
  goto L_12260acc;
L_12260ab5:;
  /* 12260ab5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12260aba jmp 0x12260acc */
  goto L_12260acc;
L_12260abc:;
  /* 12260abc mov eax, 0x412 */
  EAX = (0x412u);
  /* 12260ac1 jmp 0x12260acc */
  goto L_12260acc;
L_12260ac3:;
  /* 12260ac3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12260ac8 jmp 0x12260acc */
  goto L_12260acc;
L_12260aca:;
  /* 12260aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12260acc:;
  /* 12260acc mov esp, ebp */
  ESP = (EBP);
  /* 12260ace pop ebp */
  EBP = (pop32());
  /* 12260acf ret  */
  ESPCHK(0x12260a80u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12260b00 (116 bytes, 29 insns) */
void f_12260b00(void) {
  FTRACE(0x12260b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12260b01 mov ebp, esp */
  EBP = (ESP);
  /* 12260b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12260b04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12260b0b jmp 0x12260b16 */
  goto L_12260b16;
L_12260b0d:;
  /* 12260b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260b10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260b13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12260b16:;
  /* 12260b16 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260b1d jge 0x12260b2b */
  if ((C.sf==C.of)) goto L_12260b2b;
  /* 12260b1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260b22 mov byte ptr [ecx + 0x12288000], 0 */
  w8((uint32_t)(ECX + 0x12288000), (0x0u));
  /* 12260b29 jmp 0x12260b0d */
  goto L_12260b0d;
L_12260b2b:;
  /* 12260b2b mov dword ptr [0x12287e64], 0 */
  w32((uint32_t)(0x12287e64), (0x0u));
  /* 12260b35 mov dword ptr [0x12287eec], 0 */
  w32((uint32_t)(0x12287eec), (0x0u));
  /* 12260b3f mov dword ptr [0x12288104], 0 */
  w32((uint32_t)(0x12288104), (0x0u));
  /* 12260b49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12260b50 jmp 0x12260b5b */
  goto L_12260b5b;
L_12260b52:;
  /* 12260b52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260b55 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260b58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12260b5b:;
  /* 12260b5b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260b5f jge 0x12260b70 */
  if ((C.sf==C.of)) goto L_12260b70;
  /* 12260b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260b64 mov word ptr [eax*2 + 0x12287ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x12287ee0), (0x0u));
  /* 12260b6e jmp 0x12260b52 */
  goto L_12260b52;
L_12260b70:;
  /* 12260b70 mov esp, ebp */
  ESP = (EBP);
  /* 12260b72 pop ebp */
  EBP = (pop32());
  /* 12260b73 ret  */
  ESPCHK(0x12260b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b80 @ 0x12260b80 (770 bytes, 175 insns) */
void f_12260b80(void) {
  FTRACE(0x12260b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12260b81 mov ebp, esp */
  EBP = (ESP);
  /* 12260b83 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260b89 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12260b8f push eax */
  push32((uint32_t)(EAX));
  /* 12260b90 mov ecx, dword ptr [0x12287e64] */
  ECX = (r32((uint32_t)(0x12287e64)));
  /* 12260b96 push ecx */
  push32((uint32_t)(ECX));
  /* 12260b97 call dword ptr [0x12289338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289338))), 0x12260b9du);
  /* 12260b9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260ba0 jne 0x12260db9 */
  if (!C.zf) goto L_12260db9;
  /* 12260ba6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12260bb0 jmp 0x12260bc1 */
  goto L_12260bc1;
L_12260bb2:;
  /* 12260bb2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260bb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260bbb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12260bc1:;
  /* 12260bc1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260bcb jae 0x12260be2 */
  if (!C.cf) goto L_12260be2;
  /* 12260bcd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260bd3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12260bd9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12260be0 jmp 0x12260bb2 */
  goto L_12260bb2;
L_12260be2:;
  /* 12260be2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12260be9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12260bef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12260bf2 jmp 0x12260bfd */
  goto L_12260bfd;
L_12260bf4:;
  /* 12260bf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260bf7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260bfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12260bfd:;
  /* 12260bfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260c00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12260c02 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12260c04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12260c06 je 0x12260c48 */
  if (C.zf) goto L_12260c48;
  /* 12260c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260c0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12260c0d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12260c0f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12260c15 jmp 0x12260c26 */
  goto L_12260c26;
L_12260c17:;
  /* 12260c17 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260c1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260c20 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12260c26:;
  /* 12260c26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12260c29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12260c2b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12260c2e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260c34 ja 0x12260c46 */
  if ((!C.cf&&!C.zf)) goto L_12260c46;
  /* 12260c36 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260c3c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12260c44 jmp 0x12260c17 */
  goto L_12260c17;
L_12260c46:;
  /* 12260c46 jmp 0x12260bf4 */
  goto L_12260bf4;
L_12260c48:;
  /* 12260c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12260c4a mov eax, dword ptr [0x12288104] */
  EAX = (r32((uint32_t)(0x12288104)));
  /* 12260c4f push eax */
  push32((uint32_t)(EAX));
  /* 12260c50 mov ecx, dword ptr [0x12287e64] */
  ECX = (r32((uint32_t)(0x12287e64)));
  /* 12260c56 push ecx */
  push32((uint32_t)(ECX));
  /* 12260c57 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12260c5d push edx */
  push32((uint32_t)(EDX));
  /* 12260c5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12260c63 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12260c69 push eax */
  push32((uint32_t)(EAX));
  /* 12260c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12260c6c call 0x12262830 */
  push32(0x12260c71u); f_12262830();
  /* 12260c71 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12260c76 mov ecx, dword ptr [0x12287e64] */
  ECX = (r32((uint32_t)(0x12287e64)));
  /* 12260c7c push ecx */
  push32((uint32_t)(ECX));
  /* 12260c7d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12260c82 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12260c88 push edx */
  push32((uint32_t)(EDX));
  /* 12260c89 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12260c8e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12260c94 push eax */
  push32((uint32_t)(EAX));
  /* 12260c95 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12260c9a mov ecx, dword ptr [0x12288104] */
  ECX = (r32((uint32_t)(0x12288104)));
  /* 12260ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 12260ca1 call 0x122629f0 */
  push32(0x12260ca6u); f_122629f0();
  /* 12260ca6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12260cab mov edx, dword ptr [0x12287e64] */
  EDX = (r32((uint32_t)(0x12287e64)));
  /* 12260cb1 push edx */
  push32((uint32_t)(EDX));
  /* 12260cb2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12260cb7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12260cbd push eax */
  push32((uint32_t)(EAX));
  /* 12260cbe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12260cc3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12260cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12260cca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12260ccf mov edx, dword ptr [0x12288104] */
  EDX = (r32((uint32_t)(0x12288104)));
  /* 12260cd5 push edx */
  push32((uint32_t)(EDX));
  /* 12260cd6 call 0x122629f0 */
  push32(0x12260cdbu); f_122629f0();
  /* 12260cdb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260cde mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12260ce8 jmp 0x12260cf9 */
  goto L_12260cf9;
L_12260cea:;
  /* 12260cea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260cf3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12260cf9:;
  /* 12260cf9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260d03 jae 0x12260db4 */
  if (!C.cf) goto L_12260db4;
  /* 12260d09 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12260d11 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12260d19 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12260d1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12260d1e je 0x12260d56 */
  if (C.zf) goto L_12260d56;
  /* 12260d20 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d26 mov cl, byte ptr [eax + 0x12288001] */
  CL = (r8((uint32_t)(EAX + 0x12288001)));
  /* 12260d2c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12260d2f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d35 mov byte ptr [edx + 0x12288001], cl */
  w8((uint32_t)(EDX + 0x12288001), (CL));
  /* 12260d3b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d41 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d47 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12260d4e mov byte ptr [eax + 0x12287f00], dl */
  w8((uint32_t)(EAX + 0x12287f00), (DL));
  /* 12260d54 jmp 0x12260daf */
  goto L_12260daf;
L_12260d56:;
  /* 12260d56 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12260d5e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12260d66 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12260d69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12260d6b je 0x12260da2 */
  if (C.zf) goto L_12260da2;
  /* 12260d6d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d73 mov al, byte ptr [edx + 0x12288001] */
  AL = (r8((uint32_t)(EDX + 0x12288001)));
  /* 12260d79 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12260d7b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d81 mov byte ptr [ecx + 0x12288001], al */
  w8((uint32_t)(ECX + 0x12288001), (AL));
  /* 12260d87 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260d93 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12260d9a mov byte ptr [edx + 0x12287f00], cl */
  w8((uint32_t)(EDX + 0x12287f00), (CL));
  /* 12260da0 jmp 0x12260daf */
  goto L_12260daf;
L_12260da2:;
  /* 12260da2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260da8 mov byte ptr [edx + 0x12287f00], 0 */
  w8((uint32_t)(EDX + 0x12287f00), (0x0u));
L_12260daf:;
  /* 12260daf jmp 0x12260cea */
  goto L_12260cea;
L_12260db4:;
  /* 12260db4 jmp 0x12260e7e */
  goto L_12260e7e;
L_12260db9:;
  /* 12260db9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12260dc3 jmp 0x12260dd4 */
  goto L_12260dd4;
L_12260dc5:;
  /* 12260dc5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260dcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260dce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12260dd4:;
  /* 12260dd4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260dde jae 0x12260e7e */
  if (!C.cf) goto L_12260e7e;
  /* 12260de4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260deb jb 0x12260e28 */
  if (C.cf) goto L_12260e28;
  /* 12260ded cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260df4 ja 0x12260e28 */
  if ((!C.cf&&!C.zf)) goto L_12260e28;
  /* 12260df6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260dfc mov dl, byte ptr [ecx + 0x12288001] */
  DL = (r8((uint32_t)(ECX + 0x12288001)));
  /* 12260e02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12260e05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e0b mov byte ptr [eax + 0x12288001], dl */
  w8((uint32_t)(EAX + 0x12288001), (DL));
  /* 12260e11 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e17 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260e1a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e20 mov byte ptr [edx + 0x12287f00], cl */
  w8((uint32_t)(EDX + 0x12287f00), (CL));
  /* 12260e26 jmp 0x12260e79 */
  goto L_12260e79;
L_12260e28:;
  /* 12260e28 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260e2f jb 0x12260e6c */
  if (C.cf) goto L_12260e6c;
  /* 12260e31 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260e38 ja 0x12260e6c */
  if ((!C.cf&&!C.zf)) goto L_12260e6c;
  /* 12260e3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e40 mov cl, byte ptr [eax + 0x12288001] */
  CL = (r8((uint32_t)(EAX + 0x12288001)));
  /* 12260e46 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12260e49 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e4f mov byte ptr [edx + 0x12288001], cl */
  w8((uint32_t)(EDX + 0x12288001), (CL));
  /* 12260e55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e5b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260e5e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e64 mov byte ptr [ecx + 0x12287f00], al */
  w8((uint32_t)(ECX + 0x12287f00), (AL));
  /* 12260e6a jmp 0x12260e79 */
  goto L_12260e79;
L_12260e6c:;
  /* 12260e6c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12260e72 mov byte ptr [edx + 0x12287f00], 0 */
  w8((uint32_t)(EDX + 0x12287f00), (0x0u));
L_12260e79:;
  /* 12260e79 jmp 0x12260dc5 */
  goto L_12260dc5;
L_12260e7e:;
  /* 12260e7e mov esp, ebp */
  ESP = (EBP);
  /* 12260e80 pop ebp */
  EBP = (pop32());
  /* 12260e81 ret  */
  ESPCHK(0x12260b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x12260e90 (23 bytes, 9 insns) */
void f_12260e90(void) {
  FTRACE(0x12260e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12260e91 mov ebp, esp */
  EBP = (ESP);
  /* 12260e93 cmp dword ptr [0x12287eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12287eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260e9a je 0x12260ea3 */
  if (C.zf) goto L_12260ea3;
  /* 12260e9c mov eax, dword ptr [0x12287e64] */
  EAX = (r32((uint32_t)(0x12287e64)));
  /* 12260ea1 jmp 0x12260ea5 */
  goto L_12260ea5;
L_12260ea3:;
  /* 12260ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12260ea5:;
  /* 12260ea5 pop ebp */
  EBP = (pop32());
  /* 12260ea6 ret  */
  ESPCHK(0x12260e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x12260eb0 (34 bytes, 10 insns) */
void f_12260eb0(void) {
  FTRACE(0x12260eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12260eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12260eb3 cmp dword ptr [0x122882b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122882b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260eba jne 0x12260ed0 */
  if (!C.zf) goto L_12260ed0;
  /* 12260ebc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12260ebe call 0x122606d0 */
  push32(0x12260ec3u); f_122606d0();
  /* 12260ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12260ec6 mov dword ptr [0x122882b0], 1 */
  w32((uint32_t)(0x122882b0), (0x1u));
L_12260ed0:;
  /* 12260ed0 pop ebp */
  EBP = (pop32());
  /* 12260ed1 ret  */
  ESPCHK(0x12260eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ee0 @ 0x12260ee0 (664 bytes, 257 insns) [15 switch table(s)] */
void f_12260ee0(void) {
  FTRACE(0x12260ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12260ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12260ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12260ee3 push edi */
  push32((uint32_t)(EDI));
  /* 12260ee4 push esi */
  push32((uint32_t)(ESI));
  /* 12260ee5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12260ee8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12260eeb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12260eee mov eax, ecx */
  EAX = (ECX);
  /* 12260ef0 mov edx, ecx */
  EDX = (ECX);
  /* 12260ef2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260ef4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260ef6 jbe 0x12260f00 */
  if ((C.cf||C.zf)) goto L_12260f00;
  /* 12260ef8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260efa jb 0x12261078 */
  if (C.cf) goto L_12261078;
L_12260f00:;
  /* 12260f00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12260f06 jne 0x12260f1c */
  if (!C.zf) goto L_12260f1c;
  /* 12260f08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12260f0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12260f0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260f11 jb 0x12260f3c */
  if (C.cf) goto L_12260f3c;
  /* 12260f13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12260f15 jmp dword ptr [edx*4 + 0x12261028] */
  switch (EDX) {
    case 0: goto L_12261038;
    case 1: goto L_12261040;
    case 2: goto L_1226104c;
    case 3: goto L_12261060;
    default: x86_unimpl("switch@0x12260f15 out of table"); return;
  }
L_12260f1c:;
  /* 12260f1c mov eax, edi */
  EAX = (EDI);
  /* 12260f1e mov edx, 3 */
  EDX = (0x3u);
  /* 12260f23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12260f26 jb 0x12260f34 */
  if (C.cf) goto L_12260f34;
  /* 12260f28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12260f2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12260f2d jmp dword ptr [eax*4 + 0x12260f40] */
  switch (EAX) {
    case 1: goto L_12260f50;
    case 2: goto L_12260f7c;
    case 3: goto L_12260fa0;
    default: x86_unimpl("switch@0x12260f2d out of table"); return;
  }
L_12260f34:;
  /* 12260f34 jmp dword ptr [ecx*4 + 0x12261038] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12261038)))); return;
  /* 12260f3b nop  */
  /* nop */
L_12260f3c:;
  /* 12260f3c jmp dword ptr [ecx*4 + 0x12260fbc] */
  switch (ECX) {
    case 0: goto L_1226101f;
    case 1: goto L_1226100c;
    case 2: goto L_12261004;
    case 3: goto L_12260ffc;
    case 4: goto L_12260ff4;
    case 5: goto L_12260fec;
    case 6: goto L_12260fe4;
    case 7: goto L_12260fdc;
    default: x86_unimpl("switch@0x12260f3c out of table"); return;
  }
  /* 12260f43 nop  */
  /* nop */
L_12260f50:;
  /* 12260f50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12260f52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12260f54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12260f56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12260f59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12260f5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12260f5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12260f62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12260f65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12260f68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12260f6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260f6e jb 0x12260f3c */
  if (C.cf) goto L_12260f3c;
  /* 12260f70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12260f72 jmp dword ptr [edx*4 + 0x12261028] */
  switch (EDX) {
    case 0: goto L_12261038;
    case 1: goto L_12261040;
    case 2: goto L_1226104c;
    case 3: goto L_12261060;
    default: x86_unimpl("switch@0x12260f72 out of table"); return;
  }
  /* 12260f79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12260f7c:;
  /* 12260f7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12260f7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12260f80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12260f82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12260f85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12260f88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12260f8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12260f8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12260f91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260f94 jb 0x12260f3c */
  if (C.cf) goto L_12260f3c;
  /* 12260f96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12260f98 jmp dword ptr [edx*4 + 0x12261028] */
  switch (EDX) {
    case 0: goto L_12261038;
    case 1: goto L_12261040;
    case 2: goto L_1226104c;
    case 3: goto L_12261060;
    default: x86_unimpl("switch@0x12260f98 out of table"); return;
  }
  /* 12260f9f nop  */
  /* nop */
L_12260fa0:;
  /* 12260fa0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12260fa2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12260fa4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12260fa6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12260fa7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12260faa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12260fab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12260fae jb 0x12260f3c */
  if (C.cf) goto L_12260f3c;
  /* 12260fb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12260fb2 jmp dword ptr [edx*4 + 0x12261028] */
  switch (EDX) {
    case 0: goto L_12261038;
    case 1: goto L_12261040;
    case 2: goto L_1226104c;
    case 3: goto L_12261060;
    default: x86_unimpl("switch@0x12260fb2 out of table"); return;
  }
  /* 12260fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12260fdc:;
  /* 12260fdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12260fe0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12260fe4:;
  /* 12260fe4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12260fe8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12260fec:;
  /* 12260fec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12260ff0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12260ff4:;
  /* 12260ff4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12260ff8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12260ffc:;
  /* 12260ffc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12261000 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12261004:;
  /* 12261004 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12261008 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1226100c:;
  /* 1226100c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12261010 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12261014 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1226101b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1226101d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1226101f:;
  /* 1226101f jmp dword ptr [edx*4 + 0x12261028] */
  switch (EDX) {
    case 0: goto L_12261038;
    case 1: goto L_12261040;
    case 2: goto L_1226104c;
    case 3: goto L_12261060;
    default: x86_unimpl("switch@0x1226101f out of table"); return;
  }
  /* 12261026 mov edi, edi */
  EDI = (EDI);
L_12261038:;
  /* 12261038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226103b pop esi */
  ESI = (pop32());
  /* 1226103c pop edi */
  EDI = (pop32());
  /* 1226103d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226103e ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
  /* 1226103f nop  */
  /* nop */
L_12261040:;
  /* 12261040 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12261042 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12261044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12261047 pop esi */
  ESI = (pop32());
  /* 12261048 pop edi */
  EDI = (pop32());
  /* 12261049 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226104a ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
  /* 1226104b nop  */
  /* nop */
L_1226104c:;
  /* 1226104c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1226104e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12261050 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12261053 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12261056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12261059 pop esi */
  ESI = (pop32());
  /* 1226105a pop edi */
  EDI = (pop32());
  /* 1226105b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226105c ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
  /* 1226105d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12261060:;
  /* 12261060 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12261062 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12261064 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12261067 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1226106a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1226106d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12261070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12261073 pop esi */
  ESI = (pop32());
  /* 12261074 pop edi */
  EDI = (pop32());
  /* 12261075 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12261076 ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
  /* 12261077 nop  */
  /* nop */
L_12261078:;
  /* 12261078 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1226107c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12261080 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12261086 jne 0x122610ac */
  if (!C.zf) goto L_122610ac;
  /* 12261088 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1226108b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1226108e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261091 jb 0x122610a0 */
  if (C.cf) goto L_122610a0;
  /* 12261093 std  */
  C.df=1;
  /* 12261094 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12261096 cld  */
  C.df=0;
  /* 12261097 jmp dword ptr [edx*4 + 0x122611c0] */
  switch (EDX) {
    case 0: goto L_122611d0;
    case 1: goto L_122611d8;
    case 2: goto L_122611e8;
    case 3: goto L_122611fc;
    default: x86_unimpl("switch@0x12261097 out of table"); return;
  }
  /* 1226109e mov edi, edi */
  EDI = (EDI);
L_122610a0:;
  /* 122610a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122610a2 jmp dword ptr [ecx*4 + 0x12261170] */
  switch (ECX) {
    case 0: goto L_122611b7;
    default: x86_unimpl("switch@0x122610a2 out of table"); return;
  }
  /* 122610a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122610ac:;
  /* 122610ac mov eax, edi */
  EAX = (EDI);
  /* 122610ae mov edx, 3 */
  EDX = (0x3u);
  /* 122610b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122610b6 jb 0x122610c4 */
  if (C.cf) goto L_122610c4;
  /* 122610b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122610bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122610bd jmp dword ptr [eax*4 + 0x122610c8] */
  switch (EAX) {
    case 1: goto L_122610d8;
    case 2: goto L_122610f8;
    case 3: goto L_12261120;
    default: x86_unimpl("switch@0x122610bd out of table"); return;
  }
L_122610c4:;
  /* 122610c4 jmp dword ptr [ecx*4 + 0x122611c0] */
  switch (ECX) {
    case 0: goto L_122611d0;
    case 1: goto L_122611d8;
    case 2: goto L_122611e8;
    case 3: goto L_122611fc;
    default: x86_unimpl("switch@0x122610c4 out of table"); return;
  }
  /* 122610cb nop  */
  /* nop */
L_122610d8:;
  /* 122610d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122610db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122610dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122610e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 122610e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122610e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 122610e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122610e8 jb 0x122610a0 */
  if (C.cf) goto L_122610a0;
  /* 122610ea std  */
  C.df=1;
  /* 122610eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122610ed cld  */
  C.df=0;
  /* 122610ee jmp dword ptr [edx*4 + 0x122611c0] */
  switch (EDX) {
    case 0: goto L_122611d0;
    case 1: goto L_122611d8;
    case 2: goto L_122611e8;
    case 3: goto L_122611fc;
    default: x86_unimpl("switch@0x122610ee out of table"); return;
  }
  /* 122610f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122610f8:;
  /* 122610f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122610fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122610fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12261100 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12261103 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12261106 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12261109 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226110c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226110f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261112 jb 0x122610a0 */
  if (C.cf) goto L_122610a0;
  /* 12261114 std  */
  C.df=1;
  /* 12261115 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12261117 cld  */
  C.df=0;
  /* 12261118 jmp dword ptr [edx*4 + 0x122611c0] */
  switch (EDX) {
    case 0: goto L_122611d0;
    case 1: goto L_122611d8;
    case 2: goto L_122611e8;
    case 3: goto L_122611fc;
    default: x86_unimpl("switch@0x12261118 out of table"); return;
  }
  /* 1226111f nop  */
  /* nop */
L_12261120:;
  /* 12261120 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12261123 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12261125 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12261128 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1226112b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1226112e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12261131 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12261134 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12261137 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226113a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226113d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261140 jb 0x122610a0 */
  if (C.cf) goto L_122610a0;
  /* 12261146 std  */
  C.df=1;
  /* 12261147 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12261149 cld  */
  C.df=0;
  /* 1226114a jmp dword ptr [edx*4 + 0x122611c0] */
  switch (EDX) {
    case 0: goto L_122611d0;
    case 1: goto L_122611d8;
    case 2: goto L_122611e8;
    case 3: goto L_122611fc;
    default: x86_unimpl("switch@0x1226114a out of table"); return;
  }
  /* 12261151 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12261154 je 0x12261167 */
  if (C.zf) goto L_12261167;
  /* 12261156 adc bh, byte ptr es:[ecx + edx + 0x26] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ECX + EDX*1 + 0x26))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1226115b adc al, byte ptr [ecx + edx + 0x118c1226] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + EDX*1 + 0x118c1226))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12261162 adc dl, byte ptr es:[ecx + edx + 0x119c1226] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX + EDX*1 + 0x119c1226))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1226116c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1226116d adc dword ptr [esi], esp */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 12261174 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12261178 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1226117c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12261180 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12261184 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12261188 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1226118c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12261190 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12261194 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12261198 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1226119c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 122611a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 122611a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 122611a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 122611ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 122611b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122611b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122611b7:;
  /* 122611b7 jmp dword ptr [edx*4 + 0x122611c0] */
  switch (EDX) {
    case 0: goto L_122611d0;
    case 1: goto L_122611d8;
    case 2: goto L_122611e8;
    case 3: goto L_122611fc;
    default: x86_unimpl("switch@0x122611b7 out of table"); return;
  }
  /* 122611be mov edi, edi */
  EDI = (EDI);
L_122611d0:;
  /* 122611d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122611d3 pop esi */
  ESI = (pop32());
  /* 122611d4 pop edi */
  EDI = (pop32());
  /* 122611d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122611d6 ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
  /* 122611d7 nop  */
  /* nop */
L_122611d8:;
  /* 122611d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122611db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122611de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122611e1 pop esi */
  ESI = (pop32());
  /* 122611e2 pop edi */
  EDI = (pop32());
  /* 122611e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122611e4 ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
  /* 122611e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122611e8:;
  /* 122611e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122611eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122611ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122611f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122611f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122611f7 pop esi */
  ESI = (pop32());
  /* 122611f8 pop edi */
  EDI = (pop32());
  /* 122611f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122611fa ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
  /* 122611fb nop  */
  /* nop */
L_122611fc:;
  /* 122611fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122611ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12261202 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12261205 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12261208 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1226120b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1226120e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12261211 pop esi */
  ESI = (pop32());
  /* 12261212 pop edi */
  EDI = (pop32());
  /* 12261213 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12261214 ret  */
  ESPCHK(0x12260ee0u, _esp0);
  ESP += 4; return;
L_12261167: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x12261167 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x12261220 (104 bytes, 43 insns) */
void f_12261220(void) {
  FTRACE(0x12261220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12261220 push ebx */
  push32((uint32_t)(EBX));
  /* 12261221 push esi */
  push32((uint32_t)(ESI));
  /* 12261222 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12261226 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12261228 jne 0x12261242 */
  if (!C.zf) goto L_12261242;
  /* 1226122a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1226122e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12261232 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12261234 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12261236 mov ebx, eax */
  EBX = (EAX);
  /* 12261238 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1226123c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1226123e mov edx, ebx */
  EDX = (EBX);
  /* 12261240 jmp 0x12261283 */
  goto L_12261283;
L_12261242:;
  /* 12261242 mov ecx, eax */
  ECX = (EAX);
  /* 12261244 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12261248 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1226124c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12261250:;
  /* 12261250 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12261252 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12261254 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12261256 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12261258 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226125a jne 0x12261250 */
  if (!C.zf) goto L_12261250;
  /* 1226125c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1226125e mov esi, eax */
  ESI = (EAX);
  /* 12261260 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12261264 mov ecx, eax */
  ECX = (EAX);
  /* 12261266 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1226126a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1226126c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226126e jb 0x1226127e */
  if (C.cf) goto L_1226127e;
  /* 12261270 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261274 ja 0x1226127e */
  if ((!C.cf&&!C.zf)) goto L_1226127e;
  /* 12261276 jb 0x1226127f */
  if (C.cf) goto L_1226127f;
  /* 12261278 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226127c jbe 0x1226127f */
  if ((C.cf||C.zf)) goto L_1226127f;
L_1226127e:;
  /* 1226127e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1226127f:;
  /* 1226127f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12261281 mov eax, esi */
  EAX = (ESI);
L_12261283:;
  /* 12261283 pop esi */
  ESI = (pop32());
  /* 12261284 pop ebx */
  EBX = (pop32());
  /* 12261285 ret 0x10 */
  ESPCHK(0x12261220u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12261290 (117 bytes, 44 insns) */
void f_12261290(void) {
  FTRACE(0x12261290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12261290 push ebx */
  push32((uint32_t)(EBX));
  /* 12261291 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12261295 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12261297 jne 0x122612b1 */
  if (!C.zf) goto L_122612b1;
  /* 12261299 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1226129d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 122612a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122612a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122612a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122612a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122612ab mov eax, edx */
  EAX = (EDX);
  /* 122612ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122612af jmp 0x12261301 */
  goto L_12261301;
L_122612b1:;
  /* 122612b1 mov ecx, eax */
  ECX = (EAX);
  /* 122612b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 122612b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 122612bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_122612bf:;
  /* 122612bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122612c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 122612c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 122612c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 122612c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122612c9 jne 0x122612bf */
  if (!C.zf) goto L_122612bf;
  /* 122612cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122612cd mov ecx, eax */
  ECX = (EAX);
  /* 122612cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122612d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 122612d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122612d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122612da jb 0x122612ea */
  if (C.cf) goto L_122612ea;
  /* 122612dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122612e0 ja 0x122612ea */
  if ((!C.cf&&!C.zf)) goto L_122612ea;
  /* 122612e2 jb 0x122612f2 */
  if (C.cf) goto L_122612f2;
  /* 122612e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122612e8 jbe 0x122612f2 */
  if ((C.cf||C.zf)) goto L_122612f2;
L_122612ea:;
  /* 122612ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122612ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_122612f2:;
  /* 122612f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122612f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122612fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122612fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122612fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12261301:;
  /* 12261301 pop ebx */
  EBX = (pop32());
  /* 12261302 ret 0x10 */
  ESPCHK(0x12261290u, _esp0);
  ESP += 20; return;
}

/* FUN_10011310 @ 0x12261310 (628 bytes, 214 insns) */
void f_12261310(void) {
  FTRACE(0x12261310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12261310 push ebp */
  push32((uint32_t)(EBP));
  /* 12261311 mov ebp, esp */
  EBP = (ESP);
  /* 12261313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261316 push ebx */
  push32((uint32_t)(EBX));
  /* 12261317 push esi */
  push32((uint32_t)(ESI));
  /* 12261318 push edi */
  push32((uint32_t)(EDI));
L_12261319:;
  /* 12261319 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226131d jne 0x1226133d */
  if (!C.zf) goto L_1226133d;
  /* 1226131f push 0x12282354 */
  push32((uint32_t)(0x12282354u));
  /* 12261324 push 0 */
  push32((uint32_t)(0x0u));
  /* 12261326 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12261328 push 0x12282348 */
  push32((uint32_t)(0x12282348u));
  /* 1226132d push 2 */
  push32((uint32_t)(0x2u));
  /* 1226132f call 0x122596c0 */
  push32(0x12261334u); f_122596c0();
  /* 12261334 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261337 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226133a jne 0x1226133d */
  if (!C.zf) goto L_1226133d;
  /* 1226133c int3  */
  x86_unimpl("int3 @ 0x1226133c");
L_1226133d:;
  /* 1226133d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226133f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261341 jne 0x12261319 */
  if (!C.zf) goto L_12261319;
  /* 12261343 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12261346 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12261349 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226134c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1226134f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12261352 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261355 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12261358 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1226135e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261360 je 0x1226136f */
  if (C.zf) goto L_1226136f;
  /* 12261362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261365 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12261368 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1226136b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226136d je 0x12261385 */
  if (C.zf) goto L_12261385;
L_1226136f:;
  /* 1226136f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261372 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12261375 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12261377 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226137a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1226137d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12261380 jmp 0x1226157d */
  goto L_1226157d;
L_12261385:;
  /* 12261385 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261388 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1226138b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1226138e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261390 je 0x122613dc */
  if (C.zf) goto L_122613dc;
  /* 12261392 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261395 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1226139c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226139f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122613a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 122613a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122613a7 je 0x122613c5 */
  if (C.zf) goto L_122613c5;
  /* 122613a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613af mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122613b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122613b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122613ba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 122613bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613c0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 122613c3 jmp 0x122613dc */
  goto L_122613dc;
L_122613c5:;
  /* 122613c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613c8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122613cb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 122613ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613d1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 122613d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122613d7 jmp 0x1226157d */
  goto L_1226157d;
L_122613dc:;
  /* 122613dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122613e2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 122613e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613e8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 122613eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613ee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122613f1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 122613f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613f7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 122613fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122613fd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12261404 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226140b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226140e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12261411 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261414 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12261417 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1226141d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226141f jne 0x1226144f */
  if (!C.zf) goto L_1226144f;
  /* 12261421 cmp dword ptr [ebp - 8], 0x12285140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12285140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261428 je 0x12261433 */
  if (C.zf) goto L_12261433;
  /* 1226142a cmp dword ptr [ebp - 8], 0x12285160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12285160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261431 jne 0x12261443 */
  if (!C.zf) goto L_12261443;
L_12261433:;
  /* 12261433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12261436 push edx */
  push32((uint32_t)(EDX));
  /* 12261437 call 0x12263280 */
  push32(0x1226143cu); f_12263280();
  /* 1226143c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226143f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261441 jne 0x1226144f */
  if (!C.zf) goto L_1226144f;
L_12261443:;
  /* 12261443 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261446 push eax */
  push32((uint32_t)(EAX));
  /* 12261447 call 0x122631b0 */
  push32(0x1226144cu); f_122631b0();
  /* 1226144c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226144f:;
  /* 1226144f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261452 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12261455 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1226145b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226145d je 0x1226153b */
  if (C.zf) goto L_1226153b;
L_12261463:;
  /* 12261463 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261466 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261469 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1226146b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226146e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261470 jge 0x12261493 */
  if ((C.sf==C.of)) goto L_12261493;
  /* 12261472 push 0x12282308 */
  push32((uint32_t)(0x12282308u));
  /* 12261477 push 0 */
  push32((uint32_t)(0x0u));
  /* 12261479 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1226147e push 0x12282348 */
  push32((uint32_t)(0x12282348u));
  /* 12261483 push 2 */
  push32((uint32_t)(0x2u));
  /* 12261485 call 0x122596c0 */
  push32(0x1226148au); f_122596c0();
  /* 1226148a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226148d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261490 jne 0x12261493 */
  if (!C.zf) goto L_12261493;
  /* 12261492 int3  */
  x86_unimpl("int3 @ 0x12261492");
L_12261493:;
  /* 12261493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12261495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261497 jne 0x12261463 */
  if (!C.zf) goto L_12261463;
  /* 12261499 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226149c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226149f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 122614a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122614a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122614a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122614aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122614ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122614b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122614b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122614b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122614b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122614bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122614be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122614c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122614c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122614c8 jle 0x122614e6 */
  if ((C.zf||C.sf!=C.of)) goto L_122614e6;
  /* 122614ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122614cd push ecx */
  push32((uint32_t)(ECX));
  /* 122614ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122614d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122614d4 push eax */
  push32((uint32_t)(EAX));
  /* 122614d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122614d8 push ecx */
  push32((uint32_t)(ECX));
  /* 122614d9 call 0x12262ea0 */
  push32(0x122614deu); f_12262ea0();
  /* 122614de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122614e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122614e4 jmp 0x1226152e */
  goto L_1226152e;
L_122614e6:;
  /* 122614e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122614ea je 0x12261509 */
  if (C.zf) goto L_12261509;
  /* 122614ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122614ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 122614f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122614f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 122614f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122614fb mov ecx, dword ptr [edx*4 + 0x12288160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12288160)));
  /* 12261502 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261504 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12261507 jmp 0x12261510 */
  goto L_12261510;
L_12261509:;
  /* 12261509 mov dword ptr [ebp - 0x14], 0x12284a60 */
  w32((uint32_t)(EBP + -0x14), (0x12284a60u));
L_12261510:;
  /* 12261510 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12261513 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12261517 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1226151a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226151c je 0x1226152e */
  if (C.zf) goto L_1226152e;
  /* 1226151e push 2 */
  push32((uint32_t)(0x2u));
  /* 12261520 push 0 */
  push32((uint32_t)(0x0u));
  /* 12261522 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12261525 push ecx */
  push32((uint32_t)(ECX));
  /* 12261526 call 0x12262d50 */
  push32(0x1226152bu); f_12262d50();
  /* 1226152b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226152e:;
  /* 1226152e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261531 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12261534 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12261537 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12261539 jmp 0x12261559 */
  goto L_12261559;
L_1226153b:;
  /* 1226153b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12261542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261545 push edx */
  push32((uint32_t)(EDX));
  /* 12261546 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12261549 push eax */
  push32((uint32_t)(EAX));
  /* 1226154a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226154d push ecx */
  push32((uint32_t)(ECX));
  /* 1226154e call 0x12262ea0 */
  push32(0x12261553u); f_12262ea0();
  /* 12261553 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261556 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12261559:;
  /* 12261559 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226155c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226155f je 0x12261575 */
  if (C.zf) goto L_12261575;
  /* 12261561 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261564 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12261567 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1226156a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226156d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12261570 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12261573 jmp 0x1226157d */
  goto L_1226157d;
L_12261575:;
  /* 12261575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12261578 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1226157d:;
  /* 1226157d pop edi */
  EDI = (pop32());
  /* 1226157e pop esi */
  ESI = (pop32());
  /* 1226157f pop ebx */
  EBX = (pop32());
  /* 12261580 mov esp, ebp */
  ESP = (EBP);
  /* 12261582 pop ebp */
  EBP = (pop32());
  /* 12261583 ret  */
  ESPCHK(0x12261310u, _esp0);
  ESP += 4; return;
}

/* FUN_10011590 @ 0x12261590 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12261590(void) {
  FTRACE(0x12261590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12261590 push ebp */
  push32((uint32_t)(EBP));
  /* 12261591 mov ebp, esp */
  EBP = (ESP);
  /* 12261593 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261599 push ebx */
  push32((uint32_t)(EBX));
  /* 1226159a push esi */
  push32((uint32_t)(ESI));
  /* 1226159b push edi */
  push32((uint32_t)(EDI));
  /* 1226159c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122615a3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 122615ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_122615b4:;
  /* 122615b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122615b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122615b9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 122615bc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122615c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122615c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122615c6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 122615c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122615cb je 0x122621a7 */
  if (C.zf) goto L_122621a7;
  /* 122615d1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122615d8 jl 0x122621a7 */
  if ((C.sf!=C.of)) goto L_122621a7;
  /* 122615de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122615e2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122615e5 jl 0x12261606 */
  if ((C.sf!=C.of)) goto L_12261606;
  /* 122615e7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122615eb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122615ee jg 0x12261606 */
  if ((!C.zf&&C.sf==C.of)) goto L_12261606;
  /* 122615f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122615f4 movsx ecx, byte ptr [eax + 0x12282340] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12282340))));
  /* 122615fb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 122615fe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12261604 jmp 0x12261610 */
  goto L_12261610;
L_12261606:;
  /* 12261606 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12261610:;
  /* 12261610 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12261616 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12261619 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226161c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226161f movsx edx, byte ptr [ecx + eax*8 + 0x12282360] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12282360))));
  /* 12261627 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1226162a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1226162d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12261630 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12261636 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226163d ja 0x122621a2 */
  if ((!C.cf&&!C.zf)) goto L_122621a2;
  /* 12261643 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12261649 jmp dword ptr [ecx*4 + 0x122621b4] */
  switch (ECX) {
    case 0: goto L_12261650;
    case 1: goto L_122616ea;
    case 2: goto L_1226172c;
    case 3: goto L_1226179b;
    case 4: goto L_122617f3;
    case 5: goto L_12261802;
    case 6: goto L_1226184e;
    case 7: goto L_122618e1;
    case 8: goto L_12261778;
    case 9: goto L_12261783;
    case 10: goto L_1226176e;
    case 11: goto L_12261763;
    case 12: goto L_1226178e;
    case 13: goto L_12261796;
    default: x86_unimpl("switch@0x12261649 out of table"); return;
  }
L_12261650:;
  /* 12261650 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12261657 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1226165a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12261660 mov eax, dword ptr [0x12284c98] */
  EAX = (r32((uint32_t)(0x12284c98)));
  /* 12261665 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12261667 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1226166b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12261671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12261673 je 0x122616cd */
  if (C.zf) goto L_122616cd;
  /* 12261675 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1226167b push edx */
  push32((uint32_t)(EDX));
  /* 1226167c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226167f push eax */
  push32((uint32_t)(EAX));
  /* 12261680 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12261684 push ecx */
  push32((uint32_t)(ECX));
  /* 12261685 call 0x122622c0 */
  push32(0x1226168au); f_122622c0();
  /* 1226168a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226168d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12261690 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12261692 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12261695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12261698 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226169b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1226169e:;
  /* 1226169e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122616a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122616a4 jne 0x122616c7 */
  if (!C.zf) goto L_122616c7;
  /* 122616a6 push 0x122823e0 */
  push32((uint32_t)(0x122823e0u));
  /* 122616ab push 0 */
  push32((uint32_t)(0x0u));
  /* 122616ad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 122616b2 push 0x122823d4 */
  push32((uint32_t)(0x122823d4u));
  /* 122616b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122616b9 call 0x122596c0 */
  push32(0x122616beu); f_122596c0();
  /* 122616be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122616c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122616c4 jne 0x122616c7 */
  if (!C.zf) goto L_122616c7;
  /* 122616c6 int3  */
  x86_unimpl("int3 @ 0x122616c6");
L_122616c7:;
  /* 122616c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122616c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122616cb jne 0x1226169e */
  if (!C.zf) goto L_1226169e;
L_122616cd:;
  /* 122616cd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 122616d3 push ecx */
  push32((uint32_t)(ECX));
  /* 122616d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122616d7 push edx */
  push32((uint32_t)(EDX));
  /* 122616d8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122616dc push eax */
  push32((uint32_t)(EAX));
  /* 122616dd call 0x122622c0 */
  push32(0x122616e2u); f_122622c0();
  /* 122616e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122616e5 jmp 0x122621a2 */
  goto L_122621a2;
L_122616ea:;
  /* 122616ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122616f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122616f4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 122616fa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12261700 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12261706 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1226170c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1226170f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12261716 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12261720 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12261727 jmp 0x122621a2 */
  goto L_122621a2;
L_1226172c:;
  /* 1226172c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12261730 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12261736 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1226173c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226173f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12261745 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226174c ja 0x12261796 */
  if ((!C.cf&&!C.zf)) goto L_12261796;
  /* 1226174e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12261754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12261756 mov al, byte ptr [ecx + 0x122621ec] */
  AL = (r8((uint32_t)(ECX + 0x122621ec)));
  /* 1226175c jmp dword ptr [eax*4 + 0x122621d4] */
  switch (EAX) {
    case 0: goto L_12261778;
    case 1: goto L_12261783;
    case 2: goto L_1226176e;
    case 3: goto L_12261763;
    case 4: goto L_1226178e;
    case 5: goto L_12261796;
    default: x86_unimpl("switch@0x1226175c out of table"); return;
  }
L_12261763:;
  /* 12261763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261766 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12261769 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1226176c jmp 0x12261796 */
  goto L_12261796;
L_1226176e:;
  /* 1226176e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261771 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12261773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12261776 jmp 0x12261796 */
  goto L_12261796;
L_12261778:;
  /* 12261778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226177b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1226177e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12261781 jmp 0x12261796 */
  goto L_12261796;
L_12261783:;
  /* 12261783 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261786 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12261789 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1226178c jmp 0x12261796 */
  goto L_12261796;
L_1226178e:;
  /* 1226178e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261791 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12261793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12261796:;
  /* 12261796 jmp 0x122621a2 */
  goto L_122621a2;
L_1226179b:;
  /* 1226179b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1226179f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122617a2 jne 0x122617d7 */
  if (!C.zf) goto L_122617d7;
  /* 122617a4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 122617a7 push edx */
  push32((uint32_t)(EDX));
  /* 122617a8 call 0x122623d0 */
  push32(0x122617adu); f_122623d0();
  /* 122617ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122617b0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 122617b6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122617bd jge 0x122617d5 */
  if ((C.sf==C.of)) goto L_122617d5;
  /* 122617bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122617c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 122617c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122617c7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 122617cd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122617cf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_122617d5:;
  /* 122617d5 jmp 0x122617ee */
  goto L_122617ee;
L_122617d7:;
  /* 122617d7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 122617dd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122617e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122617e4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 122617e8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_122617ee:;
  /* 122617ee jmp 0x122621a2 */
  goto L_122621a2;
L_122617f3:;
  /* 122617f3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 122617fd jmp 0x122621a2 */
  goto L_122621a2;
L_12261802:;
  /* 12261802 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12261806 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261809 jne 0x12261832 */
  if (!C.zf) goto L_12261832;
  /* 1226180b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1226180e push eax */
  push32((uint32_t)(EAX));
  /* 1226180f call 0x122623d0 */
  push32(0x12261814u); f_122623d0();
  /* 12261814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261817 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1226181d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261824 jge 0x12261830 */
  if ((C.sf==C.of)) goto L_12261830;
  /* 12261826 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12261830:;
  /* 12261830 jmp 0x12261849 */
  goto L_12261849;
L_12261832:;
  /* 12261832 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12261838 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226183b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1226183f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12261843 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12261849:;
  /* 12261849 jmp 0x122621a2 */
  goto L_122621a2;
L_1226184e:;
  /* 1226184e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12261852 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12261858 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1226185e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261861 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12261867 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226186e ja 0x122618dc */
  if ((!C.cf&&!C.zf)) goto L_122618dc;
  /* 12261870 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12261876 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12261878 mov al, byte ptr [ecx + 0x12262211] */
  AL = (r8((uint32_t)(ECX + 0x12262211)));
  /* 1226187e jmp dword ptr [eax*4 + 0x122621fd] */
  switch (EAX) {
    case 0: goto L_12261890;
    case 1: goto L_122618c9;
    case 2: goto L_12261885;
    case 3: goto L_122618d3;
    case 4: goto L_122618dc;
    default: x86_unimpl("switch@0x1226187e out of table"); return;
  }
L_12261885:;
  /* 12261885 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261888 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1226188b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1226188e jmp 0x122618dc */
  goto L_122618dc;
L_12261890:;
  /* 12261890 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12261893 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12261896 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261899 jne 0x122618bb */
  if (!C.zf) goto L_122618bb;
  /* 1226189b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226189e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122618a2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122618a5 jne 0x122618bb */
  if (!C.zf) goto L_122618bb;
  /* 122618a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122618aa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122618ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 122618b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122618b3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 122618b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122618b9 jmp 0x122618c7 */
  goto L_122618c7;
L_122618bb:;
  /* 122618bb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 122618c2 jmp 0x12261650 */
  goto L_12261650;
L_122618c7:;
  /* 122618c7 jmp 0x122618dc */
  goto L_122618dc;
L_122618c9:;
  /* 122618c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122618cc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 122618ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122618d1 jmp 0x122618dc */
  goto L_122618dc;
L_122618d3:;
  /* 122618d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122618d6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 122618d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122618dc:;
  /* 122618dc jmp 0x122621a2 */
  goto L_122621a2;
L_122618e1:;
  /* 122618e1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 122618e5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 122618eb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 122618f1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122618f4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 122618fa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261901 ja 0x12261fc7 */
  if ((!C.cf&&!C.zf)) goto L_12261fc7;
  /* 12261907 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1226190d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226190f mov cl, byte ptr [edx + 0x1226227c] */
  CL = (r8((uint32_t)(EDX + 0x1226227c)));
  /* 12261915 jmp dword ptr [ecx*4 + 0x12262240] */
  switch (ECX) {
    case 0: goto L_1226191c;
    case 1: goto L_12261bb0;
    case 2: goto L_12261a40;
    case 3: goto L_12261ce9;
    case 4: goto L_122619ab;
    case 5: goto L_12261931;
    case 6: goto L_12261cbb;
    case 7: goto L_12261bc0;
    case 8: goto L_12261b65;
    case 9: goto L_12261d35;
    case 10: goto L_12261cdf;
    case 11: goto L_12261a56;
    case 12: goto L_12261cd3;
    case 13: goto L_12261cf5;
    case 14: goto L_12261fc7;
    default: x86_unimpl("switch@0x12261915 out of table"); return;
  }
L_1226191c:;
  /* 1226191c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226191f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12261924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261926 jne 0x12261931 */
  if (!C.zf) goto L_12261931;
  /* 12261928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226192b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1226192e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12261931:;
  /* 12261931 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261934 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1226193a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226193c je 0x12261977 */
  if (C.zf) goto L_12261977;
  /* 1226193e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12261941 push eax */
  push32((uint32_t)(EAX));
  /* 12261942 call 0x12262410 */
  push32(0x12261947u); f_12262410();
  /* 12261947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226194a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1226194e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12261952 push ecx */
  push32((uint32_t)(ECX));
  /* 12261953 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12261959 push edx */
  push32((uint32_t)(EDX));
  /* 1226195a call 0x122634f0 */
  push32(0x1226195fu); f_122634f0();
  /* 1226195f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261962 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12261965 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261969 jge 0x12261975 */
  if ((C.sf==C.of)) goto L_12261975;
  /* 1226196b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12261975:;
  /* 12261975 jmp 0x1226199d */
  goto L_1226199d;
L_12261977:;
  /* 12261977 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1226197a push eax */
  push32((uint32_t)(EAX));
  /* 1226197b call 0x122623d0 */
  push32(0x12261980u); f_122623d0();
  /* 12261980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261983 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1226198a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12261990 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12261996 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1226199d:;
  /* 1226199d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 122619a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122619a6 jmp 0x12261fc7 */
  goto L_12261fc7;
L_122619ab:;
  /* 122619ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 122619ae push eax */
  push32((uint32_t)(EAX));
  /* 122619af call 0x122623d0 */
  push32(0x122619b4u); f_122623d0();
  /* 122619b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122619b7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 122619bd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122619c4 je 0x122619d2 */
  if (C.zf) goto L_122619d2;
  /* 122619c6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 122619cc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122619d0 jne 0x122619ec */
  if (!C.zf) goto L_122619ec;
L_122619d2:;
  /* 122619d2 mov edx, dword ptr [0x12284fb0] */
  EDX = (r32((uint32_t)(0x12284fb0)));
  /* 122619d8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122619db mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122619de push eax */
  push32((uint32_t)(EAX));
  /* 122619df call 0x1225d430 */
  push32(0x122619e4u); f_1225d430();
  /* 122619e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122619e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122619ea jmp 0x12261a3b */
  goto L_12261a3b;
L_122619ec:;
  /* 122619ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122619ef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 122619f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122619f7 je 0x12261a1c */
  if (C.zf) goto L_12261a1c;
  /* 122619f9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 122619ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12261a02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12261a05 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12261a0b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12261a0e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12261a10 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12261a13 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12261a1a jmp 0x12261a3b */
  goto L_12261a3b;
L_12261a1c:;
  /* 12261a1c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12261a23 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12261a29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12261a2c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12261a2f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12261a35 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12261a38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12261a3b:;
  /* 12261a3b jmp 0x12261fc7 */
  goto L_12261fc7;
L_12261a40:;
  /* 12261a40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261a43 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12261a49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12261a4b jne 0x12261a56 */
  if (!C.zf) goto L_12261a56;
  /* 12261a4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261a50 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12261a53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12261a56:;
  /* 12261a56 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261a5d jne 0x12261a6b */
  if (!C.zf) goto L_12261a6b;
  /* 12261a5f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12261a69 jmp 0x12261a77 */
  goto L_12261a77;
L_12261a6b:;
  /* 12261a6b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12261a71 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12261a77:;
  /* 12261a77 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12261a7d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12261a83 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12261a86 push edx */
  push32((uint32_t)(EDX));
  /* 12261a87 call 0x122623d0 */
  push32(0x12261a8cu); f_122623d0();
  /* 12261a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261a8f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12261a92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261a95 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12261a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261a9c je 0x12261b06 */
  if (C.zf) goto L_12261b06;
  /* 12261a9e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261aa2 jne 0x12261aad */
  if (!C.zf) goto L_12261aad;
  /* 12261aa4 mov ecx, dword ptr [0x12284fb4] */
  ECX = (r32((uint32_t)(0x12284fb4)));
  /* 12261aaa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12261aad:;
  /* 12261aad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12261ab4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261ab7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12261abd:;
  /* 12261abd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12261ac3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12261ac9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261acc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12261ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261ad4 je 0x12261af6 */
  if (C.zf) goto L_12261af6;
  /* 12261ad6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12261adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12261ade mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12261ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261ae3 je 0x12261af6 */
  if (C.zf) goto L_12261af6;
  /* 12261ae5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12261aeb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261aee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12261af4 jmp 0x12261abd */
  goto L_12261abd;
L_12261af6:;
  /* 12261af6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12261afc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261aff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12261b01 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12261b04 jmp 0x12261b60 */
  goto L_12261b60;
L_12261b06:;
  /* 12261b06 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261b0a jne 0x12261b14 */
  if (!C.zf) goto L_12261b14;
  /* 12261b0c mov eax, dword ptr [0x12284fb0] */
  EAX = (r32((uint32_t)(0x12284fb0)));
  /* 12261b11 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12261b14:;
  /* 12261b14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261b17 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12261b1d:;
  /* 12261b1d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12261b23 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12261b29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261b2c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12261b32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261b34 je 0x12261b54 */
  if (C.zf) goto L_12261b54;
  /* 12261b36 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12261b3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12261b3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261b41 je 0x12261b54 */
  if (C.zf) goto L_12261b54;
  /* 12261b43 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12261b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261b4c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12261b52 jmp 0x12261b1d */
  goto L_12261b1d;
L_12261b54:;
  /* 12261b54 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12261b5a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261b5d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12261b60:;
  /* 12261b60 jmp 0x12261fc7 */
  goto L_12261fc7;
L_12261b65:;
  /* 12261b65 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12261b68 push edx */
  push32((uint32_t)(EDX));
  /* 12261b69 call 0x122623d0 */
  push32(0x12261b6eu); f_122623d0();
  /* 12261b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261b71 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12261b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261b7a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12261b7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261b7f je 0x12261b93 */
  if (C.zf) goto L_12261b93;
  /* 12261b81 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12261b87 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12261b8e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12261b91 jmp 0x12261ba1 */
  goto L_12261ba1;
L_12261b93:;
  /* 12261b93 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12261b99 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12261b9f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12261ba1:;
  /* 12261ba1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12261bab jmp 0x12261fc7 */
  goto L_12261fc7;
L_12261bb0:;
  /* 12261bb0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12261bb7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12261bba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12261bbd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12261bc0:;
  /* 12261bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261bc3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12261bc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12261bc8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12261bce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12261bd1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261bd8 jge 0x12261be6 */
  if ((C.sf==C.of)) goto L_12261be6;
  /* 12261bda mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12261be4 jmp 0x12261c02 */
  goto L_12261c02;
L_12261be6:;
  /* 12261be6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261bed jne 0x12261c02 */
  if (!C.zf) goto L_12261c02;
  /* 12261bef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12261bf3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261bf6 jne 0x12261c02 */
  if (!C.zf) goto L_12261c02;
  /* 12261bf8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12261c02:;
  /* 12261c02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12261c05 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261c08 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12261c0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12261c0e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261c11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12261c13 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12261c16 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12261c1c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12261c22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12261c25 push ecx */
  push32((uint32_t)(ECX));
  /* 12261c26 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12261c2c push edx */
  push32((uint32_t)(EDX));
  /* 12261c2d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12261c31 push eax */
  push32((uint32_t)(EAX));
  /* 12261c32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261c35 push ecx */
  push32((uint32_t)(ECX));
  /* 12261c36 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12261c3c push edx */
  push32((uint32_t)(EDX));
  /* 12261c3d call dword ptr [0x122853a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122853a0))), 0x12261c43u);
  /* 12261c43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261c46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261c49 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12261c4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261c50 je 0x12261c68 */
  if (C.zf) goto L_12261c68;
  /* 12261c52 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261c59 jne 0x12261c68 */
  if (!C.zf) goto L_12261c68;
  /* 12261c5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261c5e push ecx */
  push32((uint32_t)(ECX));
  /* 12261c5f call dword ptr [0x122853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122853ac))), 0x12261c65u);
  /* 12261c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12261c68:;
  /* 12261c68 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12261c6c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261c6f jne 0x12261c8a */
  if (!C.zf) goto L_12261c8a;
  /* 12261c71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261c74 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12261c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261c7b jne 0x12261c8a */
  if (!C.zf) goto L_12261c8a;
  /* 12261c7d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261c80 push ecx */
  push32((uint32_t)(ECX));
  /* 12261c81 call dword ptr [0x122853a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122853a4))), 0x12261c87u);
  /* 12261c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12261c8a:;
  /* 12261c8a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261c8d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12261c90 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261c93 jne 0x12261ca7 */
  if (!C.zf) goto L_12261ca7;
  /* 12261c95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261c98 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12261c9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12261c9e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261ca1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261ca4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12261ca7:;
  /* 12261ca7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261caa push eax */
  push32((uint32_t)(EAX));
  /* 12261cab call 0x1225d430 */
  push32(0x12261cb0u); f_1225d430();
  /* 12261cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261cb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12261cb6 jmp 0x12261fc7 */
  goto L_12261fc7;
L_12261cbb:;
  /* 12261cbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261cbe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12261cc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12261cc4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12261cce jmp 0x12261d55 */
  goto L_12261d55;
L_12261cd3:;
  /* 12261cd3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12261cdd jmp 0x12261d55 */
  goto L_12261d55;
L_12261cdf:;
  /* 12261cdf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12261ce9:;
  /* 12261ce9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12261cf3 jmp 0x12261cff */
  goto L_12261cff;
L_12261cf5:;
  /* 12261cf5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12261cff:;
  /* 12261cff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12261d09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261d0c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12261d12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261d14 je 0x12261d33 */
  if (C.zf) goto L_12261d33;
  /* 12261d16 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12261d1d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12261d23 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261d26 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12261d2c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12261d33:;
  /* 12261d33 jmp 0x12261d55 */
  goto L_12261d55;
L_12261d35:;
  /* 12261d35 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12261d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261d42 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12261d48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12261d4a je 0x12261d55 */
  if (C.zf) goto L_12261d55;
  /* 12261d4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261d4f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12261d52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12261d55:;
  /* 12261d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261d58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12261d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261d5f je 0x12261d7e */
  if (C.zf) goto L_12261d7e;
  /* 12261d61 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12261d64 push ecx */
  push32((uint32_t)(ECX));
  /* 12261d65 call 0x122623f0 */
  push32(0x12261d6au); f_122623f0();
  /* 12261d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261d6d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12261d73 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12261d79 jmp 0x12261e0f */
  goto L_12261e0f;
L_12261d7e:;
  /* 12261d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261d81 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12261d84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261d86 je 0x12261dd0 */
  if (C.zf) goto L_12261dd0;
  /* 12261d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261d8b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12261d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261d90 je 0x12261db0 */
  if (C.zf) goto L_12261db0;
  /* 12261d92 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12261d95 push ecx */
  push32((uint32_t)(ECX));
  /* 12261d96 call 0x122623d0 */
  push32(0x12261d9bu); f_122623d0();
  /* 12261d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261d9e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12261da1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12261da2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12261da8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12261dae jmp 0x12261dce */
  goto L_12261dce;
L_12261db0:;
  /* 12261db0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12261db3 push edx */
  push32((uint32_t)(EDX));
  /* 12261db4 call 0x122623d0 */
  push32(0x12261db9u); f_122623d0();
  /* 12261db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261dbc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12261dc1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12261dc2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12261dc8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12261dce:;
  /* 12261dce jmp 0x12261e0f */
  goto L_12261e0f;
L_12261dd0:;
  /* 12261dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261dd3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12261dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261dd8 je 0x12261df5 */
  if (C.zf) goto L_12261df5;
  /* 12261dda lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12261ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12261dde call 0x122623d0 */
  push32(0x12261de3u); f_122623d0();
  /* 12261de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261de6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12261de7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12261ded mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12261df3 jmp 0x12261e0f */
  goto L_12261e0f;
L_12261df5:;
  /* 12261df5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12261df8 push edx */
  push32((uint32_t)(EDX));
  /* 12261df9 call 0x122623d0 */
  push32(0x12261dfeu); f_122623d0();
  /* 12261dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12261e01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12261e03 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12261e09 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12261e0f:;
  /* 12261e0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261e12 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12261e15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261e17 je 0x12261e57 */
  if (C.zf) goto L_12261e57;
  /* 12261e19 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261e20 jg 0x12261e57 */
  if ((!C.zf&&C.sf==C.of)) goto L_12261e57;
  /* 12261e22 jl 0x12261e2d */
  if ((C.sf!=C.of)) goto L_12261e2d;
  /* 12261e24 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261e2b jae 0x12261e57 */
  if (!C.cf) goto L_12261e57;
L_12261e2d:;
  /* 12261e2d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12261e33 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12261e35 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12261e3b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261e3e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12261e40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12261e46 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12261e4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261e4f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12261e52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12261e55 jmp 0x12261e6f */
  goto L_12261e6f;
L_12261e57:;
  /* 12261e57 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12261e5d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12261e63 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12261e69 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12261e6f:;
  /* 12261e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261e72 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12261e78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261e7a jne 0x12261e97 */
  if (!C.zf) goto L_12261e97;
  /* 12261e7c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12261e82 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12261e88 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12261e8b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12261e91 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12261e97:;
  /* 12261e97 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261e9e jge 0x12261eac */
  if ((C.sf==C.of)) goto L_12261eac;
  /* 12261ea0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12261eaa jmp 0x12261eb5 */
  goto L_12261eb5;
L_12261eac:;
  /* 12261eac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261eaf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12261eb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12261eb5:;
  /* 12261eb5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12261ebb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12261ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261ec3 jne 0x12261ecc */
  if (!C.zf) goto L_12261ecc;
  /* 12261ec5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12261ecc:;
  /* 12261ecc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12261ecf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12261ed2:;
  /* 12261ed2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12261ed8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12261ede sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261ee1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12261ee7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12261ee9 jg 0x12261eff */
  if ((!C.zf&&C.sf==C.of)) goto L_12261eff;
  /* 12261eeb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12261ef1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12261ef7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12261ef9 je 0x12261f80 */
  if (C.zf) goto L_12261f80;
L_12261eff:;
  /* 12261eff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12261f05 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12261f06 push edx */
  push32((uint32_t)(EDX));
  /* 12261f07 push eax */
  push32((uint32_t)(EAX));
  /* 12261f08 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12261f0e push edx */
  push32((uint32_t)(EDX));
  /* 12261f0f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12261f15 push eax */
  push32((uint32_t)(EAX));
  /* 12261f16 call 0x12261290 */
  push32(0x12261f1bu); f_12261290();
  /* 12261f1b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261f1e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12261f24 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12261f2a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12261f2b push edx */
  push32((uint32_t)(EDX));
  /* 12261f2c push eax */
  push32((uint32_t)(EAX));
  /* 12261f2d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12261f33 push ecx */
  push32((uint32_t)(ECX));
  /* 12261f34 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12261f3a push edx */
  push32((uint32_t)(EDX));
  /* 12261f3b call 0x12261220 */
  push32(0x12261f40u); f_12261220();
  /* 12261f40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12261f46 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12261f4c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261f53 jle 0x12261f67 */
  if ((C.zf||C.sf!=C.of)) goto L_12261f67;
  /* 12261f55 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12261f5b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261f61 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12261f67:;
  /* 12261f67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261f6a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12261f70 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12261f72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261f75 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261f78 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12261f7b jmp 0x12261ed2 */
  goto L_12261ed2;
L_12261f80:;
  /* 12261f80 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12261f83 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261f86 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12261f89 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261f8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261f8f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12261f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261f95 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12261f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261f9c je 0x12261fc7 */
  if (C.zf) goto L_12261fc7;
  /* 12261f9e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261fa1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12261fa4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261fa7 jne 0x12261faf */
  if (!C.zf) goto L_12261faf;
  /* 12261fa9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261fad jne 0x12261fc7 */
  if (!C.zf) goto L_12261fc7;
L_12261faf:;
  /* 12261faf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261fb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12261fb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12261fb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12261fbb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12261fbe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12261fc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12261fc4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12261fc7:;
  /* 12261fc7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12261fce jne 0x122621a2 */
  if (!C.zf) goto L_122621a2;
  /* 12261fd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261fd7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12261fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12261fdc je 0x1226202d */
  if (C.zf) goto L_1226202d;
  /* 12261fde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261fe1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12261fe7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12261fe9 je 0x12261ffb */
  if (C.zf) goto L_12261ffb;
  /* 12261feb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12261ff2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12261ff9 jmp 0x1226202d */
  goto L_1226202d;
L_12261ffb:;
  /* 12261ffb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12261ffe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12262001 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262003 je 0x12262015 */
  if (C.zf) goto L_12262015;
  /* 12262005 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1226200c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12262013 jmp 0x1226202d */
  goto L_1226202d;
L_12262015:;
  /* 12262015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262018 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1226201b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226201d je 0x1226202d */
  if (C.zf) goto L_1226202d;
  /* 1226201f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12262026 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1226202d:;
  /* 1226202d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12262033 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262036 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262039 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1226203f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262042 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12262045 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262047 jne 0x12262065 */
  if (!C.zf) goto L_12262065;
  /* 12262049 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1226204f push eax */
  push32((uint32_t)(EAX));
  /* 12262050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262053 push ecx */
  push32((uint32_t)(ECX));
  /* 12262054 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1226205a push edx */
  push32((uint32_t)(EDX));
  /* 1226205b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1226205d call 0x12262340 */
  push32(0x12262062u); f_12262340();
  /* 12262062 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12262065:;
  /* 12262065 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1226206b push eax */
  push32((uint32_t)(EAX));
  /* 1226206c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226206f push ecx */
  push32((uint32_t)(ECX));
  /* 12262070 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12262073 push edx */
  push32((uint32_t)(EDX));
  /* 12262074 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1226207a push eax */
  push32((uint32_t)(EAX));
  /* 1226207b call 0x12262380 */
  push32(0x12262080u); f_12262380();
  /* 12262080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262086 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12262089 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226208b je 0x122620b3 */
  if (C.zf) goto L_122620b3;
  /* 1226208d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262090 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12262093 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262095 jne 0x122620b3 */
  if (!C.zf) goto L_122620b3;
  /* 12262097 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1226209d push eax */
  push32((uint32_t)(EAX));
  /* 1226209e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122620a1 push ecx */
  push32((uint32_t)(ECX));
  /* 122620a2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 122620a8 push edx */
  push32((uint32_t)(EDX));
  /* 122620a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 122620ab call 0x12262340 */
  push32(0x122620b0u); f_12262340();
  /* 122620b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122620b3:;
  /* 122620b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122620b7 je 0x12262161 */
  if (C.zf) goto L_12262161;
  /* 122620bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122620c1 jle 0x12262161 */
  if ((C.zf||C.sf!=C.of)) goto L_12262161;
  /* 122620c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122620ca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 122620d0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122620d3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_122620d9:;
  /* 122620d9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 122620df mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 122620e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122620e8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 122620ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122620f0 je 0x1226215f */
  if (C.zf) goto L_1226215f;
  /* 122620f2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 122620f8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 122620fb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12262102 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12262109 push eax */
  push32((uint32_t)(EAX));
  /* 1226210a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12262110 push ecx */
  push32((uint32_t)(ECX));
  /* 12262111 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12262117 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226211a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12262120 call 0x122634f0 */
  push32(0x12262125u); f_122634f0();
  /* 12262125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262128 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1226212e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262135 jg 0x12262139 */
  if ((!C.zf&&C.sf==C.of)) goto L_12262139;
  /* 12262137 jmp 0x1226215f */
  goto L_1226215f;
L_12262139:;
  /* 12262139 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1226213f push eax */
  push32((uint32_t)(EAX));
  /* 12262140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262143 push ecx */
  push32((uint32_t)(ECX));
  /* 12262144 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1226214a push edx */
  push32((uint32_t)(EDX));
  /* 1226214b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12262151 push eax */
  push32((uint32_t)(EAX));
  /* 12262152 call 0x12262380 */
  push32(0x12262157u); f_12262380();
  /* 12262157 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226215a jmp 0x122620d9 */
  goto L_122620d9;
L_1226215f:;
  /* 1226215f jmp 0x1226217c */
  goto L_1226217c;
L_12262161:;
  /* 12262161 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12262167 push ecx */
  push32((uint32_t)(ECX));
  /* 12262168 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226216b push edx */
  push32((uint32_t)(EDX));
  /* 1226216c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226216f push eax */
  push32((uint32_t)(EAX));
  /* 12262170 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12262173 push ecx */
  push32((uint32_t)(ECX));
  /* 12262174 call 0x12262380 */
  push32(0x12262179u); f_12262380();
  /* 12262179 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226217c:;
  /* 1226217c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226217f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12262182 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262184 je 0x122621a2 */
  if (C.zf) goto L_122621a2;
  /* 12262186 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1226218c push eax */
  push32((uint32_t)(EAX));
  /* 1226218d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262190 push ecx */
  push32((uint32_t)(ECX));
  /* 12262191 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12262197 push edx */
  push32((uint32_t)(EDX));
  /* 12262198 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1226219a call 0x12262340 */
  push32(0x1226219fu); f_12262340();
  /* 1226219f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122621a2:;
  /* 122621a2 jmp 0x122615b4 */
  goto L_122615b4;
L_122621a7:;
  /* 122621a7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 122621ad pop edi */
  EDI = (pop32());
  /* 122621ae pop esi */
  ESI = (pop32());
  /* 122621af pop ebx */
  EBX = (pop32());
  /* 122621b0 mov esp, ebp */
  ESP = (EBP);
  /* 122621b2 pop ebp */
  EBP = (pop32());
  /* 122621b3 ret  */
  ESPCHK(0x12261590u, _esp0);
  ESP += 4; return;
}

/* FUN_100122c0 @ 0x122622c0 (119 bytes, 44 insns) */
void f_122622c0(void) {
  FTRACE(0x122622c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122622c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122622c1 mov ebp, esp */
  EBP = (ESP);
  /* 122622c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122622c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122622c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122622ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122622cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122622d0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122622d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122622d6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122622da jl 0x12262302 */
  if ((C.sf!=C.of)) goto L_12262302;
  /* 122622dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122622df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122622e1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 122622e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 122622e6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 122622ea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122622f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122622f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122622f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122622f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122622fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122622fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12262300 jmp 0x12262315 */
  goto L_12262315;
L_12262302:;
  /* 12262302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262305 push edx */
  push32((uint32_t)(EDX));
  /* 12262306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262309 push eax */
  push32((uint32_t)(EAX));
  /* 1226230a call 0x12261310 */
  push32(0x1226230fu); f_12261310();
  /* 1226230f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262312 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12262315:;
  /* 12262315 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262319 jne 0x12262326 */
  if (!C.zf) goto L_12262326;
  /* 1226231b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226231e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12262324 jmp 0x12262333 */
  goto L_12262333;
L_12262326:;
  /* 12262326 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262329 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226232b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226232e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262331 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12262333:;
  /* 12262333 mov esp, ebp */
  ESP = (EBP);
  /* 12262335 pop ebp */
  EBP = (pop32());
  /* 12262336 ret  */
  ESPCHK(0x122622c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012340 @ 0x12262340 (53 bytes, 23 insns) */
void f_12262340(void) {
  FTRACE(0x12262340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262340 push ebp */
  push32((uint32_t)(EBP));
  /* 12262341 mov ebp, esp */
  EBP = (ESP);
L_12262343:;
  /* 12262343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262346 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262349 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226234c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1226234f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262351 jle 0x12262373 */
  if ((C.zf||C.sf!=C.of)) goto L_12262373;
  /* 12262353 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12262356 push edx */
  push32((uint32_t)(EDX));
  /* 12262357 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226235a push eax */
  push32((uint32_t)(EAX));
  /* 1226235b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226235e push ecx */
  push32((uint32_t)(ECX));
  /* 1226235f call 0x122622c0 */
  push32(0x12262364u); f_122622c0();
  /* 12262364 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262367 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226236a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226236d jne 0x12262371 */
  if (!C.zf) goto L_12262371;
  /* 1226236f jmp 0x12262373 */
  goto L_12262373;
L_12262371:;
  /* 12262371 jmp 0x12262343 */
  goto L_12262343;
L_12262373:;
  /* 12262373 pop ebp */
  EBP = (pop32());
  /* 12262374 ret  */
  ESPCHK(0x12262340u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x12262380 (74 bytes, 31 insns) */
void f_12262380(void) {
  FTRACE(0x12262380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262380 push ebp */
  push32((uint32_t)(EBP));
  /* 12262381 mov ebp, esp */
  EBP = (ESP);
  /* 12262383 push ecx */
  push32((uint32_t)(ECX));
L_12262384:;
  /* 12262384 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262387 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226238a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226238d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12262390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262392 jle 0x122623c6 */
  if ((C.zf||C.sf!=C.of)) goto L_122623c6;
  /* 12262394 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12262397 push edx */
  push32((uint32_t)(EDX));
  /* 12262398 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226239b push eax */
  push32((uint32_t)(EAX));
  /* 1226239c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226239f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122623a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122623a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122623a8 push eax */
  push32((uint32_t)(EAX));
  /* 122623a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122623ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122623af mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122623b2 call 0x122622c0 */
  push32(0x122623b7u); f_122622c0();
  /* 122623b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122623ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122623bd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122623c0 jne 0x122623c4 */
  if (!C.zf) goto L_122623c4;
  /* 122623c2 jmp 0x122623c6 */
  goto L_122623c6;
L_122623c4:;
  /* 122623c4 jmp 0x12262384 */
  goto L_12262384;
L_122623c6:;
  /* 122623c6 mov esp, ebp */
  ESP = (EBP);
  /* 122623c8 pop ebp */
  EBP = (pop32());
  /* 122623c9 ret  */
  ESPCHK(0x12262380u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x122623d0 (26 bytes, 12 insns) */
void f_122623d0(void) {
  FTRACE(0x122623d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122623d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122623d1 mov ebp, esp */
  EBP = (ESP);
  /* 122623d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122623d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122623d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122623db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122623de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122623e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122623e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122623e5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 122623e8 pop ebp */
  EBP = (pop32());
  /* 122623e9 ret  */
  ESPCHK(0x122623d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123f0 @ 0x122623f0 (31 bytes, 14 insns) */
void f_122623f0(void) {
  FTRACE(0x122623f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122623f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122623f1 mov ebp, esp */
  EBP = (ESP);
  /* 122623f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122623f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122623f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122623fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122623fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12262400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262403 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12262405 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262408 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1226240a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1226240d pop ebp */
  EBP = (pop32());
  /* 1226240e ret  */
  ESPCHK(0x122623f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012410 @ 0x12262410 (27 bytes, 12 insns) */
void f_12262410(void) {
  FTRACE(0x12262410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262410 push ebp */
  push32((uint32_t)(EBP));
  /* 12262411 mov ebp, esp */
  EBP = (ESP);
  /* 12262413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262416 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12262418 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226241b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226241e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12262420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262423 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12262425 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12262429 pop ebp */
  EBP = (pop32());
  /* 1226242a ret  */
  ESPCHK(0x12262410u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12262430 (145 bytes, 42 insns) */
void f_12262430(void) {
  FTRACE(0x12262430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262430 push ebp */
  push32((uint32_t)(EBP));
  /* 12262431 mov ebp, esp */
  EBP = (ESP);
  /* 12262433 push ecx */
  push32((uint32_t)(ECX));
  /* 12262434 call 0x122624e0 */
  push32(0x12262439u); f_122624e0();
  /* 12262439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226243c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1226243e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12262445 jmp 0x12262450 */
  goto L_12262450;
L_12262447:;
  /* 12262447 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226244a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226244d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12262450:;
  /* 12262450 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262454 jae 0x1226247a */
  if (!C.cf) goto L_1226247a;
  /* 12262456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262459 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226245c cmp ecx, dword ptr [eax*8 + 0x12284fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12284fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262463 jne 0x12262478 */
  if (!C.zf) goto L_12262478;
  /* 12262465 call 0x122624d0 */
  push32(0x1226246au); f_122624d0();
  /* 1226246a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226246d mov ecx, dword ptr [edx*8 + 0x12284fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12284fbc)));
  /* 12262474 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12262476 jmp 0x122624bd */
  goto L_122624bd;
L_12262478:;
  /* 12262478 jmp 0x12262447 */
  goto L_12262447;
L_1226247a:;
  /* 1226247a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226247e jb 0x12262493 */
  if (C.cf) goto L_12262493;
  /* 12262480 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262484 ja 0x12262493 */
  if ((!C.cf&&!C.zf)) goto L_12262493;
  /* 12262486 call 0x122624d0 */
  push32(0x1226248bu); f_122624d0();
  /* 1226248b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12262491 jmp 0x122624bd */
  goto L_122624bd;
L_12262493:;
  /* 12262493 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226249a jb 0x122624b2 */
  if (C.cf) goto L_122624b2;
  /* 1226249c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122624a3 ja 0x122624b2 */
  if ((!C.cf&&!C.zf)) goto L_122624b2;
  /* 122624a5 call 0x122624d0 */
  push32(0x122624aau); f_122624d0();
  /* 122624aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 122624b0 jmp 0x122624bd */
  goto L_122624bd;
L_122624b2:;
  /* 122624b2 call 0x122624d0 */
  push32(0x122624b7u); f_122624d0();
  /* 122624b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_122624bd:;
  /* 122624bd mov esp, ebp */
  ESP = (EBP);
  /* 122624bf pop ebp */
  EBP = (pop32());
  /* 122624c0 ret  */
  ESPCHK(0x12262430u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x122624d0 (13 bytes, 6 insns) */
void f_122624d0(void) {
  FTRACE(0x122624d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122624d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122624d1 mov ebp, esp */
  EBP = (ESP);
  /* 122624d3 call 0x1225a040 */
  push32(0x122624d8u); f_1225a040();
  /* 122624d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122624db pop ebp */
  EBP = (pop32());
  /* 122624dc ret  */
  ESPCHK(0x122624d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x122624e0 (13 bytes, 6 insns) */
void f_122624e0(void) {
  FTRACE(0x122624e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122624e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122624e1 mov ebp, esp */
  EBP = (ESP);
  /* 122624e3 call 0x1225a040 */
  push32(0x122624e8u); f_1225a040();
  /* 122624e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122624eb pop ebp */
  EBP = (pop32());
  /* 122624ec ret  */
  ESPCHK(0x122624e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x122624f0 (664 bytes, 255 insns) [15 switch table(s)] */
void f_122624f0(void) {
  FTRACE(0x122624f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122624f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122624f1 mov ebp, esp */
  EBP = (ESP);
  /* 122624f3 push edi */
  push32((uint32_t)(EDI));
  /* 122624f4 push esi */
  push32((uint32_t)(ESI));
  /* 122624f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122624f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122624fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 122624fe mov eax, ecx */
  EAX = (ECX);
  /* 12262500 mov edx, ecx */
  EDX = (ECX);
  /* 12262502 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12262504 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262506 jbe 0x12262510 */
  if ((C.cf||C.zf)) goto L_12262510;
  /* 12262508 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226250a jb 0x12262688 */
  if (C.cf) goto L_12262688;
L_12262510:;
  /* 12262510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12262516 jne 0x1226252c */
  if (!C.zf) goto L_1226252c;
  /* 12262518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1226251b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1226251e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262521 jb 0x1226254c */
  if (C.cf) goto L_1226254c;
  /* 12262523 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12262525 jmp dword ptr [edx*4 + 0x12262638] */
  switch (EDX) {
    case 0: goto L_12262648;
    case 1: goto L_12262650;
    case 2: goto L_1226265c;
    case 3: goto L_12262670;
    default: x86_unimpl("switch@0x12262525 out of table"); return;
  }
L_1226252c:;
  /* 1226252c mov eax, edi */
  EAX = (EDI);
  /* 1226252e mov edx, 3 */
  EDX = (0x3u);
  /* 12262533 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262536 jb 0x12262544 */
  if (C.cf) goto L_12262544;
  /* 12262538 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1226253b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226253d jmp dword ptr [eax*4 + 0x12262550] */
  switch (EAX) {
    case 1: goto L_12262560;
    case 2: goto L_1226258c;
    case 3: goto L_122625b0;
    default: x86_unimpl("switch@0x1226253d out of table"); return;
  }
L_12262544:;
  /* 12262544 jmp dword ptr [ecx*4 + 0x12262648] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12262648)))); return;
  /* 1226254b nop  */
  /* nop */
L_1226254c:;
  /* 1226254c jmp dword ptr [ecx*4 + 0x122625cc] */
  switch (ECX) {
    case 0: goto L_1226262f;
    case 1: goto L_1226261c;
    case 2: goto L_12262614;
    case 3: goto L_1226260c;
    case 4: goto L_12262604;
    case 5: goto L_122625fc;
    case 6: goto L_122625f4;
    case 7: goto L_122625ec;
    default: x86_unimpl("switch@0x1226254c out of table"); return;
  }
  /* 12262553 nop  */
  /* nop */
L_12262560:;
  /* 12262560 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12262562 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12262564 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12262566 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12262569 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1226256c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1226256f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12262572 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12262575 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12262578 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1226257b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226257e jb 0x1226254c */
  if (C.cf) goto L_1226254c;
  /* 12262580 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12262582 jmp dword ptr [edx*4 + 0x12262638] */
  switch (EDX) {
    case 0: goto L_12262648;
    case 1: goto L_12262650;
    case 2: goto L_1226265c;
    case 3: goto L_12262670;
    default: x86_unimpl("switch@0x12262582 out of table"); return;
  }
  /* 12262589 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1226258c:;
  /* 1226258c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1226258e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12262590 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12262592 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12262595 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12262598 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1226259b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1226259e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122625a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122625a4 jb 0x1226254c */
  if (C.cf) goto L_1226254c;
  /* 122625a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122625a8 jmp dword ptr [edx*4 + 0x12262638] */
  switch (EDX) {
    case 0: goto L_12262648;
    case 1: goto L_12262650;
    case 2: goto L_1226265c;
    case 3: goto L_12262670;
    default: x86_unimpl("switch@0x122625a8 out of table"); return;
  }
  /* 122625af nop  */
  /* nop */
L_122625b0:;
  /* 122625b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122625b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122625b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122625b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122625b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122625ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122625bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122625be jb 0x1226254c */
  if (C.cf) goto L_1226254c;
  /* 122625c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122625c2 jmp dword ptr [edx*4 + 0x12262638] */
  switch (EDX) {
    case 0: goto L_12262648;
    case 1: goto L_12262650;
    case 2: goto L_1226265c;
    case 3: goto L_12262670;
    default: x86_unimpl("switch@0x122625c2 out of table"); return;
  }
  /* 122625c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122625ec:;
  /* 122625ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 122625f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_122625f4:;
  /* 122625f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 122625f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_122625fc:;
  /* 122625fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12262600 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12262604:;
  /* 12262604 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12262608 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1226260c:;
  /* 1226260c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12262610 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12262614:;
  /* 12262614 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12262618 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1226261c:;
  /* 1226261c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12262620 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12262624 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1226262b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1226262d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1226262f:;
  /* 1226262f jmp dword ptr [edx*4 + 0x12262638] */
  switch (EDX) {
    case 0: goto L_12262648;
    case 1: goto L_12262650;
    case 2: goto L_1226265c;
    case 3: goto L_12262670;
    default: x86_unimpl("switch@0x1226262f out of table"); return;
  }
  /* 12262636 mov edi, edi */
  EDI = (EDI);
L_12262648:;
  /* 12262648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226264b pop esi */
  ESI = (pop32());
  /* 1226264c pop edi */
  EDI = (pop32());
  /* 1226264d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226264e ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
  /* 1226264f nop  */
  /* nop */
L_12262650:;
  /* 12262650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12262652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12262654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262657 pop esi */
  ESI = (pop32());
  /* 12262658 pop edi */
  EDI = (pop32());
  /* 12262659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226265a ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
  /* 1226265b nop  */
  /* nop */
L_1226265c:;
  /* 1226265c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1226265e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12262660 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12262663 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12262666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262669 pop esi */
  ESI = (pop32());
  /* 1226266a pop edi */
  EDI = (pop32());
  /* 1226266b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226266c ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
  /* 1226266d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12262670:;
  /* 12262670 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12262672 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12262674 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12262677 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1226267a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1226267d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12262680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262683 pop esi */
  ESI = (pop32());
  /* 12262684 pop edi */
  EDI = (pop32());
  /* 12262685 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12262686 ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
  /* 12262687 nop  */
  /* nop */
L_12262688:;
  /* 12262688 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1226268c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12262690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12262696 jne 0x122626bc */
  if (!C.zf) goto L_122626bc;
  /* 12262698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1226269b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1226269e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122626a1 jb 0x122626b0 */
  if (C.cf) goto L_122626b0;
  /* 122626a3 std  */
  C.df=1;
  /* 122626a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122626a6 cld  */
  C.df=0;
  /* 122626a7 jmp dword ptr [edx*4 + 0x122627d0] */
  switch (EDX) {
    case 0: goto L_122627e0;
    case 1: goto L_122627e8;
    case 2: goto L_122627f8;
    case 3: goto L_1226280c;
    default: x86_unimpl("switch@0x122626a7 out of table"); return;
  }
  /* 122626ae mov edi, edi */
  EDI = (EDI);
L_122626b0:;
  /* 122626b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122626b2 jmp dword ptr [ecx*4 + 0x12262780] */
  switch (ECX) {
    case 0: goto L_122627c7;
    default: x86_unimpl("switch@0x122626b2 out of table"); return;
  }
  /* 122626b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122626bc:;
  /* 122626bc mov eax, edi */
  EAX = (EDI);
  /* 122626be mov edx, 3 */
  EDX = (0x3u);
  /* 122626c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122626c6 jb 0x122626d4 */
  if (C.cf) goto L_122626d4;
  /* 122626c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122626cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122626cd jmp dword ptr [eax*4 + 0x122626d8] */
  switch (EAX) {
    case 1: goto L_122626e8;
    case 2: goto L_12262708;
    case 3: goto L_12262730;
    default: x86_unimpl("switch@0x122626cd out of table"); return;
  }
L_122626d4:;
  /* 122626d4 jmp dword ptr [ecx*4 + 0x122627d0] */
  switch (ECX) {
    case 0: goto L_122627e0;
    case 1: goto L_122627e8;
    case 2: goto L_122627f8;
    case 3: goto L_1226280c;
    default: x86_unimpl("switch@0x122626d4 out of table"); return;
  }
  /* 122626db nop  */
  /* nop */
L_122626e8:;
  /* 122626e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122626eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122626ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122626f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 122626f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122626f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 122626f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122626f8 jb 0x122626b0 */
  if (C.cf) goto L_122626b0;
  /* 122626fa std  */
  C.df=1;
  /* 122626fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122626fd cld  */
  C.df=0;
  /* 122626fe jmp dword ptr [edx*4 + 0x122627d0] */
  switch (EDX) {
    case 0: goto L_122627e0;
    case 1: goto L_122627e8;
    case 2: goto L_122627f8;
    case 3: goto L_1226280c;
    default: x86_unimpl("switch@0x122626fe out of table"); return;
  }
  /* 12262705 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12262708:;
  /* 12262708 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1226270b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1226270d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12262710 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12262713 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12262716 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12262719 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226271c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226271f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262722 jb 0x122626b0 */
  if (C.cf) goto L_122626b0;
  /* 12262724 std  */
  C.df=1;
  /* 12262725 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12262727 cld  */
  C.df=0;
  /* 12262728 jmp dword ptr [edx*4 + 0x122627d0] */
  switch (EDX) {
    case 0: goto L_122627e0;
    case 1: goto L_122627e8;
    case 2: goto L_122627f8;
    case 3: goto L_1226280c;
    default: x86_unimpl("switch@0x12262728 out of table"); return;
  }
  /* 1226272f nop  */
  /* nop */
L_12262730:;
  /* 12262730 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12262733 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12262735 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12262738 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1226273b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1226273e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12262741 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12262744 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12262747 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226274a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226274d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262750 jb 0x122626b0 */
  if (C.cf) goto L_122626b0;
  /* 12262756 std  */
  C.df=1;
  /* 12262757 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12262759 cld  */
  C.df=0;
  /* 1226275a jmp dword ptr [edx*4 + 0x122627d0] */
  switch (EDX) {
    case 0: goto L_122627e0;
    case 1: goto L_122627e8;
    case 2: goto L_122627f8;
    case 3: goto L_1226280c;
    default: x86_unimpl("switch@0x1226275a out of table"); return;
  }
  /* 12262761 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12262764 test byte ptr [edi], ah */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(AH); fl_logic(_r,8); }
  /* 12262766 adc cl, byte ptr es:[edi + 0x27941226] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDI + 0x27941226))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1226276e adc bl, byte ptr es:[edi + 0x27a41226] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDI + 0x27a41226))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12262776 adc ch, byte ptr es:[edi + 0x27b41226] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDI + 0x27b41226))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12262784 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12262788 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1226278c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12262790 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12262794 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12262798 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1226279c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 122627a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 122627a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 122627a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 122627ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 122627b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 122627b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 122627b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 122627bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 122627c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122627c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122627c7:;
  /* 122627c7 jmp dword ptr [edx*4 + 0x122627d0] */
  switch (EDX) {
    case 0: goto L_122627e0;
    case 1: goto L_122627e8;
    case 2: goto L_122627f8;
    case 3: goto L_1226280c;
    default: x86_unimpl("switch@0x122627c7 out of table"); return;
  }
  /* 122627ce mov edi, edi */
  EDI = (EDI);
L_122627e0:;
  /* 122627e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122627e3 pop esi */
  ESI = (pop32());
  /* 122627e4 pop edi */
  EDI = (pop32());
  /* 122627e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122627e6 ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
  /* 122627e7 nop  */
  /* nop */
L_122627e8:;
  /* 122627e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122627eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122627ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122627f1 pop esi */
  ESI = (pop32());
  /* 122627f2 pop edi */
  EDI = (pop32());
  /* 122627f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122627f4 ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
  /* 122627f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122627f8:;
  /* 122627f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122627fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122627fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12262801 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12262804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262807 pop esi */
  ESI = (pop32());
  /* 12262808 pop edi */
  EDI = (pop32());
  /* 12262809 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226280a ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
  /* 1226280b nop  */
  /* nop */
L_1226280c:;
  /* 1226280c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1226280f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12262812 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12262815 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12262818 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1226281b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1226281e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262821 pop esi */
  ESI = (pop32());
  /* 12262822 pop edi */
  EDI = (pop32());
  /* 12262823 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12262824 ret  */
  ESPCHK(0x122624f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x12262830 (421 bytes, 148 insns) */
void f_12262830(void) {
  FTRACE(0x12262830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262830 push ebp */
  push32((uint32_t)(EBP));
  /* 12262831 mov ebp, esp */
  EBP = (ESP);
  /* 12262833 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12262835 push 0x122823f8 */
  push32((uint32_t)(0x122823f8u));
  /* 1226283a push 0x12263708 */
  push32((uint32_t)(0x12263708u));
  /* 1226283f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12262845 push eax */
  push32((uint32_t)(EAX));
  /* 12262846 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1226284d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262850 push ebx */
  push32((uint32_t)(EBX));
  /* 12262851 push esi */
  push32((uint32_t)(ESI));
  /* 12262852 push edi */
  push32((uint32_t)(EDI));
  /* 12262853 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12262856 cmp dword ptr [0x12286984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226285d jne 0x122628ae */
  if (!C.zf) goto L_122628ae;
  /* 1226285f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12262862 push eax */
  push32((uint32_t)(EAX));
  /* 12262863 push 1 */
  push32((uint32_t)(0x1u));
  /* 12262865 push 0x122823f4 */
  push32((uint32_t)(0x122823f4u));
  /* 1226286a push 1 */
  push32((uint32_t)(0x1u));
  /* 1226286c call dword ptr [0x12289324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289324))), 0x12262872u);
  /* 12262872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262874 je 0x12262882 */
  if (C.zf) goto L_12262882;
  /* 12262876 mov dword ptr [0x12286984], 1 */
  w32((uint32_t)(0x12286984), (0x1u));
  /* 12262880 jmp 0x122628ae */
  goto L_122628ae;
L_12262882:;
  /* 12262882 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12262885 push ecx */
  push32((uint32_t)(ECX));
  /* 12262886 push 1 */
  push32((uint32_t)(0x1u));
  /* 12262888 push 0x122823f0 */
  push32((uint32_t)(0x122823f0u));
  /* 1226288d push 1 */
  push32((uint32_t)(0x1u));
  /* 1226288f push 0 */
  push32((uint32_t)(0x0u));
  /* 12262891 call dword ptr [0x12289328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289328))), 0x12262897u);
  /* 12262897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262899 je 0x122628a7 */
  if (C.zf) goto L_122628a7;
  /* 1226289b mov dword ptr [0x12286984], 2 */
  w32((uint32_t)(0x12286984), (0x2u));
  /* 122628a5 jmp 0x122628ae */
  goto L_122628ae;
L_122628a7:;
  /* 122628a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122628a9 jmp 0x122629d8 */
  goto L_122629d8;
L_122628ae:;
  /* 122628ae cmp dword ptr [0x12286984], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12286984))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122628b5 jne 0x122628e5 */
  if (!C.zf) goto L_122628e5;
  /* 122628b7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122628bb jne 0x122628c6 */
  if (!C.zf) goto L_122628c6;
  /* 122628bd mov edx, dword ptr [0x12286990] */
  EDX = (r32((uint32_t)(0x12286990)));
  /* 122628c3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_122628c6:;
  /* 122628c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122628c9 push eax */
  push32((uint32_t)(EAX));
  /* 122628ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122628cd push ecx */
  push32((uint32_t)(ECX));
  /* 122628ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122628d1 push edx */
  push32((uint32_t)(EDX));
  /* 122628d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122628d5 push eax */
  push32((uint32_t)(EAX));
  /* 122628d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122628d9 push ecx */
  push32((uint32_t)(ECX));
  /* 122628da call dword ptr [0x12289328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289328))), 0x122628e0u);
  /* 122628e0 jmp 0x122629d8 */
  goto L_122629d8;
L_122628e5:;
  /* 122628e5 cmp dword ptr [0x12286984], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12286984))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122628ec jne 0x122629d6 */
  if (!C.zf) goto L_122629d6;
  /* 122628f2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122628f6 jne 0x12262901 */
  if (!C.zf) goto L_12262901;
  /* 122628f8 mov edx, dword ptr [0x122869a0] */
  EDX = (r32((uint32_t)(0x122869a0)));
  /* 122628fe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12262901:;
  /* 12262901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262903 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262905 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262908 push eax */
  push32((uint32_t)(EAX));
  /* 12262909 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226290c push ecx */
  push32((uint32_t)(ECX));
  /* 1226290d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12262910 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12262912 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262914 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12262917 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226291a push edx */
  push32((uint32_t)(EDX));
  /* 1226291b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226291e push eax */
  push32((uint32_t)(EAX));
  /* 1226291f call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x12262925u);
  /* 12262925 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12262928 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226292c jne 0x12262935 */
  if (!C.zf) goto L_12262935;
  /* 1226292e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262930 jmp 0x122629d8 */
  goto L_122629d8;
L_12262935:;
  /* 12262935 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226293c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1226293f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12262941 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12262944 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12262946 call 0x1225d7a0 */
  push32(0x1226294bu); f_1225d7a0();
  /* 1226294b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1226294e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12262951 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12262954 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12262957 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1226295a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1226295c push edx */
  push32((uint32_t)(EDX));
  /* 1226295d push 0 */
  push32((uint32_t)(0x0u));
  /* 1226295f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12262962 push eax */
  push32((uint32_t)(EAX));
  /* 12262963 call 0x1225e370 */
  push32(0x12262968u); f_1225e370();
  /* 12262968 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226296b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12262972 jmp 0x1226298b */
  goto L_1226298b;
  /* 12262974 mov eax, 1 */
  EAX = (0x1u);
  /* 12262979 ret  */
  ESPCHK(0x12262830u, _esp0);
  ESP += 4; return;
  /* 1226297a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1226297d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12262984 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1226298b:;
  /* 1226298b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226298f jne 0x12262995 */
  if (!C.zf) goto L_12262995;
  /* 12262991 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262993 jmp 0x122629d8 */
  goto L_122629d8;
L_12262995:;
  /* 12262995 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12262998 push ecx */
  push32((uint32_t)(ECX));
  /* 12262999 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226299c push edx */
  push32((uint32_t)(EDX));
  /* 1226299d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122629a0 push eax */
  push32((uint32_t)(EAX));
  /* 122629a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122629a4 push ecx */
  push32((uint32_t)(ECX));
  /* 122629a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 122629a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122629aa push edx */
  push32((uint32_t)(EDX));
  /* 122629ab call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x122629b1u);
  /* 122629b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122629b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122629b8 jne 0x122629be */
  if (!C.zf) goto L_122629be;
  /* 122629ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122629bc jmp 0x122629d8 */
  goto L_122629d8;
L_122629be:;
  /* 122629be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122629c1 push eax */
  push32((uint32_t)(EAX));
  /* 122629c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122629c5 push ecx */
  push32((uint32_t)(ECX));
  /* 122629c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122629c9 push edx */
  push32((uint32_t)(EDX));
  /* 122629ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122629cd push eax */
  push32((uint32_t)(EAX));
  /* 122629ce call dword ptr [0x12289324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289324))), 0x122629d4u);
  /* 122629d4 jmp 0x122629d8 */
  goto L_122629d8;
L_122629d6:;
  /* 122629d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122629d8:;
  /* 122629d8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 122629db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122629de mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122629e5 pop edi */
  EDI = (pop32());
  /* 122629e6 pop esi */
  ESI = (pop32());
  /* 122629e7 pop ebx */
  EBX = (pop32());
  /* 122629e8 mov esp, ebp */
  ESP = (EBP);
  /* 122629ea pop ebp */
  EBP = (pop32());
  /* 122629eb ret  */
  ESPCHK(0x12262830u, _esp0);
  ESP += 4; return;
}

/* FUN_100129f0 @ 0x122629f0 (727 bytes, 263 insns) */
void f_122629f0(void) {
  FTRACE(0x122629f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122629f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122629f1 mov ebp, esp */
  EBP = (ESP);
  /* 122629f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122629f5 push 0x12282408 */
  push32((uint32_t)(0x12282408u));
  /* 122629fa push 0x12263708 */
  push32((uint32_t)(0x12263708u));
  /* 122629ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12262a05 push eax */
  push32((uint32_t)(EAX));
  /* 12262a06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12262a0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262a10 push ebx */
  push32((uint32_t)(EBX));
  /* 12262a11 push esi */
  push32((uint32_t)(ESI));
  /* 12262a12 push edi */
  push32((uint32_t)(EDI));
  /* 12262a13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12262a16 cmp dword ptr [0x122869a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262a1d jne 0x12262a76 */
  if (!C.zf) goto L_12262a76;
  /* 12262a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12262a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12262a25 push 0x122823f4 */
  push32((uint32_t)(0x122823f4u));
  /* 12262a2a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12262a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12262a31 call dword ptr [0x1228931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228931c))), 0x12262a37u);
  /* 12262a37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262a39 je 0x12262a47 */
  if (C.zf) goto L_12262a47;
  /* 12262a3b mov dword ptr [0x122869a8], 1 */
  w32((uint32_t)(0x122869a8), (0x1u));
  /* 12262a45 jmp 0x12262a76 */
  goto L_12262a76;
L_12262a47:;
  /* 12262a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262a4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12262a4d push 0x122823f0 */
  push32((uint32_t)(0x122823f0u));
  /* 12262a52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12262a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262a59 call dword ptr [0x12289320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289320))), 0x12262a5fu);
  /* 12262a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262a61 je 0x12262a6f */
  if (C.zf) goto L_12262a6f;
  /* 12262a63 mov dword ptr [0x122869a8], 2 */
  w32((uint32_t)(0x122869a8), (0x2u));
  /* 12262a6d jmp 0x12262a76 */
  goto L_12262a76;
L_12262a6f:;
  /* 12262a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262a71 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262a76:;
  /* 12262a76 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262a7a jle 0x12262a8f */
  if ((C.zf||C.sf!=C.of)) goto L_12262a8f;
  /* 12262a7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12262a7f push eax */
  push32((uint32_t)(EAX));
  /* 12262a80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12262a84 call 0x12262d00 */
  push32(0x12262a89u); f_12262d00();
  /* 12262a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262a8c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12262a8f:;
  /* 12262a8f cmp dword ptr [0x122869a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122869a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262a96 jne 0x12262abb */
  if (!C.zf) goto L_12262abb;
  /* 12262a98 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12262a9b push edx */
  push32((uint32_t)(EDX));
  /* 12262a9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12262a9f push eax */
  push32((uint32_t)(EAX));
  /* 12262aa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12262aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12262aa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262aa7 push edx */
  push32((uint32_t)(EDX));
  /* 12262aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262aab push eax */
  push32((uint32_t)(EAX));
  /* 12262aac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262aaf push ecx */
  push32((uint32_t)(ECX));
  /* 12262ab0 call dword ptr [0x12289320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289320))), 0x12262ab6u);
  /* 12262ab6 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262abb:;
  /* 12262abb cmp dword ptr [0x122869a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122869a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262ac2 jne 0x12262cdf */
  if (!C.zf) goto L_12262cdf;
  /* 12262ac8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262acc jne 0x12262ad7 */
  if (!C.zf) goto L_12262ad7;
  /* 12262ace mov edx, dword ptr [0x122869a0] */
  EDX = (r32((uint32_t)(0x122869a0)));
  /* 12262ad4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12262ad7:;
  /* 12262ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262adb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12262ade push eax */
  push32((uint32_t)(EAX));
  /* 12262adf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 12262ae3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12262ae6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12262ae8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262aea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12262aed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12262af0 push edx */
  push32((uint32_t)(EDX));
  /* 12262af1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12262af4 push eax */
  push32((uint32_t)(EAX));
  /* 12262af5 call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x12262afbu);
  /* 12262afb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12262afe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262b02 jne 0x12262b0b */
  if (!C.zf) goto L_12262b0b;
  /* 12262b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262b06 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262b0b:;
  /* 12262b0b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12262b12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12262b15 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12262b17 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12262b1a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12262b1c call 0x1225d7a0 */
  push32(0x12262b21u); f_1225d7a0();
  /* 12262b21 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12262b24 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12262b27 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12262b2a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12262b2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12262b34 jmp 0x12262b4d */
  goto L_12262b4d;
  /* 12262b36 mov eax, 1 */
  EAX = (0x1u);
  /* 12262b3b ret  */
  ESPCHK(0x122629f0u, _esp0);
  ESP += 4; return;
  /* 12262b3c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12262b3f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12262b46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12262b4d:;
  /* 12262b4d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262b51 jne 0x12262b5a */
  if (!C.zf) goto L_12262b5a;
  /* 12262b53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262b55 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262b5a:;
  /* 12262b5a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12262b5d push edx */
  push32((uint32_t)(EDX));
  /* 12262b5e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12262b61 push eax */
  push32((uint32_t)(EAX));
  /* 12262b62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12262b65 push ecx */
  push32((uint32_t)(ECX));
  /* 12262b66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262b69 push edx */
  push32((uint32_t)(EDX));
  /* 12262b6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12262b6c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12262b6f push eax */
  push32((uint32_t)(EAX));
  /* 12262b70 call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x12262b76u);
  /* 12262b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262b78 jne 0x12262b81 */
  if (!C.zf) goto L_12262b81;
  /* 12262b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262b7c jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262b81:;
  /* 12262b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262b85 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12262b88 push ecx */
  push32((uint32_t)(ECX));
  /* 12262b89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12262b8c push edx */
  push32((uint32_t)(EDX));
  /* 12262b8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262b90 push eax */
  push32((uint32_t)(EAX));
  /* 12262b91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262b94 push ecx */
  push32((uint32_t)(ECX));
  /* 12262b95 call dword ptr [0x1228931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228931c))), 0x12262b9bu);
  /* 12262b9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12262b9e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262ba2 jne 0x12262bab */
  if (!C.zf) goto L_12262bab;
  /* 12262ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262ba6 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262bab:;
  /* 12262bab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262bae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12262bb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262bb6 je 0x12262bfb */
  if (C.zf) goto L_12262bfb;
  /* 12262bb8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262bbc je 0x12262bf6 */
  if (C.zf) goto L_12262bf6;
  /* 12262bbe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12262bc1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262bc4 jle 0x12262bcd */
  if ((C.zf||C.sf!=C.of)) goto L_12262bcd;
  /* 12262bc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262bc8 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262bcd:;
  /* 12262bcd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12262bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12262bd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12262bd4 push edx */
  push32((uint32_t)(EDX));
  /* 12262bd5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12262bd8 push eax */
  push32((uint32_t)(EAX));
  /* 12262bd9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12262bdc push ecx */
  push32((uint32_t)(ECX));
  /* 12262bdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262be0 push edx */
  push32((uint32_t)(EDX));
  /* 12262be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262be4 push eax */
  push32((uint32_t)(EAX));
  /* 12262be5 call dword ptr [0x1228931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228931c))), 0x12262bebu);
  /* 12262beb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262bed jne 0x12262bf6 */
  if (!C.zf) goto L_12262bf6;
  /* 12262bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262bf1 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262bf6:;
  /* 12262bf6 jmp 0x12262cda */
  goto L_12262cda;
L_12262bfb:;
  /* 12262bfb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12262bfe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12262c01 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12262c08 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12262c0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12262c0d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12262c10 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12262c12 call 0x1225d7a0 */
  push32(0x12262c17u); f_1225d7a0();
  /* 12262c17 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12262c1a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12262c1d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12262c20 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12262c23 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12262c2a jmp 0x12262c43 */
  goto L_12262c43;
  /* 12262c2c mov eax, 1 */
  EAX = (0x1u);
  /* 12262c31 ret  */
  ESPCHK(0x122629f0u, _esp0);
  ESP += 4; return;
  /* 12262c32 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12262c35 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12262c3c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12262c43:;
  /* 12262c43 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262c47 jne 0x12262c50 */
  if (!C.zf) goto L_12262c50;
  /* 12262c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262c4b jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262c50:;
  /* 12262c50 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12262c53 push eax */
  push32((uint32_t)(EAX));
  /* 12262c54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12262c57 push ecx */
  push32((uint32_t)(ECX));
  /* 12262c58 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12262c5b push edx */
  push32((uint32_t)(EDX));
  /* 12262c5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12262c5f push eax */
  push32((uint32_t)(EAX));
  /* 12262c60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12262c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262c67 push edx */
  push32((uint32_t)(EDX));
  /* 12262c68 call dword ptr [0x1228931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228931c))), 0x12262c6eu);
  /* 12262c6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262c70 jne 0x12262c76 */
  if (!C.zf) goto L_12262c76;
  /* 12262c72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262c74 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262c76:;
  /* 12262c76 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262c7a jne 0x12262caa */
  if (!C.zf) goto L_12262caa;
  /* 12262c7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12262c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12262c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262c84 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12262c87 push eax */
  push32((uint32_t)(EAX));
  /* 12262c88 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12262c8b push ecx */
  push32((uint32_t)(ECX));
  /* 12262c8c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12262c91 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12262c94 push edx */
  push32((uint32_t)(EDX));
  /* 12262c95 call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x12262c9bu);
  /* 12262c9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12262c9e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262ca2 jne 0x12262ca8 */
  if (!C.zf) goto L_12262ca8;
  /* 12262ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262ca6 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262ca8:;
  /* 12262ca8 jmp 0x12262cda */
  goto L_12262cda;
L_12262caa:;
  /* 12262caa push 0 */
  push32((uint32_t)(0x0u));
  /* 12262cac push 0 */
  push32((uint32_t)(0x0u));
  /* 12262cae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12262cb1 push eax */
  push32((uint32_t)(EAX));
  /* 12262cb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12262cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12262cb6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12262cb9 push edx */
  push32((uint32_t)(EDX));
  /* 12262cba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12262cbd push eax */
  push32((uint32_t)(EAX));
  /* 12262cbe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12262cc3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12262cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12262cc7 call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x12262ccdu);
  /* 12262ccd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12262cd0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262cd4 jne 0x12262cda */
  if (!C.zf) goto L_12262cda;
  /* 12262cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262cd8 jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262cda:;
  /* 12262cda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12262cdd jmp 0x12262ce1 */
  goto L_12262ce1;
L_12262cdf:;
  /* 12262cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12262ce1:;
  /* 12262ce1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12262ce4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12262ce7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12262cee pop edi */
  EDI = (pop32());
  /* 12262cef pop esi */
  ESI = (pop32());
  /* 12262cf0 pop ebx */
  EBX = (pop32());
  /* 12262cf1 mov esp, ebp */
  ESP = (EBP);
  /* 12262cf3 pop ebp */
  EBP = (pop32());
  /* 12262cf4 ret  */
  ESPCHK(0x122629f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d00 @ 0x12262d00 (80 bytes, 32 insns) */
void f_12262d00(void) {
  FTRACE(0x12262d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12262d01 mov ebp, esp */
  EBP = (ESP);
  /* 12262d03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262d06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262d09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12262d0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262d0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12262d12:;
  /* 12262d12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12262d15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12262d18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262d1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12262d1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262d20 je 0x12262d37 */
  if (C.zf) goto L_12262d37;
  /* 12262d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262d25 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12262d28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262d2a je 0x12262d37 */
  if (C.zf) goto L_12262d37;
  /* 12262d2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262d2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12262d32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12262d35 jmp 0x12262d12 */
  goto L_12262d12;
L_12262d37:;
  /* 12262d37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262d3a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12262d3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12262d3f jne 0x12262d49 */
  if (!C.zf) goto L_12262d49;
  /* 12262d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262d44 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262d47 jmp 0x12262d4c */
  goto L_12262d4c;
L_12262d49:;
  /* 12262d49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12262d4c:;
  /* 12262d4c mov esp, ebp */
  ESP = (EBP);
  /* 12262d4e pop ebp */
  EBP = (pop32());
  /* 12262d4f ret  */
  ESPCHK(0x12262d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d50 @ 0x12262d50 (130 bytes, 43 insns) */
void f_12262d50(void) {
  FTRACE(0x12262d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12262d51 mov ebp, esp */
  EBP = (ESP);
  /* 12262d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12262d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262d57 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262d5d jae 0x12262d81 */
  if (!C.cf) goto L_12262d81;
  /* 12262d5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262d62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12262d65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262d68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12262d6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12262d6e mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 12262d75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12262d7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12262d7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12262d7f jne 0x12262d9c */
  if (!C.zf) goto L_12262d9c;
L_12262d81:;
  /* 12262d81 call 0x122624d0 */
  push32(0x12262d86u); f_122624d0();
  /* 12262d86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12262d8c call 0x122624e0 */
  push32(0x12262d91u); f_122624e0();
  /* 12262d91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12262d97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12262d9a jmp 0x12262dce */
  goto L_12262dce;
L_12262d9c:;
  /* 12262d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262d9f push edx */
  push32((uint32_t)(EDX));
  /* 12262da0 call 0x12263cf0 */
  push32(0x12262da5u); f_12263cf0();
  /* 12262da5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262da8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262dab push eax */
  push32((uint32_t)(EAX));
  /* 12262dac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262daf push ecx */
  push32((uint32_t)(ECX));
  /* 12262db0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262db3 push edx */
  push32((uint32_t)(EDX));
  /* 12262db4 call 0x12262de0 */
  push32(0x12262db9u); f_12262de0();
  /* 12262db9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262dbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12262dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262dc2 push eax */
  push32((uint32_t)(EAX));
  /* 12262dc3 call 0x12263d80 */
  push32(0x12262dc8u); f_12263d80();
  /* 12262dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12262dce:;
  /* 12262dce mov esp, ebp */
  ESP = (EBP);
  /* 12262dd0 pop ebp */
  EBP = (pop32());
  /* 12262dd1 ret  */
  ESPCHK(0x12262d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012de0 @ 0x12262de0 (178 bytes, 56 insns) */
void f_12262de0(void) {
  FTRACE(0x12262de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12262de1 mov ebp, esp */
  EBP = (ESP);
  /* 12262de3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262de9 push eax */
  push32((uint32_t)(EAX));
  /* 12262dea call 0x12263b70 */
  push32(0x12262defu); f_12263b70();
  /* 12262def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262df2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12262df5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262df9 jne 0x12262e0e */
  if (!C.zf) goto L_12262e0e;
  /* 12262dfb call 0x122624d0 */
  push32(0x12262e00u); f_122624d0();
  /* 12262e00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12262e06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12262e09 jmp 0x12262e8e */
  goto L_12262e8e;
L_12262e0e:;
  /* 12262e0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262e11 push ecx */
  push32((uint32_t)(ECX));
  /* 12262e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12262e14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262e17 push edx */
  push32((uint32_t)(EDX));
  /* 12262e18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12262e1b push eax */
  push32((uint32_t)(EAX));
  /* 12262e1c call dword ptr [0x12289318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289318))), 0x12262e22u);
  /* 12262e22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12262e25 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262e29 jne 0x12262e36 */
  if (!C.zf) goto L_12262e36;
  /* 12262e2b call dword ptr [0x122893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893dc))), 0x12262e31u);
  /* 12262e31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12262e34 jmp 0x12262e3d */
  goto L_12262e3d;
L_12262e36:;
  /* 12262e36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12262e3d:;
  /* 12262e3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262e41 je 0x12262e54 */
  if (C.zf) goto L_12262e54;
  /* 12262e43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12262e47 call 0x12262430 */
  push32(0x12262e4cu); f_12262430();
  /* 12262e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262e4f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12262e52 jmp 0x12262e8e */
  goto L_12262e8e;
L_12262e54:;
  /* 12262e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262e57 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12262e5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262e5d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12262e60 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12262e63 mov ecx, dword ptr [edx*4 + 0x12288160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12288160)));
  /* 12262e6a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12262e6e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12262e71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262e74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12262e77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262e7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12262e7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12262e80 mov eax, dword ptr [eax*4 + 0x12288160] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12262e87 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12262e8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12262e8e:;
  /* 12262e8e mov esp, ebp */
  ESP = (EBP);
  /* 12262e90 pop ebp */
  EBP = (pop32());
  /* 12262e91 ret  */
  ESPCHK(0x12262de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ea0 @ 0x12262ea0 (130 bytes, 43 insns) */
void f_12262ea0(void) {
  FTRACE(0x12262ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12262ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12262ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12262ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262ea7 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262ead jae 0x12262ed1 */
  if (!C.cf) goto L_12262ed1;
  /* 12262eaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262eb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12262eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262eb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12262ebb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12262ebe mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 12262ec5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12262eca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12262ecd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12262ecf jne 0x12262eec */
  if (!C.zf) goto L_12262eec;
L_12262ed1:;
  /* 12262ed1 call 0x122624d0 */
  push32(0x12262ed6u); f_122624d0();
  /* 12262ed6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12262edc call 0x122624e0 */
  push32(0x12262ee1u); f_122624e0();
  /* 12262ee1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12262ee7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12262eea jmp 0x12262f1e */
  goto L_12262f1e;
L_12262eec:;
  /* 12262eec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262eef push edx */
  push32((uint32_t)(EDX));
  /* 12262ef0 call 0x12263cf0 */
  push32(0x12262ef5u); f_12263cf0();
  /* 12262ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262ef8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12262efb push eax */
  push32((uint32_t)(EAX));
  /* 12262efc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262eff push ecx */
  push32((uint32_t)(ECX));
  /* 12262f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262f03 push edx */
  push32((uint32_t)(EDX));
  /* 12262f04 call 0x12262f30 */
  push32(0x12262f09u); f_12262f30();
  /* 12262f09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262f0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12262f0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262f12 push eax */
  push32((uint32_t)(EAX));
  /* 12262f13 call 0x12263d80 */
  push32(0x12262f18u); f_12263d80();
  /* 12262f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12262f1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12262f1e:;
  /* 12262f1e mov esp, ebp */
  ESP = (EBP);
  /* 12262f20 pop ebp */
  EBP = (pop32());
  /* 12262f21 ret  */
  ESPCHK(0x12262ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f30 @ 0x12262f30 (627 bytes, 182 insns) */
void f_12262f30(void) {
  FTRACE(0x12262f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12262f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12262f31 mov ebp, esp */
  EBP = (ESP);
  /* 12262f33 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262f39 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12262f40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12262f43 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12262f49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262f4d jne 0x12262f56 */
  if (!C.zf) goto L_12262f56;
  /* 12262f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12262f51 jmp 0x1226319f */
  goto L_1226319f;
L_12262f56:;
  /* 12262f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262f59 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12262f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262f5f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12262f62 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12262f65 mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 12262f6c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12262f71 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12262f74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12262f76 je 0x12262f88 */
  if (C.zf) goto L_12262f88;
  /* 12262f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12262f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12262f7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262f7f push edx */
  push32((uint32_t)(EDX));
  /* 12262f80 call 0x12262de0 */
  push32(0x12262f85u); f_12262de0();
  /* 12262f85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12262f88:;
  /* 12262f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262f8b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12262f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12262f91 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12262f94 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12262f97 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12262f9e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12262fa3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12262fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12262faa je 0x122630bc */
  if (C.zf) goto L_122630bc;
  /* 12262fb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12262fb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12262fb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12262fbd:;
  /* 12262fbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262fc0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262fc3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262fc6 jae 0x122630ba */
  if (!C.cf) goto L_122630ba;
  /* 12262fcc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12262fd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12262fd5:;
  /* 12262fd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12262fd8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12262fde sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262fe0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262fe6 jge 0x12263047 */
  if ((C.sf==C.of)) goto L_12263047;
  /* 12262fe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262feb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12262fee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12262ff1 jae 0x12263047 */
  if (!C.cf) goto L_12263047;
  /* 12262ff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12262ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12262ff8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12262ffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263001 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263004 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12263007 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1226300e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263011 jne 0x12263031 */
  if (!C.zf) goto L_12263031;
  /* 12263013 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12263019 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226301c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12263022 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263025 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12263028 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226302b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226302e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12263031:;
  /* 12263031 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263034 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1226303a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1226303c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226303f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263042 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12263045 jmp 0x12262fd5 */
  goto L_12262fd5;
L_12263047:;
  /* 12263047 push 0 */
  push32((uint32_t)(0x0u));
  /* 12263049 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1226304f push edx */
  push32((uint32_t)(EDX));
  /* 12263050 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263053 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12263059 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226305b push eax */
  push32((uint32_t)(EAX));
  /* 1226305c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12263062 push edx */
  push32((uint32_t)(EDX));
  /* 12263063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263066 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226306c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1226306f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263072 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12263079 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1226307c push eax */
  push32((uint32_t)(EAX));
  /* 1226307d call dword ptr [0x122893a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a0))), 0x12263083u);
  /* 12263083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12263085 je 0x122630aa */
  if (C.zf) goto L_122630aa;
  /* 12263087 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226308a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263090 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12263093 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263096 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1226309c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226309e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122630a4 jge 0x122630a8 */
  if ((C.sf==C.of)) goto L_122630a8;
  /* 122630a6 jmp 0x122630ba */
  goto L_122630ba;
L_122630a8:;
  /* 122630a8 jmp 0x122630b5 */
  goto L_122630b5;
L_122630aa:;
  /* 122630aa call dword ptr [0x122893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893dc))), 0x122630b0u);
  /* 122630b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122630b3 jmp 0x122630ba */
  goto L_122630ba;
L_122630b5:;
  /* 122630b5 jmp 0x12262fbd */
  goto L_12262fbd;
L_122630ba:;
  /* 122630ba jmp 0x1226310c */
  goto L_1226310c;
L_122630bc:;
  /* 122630bc push 0 */
  push32((uint32_t)(0x0u));
  /* 122630be lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 122630c4 push ecx */
  push32((uint32_t)(ECX));
  /* 122630c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122630c8 push edx */
  push32((uint32_t)(EDX));
  /* 122630c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122630cc push eax */
  push32((uint32_t)(EAX));
  /* 122630cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122630d0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122630d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122630d6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122630d9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122630dc mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 122630e3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 122630e6 push ecx */
  push32((uint32_t)(ECX));
  /* 122630e7 call dword ptr [0x122893a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a0))), 0x122630edu);
  /* 122630ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122630ef je 0x12263103 */
  if (C.zf) goto L_12263103;
  /* 122630f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122630f8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 122630fe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12263101 jmp 0x1226310c */
  goto L_1226310c;
L_12263103:;
  /* 12263103 call dword ptr [0x122893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893dc))), 0x12263109u);
  /* 12263109 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1226310c:;
  /* 1226310c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263110 jne 0x12263196 */
  if (!C.zf) goto L_12263196;
  /* 12263116 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226311a je 0x1226314a */
  if (C.zf) goto L_1226314a;
  /* 1226311c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263120 jne 0x12263139 */
  if (!C.zf) goto L_12263139;
  /* 12263122 call 0x122624d0 */
  push32(0x12263127u); f_122624d0();
  /* 12263127 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1226312d call 0x122624e0 */
  push32(0x12263132u); f_122624e0();
  /* 12263132 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263135 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12263137 jmp 0x12263145 */
  goto L_12263145;
L_12263139:;
  /* 12263139 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226313c push edx */
  push32((uint32_t)(EDX));
  /* 1226313d call 0x12262430 */
  push32(0x12263142u); f_12262430();
  /* 12263142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12263145:;
  /* 12263145 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12263148 jmp 0x1226319f */
  goto L_1226319f;
L_1226314a:;
  /* 1226314a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226314d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263153 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12263156 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263159 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12263160 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12263165 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12263168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226316a je 0x1226317b */
  if (C.zf) goto L_1226317b;
  /* 1226316c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226316f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12263172 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263175 jne 0x1226317b */
  if (!C.zf) goto L_1226317b;
  /* 12263177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12263179 jmp 0x1226319f */
  goto L_1226319f;
L_1226317b:;
  /* 1226317b call 0x122624d0 */
  push32(0x12263180u); f_122624d0();
  /* 12263180 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12263186 call 0x122624e0 */
  push32(0x1226318bu); f_122624e0();
  /* 1226318b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12263191 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12263194 jmp 0x1226319f */
  goto L_1226319f;
L_12263196:;
  /* 12263196 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12263199 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1226319f:;
  /* 1226319f mov esp, ebp */
  ESP = (EBP);
  /* 122631a1 pop ebp */
  EBP = (pop32());
  /* 122631a2 ret  */
  ESPCHK(0x12262f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100131b0 @ 0x122631b0 (199 bytes, 68 insns) */
void f_122631b0(void) {
  FTRACE(0x122631b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122631b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122631b1 mov ebp, esp */
  EBP = (ESP);
  /* 122631b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122631b4 push ebx */
  push32((uint32_t)(EBX));
  /* 122631b5 push esi */
  push32((uint32_t)(ESI));
  /* 122631b6 push edi */
  push32((uint32_t)(EDI));
L_122631b7:;
  /* 122631b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122631bb jne 0x122631db */
  if (!C.zf) goto L_122631db;
  /* 122631bd push 0x12282354 */
  push32((uint32_t)(0x12282354u));
  /* 122631c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122631c4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 122631c6 push 0x12282420 */
  push32((uint32_t)(0x12282420u));
  /* 122631cb push 2 */
  push32((uint32_t)(0x2u));
  /* 122631cd call 0x122596c0 */
  push32(0x122631d2u); f_122596c0();
  /* 122631d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122631d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122631d8 jne 0x122631db */
  if (!C.zf) goto L_122631db;
  /* 122631da int3  */
  x86_unimpl("int3 @ 0x122631da");
L_122631db:;
  /* 122631db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122631dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122631df jne 0x122631b7 */
  if (!C.zf) goto L_122631b7;
  /* 122631e1 mov ecx, dword ptr [0x122869ac] */
  ECX = (r32((uint32_t)(0x122869ac)));
  /* 122631e7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122631ea mov dword ptr [0x122869ac], ecx */
  w32((uint32_t)(0x122869ac), (ECX));
  /* 122631f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122631f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122631f6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 122631f8 push 0x12282420 */
  push32((uint32_t)(0x12282420u));
  /* 122631fd push 2 */
  push32((uint32_t)(0x2u));
  /* 122631ff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12263204 call 0x1225a600 */
  push32(0x12263209u); f_1225a600();
  /* 12263209 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226320c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226320f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12263212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263215 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263219 je 0x12263236 */
  if (C.zf) goto L_12263236;
  /* 1226321b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226321e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12263221 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12263224 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263227 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1226322a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226322d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12263234 jmp 0x1226325b */
  goto L_1226325b;
L_12263236:;
  /* 12263236 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263239 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1226323c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1226323f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263242 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12263245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263248 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226324b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226324e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12263251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263254 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1226325b:;
  /* 1226325b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226325e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263261 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12263264 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12263266 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263269 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12263270 pop edi */
  EDI = (pop32());
  /* 12263271 pop esi */
  ESI = (pop32());
  /* 12263272 pop ebx */
  EBX = (pop32());
  /* 12263273 mov esp, ebp */
  ESP = (EBP);
  /* 12263275 pop ebp */
  EBP = (pop32());
  /* 12263276 ret  */
  ESPCHK(0x122631b0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12263280 (50 bytes, 17 insns) */
void f_12263280(void) {
  FTRACE(0x12263280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263280 push ebp */
  push32((uint32_t)(EBP));
  /* 12263281 mov ebp, esp */
  EBP = (ESP);
  /* 12263283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263286 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226328c jb 0x12263292 */
  if (C.cf) goto L_12263292;
  /* 1226328e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12263290 jmp 0x122632b0 */
  goto L_122632b0;
L_12263292:;
  /* 12263292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263295 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12263298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226329b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1226329e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122632a1 mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 122632a8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122632ad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_122632b0:;
  /* 122632b0 pop ebp */
  EBP = (pop32());
  /* 122632b1 ret  */
  ESPCHK(0x12263280u, _esp0);
  ESP += 4; return;
}

/* FUN_100132c0 @ 0x122632c0 (300 bytes, 80 insns) */
void f_122632c0(void) {
  FTRACE(0x122632c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122632c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122632c1 mov ebp, esp */
  EBP = (ESP);
  /* 122632c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122632c4 cmp dword ptr [0x12287e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12287e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122632cb jne 0x122632d9 */
  if (!C.zf) goto L_122632d9;
  /* 122632cd mov dword ptr [0x12287e60], 0x200 */
  w32((uint32_t)(0x12287e60), (0x200u));
  /* 122632d7 jmp 0x122632ec */
  goto L_122632ec;
L_122632d9:;
  /* 122632d9 cmp dword ptr [0x12287e60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12287e60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122632e0 jge 0x122632ec */
  if ((C.sf==C.of)) goto L_122632ec;
  /* 122632e2 mov dword ptr [0x12287e60], 0x14 */
  w32((uint32_t)(0x12287e60), (0x14u));
L_122632ec:;
  /* 122632ec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 122632f1 push 0x1228242c */
  push32((uint32_t)(0x1228242cu));
  /* 122632f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122632f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 122632fa mov eax, dword ptr [0x12287e60] */
  EAX = (r32((uint32_t)(0x12287e60)));
  /* 122632ff push eax */
  push32((uint32_t)(EAX));
  /* 12263300 call 0x1225aa10 */
  push32(0x12263305u); f_1225aa10();
  /* 12263305 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263308 mov dword ptr [0x12286b20], eax */
  w32((uint32_t)(0x12286b20), (EAX));
  /* 1226330d cmp dword ptr [0x12286b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263314 jne 0x12263355 */
  if (!C.zf) goto L_12263355;
  /* 12263316 mov dword ptr [0x12287e60], 0x14 */
  w32((uint32_t)(0x12287e60), (0x14u));
  /* 12263320 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12263325 push 0x1228242c */
  push32((uint32_t)(0x1228242cu));
  /* 1226332a push 2 */
  push32((uint32_t)(0x2u));
  /* 1226332c push 4 */
  push32((uint32_t)(0x4u));
  /* 1226332e mov ecx, dword ptr [0x12287e60] */
  ECX = (r32((uint32_t)(0x12287e60)));
  /* 12263334 push ecx */
  push32((uint32_t)(ECX));
  /* 12263335 call 0x1225aa10 */
  push32(0x1226333au); f_1225aa10();
  /* 1226333a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226333d mov dword ptr [0x12286b20], eax */
  w32((uint32_t)(0x12286b20), (EAX));
  /* 12263342 cmp dword ptr [0x12286b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263349 jne 0x12263355 */
  if (!C.zf) goto L_12263355;
  /* 1226334b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1226334d call 0x12259570 */
  push32(0x12263352u); f_12259570();
  /* 12263352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12263355:;
  /* 12263355 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226335c jmp 0x12263367 */
  goto L_12263367;
L_1226335e:;
  /* 1226335e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263361 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263364 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12263367:;
  /* 12263367 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226336b jge 0x12263386 */
  if ((C.sf==C.of)) goto L_12263386;
  /* 1226336d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263370 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263373 add eax, 0x12285120 */
  { uint32_t _a=(EAX),_b=(0x12285120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226337b mov edx, dword ptr [0x12286b20] */
  EDX = (r32((uint32_t)(0x12286b20)));
  /* 12263381 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12263384 jmp 0x1226335e */
  goto L_1226335e;
L_12263386:;
  /* 12263386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226338d jmp 0x12263398 */
  goto L_12263398;
L_1226338f:;
  /* 1226338f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263392 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263395 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12263398:;
  /* 12263398 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226339c jge 0x122633e8 */
  if ((C.sf==C.of)) goto L_122633e8;
  /* 1226339e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122633a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122633a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122633a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122633aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122633ad mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 122633b4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122633b8 je 0x122633d6 */
  if (C.zf) goto L_122633d6;
  /* 122633ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122633bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122633c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122633c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122633c6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122633c9 mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 122633d0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122633d4 jne 0x122633e6 */
  if (!C.zf) goto L_122633e6;
L_122633d6:;
  /* 122633d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122633d9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122633dc mov dword ptr [ecx + 0x12285130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12285130), (0xffffffffu));
L_122633e6:;
  /* 122633e6 jmp 0x1226338f */
  goto L_1226338f;
L_122633e8:;
  /* 122633e8 mov esp, ebp */
  ESP = (EBP);
  /* 122633ea pop ebp */
  EBP = (pop32());
  /* 122633eb ret  */
  ESPCHK(0x122632c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x122633f0 (26 bytes, 9 insns) */
void f_122633f0(void) {
  FTRACE(0x122633f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122633f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122633f1 mov ebp, esp */
  EBP = (ESP);
  /* 122633f3 call 0x12263ff0 */
  push32(0x122633f8u); f_12263ff0();
  /* 122633f8 movsx eax, byte ptr [0x122867c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x122867c4))));
  /* 122633ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12263401 je 0x12263408 */
  if (C.zf) goto L_12263408;
  /* 12263403 call 0x12263db0 */
  push32(0x12263408u); f_12263db0();
L_12263408:;
  /* 12263408 pop ebp */
  EBP = (pop32());
  /* 12263409 ret  */
  ESPCHK(0x122633f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013410 @ 0x12263410 (61 bytes, 20 insns) */
void f_12263410(void) {
  FTRACE(0x12263410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263410 push ebp */
  push32((uint32_t)(EBP));
  /* 12263411 mov ebp, esp */
  EBP = (ESP);
  /* 12263413 cmp dword ptr [ebp + 8], 0x12285120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12285120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226341a jb 0x1226343e */
  if (C.cf) goto L_1226343e;
  /* 1226341c cmp dword ptr [ebp + 8], 0x12285380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12285380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263423 ja 0x1226343e */
  if ((!C.cf&&!C.zf)) goto L_1226343e;
  /* 12263425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263428 sub eax, 0x12285120 */
  { uint32_t _a=(EAX),_b=(0x12285120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226342d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263430 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263433 push eax */
  push32((uint32_t)(EAX));
  /* 12263434 call 0x1225e000 */
  push32(0x12263439u); f_1225e000();
  /* 12263439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226343c jmp 0x1226344b */
  goto L_1226344b;
L_1226343e:;
  /* 1226343e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263441 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263444 push ecx */
  push32((uint32_t)(ECX));
  /* 12263445 call dword ptr [0x12289354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289354))), 0x1226344bu);
L_1226344b:;
  /* 1226344b pop ebp */
  EBP = (pop32());
  /* 1226344c ret  */
  ESPCHK(0x12263410u, _esp0);
  ESP += 4; return;
}

/* FUN_10013450 @ 0x12263450 (41 bytes, 16 insns) */
void f_12263450(void) {
  FTRACE(0x12263450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263450 push ebp */
  push32((uint32_t)(EBP));
  /* 12263451 mov ebp, esp */
  EBP = (ESP);
  /* 12263453 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263457 jge 0x1226346a */
  if ((C.sf==C.of)) goto L_1226346a;
  /* 12263459 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226345c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226345f push eax */
  push32((uint32_t)(EAX));
  /* 12263460 call 0x1225e000 */
  push32(0x12263465u); f_1225e000();
  /* 12263465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263468 jmp 0x12263477 */
  goto L_12263477;
L_1226346a:;
  /* 1226346a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226346d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263470 push ecx */
  push32((uint32_t)(ECX));
  /* 12263471 call dword ptr [0x12289354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289354))), 0x12263477u);
L_12263477:;
  /* 12263477 pop ebp */
  EBP = (pop32());
  /* 12263478 ret  */
  ESPCHK(0x12263450u, _esp0);
  ESP += 4; return;
}

/* FUN_10013480 @ 0x12263480 (61 bytes, 20 insns) */
void f_12263480(void) {
  FTRACE(0x12263480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263480 push ebp */
  push32((uint32_t)(EBP));
  /* 12263481 mov ebp, esp */
  EBP = (ESP);
  /* 12263483 cmp dword ptr [ebp + 8], 0x12285120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12285120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226348a jb 0x122634ae */
  if (C.cf) goto L_122634ae;
  /* 1226348c cmp dword ptr [ebp + 8], 0x12285380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12285380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263493 ja 0x122634ae */
  if ((!C.cf&&!C.zf)) goto L_122634ae;
  /* 12263495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263498 sub eax, 0x12285120 */
  { uint32_t _a=(EAX),_b=(0x12285120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226349d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122634a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122634a3 push eax */
  push32((uint32_t)(EAX));
  /* 122634a4 call 0x1225e0a0 */
  push32(0x122634a9u); f_1225e0a0();
  /* 122634a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122634ac jmp 0x122634bb */
  goto L_122634bb;
L_122634ae:;
  /* 122634ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122634b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122634b4 push ecx */
  push32((uint32_t)(ECX));
  /* 122634b5 call dword ptr [0x12289350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289350))), 0x122634bbu);
L_122634bb:;
  /* 122634bb pop ebp */
  EBP = (pop32());
  /* 122634bc ret  */
  ESPCHK(0x12263480u, _esp0);
  ESP += 4; return;
}

/* FUN_100134c0 @ 0x122634c0 (41 bytes, 16 insns) */
void f_122634c0(void) {
  FTRACE(0x122634c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122634c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122634c1 mov ebp, esp */
  EBP = (ESP);
  /* 122634c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122634c7 jge 0x122634da */
  if ((C.sf==C.of)) goto L_122634da;
  /* 122634c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122634cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122634cf push eax */
  push32((uint32_t)(EAX));
  /* 122634d0 call 0x1225e0a0 */
  push32(0x122634d5u); f_1225e0a0();
  /* 122634d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122634d8 jmp 0x122634e7 */
  goto L_122634e7;
L_122634da:;
  /* 122634da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122634dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122634e0 push ecx */
  push32((uint32_t)(ECX));
  /* 122634e1 call dword ptr [0x12289350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289350))), 0x122634e7u);
L_122634e7:;
  /* 122634e7 pop ebp */
  EBP = (pop32());
  /* 122634e8 ret  */
  ESPCHK(0x122634c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134f0 @ 0x122634f0 (119 bytes, 34 insns) */
void f_122634f0(void) {
  FTRACE(0x122634f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122634f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122634f1 mov ebp, esp */
  EBP = (ESP);
  /* 122634f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122634f6 push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 122634fb call dword ptr [0x122893b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893b4))), 0x12263501u);
  /* 12263501 cmp dword ptr [0x12286b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263508 je 0x12263528 */
  if (C.zf) goto L_12263528;
  /* 1226350a push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 1226350f call dword ptr [0x122893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a4))), 0x12263515u);
  /* 12263515 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12263517 call 0x1225e000 */
  push32(0x1226351cu); f_1225e000();
  /* 1226351c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226351f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12263526 jmp 0x1226352f */
  goto L_1226352f;
L_12263528:;
  /* 12263528 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1226352f:;
  /* 1226352f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12263533 push eax */
  push32((uint32_t)(EAX));
  /* 12263534 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263537 push ecx */
  push32((uint32_t)(ECX));
  /* 12263538 call 0x12263570 */
  push32(0x1226353du); f_12263570();
  /* 1226353d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263540 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12263543 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263547 je 0x12263555 */
  if (C.zf) goto L_12263555;
  /* 12263549 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1226354b call 0x1225e0a0 */
  push32(0x12263550u); f_1225e0a0();
  /* 12263550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263553 jmp 0x12263560 */
  goto L_12263560;
L_12263555:;
  /* 12263555 push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 1226355a call dword ptr [0x122893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a4))), 0x12263560u);
L_12263560:;
  /* 12263560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263563 mov esp, ebp */
  ESP = (EBP);
  /* 12263565 pop ebp */
  EBP = (pop32());
  /* 12263566 ret  */
  ESPCHK(0x122634f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x12263570 (160 bytes, 50 insns) */
void f_12263570(void) {
  FTRACE(0x12263570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263570 push ebp */
  push32((uint32_t)(EBP));
  /* 12263571 mov ebp, esp */
  EBP = (ESP);
  /* 12263573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12263576 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226357a jne 0x12263583 */
  if (!C.zf) goto L_12263583;
  /* 1226357c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226357e jmp 0x1226360c */
  goto L_1226360c;
L_12263583:;
  /* 12263583 cmp dword ptr [0x12286990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226358a jne 0x122635ba */
  if (!C.zf) goto L_122635ba;
  /* 1226358c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226358f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12263594 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263599 jle 0x122635ab */
  if ((C.zf||C.sf!=C.of)) goto L_122635ab;
  /* 1226359b call 0x122624d0 */
  push32(0x122635a0u); f_122624d0();
  /* 122635a0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 122635a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122635a9 jmp 0x1226360c */
  goto L_1226360c;
L_122635ab:;
  /* 122635ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122635ae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 122635b1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 122635b3 mov eax, 1 */
  EAX = (0x1u);
  /* 122635b8 jmp 0x1226360c */
  goto L_1226360c;
L_122635ba:;
  /* 122635ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122635c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122635c4 push eax */
  push32((uint32_t)(EAX));
  /* 122635c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122635c7 mov ecx, dword ptr [0x12284ea4] */
  ECX = (r32((uint32_t)(0x12284ea4)));
  /* 122635cd push ecx */
  push32((uint32_t)(ECX));
  /* 122635ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122635d1 push edx */
  push32((uint32_t)(EDX));
  /* 122635d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 122635d4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 122635d7 push eax */
  push32((uint32_t)(EAX));
  /* 122635d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122635dd mov ecx, dword ptr [0x122869a0] */
  ECX = (r32((uint32_t)(0x122869a0)));
  /* 122635e3 push ecx */
  push32((uint32_t)(ECX));
  /* 122635e4 call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x122635eau);
  /* 122635ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122635ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122635f1 je 0x122635f9 */
  if (C.zf) goto L_122635f9;
  /* 122635f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122635f7 je 0x12263609 */
  if (C.zf) goto L_12263609;
L_122635f9:;
  /* 122635f9 call 0x122624d0 */
  push32(0x122635feu); f_122624d0();
  /* 122635fe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12263604 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12263607 jmp 0x1226360c */
  goto L_1226360c;
L_12263609:;
  /* 12263609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1226360c:;
  /* 1226360c mov esp, ebp */
  ESP = (EBP);
  /* 1226360e pop ebp */
  EBP = (pop32());
  /* 1226360f ret  */
  ESPCHK(0x12263570u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12263610 (32 bytes, 18 insns) */
void f_12263610(void) {
  FTRACE(0x12263610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263610 push ebp */
  push32((uint32_t)(EBP));
  /* 12263611 mov ebp, esp */
  EBP = (ESP);
  /* 12263613 push ebx */
  push32((uint32_t)(EBX));
  /* 12263614 push esi */
  push32((uint32_t)(ESI));
  /* 12263615 push edi */
  push32((uint32_t)(EDI));
  /* 12263616 push ebp */
  push32((uint32_t)(EBP));
  /* 12263617 push 0 */
  push32((uint32_t)(0x0u));
  /* 12263619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226361b push 0x12263628 */
  push32((uint32_t)(0x12263628u));
  /* 12263620 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12263623 call 0x1226ad5c */
  push32(0x12263628u); f_1226ad5c();
  /* 12263628 pop ebp */
  EBP = (pop32());
  /* 12263629 pop edi */
  EDI = (pop32());
  /* 1226362a pop esi */
  ESI = (pop32());
  /* 1226362b pop ebx */
  EBX = (pop32());
  /* 1226362c mov esp, ebp */
  ESP = (EBP);
  /* 1226362e pop ebp */
  EBP = (pop32());
  /* 1226362f ret  */
  ESPCHK(0x12263610u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12263652 (104 bytes, 33 insns) */
void f_12263652(void) {
  FTRACE(0x12263652u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263652 push ebx */
  push32((uint32_t)(EBX));
  /* 12263653 push esi */
  push32((uint32_t)(ESI));
  /* 12263654 push edi */
  push32((uint32_t)(EDI));
  /* 12263655 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12263659 push eax */
  push32((uint32_t)(EAX));
  /* 1226365a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1226365c push 0x12263630 */
  push32((uint32_t)(0x12263630u));
  /* 12263661 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12263668 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1226366f:;
  /* 1226366f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12263673 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12263676 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12263679 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226367c je 0x122636ac */
  if (C.zf) goto L_122636ac;
  /* 1226367e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263682 je 0x122636ac */
  if (C.zf) goto L_122636ac;
  /* 12263684 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12263687 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1226368a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1226368e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12263691 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263696 jne 0x122636aa */
  if (!C.zf) goto L_122636aa;
  /* 12263698 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1226369d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 122636a1 call 0x122636e6 */
  push32(0x122636a6u); f_122636e6();
  /* 122636a6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x122636aau);
L_122636aa:;
  /* 122636aa jmp 0x1226366f */
  goto L_1226366f;
L_122636ac:;
  /* 122636ac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 122636b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122636b6 pop edi */
  EDI = (pop32());
  /* 122636b7 pop esi */
  ESI = (pop32());
  /* 122636b8 pop ebx */
  EBX = (pop32());
  /* 122636b9 ret  */
  ESPCHK(0x12263652u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e6 @ 0x122636e6 (24 bytes, 10 insns) */
void f_122636e6(void) {
  FTRACE(0x122636e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122636e6 push ebx */
  push32((uint32_t)(EBX));
  /* 122636e7 push ecx */
  push32((uint32_t)(ECX));
  /* 122636e8 mov ebx, 0x122853b8 */
  EBX = (0x122853b8u);
  /* 122636ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122636f0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 122636f3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 122636f6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 122636f9 pop ecx */
  ECX = (pop32());
  /* 122636fa pop ebx */
  EBX = (pop32());
  /* 122636fb ret 4 */
  ESPCHK(0x122636e6u, _esp0);
  ESP += 8; return;
}

/* FUN_100137c5 @ 0x122637c5 (27 bytes, 11 insns) */
void f_122637c5(void) {
  FTRACE(0x122637c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122637c5 push ebp */
  push32((uint32_t)(EBP));
  /* 122637c6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 122637ca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 122637cc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122637cf push eax */
  push32((uint32_t)(EAX));
  /* 122637d0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 122637d3 push eax */
  push32((uint32_t)(EAX));
  /* 122637d4 call 0x12263652 */
  push32(0x122637d9u); f_12263652();
  /* 122637d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122637dc pop ebp */
  EBP = (pop32());
  /* 122637dd ret 4 */
  ESPCHK(0x122637c5u, _esp0);
  ESP += 8; return;
}

/* FUN_100137e0 @ 0x122637e0 (482 bytes, 138 insns) */
void f_122637e0(void) {
  FTRACE(0x122637e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122637e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122637e1 mov ebp, esp */
  EBP = (ESP);
  /* 122637e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122637e6 push esi */
  push32((uint32_t)(ESI));
  /* 122637e7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 122637ee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 122637f0 call 0x1225e000 */
  push32(0x122637f5u); f_1225e000();
  /* 122637f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122637f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122637ff jmp 0x1226380a */
  goto L_1226380a;
L_12263801:;
  /* 12263801 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263804 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263807 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1226380a:;
  /* 1226380a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226380e jge 0x122639b0 */
  if ((C.sf==C.of)) goto L_122639b0;
  /* 12263814 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263817 cmp dword ptr [ecx*4 + 0x12288160], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12288160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226381f je 0x12263916 */
  if (C.zf) goto L_12263916;
  /* 12263825 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263828 mov eax, dword ptr [edx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12288160)));
  /* 1226382f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12263832 jmp 0x1226383d */
  goto L_1226383d;
L_12263834:;
  /* 12263834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263837 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226383a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1226383d:;
  /* 1226383d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263840 mov eax, dword ptr [edx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12288160)));
  /* 12263847 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226384c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226384f jae 0x12263906 */
  if (!C.cf) goto L_12263906;
  /* 12263855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263858 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1226385c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1226385f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12263861 jne 0x12263901 */
  if (!C.zf) goto L_12263901;
  /* 12263867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226386a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226386e jne 0x122638a9 */
  if (!C.zf) goto L_122638a9;
  /* 12263870 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12263872 call 0x1225e000 */
  push32(0x12263877u); f_1225e000();
  /* 12263877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226387a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226387d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263881 jne 0x1226389f */
  if (!C.zf) goto L_1226389f;
  /* 12263883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263886 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263889 push edx */
  push32((uint32_t)(EDX));
  /* 1226388a call dword ptr [0x12289358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289358))), 0x12263890u);
  /* 12263890 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263893 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12263896 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226389c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1226389f:;
  /* 1226389f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122638a1 call 0x1225e0a0 */
  push32(0x122638a6u); f_1225e0a0();
  /* 122638a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122638a9:;
  /* 122638a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122638ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122638af push eax */
  push32((uint32_t)(EAX));
  /* 122638b0 call dword ptr [0x12289354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289354))), 0x122638b6u);
  /* 122638b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122638b9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122638bd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122638c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122638c2 je 0x122638d6 */
  if (C.zf) goto L_122638d6;
  /* 122638c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122638c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122638ca push eax */
  push32((uint32_t)(EAX));
  /* 122638cb call dword ptr [0x12289350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289350))), 0x122638d1u);
  /* 122638d1 jmp 0x12263834 */
  goto L_12263834;
L_122638d6:;
  /* 122638d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122638d9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 122638df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122638e2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122638e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122638e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122638eb sub eax, dword ptr [edx*4 + 0x12288160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12288160))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122638f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122638f3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 122638f8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122638fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122638fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122638ff jmp 0x12263906 */
  goto L_12263906;
L_12263901:;
  /* 12263901 jmp 0x12263834 */
  goto L_12263834;
L_12263906:;
  /* 12263906 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226390a je 0x12263911 */
  if (C.zf) goto L_12263911;
  /* 1226390c jmp 0x122639b0 */
  goto L_122639b0;
L_12263911:;
  /* 12263911 jmp 0x122639ab */
  goto L_122639ab;
L_12263916:;
  /* 12263916 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12263918 push 0x12282434 */
  push32((uint32_t)(0x12282434u));
  /* 1226391d push 2 */
  push32((uint32_t)(0x2u));
  /* 1226391f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12263924 call 0x1225a600 */
  push32(0x12263929u); f_1225a600();
  /* 12263929 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226392c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1226392f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263933 je 0x122639a9 */
  if (C.zf) goto L_122639a9;
  /* 12263935 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226393b mov dword ptr [eax*4 + 0x12288160], ecx */
  w32((uint32_t)(EAX*4 + 0x12288160), (ECX));
  /* 12263942 mov edx, dword ptr [0x1228829c] */
  EDX = (r32((uint32_t)(0x1228829c)));
  /* 12263948 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226394b mov dword ptr [0x1228829c], edx */
  w32((uint32_t)(0x1228829c), (EDX));
  /* 12263951 jmp 0x1226395c */
  goto L_1226395c;
L_12263953:;
  /* 12263953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263956 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1226395c:;
  /* 1226395c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226395f mov edx, dword ptr [ecx*4 + 0x12288160] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 12263966 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226396c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226396f jae 0x12263994 */
  if (!C.cf) goto L_12263994;
  /* 12263971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263974 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12263978 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226397b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12263981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263984 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12263988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226398b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12263992 jmp 0x12263953 */
  goto L_12263953;
L_12263994:;
  /* 12263994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263997 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1226399a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1226399d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122639a0 push edx */
  push32((uint32_t)(EDX));
  /* 122639a1 call 0x12263cf0 */
  push32(0x122639a6u); f_12263cf0();
  /* 122639a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122639a9:;
  /* 122639a9 jmp 0x122639b0 */
  goto L_122639b0;
L_122639ab:;
  /* 122639ab jmp 0x12263801 */
  goto L_12263801;
L_122639b0:;
  /* 122639b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 122639b2 call 0x1225e0a0 */
  push32(0x122639b7u); f_1225e0a0();
  /* 122639b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122639ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122639bd pop esi */
  ESI = (pop32());
  /* 122639be mov esp, ebp */
  ESP = (EBP);
  /* 122639c0 pop ebp */
  EBP = (pop32());
  /* 122639c1 ret  */
  ESPCHK(0x122637e0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x122639d0 (183 bytes, 57 insns) */
void f_122639d0(void) {
  FTRACE(0x122639d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122639d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122639d1 mov ebp, esp */
  EBP = (ESP);
  /* 122639d3 push ecx */
  push32((uint32_t)(ECX));
  /* 122639d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122639d7 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122639dd jae 0x12263a6a */
  if (!C.cf) goto L_12263a6a;
  /* 122639e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122639e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122639e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122639ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122639ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122639f2 mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 122639f9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122639fd jne 0x12263a6a */
  if (!C.zf) goto L_12263a6a;
  /* 122639ff cmp dword ptr [0x12286784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12286784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263a06 jne 0x12263a4a */
  if (!C.zf) goto L_12263a4a;
  /* 12263a08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263a0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12263a0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263a12 je 0x12263a22 */
  if (C.zf) goto L_12263a22;
  /* 12263a14 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263a18 je 0x12263a30 */
  if (C.zf) goto L_12263a30;
  /* 12263a1a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263a1e je 0x12263a3e */
  if (C.zf) goto L_12263a3e;
  /* 12263a20 jmp 0x12263a4a */
  goto L_12263a4a;
L_12263a22:;
  /* 12263a22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12263a25 push edx */
  push32((uint32_t)(EDX));
  /* 12263a26 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12263a28 call dword ptr [0x12289310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289310))), 0x12263a2eu);
  /* 12263a2e jmp 0x12263a4a */
  goto L_12263a4a;
L_12263a30:;
  /* 12263a30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12263a33 push eax */
  push32((uint32_t)(EAX));
  /* 12263a34 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12263a36 call dword ptr [0x12289310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289310))), 0x12263a3cu);
  /* 12263a3c jmp 0x12263a4a */
  goto L_12263a4a;
L_12263a3e:;
  /* 12263a3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12263a41 push ecx */
  push32((uint32_t)(ECX));
  /* 12263a42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12263a44 call dword ptr [0x12289310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289310))), 0x12263a4au);
L_12263a4a:;
  /* 12263a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263a4d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12263a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263a53 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12263a56 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263a59 mov ecx, dword ptr [edx*4 + 0x12288160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12288160)));
  /* 12263a60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12263a63 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12263a66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12263a68 jmp 0x12263a83 */
  goto L_12263a83;
L_12263a6a:;
  /* 12263a6a call 0x122624d0 */
  push32(0x12263a6fu); f_122624d0();
  /* 12263a6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12263a75 call 0x122624e0 */
  push32(0x12263a7au); f_122624e0();
  /* 12263a7a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12263a80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12263a83:;
  /* 12263a83 mov esp, ebp */
  ESP = (EBP);
  /* 12263a85 pop ebp */
  EBP = (pop32());
  /* 12263a86 ret  */
  ESPCHK(0x122639d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a90 @ 0x12263a90 (216 bytes, 63 insns) */
void f_12263a90(void) {
  FTRACE(0x12263a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12263a91 mov ebp, esp */
  EBP = (ESP);
  /* 12263a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12263a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263a97 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263a9d jae 0x12263b4b */
  if (!C.cf) goto L_12263b4b;
  /* 12263aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263aa6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12263aa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263aac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12263aaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263ab2 mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 12263ab9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12263abe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12263ac1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12263ac3 je 0x12263b4b */
  if (C.zf) goto L_12263b4b;
  /* 12263ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263acc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12263acf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263ad2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12263ad5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263ad8 mov ecx, dword ptr [edx*4 + 0x12288160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12288160)));
  /* 12263adf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263ae3 je 0x12263b4b */
  if (C.zf) goto L_12263b4b;
  /* 12263ae5 cmp dword ptr [0x12286784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12286784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263aec jne 0x12263b2a */
  if (!C.zf) goto L_12263b2a;
  /* 12263aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263af1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12263af4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263af8 je 0x12263b08 */
  if (C.zf) goto L_12263b08;
  /* 12263afa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263afe je 0x12263b14 */
  if (C.zf) goto L_12263b14;
  /* 12263b00 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263b04 je 0x12263b20 */
  if (C.zf) goto L_12263b20;
  /* 12263b06 jmp 0x12263b2a */
  goto L_12263b2a;
L_12263b08:;
  /* 12263b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12263b0a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12263b0c call dword ptr [0x12289310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289310))), 0x12263b12u);
  /* 12263b12 jmp 0x12263b2a */
  goto L_12263b2a;
L_12263b14:;
  /* 12263b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12263b16 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12263b18 call dword ptr [0x12289310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289310))), 0x12263b1eu);
  /* 12263b1e jmp 0x12263b2a */
  goto L_12263b2a;
L_12263b20:;
  /* 12263b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12263b22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12263b24 call dword ptr [0x12289310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289310))), 0x12263b2au);
L_12263b2a:;
  /* 12263b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263b2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263b30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263b33 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12263b36 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263b39 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12263b40 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12263b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12263b49 jmp 0x12263b64 */
  goto L_12263b64;
L_12263b4b:;
  /* 12263b4b call 0x122624d0 */
  push32(0x12263b50u); f_122624d0();
  /* 12263b50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12263b56 call 0x122624e0 */
  push32(0x12263b5bu); f_122624e0();
  /* 12263b5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12263b61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12263b64:;
  /* 12263b64 mov esp, ebp */
  ESP = (EBP);
  /* 12263b66 pop ebp */
  EBP = (pop32());
  /* 12263b67 ret  */
  ESPCHK(0x12263a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b70 @ 0x12263b70 (102 bytes, 30 insns) */
void f_12263b70(void) {
  FTRACE(0x12263b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12263b71 mov ebp, esp */
  EBP = (ESP);
  /* 12263b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263b76 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263b7c jae 0x12263bbb */
  if (!C.cf) goto L_12263bbb;
  /* 12263b7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263b81 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12263b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263b87 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12263b8a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263b8d mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 12263b94 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12263b99 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12263b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12263b9e je 0x12263bbb */
  if (C.zf) goto L_12263bbb;
  /* 12263ba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263ba3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12263ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263ba9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12263bac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263baf mov ecx, dword ptr [edx*4 + 0x12288160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12288160)));
  /* 12263bb6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12263bb9 jmp 0x12263bd4 */
  goto L_12263bd4;
L_12263bbb:;
  /* 12263bbb call 0x122624d0 */
  push32(0x12263bc0u); f_122624d0();
  /* 12263bc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12263bc6 call 0x122624e0 */
  push32(0x12263bcbu); f_122624e0();
  /* 12263bcb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12263bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12263bd4:;
  /* 12263bd4 pop ebp */
  EBP = (pop32());
  /* 12263bd5 ret  */
  ESPCHK(0x12263b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013be0 @ 0x12263be0 (260 bytes, 83 insns) */
void f_12263be0(void) {
  FTRACE(0x12263be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12263be1 mov ebp, esp */
  EBP = (ESP);
  /* 12263be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12263be6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12263bea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12263bed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12263bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12263bf2 je 0x12263bfd */
  if (C.zf) goto L_12263bfd;
  /* 12263bf4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12263bf7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12263bfa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12263bfd:;
  /* 12263bfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12263c00 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12263c06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12263c08 je 0x12263c12 */
  if (C.zf) goto L_12263c12;
  /* 12263c0a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12263c0d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12263c0f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12263c12:;
  /* 12263c12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12263c15 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12263c1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12263c1d je 0x12263c28 */
  if (C.zf) goto L_12263c28;
  /* 12263c1f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12263c22 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12263c25 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12263c28:;
  /* 12263c28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263c2b push eax */
  push32((uint32_t)(EAX));
  /* 12263c2c call dword ptr [0x122893e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893e8))), 0x12263c32u);
  /* 12263c32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12263c35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263c39 jne 0x12263c52 */
  if (!C.zf) goto L_12263c52;
  /* 12263c3b call dword ptr [0x122893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893dc))), 0x12263c41u);
  /* 12263c41 push eax */
  push32((uint32_t)(EAX));
  /* 12263c42 call 0x12262430 */
  push32(0x12263c47u); f_12262430();
  /* 12263c47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263c4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12263c4d jmp 0x12263ce0 */
  goto L_12263ce0;
L_12263c52:;
  /* 12263c52 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263c56 jne 0x12263c63 */
  if (!C.zf) goto L_12263c63;
  /* 12263c58 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12263c5b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12263c5e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12263c61 jmp 0x12263c72 */
  goto L_12263c72;
L_12263c63:;
  /* 12263c63 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263c67 jne 0x12263c72 */
  if (!C.zf) goto L_12263c72;
  /* 12263c69 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12263c6c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12263c6f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12263c72:;
  /* 12263c72 call 0x122637e0 */
  push32(0x12263c77u); f_122637e0();
  /* 12263c77 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12263c7a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263c7e jne 0x12263c9b */
  if (!C.zf) goto L_12263c9b;
  /* 12263c80 call 0x122624d0 */
  push32(0x12263c85u); f_122624d0();
  /* 12263c85 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12263c8b call 0x122624e0 */
  push32(0x12263c90u); f_122624e0();
  /* 12263c90 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12263c96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12263c99 jmp 0x12263ce0 */
  goto L_12263ce0;
L_12263c9b:;
  /* 12263c9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263c9e push eax */
  push32((uint32_t)(EAX));
  /* 12263c9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 12263ca3 call 0x122639d0 */
  push32(0x12263ca8u); f_122639d0();
  /* 12263ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263cab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12263cae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12263cb1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12263cb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263cb7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263cba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263cbd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12263cc0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263cc3 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12263cca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12263ccd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12263cd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263cd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12263cd5 call 0x12263d80 */
  push32(0x12263cdau); f_12263d80();
  /* 12263cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263cdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12263ce0:;
  /* 12263ce0 mov esp, ebp */
  ESP = (EBP);
  /* 12263ce2 pop ebp */
  EBP = (pop32());
  /* 12263ce3 ret  */
  ESPCHK(0x12263be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cf0 @ 0x12263cf0 (134 bytes, 44 insns) */
void f_12263cf0(void) {
  FTRACE(0x12263cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12263cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12263cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12263cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263cf7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263cfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263cfd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12263d00 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263d03 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12263d0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263d0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12263d0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263d12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263d16 jne 0x12263d51 */
  if (!C.zf) goto L_12263d51;
  /* 12263d18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12263d1a call 0x1225e000 */
  push32(0x12263d1fu); f_1225e000();
  /* 12263d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263d25 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263d29 jne 0x12263d47 */
  if (!C.zf) goto L_12263d47;
  /* 12263d2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263d2e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263d31 push edx */
  push32((uint32_t)(EDX));
  /* 12263d32 call dword ptr [0x12289358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289358))), 0x12263d38u);
  /* 12263d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263d3b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12263d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263d41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263d44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12263d47:;
  /* 12263d47 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12263d49 call 0x1225e0a0 */
  push32(0x12263d4eu); f_1225e0a0();
  /* 12263d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12263d51:;
  /* 12263d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263d54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263d57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263d5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12263d5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263d60 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12263d67 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12263d6b push eax */
  push32((uint32_t)(EAX));
  /* 12263d6c call dword ptr [0x12289354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289354))), 0x12263d72u);
  /* 12263d72 mov esp, ebp */
  ESP = (EBP);
  /* 12263d74 pop ebp */
  EBP = (pop32());
  /* 12263d75 ret  */
  ESPCHK(0x12263cf0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12263d80 (38 bytes, 13 insns) */
void f_12263d80(void) {
  FTRACE(0x12263d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12263d81 mov ebp, esp */
  EBP = (ESP);
  /* 12263d83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263d86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12263d89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263d8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12263d8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12263d92 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12263d99 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12263d9d push eax */
  push32((uint32_t)(EAX));
  /* 12263d9e call dword ptr [0x12289350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289350))), 0x12263da4u);
  /* 12263da4 pop ebp */
  EBP = (pop32());
  /* 12263da5 ret  */
  ESPCHK(0x12263d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013db0 @ 0x12263db0 (218 bytes, 63 insns) */
void f_12263db0(void) {
  FTRACE(0x12263db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12263db1 mov ebp, esp */
  EBP = (ESP);
  /* 12263db3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12263db6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12263dbd push 2 */
  push32((uint32_t)(0x2u));
  /* 12263dbf call 0x1225e000 */
  push32(0x12263dc4u); f_1225e000();
  /* 12263dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263dc7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12263dce jmp 0x12263dd9 */
  goto L_12263dd9;
L_12263dd0:;
  /* 12263dd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263dd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263dd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12263dd9:;
  /* 12263dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263ddc cmp ecx, dword ptr [0x12287e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12287e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263de2 jge 0x12263e79 */
  if ((C.sf==C.of)) goto L_12263e79;
  /* 12263de8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263deb mov eax, dword ptr [0x12286b20] */
  EAX = (r32((uint32_t)(0x12286b20)));
  /* 12263df0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263df4 je 0x12263e74 */
  if (C.zf) goto L_12263e74;
  /* 12263df6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263df9 mov edx, dword ptr [0x12286b20] */
  EDX = (r32((uint32_t)(0x12286b20)));
  /* 12263dff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12263e02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12263e05 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12263e0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12263e0d je 0x12263e31 */
  if (C.zf) goto L_12263e31;
  /* 12263e0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263e12 mov eax, dword ptr [0x12286b20] */
  EAX = (r32((uint32_t)(0x12286b20)));
  /* 12263e17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12263e1a push ecx */
  push32((uint32_t)(ECX));
  /* 12263e1b call 0x12264ba0 */
  push32(0x12263e20u); f_12264ba0();
  /* 12263e20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263e23 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263e26 je 0x12263e31 */
  if (C.zf) goto L_12263e31;
  /* 12263e28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263e2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263e2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12263e31:;
  /* 12263e31 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263e35 jl 0x12263e74 */
  if ((C.sf!=C.of)) goto L_12263e74;
  /* 12263e37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263e3a mov ecx, dword ptr [0x12286b20] */
  ECX = (r32((uint32_t)(0x12286b20)));
  /* 12263e40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12263e43 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12263e46 push edx */
  push32((uint32_t)(EDX));
  /* 12263e47 call dword ptr [0x122893bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893bc))), 0x12263e4du);
  /* 12263e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12263e4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263e52 mov ecx, dword ptr [0x12286b20] */
  ECX = (r32((uint32_t)(0x12286b20)));
  /* 12263e58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12263e5b push edx */
  push32((uint32_t)(EDX));
  /* 12263e5c call 0x1225b090 */
  push32(0x12263e61u); f_1225b090();
  /* 12263e61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263e64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263e67 mov ecx, dword ptr [0x12286b20] */
  ECX = (r32((uint32_t)(0x12286b20)));
  /* 12263e6d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12263e74:;
  /* 12263e74 jmp 0x12263dd0 */
  goto L_12263dd0;
L_12263e79:;
  /* 12263e79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12263e7b call 0x1225e0a0 */
  push32(0x12263e80u); f_1225e0a0();
  /* 12263e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263e83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263e86 mov esp, ebp */
  ESP = (EBP);
  /* 12263e88 pop ebp */
  EBP = (pop32());
  /* 12263e89 ret  */
  ESPCHK(0x12263db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e90 @ 0x12263e90 (68 bytes, 26 insns) */
void f_12263e90(void) {
  FTRACE(0x12263e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12263e91 mov ebp, esp */
  EBP = (ESP);
  /* 12263e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12263e94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263e98 jne 0x12263ea6 */
  if (!C.zf) goto L_12263ea6;
  /* 12263e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12263e9c call 0x12264000 */
  push32(0x12263ea1u); f_12264000();
  /* 12263ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263ea4 jmp 0x12263ed0 */
  goto L_12263ed0;
L_12263ea6:;
  /* 12263ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263ea9 push eax */
  push32((uint32_t)(EAX));
  /* 12263eaa call 0x12263410 */
  push32(0x12263eafu); f_12263410();
  /* 12263eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263eb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12263eb6 call 0x12263ee0 */
  push32(0x12263ebbu); f_12263ee0();
  /* 12263ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263ebe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12263ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263ec4 push edx */
  push32((uint32_t)(EDX));
  /* 12263ec5 call 0x12263480 */
  push32(0x12263ecau); f_12263480();
  /* 12263eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12263ed0:;
  /* 12263ed0 mov esp, ebp */
  ESP = (EBP);
  /* 12263ed2 pop ebp */
  EBP = (pop32());
  /* 12263ed3 ret  */
  ESPCHK(0x12263e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x12263ee0 (65 bytes, 26 insns) */
void f_12263ee0(void) {
  FTRACE(0x12263ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12263ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12263ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263ee6 push eax */
  push32((uint32_t)(EAX));
  /* 12263ee7 call 0x12263f30 */
  push32(0x12263eecu); f_12263f30();
  /* 12263eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12263ef1 je 0x12263ef8 */
  if (C.zf) goto L_12263ef8;
  /* 12263ef3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12263ef6 jmp 0x12263f1f */
  goto L_12263f1f;
L_12263ef8:;
  /* 12263ef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263efb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12263efe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12263f04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12263f06 je 0x12263f1d */
  if (C.zf) goto L_12263f1d;
  /* 12263f08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263f0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12263f0e push ecx */
  push32((uint32_t)(ECX));
  /* 12263f0f call 0x12264cf0 */
  push32(0x12263f14u); f_12264cf0();
  /* 12263f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263f17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12263f19 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12263f1b jmp 0x12263f1f */
  goto L_12263f1f;
L_12263f1d:;
  /* 12263f1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12263f1f:;
  /* 12263f1f pop ebp */
  EBP = (pop32());
  /* 12263f20 ret  */
  ESPCHK(0x12263ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f30 @ 0x12263f30 (183 bytes, 62 insns) */
void f_12263f30(void) {
  FTRACE(0x12263f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12263f31 mov ebp, esp */
  EBP = (ESP);
  /* 12263f33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12263f36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12263f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12263f40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12263f43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263f46 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12263f49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12263f4c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263f4f jne 0x12263fcb */
  if (!C.zf) goto L_12263fcb;
  /* 12263f51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263f54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12263f57 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12263f5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12263f5f je 0x12263fcb */
  if (C.zf) goto L_12263fcb;
  /* 12263f61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263f64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263f67 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12263f69 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12263f6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12263f6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263f73 jle 0x12263fcb */
  if ((C.zf||C.sf!=C.of)) goto L_12263fcb;
  /* 12263f75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12263f78 push edx */
  push32((uint32_t)(EDX));
  /* 12263f79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263f7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12263f7f push ecx */
  push32((uint32_t)(ECX));
  /* 12263f80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263f83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12263f86 push eax */
  push32((uint32_t)(EAX));
  /* 12263f87 call 0x12262ea0 */
  push32(0x12263f8cu); f_12262ea0();
  /* 12263f8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263f8f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12263f92 jne 0x12263fb5 */
  if (!C.zf) goto L_12263fb5;
  /* 12263f94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263f97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12263f9a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12263fa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12263fa2 je 0x12263fb3 */
  if (C.zf) goto L_12263fb3;
  /* 12263fa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263fa7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12263faa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12263fad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263fb0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12263fb3:;
  /* 12263fb3 jmp 0x12263fcb */
  goto L_12263fcb;
L_12263fb5:;
  /* 12263fb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263fb8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12263fbb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12263fbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263fc1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12263fc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12263fcb:;
  /* 12263fcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263fce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263fd1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12263fd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12263fd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12263fd9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12263fe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12263fe3 mov esp, ebp */
  ESP = (EBP);
  /* 12263fe5 pop ebp */
  EBP = (pop32());
  /* 12263fe6 ret  */
  ESPCHK(0x12263f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ff0 @ 0x12263ff0 (15 bytes, 7 insns) */
void f_12263ff0(void) {
  FTRACE(0x12263ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12263ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12263ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12263ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12263ff5 call 0x12264000 */
  push32(0x12263ffau); f_12264000();
  /* 12263ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12263ffd pop ebp */
  EBP = (pop32());
  /* 12263ffe ret  */
  ESPCHK(0x12263ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014000 @ 0x12264000 (319 bytes, 94 insns) */
void f_12264000(void) {
  FTRACE(0x12264000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264000 push ebp */
  push32((uint32_t)(EBP));
  /* 12264001 mov ebp, esp */
  EBP = (ESP);
  /* 12264003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264006 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226400d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12264014 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264016 call 0x1225e000 */
  push32(0x1226401bu); f_1225e000();
  /* 1226401b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226401e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12264025 jmp 0x12264030 */
  goto L_12264030;
L_12264027:;
  /* 12264027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226402a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226402d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12264030:;
  /* 12264030 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264033 cmp ecx, dword ptr [0x12287e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12287e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264039 jge 0x12264123 */
  if ((C.sf==C.of)) goto L_12264123;
  /* 1226403f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264042 mov eax, dword ptr [0x12286b20] */
  EAX = (r32((uint32_t)(0x12286b20)));
  /* 12264047 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226404b je 0x1226411e */
  if (C.zf) goto L_1226411e;
  /* 12264051 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264054 mov edx, dword ptr [0x12286b20] */
  EDX = (r32((uint32_t)(0x12286b20)));
  /* 1226405a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1226405d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12264060 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12264066 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12264068 je 0x1226411e */
  if (C.zf) goto L_1226411e;
  /* 1226406e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264071 mov eax, dword ptr [0x12286b20] */
  EAX = (r32((uint32_t)(0x12286b20)));
  /* 12264076 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12264079 push ecx */
  push32((uint32_t)(ECX));
  /* 1226407a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226407d push edx */
  push32((uint32_t)(EDX));
  /* 1226407e call 0x12263450 */
  push32(0x12264083u); f_12263450();
  /* 12264083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264086 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264089 mov ecx, dword ptr [0x12286b20] */
  ECX = (r32((uint32_t)(0x12286b20)));
  /* 1226408f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12264092 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12264095 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1226409a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226409c je 0x12264105 */
  if (C.zf) goto L_12264105;
  /* 1226409e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122640a2 jne 0x122640c9 */
  if (!C.zf) goto L_122640c9;
  /* 122640a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122640a7 mov edx, dword ptr [0x12286b20] */
  EDX = (r32((uint32_t)(0x12286b20)));
  /* 122640ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 122640b0 push eax */
  push32((uint32_t)(EAX));
  /* 122640b1 call 0x12263ee0 */
  push32(0x122640b6u); f_12263ee0();
  /* 122640b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122640b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122640bc je 0x122640c7 */
  if (C.zf) goto L_122640c7;
  /* 122640be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122640c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122640c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122640c7:;
  /* 122640c7 jmp 0x12264105 */
  goto L_12264105;
L_122640c9:;
  /* 122640c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122640cd jne 0x12264105 */
  if (!C.zf) goto L_12264105;
  /* 122640cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122640d2 mov eax, dword ptr [0x12286b20] */
  EAX = (r32((uint32_t)(0x12286b20)));
  /* 122640d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122640da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122640dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 122640e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122640e2 je 0x12264105 */
  if (C.zf) goto L_12264105;
  /* 122640e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122640e7 mov ecx, dword ptr [0x12286b20] */
  ECX = (r32((uint32_t)(0x12286b20)));
  /* 122640ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122640f0 push edx */
  push32((uint32_t)(EDX));
  /* 122640f1 call 0x12263ee0 */
  push32(0x122640f6u); f_12263ee0();
  /* 122640f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122640f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122640fc jne 0x12264105 */
  if (!C.zf) goto L_12264105;
  /* 122640fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12264105:;
  /* 12264105 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264108 mov ecx, dword ptr [0x12286b20] */
  ECX = (r32((uint32_t)(0x12286b20)));
  /* 1226410e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12264111 push edx */
  push32((uint32_t)(EDX));
  /* 12264112 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264115 push eax */
  push32((uint32_t)(EAX));
  /* 12264116 call 0x122634c0 */
  push32(0x1226411bu); f_122634c0();
  /* 1226411b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226411e:;
  /* 1226411e jmp 0x12264027 */
  goto L_12264027;
L_12264123:;
  /* 12264123 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264125 call 0x1225e0a0 */
  push32(0x1226412au); f_1225e0a0();
  /* 1226412a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226412d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264131 jne 0x12264138 */
  if (!C.zf) goto L_12264138;
  /* 12264133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264136 jmp 0x1226413b */
  goto L_1226413b;
L_12264138:;
  /* 12264138 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1226413b:;
  /* 1226413b mov esp, ebp */
  ESP = (EBP);
  /* 1226413d pop ebp */
  EBP = (pop32());
  /* 1226413e ret  */
  ESPCHK(0x12264000u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12264140 (15 bytes, 7 insns) */
void f_12264140(void) {
  FTRACE(0x12264140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264140 push ebp */
  push32((uint32_t)(EBP));
  /* 12264141 mov ebp, esp */
  EBP = (ESP);
  /* 12264143 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264145 call 0x12259570 */
  push32(0x1226414au); f_12259570();
  /* 1226414a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226414d pop ebp */
  EBP = (pop32());
  /* 1226414e ret  */
  ESPCHK(0x12264140u, _esp0);
  ESP += 4; return;
}

/* FUN_10014150 @ 0x12264150 (1007 bytes, 269 insns) */
void f_12264150(void) {
  FTRACE(0x12264150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264150 push ebp */
  push32((uint32_t)(EBP));
  /* 12264151 mov ebp, esp */
  EBP = (ESP);
  /* 12264153 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264159 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226415d jl 0x12264165 */
  if ((C.sf!=C.of)) goto L_12264165;
  /* 1226415f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264163 jle 0x1226416c */
  if ((C.zf||C.sf!=C.of)) goto L_1226416c;
L_12264165:;
  /* 12264165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264167 jmp 0x1226453b */
  goto L_1226453b;
L_1226416c:;
  /* 1226416c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1226416e call 0x1225e000 */
  push32(0x12264173u); f_1225e000();
  /* 12264173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264176 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1226417d mov eax, dword ptr [0x12286b0c] */
  EAX = (r32((uint32_t)(0x12286b0c)));
  /* 12264182 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264185 mov dword ptr [0x12286b0c], eax */
  w32((uint32_t)(0x12286b0c), (EAX));
L_1226418a:;
  /* 1226418a cmp dword ptr [0x12286b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264191 je 0x1226419d */
  if (C.zf) goto L_1226419d;
  /* 12264193 push 1 */
  push32((uint32_t)(0x1u));
  /* 12264195 call dword ptr [0x1228930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228930c))), 0x1226419bu);
  /* 1226419b jmp 0x1226418a */
  goto L_1226418a;
L_1226419d:;
  /* 1226419d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122641a1 je 0x122641e1 */
  if (C.zf) goto L_122641e1;
  /* 122641a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122641a7 je 0x122641c1 */
  if (C.zf) goto L_122641c1;
  /* 122641a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122641ac push ecx */
  push32((uint32_t)(ECX));
  /* 122641ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122641b0 push edx */
  push32((uint32_t)(EDX));
  /* 122641b1 call 0x12264540 */
  push32(0x122641b6u); f_12264540();
  /* 122641b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122641b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 122641bf jmp 0x122641d3 */
  goto L_122641d3;
L_122641c1:;
  /* 122641c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122641c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122641c7 mov ecx, dword ptr [eax + 0x122854dc] */
  ECX = (r32((uint32_t)(EAX + 0x122854dc)));
  /* 122641cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_122641d3:;
  /* 122641d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 122641d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122641dc jmp 0x1226451b */
  goto L_1226451b;
L_122641e1:;
  /* 122641e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 122641e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122641ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122641f3 je 0x12264513 */
  if (C.zf) goto L_12264513;
  /* 122641f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122641fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122641ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264202 jne 0x12264424 */
  if (!C.zf) goto L_12264424;
  /* 12264208 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226420b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1226420f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264212 jne 0x12264424 */
  if (!C.zf) goto L_12264424;
  /* 12264218 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226421b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1226421f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264222 jne 0x12264424 */
  if (!C.zf) goto L_12264424;
  /* 12264228 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226422b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12264231:;
  /* 12264231 push 0x12282484 */
  push32((uint32_t)(0x12282484u));
  /* 12264236 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1226423c push ecx */
  push32((uint32_t)(ECX));
  /* 1226423d call 0x122663a0 */
  push32(0x12264242u); f_122663a0();
  /* 12264242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264245 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1226424b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264252 je 0x1226427d */
  if (C.zf) goto L_1226427d;
  /* 12264254 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226425a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264260 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12264266 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226426d je 0x1226427d */
  if (C.zf) goto L_1226427d;
  /* 1226426f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12264275 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12264278 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226427b jne 0x122642a3 */
  if (!C.zf) goto L_122642a3;
L_1226427d:;
  /* 1226427d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264281 je 0x1226429c */
  if (C.zf) goto L_1226429c;
  /* 12264283 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12264285 call 0x1225e0a0 */
  push32(0x1226428au); f_1225e0a0();
  /* 1226428a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226428d mov edx, dword ptr [0x12286b0c] */
  EDX = (r32((uint32_t)(0x12286b0c)));
  /* 12264293 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264296 mov dword ptr [0x12286b0c], edx */
  w32((uint32_t)(0x12286b0c), (EDX));
L_1226429c:;
  /* 1226429c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226429e jmp 0x1226453b */
  goto L_1226453b;
L_122642a3:;
  /* 122642a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 122642aa jmp 0x122642b5 */
  goto L_122642b5;
L_122642ac:;
  /* 122642ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122642af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122642b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122642b5:;
  /* 122642b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122642b9 jg 0x12264303 */
  if ((!C.zf&&C.sf==C.of)) goto L_12264303;
  /* 122642bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 122642c1 push ecx */
  push32((uint32_t)(ECX));
  /* 122642c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122642c8 push edx */
  push32((uint32_t)(EDX));
  /* 122642c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122642cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122642cf mov ecx, dword ptr [eax + 0x122854d8] */
  ECX = (r32((uint32_t)(EAX + 0x122854d8)));
  /* 122642d5 push ecx */
  push32((uint32_t)(ECX));
  /* 122642d6 call 0x12266360 */
  push32(0x122642dbu); f_12266360();
  /* 122642db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122642de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122642e0 jne 0x12264301 */
  if (!C.zf) goto L_12264301;
  /* 122642e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122642e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122642e8 mov eax, dword ptr [edx + 0x122854d8] */
  EAX = (r32((uint32_t)(EDX + 0x122854d8)));
  /* 122642ee push eax */
  push32((uint32_t)(EAX));
  /* 122642ef call 0x1225d430 */
  push32(0x122642f4u); f_1225d430();
  /* 122642f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122642f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122642fd jne 0x12264301 */
  if (!C.zf) goto L_12264301;
  /* 122642ff jmp 0x12264303 */
  goto L_12264303;
L_12264301:;
  /* 12264301 jmp 0x122642ac */
  goto L_122642ac;
L_12264303:;
  /* 12264303 push 0x12282480 */
  push32((uint32_t)(0x12282480u));
  /* 12264308 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226430e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264311 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12264317 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226431d push edx */
  push32((uint32_t)(EDX));
  /* 1226431e call 0x12266320 */
  push32(0x12264323u); f_12266320();
  /* 12264323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264326 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1226432c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264333 jne 0x12264369 */
  if (!C.zf) goto L_12264369;
  /* 12264335 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226433b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1226433e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264341 je 0x12264369 */
  if (C.zf) goto L_12264369;
  /* 12264343 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264347 je 0x12264362 */
  if (C.zf) goto L_12264362;
  /* 12264349 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1226434b call 0x1225e0a0 */
  push32(0x12264350u); f_1225e0a0();
  /* 12264350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264353 mov edx, dword ptr [0x12286b0c] */
  EDX = (r32((uint32_t)(0x12286b0c)));
  /* 12264359 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226435c mov dword ptr [0x12286b0c], edx */
  w32((uint32_t)(0x12286b0c), (EDX));
L_12264362:;
  /* 12264362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264364 jmp 0x1226453b */
  goto L_1226453b;
L_12264369:;
  /* 12264369 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226436d jg 0x122643ba */
  if ((!C.zf&&C.sf==C.of)) goto L_122643ba;
  /* 1226436f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12264375 push eax */
  push32((uint32_t)(EAX));
  /* 12264376 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226437c push ecx */
  push32((uint32_t)(ECX));
  /* 1226437d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12264383 push edx */
  push32((uint32_t)(EDX));
  /* 12264384 call 0x1225de20 */
  push32(0x12264389u); f_1225de20();
  /* 12264389 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226438c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12264392 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1226439a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 122643a0 push ecx */
  push32((uint32_t)(ECX));
  /* 122643a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122643a4 push edx */
  push32((uint32_t)(EDX));
  /* 122643a5 call 0x12264540 */
  push32(0x122643aau); f_12264540();
  /* 122643aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122643ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122643af je 0x122643ba */
  if (C.zf) goto L_122643ba;
  /* 122643b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122643b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122643b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122643ba:;
  /* 122643ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122643c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122643c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 122643cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122643d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122643d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122643d7 je 0x122643e8 */
  if (C.zf) goto L_122643e8;
  /* 122643d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122643df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122643e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_122643e8:;
  /* 122643e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122643ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122643f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122643f3 jne 0x12264231 */
  if (!C.zf) goto L_12264231;
  /* 122643f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122643fd je 0x1226440c */
  if (C.zf) goto L_1226440c;
  /* 122643ff call 0x122646e0 */
  push32(0x12264404u); f_122646e0();
  /* 12264404 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1226440a jmp 0x12264416 */
  goto L_12264416;
L_1226440c:;
  /* 1226440c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12264416:;
  /* 12264416 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1226441c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1226441f jmp 0x12264511 */
  goto L_12264511;
L_12264424:;
  /* 12264424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264427 push edx */
  push32((uint32_t)(EDX));
  /* 12264428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226442a push 0 */
  push32((uint32_t)(0x0u));
  /* 1226442c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12264432 push eax */
  push32((uint32_t)(EAX));
  /* 12264433 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264436 push ecx */
  push32((uint32_t)(ECX));
  /* 12264437 call 0x122647e0 */
  push32(0x1226443cu); f_122647e0();
  /* 1226443c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226443f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12264442 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264446 je 0x12264511 */
  if (C.zf) goto L_12264511;
  /* 1226444c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12264453 jmp 0x1226445e */
  goto L_1226445e;
L_12264455:;
  /* 12264455 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12264458 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226445b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1226445e:;
  /* 1226445e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264462 jg 0x122644c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_122644c0;
  /* 12264464 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264468 je 0x122644be */
  if (C.zf) goto L_122644be;
  /* 1226446a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226446d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264470 mov ecx, dword ptr [eax + 0x122854dc] */
  ECX = (r32((uint32_t)(EAX + 0x122854dc)));
  /* 12264476 push ecx */
  push32((uint32_t)(ECX));
  /* 12264477 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1226447d push edx */
  push32((uint32_t)(EDX));
  /* 1226447e call 0x12266290 */
  push32(0x12264483u); f_12266290();
  /* 12264483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264488 je 0x122644b5 */
  if (C.zf) goto L_122644b5;
  /* 1226448a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12264490 push eax */
  push32((uint32_t)(EAX));
  /* 12264491 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12264494 push ecx */
  push32((uint32_t)(ECX));
  /* 12264495 call 0x12264540 */
  push32(0x1226449au); f_12264540();
  /* 1226449a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226449d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226449f je 0x122644ac */
  if (C.zf) goto L_122644ac;
  /* 122644a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122644a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122644a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122644aa jmp 0x122644b3 */
  goto L_122644b3;
L_122644ac:;
  /* 122644ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_122644b3:;
  /* 122644b3 jmp 0x122644be */
  goto L_122644be;
L_122644b5:;
  /* 122644b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122644b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122644bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122644be:;
  /* 122644be jmp 0x12264455 */
  goto L_12264455;
L_122644c0:;
  /* 122644c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122644c4 je 0x122644eb */
  if (C.zf) goto L_122644eb;
  /* 122644c6 call 0x122646e0 */
  push32(0x122644cbu); f_122646e0();
  /* 122644cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122644ce push 2 */
  push32((uint32_t)(0x2u));
  /* 122644d0 mov ecx, dword ptr [0x122854dc] */
  ECX = (r32((uint32_t)(0x122854dc)));
  /* 122644d6 push ecx */
  push32((uint32_t)(ECX));
  /* 122644d7 call 0x1225b090 */
  push32(0x122644dcu); f_1225b090();
  /* 122644dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122644df mov dword ptr [0x122854dc], 0 */
  w32((uint32_t)(0x122854dc), (0x0u));
  /* 122644e9 jmp 0x12264511 */
  goto L_12264511;
L_122644eb:;
  /* 122644eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122644ef je 0x122644fe */
  if (C.zf) goto L_122644fe;
  /* 122644f1 call 0x122646e0 */
  push32(0x122644f6u); f_122646e0();
  /* 122644f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 122644fc jmp 0x12264508 */
  goto L_12264508;
L_122644fe:;
  /* 122644fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12264508:;
  /* 12264508 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1226450e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12264511:;
  /* 12264511 jmp 0x1226451b */
  goto L_1226451b;
L_12264513:;
  /* 12264513 call 0x122646e0 */
  push32(0x12264518u); f_122646e0();
  /* 12264518 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1226451b:;
  /* 1226451b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226451f je 0x12264538 */
  if (C.zf) goto L_12264538;
  /* 12264521 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12264523 call 0x1225e0a0 */
  push32(0x12264528u); f_1225e0a0();
  /* 12264528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226452b mov eax, dword ptr [0x12286b0c] */
  EAX = (r32((uint32_t)(0x12286b0c)));
  /* 12264530 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264533 mov dword ptr [0x12286b0c], eax */
  w32((uint32_t)(0x12286b0c), (EAX));
L_12264538:;
  /* 12264538 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1226453b:;
  /* 1226453b mov esp, ebp */
  ESP = (EBP);
  /* 1226453d pop ebp */
  EBP = (pop32());
  /* 1226453e ret  */
  ESPCHK(0x12264150u, _esp0);
  ESP += 4; return;
}

/* FUN_10014540 @ 0x12264540 (403 bytes, 117 insns) */
void f_12264540(void) {
  FTRACE(0x12264540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264540 push ebp */
  push32((uint32_t)(EBP));
  /* 12264541 mov ebp, esp */
  EBP = (ESP);
  /* 12264543 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226454c push eax */
  push32((uint32_t)(EAX));
  /* 1226454d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12264553 push ecx */
  push32((uint32_t)(ECX));
  /* 12264554 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1226455a push edx */
  push32((uint32_t)(EDX));
  /* 1226455b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12264561 push eax */
  push32((uint32_t)(EAX));
  /* 12264562 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264565 push ecx */
  push32((uint32_t)(ECX));
  /* 12264566 call 0x122647e0 */
  push32(0x1226456bu); f_122647e0();
  /* 1226456b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226456e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264570 jne 0x12264579 */
  if (!C.zf) goto L_12264579;
  /* 12264572 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264574 jmp 0x122646cf */
  goto L_122646cf;
L_12264579:;
  /* 12264579 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1226457e push 0x12282488 */
  push32((uint32_t)(0x12282488u));
  /* 12264583 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264585 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1226458b push edx */
  push32((uint32_t)(EDX));
  /* 1226458c call 0x1225d430 */
  push32(0x12264591u); f_1225d430();
  /* 12264591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264594 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264597 push eax */
  push32((uint32_t)(EAX));
  /* 12264598 call 0x1225a600 */
  push32(0x1226459du); f_1225a600();
  /* 1226459d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122645a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122645a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122645a7 jne 0x122645b0 */
  if (!C.zf) goto L_122645b0;
  /* 122645a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122645ab jmp 0x122646cf */
  goto L_122646cf;
L_122645b0:;
  /* 122645b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122645b3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122645b6 mov ecx, dword ptr [eax + 0x122854dc] */
  ECX = (r32((uint32_t)(EAX + 0x122854dc)));
  /* 122645bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122645bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122645c2 mov eax, dword ptr [edx*4 + 0x12286988] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12286988)));
  /* 122645c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122645cc push 6 */
  push32((uint32_t)(0x6u));
  /* 122645ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122645d1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122645d4 add ecx, 0x122869d8 */
  { uint32_t _a=(ECX),_b=(0x122869d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122645da push ecx */
  push32((uint32_t)(ECX));
  /* 122645db lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 122645de push edx */
  push32((uint32_t)(EDX));
  /* 122645df call 0x12260ee0 */
  push32(0x122645e4u); f_12260ee0();
  /* 122645e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122645e7 mov eax, dword ptr [0x122869a0] */
  EAX = (r32((uint32_t)(0x122869a0)));
  /* 122645ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122645ef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 122645f5 push ecx */
  push32((uint32_t)(ECX));
  /* 122645f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122645f9 push edx */
  push32((uint32_t)(EDX));
  /* 122645fa call 0x1225d5b0 */
  push32(0x122645ffu); f_1225d5b0();
  /* 122645ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264605 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264608 mov dword ptr [ecx + 0x122854dc], eax */
  w32((uint32_t)(ECX + 0x122854dc), (EAX));
  /* 1226460e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12264614 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1226461a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226461d mov dword ptr [eax*4 + 0x12286988], edx */
  w32((uint32_t)(EAX*4 + 0x12286988), (EDX));
  /* 12264624 push 6 */
  push32((uint32_t)(0x6u));
  /* 12264626 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1226462c push ecx */
  push32((uint32_t)(ECX));
  /* 1226462d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264630 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264633 add edx, 0x122869d8 */
  { uint32_t _a=(EDX),_b=(0x122869d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264639 push edx */
  push32((uint32_t)(EDX));
  /* 1226463a call 0x12260ee0 */
  push32(0x1226463fu); f_12260ee0();
  /* 1226463f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264642 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264646 jne 0x12264653 */
  if (!C.zf) goto L_12264653;
  /* 12264648 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226464e mov dword ptr [0x122869a0], eax */
  w32((uint32_t)(0x122869a0), (EAX));
L_12264653:;
  /* 12264653 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264657 jne 0x12264665 */
  if (!C.zf) goto L_12264665;
  /* 12264659 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226465f mov dword ptr [0x122869a4], ecx */
  w32((uint32_t)(0x122869a4), (ECX));
L_12264665:;
  /* 12264665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264668 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226466b call dword ptr [edx + 0x122854e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x122854e0))), 0x12264671u);
  /* 12264671 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264673 je 0x122646ac */
  if (C.zf) goto L_122646ac;
  /* 12264675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264678 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226467b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226467e mov dword ptr [eax + 0x122854dc], ecx */
  w32((uint32_t)(EAX + 0x122854dc), (ECX));
  /* 12264684 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264686 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264689 push edx */
  push32((uint32_t)(EDX));
  /* 1226468a call 0x1225b090 */
  push32(0x1226468fu); f_1225b090();
  /* 1226468f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264695 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264698 mov dword ptr [eax*4 + 0x12286988], ecx */
  w32((uint32_t)(EAX*4 + 0x12286988), (ECX));
  /* 1226469f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122646a2 mov dword ptr [0x122869a0], edx */
  w32((uint32_t)(0x122869a0), (EDX));
  /* 122646a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122646aa jmp 0x122646cf */
  goto L_122646cf;
L_122646ac:;
  /* 122646ac cmp dword ptr [ebp - 0xc], 0x122853c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x122853c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122646b3 je 0x122646c3 */
  if (C.zf) goto L_122646c3;
  /* 122646b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122646b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122646ba push eax */
  push32((uint32_t)(EAX));
  /* 122646bb call 0x1225b090 */
  push32(0x122646c0u); f_1225b090();
  /* 122646c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122646c3:;
  /* 122646c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122646c6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122646c9 mov eax, dword ptr [ecx + 0x122854dc] */
  EAX = (r32((uint32_t)(ECX + 0x122854dc)));
L_122646cf:;
  /* 122646cf mov esp, ebp */
  ESP = (EBP);
  /* 122646d1 pop ebp */
  EBP = (pop32());
  /* 122646d2 ret  */
  ESPCHK(0x12264540u, _esp0);
  ESP += 4; return;
}

/* FUN_100146e0 @ 0x122646e0 (256 bytes, 72 insns) */
void f_122646e0(void) {
  FTRACE(0x122646e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122646e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122646e1 mov ebp, esp */
  EBP = (ESP);
  /* 122646e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122646e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122646ed cmp dword ptr [0x122854dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122854dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122646f4 jne 0x12264714 */
  if (!C.zf) goto L_12264714;
  /* 122646f6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 122646fb push 0x12282488 */
  push32((uint32_t)(0x12282488u));
  /* 12264700 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264702 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12264707 call 0x1225a600 */
  push32(0x1226470cu); f_1225a600();
  /* 1226470c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226470f mov dword ptr [0x122854dc], eax */
  w32((uint32_t)(0x122854dc), (EAX));
L_12264714:;
  /* 12264714 mov eax, dword ptr [0x122854dc] */
  EAX = (r32((uint32_t)(0x122854dc)));
  /* 12264719 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1226471c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12264723 jmp 0x1226472e */
  goto L_1226472e;
L_12264725:;
  /* 12264725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264728 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226472b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1226472e:;
  /* 1226472e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264731 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264734 mov eax, dword ptr [edx + 0x122854dc] */
  EAX = (r32((uint32_t)(EDX + 0x122854dc)));
  /* 1226473a push eax */
  push32((uint32_t)(EAX));
  /* 1226473b push 0x12282494 */
  push32((uint32_t)(0x12282494u));
  /* 12264740 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264743 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264746 mov edx, dword ptr [ecx + 0x122854d8] */
  EDX = (r32((uint32_t)(ECX + 0x122854d8)));
  /* 1226474c push edx */
  push32((uint32_t)(EDX));
  /* 1226474d push 3 */
  push32((uint32_t)(0x3u));
  /* 1226474f mov eax, dword ptr [0x122854dc] */
  EAX = (r32((uint32_t)(0x122854dc)));
  /* 12264754 push eax */
  push32((uint32_t)(EAX));
  /* 12264755 call 0x12264980 */
  push32(0x1226475au); f_12264980();
  /* 1226475a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226475d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264761 jge 0x122647a9 */
  if ((C.sf==C.of)) goto L_122647a9;
  /* 12264763 push 0x12282480 */
  push32((uint32_t)(0x12282480u));
  /* 12264768 mov ecx, dword ptr [0x122854dc] */
  ECX = (r32((uint32_t)(0x122854dc)));
  /* 1226476e push ecx */
  push32((uint32_t)(ECX));
  /* 1226476f call 0x1225d5c0 */
  push32(0x12264774u); f_1225d5c0();
  /* 12264774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264777 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226477a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226477d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264780 mov eax, dword ptr [edx + 0x122854dc] */
  EAX = (r32((uint32_t)(EDX + 0x122854dc)));
  /* 12264786 push eax */
  push32((uint32_t)(EAX));
  /* 12264787 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226478a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226478d mov edx, dword ptr [ecx + 0x122854dc] */
  EDX = (r32((uint32_t)(ECX + 0x122854dc)));
  /* 12264793 push edx */
  push32((uint32_t)(EDX));
  /* 12264794 call 0x12266290 */
  push32(0x12264799u); f_12266290();
  /* 12264799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226479c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226479e je 0x122647a7 */
  if (C.zf) goto L_122647a7;
  /* 122647a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122647a7:;
  /* 122647a7 jmp 0x122647d7 */
  goto L_122647d7;
L_122647a9:;
  /* 122647a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122647ad jne 0x122647b6 */
  if (!C.zf) goto L_122647b6;
  /* 122647af mov eax, dword ptr [0x122854dc] */
  EAX = (r32((uint32_t)(0x122854dc)));
  /* 122647b4 jmp 0x122647dc */
  goto L_122647dc;
L_122647b6:;
  /* 122647b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122647b8 mov eax, dword ptr [0x122854dc] */
  EAX = (r32((uint32_t)(0x122854dc)));
  /* 122647bd push eax */
  push32((uint32_t)(EAX));
  /* 122647be call 0x1225b090 */
  push32(0x122647c3u); f_1225b090();
  /* 122647c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122647c6 mov dword ptr [0x122854dc], 0 */
  w32((uint32_t)(0x122854dc), (0x0u));
  /* 122647d0 mov eax, dword ptr [0x122854f4] */
  EAX = (r32((uint32_t)(0x122854f4)));
  /* 122647d5 jmp 0x122647dc */
  goto L_122647dc;
L_122647d7:;
  /* 122647d7 jmp 0x12264725 */
  goto L_12264725;
L_122647dc:;
  /* 122647dc mov esp, ebp */
  ESP = (EBP);
  /* 122647de pop ebp */
  EBP = (pop32());
  /* 122647df ret  */
  ESPCHK(0x122646e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147e0 @ 0x122647e0 (388 bytes, 115 insns) */
void f_122647e0(void) {
  FTRACE(0x122647e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122647e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122647e1 mov ebp, esp */
  EBP = (ESP);
  /* 122647e3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122647e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122647ed jne 0x122647f6 */
  if (!C.zf) goto L_122647f6;
  /* 122647ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122647f1 jmp 0x12264960 */
  goto L_12264960;
L_122647f6:;
  /* 122647f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122647f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122647fc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122647ff jne 0x12264850 */
  if (!C.zf) goto L_12264850;
  /* 12264801 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264804 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12264808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226480a jne 0x12264850 */
  if (!C.zf) goto L_12264850;
  /* 1226480c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226480f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12264812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264815 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12264819 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226481d je 0x12264839 */
  if (C.zf) goto L_12264839;
  /* 1226481f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12264822 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12264827 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226482a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12264830 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12264833 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12264839:;
  /* 12264839 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226483d je 0x12264848 */
  if (C.zf) goto L_12264848;
  /* 1226483f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12264842 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12264848:;
  /* 12264848 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226484b jmp 0x12264960 */
  goto L_12264960;
L_12264850:;
  /* 12264850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264853 push ecx */
  push32((uint32_t)(ECX));
  /* 12264854 push 0x12285450 */
  push32((uint32_t)(0x12285450u));
  /* 12264859 call 0x12266290 */
  push32(0x1226485eu); f_12266290();
  /* 1226485e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264863 je 0x12264918 */
  if (C.zf) goto L_12264918;
  /* 12264869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226486c push edx */
  push32((uint32_t)(EDX));
  /* 1226486d push 0x122853cc */
  push32((uint32_t)(0x122853ccu));
  /* 12264872 call 0x12266290 */
  push32(0x12264877u); f_12266290();
  /* 12264877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226487a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226487c je 0x12264918 */
  if (C.zf) goto L_12264918;
  /* 12264882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264885 push eax */
  push32((uint32_t)(EAX));
  /* 12264886 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1226488c push ecx */
  push32((uint32_t)(ECX));
  /* 1226488d call 0x122649d0 */
  push32(0x12264892u); f_122649d0();
  /* 12264892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264897 je 0x122648a0 */
  if (C.zf) goto L_122648a0;
  /* 12264899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226489b jmp 0x12264960 */
  goto L_12264960;
L_122648a0:;
  /* 122648a0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 122648a6 push edx */
  push32((uint32_t)(EDX));
  /* 122648a7 push 0x122869b0 */
  push32((uint32_t)(0x122869b0u));
  /* 122648ac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 122648b2 push eax */
  push32((uint32_t)(EAX));
  /* 122648b3 call 0x122663e0 */
  push32(0x122648b8u); f_122663e0();
  /* 122648b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122648bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122648bd jne 0x122648c6 */
  if (!C.zf) goto L_122648c6;
  /* 122648bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122648c1 jmp 0x12264960 */
  goto L_12264960;
L_122648c6:;
  /* 122648c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122648c8 mov cx, word ptr [0x122869b4] */
  CX = (r16((uint32_t)(0x122869b4)));
  /* 122648cf mov dword ptr [0x122869b8], ecx */
  w32((uint32_t)(0x122869b8), (ECX));
  /* 122648d5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 122648db push edx */
  push32((uint32_t)(EDX));
  /* 122648dc push 0x12285450 */
  push32((uint32_t)(0x12285450u));
  /* 122648e1 call 0x12264b30 */
  push32(0x122648e6u); f_12264b30();
  /* 122648e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122648e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122648ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122648ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122648f1 je 0x12264906 */
  if (C.zf) goto L_12264906;
  /* 122648f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122648f6 push edx */
  push32((uint32_t)(EDX));
  /* 122648f7 push 0x122853cc */
  push32((uint32_t)(0x122853ccu));
  /* 122648fc call 0x1225d5b0 */
  push32(0x12264901u); f_1225d5b0();
  /* 12264901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264904 jmp 0x12264918 */
  goto L_12264918;
L_12264906:;
  /* 12264906 push 0x12285450 */
  push32((uint32_t)(0x12285450u));
  /* 1226490b push 0x122853cc */
  push32((uint32_t)(0x122853ccu));
  /* 12264910 call 0x1225d5b0 */
  push32(0x12264915u); f_1225d5b0();
  /* 12264915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12264918:;
  /* 12264918 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226491c je 0x12264931 */
  if (C.zf) goto L_12264931;
  /* 1226491e push 6 */
  push32((uint32_t)(0x6u));
  /* 12264920 push 0x122869b0 */
  push32((uint32_t)(0x122869b0u));
  /* 12264925 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12264928 push eax */
  push32((uint32_t)(EAX));
  /* 12264929 call 0x12260ee0 */
  push32(0x1226492eu); f_12260ee0();
  /* 1226492e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12264931:;
  /* 12264931 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264935 je 0x1226494a */
  if (C.zf) goto L_1226494a;
  /* 12264937 push 4 */
  push32((uint32_t)(0x4u));
  /* 12264939 push 0x122869b8 */
  push32((uint32_t)(0x122869b8u));
  /* 1226493e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12264941 push ecx */
  push32((uint32_t)(ECX));
  /* 12264942 call 0x12260ee0 */
  push32(0x12264947u); f_12260ee0();
  /* 12264947 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226494a:;
  /* 1226494a push 0x12285450 */
  push32((uint32_t)(0x12285450u));
  /* 1226494f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264952 push edx */
  push32((uint32_t)(EDX));
  /* 12264953 call 0x1225d5b0 */
  push32(0x12264958u); f_1225d5b0();
  /* 12264958 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226495b mov eax, 0x12285450 */
  EAX = (0x12285450u);
L_12264960:;
  /* 12264960 mov esp, ebp */
  ESP = (EBP);
  /* 12264962 pop ebp */
  EBP = (pop32());
  /* 12264963 ret  */
  ESPCHK(0x122647e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014970 @ 0x12264970 (7 bytes, 5 insns) */
void f_12264970(void) {
  FTRACE(0x12264970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264970 push ebp */
  push32((uint32_t)(EBP));
  /* 12264971 mov ebp, esp */
  EBP = (ESP);
  /* 12264973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264975 pop ebp */
  EBP = (pop32());
  /* 12264976 ret  */
  ESPCHK(0x12264970u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12264980 (79 bytes, 28 insns) */
void f_12264980(void) {
  FTRACE(0x12264980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264980 push ebp */
  push32((uint32_t)(EBP));
  /* 12264981 mov ebp, esp */
  EBP = (ESP);
  /* 12264983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264986 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12264989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1226498c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12264993 jmp 0x1226499e */
  goto L_1226499e;
L_12264995:;
  /* 12264995 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264998 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226499b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1226499e:;
  /* 1226499e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122649a1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122649a4 jge 0x122649c4 */
  if ((C.sf==C.of)) goto L_122649c4;
  /* 122649a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122649a9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122649ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122649af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122649b2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 122649b5 push edx */
  push32((uint32_t)(EDX));
  /* 122649b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122649b9 push eax */
  push32((uint32_t)(EAX));
  /* 122649ba call 0x1225d5c0 */
  push32(0x122649bfu); f_1225d5c0();
  /* 122649bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122649c2 jmp 0x12264995 */
  goto L_12264995;
L_122649c4:;
  /* 122649c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122649cb mov esp, ebp */
  ESP = (EBP);
  /* 122649cd pop ebp */
  EBP = (pop32());
  /* 122649ce ret  */
  ESPCHK(0x12264980u, _esp0);
  ESP += 4; return;
}

/* FUN_100149d0 @ 0x122649d0 (349 bytes, 122 insns) */
void f_122649d0(void) {
  FTRACE(0x122649d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122649d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122649d1 mov ebp, esp */
  EBP = (ESP);
  /* 122649d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122649d6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 122649db push 0 */
  push32((uint32_t)(0x0u));
  /* 122649dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122649e0 push eax */
  push32((uint32_t)(EAX));
  /* 122649e1 call 0x1225e370 */
  push32(0x122649e6u); f_1225e370();
  /* 122649e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122649e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122649ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122649ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122649f1 jne 0x122649fa */
  if (!C.zf) goto L_122649fa;
  /* 122649f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122649f5 jmp 0x12264b29 */
  goto L_12264b29;
L_122649fa:;
  /* 122649fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122649fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12264a00 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264a03 jne 0x12264a30 */
  if (!C.zf) goto L_12264a30;
  /* 12264a05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264a08 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12264a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264a0e je 0x12264a30 */
  if (C.zf) goto L_12264a30;
  /* 12264a10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264a13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264a16 push ecx */
  push32((uint32_t)(ECX));
  /* 12264a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264a1a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264a20 push edx */
  push32((uint32_t)(EDX));
  /* 12264a21 call 0x1225d5b0 */
  push32(0x12264a26u); f_1225d5b0();
  /* 12264a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264a2b jmp 0x12264b29 */
  goto L_12264b29;
L_12264a30:;
  /* 12264a30 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12264a37 jmp 0x12264a42 */
  goto L_12264a42;
L_12264a39:;
  /* 12264a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264a3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264a3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12264a42:;
  /* 12264a42 push 0x12282498 */
  push32((uint32_t)(0x12282498u));
  /* 12264a47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264a4a push ecx */
  push32((uint32_t)(ECX));
  /* 12264a4b call 0x12266320 */
  push32(0x12264a50u); f_12266320();
  /* 12264a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264a53 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12264a56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264a5a jne 0x12264a64 */
  if (!C.zf) goto L_12264a64;
  /* 12264a5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12264a5f jmp 0x12264b29 */
  goto L_12264b29;
L_12264a64:;
  /* 12264a64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264a67 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264a6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12264a6c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12264a6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264a73 jne 0x12264a9a */
  if (!C.zf) goto L_12264a9a;
  /* 12264a75 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264a79 jge 0x12264a9a */
  if ((C.sf==C.of)) goto L_12264a9a;
  /* 12264a7b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12264a7f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264a82 je 0x12264a9a */
  if (C.zf) goto L_12264a9a;
  /* 12264a84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264a87 push edx */
  push32((uint32_t)(EDX));
  /* 12264a88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264a8b push eax */
  push32((uint32_t)(EAX));
  /* 12264a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264a8f push ecx */
  push32((uint32_t)(ECX));
  /* 12264a90 call 0x1225de20 */
  push32(0x12264a95u); f_1225de20();
  /* 12264a95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264a98 jmp 0x12264b00 */
  goto L_12264b00;
L_12264a9a:;
  /* 12264a9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264a9e jne 0x12264ac8 */
  if (!C.zf) goto L_12264ac8;
  /* 12264aa0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264aa4 jge 0x12264ac8 */
  if ((C.sf==C.of)) goto L_12264ac8;
  /* 12264aa6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12264aaa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264aad je 0x12264ac8 */
  if (C.zf) goto L_12264ac8;
  /* 12264aaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264ab2 push eax */
  push32((uint32_t)(EAX));
  /* 12264ab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12264ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264aba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264abd push edx */
  push32((uint32_t)(EDX));
  /* 12264abe call 0x1225de20 */
  push32(0x12264ac3u); f_1225de20();
  /* 12264ac3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264ac6 jmp 0x12264b00 */
  goto L_12264b00;
L_12264ac8:;
  /* 12264ac8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264acc jne 0x12264afb */
  if (!C.zf) goto L_12264afb;
  /* 12264ace movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12264ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264ad4 je 0x12264adf */
  if (C.zf) goto L_12264adf;
  /* 12264ad6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12264ada cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264add jne 0x12264afb */
  if (!C.zf) goto L_12264afb;
L_12264adf:;
  /* 12264adf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264ae2 push edx */
  push32((uint32_t)(EDX));
  /* 12264ae3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264ae6 push eax */
  push32((uint32_t)(EAX));
  /* 12264ae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264aea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264af0 push ecx */
  push32((uint32_t)(ECX));
  /* 12264af1 call 0x1225de20 */
  push32(0x12264af6u); f_1225de20();
  /* 12264af6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264af9 jmp 0x12264b00 */
  goto L_12264b00;
L_12264afb:;
  /* 12264afb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12264afe jmp 0x12264b29 */
  goto L_12264b29;
L_12264b00:;
  /* 12264b00 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12264b04 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264b07 jne 0x12264b0b */
  if (!C.zf) goto L_12264b0b;
  /* 12264b09 jmp 0x12264b27 */
  goto L_12264b27;
L_12264b0b:;
  /* 12264b0b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12264b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264b11 jne 0x12264b15 */
  if (!C.zf) goto L_12264b15;
  /* 12264b13 jmp 0x12264b27 */
  goto L_12264b27;
L_12264b15:;
  /* 12264b15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264b18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264b1b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12264b1f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12264b22 jmp 0x12264a39 */
  goto L_12264a39;
L_12264b27:;
  /* 12264b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12264b29:;
  /* 12264b29 mov esp, ebp */
  ESP = (EBP);
  /* 12264b2b pop ebp */
  EBP = (pop32());
  /* 12264b2c ret  */
  ESPCHK(0x122649d0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12264b30 (101 bytes, 36 insns) */
void f_12264b30(void) {
  FTRACE(0x12264b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12264b31 mov ebp, esp */
  EBP = (ESP);
  /* 12264b33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264b36 push eax */
  push32((uint32_t)(EAX));
  /* 12264b37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264b3a push ecx */
  push32((uint32_t)(ECX));
  /* 12264b3b call 0x1225d5b0 */
  push32(0x12264b40u); f_1225d5b0();
  /* 12264b40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264b43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264b46 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12264b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264b4c je 0x12264b68 */
  if (C.zf) goto L_12264b68;
  /* 12264b4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264b51 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264b54 push ecx */
  push32((uint32_t)(ECX));
  /* 12264b55 push 0x122824a0 */
  push32((uint32_t)(0x122824a0u));
  /* 12264b5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12264b5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264b5f push edx */
  push32((uint32_t)(EDX));
  /* 12264b60 call 0x12264980 */
  push32(0x12264b65u); f_12264980();
  /* 12264b65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12264b68:;
  /* 12264b68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264b6b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12264b72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12264b74 je 0x12264b93 */
  if (C.zf) goto L_12264b93;
  /* 12264b76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12264b79 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264b7f push edx */
  push32((uint32_t)(EDX));
  /* 12264b80 push 0x1228249c */
  push32((uint32_t)(0x1228249cu));
  /* 12264b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264b87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264b8a push eax */
  push32((uint32_t)(EAX));
  /* 12264b8b call 0x12264980 */
  push32(0x12264b90u); f_12264980();
  /* 12264b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12264b93:;
  /* 12264b93 pop ebp */
  EBP = (pop32());
  /* 12264b94 ret  */
  ESPCHK(0x12264b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ba0 @ 0x12264ba0 (130 bytes, 50 insns) */
void f_12264ba0(void) {
  FTRACE(0x12264ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12264ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12264ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12264ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 12264ba5 push esi */
  push32((uint32_t)(ESI));
  /* 12264ba6 push edi */
  push32((uint32_t)(EDI));
  /* 12264ba7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12264bae:;
  /* 12264bae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264bb2 jne 0x12264bd2 */
  if (!C.zf) goto L_12264bd2;
  /* 12264bb4 push 0x122824b0 */
  push32((uint32_t)(0x122824b0u));
  /* 12264bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12264bbb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12264bbd push 0x122824a4 */
  push32((uint32_t)(0x122824a4u));
  /* 12264bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264bc4 call 0x122596c0 */
  push32(0x12264bc9u); f_122596c0();
  /* 12264bc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264bcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264bcf jne 0x12264bd2 */
  if (!C.zf) goto L_12264bd2;
  /* 12264bd1 int3  */
  x86_unimpl("int3 @ 0x12264bd1");
L_12264bd2:;
  /* 12264bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264bd6 jne 0x12264bae */
  if (!C.zf) goto L_12264bae;
  /* 12264bd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264bdb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12264bde and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12264be1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12264be3 je 0x12264bf1 */
  if (C.zf) goto L_12264bf1;
  /* 12264be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264be8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12264bef jmp 0x12264c18 */
  goto L_12264c18;
L_12264bf1:;
  /* 12264bf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 12264bf5 call 0x12263410 */
  push32(0x12264bfau); f_12263410();
  /* 12264bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264bfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264c00 push edx */
  push32((uint32_t)(EDX));
  /* 12264c01 call 0x12264c30 */
  push32(0x12264c06u); f_12264c30();
  /* 12264c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12264c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264c0f push eax */
  push32((uint32_t)(EAX));
  /* 12264c10 call 0x12263480 */
  push32(0x12264c15u); f_12263480();
  /* 12264c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12264c18:;
  /* 12264c18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264c1b pop edi */
  EDI = (pop32());
  /* 12264c1c pop esi */
  ESI = (pop32());
  /* 12264c1d pop ebx */
  EBX = (pop32());
  /* 12264c1e mov esp, ebp */
  ESP = (EBP);
  /* 12264c20 pop ebp */
  EBP = (pop32());
  /* 12264c21 ret  */
  ESPCHK(0x12264ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c30 @ 0x12264c30 (190 bytes, 67 insns) */
void f_12264c30(void) {
  FTRACE(0x12264c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12264c31 mov ebp, esp */
  EBP = (ESP);
  /* 12264c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264c36 push ebx */
  push32((uint32_t)(EBX));
  /* 12264c37 push esi */
  push32((uint32_t)(ESI));
  /* 12264c38 push edi */
  push32((uint32_t)(EDI));
  /* 12264c39 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12264c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264c43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12264c46:;
  /* 12264c46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264c4a jne 0x12264c6a */
  if (!C.zf) goto L_12264c6a;
  /* 12264c4c push 0x12282354 */
  push32((uint32_t)(0x12282354u));
  /* 12264c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12264c53 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12264c55 push 0x122824a4 */
  push32((uint32_t)(0x122824a4u));
  /* 12264c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12264c5c call 0x122596c0 */
  push32(0x12264c61u); f_122596c0();
  /* 12264c61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264c64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264c67 jne 0x12264c6a */
  if (!C.zf) goto L_12264c6a;
  /* 12264c69 int3  */
  x86_unimpl("int3 @ 0x12264c69");
L_12264c6a:;
  /* 12264c6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12264c6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12264c6e jne 0x12264c46 */
  if (!C.zf) goto L_12264c46;
  /* 12264c70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264c73 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12264c76 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12264c7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264c7d je 0x12264cda */
  if (C.zf) goto L_12264cda;
  /* 12264c7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264c82 push ecx */
  push32((uint32_t)(ECX));
  /* 12264c83 call 0x12263f30 */
  push32(0x12264c88u); f_12263f30();
  /* 12264c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264c8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12264c8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264c91 push edx */
  push32((uint32_t)(EDX));
  /* 12264c92 call 0x122672b0 */
  push32(0x12264c97u); f_122672b0();
  /* 12264c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264c9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264c9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12264ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 12264ca1 call 0x12267180 */
  push32(0x12264ca6u); f_12267180();
  /* 12264ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264cab jge 0x12264cb6 */
  if ((C.sf==C.of)) goto L_12264cb6;
  /* 12264cad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12264cb4 jmp 0x12264cda */
  goto L_12264cda;
L_12264cb6:;
  /* 12264cb6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264cb9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264cbd je 0x12264cda */
  if (C.zf) goto L_12264cda;
  /* 12264cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12264cc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264cc4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12264cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12264cc8 call 0x1225b090 */
  push32(0x12264ccdu); f_1225b090();
  /* 12264ccd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264cd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264cd3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12264cda:;
  /* 12264cda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12264cdd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12264ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264ce7 pop edi */
  EDI = (pop32());
  /* 12264ce8 pop esi */
  ESI = (pop32());
  /* 12264ce9 pop ebx */
  EBX = (pop32());
  /* 12264cea mov esp, ebp */
  ESP = (EBP);
  /* 12264cec pop ebp */
  EBP = (pop32());
  /* 12264ced ret  */
  ESPCHK(0x12264c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cf0 @ 0x12264cf0 (210 bytes, 63 insns) */
void f_12264cf0(void) {
  FTRACE(0x12264cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12264cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12264cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12264cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264cf7 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264cfd jae 0x12264d21 */
  if (!C.cf) goto L_12264d21;
  /* 12264cff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264d02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12264d05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264d08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12264d0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264d0e mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 12264d15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12264d1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12264d1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12264d1f jne 0x12264d34 */
  if (!C.zf) goto L_12264d34;
L_12264d21:;
  /* 12264d21 call 0x122624d0 */
  push32(0x12264d26u); f_122624d0();
  /* 12264d26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12264d2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12264d2f jmp 0x12264dbe */
  goto L_12264dbe;
L_12264d34:;
  /* 12264d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264d37 push edx */
  push32((uint32_t)(EDX));
  /* 12264d38 call 0x12263cf0 */
  push32(0x12264d3du); f_12263cf0();
  /* 12264d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264d43 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12264d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264d49 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12264d4c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12264d4f mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12264d56 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12264d5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12264d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264d60 je 0x12264d9d */
  if (C.zf) goto L_12264d9d;
  /* 12264d62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264d65 push ecx */
  push32((uint32_t)(ECX));
  /* 12264d66 call 0x12263b70 */
  push32(0x12264d6bu); f_12263b70();
  /* 12264d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264d6e push eax */
  push32((uint32_t)(EAX));
  /* 12264d6f call dword ptr [0x12289308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289308))), 0x12264d75u);
  /* 12264d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264d77 jne 0x12264d84 */
  if (!C.zf) goto L_12264d84;
  /* 12264d79 call dword ptr [0x122893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893dc))), 0x12264d7fu);
  /* 12264d7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12264d82 jmp 0x12264d8b */
  goto L_12264d8b;
L_12264d84:;
  /* 12264d84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12264d8b:;
  /* 12264d8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264d8f jne 0x12264d93 */
  if (!C.zf) goto L_12264d93;
  /* 12264d91 jmp 0x12264daf */
  goto L_12264daf;
L_12264d93:;
  /* 12264d93 call 0x122624e0 */
  push32(0x12264d98u); f_122624e0();
  /* 12264d98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264d9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12264d9d:;
  /* 12264d9d call 0x122624d0 */
  push32(0x12264da2u); f_122624d0();
  /* 12264da2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12264da8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12264daf:;
  /* 12264daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264db2 push eax */
  push32((uint32_t)(EAX));
  /* 12264db3 call 0x12263d80 */
  push32(0x12264db8u); f_12263d80();
  /* 12264db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12264dbe:;
  /* 12264dbe mov esp, ebp */
  ESP = (EBP);
  /* 12264dc0 pop ebp */
  EBP = (pop32());
  /* 12264dc1 ret  */
  ESPCHK(0x12264cf0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12264dd0 (219 bytes, 64 insns) */
void f_12264dd0(void) {
  FTRACE(0x12264dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12264dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12264dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12264dd4 cmp dword ptr [0x1228699c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1228699c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264ddb je 0x12264e71 */
  if (C.zf) goto L_12264e71;
  /* 12264de1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12264de3 push 0x122824c0 */
  push32((uint32_t)(0x122824c0u));
  /* 12264de8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264dea push 0xac */
  push32((uint32_t)(0xacu));
  /* 12264def push 1 */
  push32((uint32_t)(0x1u));
  /* 12264df1 call 0x1225aa10 */
  push32(0x12264df6u); f_1225aa10();
  /* 12264df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12264dfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264e00 jne 0x12264e0c */
  if (!C.zf) goto L_12264e0c;
  /* 12264e02 mov eax, 1 */
  EAX = (0x1u);
  /* 12264e07 jmp 0x12264ea7 */
  goto L_12264ea7;
L_12264e0c:;
  /* 12264e0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264e0f push eax */
  push32((uint32_t)(EAX));
  /* 12264e10 call 0x12264eb0 */
  push32(0x12264e15u); f_12264eb0();
  /* 12264e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12264e1a je 0x12264e3d */
  if (C.zf) goto L_12264e3d;
  /* 12264e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264e1f push ecx */
  push32((uint32_t)(ECX));
  /* 12264e20 call 0x12265440 */
  push32(0x12264e25u); f_12265440();
  /* 12264e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264e28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264e2d push edx */
  push32((uint32_t)(EDX));
  /* 12264e2e call 0x1225b090 */
  push32(0x12264e33u); f_1225b090();
  /* 12264e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264e36 mov eax, 1 */
  EAX = (0x1u);
  /* 12264e3b jmp 0x12264ea7 */
  goto L_12264ea7;
L_12264e3d:;
  /* 12264e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264e40 mov dword ptr [0x12285c98], eax */
  w32((uint32_t)(0x12285c98), (EAX));
  /* 12264e45 mov ecx, dword ptr [0x122869bc] */
  ECX = (r32((uint32_t)(0x122869bc)));
  /* 12264e4b push ecx */
  push32((uint32_t)(ECX));
  /* 12264e4c call 0x12265440 */
  push32(0x12264e51u); f_12265440();
  /* 12264e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264e54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12264e56 mov edx, dword ptr [0x122869bc] */
  EDX = (r32((uint32_t)(0x122869bc)));
  /* 12264e5c push edx */
  push32((uint32_t)(EDX));
  /* 12264e5d call 0x1225b090 */
  push32(0x12264e62u); f_1225b090();
  /* 12264e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264e68 mov dword ptr [0x122869bc], eax */
  w32((uint32_t)(0x122869bc), (EAX));
  /* 12264e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264e6f jmp 0x12264ea7 */
  goto L_12264ea7;
L_12264e71:;
  /* 12264e71 mov dword ptr [0x12285c98], 0x12285ca0 */
  w32((uint32_t)(0x12285c98), (0x12285ca0u));
  /* 12264e7b mov ecx, dword ptr [0x122869bc] */
  ECX = (r32((uint32_t)(0x122869bc)));
  /* 12264e81 push ecx */
  push32((uint32_t)(ECX));
  /* 12264e82 call 0x12265440 */
  push32(0x12264e87u); f_12265440();
  /* 12264e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264e8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12264e8c mov edx, dword ptr [0x122869bc] */
  EDX = (r32((uint32_t)(0x122869bc)));
  /* 12264e92 push edx */
  push32((uint32_t)(EDX));
  /* 12264e93 call 0x1225b090 */
  push32(0x12264e98u); f_1225b090();
  /* 12264e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264e9b mov dword ptr [0x122869bc], 0 */
  w32((uint32_t)(0x122869bc), (0x0u));
  /* 12264ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12264ea7:;
  /* 12264ea7 mov esp, ebp */
  ESP = (EBP);
  /* 12264ea9 pop ebp */
  EBP = (pop32());
  /* 12264eaa ret  */
  ESPCHK(0x12264dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014eb0 @ 0x12264eb0 (1423 bytes, 533 insns) */
void f_12264eb0(void) {
  FTRACE(0x12264eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12264eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12264eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12264eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12264eb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12264ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12264ebf mov ax, word ptr [0x122869f6] */
  AX = (r16((uint32_t)(0x122869f6)));
  /* 12264ec5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12264ec8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12264eca mov cx, word ptr [0x122869f8] */
  CX = (r16((uint32_t)(0x122869f8)));
  /* 12264ed1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12264ed4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12264ed8 jne 0x12264ee2 */
  if (!C.zf) goto L_12264ee2;
  /* 12264eda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12264edd jmp 0x1226543b */
  goto L_1226543b;
L_12264ee2:;
  /* 12264ee2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264ee5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264ee8 push edx */
  push32((uint32_t)(EDX));
  /* 12264ee9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12264eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264eee push eax */
  push32((uint32_t)(EAX));
  /* 12264eef push 1 */
  push32((uint32_t)(0x1u));
  /* 12264ef1 call 0x122687c0 */
  push32(0x12264ef6u); f_122687c0();
  /* 12264ef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264ef9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264efc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264efe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264f04 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f07 push edx */
  push32((uint32_t)(EDX));
  /* 12264f08 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12264f0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264f0d push eax */
  push32((uint32_t)(EAX));
  /* 12264f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 12264f10 call 0x122687c0 */
  push32(0x12264f15u); f_122687c0();
  /* 12264f15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264f1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264f1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264f20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264f23 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f26 push edx */
  push32((uint32_t)(EDX));
  /* 12264f27 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12264f29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264f2c push eax */
  push32((uint32_t)(EAX));
  /* 12264f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12264f2f call 0x122687c0 */
  push32(0x12264f34u); f_122687c0();
  /* 12264f34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264f3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264f3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264f42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f45 push edx */
  push32((uint32_t)(EDX));
  /* 12264f46 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12264f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264f4b push eax */
  push32((uint32_t)(EAX));
  /* 12264f4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12264f4e call 0x122687c0 */
  push32(0x12264f53u); f_122687c0();
  /* 12264f53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264f59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264f5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264f61 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f64 push edx */
  push32((uint32_t)(EDX));
  /* 12264f65 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12264f67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264f6a push eax */
  push32((uint32_t)(EAX));
  /* 12264f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12264f6d call 0x122687c0 */
  push32(0x12264f72u); f_122687c0();
  /* 12264f72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264f78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264f7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264f7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264f80 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f83 push edx */
  push32((uint32_t)(EDX));
  /* 12264f84 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12264f86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264f89 push eax */
  push32((uint32_t)(EAX));
  /* 12264f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12264f8c call 0x122687c0 */
  push32(0x12264f91u); f_122687c0();
  /* 12264f91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264f97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264f99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264f9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264f9f push edx */
  push32((uint32_t)(EDX));
  /* 12264fa0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12264fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12264fa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12264fa8 call 0x122687c0 */
  push32(0x12264fadu); f_122687c0();
  /* 12264fad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264fb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264fb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264fb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264fb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264fbb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264fbe push edx */
  push32((uint32_t)(EDX));
  /* 12264fbf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12264fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264fc4 push eax */
  push32((uint32_t)(EAX));
  /* 12264fc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12264fc7 call 0x122687c0 */
  push32(0x12264fccu); f_122687c0();
  /* 12264fcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264fcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264fd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264fd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264fd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264fda add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264fdd push edx */
  push32((uint32_t)(EDX));
  /* 12264fde push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12264fe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12264fe3 push eax */
  push32((uint32_t)(EAX));
  /* 12264fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12264fe6 call 0x122687c0 */
  push32(0x12264febu); f_122687c0();
  /* 12264feb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12264fee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12264ff1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12264ff3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12264ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12264ff9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12264ffc push edx */
  push32((uint32_t)(EDX));
  /* 12264ffd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12264fff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265002 push eax */
  push32((uint32_t)(EAX));
  /* 12265003 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265005 call 0x122687c0 */
  push32(0x1226500au); f_122687c0();
  /* 1226500a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226500d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265010 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265012 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265018 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226501b push edx */
  push32((uint32_t)(EDX));
  /* 1226501c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1226501e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265021 push eax */
  push32((uint32_t)(EAX));
  /* 12265022 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265024 call 0x122687c0 */
  push32(0x12265029u); f_122687c0();
  /* 12265029 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226502c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226502f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265031 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265037 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226503a push edx */
  push32((uint32_t)(EDX));
  /* 1226503b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1226503d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265040 push eax */
  push32((uint32_t)(EAX));
  /* 12265041 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265043 call 0x122687c0 */
  push32(0x12265048u); f_122687c0();
  /* 12265048 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226504b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226504e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265050 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265056 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265059 push edx */
  push32((uint32_t)(EDX));
  /* 1226505a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1226505c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226505f push eax */
  push32((uint32_t)(EAX));
  /* 12265060 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265062 call 0x122687c0 */
  push32(0x12265067u); f_122687c0();
  /* 12265067 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226506a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226506d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1226506f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265072 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265075 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265078 push edx */
  push32((uint32_t)(EDX));
  /* 12265079 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1226507b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226507e push eax */
  push32((uint32_t)(EAX));
  /* 1226507f push 1 */
  push32((uint32_t)(0x1u));
  /* 12265081 call 0x122687c0 */
  push32(0x12265086u); f_122687c0();
  /* 12265086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265089 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226508c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1226508e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265094 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265097 push edx */
  push32((uint32_t)(EDX));
  /* 12265098 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1226509a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226509d push eax */
  push32((uint32_t)(EAX));
  /* 1226509e push 1 */
  push32((uint32_t)(0x1u));
  /* 122650a0 call 0x122687c0 */
  push32(0x122650a5u); f_122687c0();
  /* 122650a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122650a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122650ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122650ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122650b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122650b3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122650b6 push edx */
  push32((uint32_t)(EDX));
  /* 122650b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 122650b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122650bc push eax */
  push32((uint32_t)(EAX));
  /* 122650bd push 1 */
  push32((uint32_t)(0x1u));
  /* 122650bf call 0x122687c0 */
  push32(0x122650c4u); f_122687c0();
  /* 122650c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122650c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122650ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122650cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122650cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122650d2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122650d5 push edx */
  push32((uint32_t)(EDX));
  /* 122650d6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 122650d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122650db push eax */
  push32((uint32_t)(EAX));
  /* 122650dc push 1 */
  push32((uint32_t)(0x1u));
  /* 122650de call 0x122687c0 */
  push32(0x122650e3u); f_122687c0();
  /* 122650e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122650e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122650e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122650eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122650ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122650f1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122650f4 push edx */
  push32((uint32_t)(EDX));
  /* 122650f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 122650f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122650fa push eax */
  push32((uint32_t)(EAX));
  /* 122650fb push 1 */
  push32((uint32_t)(0x1u));
  /* 122650fd call 0x122687c0 */
  push32(0x12265102u); f_122687c0();
  /* 12265102 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265108 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1226510a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1226510d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265110 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265113 push edx */
  push32((uint32_t)(EDX));
  /* 12265114 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12265116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265119 push eax */
  push32((uint32_t)(EAX));
  /* 1226511a push 1 */
  push32((uint32_t)(0x1u));
  /* 1226511c call 0x122687c0 */
  push32(0x12265121u); f_122687c0();
  /* 12265121 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265124 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265127 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265129 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1226512c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226512f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265132 push edx */
  push32((uint32_t)(EDX));
  /* 12265133 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12265135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265138 push eax */
  push32((uint32_t)(EAX));
  /* 12265139 push 1 */
  push32((uint32_t)(0x1u));
  /* 1226513b call 0x122687c0 */
  push32(0x12265140u); f_122687c0();
  /* 12265140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265143 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265146 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265148 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1226514b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226514e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265151 push edx */
  push32((uint32_t)(EDX));
  /* 12265152 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12265154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265157 push eax */
  push32((uint32_t)(EAX));
  /* 12265158 push 1 */
  push32((uint32_t)(0x1u));
  /* 1226515a call 0x122687c0 */
  push32(0x1226515fu); f_122687c0();
  /* 1226515f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265162 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265165 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265167 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1226516a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226516d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265170 push edx */
  push32((uint32_t)(EDX));
  /* 12265171 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12265173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265176 push eax */
  push32((uint32_t)(EAX));
  /* 12265177 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265179 call 0x122687c0 */
  push32(0x1226517eu); f_122687c0();
  /* 1226517e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265184 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265186 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226518c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226518f push edx */
  push32((uint32_t)(EDX));
  /* 12265190 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12265192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265195 push eax */
  push32((uint32_t)(EAX));
  /* 12265196 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265198 call 0x122687c0 */
  push32(0x1226519du); f_122687c0();
  /* 1226519d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122651a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122651a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122651a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122651a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122651ab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122651ae push edx */
  push32((uint32_t)(EDX));
  /* 122651af push 0x4d */
  push32((uint32_t)(0x4du));
  /* 122651b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122651b4 push eax */
  push32((uint32_t)(EAX));
  /* 122651b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 122651b7 call 0x122687c0 */
  push32(0x122651bcu); f_122687c0();
  /* 122651bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122651bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122651c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122651c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122651c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122651ca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122651cd push edx */
  push32((uint32_t)(EDX));
  /* 122651ce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 122651d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122651d3 push eax */
  push32((uint32_t)(EAX));
  /* 122651d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122651d6 call 0x122687c0 */
  push32(0x122651dbu); f_122687c0();
  /* 122651db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122651de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122651e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122651e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122651e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122651e9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122651ec push edx */
  push32((uint32_t)(EDX));
  /* 122651ed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 122651ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122651f2 push eax */
  push32((uint32_t)(EAX));
  /* 122651f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122651f5 call 0x122687c0 */
  push32(0x122651fau); f_122687c0();
  /* 122651fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122651fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265200 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265202 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265208 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226520b push edx */
  push32((uint32_t)(EDX));
  /* 1226520c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1226520e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265211 push eax */
  push32((uint32_t)(EAX));
  /* 12265212 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265214 call 0x122687c0 */
  push32(0x12265219u); f_122687c0();
  /* 12265219 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226521c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226521f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265221 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265227 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226522a push edx */
  push32((uint32_t)(EDX));
  /* 1226522b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1226522d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265230 push eax */
  push32((uint32_t)(EAX));
  /* 12265231 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265233 call 0x122687c0 */
  push32(0x12265238u); f_122687c0();
  /* 12265238 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226523b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226523e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265246 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265249 push edx */
  push32((uint32_t)(EDX));
  /* 1226524a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1226524c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226524f push eax */
  push32((uint32_t)(EAX));
  /* 12265250 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265252 call 0x122687c0 */
  push32(0x12265257u); f_122687c0();
  /* 12265257 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226525a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226525d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1226525f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265265 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265268 push edx */
  push32((uint32_t)(EDX));
  /* 12265269 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1226526b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226526e push eax */
  push32((uint32_t)(EAX));
  /* 1226526f push 1 */
  push32((uint32_t)(0x1u));
  /* 12265271 call 0x122687c0 */
  push32(0x12265276u); f_122687c0();
  /* 12265276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265279 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226527c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1226527e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265284 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265287 push edx */
  push32((uint32_t)(EDX));
  /* 12265288 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1226528a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226528d push eax */
  push32((uint32_t)(EAX));
  /* 1226528e push 1 */
  push32((uint32_t)(0x1u));
  /* 12265290 call 0x122687c0 */
  push32(0x12265295u); f_122687c0();
  /* 12265295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265298 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226529b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1226529d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122652a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122652a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122652a6 push edx */
  push32((uint32_t)(EDX));
  /* 122652a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 122652a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122652ac push eax */
  push32((uint32_t)(EAX));
  /* 122652ad push 1 */
  push32((uint32_t)(0x1u));
  /* 122652af call 0x122687c0 */
  push32(0x122652b4u); f_122687c0();
  /* 122652b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122652b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122652ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122652bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122652bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122652c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122652c8 push edx */
  push32((uint32_t)(EDX));
  /* 122652c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 122652cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122652ce push eax */
  push32((uint32_t)(EAX));
  /* 122652cf push 1 */
  push32((uint32_t)(0x1u));
  /* 122652d1 call 0x122687c0 */
  push32(0x122652d6u); f_122687c0();
  /* 122652d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122652d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122652dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122652de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122652e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122652e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122652ea push edx */
  push32((uint32_t)(EDX));
  /* 122652eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 122652ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122652f0 push eax */
  push32((uint32_t)(EAX));
  /* 122652f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122652f3 call 0x122687c0 */
  push32(0x122652f8u); f_122687c0();
  /* 122652f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122652fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122652fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265300 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265306 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226530c push edx */
  push32((uint32_t)(EDX));
  /* 1226530d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1226530f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265312 push eax */
  push32((uint32_t)(EAX));
  /* 12265313 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265315 call 0x122687c0 */
  push32(0x1226531au); f_122687c0();
  /* 1226531a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226531d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265320 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265322 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265328 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226532e push edx */
  push32((uint32_t)(EDX));
  /* 1226532f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12265331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265334 push eax */
  push32((uint32_t)(EAX));
  /* 12265335 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265337 call 0x122687c0 */
  push32(0x1226533cu); f_122687c0();
  /* 1226533c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226533f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265342 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265344 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265347 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226534a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265350 push edx */
  push32((uint32_t)(EDX));
  /* 12265351 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12265353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265356 push eax */
  push32((uint32_t)(EAX));
  /* 12265357 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265359 call 0x122687c0 */
  push32(0x1226535eu); f_122687c0();
  /* 1226535e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265361 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265364 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265366 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226536c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265372 push edx */
  push32((uint32_t)(EDX));
  /* 12265373 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12265375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265378 push eax */
  push32((uint32_t)(EAX));
  /* 12265379 push 1 */
  push32((uint32_t)(0x1u));
  /* 1226537b call 0x122687c0 */
  push32(0x12265380u); f_122687c0();
  /* 12265380 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265383 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265386 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265388 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1226538b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226538e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265394 push edx */
  push32((uint32_t)(EDX));
  /* 12265395 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12265397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226539a push eax */
  push32((uint32_t)(EAX));
  /* 1226539b push 1 */
  push32((uint32_t)(0x1u));
  /* 1226539d call 0x122687c0 */
  push32(0x122653a2u); f_122687c0();
  /* 122653a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122653a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122653a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122653aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122653ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122653b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122653b6 push edx */
  push32((uint32_t)(EDX));
  /* 122653b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 122653b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122653bc push eax */
  push32((uint32_t)(EAX));
  /* 122653bd push 1 */
  push32((uint32_t)(0x1u));
  /* 122653bf call 0x122687c0 */
  push32(0x122653c4u); f_122687c0();
  /* 122653c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122653c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122653ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122653cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122653cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122653d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122653d8 push edx */
  push32((uint32_t)(EDX));
  /* 122653d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 122653db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122653de push eax */
  push32((uint32_t)(EAX));
  /* 122653df push 1 */
  push32((uint32_t)(0x1u));
  /* 122653e1 call 0x122687c0 */
  push32(0x122653e6u); f_122687c0();
  /* 122653e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122653e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122653ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122653ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122653f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122653f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122653fa push edx */
  push32((uint32_t)(EDX));
  /* 122653fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 122653fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265400 push eax */
  push32((uint32_t)(EAX));
  /* 12265401 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265403 call 0x122687c0 */
  push32(0x12265408u); f_122687c0();
  /* 12265408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226540b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226540e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265410 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265416 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226541c push edx */
  push32((uint32_t)(EDX));
  /* 1226541d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12265422 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265425 push eax */
  push32((uint32_t)(EAX));
  /* 12265426 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265428 call 0x122687c0 */
  push32(0x1226542du); f_122687c0();
  /* 1226542d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265430 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12265433 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265435 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12265438 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1226543b:;
  /* 1226543b mov esp, ebp */
  ESP = (EBP);
  /* 1226543d pop ebp */
  EBP = (pop32());
  /* 1226543e ret  */
  ESPCHK(0x12264eb0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12265440 (779 bytes, 265 insns) */
void f_12265440(void) {
  FTRACE(0x12265440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265440 push ebp */
  push32((uint32_t)(EBP));
  /* 12265441 mov ebp, esp */
  EBP = (ESP);
  /* 12265443 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265447 jne 0x1226544e */
  if (!C.zf) goto L_1226544e;
  /* 12265449 jmp 0x12265749 */
  goto L_12265749;
L_1226544e:;
  /* 1226544e push 2 */
  push32((uint32_t)(0x2u));
  /* 12265450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265453 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12265456 push ecx */
  push32((uint32_t)(ECX));
  /* 12265457 call 0x1225b090 */
  push32(0x1226545cu); f_1225b090();
  /* 1226545c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226545f push 2 */
  push32((uint32_t)(0x2u));
  /* 12265461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265464 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12265467 push eax */
  push32((uint32_t)(EAX));
  /* 12265468 call 0x1225b090 */
  push32(0x1226546du); f_1225b090();
  /* 1226546d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265470 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265475 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12265478 push edx */
  push32((uint32_t)(EDX));
  /* 12265479 call 0x1225b090 */
  push32(0x1226547eu); f_1225b090();
  /* 1226547e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265481 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265486 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12265489 push ecx */
  push32((uint32_t)(ECX));
  /* 1226548a call 0x1225b090 */
  push32(0x1226548fu); f_1225b090();
  /* 1226548f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265492 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265497 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1226549a push eax */
  push32((uint32_t)(EAX));
  /* 1226549b call 0x1225b090 */
  push32(0x122654a0u); f_1225b090();
  /* 122654a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122654a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122654a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122654a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122654ab push edx */
  push32((uint32_t)(EDX));
  /* 122654ac call 0x1225b090 */
  push32(0x122654b1u); f_1225b090();
  /* 122654b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122654b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122654b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122654b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122654bb push ecx */
  push32((uint32_t)(ECX));
  /* 122654bc call 0x1225b090 */
  push32(0x122654c1u); f_1225b090();
  /* 122654c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122654c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122654c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122654c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 122654cc push eax */
  push32((uint32_t)(EAX));
  /* 122654cd call 0x1225b090 */
  push32(0x122654d2u); f_1225b090();
  /* 122654d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122654d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122654d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122654da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 122654dd push edx */
  push32((uint32_t)(EDX));
  /* 122654de call 0x1225b090 */
  push32(0x122654e3u); f_1225b090();
  /* 122654e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122654e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122654e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122654eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 122654ee push ecx */
  push32((uint32_t)(ECX));
  /* 122654ef call 0x1225b090 */
  push32(0x122654f4u); f_1225b090();
  /* 122654f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122654f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122654f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122654fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 122654ff push eax */
  push32((uint32_t)(EAX));
  /* 12265500 call 0x1225b090 */
  push32(0x12265505u); f_1225b090();
  /* 12265505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265508 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226550a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226550d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12265510 push edx */
  push32((uint32_t)(EDX));
  /* 12265511 call 0x1225b090 */
  push32(0x12265516u); f_1225b090();
  /* 12265516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265519 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226551b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226551e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12265521 push ecx */
  push32((uint32_t)(ECX));
  /* 12265522 call 0x1225b090 */
  push32(0x12265527u); f_1225b090();
  /* 12265527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226552a push 2 */
  push32((uint32_t)(0x2u));
  /* 1226552c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226552f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12265532 push eax */
  push32((uint32_t)(EAX));
  /* 12265533 call 0x1225b090 */
  push32(0x12265538u); f_1225b090();
  /* 12265538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226553b push 2 */
  push32((uint32_t)(0x2u));
  /* 1226553d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265540 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12265543 push edx */
  push32((uint32_t)(EDX));
  /* 12265544 call 0x1225b090 */
  push32(0x12265549u); f_1225b090();
  /* 12265549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226554c push 2 */
  push32((uint32_t)(0x2u));
  /* 1226554e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265551 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12265554 push ecx */
  push32((uint32_t)(ECX));
  /* 12265555 call 0x1225b090 */
  push32(0x1226555au); f_1225b090();
  /* 1226555a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226555d push 2 */
  push32((uint32_t)(0x2u));
  /* 1226555f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265562 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12265565 push eax */
  push32((uint32_t)(EAX));
  /* 12265566 call 0x1225b090 */
  push32(0x1226556bu); f_1225b090();
  /* 1226556b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226556e push 2 */
  push32((uint32_t)(0x2u));
  /* 12265570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265573 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12265576 push edx */
  push32((uint32_t)(EDX));
  /* 12265577 call 0x1225b090 */
  push32(0x1226557cu); f_1225b090();
  /* 1226557c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226557f push 2 */
  push32((uint32_t)(0x2u));
  /* 12265581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265584 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12265587 push ecx */
  push32((uint32_t)(ECX));
  /* 12265588 call 0x1225b090 */
  push32(0x1226558du); f_1225b090();
  /* 1226558d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265590 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265592 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265595 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12265598 push eax */
  push32((uint32_t)(EAX));
  /* 12265599 call 0x1225b090 */
  push32(0x1226559eu); f_1225b090();
  /* 1226559e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122655a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122655a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122655a6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122655a9 push edx */
  push32((uint32_t)(EDX));
  /* 122655aa call 0x1225b090 */
  push32(0x122655afu); f_1225b090();
  /* 122655af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122655b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 122655b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122655b7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 122655ba push ecx */
  push32((uint32_t)(ECX));
  /* 122655bb call 0x1225b090 */
  push32(0x122655c0u); f_1225b090();
  /* 122655c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122655c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122655c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122655c8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 122655cb push eax */
  push32((uint32_t)(EAX));
  /* 122655cc call 0x1225b090 */
  push32(0x122655d1u); f_1225b090();
  /* 122655d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122655d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122655d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122655d9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 122655dc push edx */
  push32((uint32_t)(EDX));
  /* 122655dd call 0x1225b090 */
  push32(0x122655e2u); f_1225b090();
  /* 122655e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122655e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122655e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122655ea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 122655ed push ecx */
  push32((uint32_t)(ECX));
  /* 122655ee call 0x1225b090 */
  push32(0x122655f3u); f_1225b090();
  /* 122655f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122655f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122655f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122655fb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 122655fe push eax */
  push32((uint32_t)(EAX));
  /* 122655ff call 0x1225b090 */
  push32(0x12265604u); f_1225b090();
  /* 12265604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265607 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226560c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1226560f push edx */
  push32((uint32_t)(EDX));
  /* 12265610 call 0x1225b090 */
  push32(0x12265615u); f_1225b090();
  /* 12265615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265618 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226561a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226561d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12265620 push ecx */
  push32((uint32_t)(ECX));
  /* 12265621 call 0x1225b090 */
  push32(0x12265626u); f_1225b090();
  /* 12265626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265629 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226562b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226562e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12265631 push eax */
  push32((uint32_t)(EAX));
  /* 12265632 call 0x1225b090 */
  push32(0x12265637u); f_1225b090();
  /* 12265637 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226563a push 2 */
  push32((uint32_t)(0x2u));
  /* 1226563c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226563f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12265642 push edx */
  push32((uint32_t)(EDX));
  /* 12265643 call 0x1225b090 */
  push32(0x12265648u); f_1225b090();
  /* 12265648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226564b push 2 */
  push32((uint32_t)(0x2u));
  /* 1226564d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265650 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12265653 push ecx */
  push32((uint32_t)(ECX));
  /* 12265654 call 0x1225b090 */
  push32(0x12265659u); f_1225b090();
  /* 12265659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226565c push 2 */
  push32((uint32_t)(0x2u));
  /* 1226565e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265661 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12265664 push eax */
  push32((uint32_t)(EAX));
  /* 12265665 call 0x1225b090 */
  push32(0x1226566au); f_1225b090();
  /* 1226566a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226566d push 2 */
  push32((uint32_t)(0x2u));
  /* 1226566f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265672 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12265678 push edx */
  push32((uint32_t)(EDX));
  /* 12265679 call 0x1225b090 */
  push32(0x1226567eu); f_1225b090();
  /* 1226567e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265681 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265686 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1226568c push ecx */
  push32((uint32_t)(ECX));
  /* 1226568d call 0x1225b090 */
  push32(0x12265692u); f_1225b090();
  /* 12265692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265695 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226569a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 122656a0 push eax */
  push32((uint32_t)(EAX));
  /* 122656a1 call 0x1225b090 */
  push32(0x122656a6u); f_1225b090();
  /* 122656a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122656a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122656ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122656ae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 122656b4 push edx */
  push32((uint32_t)(EDX));
  /* 122656b5 call 0x1225b090 */
  push32(0x122656bau); f_1225b090();
  /* 122656ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122656bd push 2 */
  push32((uint32_t)(0x2u));
  /* 122656bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122656c2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 122656c8 push ecx */
  push32((uint32_t)(ECX));
  /* 122656c9 call 0x1225b090 */
  push32(0x122656ceu); f_1225b090();
  /* 122656ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122656d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122656d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122656d6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 122656dc push eax */
  push32((uint32_t)(EAX));
  /* 122656dd call 0x1225b090 */
  push32(0x122656e2u); f_1225b090();
  /* 122656e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122656e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122656e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122656ea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 122656f0 push edx */
  push32((uint32_t)(EDX));
  /* 122656f1 call 0x1225b090 */
  push32(0x122656f6u); f_1225b090();
  /* 122656f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122656f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122656fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122656fe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12265704 push ecx */
  push32((uint32_t)(ECX));
  /* 12265705 call 0x1225b090 */
  push32(0x1226570au); f_1225b090();
  /* 1226570a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226570d push 2 */
  push32((uint32_t)(0x2u));
  /* 1226570f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265712 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12265718 push eax */
  push32((uint32_t)(EAX));
  /* 12265719 call 0x1225b090 */
  push32(0x1226571eu); f_1225b090();
  /* 1226571e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265721 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265723 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265726 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1226572c push edx */
  push32((uint32_t)(EDX));
  /* 1226572d call 0x1225b090 */
  push32(0x12265732u); f_1225b090();
  /* 12265732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265735 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226573a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12265740 push ecx */
  push32((uint32_t)(ECX));
  /* 12265741 call 0x1225b090 */
  push32(0x12265746u); f_1225b090();
  /* 12265746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12265749:;
  /* 12265749 pop ebp */
  EBP = (pop32());
  /* 1226574a ret  */
  ESPCHK(0x12265440u, _esp0);
  ESP += 4; return;
}

/* FUN_10015750 @ 0x12265750 (678 bytes, 180 insns) */
void f_12265750(void) {
  FTRACE(0x12265750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265750 push ebp */
  push32((uint32_t)(EBP));
  /* 12265751 mov ebp, esp */
  EBP = (ESP);
  /* 12265753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12265756 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1226575d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226575f mov ax, word ptr [0x122869f2] */
  AX = (r16((uint32_t)(0x122869f2)));
  /* 12265765 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12265768 cmp dword ptr [0x12286998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226576f je 0x122658ca */
  if (C.zf) goto L_122658ca;
  /* 12265775 push 0x122869c0 */
  push32((uint32_t)(0x122869c0u));
  /* 1226577a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1226577c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226577f push ecx */
  push32((uint32_t)(ECX));
  /* 12265780 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265782 call 0x122687c0 */
  push32(0x12265787u); f_122687c0();
  /* 12265787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226578a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226578d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1226578f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12265792 push 0x122869c4 */
  push32((uint32_t)(0x122869c4u));
  /* 12265797 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12265799 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226579c push eax */
  push32((uint32_t)(EAX));
  /* 1226579d push 1 */
  push32((uint32_t)(0x1u));
  /* 1226579f call 0x122687c0 */
  push32(0x122657a4u); f_122687c0();
  /* 122657a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122657a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122657aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122657ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122657af push 0x122869c8 */
  push32((uint32_t)(0x122869c8u));
  /* 122657b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 122657b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122657b9 push edx */
  push32((uint32_t)(EDX));
  /* 122657ba push 1 */
  push32((uint32_t)(0x1u));
  /* 122657bc call 0x122687c0 */
  push32(0x122657c1u); f_122687c0();
  /* 122657c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122657c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122657c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122657c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122657cc mov edx, dword ptr [0x122869c8] */
  EDX = (r32((uint32_t)(0x122869c8)));
  /* 122657d2 push edx */
  push32((uint32_t)(EDX));
  /* 122657d3 call 0x12265a00 */
  push32(0x122657d8u); f_12265a00();
  /* 122657d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122657db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122657df je 0x12265839 */
  if (C.zf) goto L_12265839;
  /* 122657e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122657e3 mov eax, dword ptr [0x122869c0] */
  EAX = (r32((uint32_t)(0x122869c0)));
  /* 122657e8 push eax */
  push32((uint32_t)(EAX));
  /* 122657e9 call 0x1225b090 */
  push32(0x122657eeu); f_1225b090();
  /* 122657ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122657f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122657f3 mov ecx, dword ptr [0x122869c4] */
  ECX = (r32((uint32_t)(0x122869c4)));
  /* 122657f9 push ecx */
  push32((uint32_t)(ECX));
  /* 122657fa call 0x1225b090 */
  push32(0x122657ffu); f_1225b090();
  /* 122657ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265802 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265804 mov edx, dword ptr [0x122869c8] */
  EDX = (r32((uint32_t)(0x122869c8)));
  /* 1226580a push edx */
  push32((uint32_t)(EDX));
  /* 1226580b call 0x1225b090 */
  push32(0x12265810u); f_1225b090();
  /* 12265810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265813 mov dword ptr [0x122869c0], 0 */
  w32((uint32_t)(0x122869c0), (0x0u));
  /* 1226581d mov dword ptr [0x122869c4], 0 */
  w32((uint32_t)(0x122869c4), (0x0u));
  /* 12265827 mov dword ptr [0x122869c8], 0 */
  w32((uint32_t)(0x122869c8), (0x0u));
  /* 12265831 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12265834 jmp 0x122659f2 */
  goto L_122659f2;
L_12265839:;
  /* 12265839 mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 1226583e cmp dword ptr [eax], 0x12285d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12285d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265844 je 0x12265880 */
  if (C.zf) goto L_12265880;
  /* 12265846 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265848 mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 1226584e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12265850 push edx */
  push32((uint32_t)(EDX));
  /* 12265851 call 0x1225b090 */
  push32(0x12265856u); f_1225b090();
  /* 12265856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265859 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226585b mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 12265860 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12265863 push ecx */
  push32((uint32_t)(ECX));
  /* 12265864 call 0x1225b090 */
  push32(0x12265869u); f_1225b090();
  /* 12265869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226586c push 2 */
  push32((uint32_t)(0x2u));
  /* 1226586e mov edx, dword ptr [0x12285d88] */
  EDX = (r32((uint32_t)(0x12285d88)));
  /* 12265874 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12265877 push eax */
  push32((uint32_t)(EAX));
  /* 12265878 call 0x1225b090 */
  push32(0x1226587du); f_1225b090();
  /* 1226587d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12265880:;
  /* 12265880 mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 12265886 mov edx, dword ptr [0x122869c0] */
  EDX = (r32((uint32_t)(0x122869c0)));
  /* 1226588c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1226588e mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 12265893 mov ecx, dword ptr [0x122869c4] */
  ECX = (r32((uint32_t)(0x122869c4)));
  /* 12265899 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1226589c mov edx, dword ptr [0x12285d88] */
  EDX = (r32((uint32_t)(0x12285d88)));
  /* 122658a2 mov eax, dword ptr [0x122869c8] */
  EAX = (r32((uint32_t)(0x122869c8)));
  /* 122658a7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122658aa mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 122658b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122658b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122658b4 mov byte ptr [0x12284ea8], al */
  w8((uint32_t)(0x12284ea8), (AL));
  /* 122658b9 mov dword ptr [0x12284eac], 1 */
  w32((uint32_t)(0x12284eac), (0x1u));
  /* 122658c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122658c5 jmp 0x122659f2 */
  goto L_122659f2;
L_122658ca:;
  /* 122658ca push 2 */
  push32((uint32_t)(0x2u));
  /* 122658cc mov ecx, dword ptr [0x122869c0] */
  ECX = (r32((uint32_t)(0x122869c0)));
  /* 122658d2 push ecx */
  push32((uint32_t)(ECX));
  /* 122658d3 call 0x1225b090 */
  push32(0x122658d8u); f_1225b090();
  /* 122658d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122658db push 2 */
  push32((uint32_t)(0x2u));
  /* 122658dd mov edx, dword ptr [0x122869c4] */
  EDX = (r32((uint32_t)(0x122869c4)));
  /* 122658e3 push edx */
  push32((uint32_t)(EDX));
  /* 122658e4 call 0x1225b090 */
  push32(0x122658e9u); f_1225b090();
  /* 122658e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122658ec push 2 */
  push32((uint32_t)(0x2u));
  /* 122658ee mov eax, dword ptr [0x122869c8] */
  EAX = (r32((uint32_t)(0x122869c8)));
  /* 122658f3 push eax */
  push32((uint32_t)(EAX));
  /* 122658f4 call 0x1225b090 */
  push32(0x122658f9u); f_1225b090();
  /* 122658f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122658fc mov dword ptr [0x122869c0], 0 */
  w32((uint32_t)(0x122869c0), (0x0u));
  /* 12265906 mov dword ptr [0x122869c4], 0 */
  w32((uint32_t)(0x122869c4), (0x0u));
  /* 12265910 mov dword ptr [0x122869c8], 0 */
  w32((uint32_t)(0x122869c8), (0x0u));
  /* 1226591a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1226591f push 0x122824cc */
  push32((uint32_t)(0x122824ccu));
  /* 12265924 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265926 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265928 call 0x1225a600 */
  push32(0x1226592du); f_1225a600();
  /* 1226592d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265930 mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 12265936 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12265938 mov edx, dword ptr [0x12285d88] */
  EDX = (r32((uint32_t)(0x12285d88)));
  /* 1226593e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265941 jne 0x1226594b */
  if (!C.zf) goto L_1226594b;
  /* 12265943 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12265946 jmp 0x122659f2 */
  goto L_122659f2;
L_1226594b:;
  /* 1226594b push 0x1228249c */
  push32((uint32_t)(0x1228249cu));
  /* 12265950 mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 12265955 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12265957 push ecx */
  push32((uint32_t)(ECX));
  /* 12265958 call 0x1225d5b0 */
  push32(0x1226595du); f_1225d5b0();
  /* 1226595d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265960 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12265965 push 0x122824cc */
  push32((uint32_t)(0x122824ccu));
  /* 1226596a push 2 */
  push32((uint32_t)(0x2u));
  /* 1226596c push 2 */
  push32((uint32_t)(0x2u));
  /* 1226596e call 0x1225a600 */
  push32(0x12265973u); f_1225a600();
  /* 12265973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265976 mov edx, dword ptr [0x12285d88] */
  EDX = (r32((uint32_t)(0x12285d88)));
  /* 1226597c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1226597f mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 12265984 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265988 jne 0x1226598f */
  if (!C.zf) goto L_1226598f;
  /* 1226598a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226598d jmp 0x122659f2 */
  goto L_122659f2;
L_1226598f:;
  /* 1226598f mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 12265995 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12265998 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1226599b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 122659a0 push 0x122824cc */
  push32((uint32_t)(0x122824ccu));
  /* 122659a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122659a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122659a9 call 0x1225a600 */
  push32(0x122659aeu); f_1225a600();
  /* 122659ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122659b1 mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 122659b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 122659ba mov edx, dword ptr [0x12285d88] */
  EDX = (r32((uint32_t)(0x12285d88)));
  /* 122659c0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122659c4 jne 0x122659cb */
  if (!C.zf) goto L_122659cb;
  /* 122659c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122659c9 jmp 0x122659f2 */
  goto L_122659f2;
L_122659cb:;
  /* 122659cb mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 122659d0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122659d3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122659d6 mov edx, dword ptr [0x12285d88] */
  EDX = (r32((uint32_t)(0x12285d88)));
  /* 122659dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122659de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122659e0 mov byte ptr [0x12284ea8], cl */
  w8((uint32_t)(0x12284ea8), (CL));
  /* 122659e6 mov dword ptr [0x12284eac], 1 */
  w32((uint32_t)(0x12284eac), (0x1u));
  /* 122659f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122659f2:;
  /* 122659f2 mov esp, ebp */
  ESP = (EBP);
  /* 122659f4 pop ebp */
  EBP = (pop32());
  /* 122659f5 ret  */
  ESPCHK(0x12265750u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12265a00 (125 bytes, 49 insns) */
void f_12265a00(void) {
  FTRACE(0x12265a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12265a01 mov ebp, esp */
  EBP = (ESP);
  /* 12265a03 push ecx */
  push32((uint32_t)(ECX));
L_12265a04:;
  /* 12265a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12265a0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12265a0c je 0x12265a79 */
  if (C.zf) goto L_12265a79;
  /* 12265a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12265a14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265a17 jl 0x12265a3d */
  if ((C.sf!=C.of)) goto L_12265a3d;
  /* 12265a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12265a1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265a22 jg 0x12265a3d */
  if ((!C.zf&&C.sf==C.of)) goto L_12265a3d;
  /* 12265a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12265a2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12265a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12265a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265a38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12265a3b jmp 0x12265a77 */
  goto L_12265a77;
L_12265a3d:;
  /* 12265a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12265a43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265a46 jne 0x12265a6e */
  if (!C.zf) goto L_12265a6e;
  /* 12265a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12265a4e:;
  /* 12265a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265a54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12265a57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12265a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265a5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265a5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12265a62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265a65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12265a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12265a6a jne 0x12265a4e */
  if (!C.zf) goto L_12265a4e;
  /* 12265a6c jmp 0x12265a77 */
  goto L_12265a77;
L_12265a6e:;
  /* 12265a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265a71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265a74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12265a77:;
  /* 12265a77 jmp 0x12265a04 */
  goto L_12265a04;
L_12265a79:;
  /* 12265a79 mov esp, ebp */
  ESP = (EBP);
  /* 12265a7b pop ebp */
  EBP = (pop32());
  /* 12265a7c ret  */
  ESPCHK(0x12265a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a80 @ 0x12265a80 (304 bytes, 85 insns) */
void f_12265a80(void) {
  FTRACE(0x12265a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12265a81 mov ebp, esp */
  EBP = (ESP);
  /* 12265a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12265a84 cmp dword ptr [0x12286994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265a8b je 0x12265b4c */
  if (C.zf) goto L_12265b4c;
  /* 12265a91 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12265a93 push 0x122824d8 */
  push32((uint32_t)(0x122824d8u));
  /* 12265a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265a9a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12265a9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12265a9e call 0x1225aa10 */
  push32(0x12265aa3u); f_1225aa10();
  /* 12265aa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265aa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12265aa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265aad jne 0x12265ab9 */
  if (!C.zf) goto L_12265ab9;
  /* 12265aaf mov eax, 1 */
  EAX = (0x1u);
  /* 12265ab4 jmp 0x12265bac */
  goto L_12265bac;
L_12265ab9:;
  /* 12265ab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265abc push eax */
  push32((uint32_t)(EAX));
  /* 12265abd call 0x12265bb0 */
  push32(0x12265ac2u); f_12265bb0();
  /* 12265ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12265ac7 je 0x12265aed */
  if (C.zf) goto L_12265aed;
  /* 12265ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265acc push ecx */
  push32((uint32_t)(ECX));
  /* 12265acd call 0x12265e40 */
  push32(0x12265ad2u); f_12265e40();
  /* 12265ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265ad7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265ada push edx */
  push32((uint32_t)(EDX));
  /* 12265adb call 0x1225b090 */
  push32(0x12265ae0u); f_1225b090();
  /* 12265ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265ae3 mov eax, 1 */
  EAX = (0x1u);
  /* 12265ae8 jmp 0x12265bac */
  goto L_12265bac;
L_12265aed:;
  /* 12265aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265af0 mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 12265af6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12265af8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12265afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265afd mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 12265b03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12265b06 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12265b09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265b0c mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 12265b12 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12265b15 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12265b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265b1b mov dword ptr [0x12285d88], eax */
  w32((uint32_t)(0x12285d88), (EAX));
  /* 12265b20 mov ecx, dword ptr [0x122869cc] */
  ECX = (r32((uint32_t)(0x122869cc)));
  /* 12265b26 push ecx */
  push32((uint32_t)(ECX));
  /* 12265b27 call 0x12265e40 */
  push32(0x12265b2cu); f_12265e40();
  /* 12265b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265b2f push 2 */
  push32((uint32_t)(0x2u));
  /* 12265b31 mov edx, dword ptr [0x122869cc] */
  EDX = (r32((uint32_t)(0x122869cc)));
  /* 12265b37 push edx */
  push32((uint32_t)(EDX));
  /* 12265b38 call 0x1225b090 */
  push32(0x12265b3du); f_1225b090();
  /* 12265b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265b40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265b43 mov dword ptr [0x122869cc], eax */
  w32((uint32_t)(0x122869cc), (EAX));
  /* 12265b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12265b4a jmp 0x12265bac */
  goto L_12265bac;
L_12265b4c:;
  /* 12265b4c mov ecx, dword ptr [0x12285d88] */
  ECX = (r32((uint32_t)(0x12285d88)));
  /* 12265b52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12265b54 mov dword ptr [0x12285d58], edx */
  w32((uint32_t)(0x12285d58), (EDX));
  /* 12265b5a mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 12265b5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12265b62 mov dword ptr [0x12285d5c], ecx */
  w32((uint32_t)(0x12285d5c), (ECX));
  /* 12265b68 mov edx, dword ptr [0x12285d88] */
  EDX = (r32((uint32_t)(0x12285d88)));
  /* 12265b6e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12265b71 mov dword ptr [0x12285d60], eax */
  w32((uint32_t)(0x12285d60), (EAX));
  /* 12265b76 mov dword ptr [0x12285d88], 0x12285d58 */
  w32((uint32_t)(0x12285d88), (0x12285d58u));
  /* 12265b80 mov ecx, dword ptr [0x122869cc] */
  ECX = (r32((uint32_t)(0x122869cc)));
  /* 12265b86 push ecx */
  push32((uint32_t)(ECX));
  /* 12265b87 call 0x12265e40 */
  push32(0x12265b8cu); f_12265e40();
  /* 12265b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265b8f push 2 */
  push32((uint32_t)(0x2u));
  /* 12265b91 mov edx, dword ptr [0x122869cc] */
  EDX = (r32((uint32_t)(0x122869cc)));
  /* 12265b97 push edx */
  push32((uint32_t)(EDX));
  /* 12265b98 call 0x1225b090 */
  push32(0x12265b9du); f_1225b090();
  /* 12265b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265ba0 mov dword ptr [0x122869cc], 0 */
  w32((uint32_t)(0x122869cc), (0x0u));
  /* 12265baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12265bac:;
  /* 12265bac mov esp, ebp */
  ESP = (EBP);
  /* 12265bae pop ebp */
  EBP = (pop32());
  /* 12265baf ret  */
  ESPCHK(0x12265a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bb0 @ 0x12265bb0 (525 bytes, 200 insns) */
void f_12265bb0(void) {
  FTRACE(0x12265bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12265bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12265bb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12265bb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12265bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12265bbf mov ax, word ptr [0x122869ec] */
  AX = (r16((uint32_t)(0x122869ec)));
  /* 12265bc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12265bc8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265bcc jne 0x12265bd6 */
  if (!C.zf) goto L_12265bd6;
  /* 12265bce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12265bd1 jmp 0x12265db9 */
  goto L_12265db9;
L_12265bd6:;
  /* 12265bd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265bd9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265bdc push ecx */
  push32((uint32_t)(ECX));
  /* 12265bdd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12265bdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265be2 push edx */
  push32((uint32_t)(EDX));
  /* 12265be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265be5 call 0x122687c0 */
  push32(0x12265beau); f_122687c0();
  /* 12265bea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265bed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265bf0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265bf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265bf8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265bfb push edx */
  push32((uint32_t)(EDX));
  /* 12265bfc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12265bfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265c01 push eax */
  push32((uint32_t)(EAX));
  /* 12265c02 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265c04 call 0x122687c0 */
  push32(0x12265c09u); f_122687c0();
  /* 12265c09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265c0f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265c11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265c17 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c1a push edx */
  push32((uint32_t)(EDX));
  /* 12265c1b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12265c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265c20 push eax */
  push32((uint32_t)(EAX));
  /* 12265c21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265c23 call 0x122687c0 */
  push32(0x12265c28u); f_122687c0();
  /* 12265c28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265c2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265c30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265c33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265c36 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c39 push edx */
  push32((uint32_t)(EDX));
  /* 12265c3a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12265c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265c3f push eax */
  push32((uint32_t)(EAX));
  /* 12265c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12265c42 call 0x122687c0 */
  push32(0x12265c47u); f_122687c0();
  /* 12265c47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265c4d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265c4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265c55 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c58 push edx */
  push32((uint32_t)(EDX));
  /* 12265c59 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12265c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265c5e push eax */
  push32((uint32_t)(EAX));
  /* 12265c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12265c61 call 0x122687c0 */
  push32(0x12265c66u); f_122687c0();
  /* 12265c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265c6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265c6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265c71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265c74 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12265c77 push eax */
  push32((uint32_t)(EAX));
  /* 12265c78 call 0x12265dc0 */
  push32(0x12265c7du); f_12265dc0();
  /* 12265c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265c83 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c86 push ecx */
  push32((uint32_t)(ECX));
  /* 12265c87 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12265c89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265c8c push edx */
  push32((uint32_t)(EDX));
  /* 12265c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12265c8f call 0x122687c0 */
  push32(0x12265c94u); f_122687c0();
  /* 12265c94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265c97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265c9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265c9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265c9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265ca2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265ca5 push edx */
  push32((uint32_t)(EDX));
  /* 12265ca6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12265ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265cab push eax */
  push32((uint32_t)(EAX));
  /* 12265cac push 1 */
  push32((uint32_t)(0x1u));
  /* 12265cae call 0x122687c0 */
  push32(0x12265cb3u); f_122687c0();
  /* 12265cb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265cb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265cb9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265cbb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265cbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265cc1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265cc4 push edx */
  push32((uint32_t)(EDX));
  /* 12265cc5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12265cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265cca push eax */
  push32((uint32_t)(EAX));
  /* 12265ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 12265ccd call 0x122687c0 */
  push32(0x12265cd2u); f_122687c0();
  /* 12265cd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265cd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265cda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265ce0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265ce3 push edx */
  push32((uint32_t)(EDX));
  /* 12265ce4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12265ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265ce9 push eax */
  push32((uint32_t)(EAX));
  /* 12265cea push 0 */
  push32((uint32_t)(0x0u));
  /* 12265cec call 0x122687c0 */
  push32(0x12265cf1u); f_122687c0();
  /* 12265cf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265cf4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265cf7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265cf9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265cfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265cff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d02 push edx */
  push32((uint32_t)(EDX));
  /* 12265d03 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12265d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265d08 push eax */
  push32((uint32_t)(EAX));
  /* 12265d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12265d0b call 0x122687c0 */
  push32(0x12265d10u); f_122687c0();
  /* 12265d10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265d16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265d18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265d1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265d1e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d21 push edx */
  push32((uint32_t)(EDX));
  /* 12265d22 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12265d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265d27 push eax */
  push32((uint32_t)(EAX));
  /* 12265d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12265d2a call 0x122687c0 */
  push32(0x12265d2fu); f_122687c0();
  /* 12265d2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265d35 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265d37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265d3d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d40 push edx */
  push32((uint32_t)(EDX));
  /* 12265d41 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12265d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265d46 push eax */
  push32((uint32_t)(EAX));
  /* 12265d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12265d49 call 0x122687c0 */
  push32(0x12265d4eu); f_122687c0();
  /* 12265d4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265d54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265d56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265d59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265d5c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d5f push edx */
  push32((uint32_t)(EDX));
  /* 12265d60 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12265d62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265d65 push eax */
  push32((uint32_t)(EAX));
  /* 12265d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12265d68 call 0x122687c0 */
  push32(0x12265d6du); f_122687c0();
  /* 12265d6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265d73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265d75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265d7b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d7e push edx */
  push32((uint32_t)(EDX));
  /* 12265d7f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12265d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265d84 push eax */
  push32((uint32_t)(EAX));
  /* 12265d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12265d87 call 0x122687c0 */
  push32(0x12265d8cu); f_122687c0();
  /* 12265d8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265d92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265d94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265d9a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265d9d push edx */
  push32((uint32_t)(EDX));
  /* 12265d9e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12265da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265da3 push eax */
  push32((uint32_t)(EAX));
  /* 12265da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12265da6 call 0x122687c0 */
  push32(0x12265dabu); f_122687c0();
  /* 12265dab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265dae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12265db1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12265db3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12265db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12265db9:;
  /* 12265db9 mov esp, ebp */
  ESP = (EBP);
  /* 12265dbb pop ebp */
  EBP = (pop32());
  /* 12265dbc ret  */
  ESPCHK(0x12265bb0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12265dc0 (125 bytes, 49 insns) */
void f_12265dc0(void) {
  FTRACE(0x12265dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12265dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12265dc3 push ecx */
  push32((uint32_t)(ECX));
L_12265dc4:;
  /* 12265dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265dc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12265dca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12265dcc je 0x12265e39 */
  if (C.zf) goto L_12265e39;
  /* 12265dce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265dd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12265dd4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265dd7 jl 0x12265dfd */
  if ((C.sf!=C.of)) goto L_12265dfd;
  /* 12265dd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265ddc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12265ddf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265de2 jg 0x12265dfd */
  if ((!C.zf&&C.sf==C.of)) goto L_12265dfd;
  /* 12265de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12265dea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12265ded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265df0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12265df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265df5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265df8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12265dfb jmp 0x12265e37 */
  goto L_12265e37;
L_12265dfd:;
  /* 12265dfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12265e03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265e06 jne 0x12265e2e */
  if (!C.zf) goto L_12265e2e;
  /* 12265e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12265e0e:;
  /* 12265e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265e14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12265e17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12265e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265e1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12265e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12265e25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12265e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12265e2a jne 0x12265e0e */
  if (!C.zf) goto L_12265e0e;
  /* 12265e2c jmp 0x12265e37 */
  goto L_12265e37;
L_12265e2e:;
  /* 12265e2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265e34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12265e37:;
  /* 12265e37 jmp 0x12265dc4 */
  goto L_12265dc4;
L_12265e39:;
  /* 12265e39 mov esp, ebp */
  ESP = (EBP);
  /* 12265e3b pop ebp */
  EBP = (pop32());
  /* 12265e3c ret  */
  ESPCHK(0x12265dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e40 @ 0x12265e40 (147 bytes, 52 insns) */
void f_12265e40(void) {
  FTRACE(0x12265e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12265e41 mov ebp, esp */
  EBP = (ESP);
  /* 12265e43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265e47 jne 0x12265e4e */
  if (!C.zf) goto L_12265e4e;
  /* 12265e49 jmp 0x12265ed1 */
  goto L_12265ed1;
L_12265e4e:;
  /* 12265e4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e51 cmp dword ptr [eax + 0xc], 0x12286a28 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12286a28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265e58 je 0x12265ed1 */
  if (C.zf) goto L_12265ed1;
  /* 12265e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12265e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12265e62 push edx */
  push32((uint32_t)(EDX));
  /* 12265e63 call 0x1225b090 */
  push32(0x12265e68u); f_1225b090();
  /* 12265e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12265e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12265e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12265e74 call 0x1225b090 */
  push32(0x12265e79u); f_1225b090();
  /* 12265e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12265e7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12265e84 push eax */
  push32((uint32_t)(EAX));
  /* 12265e85 call 0x1225b090 */
  push32(0x12265e8au); f_1225b090();
  /* 12265e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265e8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12265e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265e92 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12265e95 push edx */
  push32((uint32_t)(EDX));
  /* 12265e96 call 0x1225b090 */
  push32(0x12265e9bu); f_1225b090();
  /* 12265e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265e9e push 2 */
  push32((uint32_t)(0x2u));
  /* 12265ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265ea3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12265ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 12265ea7 call 0x1225b090 */
  push32(0x12265eacu); f_1225b090();
  /* 12265eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265eaf push 2 */
  push32((uint32_t)(0x2u));
  /* 12265eb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265eb4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12265eb7 push eax */
  push32((uint32_t)(EAX));
  /* 12265eb8 call 0x1225b090 */
  push32(0x12265ebdu); f_1225b090();
  /* 12265ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265ec0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265ec2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12265ec5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12265ec8 push edx */
  push32((uint32_t)(EDX));
  /* 12265ec9 call 0x1225b090 */
  push32(0x12265eceu); f_1225b090();
  /* 12265ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12265ed1:;
  /* 12265ed1 pop ebp */
  EBP = (pop32());
  /* 12265ed2 ret  */
  ESPCHK(0x12265e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ee0 @ 0x12265ee0 (928 bytes, 284 insns) */
void f_12265ee0(void) {
  FTRACE(0x12265ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12265ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12265ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12265ee3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12265ee6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12265eed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12265ef4 cmp dword ptr [0x12286990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265efb je 0x12266231 */
  if (C.zf) goto L_12266231;
  /* 12265f01 cmp dword ptr [0x122869a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265f08 jne 0x12265f30 */
  if (!C.zf) goto L_12265f30;
  /* 12265f0a push 0x122869a0 */
  push32((uint32_t)(0x122869a0u));
  /* 12265f0f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12265f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12265f16 mov ax, word ptr [0x122869e4] */
  AX = (r16((uint32_t)(0x122869e4)));
  /* 12265f1c push eax */
  push32((uint32_t)(EAX));
  /* 12265f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12265f1f call 0x122687c0 */
  push32(0x12265f24u); f_122687c0();
  /* 12265f24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12265f29 je 0x12265f30 */
  if (C.zf) goto L_12265f30;
  /* 12265f2b jmp 0x122661f2 */
  goto L_122661f2;
L_12265f30:;
  /* 12265f30 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12265f32 push 0x122824e4 */
  push32((uint32_t)(0x122824e4u));
  /* 12265f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265f39 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12265f3e call 0x1225a600 */
  push32(0x12265f43u); f_1225a600();
  /* 12265f43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265f46 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12265f49 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12265f4b push 0x122824e4 */
  push32((uint32_t)(0x122824e4u));
  /* 12265f50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265f52 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12265f57 call 0x1225a600 */
  push32(0x12265f5cu); f_1225a600();
  /* 12265f5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265f5f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12265f62 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12265f64 push 0x122824e4 */
  push32((uint32_t)(0x122824e4u));
  /* 12265f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265f6b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12265f70 call 0x1225a600 */
  push32(0x12265f75u); f_1225a600();
  /* 12265f75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265f78 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12265f7b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12265f7d push 0x122824e4 */
  push32((uint32_t)(0x122824e4u));
  /* 12265f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 12265f84 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12265f89 call 0x1225a600 */
  push32(0x12265f8eu); f_1225a600();
  /* 12265f8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12265f91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12265f94 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265f98 je 0x12265fac */
  if (C.zf) goto L_12265fac;
  /* 12265f9a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265f9e je 0x12265fac */
  if (C.zf) goto L_12265fac;
  /* 12265fa0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265fa4 je 0x12265fac */
  if (C.zf) goto L_12265fac;
  /* 12265fa6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265faa jne 0x12265fb1 */
  if (!C.zf) goto L_12265fb1;
L_12265fac:;
  /* 12265fac jmp 0x122661f2 */
  goto L_122661f2;
L_12265fb1:;
  /* 12265fb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12265fb4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12265fb7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12265fbe jmp 0x12265fc9 */
  goto L_12265fc9;
L_12265fc0:;
  /* 12265fc0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12265fc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265fc6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12265fc9:;
  /* 12265fc9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12265fd0 jge 0x12265fe5 */
  if ((C.sf==C.of)) goto L_12265fe5;
  /* 12265fd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12265fd5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12265fd8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12265fda mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12265fdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12265fe0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12265fe3 jmp 0x12265fc0 */
  goto L_12265fc0;
L_12265fe5:;
  /* 12265fe5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12265fe8 push eax */
  push32((uint32_t)(EAX));
  /* 12265fe9 mov ecx, dword ptr [0x122869a0] */
  ECX = (r32((uint32_t)(0x122869a0)));
  /* 12265fef push ecx */
  push32((uint32_t)(ECX));
  /* 12265ff0 call dword ptr [0x12289338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289338))), 0x12265ff6u);
  /* 12265ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12265ff8 jne 0x12265fff */
  if (!C.zf) goto L_12265fff;
  /* 12265ffa jmp 0x122661f2 */
  goto L_122661f2;
L_12265fff:;
  /* 12265fff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266003 jbe 0x1226600a */
  if ((C.cf||C.zf)) goto L_1226600a;
  /* 12266005 jmp 0x122661f2 */
  goto L_122661f2;
L_1226600a:;
  /* 1226600a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226600d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12266013 mov dword ptr [0x12284ea4], edx */
  w32((uint32_t)(0x12284ea4), (EDX));
  /* 12266019 cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266020 jle 0x12266079 */
  if ((C.zf||C.sf!=C.of)) goto L_12266079;
  /* 12266022 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12266025 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12266028 jmp 0x12266033 */
  goto L_12266033;
L_1226602a:;
  /* 1226602a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226602d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266030 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12266033:;
  /* 12266033 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12266036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266038 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1226603a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226603c je 0x12266079 */
  if (C.zf) goto L_12266079;
  /* 1226603e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12266041 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12266043 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12266046 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12266048 je 0x12266079 */
  if (C.zf) goto L_12266079;
  /* 1226604a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226604d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226604f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12266051 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12266054 jmp 0x1226605f */
  goto L_1226605f;
L_12266056:;
  /* 12266056 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12266059 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226605c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1226605f:;
  /* 1226605f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12266062 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12266064 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12266067 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226606a jg 0x12266077 */
  if ((!C.zf&&C.sf==C.of)) goto L_12266077;
  /* 1226606c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1226606f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266072 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12266075 jmp 0x12266056 */
  goto L_12266056;
L_12266077:;
  /* 12266077 jmp 0x1226602a */
  goto L_1226602a;
L_12266079:;
  /* 12266079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226607b push 0 */
  push32((uint32_t)(0x0u));
  /* 1226607d push 0 */
  push32((uint32_t)(0x0u));
  /* 1226607f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12266082 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266085 push eax */
  push32((uint32_t)(EAX));
  /* 12266086 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1226608b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1226608e push ecx */
  push32((uint32_t)(ECX));
  /* 1226608f push 1 */
  push32((uint32_t)(0x1u));
  /* 12266091 call 0x12262830 */
  push32(0x12266096u); f_12262830();
  /* 12266096 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226609b jne 0x122660a2 */
  if (!C.zf) goto L_122660a2;
  /* 1226609d jmp 0x122661f2 */
  goto L_122661f2;
L_122660a2:;
  /* 122660a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122660a5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 122660aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122660ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122660b0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122660b7 jmp 0x122660c2 */
  goto L_122660c2;
L_122660b9:;
  /* 122660b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122660bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122660bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_122660c2:;
  /* 122660c2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122660c9 jge 0x122660e0 */
  if ((C.sf==C.of)) goto L_122660e0;
  /* 122660cb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122660ce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 122660d2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 122660d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122660d8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122660db mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122660de jmp 0x122660b9 */
  goto L_122660b9;
L_122660e0:;
  /* 122660e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122660e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122660e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122660e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122660ea push edx */
  push32((uint32_t)(EDX));
  /* 122660eb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122660f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122660f3 push eax */
  push32((uint32_t)(EAX));
  /* 122660f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122660f6 call 0x12268a60 */
  push32(0x122660fbu); f_12268a60();
  /* 122660fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122660fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266100 jne 0x12266107 */
  if (!C.zf) goto L_12266107;
  /* 12266102 jmp 0x122661f2 */
  goto L_122661f2;
L_12266107:;
  /* 12266107 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1226610a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1226610f cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266116 jle 0x12266173 */
  if ((C.zf||C.sf!=C.of)) goto L_12266173;
  /* 12266118 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1226611b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1226611e jmp 0x12266129 */
  goto L_12266129;
L_12266120:;
  /* 12266120 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12266123 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266126 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12266129:;
  /* 12266129 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226612c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226612e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12266130 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12266132 je 0x12266173 */
  if (C.zf) goto L_12266173;
  /* 12266134 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12266137 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12266139 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1226613c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226613e je 0x12266173 */
  if (C.zf) goto L_12266173;
  /* 12266140 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12266143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266145 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12266147 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1226614a jmp 0x12266155 */
  goto L_12266155;
L_1226614c:;
  /* 1226614c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1226614f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266152 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12266155:;
  /* 12266155 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12266158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226615a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1226615d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266160 jg 0x12266171 */
  if ((!C.zf&&C.sf==C.of)) goto L_12266171;
  /* 12266162 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12266165 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12266168 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1226616f jmp 0x1226614c */
  goto L_1226614c;
L_12266171:;
  /* 12266171 jmp 0x12266120 */
  goto L_12266120;
L_12266173:;
  /* 12266173 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12266176 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266179 mov dword ptr [0x12284c98], eax */
  w32((uint32_t)(0x12284c98), (EAX));
  /* 1226617e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12266181 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266184 mov dword ptr [0x12284c9c], ecx */
  w32((uint32_t)(0x12284c9c), (ECX));
  /* 1226618a cmp dword ptr [0x122869d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266191 je 0x122661a4 */
  if (C.zf) goto L_122661a4;
  /* 12266193 push 2 */
  push32((uint32_t)(0x2u));
  /* 12266195 mov edx, dword ptr [0x122869d0] */
  EDX = (r32((uint32_t)(0x122869d0)));
  /* 1226619b push edx */
  push32((uint32_t)(EDX));
  /* 1226619c call 0x1225b090 */
  push32(0x122661a1u); f_1225b090();
  /* 122661a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122661a4:;
  /* 122661a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122661a7 mov dword ptr [0x122869d0], eax */
  w32((uint32_t)(0x122869d0), (EAX));
  /* 122661ac cmp dword ptr [0x122869d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122661b3 je 0x122661c6 */
  if (C.zf) goto L_122661c6;
  /* 122661b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122661b7 mov ecx, dword ptr [0x122869d4] */
  ECX = (r32((uint32_t)(0x122869d4)));
  /* 122661bd push ecx */
  push32((uint32_t)(ECX));
  /* 122661be call 0x1225b090 */
  push32(0x122661c3u); f_1225b090();
  /* 122661c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122661c6:;
  /* 122661c6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122661c9 mov dword ptr [0x122869d4], edx */
  w32((uint32_t)(0x122869d4), (EDX));
  /* 122661cf push 2 */
  push32((uint32_t)(0x2u));
  /* 122661d1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122661d4 push eax */
  push32((uint32_t)(EAX));
  /* 122661d5 call 0x1225b090 */
  push32(0x122661dau); f_1225b090();
  /* 122661da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122661dd push 2 */
  push32((uint32_t)(0x2u));
  /* 122661df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122661e2 push ecx */
  push32((uint32_t)(ECX));
  /* 122661e3 call 0x1225b090 */
  push32(0x122661e8u); f_1225b090();
  /* 122661e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122661eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122661ed jmp 0x1226627c */
  goto L_1226627c;
L_122661f2:;
  /* 122661f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 122661f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122661f7 push edx */
  push32((uint32_t)(EDX));
  /* 122661f8 call 0x1225b090 */
  push32(0x122661fdu); f_1225b090();
  /* 122661fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266200 push 2 */
  push32((uint32_t)(0x2u));
  /* 12266202 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12266205 push eax */
  push32((uint32_t)(EAX));
  /* 12266206 call 0x1225b090 */
  push32(0x1226620bu); f_1225b090();
  /* 1226620b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226620e push 2 */
  push32((uint32_t)(0x2u));
  /* 12266210 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12266213 push ecx */
  push32((uint32_t)(ECX));
  /* 12266214 call 0x1225b090 */
  push32(0x12266219u); f_1225b090();
  /* 12266219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226621c push 2 */
  push32((uint32_t)(0x2u));
  /* 1226621e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12266221 push edx */
  push32((uint32_t)(EDX));
  /* 12266222 call 0x1225b090 */
  push32(0x12266227u); f_1225b090();
  /* 12266227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226622a mov eax, 1 */
  EAX = (0x1u);
  /* 1226622f jmp 0x1226627c */
  goto L_1226627c;
L_12266231:;
  /* 12266231 mov dword ptr [0x12284c98], 0x12284ca2 */
  w32((uint32_t)(0x12284c98), (0x12284ca2u));
  /* 1226623b mov dword ptr [0x12284c9c], 0x12284ca2 */
  w32((uint32_t)(0x12284c9c), (0x12284ca2u));
  /* 12266245 push 2 */
  push32((uint32_t)(0x2u));
  /* 12266247 mov eax, dword ptr [0x122869d0] */
  EAX = (r32((uint32_t)(0x122869d0)));
  /* 1226624c push eax */
  push32((uint32_t)(EAX));
  /* 1226624d call 0x1225b090 */
  push32(0x12266252u); f_1225b090();
  /* 12266252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266255 push 2 */
  push32((uint32_t)(0x2u));
  /* 12266257 mov ecx, dword ptr [0x122869d4] */
  ECX = (r32((uint32_t)(0x122869d4)));
  /* 1226625d push ecx */
  push32((uint32_t)(ECX));
  /* 1226625e call 0x1225b090 */
  push32(0x12266263u); f_1225b090();
  /* 12266263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266266 mov dword ptr [0x122869d0], 0 */
  w32((uint32_t)(0x122869d0), (0x0u));
  /* 12266270 mov dword ptr [0x122869d4], 0 */
  w32((uint32_t)(0x122869d4), (0x0u));
  /* 1226627a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1226627c:;
  /* 1226627c mov esp, ebp */
  ESP = (EBP);
  /* 1226627e pop ebp */
  EBP = (pop32());
  /* 1226627f ret  */
  ESPCHK(0x12265ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016280 @ 0x12266280 (7 bytes, 5 insns) */
void f_12266280(void) {
  FTRACE(0x12266280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266280 push ebp */
  push32((uint32_t)(EBP));
  /* 12266281 mov ebp, esp */
  EBP = (ESP);
  /* 12266283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266285 pop ebp */
  EBP = (pop32());
  /* 12266286 ret  */
  ESPCHK(0x12266280u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12266290 (129 bytes, 56 insns) */
void f_12266290(void) {
  FTRACE(0x12266290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266290 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12266294 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12266298 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1226629e jne 0x122662dc */
  if (!C.zf) goto L_122662dc;
L_122662a0:;
  /* 122662a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122662a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122662a4 jne 0x122662d4 */
  if (!C.zf) goto L_122662d4;
  /* 122662a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122662a8 je 0x122662d0 */
  if (C.zf) goto L_122662d0;
  /* 122662aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122662ad jne 0x122662d4 */
  if (!C.zf) goto L_122662d4;
  /* 122662af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122662b1 je 0x122662d0 */
  if (C.zf) goto L_122662d0;
  /* 122662b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122662b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122662b9 jne 0x122662d4 */
  if (!C.zf) goto L_122662d4;
  /* 122662bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122662bd je 0x122662d0 */
  if (C.zf) goto L_122662d0;
  /* 122662bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122662c2 jne 0x122662d4 */
  if (!C.zf) goto L_122662d4;
  /* 122662c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122662c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122662ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122662cc jne 0x122662a0 */
  if (!C.zf) goto L_122662a0;
  /* 122662ce mov edi, edi */
  EDI = (EDI);
L_122662d0:;
  /* 122662d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122662d2 ret  */
  ESPCHK(0x12266290u, _esp0);
  ESP += 4; return;
  /* 122662d3 nop  */
  /* nop */
L_122662d4:;
  /* 122662d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122662d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122662d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 122662d9 ret  */
  ESPCHK(0x12266290u, _esp0);
  ESP += 4; return;
  /* 122662da mov edi, edi */
  EDI = (EDI);
L_122662dc:;
  /* 122662dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 122662e2 je 0x122662f8 */
  if (C.zf) goto L_122662f8;
  /* 122662e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122662e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122662e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122662e9 jne 0x122662d4 */
  if (!C.zf) goto L_122662d4;
  /* 122662eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122662ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122662ee je 0x122662d0 */
  if (C.zf) goto L_122662d0;
  /* 122662f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 122662f6 je 0x122662a0 */
  if (C.zf) goto L_122662a0;
L_122662f8:;
  /* 122662f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 122662fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122662fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12266300 jne 0x122662d4 */
  if (!C.zf) goto L_122662d4;
  /* 12266302 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12266304 je 0x122662d0 */
  if (C.zf) goto L_122662d0;
  /* 12266306 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12266309 jne 0x122662d4 */
  if (!C.zf) goto L_122662d4;
  /* 1226630b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1226630d je 0x122662d0 */
  if (C.zf) goto L_122662d0;
  /* 1226630f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266312 jmp 0x122662a0 */
  goto L_122662a0;
}

/* FUN_10016320 @ 0x12266320 (62 bytes, 35 insns) */
void f_12266320(void) {
  FTRACE(0x12266320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266320 push ebp */
  push32((uint32_t)(EBP));
  /* 12266321 mov ebp, esp */
  EBP = (ESP);
  /* 12266323 push esi */
  push32((uint32_t)(ESI));
  /* 12266324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266326 push eax */
  push32((uint32_t)(EAX));
  /* 12266327 push eax */
  push32((uint32_t)(EAX));
  /* 12266328 push eax */
  push32((uint32_t)(EAX));
  /* 12266329 push eax */
  push32((uint32_t)(EAX));
  /* 1226632a push eax */
  push32((uint32_t)(EAX));
  /* 1226632b push eax */
  push32((uint32_t)(EAX));
  /* 1226632c push eax */
  push32((uint32_t)(EAX));
  /* 1226632d push eax */
  push32((uint32_t)(EAX));
  /* 1226632e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12266331 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12266334:;
  /* 12266334 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12266336 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12266338 je 0x12266341 */
  if (C.zf) goto L_12266341;
  /* 1226633a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1226633b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1226633b");
  /* 1226633f jmp 0x12266334 */
  goto L_12266334;
L_12266341:;
  /* 12266341 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12266344 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12266347 nop  */
  /* nop */
L_12266348:;
  /* 12266348 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12266349 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1226634b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1226634d je 0x12266356 */
  if (C.zf) goto L_12266356;
  /* 1226634f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12266350 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12266350");
  /* 12266354 jae 0x12266348 */
  if (!C.cf) goto L_12266348;
L_12266356:;
  /* 12266356 mov eax, ecx */
  EAX = (ECX);
  /* 12266358 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226635b pop esi */
  ESI = (pop32());
  /* 1226635c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1226635d ret  */
  ESPCHK(0x12266320u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12266360 (56 bytes, 31 insns) */
void f_12266360(void) {
  FTRACE(0x12266360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266360 push ebp */
  push32((uint32_t)(EBP));
  /* 12266361 mov ebp, esp */
  EBP = (ESP);
  /* 12266363 push edi */
  push32((uint32_t)(EDI));
  /* 12266364 push esi */
  push32((uint32_t)(ESI));
  /* 12266365 push ebx */
  push32((uint32_t)(EBX));
  /* 12266366 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12266369 jecxz 0x12266391 */
  x86_unimpl("jecxz @ 0x12266369");
  /* 1226636b mov ebx, ecx */
  EBX = (ECX);
  /* 1226636d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12266370 mov esi, edi */
  ESI = (EDI);
  /* 12266372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266374 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12266376 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12266378 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226637a mov edi, esi */
  EDI = (ESI);
  /* 1226637c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1226637f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12266381 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12266384 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12266386 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12266389 ja 0x1226638f */
  if ((!C.cf&&!C.zf)) goto L_1226638f;
  /* 1226638b je 0x12266391 */
  if (C.zf) goto L_12266391;
  /* 1226638d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1226638e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1226638f:;
  /* 1226638f not ecx */
  ECX = (~(ECX));
L_12266391:;
  /* 12266391 mov eax, ecx */
  EAX = (ECX);
  /* 12266393 pop ebx */
  EBX = (pop32());
  /* 12266394 pop esi */
  ESI = (pop32());
  /* 12266395 pop edi */
  EDI = (pop32());
  /* 12266396 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12266397 ret  */
  ESPCHK(0x12266360u, _esp0);
  ESP += 4; return;
}

/* FUN_100163a0 @ 0x122663a0 (58 bytes, 32 insns) */
void f_122663a0(void) {
  FTRACE(0x122663a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122663a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122663a1 mov ebp, esp */
  EBP = (ESP);
  /* 122663a3 push esi */
  push32((uint32_t)(ESI));
  /* 122663a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122663a6 push eax */
  push32((uint32_t)(EAX));
  /* 122663a7 push eax */
  push32((uint32_t)(EAX));
  /* 122663a8 push eax */
  push32((uint32_t)(EAX));
  /* 122663a9 push eax */
  push32((uint32_t)(EAX));
  /* 122663aa push eax */
  push32((uint32_t)(EAX));
  /* 122663ab push eax */
  push32((uint32_t)(EAX));
  /* 122663ac push eax */
  push32((uint32_t)(EAX));
  /* 122663ad push eax */
  push32((uint32_t)(EAX));
  /* 122663ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122663b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122663b4:;
  /* 122663b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122663b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122663b8 je 0x122663c1 */
  if (C.zf) goto L_122663c1;
  /* 122663ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122663bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x122663bb");
  /* 122663bf jmp 0x122663b4 */
  goto L_122663b4;
L_122663c1:;
  /* 122663c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_122663c4:;
  /* 122663c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122663c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122663c8 je 0x122663d4 */
  if (C.zf) goto L_122663d4;
  /* 122663ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122663cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x122663cb");
  /* 122663cf jae 0x122663c4 */
  if (!C.cf) goto L_122663c4;
  /* 122663d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_122663d4:;
  /* 122663d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122663d7 pop esi */
  ESI = (pop32());
  /* 122663d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122663d9 ret  */
  ESPCHK(0x122663a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163e0 @ 0x122663e0 (512 bytes, 147 insns) */
void f_122663e0(void) {
  FTRACE(0x122663e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122663e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122663e1 mov ebp, esp */
  EBP = (ESP);
  /* 122663e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122663e6 cmp dword ptr [0x12286a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122663ed jne 0x12266412 */
  if (!C.zf) goto L_12266412;
  /* 122663ef call 0x12266eb0 */
  push32(0x122663f4u); f_12266eb0();
  /* 122663f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122663f6 je 0x12266402 */
  if (C.zf) goto L_12266402;
  /* 122663f8 mov eax, dword ptr [0x122892fc] */
  EAX = (r32((uint32_t)(0x122892fc)));
  /* 122663fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12266400 jmp 0x12266409 */
  goto L_12266409;
L_12266402:;
  /* 12266402 mov dword ptr [ebp - 8], 0x12266f00 */
  w32((uint32_t)(EBP + -0x8), (0x12266f00u));
L_12266409:;
  /* 12266409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226640c mov dword ptr [0x12286a1c], ecx */
  w32((uint32_t)(0x12286a1c), (ECX));
L_12266412:;
  /* 12266412 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266416 jne 0x12266422 */
  if (!C.zf) goto L_12266422;
  /* 12266418 call 0x12266d00 */
  push32(0x1226641du); f_12266d00();
  /* 1226641d jmp 0x122664ee */
  goto L_122664ee;
L_12266422:;
  /* 12266422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266425 mov dword ptr [0x12286a0c], edx */
  w32((uint32_t)(0x12286a0c), (EDX));
  /* 1226642b cmp dword ptr [0x12286a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266432 je 0x12266454 */
  if (C.zf) goto L_12266454;
  /* 12266434 mov eax, dword ptr [0x12286a0c] */
  EAX = (r32((uint32_t)(0x12286a0c)));
  /* 12266439 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1226643c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226643e je 0x12266454 */
  if (C.zf) goto L_12266454;
  /* 12266440 push 0x12286a0c */
  push32((uint32_t)(0x12286a0cu));
  /* 12266445 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12266447 push 0x12285a90 */
  push32((uint32_t)(0x12285a90u));
  /* 1226644c call 0x122665e0 */
  push32(0x12266451u); f_122665e0();
  /* 12266451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12266454:;
  /* 12266454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266457 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226645a mov dword ptr [0x12286a10], edx */
  w32((uint32_t)(0x12286a10), (EDX));
  /* 12266460 cmp dword ptr [0x12286a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266467 je 0x12266489 */
  if (C.zf) goto L_12266489;
  /* 12266469 mov eax, dword ptr [0x12286a10] */
  EAX = (r32((uint32_t)(0x12286a10)));
  /* 1226646e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12266471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12266473 je 0x12266489 */
  if (C.zf) goto L_12266489;
  /* 12266475 push 0x12286a10 */
  push32((uint32_t)(0x12286a10u));
  /* 1226647a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1226647c push 0x122859d8 */
  push32((uint32_t)(0x122859d8u));
  /* 12266481 call 0x122665e0 */
  push32(0x12266486u); f_122665e0();
  /* 12266486 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12266489:;
  /* 12266489 mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
  /* 12266493 cmp dword ptr [0x12286a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226649a je 0x122664cd */
  if (C.zf) goto L_122664cd;
  /* 1226649c mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 122664a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122664a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122664a7 je 0x122664cd */
  if (C.zf) goto L_122664cd;
  /* 122664a9 cmp dword ptr [0x12286a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122664b0 je 0x122664c6 */
  if (C.zf) goto L_122664c6;
  /* 122664b2 mov ecx, dword ptr [0x12286a10] */
  ECX = (r32((uint32_t)(0x12286a10)));
  /* 122664b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122664bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122664bd je 0x122664c6 */
  if (C.zf) goto L_122664c6;
  /* 122664bf call 0x12266670 */
  push32(0x122664c4u); f_12266670();
  /* 122664c4 jmp 0x122664cb */
  goto L_122664cb;
L_122664c6:;
  /* 122664c6 call 0x12266a60 */
  push32(0x122664cbu); f_12266a60();
L_122664cb:;
  /* 122664cb jmp 0x122664ee */
  goto L_122664ee;
L_122664cd:;
  /* 122664cd cmp dword ptr [0x12286a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122664d4 je 0x122664e9 */
  if (C.zf) goto L_122664e9;
  /* 122664d6 mov eax, dword ptr [0x12286a10] */
  EAX = (r32((uint32_t)(0x12286a10)));
  /* 122664db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122664de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122664e0 je 0x122664e9 */
  if (C.zf) goto L_122664e9;
  /* 122664e2 call 0x12266c00 */
  push32(0x122664e7u); f_12266c00();
  /* 122664e7 jmp 0x122664ee */
  goto L_122664ee;
L_122664e9:;
  /* 122664e9 call 0x12266d00 */
  push32(0x122664eeu); f_12266d00();
L_122664ee:;
  /* 122664ee cmp dword ptr [0x12286a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122664f5 jne 0x122664fe */
  if (!C.zf) goto L_122664fe;
  /* 122664f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122664f9 jmp 0x122665dc */
  goto L_122665dc;
L_122664fe:;
  /* 122664fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266501 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266507 push edx */
  push32((uint32_t)(EDX));
  /* 12266508 call 0x12266d30 */
  push32(0x1226650du); f_12266d30();
  /* 1226650d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266510 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12266513 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266517 je 0x1226652c */
  if (C.zf) goto L_1226652c;
  /* 12266519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226651c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12266521 push eax */
  push32((uint32_t)(EAX));
  /* 12266522 call dword ptr [0x12289300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289300))), 0x12266528u);
  /* 12266528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226652a jne 0x12266533 */
  if (!C.zf) goto L_12266533;
L_1226652c:;
  /* 1226652c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226652e jmp 0x122665dc */
  goto L_122665dc;
L_12266533:;
  /* 12266533 push 1 */
  push32((uint32_t)(0x1u));
  /* 12266535 mov ecx, dword ptr [0x122869fc] */
  ECX = (r32((uint32_t)(0x122869fc)));
  /* 1226653b push ecx */
  push32((uint32_t)(ECX));
  /* 1226653c call dword ptr [0x12289304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289304))), 0x12266542u);
  /* 12266542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266544 jne 0x1226654d */
  if (!C.zf) goto L_1226654d;
  /* 12266546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266548 jmp 0x122665dc */
  goto L_122665dc;
L_1226654d:;
  /* 1226654d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266551 je 0x12266578 */
  if (C.zf) goto L_12266578;
  /* 12266553 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12266556 mov ax, word ptr [0x122869fc] */
  AX = (r16((uint32_t)(0x122869fc)));
  /* 1226655c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1226655f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12266562 mov dx, word ptr [0x12286a18] */
  DX = (r16((uint32_t)(0x12286a18)));
  /* 12266569 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1226656d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12266570 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12266574 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12266578:;
  /* 12266578 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226657c je 0x122665d7 */
  if (C.zf) goto L_122665d7;
  /* 1226657e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12266580 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12266583 push edx */
  push32((uint32_t)(EDX));
  /* 12266584 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12266589 mov eax, dword ptr [0x122869fc] */
  EAX = (r32((uint32_t)(0x122869fc)));
  /* 1226658e push eax */
  push32((uint32_t)(EAX));
  /* 1226658f call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x12266595u);
  /* 12266595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266597 jne 0x1226659d */
  if (!C.zf) goto L_1226659d;
  /* 12266599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226659b jmp 0x122665dc */
  goto L_122665dc;
L_1226659d:;
  /* 1226659d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1226659f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122665a2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122665a5 push ecx */
  push32((uint32_t)(ECX));
  /* 122665a6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 122665ab mov edx, dword ptr [0x12286a18] */
  EDX = (r32((uint32_t)(0x12286a18)));
  /* 122665b1 push edx */
  push32((uint32_t)(EDX));
  /* 122665b2 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x122665b8u);
  /* 122665b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122665ba jne 0x122665c0 */
  if (!C.zf) goto L_122665c0;
  /* 122665bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122665be jmp 0x122665dc */
  goto L_122665dc;
L_122665c0:;
  /* 122665c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 122665c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122665c5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122665ca push eax */
  push32((uint32_t)(EAX));
  /* 122665cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122665ce push ecx */
  push32((uint32_t)(ECX));
  /* 122665cf call 0x1225d140 */
  push32(0x122665d4u); f_1225d140();
  /* 122665d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122665d7:;
  /* 122665d7 mov eax, 1 */
  EAX = (0x1u);
L_122665dc:;
  /* 122665dc mov esp, ebp */
  ESP = (EBP);
  /* 122665de pop ebp */
  EBP = (pop32());
  /* 122665df ret  */
  ESPCHK(0x122663e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100165e0 @ 0x122665e0 (130 bytes, 47 insns) */
void f_122665e0(void) {
  FTRACE(0x122665e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122665e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122665e1 mov ebp, esp */
  EBP = (ESP);
  /* 122665e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122665e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122665ed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_122665f4:;
  /* 122665f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122665f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122665fa jg 0x1226665e */
  if ((!C.zf&&C.sf==C.of)) goto L_1226665e;
  /* 122665fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266600 je 0x1226665e */
  if (C.zf) goto L_1226665e;
  /* 12266602 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266605 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266608 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12266609 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226660b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1226660d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12266610 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12266613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266616 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12266619 push eax */
  push32((uint32_t)(EAX));
  /* 1226661a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226661d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226661f push edx */
  push32((uint32_t)(EDX));
  /* 12266620 call 0x12268cd0 */
  push32(0x12266625u); f_12268cd0();
  /* 12266625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266628 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1226662b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226662f jne 0x12266642 */
  if (!C.zf) goto L_12266642;
  /* 12266631 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12266634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266637 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1226663b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226663e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12266640 jmp 0x1226665c */
  goto L_1226665c;
L_12266642:;
  /* 12266642 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266646 jge 0x12266653 */
  if ((C.sf==C.of)) goto L_12266653;
  /* 12266648 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226664b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226664e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12266651 jmp 0x1226665c */
  goto L_1226665c;
L_12266653:;
  /* 12266653 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12266656 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266659 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1226665c:;
  /* 1226665c jmp 0x122665f4 */
  goto L_122665f4;
L_1226665e:;
  /* 1226665e mov esp, ebp */
  ESP = (EBP);
  /* 12266660 pop ebp */
  EBP = (pop32());
  /* 12266661 ret  */
  ESPCHK(0x122665e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016670 @ 0x12266670 (186 bytes, 50 insns) */
void f_12266670(void) {
  FTRACE(0x12266670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266670 push ebp */
  push32((uint32_t)(EBP));
  /* 12266671 mov ebp, esp */
  EBP = (ESP);
  /* 12266673 push ecx */
  push32((uint32_t)(ECX));
  /* 12266674 mov eax, dword ptr [0x12286a0c] */
  EAX = (r32((uint32_t)(0x12286a0c)));
  /* 12266679 push eax */
  push32((uint32_t)(EAX));
  /* 1226667a call 0x1225d430 */
  push32(0x1226667fu); f_1225d430();
  /* 1226667f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266682 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12266684 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266687 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1226668a mov dword ptr [0x12286a08], ecx */
  w32((uint32_t)(0x12286a08), (ECX));
  /* 12266690 mov edx, dword ptr [0x12286a10] */
  EDX = (r32((uint32_t)(0x12286a10)));
  /* 12266696 push edx */
  push32((uint32_t)(EDX));
  /* 12266697 call 0x1225d430 */
  push32(0x1226669cu); f_1225d430();
  /* 1226669c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226669f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122666a1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122666a4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122666a7 mov dword ptr [0x12286a00], ecx */
  w32((uint32_t)(0x12286a00), (ECX));
  /* 122666ad mov dword ptr [0x122869fc], 0 */
  w32((uint32_t)(0x122869fc), (0x0u));
  /* 122666b7 cmp dword ptr [0x12286a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122666be je 0x122666c9 */
  if (C.zf) goto L_122666c9;
  /* 122666c0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122666c7 jmp 0x122666db */
  goto L_122666db;
L_122666c9:;
  /* 122666c9 mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 122666cf push edx */
  push32((uint32_t)(EDX));
  /* 122666d0 call 0x12267110 */
  push32(0x122666d5u); f_12267110();
  /* 122666d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122666d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122666db:;
  /* 122666db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122666de mov dword ptr [0x12286a04], eax */
  w32((uint32_t)(0x12286a04), (EAX));
  /* 122666e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122666e5 push 0x12266730 */
  push32((uint32_t)(0x12266730u));
  /* 122666ea call dword ptr [0x122892f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892f8))), 0x122666f0u);
  /* 122666f0 mov ecx, dword ptr [0x12286a14] */
  ECX = (r32((uint32_t)(0x12286a14)));
  /* 122666f6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 122666fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122666fe je 0x1226671c */
  if (C.zf) goto L_1226671c;
  /* 12266700 mov edx, dword ptr [0x12286a14] */
  EDX = (r32((uint32_t)(0x12286a14)));
  /* 12266706 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1226670c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226670e je 0x1226671c */
  if (C.zf) goto L_1226671c;
  /* 12266710 mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266715 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12266718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226671a jne 0x12266726 */
  if (!C.zf) goto L_12266726;
L_1226671c:;
  /* 1226671c mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
L_12266726:;
  /* 12266726 mov esp, ebp */
  ESP = (EBP);
  /* 12266728 pop ebp */
  EBP = (pop32());
  /* 12266729 ret  */
  ESPCHK(0x12266670u, _esp0);
  ESP += 4; return;
}

/* FUN_10016730 @ 0x12266730 (804 bytes, 220 insns) */
void f_12266730(void) {
  FTRACE(0x12266730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266730 push ebp */
  push32((uint32_t)(EBP));
  /* 12266731 mov ebp, esp */
  EBP = (ESP);
  /* 12266733 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266739 push eax */
  push32((uint32_t)(EAX));
  /* 1226673a call 0x12267090 */
  push32(0x1226673fu); f_12267090();
  /* 1226673f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266742 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12266745 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12266747 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1226674a push ecx */
  push32((uint32_t)(ECX));
  /* 1226674b mov edx, dword ptr [0x12286a00] */
  EDX = (r32((uint32_t)(0x12286a00)));
  /* 12266751 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12266753 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266755 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1226675b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266761 push edx */
  push32((uint32_t)(EDX));
  /* 12266762 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266765 push eax */
  push32((uint32_t)(EAX));
  /* 12266766 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x1226676cu);
  /* 1226676c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226676e jne 0x12266784 */
  if (!C.zf) goto L_12266784;
  /* 12266770 mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
  /* 1226677a mov eax, 1 */
  EAX = (0x1u);
  /* 1226677f jmp 0x12266a4e */
  goto L_12266a4e;
L_12266784:;
  /* 12266784 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12266787 push ecx */
  push32((uint32_t)(ECX));
  /* 12266788 mov edx, dword ptr [0x12286a10] */
  EDX = (r32((uint32_t)(0x12286a10)));
  /* 1226678e push edx */
  push32((uint32_t)(EDX));
  /* 1226678f call 0x12268cd0 */
  push32(0x12266794u); f_12268cd0();
  /* 12266794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266799 jne 0x122668bf */
  if (!C.zf) goto L_122668bf;
  /* 1226679f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122667a1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122667a4 push eax */
  push32((uint32_t)(EAX));
  /* 122667a5 mov ecx, dword ptr [0x12286a08] */
  ECX = (r32((uint32_t)(0x12286a08)));
  /* 122667ab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122667ad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122667af and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 122667b5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122667bb push ecx */
  push32((uint32_t)(ECX));
  /* 122667bc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122667bf push edx */
  push32((uint32_t)(EDX));
  /* 122667c0 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x122667c6u);
  /* 122667c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122667c8 jne 0x122667de */
  if (!C.zf) goto L_122667de;
  /* 122667ca mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
  /* 122667d4 mov eax, 1 */
  EAX = (0x1u);
  /* 122667d9 jmp 0x12266a4e */
  goto L_12266a4e;
L_122667de:;
  /* 122667de lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122667e1 push eax */
  push32((uint32_t)(EAX));
  /* 122667e2 mov ecx, dword ptr [0x12286a0c] */
  ECX = (r32((uint32_t)(0x12286a0c)));
  /* 122667e8 push ecx */
  push32((uint32_t)(ECX));
  /* 122667e9 call 0x12268cd0 */
  push32(0x122667eeu); f_12268cd0();
  /* 122667ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122667f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122667f3 jne 0x12266820 */
  if (!C.zf) goto L_12266820;
  /* 122667f5 mov edx, dword ptr [0x12286a14] */
  EDX = (r32((uint32_t)(0x12286a14)));
  /* 122667fb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12266801 mov dword ptr [0x12286a14], edx */
  w32((uint32_t)(0x12286a14), (EDX));
  /* 12266807 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1226680a mov dword ptr [0x12286a18], eax */
  w32((uint32_t)(0x12286a18), (EAX));
  /* 1226680f mov ecx, dword ptr [0x12286a18] */
  ECX = (r32((uint32_t)(0x12286a18)));
  /* 12266815 mov dword ptr [0x122869fc], ecx */
  w32((uint32_t)(0x122869fc), (ECX));
  /* 1226681b jmp 0x122668bf */
  goto L_122668bf;
L_12266820:;
  /* 12266820 mov edx, dword ptr [0x12286a14] */
  EDX = (r32((uint32_t)(0x12286a14)));
  /* 12266826 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12266829 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226682b jne 0x122668bf */
  if (!C.zf) goto L_122668bf;
  /* 12266831 cmp dword ptr [0x12286a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266838 je 0x1226688d */
  if (C.zf) goto L_1226688d;
  /* 1226683a mov eax, dword ptr [0x12286a04] */
  EAX = (r32((uint32_t)(0x12286a04)));
  /* 1226683f push eax */
  push32((uint32_t)(EAX));
  /* 12266840 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12266843 push ecx */
  push32((uint32_t)(ECX));
  /* 12266844 mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 1226684a push edx */
  push32((uint32_t)(EDX));
  /* 1226684b call 0x12268da0 */
  push32(0x12266850u); f_12268da0();
  /* 12266850 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266853 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266855 jne 0x1226688d */
  if (!C.zf) goto L_1226688d;
  /* 12266857 mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 1226685c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1226685e mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
  /* 12266863 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266866 mov dword ptr [0x12286a18], ecx */
  w32((uint32_t)(0x12286a18), (ECX));
  /* 1226686c mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 12266872 push edx */
  push32((uint32_t)(EDX));
  /* 12266873 call 0x1225d430 */
  push32(0x12266878u); f_1225d430();
  /* 12266878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226687b cmp eax, dword ptr [0x12286a04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12286a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266881 jne 0x1226688b */
  if (!C.zf) goto L_1226688b;
  /* 12266883 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266886 mov dword ptr [0x122869fc], eax */
  w32((uint32_t)(0x122869fc), (EAX));
L_1226688b:;
  /* 1226688b jmp 0x122668bf */
  goto L_122668bf;
L_1226688d:;
  /* 1226688d mov ecx, dword ptr [0x12286a14] */
  ECX = (r32((uint32_t)(0x12286a14)));
  /* 12266893 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12266896 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12266898 jne 0x122668bf */
  if (!C.zf) goto L_122668bf;
  /* 1226689a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1226689d push edx */
  push32((uint32_t)(EDX));
  /* 1226689e call 0x12266dd0 */
  push32(0x122668a3u); f_12266dd0();
  /* 122668a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122668a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122668a8 je 0x122668bf */
  if (C.zf) goto L_122668bf;
  /* 122668aa mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 122668af or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 122668b1 mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
  /* 122668b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122668b9 mov dword ptr [0x12286a18], ecx */
  w32((uint32_t)(0x12286a18), (ECX));
L_122668bf:;
  /* 122668bf mov edx, dword ptr [0x12286a14] */
  EDX = (r32((uint32_t)(0x12286a14)));
  /* 122668c5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 122668cb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122668d1 je 0x12266a41 */
  if (C.zf) goto L_12266a41;
  /* 122668d7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122668d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122668dc push eax */
  push32((uint32_t)(EAX));
  /* 122668dd mov ecx, dword ptr [0x12286a08] */
  ECX = (r32((uint32_t)(0x12286a08)));
  /* 122668e3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122668e5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122668e7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 122668ed add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122668f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122668f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122668f7 push edx */
  push32((uint32_t)(EDX));
  /* 122668f8 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x122668feu);
  /* 122668fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266900 jne 0x12266916 */
  if (!C.zf) goto L_12266916;
  /* 12266902 mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
  /* 1226690c mov eax, 1 */
  EAX = (0x1u);
  /* 12266911 jmp 0x12266a4e */
  goto L_12266a4e;
L_12266916:;
  /* 12266916 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12266919 push eax */
  push32((uint32_t)(EAX));
  /* 1226691a mov ecx, dword ptr [0x12286a0c] */
  ECX = (r32((uint32_t)(0x12286a0c)));
  /* 12266920 push ecx */
  push32((uint32_t)(ECX));
  /* 12266921 call 0x12268cd0 */
  push32(0x12266926u); f_12268cd0();
  /* 12266926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226692b jne 0x122669e0 */
  if (!C.zf) goto L_122669e0;
  /* 12266931 mov edx, dword ptr [0x12286a14] */
  EDX = (r32((uint32_t)(0x12286a14)));
  /* 12266937 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1226693a mov dword ptr [0x12286a14], edx */
  w32((uint32_t)(0x12286a14), (EDX));
  /* 12266940 cmp dword ptr [0x12286a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266947 je 0x1226696a */
  if (C.zf) goto L_1226696a;
  /* 12266949 mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 1226694e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12266951 mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
  /* 12266956 cmp dword ptr [0x122869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226695d jne 0x12266968 */
  if (!C.zf) goto L_12266968;
  /* 1226695f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266962 mov dword ptr [0x122869fc], ecx */
  w32((uint32_t)(0x122869fc), (ECX));
L_12266968:;
  /* 12266968 jmp 0x122669de */
  goto L_122669de;
L_1226696a:;
  /* 1226696a cmp dword ptr [0x12286a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266971 je 0x122669bf */
  if (C.zf) goto L_122669bf;
  /* 12266973 mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 12266979 push edx */
  push32((uint32_t)(EDX));
  /* 1226697a call 0x1225d430 */
  push32(0x1226697fu); f_1225d430();
  /* 1226697f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266982 cmp eax, dword ptr [0x12286a04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12286a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266988 jne 0x122669bf */
  if (!C.zf) goto L_122669bf;
  /* 1226698a push 1 */
  push32((uint32_t)(0x1u));
  /* 1226698c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1226698f push eax */
  push32((uint32_t)(EAX));
  /* 12266990 call 0x12266e20 */
  push32(0x12266995u); f_12266e20();
  /* 12266995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226699a je 0x122669bd */
  if (C.zf) goto L_122669bd;
  /* 1226699c mov ecx, dword ptr [0x12286a14] */
  ECX = (r32((uint32_t)(0x12286a14)));
  /* 122669a2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 122669a5 mov dword ptr [0x12286a14], ecx */
  w32((uint32_t)(0x12286a14), (ECX));
  /* 122669ab cmp dword ptr [0x122869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122669b2 jne 0x122669bd */
  if (!C.zf) goto L_122669bd;
  /* 122669b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122669b7 mov dword ptr [0x122869fc], edx */
  w32((uint32_t)(0x122869fc), (EDX));
L_122669bd:;
  /* 122669bd jmp 0x122669de */
  goto L_122669de;
L_122669bf:;
  /* 122669bf mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 122669c4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122669c7 mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
  /* 122669cc cmp dword ptr [0x122869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122669d3 jne 0x122669de */
  if (!C.zf) goto L_122669de;
  /* 122669d5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122669d8 mov dword ptr [0x122869fc], ecx */
  w32((uint32_t)(0x122869fc), (ECX));
L_122669de:;
  /* 122669de jmp 0x12266a41 */
  goto L_12266a41;
L_122669e0:;
  /* 122669e0 cmp dword ptr [0x12286a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122669e7 jne 0x12266a41 */
  if (!C.zf) goto L_12266a41;
  /* 122669e9 cmp dword ptr [0x12286a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122669f0 je 0x12266a41 */
  if (C.zf) goto L_12266a41;
  /* 122669f2 mov edx, dword ptr [0x12286a04] */
  EDX = (r32((uint32_t)(0x12286a04)));
  /* 122669f8 push edx */
  push32((uint32_t)(EDX));
  /* 122669f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122669fc push eax */
  push32((uint32_t)(EAX));
  /* 122669fd mov ecx, dword ptr [0x12286a0c] */
  ECX = (r32((uint32_t)(0x12286a0c)));
  /* 12266a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12266a04 call 0x12268da0 */
  push32(0x12266a09u); f_12268da0();
  /* 12266a09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266a0e jne 0x12266a41 */
  if (!C.zf) goto L_12266a41;
  /* 12266a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12266a12 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266a15 push edx */
  push32((uint32_t)(EDX));
  /* 12266a16 call 0x12266e20 */
  push32(0x12266a1bu); f_12266e20();
  /* 12266a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266a1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266a20 je 0x12266a41 */
  if (C.zf) goto L_12266a41;
  /* 12266a22 mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266a27 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12266a2a mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
  /* 12266a2f cmp dword ptr [0x122869fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122869fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266a36 jne 0x12266a41 */
  if (!C.zf) goto L_12266a41;
  /* 12266a38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266a3b mov dword ptr [0x122869fc], ecx */
  w32((uint32_t)(0x122869fc), (ECX));
L_12266a41:;
  /* 12266a41 mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266a46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12266a49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12266a4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266a4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12266a4e:;
  /* 12266a4e mov esp, ebp */
  ESP = (EBP);
  /* 12266a50 pop ebp */
  EBP = (pop32());
  /* 12266a51 ret 4 */
  ESPCHK(0x12266730u, _esp0);
  ESP += 8; return;
}

/* FUN_10016a60 @ 0x12266a60 (116 bytes, 33 insns) */
void f_12266a60(void) {
  FTRACE(0x12266a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12266a61 mov ebp, esp */
  EBP = (ESP);
  /* 12266a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12266a64 mov eax, dword ptr [0x12286a0c] */
  EAX = (r32((uint32_t)(0x12286a0c)));
  /* 12266a69 push eax */
  push32((uint32_t)(EAX));
  /* 12266a6a call 0x1225d430 */
  push32(0x12266a6fu); f_1225d430();
  /* 12266a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266a72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12266a74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266a77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12266a7a mov dword ptr [0x12286a08], ecx */
  w32((uint32_t)(0x12286a08), (ECX));
  /* 12266a80 cmp dword ptr [0x12286a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266a87 je 0x12266a92 */
  if (C.zf) goto L_12266a92;
  /* 12266a89 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12266a90 jmp 0x12266aa4 */
  goto L_12266aa4;
L_12266a92:;
  /* 12266a92 mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 12266a98 push edx */
  push32((uint32_t)(EDX));
  /* 12266a99 call 0x12267110 */
  push32(0x12266a9eu); f_12267110();
  /* 12266a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266aa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12266aa4:;
  /* 12266aa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12266aa7 mov dword ptr [0x12286a04], eax */
  w32((uint32_t)(0x12286a04), (EAX));
  /* 12266aac push 1 */
  push32((uint32_t)(0x1u));
  /* 12266aae push 0x12266ae0 */
  push32((uint32_t)(0x12266ae0u));
  /* 12266ab3 call dword ptr [0x122892f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892f8))), 0x12266ab9u);
  /* 12266ab9 mov ecx, dword ptr [0x12286a14] */
  ECX = (r32((uint32_t)(0x12286a14)));
  /* 12266abf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12266ac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12266ac4 jne 0x12266ad0 */
  if (!C.zf) goto L_12266ad0;
  /* 12266ac6 mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
L_12266ad0:;
  /* 12266ad0 mov esp, ebp */
  ESP = (EBP);
  /* 12266ad2 pop ebp */
  EBP = (pop32());
  /* 12266ad3 ret  */
  ESPCHK(0x12266a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ae0 @ 0x12266ae0 (287 bytes, 86 insns) */
void f_12266ae0(void) {
  FTRACE(0x12266ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12266ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12266ae3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12266aea call 0x12267090 */
  push32(0x12266aefu); f_12267090();
  /* 12266aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266af2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12266af5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12266af7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12266afa push ecx */
  push32((uint32_t)(ECX));
  /* 12266afb mov edx, dword ptr [0x12286a08] */
  EDX = (r32((uint32_t)(0x12286a08)));
  /* 12266b01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12266b03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266b05 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12266b0b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266b11 push edx */
  push32((uint32_t)(EDX));
  /* 12266b12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266b15 push eax */
  push32((uint32_t)(EAX));
  /* 12266b16 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x12266b1cu);
  /* 12266b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266b1e jne 0x12266b34 */
  if (!C.zf) goto L_12266b34;
  /* 12266b20 mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
  /* 12266b2a mov eax, 1 */
  EAX = (0x1u);
  /* 12266b2f jmp 0x12266bf9 */
  goto L_12266bf9;
L_12266b34:;
  /* 12266b34 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12266b37 push ecx */
  push32((uint32_t)(ECX));
  /* 12266b38 mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 12266b3e push edx */
  push32((uint32_t)(EDX));
  /* 12266b3f call 0x12268cd0 */
  push32(0x12266b44u); f_12268cd0();
  /* 12266b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266b49 jne 0x12266b89 */
  if (!C.zf) goto L_12266b89;
  /* 12266b4b cmp dword ptr [0x12286a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266b52 jne 0x12266b66 */
  if (!C.zf) goto L_12266b66;
  /* 12266b54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12266b56 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266b59 push eax */
  push32((uint32_t)(EAX));
  /* 12266b5a call 0x12266e20 */
  push32(0x12266b5fu); f_12266e20();
  /* 12266b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266b64 je 0x12266b87 */
  if (C.zf) goto L_12266b87;
L_12266b66:;
  /* 12266b66 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266b69 mov dword ptr [0x12286a18], ecx */
  w32((uint32_t)(0x12286a18), (ECX));
  /* 12266b6f mov edx, dword ptr [0x12286a18] */
  EDX = (r32((uint32_t)(0x12286a18)));
  /* 12266b75 mov dword ptr [0x122869fc], edx */
  w32((uint32_t)(0x122869fc), (EDX));
  /* 12266b7b mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266b80 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12266b82 mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
L_12266b87:;
  /* 12266b87 jmp 0x12266bec */
  goto L_12266bec;
L_12266b89:;
  /* 12266b89 cmp dword ptr [0x12286a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266b90 jne 0x12266bec */
  if (!C.zf) goto L_12266bec;
  /* 12266b92 cmp dword ptr [0x12286a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266b99 je 0x12266bec */
  if (C.zf) goto L_12266bec;
  /* 12266b9b mov ecx, dword ptr [0x12286a04] */
  ECX = (r32((uint32_t)(0x12286a04)));
  /* 12266ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 12266ba2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12266ba5 push edx */
  push32((uint32_t)(EDX));
  /* 12266ba6 mov eax, dword ptr [0x12286a0c] */
  EAX = (r32((uint32_t)(0x12286a0c)));
  /* 12266bab push eax */
  push32((uint32_t)(EAX));
  /* 12266bac call 0x12268da0 */
  push32(0x12266bb1u); f_12268da0();
  /* 12266bb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266bb6 jne 0x12266bec */
  if (!C.zf) goto L_12266bec;
  /* 12266bb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12266bba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266bbd push ecx */
  push32((uint32_t)(ECX));
  /* 12266bbe call 0x12266e20 */
  push32(0x12266bc3u); f_12266e20();
  /* 12266bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266bc8 je 0x12266bec */
  if (C.zf) goto L_12266bec;
  /* 12266bca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266bcd mov dword ptr [0x12286a18], edx */
  w32((uint32_t)(0x12286a18), (EDX));
  /* 12266bd3 mov eax, dword ptr [0x12286a18] */
  EAX = (r32((uint32_t)(0x12286a18)));
  /* 12266bd8 mov dword ptr [0x122869fc], eax */
  w32((uint32_t)(0x122869fc), (EAX));
  /* 12266bdd mov ecx, dword ptr [0x12286a14] */
  ECX = (r32((uint32_t)(0x12286a14)));
  /* 12266be3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12266be6 mov dword ptr [0x12286a14], ecx */
  w32((uint32_t)(0x12286a14), (ECX));
L_12266bec:;
  /* 12266bec mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266bf1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12266bf4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12266bf6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266bf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12266bf9:;
  /* 12266bf9 mov esp, ebp */
  ESP = (EBP);
  /* 12266bfb pop ebp */
  EBP = (pop32());
  /* 12266bfc ret 4 */
  ESPCHK(0x12266ae0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016c00 @ 0x12266c00 (69 bytes, 20 insns) */
void f_12266c00(void) {
  FTRACE(0x12266c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12266c01 mov ebp, esp */
  EBP = (ESP);
  /* 12266c03 mov eax, dword ptr [0x12286a10] */
  EAX = (r32((uint32_t)(0x12286a10)));
  /* 12266c08 push eax */
  push32((uint32_t)(EAX));
  /* 12266c09 call 0x1225d430 */
  push32(0x12266c0eu); f_1225d430();
  /* 12266c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266c11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12266c13 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266c16 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12266c19 mov dword ptr [0x12286a00], ecx */
  w32((uint32_t)(0x12286a00), (ECX));
  /* 12266c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12266c21 push 0x12266c50 */
  push32((uint32_t)(0x12266c50u));
  /* 12266c26 call dword ptr [0x122892f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892f8))), 0x12266c2cu);
  /* 12266c2c mov edx, dword ptr [0x12286a14] */
  EDX = (r32((uint32_t)(0x12286a14)));
  /* 12266c32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12266c35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12266c37 jne 0x12266c43 */
  if (!C.zf) goto L_12266c43;
  /* 12266c39 mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
L_12266c43:;
  /* 12266c43 pop ebp */
  EBP = (pop32());
  /* 12266c44 ret  */
  ESPCHK(0x12266c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c50 @ 0x12266c50 (172 bytes, 54 insns) */
void f_12266c50(void) {
  FTRACE(0x12266c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12266c51 mov ebp, esp */
  EBP = (ESP);
  /* 12266c53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266c59 push eax */
  push32((uint32_t)(EAX));
  /* 12266c5a call 0x12267090 */
  push32(0x12266c5fu); f_12267090();
  /* 12266c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266c62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12266c65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12266c67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12266c6a push ecx */
  push32((uint32_t)(ECX));
  /* 12266c6b mov edx, dword ptr [0x12286a00] */
  EDX = (r32((uint32_t)(0x12286a00)));
  /* 12266c71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12266c73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266c75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12266c7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266c81 push edx */
  push32((uint32_t)(EDX));
  /* 12266c82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266c85 push eax */
  push32((uint32_t)(EAX));
  /* 12266c86 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x12266c8cu);
  /* 12266c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266c8e jne 0x12266ca1 */
  if (!C.zf) goto L_12266ca1;
  /* 12266c90 mov dword ptr [0x12286a14], 0 */
  w32((uint32_t)(0x12286a14), (0x0u));
  /* 12266c9a mov eax, 1 */
  EAX = (0x1u);
  /* 12266c9f jmp 0x12266cf6 */
  goto L_12266cf6;
L_12266ca1:;
  /* 12266ca1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12266ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 12266ca5 mov edx, dword ptr [0x12286a10] */
  EDX = (r32((uint32_t)(0x12286a10)));
  /* 12266cab push edx */
  push32((uint32_t)(EDX));
  /* 12266cac call 0x12268cd0 */
  push32(0x12266cb1u); f_12268cd0();
  /* 12266cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266cb6 jne 0x12266ce9 */
  if (!C.zf) goto L_12266ce9;
  /* 12266cb8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266cbb push eax */
  push32((uint32_t)(EAX));
  /* 12266cbc call 0x12266dd0 */
  push32(0x12266cc1u); f_12266dd0();
  /* 12266cc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266cc6 je 0x12266ce9 */
  if (C.zf) goto L_12266ce9;
  /* 12266cc8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12266ccb mov dword ptr [0x12286a18], ecx */
  w32((uint32_t)(0x12286a18), (ECX));
  /* 12266cd1 mov edx, dword ptr [0x12286a18] */
  EDX = (r32((uint32_t)(0x12286a18)));
  /* 12266cd7 mov dword ptr [0x122869fc], edx */
  w32((uint32_t)(0x122869fc), (EDX));
  /* 12266cdd mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266ce2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12266ce4 mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
L_12266ce9:;
  /* 12266ce9 mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266cee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12266cf1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12266cf3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266cf5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12266cf6:;
  /* 12266cf6 mov esp, ebp */
  ESP = (EBP);
  /* 12266cf8 pop ebp */
  EBP = (pop32());
  /* 12266cf9 ret 4 */
  ESPCHK(0x12266c50u, _esp0);
  ESP += 8; return;
}

/* FUN_10016d00 @ 0x12266d00 (43 bytes, 11 insns) */
void f_12266d00(void) {
  FTRACE(0x12266d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12266d01 mov ebp, esp */
  EBP = (ESP);
  /* 12266d03 mov eax, dword ptr [0x12286a14] */
  EAX = (r32((uint32_t)(0x12286a14)));
  /* 12266d08 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12266d0d mov dword ptr [0x12286a14], eax */
  w32((uint32_t)(0x12286a14), (EAX));
  /* 12266d12 call dword ptr [0x122892f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892f4))), 0x12266d18u);
  /* 12266d18 mov dword ptr [0x12286a18], eax */
  w32((uint32_t)(0x12286a18), (EAX));
  /* 12266d1d mov ecx, dword ptr [0x12286a18] */
  ECX = (r32((uint32_t)(0x12286a18)));
  /* 12266d23 mov dword ptr [0x122869fc], ecx */
  w32((uint32_t)(0x122869fc), (ECX));
  /* 12266d29 pop ebp */
  EBP = (pop32());
  /* 12266d2a ret  */
  ESPCHK(0x12266d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d30 @ 0x12266d30 (155 bytes, 57 insns) */
void f_12266d30(void) {
  FTRACE(0x12266d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12266d31 mov ebp, esp */
  EBP = (ESP);
  /* 12266d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266d36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266d3a je 0x12266d5b */
  if (C.zf) goto L_12266d5b;
  /* 12266d3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266d3f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12266d42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12266d44 je 0x12266d5b */
  if (C.zf) goto L_12266d5b;
  /* 12266d46 push 0x12282b74 */
  push32((uint32_t)(0x12282b74u));
  /* 12266d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266d4e push edx */
  push32((uint32_t)(EDX));
  /* 12266d4f call 0x12266290 */
  push32(0x12266d54u); f_12266290();
  /* 12266d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266d59 jne 0x12266d83 */
  if (!C.zf) goto L_12266d83;
L_12266d5b:;
  /* 12266d5b push 8 */
  push32((uint32_t)(0x8u));
  /* 12266d5d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12266d60 push eax */
  push32((uint32_t)(EAX));
  /* 12266d61 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12266d66 mov ecx, dword ptr [0x12286a18] */
  ECX = (r32((uint32_t)(0x12286a18)));
  /* 12266d6c push ecx */
  push32((uint32_t)(ECX));
  /* 12266d6d call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x12266d73u);
  /* 12266d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266d75 jne 0x12266d7b */
  if (!C.zf) goto L_12266d7b;
  /* 12266d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266d79 jmp 0x12266dc7 */
  goto L_12266dc7;
L_12266d7b:;
  /* 12266d7b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12266d7e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12266d81 jmp 0x12266dbb */
  goto L_12266dbb;
L_12266d83:;
  /* 12266d83 push 0x12282b70 */
  push32((uint32_t)(0x12282b70u));
  /* 12266d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266d8b push eax */
  push32((uint32_t)(EAX));
  /* 12266d8c call 0x12266290 */
  push32(0x12266d91u); f_12266290();
  /* 12266d91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266d96 jne 0x12266dbb */
  if (!C.zf) goto L_12266dbb;
  /* 12266d98 push 8 */
  push32((uint32_t)(0x8u));
  /* 12266d9a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12266d9d push ecx */
  push32((uint32_t)(ECX));
  /* 12266d9e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12266da0 mov edx, dword ptr [0x12286a18] */
  EDX = (r32((uint32_t)(0x12286a18)));
  /* 12266da6 push edx */
  push32((uint32_t)(EDX));
  /* 12266da7 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x12266dadu);
  /* 12266dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266daf jne 0x12266db5 */
  if (!C.zf) goto L_12266db5;
  /* 12266db1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266db3 jmp 0x12266dc7 */
  goto L_12266dc7;
L_12266db5:;
  /* 12266db5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12266db8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12266dbb:;
  /* 12266dbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266dbe push ecx */
  push32((uint32_t)(ECX));
  /* 12266dbf call 0x12268eb0 */
  push32(0x12266dc4u); f_12268eb0();
  /* 12266dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12266dc7:;
  /* 12266dc7 mov esp, ebp */
  ESP = (EBP);
  /* 12266dc9 pop ebp */
  EBP = (pop32());
  /* 12266dca ret  */
  ESPCHK(0x12266d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016dd0 @ 0x12266dd0 (79 bytes, 26 insns) */
void f_12266dd0(void) {
  FTRACE(0x12266dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12266dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12266dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266dd6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12266dda mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12266dde mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12266de5 jmp 0x12266df0 */
  goto L_12266df0;
L_12266de7:;
  /* 12266de7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12266dea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266ded mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12266df0:;
  /* 12266df0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266df4 jae 0x12266e16 */
  if (!C.cf) goto L_12266e16;
  /* 12266df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12266df9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12266dff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12266e02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12266e04 mov cx, word ptr [eax*2 + 0x122859c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x122859c4)));
  /* 12266e0c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266e0e jne 0x12266e14 */
  if (!C.zf) goto L_12266e14;
  /* 12266e10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266e12 jmp 0x12266e1b */
  goto L_12266e1b;
L_12266e14:;
  /* 12266e14 jmp 0x12266de7 */
  goto L_12266de7;
L_12266e16:;
  /* 12266e16 mov eax, 1 */
  EAX = (0x1u);
L_12266e1b:;
  /* 12266e1b mov esp, ebp */
  ESP = (EBP);
  /* 12266e1d pop ebp */
  EBP = (pop32());
  /* 12266e1e ret  */
  ESPCHK(0x12266dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e20 @ 0x12266e20 (135 bytes, 48 insns) */
void f_12266e20(void) {
  FTRACE(0x12266e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12266e21 mov ebp, esp */
  EBP = (ESP);
  /* 12266e23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266e26 push esi */
  push32((uint32_t)(ESI));
  /* 12266e27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266e2a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12266e2f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12266e34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12266e39 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12266e3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12266e41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12266e44 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12266e46 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12266e49 push ecx */
  push32((uint32_t)(ECX));
  /* 12266e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 12266e4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12266e4f push edx */
  push32((uint32_t)(EDX));
  /* 12266e50 call dword ptr [0x12286a1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12286a1c))), 0x12266e56u);
  /* 12266e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266e58 jne 0x12266e5e */
  if (!C.zf) goto L_12266e5e;
  /* 12266e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266e5c jmp 0x12266ea2 */
  goto L_12266ea2;
L_12266e5e:;
  /* 12266e5e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12266e61 push eax */
  push32((uint32_t)(EAX));
  /* 12266e62 call 0x12267090 */
  push32(0x12266e67u); f_12267090();
  /* 12266e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266e6a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266e6d je 0x12266e9d */
  if (C.zf) goto L_12266e9d;
  /* 12266e6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266e73 je 0x12266e9d */
  if (C.zf) goto L_12266e9d;
  /* 12266e75 mov ecx, dword ptr [0x12286a0c] */
  ECX = (r32((uint32_t)(0x12286a0c)));
  /* 12266e7b push ecx */
  push32((uint32_t)(ECX));
  /* 12266e7c call 0x12267110 */
  push32(0x12266e81u); f_12267110();
  /* 12266e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266e84 mov esi, eax */
  ESI = (EAX);
  /* 12266e86 mov edx, dword ptr [0x12286a0c] */
  EDX = (r32((uint32_t)(0x12286a0c)));
  /* 12266e8c push edx */
  push32((uint32_t)(EDX));
  /* 12266e8d call 0x1225d430 */
  push32(0x12266e92u); f_1225d430();
  /* 12266e92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12266e95 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266e97 jne 0x12266e9d */
  if (!C.zf) goto L_12266e9d;
  /* 12266e99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12266e9b jmp 0x12266ea2 */
  goto L_12266ea2;
L_12266e9d:;
  /* 12266e9d mov eax, 1 */
  EAX = (0x1u);
L_12266ea2:;
  /* 12266ea2 pop esi */
  ESI = (pop32());
  /* 12266ea3 mov esp, ebp */
  ESP = (EBP);
  /* 12266ea5 pop ebp */
  EBP = (pop32());
  /* 12266ea6 ret  */
  ESPCHK(0x12266e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016eb0 @ 0x12266eb0 (77 bytes, 18 insns) */
void f_12266eb0(void) {
  FTRACE(0x12266eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12266eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12266eb3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266eb9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12266ec3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12266ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12266eca call dword ptr [0x122892f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892f0))), 0x12266ed0u);
  /* 12266ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12266ed2 je 0x12266ee9 */
  if (C.zf) goto L_12266ee9;
  /* 12266ed4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266edb jne 0x12266ee9 */
  if (!C.zf) goto L_12266ee9;
  /* 12266edd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12266ee7 jmp 0x12266ef3 */
  goto L_12266ef3;
L_12266ee9:;
  /* 12266ee9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12266ef3:;
  /* 12266ef3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12266ef9 mov esp, ebp */
  ESP = (EBP);
  /* 12266efb pop ebp */
  EBP = (pop32());
  /* 12266efc ret  */
  ESPCHK(0x12266eb0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12266f00 (388 bytes, 118 insns) */
void f_12266f00(void) {
  FTRACE(0x12266f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12266f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12266f01 mov ebp, esp */
  EBP = (ESP);
  /* 12266f03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266f06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12266f0d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12266f14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12266f1b:;
  /* 12266f1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12266f1e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f21 jg 0x12267068 */
  if ((!C.zf&&C.sf==C.of)) goto L_12267068;
  /* 12266f27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12266f2a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266f2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12266f2e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12266f30 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12266f32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12266f35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266f38 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12266f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12266f3e cmp edx, dword ptr [ecx + 0x12285520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12285520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f44 jne 0x1226703e */
  if (!C.zf) goto L_1226703e;
  /* 12266f4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12266f4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12266f50 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f54 ja 0x12266f77 */
  if ((!C.cf&&!C.zf)) goto L_12266f77;
  /* 12266f56 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f5a je 0x12266fe9 */
  if (C.zf) goto L_12266fe9;
  /* 12266f60 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f64 je 0x12266f94 */
  if (C.zf) goto L_12266f94;
  /* 12266f66 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f6a je 0x12266fb6 */
  if (C.zf) goto L_12266fb6;
  /* 12266f6c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f70 je 0x12266fd8 */
  if (C.zf) goto L_12266fd8;
  /* 12266f72 jmp 0x12267008 */
  goto L_12267008;
L_12266f77:;
  /* 12266f77 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f7e je 0x12266fa5 */
  if (C.zf) goto L_12266fa5;
  /* 12266f80 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f87 je 0x12266fc7 */
  if (C.zf) goto L_12266fc7;
  /* 12266f89 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12266f90 je 0x12266ffa */
  if (C.zf) goto L_12266ffa;
  /* 12266f92 jmp 0x12267008 */
  goto L_12267008;
L_12266f94:;
  /* 12266f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266f97 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12266f9a add ecx, 0x12285524 */
  { uint32_t _a=(ECX),_b=(0x12285524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266fa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12266fa3 jmp 0x12267008 */
  goto L_12267008;
L_12266fa5:;
  /* 12266fa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266fa8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12266fab mov eax, dword ptr [edx + 0x1228552c] */
  EAX = (r32((uint32_t)(EDX + 0x1228552c)));
  /* 12266fb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12266fb4 jmp 0x12267008 */
  goto L_12267008;
L_12266fb6:;
  /* 12266fb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266fb9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12266fbc add ecx, 0x12285530 */
  { uint32_t _a=(ECX),_b=(0x12285530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266fc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12266fc5 jmp 0x12267008 */
  goto L_12267008;
L_12266fc7:;
  /* 12266fc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266fca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12266fcd mov eax, dword ptr [edx + 0x12285534] */
  EAX = (r32((uint32_t)(EDX + 0x12285534)));
  /* 12266fd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12266fd6 jmp 0x12267008 */
  goto L_12267008;
L_12266fd8:;
  /* 12266fd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266fdb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12266fde add ecx, 0x12285538 */
  { uint32_t _a=(ECX),_b=(0x12285538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266fe4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12266fe7 jmp 0x12267008 */
  goto L_12267008;
L_12266fe9:;
  /* 12266fe9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266fec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12266fef add edx, 0x1228553c */
  { uint32_t _a=(EDX),_b=(0x1228553cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12266ff5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12266ff8 jmp 0x12267008 */
  goto L_12267008;
L_12266ffa:;
  /* 12266ffa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12266ffd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12267000 add eax, 0x12285544 */
  { uint32_t _a=(EAX),_b=(0x12285544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267005 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12267008:;
  /* 12267008 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226700c je 0x12267014 */
  if (C.zf) goto L_12267014;
  /* 1226700e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267012 jge 0x12267016 */
  if ((C.sf==C.of)) goto L_12267016;
L_12267014:;
  /* 12267014 jmp 0x12267068 */
  goto L_12267068;
L_12267016:;
  /* 12267016 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226701c push ecx */
  push32((uint32_t)(ECX));
  /* 1226701d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12267020 push edx */
  push32((uint32_t)(EDX));
  /* 12267021 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267024 push eax */
  push32((uint32_t)(EAX));
  /* 12267025 call 0x1225de20 */
  push32(0x1226702au); f_1225de20();
  /* 1226702a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226702d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267030 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267033 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12267037 mov eax, 1 */
  EAX = (0x1u);
  /* 1226703c jmp 0x1226707e */
  goto L_1226707e;
L_1226703e:;
  /* 1226703e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267041 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12267044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267047 cmp eax, dword ptr [edx + 0x12285520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12285520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226704d jae 0x1226705a */
  if (!C.cf) goto L_1226705a;
  /* 1226704f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267052 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267055 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12267058 jmp 0x12267063 */
  goto L_12267063;
L_1226705a:;
  /* 1226705a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226705d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267060 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12267063:;
  /* 12267063 jmp 0x12266f1b */
  goto L_12266f1b;
L_12267068:;
  /* 12267068 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226706b push eax */
  push32((uint32_t)(EAX));
  /* 1226706c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226706f push ecx */
  push32((uint32_t)(ECX));
  /* 12267070 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267073 push edx */
  push32((uint32_t)(EDX));
  /* 12267074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267077 push eax */
  push32((uint32_t)(EAX));
  /* 12267078 call dword ptr [0x122892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892fc))), 0x1226707eu);
L_1226707e:;
  /* 1226707e mov esp, ebp */
  ESP = (EBP);
  /* 12267080 pop ebp */
  EBP = (pop32());
  /* 12267081 ret 0x10 */
  ESPCHK(0x12266f00u, _esp0);
  ESP += 20; return;
}

/* FUN_10017090 @ 0x12267090 (118 bytes, 42 insns) */
void f_12267090(void) {
  FTRACE(0x12267090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267090 push ebp */
  push32((uint32_t)(EBP));
  /* 12267091 mov ebp, esp */
  EBP = (ESP);
  /* 12267093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267096 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1226709d:;
  /* 1226709d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122670a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122670a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 122670a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122670a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122670ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122670af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122670b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122670b4 je 0x122670ff */
  if (C.zf) goto L_122670ff;
  /* 122670b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122670ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122670bd jl 0x122670d2 */
  if ((C.sf!=C.of)) goto L_122670d2;
  /* 122670bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122670c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122670c6 jg 0x122670d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_122670d2;
  /* 122670c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122670cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122670cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 122670d0 jmp 0x122670ec */
  goto L_122670ec;
L_122670d2:;
  /* 122670d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122670d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122670d9 jl 0x122670ec */
  if ((C.sf!=C.of)) goto L_122670ec;
  /* 122670db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122670df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122670e2 jg 0x122670ec */
  if ((!C.zf&&C.sf==C.of)) goto L_122670ec;
  /* 122670e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122670e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122670e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_122670ec:;
  /* 122670ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122670ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 122670f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122670f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 122670fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122670fd jmp 0x1226709d */
  goto L_1226709d;
L_122670ff:;
  /* 122670ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267102 mov esp, ebp */
  ESP = (EBP);
  /* 12267104 pop ebp */
  EBP = (pop32());
  /* 12267105 ret  */
  ESPCHK(0x12267090u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12267110 (101 bytes, 36 insns) */
void f_12267110(void) {
  FTRACE(0x12267110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267110 push ebp */
  push32((uint32_t)(EBP));
  /* 12267111 mov ebp, esp */
  EBP = (ESP);
  /* 12267113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267116 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1226711d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267120 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12267122 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12267125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267128 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226712b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1226712e:;
  /* 1226712e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12267132 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267135 jl 0x12267140 */
  if ((C.sf!=C.of)) goto L_12267140;
  /* 12267137 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1226713b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226713e jle 0x12267152 */
  if ((C.zf||C.sf!=C.of)) goto L_12267152;
L_12267140:;
  /* 12267140 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12267144 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267147 jl 0x1226716e */
  if ((C.sf!=C.of)) goto L_1226716e;
  /* 12267149 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1226714d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267150 jg 0x1226716e */
  if ((!C.zf&&C.sf==C.of)) goto L_1226716e;
L_12267152:;
  /* 12267152 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12267155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267158 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1226715b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226715e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12267160 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12267163 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267166 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267169 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1226716c jmp 0x1226712e */
  goto L_1226712e;
L_1226716e:;
  /* 1226716e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12267171 mov esp, ebp */
  ESP = (EBP);
  /* 12267173 pop ebp */
  EBP = (pop32());
  /* 12267174 ret  */
  ESPCHK(0x12267110u, _esp0);
  ESP += 4; return;
}

/* FUN_10017180 @ 0x12267180 (122 bytes, 39 insns) */
void f_12267180(void) {
  FTRACE(0x12267180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267180 push ebp */
  push32((uint32_t)(EBP));
  /* 12267181 mov ebp, esp */
  EBP = (ESP);
  /* 12267183 push ecx */
  push32((uint32_t)(ECX));
  /* 12267184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267187 cmp eax, dword ptr [0x1228829c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1228829c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226718d jae 0x122671b1 */
  if (!C.cf) goto L_122671b1;
  /* 1226718f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267192 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12267195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267198 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1226719b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226719e mov eax, dword ptr [ecx*4 + 0x12288160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12288160)));
  /* 122671a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122671aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122671ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122671af jne 0x122671cc */
  if (!C.zf) goto L_122671cc;
L_122671b1:;
  /* 122671b1 call 0x122624d0 */
  push32(0x122671b6u); f_122624d0();
  /* 122671b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122671bc call 0x122624e0 */
  push32(0x122671c1u); f_122624e0();
  /* 122671c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122671c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122671ca jmp 0x122671f6 */
  goto L_122671f6;
L_122671cc:;
  /* 122671cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122671cf push edx */
  push32((uint32_t)(EDX));
  /* 122671d0 call 0x12263cf0 */
  push32(0x122671d5u); f_12263cf0();
  /* 122671d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122671d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122671db push eax */
  push32((uint32_t)(EAX));
  /* 122671dc call 0x12267200 */
  push32(0x122671e1u); f_12267200();
  /* 122671e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122671e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122671e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122671ea push ecx */
  push32((uint32_t)(ECX));
  /* 122671eb call 0x12263d80 */
  push32(0x122671f0u); f_12263d80();
  /* 122671f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122671f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122671f6:;
  /* 122671f6 mov esp, ebp */
  ESP = (EBP);
  /* 122671f8 pop ebp */
  EBP = (pop32());
  /* 122671f9 ret  */
  ESPCHK(0x12267180u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12267200 (170 bytes, 59 insns) */
void f_12267200(void) {
  FTRACE(0x12267200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267200 push ebp */
  push32((uint32_t)(EBP));
  /* 12267201 mov ebp, esp */
  EBP = (ESP);
  /* 12267203 push ecx */
  push32((uint32_t)(ECX));
  /* 12267204 push esi */
  push32((uint32_t)(ESI));
  /* 12267205 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267208 push eax */
  push32((uint32_t)(EAX));
  /* 12267209 call 0x12263b70 */
  push32(0x1226720eu); f_12263b70();
  /* 1226720e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267211 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267214 je 0x12267253 */
  if (C.zf) goto L_12267253;
  /* 12267216 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226721a je 0x12267222 */
  if (C.zf) goto L_12267222;
  /* 1226721c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267220 jne 0x1226723c */
  if (!C.zf) goto L_1226723c;
L_12267222:;
  /* 12267222 push 1 */
  push32((uint32_t)(0x1u));
  /* 12267224 call 0x12263b70 */
  push32(0x12267229u); f_12263b70();
  /* 12267229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226722c mov esi, eax */
  ESI = (EAX);
  /* 1226722e push 2 */
  push32((uint32_t)(0x2u));
  /* 12267230 call 0x12263b70 */
  push32(0x12267235u); f_12263b70();
  /* 12267235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267238 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226723a je 0x12267253 */
  if (C.zf) goto L_12267253;
L_1226723c:;
  /* 1226723c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226723f push ecx */
  push32((uint32_t)(ECX));
  /* 12267240 call 0x12263b70 */
  push32(0x12267245u); f_12263b70();
  /* 12267245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267248 push eax */
  push32((uint32_t)(EAX));
  /* 12267249 call dword ptr [0x122892ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892ec))), 0x1226724fu);
  /* 1226724f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12267251 je 0x1226725c */
  if (C.zf) goto L_1226725c;
L_12267253:;
  /* 12267253 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226725a jmp 0x12267265 */
  goto L_12267265;
L_1226725c:;
  /* 1226725c call dword ptr [0x122893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893dc))), 0x12267262u);
  /* 12267262 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12267265:;
  /* 12267265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267268 push edx */
  push32((uint32_t)(EDX));
  /* 12267269 call 0x12263a90 */
  push32(0x1226726eu); f_12263a90();
  /* 1226726e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267274 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12267277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226727a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1226727d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12267280 mov edx, dword ptr [eax*4 + 0x12288160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12288160)));
  /* 12267287 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1226728c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267290 je 0x122672a3 */
  if (C.zf) goto L_122672a3;
  /* 12267292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267295 push eax */
  push32((uint32_t)(EAX));
  /* 12267296 call 0x12262430 */
  push32(0x1226729bu); f_12262430();
  /* 1226729b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226729e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122672a1 jmp 0x122672a5 */
  goto L_122672a5;
L_122672a3:;
  /* 122672a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122672a5:;
  /* 122672a5 pop esi */
  ESI = (pop32());
  /* 122672a6 mov esp, ebp */
  ESP = (EBP);
  /* 122672a8 pop ebp */
  EBP = (pop32());
  /* 122672a9 ret  */
  ESPCHK(0x12267200u, _esp0);
  ESP += 4; return;
}

/* FUN_100172b0 @ 0x122672b0 (146 bytes, 52 insns) */
void f_122672b0(void) {
  FTRACE(0x122672b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122672b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122672b1 mov ebp, esp */
  EBP = (ESP);
  /* 122672b3 push ebx */
  push32((uint32_t)(EBX));
  /* 122672b4 push esi */
  push32((uint32_t)(ESI));
  /* 122672b5 push edi */
  push32((uint32_t)(EDI));
L_122672b6:;
  /* 122672b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122672ba jne 0x122672da */
  if (!C.zf) goto L_122672da;
  /* 122672bc push 0x122824b0 */
  push32((uint32_t)(0x122824b0u));
  /* 122672c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122672c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 122672c5 push 0x12282b78 */
  push32((uint32_t)(0x12282b78u));
  /* 122672ca push 2 */
  push32((uint32_t)(0x2u));
  /* 122672cc call 0x122596c0 */
  push32(0x122672d1u); f_122596c0();
  /* 122672d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122672d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122672d7 jne 0x122672da */
  if (!C.zf) goto L_122672da;
  /* 122672d9 int3  */
  x86_unimpl("int3 @ 0x122672d9");
L_122672da:;
  /* 122672da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122672dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122672de jne 0x122672b6 */
  if (!C.zf) goto L_122672b6;
  /* 122672e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122672e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122672e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 122672ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122672ee je 0x1226733d */
  if (C.zf) goto L_1226733d;
  /* 122672f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122672f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122672f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 122672f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122672fb je 0x1226733d */
  if (C.zf) goto L_1226733d;
  /* 122672fd push 2 */
  push32((uint32_t)(0x2u));
  /* 122672ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267302 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12267305 push eax */
  push32((uint32_t)(EAX));
  /* 12267306 call 0x1225b090 */
  push32(0x1226730bu); f_1225b090();
  /* 1226730b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226730e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267311 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12267314 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1226731a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226731d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12267320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267323 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12267329 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226732c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12267333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267336 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1226733d:;
  /* 1226733d pop edi */
  EDI = (pop32());
  /* 1226733e pop esi */
  ESI = (pop32());
  /* 1226733f pop ebx */
  EBX = (pop32());
  /* 12267340 pop ebp */
  EBP = (pop32());
  /* 12267341 ret  */
  ESPCHK(0x122672b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017350 @ 0x12267350 (289 bytes, 97 insns) */
void f_12267350(void) {
  FTRACE(0x12267350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267350 push ebp */
  push32((uint32_t)(EBP));
  /* 12267351 mov ebp, esp */
  EBP = (ESP);
  /* 12267353 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267356 push esi */
  push32((uint32_t)(ESI));
  /* 12267357 mov eax, dword ptr [0x12285c98] */
  EAX = (r32((uint32_t)(0x12285c98)));
  /* 1226735c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226735f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12267366 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1226736d jmp 0x12267378 */
  goto L_12267378;
L_1226736f:;
  /* 1226736f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267372 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267375 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12267378:;
  /* 12267378 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226737c jae 0x122673b1 */
  if (!C.cf) goto L_122673b1;
  /* 1226737e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267381 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267384 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12267387 push ecx */
  push32((uint32_t)(ECX));
  /* 12267388 call 0x1225d430 */
  push32(0x1226738du); f_1225d430();
  /* 1226738d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267390 mov esi, eax */
  ESI = (EAX);
  /* 12267392 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267395 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267398 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1226739c push ecx */
  push32((uint32_t)(ECX));
  /* 1226739d call 0x1225d430 */
  push32(0x122673a2u); f_1225d430();
  /* 122673a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122673a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122673a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122673ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122673af jmp 0x1226736f */
  goto L_1226736f;
L_122673b1:;
  /* 122673b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122673b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122673b7 push eax */
  push32((uint32_t)(EAX));
  /* 122673b8 call 0x1225a5e0 */
  push32(0x122673bdu); f_1225a5e0();
  /* 122673bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122673c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122673c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122673c7 je 0x12267469 */
  if (C.zf) goto L_12267469;
  /* 122673cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122673d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122673d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122673da jmp 0x122673e5 */
  goto L_122673e5;
L_122673dc:;
  /* 122673dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122673df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122673e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122673e5:;
  /* 122673e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122673e9 jae 0x1226745a */
  if (!C.cf) goto L_1226745a;
  /* 122673eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122673ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 122673f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122673f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122673f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122673fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122673fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267400 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12267403 push ecx */
  push32((uint32_t)(ECX));
  /* 12267404 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267407 push edx */
  push32((uint32_t)(EDX));
  /* 12267408 call 0x1225d5b0 */
  push32(0x1226740du); f_1225d5b0();
  /* 1226740d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267410 push eax */
  push32((uint32_t)(EAX));
  /* 12267411 call 0x1225d430 */
  push32(0x12267416u); f_1225d430();
  /* 12267416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267419 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226741c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226741e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12267421 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267424 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12267427 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226742a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226742d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12267430 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267433 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267436 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1226743a push eax */
  push32((uint32_t)(EAX));
  /* 1226743b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226743e push ecx */
  push32((uint32_t)(ECX));
  /* 1226743f call 0x1225d5b0 */
  push32(0x12267444u); f_1225d5b0();
  /* 12267444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267447 push eax */
  push32((uint32_t)(EAX));
  /* 12267448 call 0x1225d430 */
  push32(0x1226744du); f_1225d430();
  /* 1226744d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267450 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267453 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267455 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12267458 jmp 0x122673dc */
  goto L_122673dc;
L_1226745a:;
  /* 1226745a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226745d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12267460 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267463 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267466 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12267469:;
  /* 12267469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226746c pop esi */
  ESI = (pop32());
  /* 1226746d mov esp, ebp */
  ESP = (EBP);
  /* 1226746f pop ebp */
  EBP = (pop32());
  /* 12267470 ret  */
  ESPCHK(0x12267350u, _esp0);
  ESP += 4; return;
}

/* FUN_10017480 @ 0x12267480 (291 bytes, 97 insns) */
void f_12267480(void) {
  FTRACE(0x12267480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267480 push ebp */
  push32((uint32_t)(EBP));
  /* 12267481 mov ebp, esp */
  EBP = (ESP);
  /* 12267483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267486 push esi */
  push32((uint32_t)(ESI));
  /* 12267487 mov eax, dword ptr [0x12285c98] */
  EAX = (r32((uint32_t)(0x12285c98)));
  /* 1226748c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226748f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12267496 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1226749d jmp 0x122674a8 */
  goto L_122674a8;
L_1226749f:;
  /* 1226749f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122674a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122674a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122674a8:;
  /* 122674a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122674ac jae 0x122674e2 */
  if (!C.cf) goto L_122674e2;
  /* 122674ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122674b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122674b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 122674b8 push ecx */
  push32((uint32_t)(ECX));
  /* 122674b9 call 0x1225d430 */
  push32(0x122674beu); f_1225d430();
  /* 122674be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122674c1 mov esi, eax */
  ESI = (EAX);
  /* 122674c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122674c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122674c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 122674cd push ecx */
  push32((uint32_t)(ECX));
  /* 122674ce call 0x1225d430 */
  push32(0x122674d3u); f_1225d430();
  /* 122674d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122674d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122674d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122674dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122674e0 jmp 0x1226749f */
  goto L_1226749f;
L_122674e2:;
  /* 122674e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122674e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122674e8 push eax */
  push32((uint32_t)(EAX));
  /* 122674e9 call 0x1225a5e0 */
  push32(0x122674eeu); f_1225a5e0();
  /* 122674ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122674f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122674f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122674f8 je 0x1226759b */
  if (C.zf) goto L_1226759b;
  /* 122674fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267501 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12267504 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1226750b jmp 0x12267516 */
  goto L_12267516;
L_1226750d:;
  /* 1226750d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267510 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267513 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12267516:;
  /* 12267516 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226751a jae 0x1226758c */
  if (!C.cf) goto L_1226758c;
  /* 1226751c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226751f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12267522 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267528 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1226752b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226752e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267531 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12267535 push ecx */
  push32((uint32_t)(ECX));
  /* 12267536 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267539 push edx */
  push32((uint32_t)(EDX));
  /* 1226753a call 0x1225d5b0 */
  push32(0x1226753fu); f_1225d5b0();
  /* 1226753f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267542 push eax */
  push32((uint32_t)(EAX));
  /* 12267543 call 0x1225d430 */
  push32(0x12267548u); f_1225d430();
  /* 12267548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226754b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226754e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267550 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12267553 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267556 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12267559 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226755c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226755f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12267562 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267565 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267568 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1226756c push eax */
  push32((uint32_t)(EAX));
  /* 1226756d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267570 push ecx */
  push32((uint32_t)(ECX));
  /* 12267571 call 0x1225d5b0 */
  push32(0x12267576u); f_1225d5b0();
  /* 12267576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267579 push eax */
  push32((uint32_t)(EAX));
  /* 1226757a call 0x1225d430 */
  push32(0x1226757fu); f_1225d430();
  /* 1226757f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267582 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267585 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267587 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1226758a jmp 0x1226750d */
  goto L_1226750d;
L_1226758c:;
  /* 1226758c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226758f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12267592 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267598 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1226759b:;
  /* 1226759b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226759e pop esi */
  ESI = (pop32());
  /* 1226759f mov esp, ebp */
  ESP = (EBP);
  /* 122675a1 pop ebp */
  EBP = (pop32());
  /* 122675a2 ret  */
  ESPCHK(0x12267480u, _esp0);
  ESP += 4; return;
}

/* FUN_100175b0 @ 0x122675b0 (878 bytes, 273 insns) */
void f_122675b0(void) {
  FTRACE(0x122675b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122675b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122675b1 mov ebp, esp */
  EBP = (ESP);
  /* 122675b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122675b6 push esi */
  push32((uint32_t)(ESI));
  /* 122675b7 mov eax, dword ptr [0x12285c98] */
  EAX = (r32((uint32_t)(0x12285c98)));
  /* 122675bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122675bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122675c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122675cd jmp 0x122675d8 */
  goto L_122675d8;
L_122675cf:;
  /* 122675cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122675d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122675d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122675d8:;
  /* 122675d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122675dc jae 0x12267611 */
  if (!C.cf) goto L_12267611;
  /* 122675de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122675e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122675e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122675e7 push ecx */
  push32((uint32_t)(ECX));
  /* 122675e8 call 0x1225d430 */
  push32(0x122675edu); f_1225d430();
  /* 122675ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122675f0 mov esi, eax */
  ESI = (EAX);
  /* 122675f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122675f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122675f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 122675fc push ecx */
  push32((uint32_t)(ECX));
  /* 122675fd call 0x1225d430 */
  push32(0x12267602u); f_1225d430();
  /* 12267602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267605 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267608 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1226760c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1226760f jmp 0x122675cf */
  goto L_122675cf;
L_12267611:;
  /* 12267611 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12267618 jmp 0x12267623 */
  goto L_12267623;
L_1226761a:;
  /* 1226761a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226761d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267620 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12267623:;
  /* 12267623 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267627 jae 0x1226765d */
  if (!C.cf) goto L_1226765d;
  /* 12267629 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226762c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226762f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12267633 push eax */
  push32((uint32_t)(EAX));
  /* 12267634 call 0x1225d430 */
  push32(0x12267639u); f_1225d430();
  /* 12267639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226763c mov esi, eax */
  ESI = (EAX);
  /* 1226763e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267641 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267644 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12267648 push eax */
  push32((uint32_t)(EAX));
  /* 12267649 call 0x1225d430 */
  push32(0x1226764eu); f_1225d430();
  /* 1226764e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267651 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267654 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12267658 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1226765b jmp 0x1226761a */
  goto L_1226761a;
L_1226765d:;
  /* 1226765d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267660 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12267666 push eax */
  push32((uint32_t)(EAX));
  /* 12267667 call 0x1225d430 */
  push32(0x1226766cu); f_1225d430();
  /* 1226766c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226766f mov esi, eax */
  ESI = (EAX);
  /* 12267671 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267674 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1226767a push edx */
  push32((uint32_t)(EDX));
  /* 1226767b call 0x1225d430 */
  push32(0x12267680u); f_1225d430();
  /* 12267680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267683 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267686 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1226768a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1226768d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267690 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12267696 push edx */
  push32((uint32_t)(EDX));
  /* 12267697 call 0x1225d430 */
  push32(0x1226769cu); f_1225d430();
  /* 1226769c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226769f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122676a2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122676a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122676a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122676ac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 122676b2 push ecx */
  push32((uint32_t)(ECX));
  /* 122676b3 call 0x1225d430 */
  push32(0x122676b8u); f_1225d430();
  /* 122676b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122676bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122676be lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122676c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122676c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122676c8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 122676ce push edx */
  push32((uint32_t)(EDX));
  /* 122676cf call 0x1225d430 */
  push32(0x122676d4u); f_1225d430();
  /* 122676d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122676d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122676da lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122676de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122676e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122676e4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122676e9 push eax */
  push32((uint32_t)(EAX));
  /* 122676ea call 0x1225a5e0 */
  push32(0x122676efu); f_1225a5e0();
  /* 122676ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122676f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122676f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122676f9 je 0x12267916 */
  if (C.zf) goto L_12267916;
  /* 122676ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267702 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12267705 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267708 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226770e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12267711 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12267716 mov eax, dword ptr [0x12285c98] */
  EAX = (r32((uint32_t)(0x12285c98)));
  /* 1226771b push eax */
  push32((uint32_t)(EAX));
  /* 1226771c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226771f push ecx */
  push32((uint32_t)(ECX));
  /* 12267720 call 0x12260ee0 */
  push32(0x12267725u); f_12260ee0();
  /* 12267725 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267728 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1226772f jmp 0x1226773a */
  goto L_1226773a;
L_12267731:;
  /* 12267731 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267734 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267737 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1226773a:;
  /* 1226773a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226773e jae 0x122677ae */
  if (!C.cf) goto L_122677ae;
  /* 12267740 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267743 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12267746 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267749 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1226774c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226774f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267752 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12267755 push edx */
  push32((uint32_t)(EDX));
  /* 12267756 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267759 push eax */
  push32((uint32_t)(EAX));
  /* 1226775a call 0x1225d5b0 */
  push32(0x1226775fu); f_1225d5b0();
  /* 1226775f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267762 push eax */
  push32((uint32_t)(EAX));
  /* 12267763 call 0x1225d430 */
  push32(0x12267768u); f_1225d430();
  /* 12267768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226776b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226776e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12267772 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12267775 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267778 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226777b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226777e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12267782 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267785 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267788 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1226778c push edx */
  push32((uint32_t)(EDX));
  /* 1226778d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267790 push eax */
  push32((uint32_t)(EAX));
  /* 12267791 call 0x1225d5b0 */
  push32(0x12267796u); f_1225d5b0();
  /* 12267796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267799 push eax */
  push32((uint32_t)(EAX));
  /* 1226779a call 0x1225d430 */
  push32(0x1226779fu); f_1225d430();
  /* 1226779f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122677a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122677a5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122677a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122677ac jmp 0x12267731 */
  goto L_12267731;
L_122677ae:;
  /* 122677ae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122677b5 jmp 0x122677c0 */
  goto L_122677c0;
L_122677b7:;
  /* 122677b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122677ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122677bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122677c0:;
  /* 122677c0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122677c4 jae 0x12267836 */
  if (!C.cf) goto L_12267836;
  /* 122677c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122677c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122677cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122677cf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 122677d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122677d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122677d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 122677dd push eax */
  push32((uint32_t)(EAX));
  /* 122677de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122677e1 push ecx */
  push32((uint32_t)(ECX));
  /* 122677e2 call 0x1225d5b0 */
  push32(0x122677e7u); f_1225d5b0();
  /* 122677e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122677ea push eax */
  push32((uint32_t)(EAX));
  /* 122677eb call 0x1225d430 */
  push32(0x122677f0u); f_1225d430();
  /* 122677f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122677f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122677f6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122677fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122677fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12267800 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12267803 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267806 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1226780a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226780d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267810 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12267814 push eax */
  push32((uint32_t)(EAX));
  /* 12267815 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267818 push ecx */
  push32((uint32_t)(ECX));
  /* 12267819 call 0x1225d5b0 */
  push32(0x1226781eu); f_1225d5b0();
  /* 1226781e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267821 push eax */
  push32((uint32_t)(EAX));
  /* 12267822 call 0x1225d430 */
  push32(0x12267827u); f_1225d430();
  /* 12267827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226782a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226782d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12267831 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12267834 jmp 0x122677b7 */
  goto L_122677b7;
L_12267836:;
  /* 12267836 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12267839 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226783c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12267842 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267845 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1226784b push ecx */
  push32((uint32_t)(ECX));
  /* 1226784c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226784f push edx */
  push32((uint32_t)(EDX));
  /* 12267850 call 0x1225d5b0 */
  push32(0x12267855u); f_1225d5b0();
  /* 12267855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267858 push eax */
  push32((uint32_t)(EAX));
  /* 12267859 call 0x1225d430 */
  push32(0x1226785eu); f_1225d430();
  /* 1226785e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267861 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267864 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12267868 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1226786b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226786e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267871 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12267877 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226787a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12267880 push eax */
  push32((uint32_t)(EAX));
  /* 12267881 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267884 push ecx */
  push32((uint32_t)(ECX));
  /* 12267885 call 0x1225d5b0 */
  push32(0x1226788au); f_1225d5b0();
  /* 1226788a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226788d push eax */
  push32((uint32_t)(EAX));
  /* 1226788e call 0x1225d430 */
  push32(0x12267893u); f_1225d430();
  /* 12267893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267896 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267899 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1226789d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122678a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122678a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122678a6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 122678ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122678af mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 122678b5 push ecx */
  push32((uint32_t)(ECX));
  /* 122678b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122678b9 push edx */
  push32((uint32_t)(EDX));
  /* 122678ba call 0x1225d5b0 */
  push32(0x122678bfu); f_1225d5b0();
  /* 122678bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122678c2 push eax */
  push32((uint32_t)(EAX));
  /* 122678c3 call 0x1225d430 */
  push32(0x122678c8u); f_1225d430();
  /* 122678c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122678cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122678ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122678d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122678d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122678d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122678db mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 122678e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122678e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 122678ea push eax */
  push32((uint32_t)(EAX));
  /* 122678eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122678ee push ecx */
  push32((uint32_t)(ECX));
  /* 122678ef call 0x1225d5b0 */
  push32(0x122678f4u); f_1225d5b0();
  /* 122678f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122678f7 push eax */
  push32((uint32_t)(EAX));
  /* 122678f8 call 0x1225d430 */
  push32(0x122678fdu); f_1225d430();
  /* 122678fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267900 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267903 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12267907 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1226790a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226790d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12267910 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12267916:;
  /* 12267916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267919 pop esi */
  ESI = (pop32());
  /* 1226791a mov esp, ebp */
  ESP = (EBP);
  /* 1226791c pop ebp */
  EBP = (pop32());
  /* 1226791d ret  */
  ESPCHK(0x122675b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017920 @ 0x12267920 (31 bytes, 15 insns) */
void f_12267920(void) {
  FTRACE(0x12267920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267920 push ebp */
  push32((uint32_t)(EBP));
  /* 12267921 mov ebp, esp */
  EBP = (ESP);
  /* 12267923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12267925 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267928 push eax */
  push32((uint32_t)(EAX));
  /* 12267929 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226792c push ecx */
  push32((uint32_t)(ECX));
  /* 1226792d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267930 push edx */
  push32((uint32_t)(EDX));
  /* 12267931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267934 push eax */
  push32((uint32_t)(EAX));
  /* 12267935 call 0x12267940 */
  push32(0x1226793au); f_12267940();
  /* 1226793a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226793d pop ebp */
  EBP = (pop32());
  /* 1226793e ret  */
  ESPCHK(0x12267920u, _esp0);
  ESP += 4; return;
}

