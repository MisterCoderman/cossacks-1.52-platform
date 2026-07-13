#include "recomp.h"

/* FUN_100077b0 @ 0x111077b0 (10 bytes, 5 insns) */
void f_111077b0(void) {
  FTRACE(0x111077b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111077b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111077b1 mov ebp, esp */
  EBP = (ESP);
  /* 111077b3 mov eax, dword ptr [0x1112dc94] */
  EAX = (r32((uint32_t)(0x1112dc94)));
  /* 111077b8 pop ebp */
  EBP = (pop32());
  /* 111077b9 ret  */
  ESPCHK(0x111077b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c0 @ 0x111077c0 (31 bytes, 11 insns) */
void f_111077c0(void) {
  FTRACE(0x111077c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111077c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111077c1 mov ebp, esp */
  EBP = (ESP);
  /* 111077c3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111077ca jbe 0x111077d0 */
  if ((C.cf||C.zf)) goto L_111077d0;
  /* 111077cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111077ce jmp 0x111077dd */
  goto L_111077dd;
L_111077d0:;
  /* 111077d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111077d3 mov dword ptr [0x1112dc94], eax */
  w32((uint32_t)(0x1112dc94), (EAX));
  /* 111077d8 mov eax, 1 */
  EAX = (0x1u);
L_111077dd:;
  /* 111077dd pop ebp */
  EBP = (pop32());
  /* 111077de ret  */
  ESPCHK(0x111077c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077e0 @ 0x111077e0 (89 bytes, 20 insns) */
void f_111077e0(void) {
  FTRACE(0x111077e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111077e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111077e1 mov ebp, esp */
  EBP = (ESP);
  /* 111077e3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 111077e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111077ea mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 111077ef push eax */
  push32((uint32_t)(EAX));
  /* 111077f0 call dword ptr [0x1113230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113230c))), 0x111077f6u);
  /* 111077f6 mov dword ptr [0x11130ea8], eax */
  w32((uint32_t)(0x11130ea8), (EAX));
  /* 111077fb cmp dword ptr [0x11130ea8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130ea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107802 jne 0x11107808 */
  if (!C.zf) goto L_11107808;
  /* 11107804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11107806 jmp 0x11107837 */
  goto L_11107837;
L_11107808:;
  /* 11107808 mov ecx, dword ptr [0x11130ea8] */
  ECX = (r32((uint32_t)(0x11130ea8)));
  /* 1110780e mov dword ptr [0x11130e9c], ecx */
  w32((uint32_t)(0x11130e9c), (ECX));
  /* 11107814 mov dword ptr [0x11130ea0], 0 */
  w32((uint32_t)(0x11130ea0), (0x0u));
  /* 1110781e mov dword ptr [0x11130ea4], 0 */
  w32((uint32_t)(0x11130ea4), (0x0u));
  /* 11107828 mov dword ptr [0x11130e88], 0x10 */
  w32((uint32_t)(0x11130e88), (0x10u));
  /* 11107832 mov eax, 1 */
  EAX = (0x1u);
L_11107837:;
  /* 11107837 pop ebp */
  EBP = (pop32());
  /* 11107838 ret  */
  ESPCHK(0x111077e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007840 @ 0x11107840 (85 bytes, 29 insns) */
void f_11107840(void) {
  FTRACE(0x11107840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107840 push ebp */
  push32((uint32_t)(EBP));
  /* 11107841 mov ebp, esp */
  EBP = (ESP);
  /* 11107843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107846 mov eax, dword ptr [0x11130ea4] */
  EAX = (r32((uint32_t)(0x11130ea4)));
  /* 1110784b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110784e mov ecx, dword ptr [0x11130ea8] */
  ECX = (r32((uint32_t)(0x11130ea8)));
  /* 11107854 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107856 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11107859 mov edx, dword ptr [0x11130ea8] */
  EDX = (r32((uint32_t)(0x11130ea8)));
  /* 1110785f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11107862:;
  /* 11107862 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107865 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107868 jae 0x1110788f */
  if (!C.cf) goto L_1110788f;
  /* 1110786a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110786d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107870 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107873 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11107876 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110787d jae 0x11107884 */
  if (!C.cf) goto L_11107884;
  /* 1110787f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107882 jmp 0x11107891 */
  goto L_11107891;
L_11107884:;
  /* 11107884 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107887 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110788a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110788d jmp 0x11107862 */
  goto L_11107862;
L_1110788f:;
  /* 1110788f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11107891:;
  /* 11107891 mov esp, ebp */
  ESP = (EBP);
  /* 11107893 pop ebp */
  EBP = (pop32());
  /* 11107894 ret  */
  ESPCHK(0x11107840u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x111078a0 (95 bytes, 33 insns) */
void f_111078a0(void) {
  FTRACE(0x111078a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111078a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111078a1 mov ebp, esp */
  EBP = (ESP);
  /* 111078a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111078a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111078a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111078ac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111078af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111078b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111078b5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 111078b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111078bb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111078c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111078c3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111078c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111078c8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111078cb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111078cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111078cf jne 0x111078f1 */
  if (!C.zf) goto L_111078f1;
  /* 111078d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111078d4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 111078d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111078d9 jne 0x111078f1 */
  if (!C.zf) goto L_111078f1;
  /* 111078db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111078de and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 111078e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111078e6 je 0x111078f1 */
  if (C.zf) goto L_111078f1;
  /* 111078e8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 111078ef jmp 0x111078f8 */
  goto L_111078f8;
L_111078f1:;
  /* 111078f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_111078f8:;
  /* 111078f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111078fb mov esp, ebp */
  ESP = (EBP);
  /* 111078fd pop ebp */
  EBP = (pop32());
  /* 111078fe ret  */
  ESPCHK(0x111078a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x11107900 (1485 bytes, 453 insns) */
void f_11107900(void) {
  FTRACE(0x11107900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107900 push ebp */
  push32((uint32_t)(EBP));
  /* 11107901 mov ebp, esp */
  EBP = (ESP);
  /* 11107903 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107909 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1110790c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1110790f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107912 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107915 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107918 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1110791b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110791e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11107921 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11107924 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107927 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110792d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107930 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11107937 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110793a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110793d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107940 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11107943 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107946 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11107948 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110794b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1110794e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107951 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107954 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11107957 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1110795a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110795c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1110795f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107962 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11107965 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11107968 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110796b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110796e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11107970 jne 0x11107a98 */
  if (!C.zf) goto L_11107a98;
  /* 11107976 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11107979 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1110797c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110797f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11107982 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107986 jbe 0x1110798f */
  if ((C.cf||C.zf)) goto L_1110798f;
  /* 11107988 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1110798f:;
  /* 1110798f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11107992 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11107995 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11107998 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110799b jne 0x11107a71 */
  if (!C.zf) goto L_11107a71;
  /* 111079a1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111079a5 jae 0x11107a06 */
  if (!C.cf) goto L_11107a06;
  /* 111079a7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111079ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111079af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111079b1 not eax */
  EAX = (~(EAX));
  /* 111079b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111079b6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111079b9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 111079bd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111079bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111079c2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111079c5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 111079c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111079cc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111079cf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 111079d2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111079d5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111079d8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111079db mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 111079de mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 111079e1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111079e4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111079e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111079ea jne 0x11107a04 */
  if (!C.zf) goto L_11107a04;
  /* 111079ec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111079f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111079f4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111079f6 not eax */
  EAX = (~(EAX));
  /* 111079f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111079fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111079fd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111079ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107a02 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11107a04:;
  /* 11107a04 jmp 0x11107a71 */
  goto L_11107a71;
L_11107a06:;
  /* 11107a06 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11107a09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107a0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11107a11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107a13 not edx */
  EDX = (~(EDX));
  /* 11107a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107a18 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107a1b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11107a22 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11107a24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107a27 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107a2a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11107a31 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107a34 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107a37 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11107a3a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11107a3d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107a40 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107a43 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11107a46 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107a49 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107a4c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11107a50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11107a52 jne 0x11107a71 */
  if (!C.zf) goto L_11107a71;
  /* 11107a54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11107a57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107a5a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11107a5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107a61 not edx */
  EDX = (~(EDX));
  /* 11107a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107a66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11107a69 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11107a6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107a6e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11107a71:;
  /* 11107a71 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11107a74 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11107a77 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11107a7a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11107a7d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11107a80 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11107a83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11107a86 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11107a89 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11107a8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11107a8f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11107a92 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107a95 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11107a98:;
  /* 11107a98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11107a9b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11107a9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107aa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11107aa4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107aa8 jbe 0x11107ab1 */
  if ((C.cf||C.zf)) goto L_11107ab1;
  /* 11107aaa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11107ab1:;
  /* 11107ab1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11107ab4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11107ab7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11107ab9 jne 0x11107c15 */
  if (!C.zf) goto L_11107c15;
  /* 11107abf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107ac2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107ac5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11107ac8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11107acb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11107ace sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107ad1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11107ad4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107ad8 jbe 0x11107ae1 */
  if ((C.cf||C.zf)) goto L_11107ae1;
  /* 11107ada mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11107ae1:;
  /* 11107ae1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11107ae4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107ae7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11107aea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11107aed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11107af0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107af3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11107af6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107afa jbe 0x11107b03 */
  if ((C.cf||C.zf)) goto L_11107b03;
  /* 11107afc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11107b03:;
  /* 11107b03 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11107b06 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107b09 je 0x11107c0f */
  if (C.zf) goto L_11107c0f;
  /* 11107b0f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107b12 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107b15 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11107b18 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107b1b jne 0x11107bf1 */
  if (!C.zf) goto L_11107bf1;
  /* 11107b21 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107b25 jae 0x11107b86 */
  if (!C.cf) goto L_11107b86;
  /* 11107b27 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11107b2c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11107b2f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107b31 not edx */
  EDX = (~(EDX));
  /* 11107b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107b36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107b39 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11107b3d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11107b3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107b42 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107b45 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11107b49 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107b4c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107b4f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11107b52 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11107b55 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107b58 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107b5b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11107b5e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107b61 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107b64 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11107b68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11107b6a jne 0x11107b84 */
  if (!C.zf) goto L_11107b84;
  /* 11107b6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11107b71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11107b74 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107b76 not edx */
  EDX = (~(EDX));
  /* 11107b78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107b7b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11107b7d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11107b7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107b82 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11107b84:;
  /* 11107b84 jmp 0x11107bf1 */
  goto L_11107bf1;
L_11107b86:;
  /* 11107b86 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11107b89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107b8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11107b91 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11107b93 not eax */
  EAX = (~(EAX));
  /* 11107b95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107b98 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107b9b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11107ba2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11107ba4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107ba7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107baa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11107bb1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107bb4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107bb7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11107bba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11107bbd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107bc0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107bc3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11107bc6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107bc9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107bcc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11107bd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11107bd2 jne 0x11107bf1 */
  if (!C.zf) goto L_11107bf1;
  /* 11107bd4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11107bd7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107bda mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11107bdf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11107be1 not eax */
  EAX = (~(EAX));
  /* 11107be3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107be6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11107be9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11107beb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107bee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11107bf1:;
  /* 11107bf1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107bf4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11107bf7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107bfa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11107bfd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11107c00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107c03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11107c06 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107c09 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11107c0c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11107c0f:;
  /* 11107c0f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107c12 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11107c15:;
  /* 11107c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11107c18 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11107c1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11107c1d jne 0x11107c2b */
  if (!C.zf) goto L_11107c2b;
  /* 11107c1f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11107c22 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107c25 je 0x11107d3b */
  if (C.zf) goto L_11107d3b;
L_11107c2b:;
  /* 11107c2b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11107c2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107c31 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11107c34 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11107c37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107c3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11107c3d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11107c40 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11107c43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107c46 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11107c49 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11107c4c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11107c4f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107c52 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11107c55 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107c58 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11107c5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107c5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11107c61 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107c64 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107c67 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11107c6a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107c6d jne 0x11107d3b */
  if (!C.zf) goto L_11107d3b;
  /* 11107c73 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107c77 jae 0x11107cd4 */
  if (!C.cf) goto L_11107cd4;
  /* 11107c79 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107c7c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107c7f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11107c83 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107c86 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107c89 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11107c8c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11107c8f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107c92 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107c95 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11107c98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11107c9a jne 0x11107cb2 */
  if (!C.zf) goto L_11107cb2;
  /* 11107c9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11107ca1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11107ca4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107ca9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11107cab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11107cad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107cb0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11107cb2:;
  /* 11107cb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11107cb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11107cba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11107cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107cbf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107cc2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11107cc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11107cc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107ccb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107cce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11107cd2 jmp 0x11107d3b */
  goto L_11107d3b;
L_11107cd4:;
  /* 11107cd4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107cd7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107cda movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11107cde mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107ce1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107ce4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11107ce7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11107cea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107ced add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107cf0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11107cf3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11107cf5 jne 0x11107d12 */
  if (!C.zf) goto L_11107d12;
  /* 11107cf7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11107cfa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107cfd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11107d02 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107d07 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11107d0a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11107d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107d0f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11107d12:;
  /* 11107d12 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11107d15 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107d18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11107d1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11107d1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107d22 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107d25 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11107d2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11107d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107d31 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11107d34 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11107d3b:;
  /* 11107d3b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107d3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11107d41 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11107d43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11107d46 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107d49 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11107d4c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11107d4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107d52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11107d54 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107d57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107d5a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11107d5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107d5f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107d62 jne 0x11107ec9 */
  if (!C.zf) goto L_11107ec9;
  /* 11107d68 cmp dword ptr [0x11130ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107d6f je 0x11107eb8 */
  if (C.zf) goto L_11107eb8;
  /* 11107d75 mov eax, dword ptr [0x11130e98] */
  EAX = (r32((uint32_t)(0x11130e98)));
  /* 11107d7a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11107d7d mov ecx, dword ptr [0x11130ea0] */
  ECX = (r32((uint32_t)(0x11130ea0)));
  /* 11107d83 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11107d86 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107d88 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11107d8b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11107d90 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11107d95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107d98 push eax */
  push32((uint32_t)(EAX));
  /* 11107d99 call dword ptr [0x1113236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113236c))), 0x11107d9fu);
  /* 11107d9f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11107da4 mov ecx, dword ptr [0x11130e98] */
  ECX = (r32((uint32_t)(0x11130e98)));
  /* 11107daa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107dac mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11107db1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11107db4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11107db6 mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11107dbc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11107dbf mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11107dc4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11107dc7 mov edx, dword ptr [0x11130e98] */
  EDX = (r32((uint32_t)(0x11130e98)));
  /* 11107dcd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11107dd8 mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11107ddd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11107de0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11107de3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11107de6 mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11107deb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11107dee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11107df1 mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11107df7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11107dfa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11107dfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11107e00 jne 0x11107e16 */
  if (!C.zf) goto L_11107e16;
  /* 11107e02 mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11107e0b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11107e0d mov ecx, dword ptr [0x11130ea0] */
  ECX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e13 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11107e16:;
  /* 11107e16 mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e1c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107e20 jne 0x11107eb8 */
  if (!C.zf) goto L_11107eb8;
  /* 11107e26 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11107e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11107e2d mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e32 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11107e35 push ecx */
  push32((uint32_t)(ECX));
  /* 11107e36 call dword ptr [0x1113236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113236c))), 0x11107e3cu);
  /* 11107e3c mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e42 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11107e45 push eax */
  push32((uint32_t)(EAX));
  /* 11107e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11107e48 mov ecx, dword ptr [0x11130eac] */
  ECX = (r32((uint32_t)(0x11130eac)));
  /* 11107e4e push ecx */
  push32((uint32_t)(ECX));
  /* 11107e4f call dword ptr [0x111323b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323b4))), 0x11107e55u);
  /* 11107e55 mov edx, dword ptr [0x11130ea4] */
  EDX = (r32((uint32_t)(0x11130ea4)));
  /* 11107e5b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11107e5e mov eax, dword ptr [0x11130ea8] */
  EAX = (r32((uint32_t)(0x11130ea8)));
  /* 11107e63 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107e65 mov ecx, dword ptr [0x11130ea0] */
  ECX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e6b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107e6e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107e70 push eax */
  push32((uint32_t)(EAX));
  /* 11107e71 mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e77 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107e7a push edx */
  push32((uint32_t)(EDX));
  /* 11107e7b mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11107e80 push eax */
  push32((uint32_t)(EAX));
  /* 11107e81 call 0x1110b430 */
  push32(0x11107e86u); f_1110b430();
  /* 11107e86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107e89 mov ecx, dword ptr [0x11130ea4] */
  ECX = (r32((uint32_t)(0x11130ea4)));
  /* 11107e8f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107e92 mov dword ptr [0x11130ea4], ecx */
  w32((uint32_t)(0x11130ea4), (ECX));
  /* 11107e98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107e9b cmp edx, dword ptr [0x11130ea0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11130ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107ea1 jbe 0x11107eac */
  if ((C.cf||C.zf)) goto L_11107eac;
  /* 11107ea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107ea6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107ea9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11107eac:;
  /* 11107eac mov ecx, dword ptr [0x11130ea8] */
  ECX = (r32((uint32_t)(0x11130ea8)));
  /* 11107eb2 mov dword ptr [0x11130e9c], ecx */
  w32((uint32_t)(0x11130e9c), (ECX));
L_11107eb8:;
  /* 11107eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107ebb mov dword ptr [0x11130ea0], edx */
  w32((uint32_t)(0x11130ea0), (EDX));
  /* 11107ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107ec4 mov dword ptr [0x11130e98], eax */
  w32((uint32_t)(0x11130e98), (EAX));
L_11107ec9:;
  /* 11107ec9 mov esp, ebp */
  ESP = (EBP);
  /* 11107ecb pop ebp */
  EBP = (pop32());
  /* 11107ecc ret  */
  ESPCHK(0x11107900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed0 @ 0x11107ed0 (1334 bytes, 427 insns) */
void f_11107ed0(void) {
  FTRACE(0x11107ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11107ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11107ed3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107ed6 push esi */
  push32((uint32_t)(ESI));
  /* 11107ed7 mov eax, dword ptr [0x11130ea4] */
  EAX = (r32((uint32_t)(0x11130ea4)));
  /* 11107edc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11107edf mov ecx, dword ptr [0x11130ea8] */
  ECX = (r32((uint32_t)(0x11130ea8)));
  /* 11107ee5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107ee7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11107eea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107eed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107ef0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11107ef3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11107ef6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11107ef9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11107efc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107eff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11107f02 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107f06 jge 0x11107f1c */
  if ((C.sf==C.of)) goto L_11107f1c;
  /* 11107f08 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11107f0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11107f0e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11107f10 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11107f13 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11107f1a jmp 0x11107f31 */
  goto L_11107f31;
L_11107f1c:;
  /* 11107f1c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11107f23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11107f26 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107f29 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11107f2c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11107f2e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11107f31:;
  /* 11107f31 mov ecx, dword ptr [0x11130e9c] */
  ECX = (r32((uint32_t)(0x11130e9c)));
  /* 11107f37 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11107f3a:;
  /* 11107f3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f3d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107f40 jae 0x11107f66 */
  if (!C.cf) goto L_11107f66;
  /* 11107f42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11107f48 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11107f4a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f4d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107f50 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11107f53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11107f55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11107f57 je 0x11107f5b */
  if (C.zf) goto L_11107f5b;
  /* 11107f59 jmp 0x11107f66 */
  goto L_11107f66;
L_11107f5b:;
  /* 11107f5b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107f61 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11107f64 jmp 0x11107f3a */
  goto L_11107f3a;
L_11107f66:;
  /* 11107f66 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f69 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107f6c jne 0x1110804d */
  if (!C.zf) goto L_1110804d;
  /* 11107f72 mov eax, dword ptr [0x11130ea8] */
  EAX = (r32((uint32_t)(0x11130ea8)));
  /* 11107f77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11107f7a:;
  /* 11107f7a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f7d cmp ecx, dword ptr [0x11130e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107f83 jae 0x11107fa9 */
  if (!C.cf) goto L_11107fa9;
  /* 11107f85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11107f8b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11107f8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107f90 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11107f93 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11107f96 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11107f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11107f9a je 0x11107f9e */
  if (C.zf) goto L_11107f9e;
  /* 11107f9c jmp 0x11107fa9 */
  goto L_11107fa9;
L_11107f9e:;
  /* 11107f9e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fa1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107fa4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11107fa7 jmp 0x11107f7a */
  goto L_11107f7a;
L_11107fa9:;
  /* 11107fa9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fac cmp ecx, dword ptr [0x11130e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107fb2 jne 0x1110804d */
  if (!C.zf) goto L_1110804d;
L_11107fb8:;
  /* 11107fb8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fbb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107fbe jae 0x11107fd6 */
  if (!C.cf) goto L_11107fd6;
  /* 11107fc0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fc3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107fc7 je 0x11107fcb */
  if (C.zf) goto L_11107fcb;
  /* 11107fc9 jmp 0x11107fd6 */
  goto L_11107fd6;
L_11107fcb:;
  /* 11107fcb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107fd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11107fd4 jmp 0x11107fb8 */
  goto L_11107fb8;
L_11107fd6:;
  /* 11107fd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107fdc jne 0x11108027 */
  if (!C.zf) goto L_11108027;
  /* 11107fde mov eax, dword ptr [0x11130ea8] */
  EAX = (r32((uint32_t)(0x11130ea8)));
  /* 11107fe3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11107fe6:;
  /* 11107fe6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fe9 cmp ecx, dword ptr [0x11130e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107fef jae 0x11108007 */
  if (!C.cf) goto L_11108007;
  /* 11107ff1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107ff4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107ff8 je 0x11107ffc */
  if (C.zf) goto L_11107ffc;
  /* 11107ffa jmp 0x11108007 */
  goto L_11108007;
L_11107ffc:;
  /* 11107ffc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11107fff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108002 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11108005 jmp 0x11107fe6 */
  goto L_11107fe6;
L_11108007:;
  /* 11108007 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110800a cmp ecx, dword ptr [0x11130e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108010 jne 0x11108027 */
  if (!C.zf) goto L_11108027;
  /* 11108012 call 0x11108410 */
  push32(0x11108017u); f_11108410();
  /* 11108017 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1110801a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110801e jne 0x11108027 */
  if (!C.zf) goto L_11108027;
  /* 11108020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11108022 jmp 0x11108401 */
  goto L_11108401;
L_11108027:;
  /* 11108027 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110802a push edx */
  push32((uint32_t)(EDX));
  /* 1110802b call 0x11108520 */
  push32(0x11108030u); f_11108520();
  /* 11108030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11108033 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108036 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11108039 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1110803b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110803e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11108041 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108044 jne 0x1110804d */
  if (!C.zf) goto L_1110804d;
  /* 11108046 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11108048 jmp 0x11108401 */
  goto L_11108401;
L_1110804d:;
  /* 1110804d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108050 mov dword ptr [0x11130e9c], edx */
  w32((uint32_t)(0x11130e9c), (EDX));
  /* 11108056 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108059 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1110805c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1110805f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108062 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11108064 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11108067 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110806b je 0x11108090 */
  if (C.zf) goto L_11108090;
  /* 1110806d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108070 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108073 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11108076 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1110807a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110807d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108080 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11108083 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1110808a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1110808c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110808e jne 0x111080c5 */
  if (!C.zf) goto L_111080c5;
L_11108090:;
  /* 11108090 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11108097:;
  /* 11108097 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110809a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1110809d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111080a0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 111080a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111080a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111080aa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 111080ad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 111080b4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 111080b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111080b8 jne 0x111080c5 */
  if (!C.zf) goto L_111080c5;
  /* 111080ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111080bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111080c0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 111080c3 jmp 0x11108097 */
  goto L_11108097;
L_111080c5:;
  /* 111080c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111080c8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111080ce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111080d1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 111080d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111080db mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 111080e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111080e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111080e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111080eb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 111080ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111080f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111080f6 jne 0x11108112 */
  if (!C.zf) goto L_11108112;
  /* 111080f8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 111080ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108102 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108105 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11108108 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1110810f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11108112:;
  /* 11108112 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108116 jl 0x1110812b */
  if ((C.sf!=C.of)) goto L_1110812b;
  /* 11108118 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110811b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1110811d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11108120 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108123 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108126 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11108129 jmp 0x11108112 */
  goto L_11108112;
L_1110812b:;
  /* 1110812b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110812e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108131 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11108135 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11108138 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110813b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110813d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108140 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11108143 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11108146 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11108149 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110814c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1110814f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108153 jle 0x1110815c */
  if ((C.zf||C.sf!=C.of)) goto L_1110815c;
  /* 11108155 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1110815c:;
  /* 1110815c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110815f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108162 je 0x11108380 */
  if (C.zf) goto L_11108380;
  /* 11108168 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110816b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110816e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11108171 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108174 jne 0x1110824a */
  if (!C.zf) goto L_1110824a;
  /* 1110817a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110817e jge 0x111081df */
  if ((C.sf==C.of)) goto L_111081df;
  /* 11108180 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11108185 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108188 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1110818a not eax */
  EAX = (~(EAX));
  /* 1110818c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110818f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108192 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11108196 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11108198 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110819b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1110819e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 111081a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111081a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111081a8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 111081ab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111081ae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111081b1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111081b4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 111081b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111081ba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111081bd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111081c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111081c3 jne 0x111081dd */
  if (!C.zf) goto L_111081dd;
  /* 111081c5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111081ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111081cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111081cf not eax */
  EAX = (~(EAX));
  /* 111081d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111081d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111081d6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111081d8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111081db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111081dd:;
  /* 111081dd jmp 0x1110824a */
  goto L_1110824a;
L_111081df:;
  /* 111081df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111081e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111081e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111081ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111081ec not edx */
  EDX = (~(EDX));
  /* 111081ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111081f1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 111081f4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 111081fb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111081fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108200 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108203 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1110820a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1110820d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108210 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11108213 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11108216 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108219 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110821c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1110821f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108222 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108225 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11108229 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110822b jne 0x1110824a */
  if (!C.zf) goto L_1110824a;
  /* 1110822d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108230 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108233 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108238 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1110823a not edx */
  EDX = (~(EDX));
  /* 1110823c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110823f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11108242 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11108244 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108247 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1110824a:;
  /* 1110824a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110824d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11108250 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108253 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11108256 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11108259 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110825c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1110825f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108262 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11108265 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11108268 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110826c je 0x11108380 */
  if (C.zf) goto L_11108380;
  /* 11108272 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108275 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108278 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1110827b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110827e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108281 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11108284 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11108287 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1110828a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110828d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11108290 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11108293 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11108296 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108299 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1110829c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110829f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111082a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111082a5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111082a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111082ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111082ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 111082b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111082b4 jne 0x11108380 */
  if (!C.zf) goto L_11108380;
  /* 111082ba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111082be jge 0x1110831a */
  if ((C.sf==C.of)) goto L_1110831a;
  /* 111082c0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 111082c3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111082c6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 111082ca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111082cd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111082d0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 111082d3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111082d5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111082d8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111082db mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 111082de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111082e0 jne 0x111082f8 */
  if (!C.zf) goto L_111082f8;
  /* 111082e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111082e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111082ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111082ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111082ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111082f1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 111082f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111082f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111082f8:;
  /* 111082f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111082fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108300 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108302 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108305 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108308 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1110830c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1110830e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108311 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108314 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11108318 jmp 0x11108380 */
  goto L_11108380;
L_1110831a:;
  /* 1110831a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1110831d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108320 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11108324 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108327 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110832a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1110832d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1110832f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108332 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108335 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11108338 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110833a jne 0x11108357 */
  if (!C.zf) goto L_11108357;
  /* 1110833c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110833f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108342 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11108347 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11108349 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110834c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1110834f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11108351 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108354 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11108357:;
  /* 11108357 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110835a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110835d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108362 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108364 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108367 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1110836a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11108371 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11108373 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108376 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11108379 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11108380:;
  /* 11108380 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108384 je 0x1110839a */
  if (C.zf) goto L_1110839a;
  /* 11108386 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110838c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1110838e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108391 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108394 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11108397 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1110839a:;
  /* 1110839a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110839d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111083a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111083a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111083a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111083a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111083ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111083ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111083b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111083b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111083b7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111083ba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 111083bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111083c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111083c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111083c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111083c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111083ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111083cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111083cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111083d1 jne 0x111083f3 */
  if (!C.zf) goto L_111083f3;
  /* 111083d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111083d6 cmp eax, dword ptr [0x11130ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11130ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111083dc jne 0x111083f3 */
  if (!C.zf) goto L_111083f3;
  /* 111083de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111083e1 cmp ecx, dword ptr [0x11130e98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130e98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111083e7 jne 0x111083f3 */
  if (!C.zf) goto L_111083f3;
  /* 111083e9 mov dword ptr [0x11130ea0], 0 */
  w32((uint32_t)(0x11130ea0), (0x0u));
L_111083f3:;
  /* 111083f3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 111083f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111083f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111083fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111083fe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11108401:;
  /* 11108401 pop esi */
  ESI = (pop32());
  /* 11108402 mov esp, ebp */
  ESP = (EBP);
  /* 11108404 pop ebp */
  EBP = (pop32());
  /* 11108405 ret  */
  ESPCHK(0x11107ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008410 @ 0x11108410 (271 bytes, 78 insns) */
void f_11108410(void) {
  FTRACE(0x11108410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11108410 push ebp */
  push32((uint32_t)(EBP));
  /* 11108411 mov ebp, esp */
  EBP = (ESP);
  /* 11108413 push ecx */
  push32((uint32_t)(ECX));
  /* 11108414 mov eax, dword ptr [0x11130ea4] */
  EAX = (r32((uint32_t)(0x11130ea4)));
  /* 11108419 cmp eax, dword ptr [0x11130e88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11130e88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110841f jne 0x1110846b */
  if (!C.zf) goto L_1110846b;
  /* 11108421 mov ecx, dword ptr [0x11130e88] */
  ECX = (r32((uint32_t)(0x11130e88)));
  /* 11108427 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110842a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110842d push ecx */
  push32((uint32_t)(ECX));
  /* 1110842e mov edx, dword ptr [0x11130ea8] */
  EDX = (r32((uint32_t)(0x11130ea8)));
  /* 11108434 push edx */
  push32((uint32_t)(EDX));
  /* 11108435 push 0 */
  push32((uint32_t)(0x0u));
  /* 11108437 mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 1110843c push eax */
  push32((uint32_t)(EAX));
  /* 1110843d call dword ptr [0x11132308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132308))), 0x11108443u);
  /* 11108443 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11108446 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110844a jne 0x11108453 */
  if (!C.zf) goto L_11108453;
  /* 1110844c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110844e jmp 0x1110851b */
  goto L_1110851b;
L_11108453:;
  /* 11108453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108456 mov dword ptr [0x11130ea8], ecx */
  w32((uint32_t)(0x11130ea8), (ECX));
  /* 1110845c mov edx, dword ptr [0x11130e88] */
  EDX = (r32((uint32_t)(0x11130e88)));
  /* 11108462 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108465 mov dword ptr [0x11130e88], edx */
  w32((uint32_t)(0x11130e88), (EDX));
L_1110846b:;
  /* 1110846b mov eax, dword ptr [0x11130ea4] */
  EAX = (r32((uint32_t)(0x11130ea4)));
  /* 11108470 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11108473 mov ecx, dword ptr [0x11130ea8] */
  ECX = (r32((uint32_t)(0x11130ea8)));
  /* 11108479 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110847b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110847e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11108483 push 8 */
  push32((uint32_t)(0x8u));
  /* 11108485 mov edx, dword ptr [0x11130eac] */
  EDX = (r32((uint32_t)(0x11130eac)));
  /* 1110848b push edx */
  push32((uint32_t)(EDX));
  /* 1110848c call dword ptr [0x1113230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113230c))), 0x11108492u);
  /* 11108492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108495 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11108498 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110849b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110849f jne 0x111084a5 */
  if (!C.zf) goto L_111084a5;
  /* 111084a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111084a3 jmp 0x1110851b */
  goto L_1110851b;
L_111084a5:;
  /* 111084a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 111084a7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 111084ac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 111084b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111084b3 call dword ptr [0x11132304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132304))), 0x111084b9u);
  /* 111084b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111084bc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 111084bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111084c2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111084c6 jne 0x111084e2 */
  if (!C.zf) goto L_111084e2;
  /* 111084c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111084cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111084ce push ecx */
  push32((uint32_t)(ECX));
  /* 111084cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111084d1 mov edx, dword ptr [0x11130eac] */
  EDX = (r32((uint32_t)(0x11130eac)));
  /* 111084d7 push edx */
  push32((uint32_t)(EDX));
  /* 111084d8 call dword ptr [0x111323b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323b4))), 0x111084deu);
  /* 111084de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111084e0 jmp 0x1110851b */
  goto L_1110851b;
L_111084e2:;
  /* 111084e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111084e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111084eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111084ee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111084f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111084f8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 111084ff mov eax, dword ptr [0x11130ea4] */
  EAX = (r32((uint32_t)(0x11130ea4)));
  /* 11108504 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108507 mov dword ptr [0x11130ea4], eax */
  w32((uint32_t)(0x11130ea4), (EAX));
  /* 1110850c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110850f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11108512 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11108518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1110851b:;
  /* 1110851b mov esp, ebp */
  ESP = (EBP);
  /* 1110851d pop ebp */
  EBP = (pop32());
  /* 1110851e ret  */
  ESPCHK(0x11108410u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x11108520 (494 bytes, 149 insns) */
void f_11108520(void) {
  FTRACE(0x11108520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11108520 push ebp */
  push32((uint32_t)(EBP));
  /* 11108521 mov ebp, esp */
  EBP = (ESP);
  /* 11108523 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108529 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1110852c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1110852f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108532 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11108535 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11108538 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1110853f:;
  /* 1110853f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108543 jl 0x11108558 */
  if ((C.sf!=C.of)) goto L_11108558;
  /* 11108545 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11108548 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1110854a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110854d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108550 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108553 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11108556 jmp 0x1110853f */
  goto L_1110853f;
L_11108558:;
  /* 11108558 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110855b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11108561 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108564 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1110856b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1110856e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11108575 jmp 0x11108580 */
  goto L_11108580;
L_11108577:;
  /* 11108577 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110857a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110857d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11108580:;
  /* 11108580 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108584 jge 0x111085a6 */
  if ((C.sf==C.of)) goto L_111085a6;
  /* 11108586 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108589 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110858c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1110858f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11108592 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108595 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108598 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1110859b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110859e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111085a1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111085a4 jmp 0x11108577 */
  goto L_11108577;
L_111085a6:;
  /* 111085a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111085a9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 111085ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111085af mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111085b2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111085b4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111085b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 111085b9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111085be push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111085c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111085c6 push edx */
  push32((uint32_t)(EDX));
  /* 111085c7 call dword ptr [0x11132304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132304))), 0x111085cdu);
  /* 111085cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111085cf jne 0x111085d9 */
  if (!C.zf) goto L_111085d9;
  /* 111085d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111085d4 jmp 0x1110870a */
  goto L_1110870a;
L_111085d9:;
  /* 111085d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111085dc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111085e1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111085e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111085e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111085ea jmp 0x111085f8 */
  goto L_111085f8;
L_111085ec:;
  /* 111085ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111085ef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111085f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111085f8:;
  /* 111085f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111085fb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111085fe ja 0x1110865d */
  if ((!C.cf&&!C.zf)) goto L_1110865d;
  /* 11108600 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108603 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1110860a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110860d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11108617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110861a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110861d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11108620 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108623 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11108629 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110862c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108632 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108635 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11108638 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110863b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108641 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108644 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11108647 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110864a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110864f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11108652 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11108655 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1110865b jmp 0x111085ec */
  goto L_111085ec;
L_1110865d:;
  /* 1110865d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11108660 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108666 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11108669 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110866c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110866f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108672 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11108675 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108678 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1110867b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1110867e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108681 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108684 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11108687 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110868a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110868d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108690 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11108693 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108696 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11108699 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1110869c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110869f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111086a2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111086a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111086a8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111086ab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 111086b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 111086b6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111086b9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 111086c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111086c7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 111086cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111086ce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 111086d1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 111086d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111086d7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 111086da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111086dc jne 0x111086ed */
  if (!C.zf) goto L_111086ed;
  /* 111086de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111086e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111086e4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111086e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111086ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_111086ed:;
  /* 111086ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111086f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 111086f5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111086f7 not edx */
  EDX = (~(EDX));
  /* 111086f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111086fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111086ff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11108701 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108704 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11108707 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1110870a:;
  /* 1110870a mov esp, ebp */
  ESP = (EBP);
  /* 1110870c pop ebp */
  EBP = (pop32());
  /* 1110870d ret  */
  ESPCHK(0x11108520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x11108710 (1515 bytes, 489 insns) */
void f_11108710(void) {
  FTRACE(0x11108710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11108710 push ebp */
  push32((uint32_t)(EBP));
  /* 11108711 mov ebp, esp */
  EBP = (ESP);
  /* 11108713 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108716 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11108719 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110871c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1110871e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11108721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108724 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11108727 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1110872a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110872d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11108730 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108733 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11108736 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11108739 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1110873c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110873f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108742 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11108748 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110874b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11108752 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11108755 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11108758 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110875b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1110875e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108761 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11108763 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108766 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11108769 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110876c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110876f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11108772 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108775 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11108777 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1110877a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110877d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108780 jle 0x11108a36 */
  if ((C.zf||C.sf!=C.of)) goto L_11108a36;
  /* 11108786 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108789 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110878c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110878e jne 0x1110879b */
  if (!C.zf) goto L_1110879b;
  /* 11108790 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108793 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108796 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108799 jle 0x111087a2 */
  if ((C.zf||C.sf!=C.of)) goto L_111087a2;
L_1110879b:;
  /* 1110879b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110879d jmp 0x11108cf7 */
  goto L_11108cf7;
L_111087a2:;
  /* 111087a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111087a5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111087a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111087ab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111087ae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111087b2 jbe 0x111087bb */
  if ((C.cf||C.zf)) goto L_111087bb;
  /* 111087b4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_111087bb:;
  /* 111087bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111087be mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111087c1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 111087c4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111087c7 jne 0x1110889d */
  if (!C.zf) goto L_1110889d;
  /* 111087cd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111087d1 jae 0x11108832 */
  if (!C.cf) goto L_11108832;
  /* 111087d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111087d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111087db shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111087dd not edx */
  EDX = (~(EDX));
  /* 111087df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111087e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 111087e5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 111087e9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111087eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111087ee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111087f1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 111087f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111087f8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111087fb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111087fe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11108801 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108804 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108807 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1110880a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110880d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108810 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11108814 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11108816 jne 0x11108830 */
  if (!C.zf) goto L_11108830;
  /* 11108818 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1110881d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108820 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108822 not edx */
  EDX = (~(EDX));
  /* 11108824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108827 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11108829 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1110882b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110882e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11108830:;
  /* 11108830 jmp 0x1110889d */
  goto L_1110889d;
L_11108832:;
  /* 11108832 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108835 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108838 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1110883d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1110883f not eax */
  EAX = (~(EAX));
  /* 11108841 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108844 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108847 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1110884e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11108850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108853 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108856 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1110885d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108860 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108863 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11108866 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11108869 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110886c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110886f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11108872 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108875 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108878 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1110887c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110887e jne 0x1110889d */
  if (!C.zf) goto L_1110889d;
  /* 11108880 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108883 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108886 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1110888b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1110888d not eax */
  EAX = (~(EAX));
  /* 1110888f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108892 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11108895 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11108897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110889a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1110889d:;
  /* 1110889d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111088a0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111088a3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111088a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111088a9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 111088ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111088af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111088b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111088b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111088b8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 111088bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111088be add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111088c1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111088c4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111088c7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111088cb jle 0x11108a17 */
  if ((C.zf||C.sf!=C.of)) goto L_11108a17;
  /* 111088d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111088d4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111088d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111088da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111088dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111088e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111088e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 111088e6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111088ea jbe 0x111088f3 */
  if ((C.cf||C.zf)) goto L_111088f3;
  /* 111088ec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_111088f3:;
  /* 111088f3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111088f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111088f9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 111088fc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111088ff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108902 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108905 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11108908 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1110890b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110890e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108911 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11108914 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108917 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110891a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1110891d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108920 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11108923 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108926 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11108929 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110892c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110892f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11108932 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108935 jne 0x11108a03 */
  if (!C.zf) goto L_11108a03;
  /* 1110893b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110893f jae 0x1110899c */
  if (!C.cf) goto L_1110899c;
  /* 11108941 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108944 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108947 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1110894b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110894e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108951 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11108954 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11108957 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110895a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110895d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11108960 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11108962 jne 0x1110897a */
  if (!C.zf) goto L_1110897a;
  /* 11108964 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108969 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110896c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1110896e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108971 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11108973 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11108975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108978 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1110897a:;
  /* 1110897a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1110897f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108982 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11108984 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108987 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110898a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1110898e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11108990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108993 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108996 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1110899a jmp 0x11108a03 */
  goto L_11108a03;
L_1110899c:;
  /* 1110899c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110899f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111089a2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 111089a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111089a9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111089ac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111089af add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 111089b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111089b5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111089b8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 111089bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111089bd jne 0x111089da */
  if (!C.zf) goto L_111089da;
  /* 111089bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111089c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111089c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111089ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111089cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111089cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111089d2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111089d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111089d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_111089da:;
  /* 111089da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111089dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111089e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 111089e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111089e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111089ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 111089ed mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 111089f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111089f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111089f9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 111089fc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11108a03:;
  /* 11108a03 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108a06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108a09 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11108a0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108a0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108a14 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11108a17:;
  /* 11108a17 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11108a1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108a20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11108a22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11108a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108a2b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a2e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11108a31 jmp 0x11108cf2 */
  goto L_11108cf2;
L_11108a36:;
  /* 11108a36 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11108a39 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108a3c jge 0x11108cf2 */
  if ((C.sf==C.of)) goto L_11108cf2;
  /* 11108a42 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11108a45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108a4b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11108a4d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11108a50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a53 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108a56 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a59 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11108a5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108a5f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108a62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11108a65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108a68 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108a6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11108a6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108a71 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11108a74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108a77 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11108a7a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108a7e jbe 0x11108a87 */
  if ((C.cf||C.zf)) goto L_11108a87;
  /* 11108a80 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11108a87:;
  /* 11108a87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108a8a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11108a8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11108a8f jne 0x11108bd0 */
  if (!C.zf) goto L_11108bd0;
  /* 11108a95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11108a98 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11108a9b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108a9e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11108aa1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108aa5 jbe 0x11108aae */
  if ((C.cf||C.zf)) goto L_11108aae;
  /* 11108aa7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11108aae:;
  /* 11108aae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108ab1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108ab4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11108ab7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108aba jne 0x11108b90 */
  if (!C.zf) goto L_11108b90;
  /* 11108ac0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108ac4 jae 0x11108b25 */
  if (!C.cf) goto L_11108b25;
  /* 11108ac6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108acb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108ace shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108ad0 not edx */
  EDX = (~(EDX));
  /* 11108ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108ad5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108ad8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11108adc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11108ade mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108ae1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108ae4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11108ae8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108aeb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108aee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11108af1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11108af4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108af7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108afa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11108afd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108b00 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108b03 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11108b07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11108b09 jne 0x11108b23 */
  if (!C.zf) goto L_11108b23;
  /* 11108b0b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108b10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108b13 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108b15 not edx */
  EDX = (~(EDX));
  /* 11108b17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108b1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11108b1c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11108b1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108b21 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11108b23:;
  /* 11108b23 jmp 0x11108b90 */
  goto L_11108b90;
L_11108b25:;
  /* 11108b25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108b28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108b2b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11108b30 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11108b32 not eax */
  EAX = (~(EAX));
  /* 11108b34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108b37 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108b3a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11108b41 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11108b43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108b46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108b49 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11108b50 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108b53 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108b56 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11108b59 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11108b5c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108b5f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108b62 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11108b65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108b68 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108b6b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11108b6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11108b71 jne 0x11108b90 */
  if (!C.zf) goto L_11108b90;
  /* 11108b73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11108b76 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108b79 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11108b7e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11108b80 not eax */
  EAX = (~(EAX));
  /* 11108b82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108b85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11108b88 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11108b8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108b8d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11108b90:;
  /* 11108b90 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108b93 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11108b96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108b99 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11108b9c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11108b9f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108ba2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11108ba5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11108ba8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11108bab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11108bae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108bb1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108bb4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11108bb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108bba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11108bbd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108bc0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11108bc3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108bc7 jbe 0x11108bd0 */
  if ((C.cf||C.zf)) goto L_11108bd0;
  /* 11108bc9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11108bd0:;
  /* 11108bd0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11108bd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11108bd6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11108bd9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11108bdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108bdf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108be2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11108be5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11108be8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108beb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108bee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11108bf1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11108bf4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108bf7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11108bfa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108bfd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11108c00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108c03 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11108c06 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108c09 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108c0c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11108c0f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108c12 jne 0x11108cde */
  if (!C.zf) goto L_11108cde;
  /* 11108c18 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108c1c jae 0x11108c78 */
  if (!C.cf) goto L_11108c78;
  /* 11108c1e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c21 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108c24 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11108c28 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c2b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108c2e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11108c31 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11108c33 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c36 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108c39 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11108c3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11108c3e jne 0x11108c56 */
  if (!C.zf) goto L_11108c56;
  /* 11108c40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11108c45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11108c48 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11108c4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108c4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11108c4f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11108c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108c54 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11108c56:;
  /* 11108c56 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108c5b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11108c5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108c60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108c63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c66 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11108c6a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11108c6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108c6f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c72 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11108c76 jmp 0x11108cde */
  goto L_11108cde;
L_11108c78:;
  /* 11108c78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c7b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108c7e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11108c82 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c85 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108c88 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11108c8b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11108c8d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108c90 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108c93 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11108c96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11108c98 jne 0x11108cb5 */
  if (!C.zf) goto L_11108cb5;
  /* 11108c9a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11108c9d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108ca0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11108ca5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11108ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108caa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11108cad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11108caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11108cb2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11108cb5:;
  /* 11108cb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11108cb8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108cbb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108cc0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108cc5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108cc8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11108ccf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11108cd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108cd4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11108cd7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11108cde:;
  /* 11108cde mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108ce1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108ce4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11108ce6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11108ce9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108cec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11108cef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11108cf2:;
  /* 11108cf2 mov eax, 1 */
  EAX = (0x1u);
L_11108cf7:;
  /* 11108cf7 mov esp, ebp */
  ESP = (EBP);
  /* 11108cf9 pop ebp */
  EBP = (pop32());
  /* 11108cfa ret  */
  ESPCHK(0x11108710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d00 @ 0x11108d00 (304 bytes, 79 insns) */
void f_11108d00(void) {
  FTRACE(0x11108d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11108d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11108d01 mov ebp, esp */
  EBP = (ESP);
  /* 11108d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11108d04 cmp dword ptr [0x11130ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108d0b je 0x11108e2c */
  if (C.zf) goto L_11108e2c;
  /* 11108d11 mov eax, dword ptr [0x11130e98] */
  EAX = (r32((uint32_t)(0x11130e98)));
  /* 11108d16 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11108d19 mov ecx, dword ptr [0x11130ea0] */
  ECX = (r32((uint32_t)(0x11130ea0)));
  /* 11108d1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11108d22 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108d24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11108d27 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11108d2c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11108d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11108d34 push eax */
  push32((uint32_t)(EAX));
  /* 11108d35 call dword ptr [0x1113236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113236c))), 0x11108d3bu);
  /* 11108d3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11108d40 mov ecx, dword ptr [0x11130e98] */
  ECX = (r32((uint32_t)(0x11130e98)));
  /* 11108d46 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11108d48 mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11108d4d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11108d50 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11108d52 mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11108d58 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11108d5b mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11108d60 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11108d63 mov edx, dword ptr [0x11130e98] */
  EDX = (r32((uint32_t)(0x11130e98)));
  /* 11108d69 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11108d74 mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11108d79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11108d7c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11108d7f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11108d82 mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11108d87 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11108d8a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11108d8d mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11108d93 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11108d96 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11108d9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11108d9c jne 0x11108db2 */
  if (!C.zf) goto L_11108db2;
  /* 11108d9e mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11108da4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11108da7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11108da9 mov ecx, dword ptr [0x11130ea0] */
  ECX = (r32((uint32_t)(0x11130ea0)));
  /* 11108daf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11108db2:;
  /* 11108db2 mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11108db8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108dbc jne 0x11108e22 */
  if (!C.zf) goto L_11108e22;
  /* 11108dbe cmp dword ptr [0x11130ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11130ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108dc5 jle 0x11108e22 */
  if ((C.zf||C.sf!=C.of)) goto L_11108e22;
  /* 11108dc7 mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11108dcc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11108dcf push ecx */
  push32((uint32_t)(ECX));
  /* 11108dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11108dd2 mov edx, dword ptr [0x11130eac] */
  EDX = (r32((uint32_t)(0x11130eac)));
  /* 11108dd8 push edx */
  push32((uint32_t)(EDX));
  /* 11108dd9 call dword ptr [0x111323b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323b4))), 0x11108ddfu);
  /* 11108ddf mov eax, dword ptr [0x11130ea4] */
  EAX = (r32((uint32_t)(0x11130ea4)));
  /* 11108de4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11108de7 mov ecx, dword ptr [0x11130ea8] */
  ECX = (r32((uint32_t)(0x11130ea8)));
  /* 11108ded add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108def mov edx, dword ptr [0x11130ea0] */
  EDX = (r32((uint32_t)(0x11130ea0)));
  /* 11108df5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108df8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108dfa push ecx */
  push32((uint32_t)(ECX));
  /* 11108dfb mov eax, dword ptr [0x11130ea0] */
  EAX = (r32((uint32_t)(0x11130ea0)));
  /* 11108e00 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108e03 push eax */
  push32((uint32_t)(EAX));
  /* 11108e04 mov ecx, dword ptr [0x11130ea0] */
  ECX = (r32((uint32_t)(0x11130ea0)));
  /* 11108e0a push ecx */
  push32((uint32_t)(ECX));
  /* 11108e0b call 0x1110b430 */
  push32(0x11108e10u); f_1110b430();
  /* 11108e10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11108e13 mov edx, dword ptr [0x11130ea4] */
  EDX = (r32((uint32_t)(0x11130ea4)));
  /* 11108e19 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108e1c mov dword ptr [0x11130ea4], edx */
  w32((uint32_t)(0x11130ea4), (EDX));
L_11108e22:;
  /* 11108e22 mov dword ptr [0x11130ea0], 0 */
  w32((uint32_t)(0x11130ea0), (0x0u));
L_11108e2c:;
  /* 11108e2c mov esp, ebp */
  ESP = (EBP);
  /* 11108e2e pop ebp */
  EBP = (pop32());
  /* 11108e2f ret  */
  ESPCHK(0x11108d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x11108e30 (1565 bytes, 343 insns) */
void f_11108e30(void) {
  FTRACE(0x11108e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11108e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11108e31 mov ebp, esp */
  EBP = (ESP);
  /* 11108e33 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11108e39 mov eax, dword ptr [0x11130ea4] */
  EAX = (r32((uint32_t)(0x11130ea4)));
  /* 11108e3e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11108e41 push eax */
  push32((uint32_t)(EAX));
  /* 11108e42 mov ecx, dword ptr [0x11130ea8] */
  ECX = (r32((uint32_t)(0x11130ea8)));
  /* 11108e48 push ecx */
  push32((uint32_t)(ECX));
  /* 11108e49 call dword ptr [0x11132390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132390))), 0x11108e4fu);
  /* 11108e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11108e51 je 0x11108e5b */
  if (C.zf) goto L_11108e5b;
  /* 11108e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11108e56 jmp 0x11109449 */
  goto L_11109449;
L_11108e5b:;
  /* 11108e5b mov edx, dword ptr [0x11130ea8] */
  EDX = (r32((uint32_t)(0x11130ea8)));
  /* 11108e61 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11108e67 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11108e71 jmp 0x11108e82 */
  goto L_11108e82;
L_11108e73:;
  /* 11108e73 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11108e79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108e7c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11108e82:;
  /* 11108e82 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11108e88 cmp ecx, dword ptr [0x11130ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108e8e jge 0x11109447 */
  if ((C.sf==C.of)) goto L_11109447;
  /* 11108e94 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11108e9a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11108e9d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11108ea3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11108ea8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11108eae push ecx */
  push32((uint32_t)(ECX));
  /* 11108eaf call dword ptr [0x11132390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132390))), 0x11108eb5u);
  /* 11108eb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11108eb7 je 0x11108ec3 */
  if (C.zf) goto L_11108ec3;
  /* 11108eb9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11108ebe jmp 0x11109449 */
  goto L_11109449;
L_11108ec3:;
  /* 11108ec3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11108ec9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11108ecc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11108ed2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11108ed8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108ede mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11108ee1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11108ee7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11108eea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11108eed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11108ef7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11108f01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11108f08 jmp 0x11108f13 */
  goto L_11108f13;
L_11108f0a:;
  /* 11108f0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11108f0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108f10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11108f13:;
  /* 11108f13 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108f17 jge 0x1110940b */
  if ((C.sf==C.of)) goto L_1110940b;
  /* 11108f1d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11108f27 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11108f31 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11108f3b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11108f45 jmp 0x11108f56 */
  goto L_11108f56;
L_11108f47:;
  /* 11108f47 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11108f4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108f50 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11108f56:;
  /* 11108f56 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108f5d jge 0x11108f72 */
  if ((C.sf==C.of)) goto L_11108f72;
  /* 11108f5f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11108f65 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11108f70 jmp 0x11108f47 */
  goto L_11108f47;
L_11108f72:;
  /* 11108f72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108f76 jl 0x111093ad */
  if ((C.sf!=C.of)) goto L_111093ad;
  /* 11108f7c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11108f81 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11108f87 push ecx */
  push32((uint32_t)(ECX));
  /* 11108f88 call dword ptr [0x11132390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132390))), 0x11108f8eu);
  /* 11108f8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11108f90 je 0x11108f9c */
  if (C.zf) goto L_11108f9c;
  /* 11108f92 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11108f97 jmp 0x11109449 */
  goto L_11109449;
L_11108f9c:;
  /* 11108f9c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11108fa2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11108fa5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11108faf jmp 0x11108fc0 */
  goto L_11108fc0;
L_11108fb1:;
  /* 11108fb1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11108fb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108fba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11108fc0:;
  /* 11108fc0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108fc7 jge 0x11109144 */
  if ((C.sf==C.of)) goto L_11109144;
  /* 11108fcd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11108fd0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108fd3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11108fd9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11108fdf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11108fe5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11108feb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11108ff1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11108ff5 jne 0x11109002 */
  if (!C.zf) goto L_11109002;
  /* 11108ff7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11108ffd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109000 je 0x1110900c */
  if (C.zf) goto L_1110900c;
L_11109002:;
  /* 11109002 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11109007 jmp 0x11109449 */
  goto L_11109449;
L_1110900c:;
  /* 1110900c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11109012 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11109014 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1110901a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11109020 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11109026 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1110902c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1110902f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11109031 je 0x11109069 */
  if (C.zf) goto L_11109069;
  /* 11109033 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11109039 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110903c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11109042 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110904c jle 0x11109058 */
  if ((C.zf||C.sf!=C.of)) goto L_11109058;
  /* 1110904e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11109053 jmp 0x11109449 */
  goto L_11109449;
L_11109058:;
  /* 11109058 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1110905e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109061 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11109067 jmp 0x111090ab */
  goto L_111090ab;
L_11109069:;
  /* 11109069 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1110906f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11109072 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109075 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1110907b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109082 jle 0x1110908e */
  if ((C.zf||C.sf!=C.of)) goto L_1110908e;
  /* 11109084 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1110908e:;
  /* 1110908e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11109094 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1110909b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110909e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 111090a4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_111090ab:;
  /* 111090ab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111090b2 jl 0x111090cd */
  if ((C.sf!=C.of)) goto L_111090cd;
  /* 111090b4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 111090ba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 111090bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111090bf jne 0x111090cd */
  if (!C.zf) goto L_111090cd;
  /* 111090c1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111090cb jle 0x111090d7 */
  if ((C.zf||C.sf!=C.of)) goto L_111090d7;
L_111090cd:;
  /* 111090cd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 111090d2 jmp 0x11109449 */
  goto L_11109449;
L_111090d7:;
  /* 111090d7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 111090dd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111090e3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 111090e6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111090ec je 0x111090f8 */
  if (C.zf) goto L_111090f8;
  /* 111090ee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 111090f3 jmp 0x11109449 */
  goto L_11109449;
L_111090f8:;
  /* 111090f8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 111090fe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109104 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1110910a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11109110 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109116 jb 0x1110900c */
  if (C.cf) goto L_1110900c;
  /* 1110911c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11109122 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109128 je 0x11109134 */
  if (C.zf) goto L_11109134;
  /* 1110912a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1110912f jmp 0x11109449 */
  goto L_11109449;
L_11109134:;
  /* 11109134 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11109137 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110913c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110913f jmp 0x11108fb1 */
  goto L_11108fb1;
L_11109144:;
  /* 11109144 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11109147 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11109149 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110914f je 0x1110915b */
  if (C.zf) goto L_1110915b;
  /* 11109151 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11109156 jmp 0x11109449 */
  goto L_11109449;
L_1110915b:;
  /* 1110915b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110915e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11109164 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1110916b jmp 0x11109176 */
  goto L_11109176;
L_1110916d:;
  /* 1110916d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11109170 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109173 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11109176:;
  /* 11109176 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110917a jge 0x111093ad */
  if ((C.sf==C.of)) goto L_111093ad;
  /* 11109180 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1110918a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11109190 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11109196:;
  /* 11109196 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1110919c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1110919f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 111091a5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111091ab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111091b1 je 0x111092da */
  if (C.zf) goto L_111092da;
  /* 111091b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111091ba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 111091c0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111091c7 je 0x111092da */
  if (C.zf) goto L_111092da;
  /* 111091cd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111091d3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111091d9 jb 0x111091ee */
  if (C.cf) goto L_111091ee;
  /* 111091db mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 111091e1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111091e6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111091ec jb 0x111091f8 */
  if (C.cf) goto L_111091f8;
L_111091ee:;
  /* 111091ee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 111091f3 jmp 0x11109449 */
  goto L_11109449;
L_111091f8:;
  /* 111091f8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111091fe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11109204 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1110920a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11109210 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109213 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11109216 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11109219 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110921e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11109224:;
  /* 11109224 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11109227 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110922d je 0x1110924e */
  if (C.zf) goto L_1110924e;
  /* 1110922f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11109232 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109238 jne 0x1110923c */
  if (!C.zf) goto L_1110923c;
  /* 1110923a jmp 0x1110924e */
  goto L_1110924e;
L_1110923c:;
  /* 1110923c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110923f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11109241 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11109244 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11109247 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109249 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1110924c jmp 0x11109224 */
  goto L_11109224;
L_1110924e:;
  /* 1110924e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11109251 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109257 jne 0x11109263 */
  if (!C.zf) goto L_11109263;
  /* 11109259 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1110925e jmp 0x11109449 */
  goto L_11109449;
L_11109263:;
  /* 11109263 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11109269 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110926b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1110926e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109271 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11109277 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110927e jle 0x1110928a */
  if ((C.zf||C.sf!=C.of)) goto L_1110928a;
  /* 11109280 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1110928a:;
  /* 1110928a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11109290 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109293 je 0x1110929f */
  if (C.zf) goto L_1110929f;
  /* 11109295 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1110929a jmp 0x11109449 */
  goto L_11109449;
L_1110929f:;
  /* 1110929f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111092a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111092a8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111092ae je 0x111092ba */
  if (C.zf) goto L_111092ba;
  /* 111092b0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 111092b5 jmp 0x11109449 */
  goto L_11109449;
L_111092ba:;
  /* 111092ba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 111092c0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 111092c6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 111092cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111092cf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 111092d5 jmp 0x11109196 */
  goto L_11109196;
L_111092da:;
  /* 111092da cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111092e1 je 0x11109351 */
  if (C.zf) goto L_11109351;
  /* 111092e3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111092e7 jge 0x1110931b */
  if ((C.sf==C.of)) goto L_1110931b;
  /* 111092e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111092ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111092f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111092f3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 111092f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111092fb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11109301 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11109306 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11109309 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1110930b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11109311 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11109313 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11109319 jmp 0x11109351 */
  goto L_11109351;
L_1110931b:;
  /* 1110931b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110931e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109321 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11109326 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11109328 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1110932e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11109330 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11109336 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11109339 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110933c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11109341 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11109343 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11109349 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1110934b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11109351:;
  /* 11109351 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11109357 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1110935a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109360 jne 0x11109374 */
  if (!C.zf) goto L_11109374;
  /* 11109362 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11109365 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1110936b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109372 je 0x1110937e */
  if (C.zf) goto L_1110937e;
L_11109374:;
  /* 11109374 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11109379 jmp 0x11109449 */
  goto L_11109449;
L_1110937e:;
  /* 1110937e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11109384 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11109387 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110938d je 0x11109399 */
  if (C.zf) goto L_11109399;
  /* 1110938f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11109394 jmp 0x11109449 */
  goto L_11109449;
L_11109399:;
  /* 11109399 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1110939f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111093a2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 111093a8 jmp 0x1110916d */
  goto L_1110916d;
L_111093ad:;
  /* 111093ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111093b0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 111093b6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 111093bc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111093c0 jne 0x111093da */
  if (!C.zf) goto L_111093da;
  /* 111093c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111093c5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 111093cb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 111093d1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111093d8 je 0x111093e1 */
  if (C.zf) goto L_111093e1;
L_111093da:;
  /* 111093da mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 111093df jmp 0x11109449 */
  goto L_11109449;
L_111093e1:;
  /* 111093e1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 111093e7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111093ed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 111093f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111093f6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111093fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111093fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109401 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11109403 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11109406 jmp 0x11108f0a */
  goto L_11108f0a;
L_1110940b:;
  /* 1110940b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11109411 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11109417 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109419 jne 0x1110942c */
  if (!C.zf) goto L_1110942c;
  /* 1110941b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11109421 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11109427 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110942a je 0x11109433 */
  if (C.zf) goto L_11109433;
L_1110942c:;
  /* 1110942c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11109431 jmp 0x11109449 */
  goto L_11109449;
L_11109433:;
  /* 11109433 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11109439 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110943c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11109442 jmp 0x11108e73 */
  goto L_11108e73;
L_11109447:;
  /* 11109447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11109449:;
  /* 11109449 mov esp, ebp */
  ESP = (EBP);
  /* 1110944b pop ebp */
  EBP = (pop32());
  /* 1110944c ret  */
  ESPCHK(0x11108e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009450 @ 0x11109450 (250 bytes, 92 insns) */
void f_11109450(void) {
  FTRACE(0x11109450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109450 push ebp */
  push32((uint32_t)(EBP));
  /* 11109451 mov ebp, esp */
  EBP = (ESP);
  /* 11109453 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109456 push ebx */
  push32((uint32_t)(EBX));
  /* 11109457 push esi */
  push32((uint32_t)(ESI));
  /* 11109458 push edi */
  push32((uint32_t)(EDI));
  /* 11109459 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1110945c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1110945f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11109462 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11109465:;
  /* 11109465 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109469 jne 0x11109489 */
  if (!C.zf) goto L_11109489;
  /* 1110946b push 0x1112aecc */
  push32((uint32_t)(0x1112aeccu));
  /* 11109470 push 0 */
  push32((uint32_t)(0x0u));
  /* 11109472 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11109474 push 0x1112aec0 */
  push32((uint32_t)(0x1112aec0u));
  /* 11109479 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110947b call 0x11102600 */
  push32(0x11109480u); f_11102600();
  /* 11109480 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109483 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109486 jne 0x11109489 */
  if (!C.zf) goto L_11109489;
  /* 11109488 int3  */
  x86_unimpl("int3 @ 0x11109488");
L_11109489:;
  /* 11109489 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110948b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110948d jne 0x11109465 */
  if (!C.zf) goto L_11109465;
L_1110948f:;
  /* 1110948f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109493 jne 0x111094b3 */
  if (!C.zf) goto L_111094b3;
  /* 11109495 push 0x1112aeb0 */
  push32((uint32_t)(0x1112aeb0u));
  /* 1110949a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110949c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1110949e push 0x1112aec0 */
  push32((uint32_t)(0x1112aec0u));
  /* 111094a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111094a5 call 0x11102600 */
  push32(0x111094aau); f_11102600();
  /* 111094aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111094ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111094b0 jne 0x111094b3 */
  if (!C.zf) goto L_111094b3;
  /* 111094b2 int3  */
  x86_unimpl("int3 @ 0x111094b2");
L_111094b3:;
  /* 111094b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111094b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111094b7 jne 0x1110948f */
  if (!C.zf) goto L_1110948f;
  /* 111094b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111094bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 111094c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111094c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111094c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111094cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111094cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111094d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111094d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111094d7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 111094de mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111094e1 push ecx */
  push32((uint32_t)(ECX));
  /* 111094e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111094e5 push edx */
  push32((uint32_t)(EDX));
  /* 111094e6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111094e9 push eax */
  push32((uint32_t)(EAX));
  /* 111094ea call 0x1110a4d0 */
  push32(0x111094efu); f_1110a4d0();
  /* 111094ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111094f2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111094f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111094f8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111094fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111094fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109501 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11109504 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109507 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110950b jl 0x1110952f */
  if ((C.sf!=C.of)) goto L_1110952f;
  /* 1110950d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109510 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11109512 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11109515 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11109517 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110951d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11109520 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109523 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11109525 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109528 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110952b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1110952d jmp 0x11109540 */
  goto L_11109540;
L_1110952f:;
  /* 1110952f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109532 push edx */
  push32((uint32_t)(EDX));
  /* 11109533 push 0 */
  push32((uint32_t)(0x0u));
  /* 11109535 call 0x1110a250 */
  push32(0x1110953au); f_1110a250();
  /* 1110953a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110953d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11109540:;
  /* 11109540 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11109543 pop edi */
  EDI = (pop32());
  /* 11109544 pop esi */
  ESI = (pop32());
  /* 11109545 pop ebx */
  EBX = (pop32());
  /* 11109546 mov esp, ebp */
  ESP = (EBP);
  /* 11109548 pop ebp */
  EBP = (pop32());
  /* 11109549 ret  */
  ESPCHK(0x11109450u, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x11109550 (183 bytes, 58 insns) */
void f_11109550(void) {
  FTRACE(0x11109550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109550 push ebp */
  push32((uint32_t)(EBP));
  /* 11109551 mov ebp, esp */
  EBP = (ESP);
  /* 11109553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110955c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109561 ja 0x1110957a */
  if ((!C.cf&&!C.zf)) goto L_1110957a;
  /* 11109563 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109566 mov edx, dword ptr [0x1112dc98] */
  EDX = (r32((uint32_t)(0x1112dc98)));
  /* 1110956c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110956e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11109572 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11109575 jmp 0x11109603 */
  goto L_11109603;
L_1110957a:;
  /* 1110957a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110957d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11109580 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11109586 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110958c mov edx, dword ptr [0x1112dc98] */
  EDX = (r32((uint32_t)(0x1112dc98)));
  /* 11109592 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11109594 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11109598 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1110959d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110959f je 0x111095c3 */
  if (C.zf) goto L_111095c3;
  /* 111095a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111095a4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 111095a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111095ad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 111095b0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 111095b3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 111095b6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 111095ba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 111095c1 jmp 0x111095d4 */
  goto L_111095d4;
L_111095c3:;
  /* 111095c3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 111095c6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 111095c9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 111095cd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_111095d4:;
  /* 111095d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111095d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111095d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111095da lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 111095dd push ecx */
  push32((uint32_t)(ECX));
  /* 111095de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111095e1 push edx */
  push32((uint32_t)(EDX));
  /* 111095e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111095e5 push eax */
  push32((uint32_t)(EAX));
  /* 111095e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111095e8 call 0x1110b770 */
  push32(0x111095edu); f_1110b770();
  /* 111095ed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111095f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111095f2 jne 0x111095f8 */
  if (!C.zf) goto L_111095f8;
  /* 111095f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111095f6 jmp 0x11109603 */
  goto L_11109603;
L_111095f8:;
  /* 111095f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111095fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11109600 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11109603:;
  /* 11109603 mov esp, ebp */
  ESP = (EBP);
  /* 11109605 pop ebp */
  EBP = (pop32());
  /* 11109606 ret  */
  ESPCHK(0x11109550u, _esp0);
  ESP += 4; return;
}

/* FUN_10009610 @ 0x11109610 (836 bytes, 238 insns) */
void f_11109610(void) {
  FTRACE(0x11109610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109610 push ebp */
  push32((uint32_t)(EBP));
  /* 11109611 mov ebp, esp */
  EBP = (ESP);
  /* 11109613 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109616 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11109618 call 0x11106f40 */
  push32(0x1110961du); f_11106f40();
  /* 1110961d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109623 push eax */
  push32((uint32_t)(EAX));
  /* 11109624 call 0x11109960 */
  push32(0x11109629u); f_11109960();
  /* 11109629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110962c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1110962f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109632 cmp ecx, dword ptr [0x11130be4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130be4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109638 jne 0x1110964b */
  if (!C.zf) goto L_1110964b;
  /* 1110963a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1110963c call 0x11106fe0 */
  push32(0x11109641u); f_11106fe0();
  /* 11109641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11109646 jmp 0x11109950 */
  goto L_11109950;
L_1110964b:;
  /* 1110964b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110964f jne 0x1110966c */
  if (!C.zf) goto L_1110966c;
  /* 11109651 call 0x11109a40 */
  push32(0x11109656u); f_11109a40();
  /* 11109656 call 0x11109ac0 */
  push32(0x1110965bu); f_11109ac0();
  /* 1110965b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1110965d call 0x11106fe0 */
  push32(0x11109662u); f_11106fe0();
  /* 11109662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11109667 jmp 0x11109950 */
  goto L_11109950;
L_1110966c:;
  /* 1110966c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11109673 jmp 0x1110967e */
  goto L_1110967e;
L_11109675:;
  /* 11109675 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109678 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110967b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1110967e:;
  /* 1110967e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109682 jae 0x111097cf */
  if (!C.cf) goto L_111097cf;
  /* 11109688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110968b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110968e mov ecx, dword ptr [eax + 0x1112deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1112deb8)));
  /* 11109694 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109697 jne 0x111097ca */
  if (!C.zf) goto L_111097ca;
  /* 1110969d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111096a4 jmp 0x111096af */
  goto L_111096af;
L_111096a6:;
  /* 111096a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111096a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111096ac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_111096af:;
  /* 111096af cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111096b6 jae 0x111096c4 */
  if (!C.cf) goto L_111096c4;
  /* 111096b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111096bb mov byte ptr [eax + 0x11130d80], 0 */
  w8((uint32_t)(EAX + 0x11130d80), (0x0u));
  /* 111096c2 jmp 0x111096a6 */
  goto L_111096a6;
L_111096c4:;
  /* 111096c4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111096cb jmp 0x111096d6 */
  goto L_111096d6;
L_111096cd:;
  /* 111096cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111096d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111096d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111096d6:;
  /* 111096d6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111096da jae 0x11109757 */
  if (!C.cf) goto L_11109757;
  /* 111096dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111096df imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111096e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111096e5 lea ecx, [edx + eax*8 + 0x1112dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1112dec8));
  /* 111096ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111096ef jmp 0x111096fa */
  goto L_111096fa;
L_111096f1:;
  /* 111096f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111096f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111096f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111096fa:;
  /* 111096fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111096fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111096ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11109701 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11109703 je 0x11109752 */
  if (C.zf) goto L_11109752;
  /* 11109705 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11109708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110970a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1110970d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110970f je 0x11109752 */
  if (C.zf) goto L_11109752;
  /* 11109711 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11109714 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11109716 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11109718 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1110971b jmp 0x11109726 */
  goto L_11109726;
L_1110971d:;
  /* 1110971d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109720 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109723 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11109726:;
  /* 11109726 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11109729 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110972b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1110972e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109731 ja 0x11109750 */
  if ((!C.cf&&!C.zf)) goto L_11109750;
  /* 11109733 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109736 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11109739 mov dl, byte ptr [eax + 0x11130d81] */
  DL = (r8((uint32_t)(EAX + 0x11130d81)));
  /* 1110973f or dl, byte ptr [ecx + 0x1112deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1112deb0))); DL = (_r); fl_logic(_r,8); }
  /* 11109745 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109748 mov byte ptr [eax + 0x11130d81], dl */
  w8((uint32_t)(EAX + 0x11130d81), (DL));
  /* 1110974e jmp 0x1110971d */
  goto L_1110971d;
L_11109750:;
  /* 11109750 jmp 0x111096f1 */
  goto L_111096f1;
L_11109752:;
  /* 11109752 jmp 0x111096cd */
  goto L_111096cd;
L_11109757:;
  /* 11109757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110975a mov dword ptr [0x11130be4], ecx */
  w32((uint32_t)(0x11130be4), (ECX));
  /* 11109760 mov dword ptr [0x11130c6c], 1 */
  w32((uint32_t)(0x11130c6c), (0x1u));
  /* 1110976a mov edx, dword ptr [0x11130be4] */
  EDX = (r32((uint32_t)(0x11130be4)));
  /* 11109770 push edx */
  push32((uint32_t)(EDX));
  /* 11109771 call 0x111099c0 */
  push32(0x11109776u); f_111099c0();
  /* 11109776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109779 mov dword ptr [0x11130e84], eax */
  w32((uint32_t)(0x11130e84), (EAX));
  /* 1110977e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11109785 jmp 0x11109790 */
  goto L_11109790;
L_11109787:;
  /* 11109787 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110978a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110978d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11109790:;
  /* 11109790 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109794 jae 0x111097b4 */
  if (!C.cf) goto L_111097b4;
  /* 11109796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109799 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110979c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110979f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111097a2 mov cx, word ptr [ecx + eax*2 + 0x1112debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1112debc)));
  /* 111097aa mov word ptr [edx*2 + 0x11130c60], cx */
  w16((uint32_t)(EDX*2 + 0x11130c60), (CX));
  /* 111097b2 jmp 0x11109787 */
  goto L_11109787;
L_111097b4:;
  /* 111097b4 call 0x11109ac0 */
  push32(0x111097b9u); f_11109ac0();
  /* 111097b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111097bb call 0x11106fe0 */
  push32(0x111097c0u); f_11106fe0();
  /* 111097c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111097c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111097c5 jmp 0x11109950 */
  goto L_11109950;
L_111097ca:;
  /* 111097ca jmp 0x11109675 */
  goto L_11109675;
L_111097cf:;
  /* 111097cf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 111097d2 push edx */
  push32((uint32_t)(EDX));
  /* 111097d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111097d6 push eax */
  push32((uint32_t)(EAX));
  /* 111097d7 call dword ptr [0x11132300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132300))), 0x111097ddu);
  /* 111097dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111097e0 jne 0x11109922 */
  if (!C.zf) goto L_11109922;
  /* 111097e6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 111097ed jmp 0x111097f8 */
  goto L_111097f8;
L_111097ef:;
  /* 111097ef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111097f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111097f5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_111097f8:;
  /* 111097f8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111097ff jae 0x1110980d */
  if (!C.cf) goto L_1110980d;
  /* 11109801 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109804 mov byte ptr [edx + 0x11130d80], 0 */
  w8((uint32_t)(EDX + 0x11130d80), (0x0u));
  /* 1110980b jmp 0x111097ef */
  goto L_111097ef;
L_1110980d:;
  /* 1110980d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109810 mov dword ptr [0x11130be4], eax */
  w32((uint32_t)(0x11130be4), (EAX));
  /* 11109815 mov dword ptr [0x11130e84], 0 */
  w32((uint32_t)(0x11130e84), (0x0u));
  /* 1110981f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109823 jbe 0x111098de */
  if ((C.cf||C.zf)) goto L_111098de;
  /* 11109829 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1110982c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1110982f jmp 0x1110983a */
  goto L_1110983a;
L_11109831:;
  /* 11109831 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11109834 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109837 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1110983a:;
  /* 1110983a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110983d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110983f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11109841 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11109843 je 0x1110988c */
  if (C.zf) goto L_1110988c;
  /* 11109845 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11109848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110984a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1110984d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110984f je 0x1110988c */
  if (C.zf) goto L_1110988c;
  /* 11109851 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11109854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11109856 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11109858 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1110985b jmp 0x11109866 */
  goto L_11109866;
L_1110985d:;
  /* 1110985d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109860 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109863 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11109866:;
  /* 11109866 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11109869 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110986b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1110986e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109871 ja 0x1110988a */
  if ((!C.cf&&!C.zf)) goto L_1110988a;
  /* 11109873 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109876 mov cl, byte ptr [eax + 0x11130d81] */
  CL = (r8((uint32_t)(EAX + 0x11130d81)));
  /* 1110987c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1110987f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109882 mov byte ptr [edx + 0x11130d81], cl */
  w8((uint32_t)(EDX + 0x11130d81), (CL));
  /* 11109888 jmp 0x1110985d */
  goto L_1110985d;
L_1110988a:;
  /* 1110988a jmp 0x11109831 */
  goto L_11109831;
L_1110988c:;
  /* 1110988c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11109893 jmp 0x1110989e */
  goto L_1110989e;
L_11109895:;
  /* 11109895 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11109898 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110989b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1110989e:;
  /* 1110989e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111098a5 jae 0x111098be */
  if (!C.cf) goto L_111098be;
  /* 111098a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111098aa mov dl, byte ptr [ecx + 0x11130d81] */
  DL = (r8((uint32_t)(ECX + 0x11130d81)));
  /* 111098b0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 111098b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111098b6 mov byte ptr [eax + 0x11130d81], dl */
  w8((uint32_t)(EAX + 0x11130d81), (DL));
  /* 111098bc jmp 0x11109895 */
  goto L_11109895;
L_111098be:;
  /* 111098be mov ecx, dword ptr [0x11130be4] */
  ECX = (r32((uint32_t)(0x11130be4)));
  /* 111098c4 push ecx */
  push32((uint32_t)(ECX));
  /* 111098c5 call 0x111099c0 */
  push32(0x111098cau); f_111099c0();
  /* 111098ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111098cd mov dword ptr [0x11130e84], eax */
  w32((uint32_t)(0x11130e84), (EAX));
  /* 111098d2 mov dword ptr [0x11130c6c], 1 */
  w32((uint32_t)(0x11130c6c), (0x1u));
  /* 111098dc jmp 0x111098e8 */
  goto L_111098e8;
L_111098de:;
  /* 111098de mov dword ptr [0x11130c6c], 0 */
  w32((uint32_t)(0x11130c6c), (0x0u));
L_111098e8:;
  /* 111098e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111098ef jmp 0x111098fa */
  goto L_111098fa;
L_111098f1:;
  /* 111098f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111098f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111098f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111098fa:;
  /* 111098fa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111098fe jae 0x1110990f */
  if (!C.cf) goto L_1110990f;
  /* 11109900 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11109903 mov word ptr [eax*2 + 0x11130c60], 0 */
  w16((uint32_t)(EAX*2 + 0x11130c60), (0x0u));
  /* 1110990d jmp 0x111098f1 */
  goto L_111098f1;
L_1110990f:;
  /* 1110990f call 0x11109ac0 */
  push32(0x11109914u); f_11109ac0();
  /* 11109914 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11109916 call 0x11106fe0 */
  push32(0x1110991bu); f_11106fe0();
  /* 1110991b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110991e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11109920 jmp 0x11109950 */
  goto L_11109950;
L_11109922:;
  /* 11109922 cmp dword ptr [0x1112f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109929 je 0x11109943 */
  if (C.zf) goto L_11109943;
  /* 1110992b call 0x11109a40 */
  push32(0x11109930u); f_11109a40();
  /* 11109930 call 0x11109ac0 */
  push32(0x11109935u); f_11109ac0();
  /* 11109935 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11109937 call 0x11106fe0 */
  push32(0x1110993cu); f_11106fe0();
  /* 1110993c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11109941 jmp 0x11109950 */
  goto L_11109950;
L_11109943:;
  /* 11109943 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11109945 call 0x11106fe0 */
  push32(0x1110994au); f_11106fe0();
  /* 1110994a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110994d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11109950:;
  /* 11109950 mov esp, ebp */
  ESP = (EBP);
  /* 11109952 pop ebp */
  EBP = (pop32());
  /* 11109953 ret  */
  ESPCHK(0x11109610u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11109960 (89 bytes, 21 insns) */
void f_11109960(void) {
  FTRACE(0x11109960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109960 push ebp */
  push32((uint32_t)(EBP));
  /* 11109961 mov ebp, esp */
  EBP = (ESP);
  /* 11109963 mov dword ptr [0x1112f700], 0 */
  w32((uint32_t)(0x1112f700), (0x0u));
  /* 1110996d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109971 jne 0x11109985 */
  if (!C.zf) goto L_11109985;
  /* 11109973 mov dword ptr [0x1112f700], 1 */
  w32((uint32_t)(0x1112f700), (0x1u));
  /* 1110997d call dword ptr [0x111322f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f8))), 0x11109983u);
  /* 11109983 jmp 0x111099b7 */
  goto L_111099b7;
L_11109985:;
  /* 11109985 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109989 jne 0x1110999d */
  if (!C.zf) goto L_1110999d;
  /* 1110998b mov dword ptr [0x1112f700], 1 */
  w32((uint32_t)(0x1112f700), (0x1u));
  /* 11109995 call dword ptr [0x111322fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322fc))), 0x1110999bu);
  /* 1110999b jmp 0x111099b7 */
  goto L_111099b7;
L_1110999d:;
  /* 1110999d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111099a1 jne 0x111099b4 */
  if (!C.zf) goto L_111099b4;
  /* 111099a3 mov dword ptr [0x1112f700], 1 */
  w32((uint32_t)(0x1112f700), (0x1u));
  /* 111099ad mov eax, dword ptr [0x1112f720] */
  EAX = (r32((uint32_t)(0x1112f720)));
  /* 111099b2 jmp 0x111099b7 */
  goto L_111099b7;
L_111099b4:;
  /* 111099b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_111099b7:;
  /* 111099b7 pop ebp */
  EBP = (pop32());
  /* 111099b8 ret  */
  ESPCHK(0x11109960u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x111099c0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_111099c0(void) {
  FTRACE(0x111099c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111099c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111099c1 mov ebp, esp */
  EBP = (ESP);
  /* 111099c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111099c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111099c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111099ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111099cd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111099d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111099d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111099da ja 0x11109a0a */
  if ((!C.cf&&!C.zf)) goto L_11109a0a;
  /* 111099dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111099df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111099e1 mov dl, byte ptr [eax + 0x11109a24] */
  DL = (r8((uint32_t)(EAX + 0x11109a24)));
  /* 111099e7 jmp dword ptr [edx*4 + 0x11109a10] */
  switch (EDX) {
    case 0: goto L_111099ee;
    case 1: goto L_111099f5;
    case 2: goto L_111099fc;
    case 3: goto L_11109a03;
    case 4: goto L_11109a0a;
    default: x86_unimpl("switch@0x111099e7 out of table"); return;
  }
L_111099ee:;
  /* 111099ee mov eax, 0x411 */
  EAX = (0x411u);
  /* 111099f3 jmp 0x11109a0c */
  goto L_11109a0c;
L_111099f5:;
  /* 111099f5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 111099fa jmp 0x11109a0c */
  goto L_11109a0c;
L_111099fc:;
  /* 111099fc mov eax, 0x412 */
  EAX = (0x412u);
  /* 11109a01 jmp 0x11109a0c */
  goto L_11109a0c;
L_11109a03:;
  /* 11109a03 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11109a08 jmp 0x11109a0c */
  goto L_11109a0c;
L_11109a0a:;
  /* 11109a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11109a0c:;
  /* 11109a0c mov esp, ebp */
  ESP = (EBP);
  /* 11109a0e pop ebp */
  EBP = (pop32());
  /* 11109a0f ret  */
  ESPCHK(0x111099c0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11109a40 (116 bytes, 29 insns) */
void f_11109a40(void) {
  FTRACE(0x11109a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11109a41 mov ebp, esp */
  EBP = (ESP);
  /* 11109a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11109a44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11109a4b jmp 0x11109a56 */
  goto L_11109a56;
L_11109a4d:;
  /* 11109a4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109a50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109a53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11109a56:;
  /* 11109a56 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109a5d jge 0x11109a6b */
  if ((C.sf==C.of)) goto L_11109a6b;
  /* 11109a5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109a62 mov byte ptr [ecx + 0x11130d80], 0 */
  w8((uint32_t)(ECX + 0x11130d80), (0x0u));
  /* 11109a69 jmp 0x11109a4d */
  goto L_11109a4d;
L_11109a6b:;
  /* 11109a6b mov dword ptr [0x11130be4], 0 */
  w32((uint32_t)(0x11130be4), (0x0u));
  /* 11109a75 mov dword ptr [0x11130c6c], 0 */
  w32((uint32_t)(0x11130c6c), (0x0u));
  /* 11109a7f mov dword ptr [0x11130e84], 0 */
  w32((uint32_t)(0x11130e84), (0x0u));
  /* 11109a89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11109a90 jmp 0x11109a9b */
  goto L_11109a9b;
L_11109a92:;
  /* 11109a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109a95 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109a98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11109a9b:;
  /* 11109a9b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109a9f jge 0x11109ab0 */
  if ((C.sf==C.of)) goto L_11109ab0;
  /* 11109aa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109aa4 mov word ptr [eax*2 + 0x11130c60], 0 */
  w16((uint32_t)(EAX*2 + 0x11130c60), (0x0u));
  /* 11109aae jmp 0x11109a92 */
  goto L_11109a92;
L_11109ab0:;
  /* 11109ab0 mov esp, ebp */
  ESP = (EBP);
  /* 11109ab2 pop ebp */
  EBP = (pop32());
  /* 11109ab3 ret  */
  ESPCHK(0x11109a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ac0 @ 0x11109ac0 (770 bytes, 175 insns) */
void f_11109ac0(void) {
  FTRACE(0x11109ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11109ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11109ac3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109ac9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11109acf push eax */
  push32((uint32_t)(EAX));
  /* 11109ad0 mov ecx, dword ptr [0x11130be4] */
  ECX = (r32((uint32_t)(0x11130be4)));
  /* 11109ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 11109ad7 call dword ptr [0x11132300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132300))), 0x11109addu);
  /* 11109add cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109ae0 jne 0x11109cf9 */
  if (!C.zf) goto L_11109cf9;
  /* 11109ae6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11109af0 jmp 0x11109b01 */
  goto L_11109b01;
L_11109af2:;
  /* 11109af2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109af8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109afb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11109b01:;
  /* 11109b01 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109b0b jae 0x11109b22 */
  if (!C.cf) goto L_11109b22;
  /* 11109b0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109b13 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11109b19 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11109b20 jmp 0x11109af2 */
  goto L_11109af2;
L_11109b22:;
  /* 11109b22 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11109b29 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11109b2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11109b32 jmp 0x11109b3d */
  goto L_11109b3d;
L_11109b34:;
  /* 11109b34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109b37 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109b3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11109b3d:;
  /* 11109b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109b40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11109b42 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11109b44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11109b46 je 0x11109b88 */
  if (C.zf) goto L_11109b88;
  /* 11109b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109b4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11109b4d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11109b4f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11109b55 jmp 0x11109b66 */
  goto L_11109b66;
L_11109b57:;
  /* 11109b57 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109b5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109b60 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11109b66:;
  /* 11109b66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11109b69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11109b6b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11109b6e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109b74 ja 0x11109b86 */
  if ((!C.cf&&!C.zf)) goto L_11109b86;
  /* 11109b76 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109b7c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11109b84 jmp 0x11109b57 */
  goto L_11109b57;
L_11109b86:;
  /* 11109b86 jmp 0x11109b34 */
  goto L_11109b34;
L_11109b88:;
  /* 11109b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11109b8a mov eax, dword ptr [0x11130e84] */
  EAX = (r32((uint32_t)(0x11130e84)));
  /* 11109b8f push eax */
  push32((uint32_t)(EAX));
  /* 11109b90 mov ecx, dword ptr [0x11130be4] */
  ECX = (r32((uint32_t)(0x11130be4)));
  /* 11109b96 push ecx */
  push32((uint32_t)(ECX));
  /* 11109b97 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11109b9d push edx */
  push32((uint32_t)(EDX));
  /* 11109b9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11109ba3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11109ba9 push eax */
  push32((uint32_t)(EAX));
  /* 11109baa push 1 */
  push32((uint32_t)(0x1u));
  /* 11109bac call 0x1110b770 */
  push32(0x11109bb1u); f_1110b770();
  /* 11109bb1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11109bb6 mov ecx, dword ptr [0x11130be4] */
  ECX = (r32((uint32_t)(0x11130be4)));
  /* 11109bbc push ecx */
  push32((uint32_t)(ECX));
  /* 11109bbd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11109bc2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11109bc8 push edx */
  push32((uint32_t)(EDX));
  /* 11109bc9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11109bce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11109bd4 push eax */
  push32((uint32_t)(EAX));
  /* 11109bd5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11109bda mov ecx, dword ptr [0x11130e84] */
  ECX = (r32((uint32_t)(0x11130e84)));
  /* 11109be0 push ecx */
  push32((uint32_t)(ECX));
  /* 11109be1 call 0x1110b930 */
  push32(0x11109be6u); f_1110b930();
  /* 11109be6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11109beb mov edx, dword ptr [0x11130be4] */
  EDX = (r32((uint32_t)(0x11130be4)));
  /* 11109bf1 push edx */
  push32((uint32_t)(EDX));
  /* 11109bf2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11109bf7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11109bfd push eax */
  push32((uint32_t)(EAX));
  /* 11109bfe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11109c03 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11109c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11109c0a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11109c0f mov edx, dword ptr [0x11130e84] */
  EDX = (r32((uint32_t)(0x11130e84)));
  /* 11109c15 push edx */
  push32((uint32_t)(EDX));
  /* 11109c16 call 0x1110b930 */
  push32(0x11109c1bu); f_1110b930();
  /* 11109c1b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109c1e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11109c28 jmp 0x11109c39 */
  goto L_11109c39;
L_11109c2a:;
  /* 11109c2a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109c30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109c33 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11109c39:;
  /* 11109c39 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109c43 jae 0x11109cf4 */
  if (!C.cf) goto L_11109cf4;
  /* 11109c49 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109c4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11109c51 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11109c59 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11109c5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11109c5e je 0x11109c96 */
  if (C.zf) goto L_11109c96;
  /* 11109c60 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109c66 mov cl, byte ptr [eax + 0x11130d81] */
  CL = (r8((uint32_t)(EAX + 0x11130d81)));
  /* 11109c6c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11109c6f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109c75 mov byte ptr [edx + 0x11130d81], cl */
  w8((uint32_t)(EDX + 0x11130d81), (CL));
  /* 11109c7b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109c81 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109c87 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11109c8e mov byte ptr [eax + 0x11130c80], dl */
  w8((uint32_t)(EAX + 0x11130c80), (DL));
  /* 11109c94 jmp 0x11109cef */
  goto L_11109cef;
L_11109c96:;
  /* 11109c96 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109c9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11109c9e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11109ca6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11109ca9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11109cab je 0x11109ce2 */
  if (C.zf) goto L_11109ce2;
  /* 11109cad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109cb3 mov al, byte ptr [edx + 0x11130d81] */
  AL = (r8((uint32_t)(EDX + 0x11130d81)));
  /* 11109cb9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11109cbb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109cc1 mov byte ptr [ecx + 0x11130d81], al */
  w8((uint32_t)(ECX + 0x11130d81), (AL));
  /* 11109cc7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109ccd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109cd3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11109cda mov byte ptr [edx + 0x11130c80], cl */
  w8((uint32_t)(EDX + 0x11130c80), (CL));
  /* 11109ce0 jmp 0x11109cef */
  goto L_11109cef;
L_11109ce2:;
  /* 11109ce2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109ce8 mov byte ptr [edx + 0x11130c80], 0 */
  w8((uint32_t)(EDX + 0x11130c80), (0x0u));
L_11109cef:;
  /* 11109cef jmp 0x11109c2a */
  goto L_11109c2a;
L_11109cf4:;
  /* 11109cf4 jmp 0x11109dbe */
  goto L_11109dbe;
L_11109cf9:;
  /* 11109cf9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11109d03 jmp 0x11109d14 */
  goto L_11109d14;
L_11109d05:;
  /* 11109d05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109d0e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11109d14:;
  /* 11109d14 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109d1e jae 0x11109dbe */
  if (!C.cf) goto L_11109dbe;
  /* 11109d24 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109d2b jb 0x11109d68 */
  if (C.cf) goto L_11109d68;
  /* 11109d2d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109d34 ja 0x11109d68 */
  if ((!C.cf&&!C.zf)) goto L_11109d68;
  /* 11109d36 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d3c mov dl, byte ptr [ecx + 0x11130d81] */
  DL = (r8((uint32_t)(ECX + 0x11130d81)));
  /* 11109d42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11109d45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d4b mov byte ptr [eax + 0x11130d81], dl */
  w8((uint32_t)(EAX + 0x11130d81), (DL));
  /* 11109d51 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d57 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109d5a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d60 mov byte ptr [edx + 0x11130c80], cl */
  w8((uint32_t)(EDX + 0x11130c80), (CL));
  /* 11109d66 jmp 0x11109db9 */
  goto L_11109db9;
L_11109d68:;
  /* 11109d68 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109d6f jb 0x11109dac */
  if (C.cf) goto L_11109dac;
  /* 11109d71 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109d78 ja 0x11109dac */
  if ((!C.cf&&!C.zf)) goto L_11109dac;
  /* 11109d7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d80 mov cl, byte ptr [eax + 0x11130d81] */
  CL = (r8((uint32_t)(EAX + 0x11130d81)));
  /* 11109d86 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11109d89 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d8f mov byte ptr [edx + 0x11130d81], cl */
  w8((uint32_t)(EDX + 0x11130d81), (CL));
  /* 11109d95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109d9b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109d9e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109da4 mov byte ptr [ecx + 0x11130c80], al */
  w8((uint32_t)(ECX + 0x11130c80), (AL));
  /* 11109daa jmp 0x11109db9 */
  goto L_11109db9;
L_11109dac:;
  /* 11109dac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11109db2 mov byte ptr [edx + 0x11130c80], 0 */
  w8((uint32_t)(EDX + 0x11130c80), (0x0u));
L_11109db9:;
  /* 11109db9 jmp 0x11109d05 */
  goto L_11109d05;
L_11109dbe:;
  /* 11109dbe mov esp, ebp */
  ESP = (EBP);
  /* 11109dc0 pop ebp */
  EBP = (pop32());
  /* 11109dc1 ret  */
  ESPCHK(0x11109ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dd0 @ 0x11109dd0 (23 bytes, 9 insns) */
void f_11109dd0(void) {
  FTRACE(0x11109dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11109dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11109dd3 cmp dword ptr [0x11130c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109dda je 0x11109de3 */
  if (C.zf) goto L_11109de3;
  /* 11109ddc mov eax, dword ptr [0x11130be4] */
  EAX = (r32((uint32_t)(0x11130be4)));
  /* 11109de1 jmp 0x11109de5 */
  goto L_11109de5;
L_11109de3:;
  /* 11109de3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11109de5:;
  /* 11109de5 pop ebp */
  EBP = (pop32());
  /* 11109de6 ret  */
  ESPCHK(0x11109dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009df0 @ 0x11109df0 (34 bytes, 10 insns) */
void f_11109df0(void) {
  FTRACE(0x11109df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11109df1 mov ebp, esp */
  EBP = (ESP);
  /* 11109df3 cmp dword ptr [0x11131030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11131030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109dfa jne 0x11109e10 */
  if (!C.zf) goto L_11109e10;
  /* 11109dfc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11109dfe call 0x11109610 */
  push32(0x11109e03u); f_11109610();
  /* 11109e03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11109e06 mov dword ptr [0x11131030], 1 */
  w32((uint32_t)(0x11131030), (0x1u));
L_11109e10:;
  /* 11109e10 pop ebp */
  EBP = (pop32());
  /* 11109e11 ret  */
  ESPCHK(0x11109df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e20 @ 0x11109e20 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11109e20(void) {
  FTRACE(0x11109e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11109e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11109e21 mov ebp, esp */
  EBP = (ESP);
  /* 11109e23 push edi */
  push32((uint32_t)(EDI));
  /* 11109e24 push esi */
  push32((uint32_t)(ESI));
  /* 11109e25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11109e28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11109e2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11109e2e mov eax, ecx */
  EAX = (ECX);
  /* 11109e30 mov edx, ecx */
  EDX = (ECX);
  /* 11109e32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109e34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109e36 jbe 0x11109e40 */
  if ((C.cf||C.zf)) goto L_11109e40;
  /* 11109e38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109e3a jb 0x11109fb8 */
  if (C.cf) goto L_11109fb8;
L_11109e40:;
  /* 11109e40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11109e46 jne 0x11109e5c */
  if (!C.zf) goto L_11109e5c;
  /* 11109e48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11109e4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11109e4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109e51 jb 0x11109e7c */
  if (C.cf) goto L_11109e7c;
  /* 11109e53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11109e55 jmp dword ptr [edx*4 + 0x11109f68] */
  switch (EDX) {
    case 0: goto L_11109f78;
    case 1: goto L_11109f80;
    case 2: goto L_11109f8c;
    case 3: goto L_11109fa0;
    default: x86_unimpl("switch@0x11109e55 out of table"); return;
  }
L_11109e5c:;
  /* 11109e5c mov eax, edi */
  EAX = (EDI);
  /* 11109e5e mov edx, 3 */
  EDX = (0x3u);
  /* 11109e63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109e66 jb 0x11109e74 */
  if (C.cf) goto L_11109e74;
  /* 11109e68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11109e6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11109e6d jmp dword ptr [eax*4 + 0x11109e80] */
  switch (EAX) {
    case 1: goto L_11109e90;
    case 2: goto L_11109ebc;
    case 3: goto L_11109ee0;
    default: x86_unimpl("switch@0x11109e6d out of table"); return;
  }
L_11109e74:;
  /* 11109e74 jmp dword ptr [ecx*4 + 0x11109f78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11109f78)))); return;
  /* 11109e7b nop  */
  /* nop */
L_11109e7c:;
  /* 11109e7c jmp dword ptr [ecx*4 + 0x11109efc] */
  switch (ECX) {
    case 0: goto L_11109f5f;
    case 1: goto L_11109f4c;
    case 2: goto L_11109f44;
    case 3: goto L_11109f3c;
    case 4: goto L_11109f34;
    case 5: goto L_11109f2c;
    case 6: goto L_11109f24;
    case 7: goto L_11109f1c;
    default: x86_unimpl("switch@0x11109e7c out of table"); return;
  }
  /* 11109e83 nop  */
  /* nop */
L_11109e90:;
  /* 11109e90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11109e92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11109e94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11109e96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11109e99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11109e9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11109e9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11109ea2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11109ea5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11109ea8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11109eab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109eae jb 0x11109e7c */
  if (C.cf) goto L_11109e7c;
  /* 11109eb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11109eb2 jmp dword ptr [edx*4 + 0x11109f68] */
  switch (EDX) {
    case 0: goto L_11109f78;
    case 1: goto L_11109f80;
    case 2: goto L_11109f8c;
    case 3: goto L_11109fa0;
    default: x86_unimpl("switch@0x11109eb2 out of table"); return;
  }
  /* 11109eb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11109ebc:;
  /* 11109ebc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11109ebe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11109ec0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11109ec2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11109ec5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11109ec8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11109ecb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11109ece add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11109ed1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109ed4 jb 0x11109e7c */
  if (C.cf) goto L_11109e7c;
  /* 11109ed6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11109ed8 jmp dword ptr [edx*4 + 0x11109f68] */
  switch (EDX) {
    case 0: goto L_11109f78;
    case 1: goto L_11109f80;
    case 2: goto L_11109f8c;
    case 3: goto L_11109fa0;
    default: x86_unimpl("switch@0x11109ed8 out of table"); return;
  }
  /* 11109edf nop  */
  /* nop */
L_11109ee0:;
  /* 11109ee0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11109ee2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11109ee4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11109ee6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11109ee7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11109eea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11109eeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109eee jb 0x11109e7c */
  if (C.cf) goto L_11109e7c;
  /* 11109ef0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11109ef2 jmp dword ptr [edx*4 + 0x11109f68] */
  switch (EDX) {
    case 0: goto L_11109f78;
    case 1: goto L_11109f80;
    case 2: goto L_11109f8c;
    case 3: goto L_11109fa0;
    default: x86_unimpl("switch@0x11109ef2 out of table"); return;
  }
  /* 11109ef9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11109f1c:;
  /* 11109f1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11109f20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11109f24:;
  /* 11109f24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11109f28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11109f2c:;
  /* 11109f2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11109f30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11109f34:;
  /* 11109f34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11109f38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11109f3c:;
  /* 11109f3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11109f40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11109f44:;
  /* 11109f44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11109f48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11109f4c:;
  /* 11109f4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11109f50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11109f54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11109f5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11109f5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11109f5f:;
  /* 11109f5f jmp dword ptr [edx*4 + 0x11109f68] */
  switch (EDX) {
    case 0: goto L_11109f78;
    case 1: goto L_11109f80;
    case 2: goto L_11109f8c;
    case 3: goto L_11109fa0;
    default: x86_unimpl("switch@0x11109f5f out of table"); return;
  }
  /* 11109f66 mov edi, edi */
  EDI = (EDI);
L_11109f78:;
  /* 11109f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109f7b pop esi */
  ESI = (pop32());
  /* 11109f7c pop edi */
  EDI = (pop32());
  /* 11109f7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11109f7e ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
  /* 11109f7f nop  */
  /* nop */
L_11109f80:;
  /* 11109f80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11109f82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11109f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109f87 pop esi */
  ESI = (pop32());
  /* 11109f88 pop edi */
  EDI = (pop32());
  /* 11109f89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11109f8a ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
  /* 11109f8b nop  */
  /* nop */
L_11109f8c:;
  /* 11109f8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11109f8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11109f90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11109f93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11109f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109f99 pop esi */
  ESI = (pop32());
  /* 11109f9a pop edi */
  EDI = (pop32());
  /* 11109f9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11109f9c ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
  /* 11109f9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11109fa0:;
  /* 11109fa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11109fa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11109fa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11109fa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11109faa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11109fad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11109fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11109fb3 pop esi */
  ESI = (pop32());
  /* 11109fb4 pop edi */
  EDI = (pop32());
  /* 11109fb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11109fb6 ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
  /* 11109fb7 nop  */
  /* nop */
L_11109fb8:;
  /* 11109fb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11109fbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11109fc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11109fc6 jne 0x11109fec */
  if (!C.zf) goto L_11109fec;
  /* 11109fc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11109fcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11109fce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109fd1 jb 0x11109fe0 */
  if (C.cf) goto L_11109fe0;
  /* 11109fd3 std  */
  C.df=1;
  /* 11109fd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11109fd6 cld  */
  C.df=0;
  /* 11109fd7 jmp dword ptr [edx*4 + 0x1110a100] */
  switch (EDX) {
    case 0: goto L_1110a110;
    case 1: goto L_1110a118;
    case 2: goto L_1110a128;
    case 3: goto L_1110a13c;
    default: x86_unimpl("switch@0x11109fd7 out of table"); return;
  }
  /* 11109fde mov edi, edi */
  EDI = (EDI);
L_11109fe0:;
  /* 11109fe0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11109fe2 jmp dword ptr [ecx*4 + 0x1110a0b0] */
  switch (ECX) {
    case 0: goto L_1110a0f7;
    default: x86_unimpl("switch@0x11109fe2 out of table"); return;
  }
  /* 11109fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11109fec:;
  /* 11109fec mov eax, edi */
  EAX = (EDI);
  /* 11109fee mov edx, 3 */
  EDX = (0x3u);
  /* 11109ff3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11109ff6 jb 0x1110a004 */
  if (C.cf) goto L_1110a004;
  /* 11109ff8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11109ffb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11109ffd jmp dword ptr [eax*4 + 0x1110a008] */
  switch (EAX) {
    case 1: goto L_1110a018;
    case 2: goto L_1110a038;
    case 3: goto L_1110a060;
    default: x86_unimpl("switch@0x11109ffd out of table"); return;
  }
L_1110a004:;
  /* 1110a004 jmp dword ptr [ecx*4 + 0x1110a100] */
  switch (ECX) {
    case 0: goto L_1110a110;
    case 1: goto L_1110a118;
    case 2: goto L_1110a128;
    case 3: goto L_1110a13c;
    default: x86_unimpl("switch@0x1110a004 out of table"); return;
  }
  /* 1110a00b nop  */
  /* nop */
L_1110a018:;
  /* 1110a018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110a01b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110a01d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110a020 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1110a021 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110a024 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1110a025 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a028 jb 0x11109fe0 */
  if (C.cf) goto L_11109fe0;
  /* 1110a02a std  */
  C.df=1;
  /* 1110a02b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110a02d cld  */
  C.df=0;
  /* 1110a02e jmp dword ptr [edx*4 + 0x1110a100] */
  switch (EDX) {
    case 0: goto L_1110a110;
    case 1: goto L_1110a118;
    case 2: goto L_1110a128;
    case 3: goto L_1110a13c;
    default: x86_unimpl("switch@0x1110a02e out of table"); return;
  }
  /* 1110a035 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110a038:;
  /* 1110a038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110a03b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110a03d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110a040 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110a043 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110a046 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110a049 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a04c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a04f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a052 jb 0x11109fe0 */
  if (C.cf) goto L_11109fe0;
  /* 1110a054 std  */
  C.df=1;
  /* 1110a055 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110a057 cld  */
  C.df=0;
  /* 1110a058 jmp dword ptr [edx*4 + 0x1110a100] */
  switch (EDX) {
    case 0: goto L_1110a110;
    case 1: goto L_1110a118;
    case 2: goto L_1110a128;
    case 3: goto L_1110a13c;
    default: x86_unimpl("switch@0x1110a058 out of table"); return;
  }
  /* 1110a05f nop  */
  /* nop */
L_1110a060:;
  /* 1110a060 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110a063 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110a065 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110a068 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110a06b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110a06e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110a071 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110a074 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110a077 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a07a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a07d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a080 jb 0x11109fe0 */
  if (C.cf) goto L_11109fe0;
  /* 1110a086 std  */
  C.df=1;
  /* 1110a087 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110a089 cld  */
  C.df=0;
  /* 1110a08a jmp dword ptr [edx*4 + 0x1110a100] */
  switch (EDX) {
    case 0: goto L_1110a110;
    case 1: goto L_1110a118;
    case 2: goto L_1110a128;
    case 3: goto L_1110a13c;
    default: x86_unimpl("switch@0x1110a08a out of table"); return;
  }
  /* 1110a091 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1110a094 mov ah, 0xa0 */
  AH = (0xa0u);
  /* 1110a096 adc byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1110a098 mov esp, 0xc41110a0 */
  ESP = (0xc41110a0u);
  /* 1110a09d mov al, byte ptr [0xa0cc1110] */
  AL = (r8((uint32_t)(0xa0cc1110)));
  /* 1110a0a2 adc byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1110a0a4 aam 0xa0 */
  x86_unimpl("aam @ 0x1110a0a4");
  /* 1110a0a6 adc byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1110a0a8 fsub qword ptr [eax - 0x5f1beef0] */
  FPU_ST(0) = FPU_ST(0) - (rf64((uint32_t)(EAX + -0x5f1beef0)));
  /* 1110a0ae adc byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1110a0b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1110a0b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1110a0bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1110a0c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1110a0c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1110a0c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1110a0cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1110a0d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1110a0d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1110a0d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1110a0dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1110a0e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1110a0e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1110a0e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1110a0ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1110a0f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a0f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1110a0f7:;
  /* 1110a0f7 jmp dword ptr [edx*4 + 0x1110a100] */
  switch (EDX) {
    case 0: goto L_1110a110;
    case 1: goto L_1110a118;
    case 2: goto L_1110a128;
    case 3: goto L_1110a13c;
    default: x86_unimpl("switch@0x1110a0f7 out of table"); return;
  }
  /* 1110a0fe mov edi, edi */
  EDI = (EDI);
L_1110a110:;
  /* 1110a110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110a113 pop esi */
  ESI = (pop32());
  /* 1110a114 pop edi */
  EDI = (pop32());
  /* 1110a115 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110a116 ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
  /* 1110a117 nop  */
  /* nop */
L_1110a118:;
  /* 1110a118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110a11b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110a11e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110a121 pop esi */
  ESI = (pop32());
  /* 1110a122 pop edi */
  EDI = (pop32());
  /* 1110a123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110a124 ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
  /* 1110a125 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110a128:;
  /* 1110a128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110a12b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110a12e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110a131 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110a134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110a137 pop esi */
  ESI = (pop32());
  /* 1110a138 pop edi */
  EDI = (pop32());
  /* 1110a139 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110a13a ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
  /* 1110a13b nop  */
  /* nop */
L_1110a13c:;
  /* 1110a13c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110a13f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110a142 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110a145 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110a148 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110a14b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110a14e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110a151 pop esi */
  ESI = (pop32());
  /* 1110a152 pop edi */
  EDI = (pop32());
  /* 1110a153 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110a154 ret  */
  ESPCHK(0x11109e20u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1110a160 (104 bytes, 43 insns) */
void f_1110a160(void) {
  FTRACE(0x1110a160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110a160 push ebx */
  push32((uint32_t)(EBX));
  /* 1110a161 push esi */
  push32((uint32_t)(ESI));
  /* 1110a162 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1110a166 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110a168 jne 0x1110a182 */
  if (!C.zf) goto L_1110a182;
  /* 1110a16a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1110a16e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1110a172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110a174 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1110a176 mov ebx, eax */
  EBX = (EAX);
  /* 1110a178 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1110a17c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1110a17e mov edx, ebx */
  EDX = (EBX);
  /* 1110a180 jmp 0x1110a1c3 */
  goto L_1110a1c3;
L_1110a182:;
  /* 1110a182 mov ecx, eax */
  ECX = (EAX);
  /* 1110a184 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1110a188 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1110a18c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1110a190:;
  /* 1110a190 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1110a192 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1110a194 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1110a196 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1110a198 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110a19a jne 0x1110a190 */
  if (!C.zf) goto L_1110a190;
  /* 1110a19c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1110a19e mov esi, eax */
  ESI = (EAX);
  /* 1110a1a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1110a1a4 mov ecx, eax */
  ECX = (EAX);
  /* 1110a1a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1110a1aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1110a1ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a1ae jb 0x1110a1be */
  if (C.cf) goto L_1110a1be;
  /* 1110a1b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a1b4 ja 0x1110a1be */
  if ((!C.cf&&!C.zf)) goto L_1110a1be;
  /* 1110a1b6 jb 0x1110a1bf */
  if (C.cf) goto L_1110a1bf;
  /* 1110a1b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a1bc jbe 0x1110a1bf */
  if ((C.cf||C.zf)) goto L_1110a1bf;
L_1110a1be:;
  /* 1110a1be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1110a1bf:;
  /* 1110a1bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110a1c1 mov eax, esi */
  EAX = (ESI);
L_1110a1c3:;
  /* 1110a1c3 pop esi */
  ESI = (pop32());
  /* 1110a1c4 pop ebx */
  EBX = (pop32());
  /* 1110a1c5 ret 0x10 */
  ESPCHK(0x1110a160u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1110a1d0 (117 bytes, 44 insns) */
void f_1110a1d0(void) {
  FTRACE(0x1110a1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110a1d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1110a1d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1110a1d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110a1d7 jne 0x1110a1f1 */
  if (!C.zf) goto L_1110a1f1;
  /* 1110a1d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1110a1dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1110a1e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110a1e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1110a1e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1110a1e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1110a1eb mov eax, edx */
  EAX = (EDX);
  /* 1110a1ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110a1ef jmp 0x1110a241 */
  goto L_1110a241;
L_1110a1f1:;
  /* 1110a1f1 mov ecx, eax */
  ECX = (EAX);
  /* 1110a1f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1110a1f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1110a1fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1110a1ff:;
  /* 1110a1ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1110a201 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1110a203 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1110a205 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1110a207 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110a209 jne 0x1110a1ff */
  if (!C.zf) goto L_1110a1ff;
  /* 1110a20b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1110a20d mov ecx, eax */
  ECX = (EAX);
  /* 1110a20f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1110a213 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1110a214 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1110a218 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a21a jb 0x1110a22a */
  if (C.cf) goto L_1110a22a;
  /* 1110a21c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a220 ja 0x1110a22a */
  if ((!C.cf&&!C.zf)) goto L_1110a22a;
  /* 1110a222 jb 0x1110a232 */
  if (C.cf) goto L_1110a232;
  /* 1110a224 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a228 jbe 0x1110a232 */
  if ((C.cf||C.zf)) goto L_1110a232;
L_1110a22a:;
  /* 1110a22a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a22e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1110a232:;
  /* 1110a232 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a236 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a23a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110a23c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110a23e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1110a241:;
  /* 1110a241 pop ebx */
  EBX = (pop32());
  /* 1110a242 ret 0x10 */
  ESPCHK(0x1110a1d0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a250 @ 0x1110a250 (628 bytes, 214 insns) */
void f_1110a250(void) {
  FTRACE(0x1110a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110a250 push ebp */
  push32((uint32_t)(EBP));
  /* 1110a251 mov ebp, esp */
  EBP = (ESP);
  /* 1110a253 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a256 push ebx */
  push32((uint32_t)(EBX));
  /* 1110a257 push esi */
  push32((uint32_t)(ESI));
  /* 1110a258 push edi */
  push32((uint32_t)(EDI));
L_1110a259:;
  /* 1110a259 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a25d jne 0x1110a27d */
  if (!C.zf) goto L_1110a27d;
  /* 1110a25f push 0x1112af78 */
  push32((uint32_t)(0x1112af78u));
  /* 1110a264 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110a266 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1110a268 push 0x1112af6c */
  push32((uint32_t)(0x1112af6cu));
  /* 1110a26d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110a26f call 0x11102600 */
  push32(0x1110a274u); f_11102600();
  /* 1110a274 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a27a jne 0x1110a27d */
  if (!C.zf) goto L_1110a27d;
  /* 1110a27c int3  */
  x86_unimpl("int3 @ 0x1110a27c");
L_1110a27d:;
  /* 1110a27d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110a27f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a281 jne 0x1110a259 */
  if (!C.zf) goto L_1110a259;
  /* 1110a283 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a286 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110a289 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a28c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1110a28f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1110a292 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a295 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110a298 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1110a29e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110a2a0 je 0x1110a2af */
  if (C.zf) goto L_1110a2af;
  /* 1110a2a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110a2a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1110a2ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110a2ad je 0x1110a2c5 */
  if (C.zf) goto L_1110a2c5;
L_1110a2af:;
  /* 1110a2af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1110a2b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1110a2b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1110a2bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110a2c0 jmp 0x1110a4bd */
  goto L_1110a4bd;
L_1110a2c5:;
  /* 1110a2c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1110a2cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1110a2ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a2d0 je 0x1110a31c */
  if (C.zf) goto L_1110a31c;
  /* 1110a2d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1110a2dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1110a2e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1110a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a2e7 je 0x1110a305 */
  if (C.zf) goto L_1110a305;
  /* 1110a2e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1110a2f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1110a2f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a2f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110a2fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1110a2fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a300 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1110a303 jmp 0x1110a31c */
  goto L_1110a31c;
L_1110a305:;
  /* 1110a305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a308 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110a30b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1110a30e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a311 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1110a314 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110a317 jmp 0x1110a4bd */
  goto L_1110a4bd;
L_1110a31c:;
  /* 1110a31c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a31f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110a322 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1110a325 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a328 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1110a32b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a32e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110a331 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1110a334 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a337 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1110a33a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a33d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1110a344 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110a34b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a34e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1110a351 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a354 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110a357 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1110a35d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110a35f jne 0x1110a38f */
  if (!C.zf) goto L_1110a38f;
  /* 1110a361 cmp dword ptr [ebp - 8], 0x1112e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1112e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a368 je 0x1110a373 */
  if (C.zf) goto L_1110a373;
  /* 1110a36a cmp dword ptr [ebp - 8], 0x1112e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1112e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a371 jne 0x1110a383 */
  if (!C.zf) goto L_1110a383;
L_1110a373:;
  /* 1110a373 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110a376 push edx */
  push32((uint32_t)(EDX));
  /* 1110a377 call 0x1110c1c0 */
  push32(0x1110a37cu); f_1110c1c0();
  /* 1110a37c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a37f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a381 jne 0x1110a38f */
  if (!C.zf) goto L_1110a38f;
L_1110a383:;
  /* 1110a383 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a386 push eax */
  push32((uint32_t)(EAX));
  /* 1110a387 call 0x1110c0f0 */
  push32(0x1110a38cu); f_1110c0f0();
  /* 1110a38c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110a38f:;
  /* 1110a38f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a392 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110a395 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1110a39b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110a39d je 0x1110a47b */
  if (C.zf) goto L_1110a47b;
L_1110a3a3:;
  /* 1110a3a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a3a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a3a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1110a3ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a3ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110a3b0 jge 0x1110a3d3 */
  if ((C.sf==C.of)) goto L_1110a3d3;
  /* 1110a3b2 push 0x1112af2c */
  push32((uint32_t)(0x1112af2cu));
  /* 1110a3b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110a3b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1110a3be push 0x1112af6c */
  push32((uint32_t)(0x1112af6cu));
  /* 1110a3c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110a3c5 call 0x11102600 */
  push32(0x1110a3cau); f_11102600();
  /* 1110a3ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a3cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a3d0 jne 0x1110a3d3 */
  if (!C.zf) goto L_1110a3d3;
  /* 1110a3d2 int3  */
  x86_unimpl("int3 @ 0x1110a3d2");
L_1110a3d3:;
  /* 1110a3d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110a3d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a3d7 jne 0x1110a3a3 */
  if (!C.zf) goto L_1110a3a3;
  /* 1110a3d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a3dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a3df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1110a3e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a3e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110a3e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a3ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1110a3ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a3f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a3f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1110a3f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a3f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1110a3fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a3fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a401 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1110a404 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a408 jle 0x1110a426 */
  if ((C.zf||C.sf!=C.of)) goto L_1110a426;
  /* 1110a40a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a40d push ecx */
  push32((uint32_t)(ECX));
  /* 1110a40e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a411 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1110a414 push eax */
  push32((uint32_t)(EAX));
  /* 1110a415 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110a418 push ecx */
  push32((uint32_t)(ECX));
  /* 1110a419 call 0x1110bde0 */
  push32(0x1110a41eu); f_1110bde0();
  /* 1110a41e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a421 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1110a424 jmp 0x1110a46e */
  goto L_1110a46e;
L_1110a426:;
  /* 1110a426 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a42a je 0x1110a449 */
  if (C.zf) goto L_1110a449;
  /* 1110a42c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110a42f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1110a432 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110a435 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1110a438 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110a43b mov ecx, dword ptr [edx*4 + 0x11130ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 1110a442 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a444 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1110a447 jmp 0x1110a450 */
  goto L_1110a450;
L_1110a449:;
  /* 1110a449 mov dword ptr [ebp - 0x14], 0x1112da60 */
  w32((uint32_t)(EBP + -0x14), (0x1112da60u));
L_1110a450:;
  /* 1110a450 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110a453 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1110a457 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1110a45a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a45c je 0x1110a46e */
  if (C.zf) goto L_1110a46e;
  /* 1110a45e push 2 */
  push32((uint32_t)(0x2u));
  /* 1110a460 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110a462 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110a465 push ecx */
  push32((uint32_t)(ECX));
  /* 1110a466 call 0x1110bc90 */
  push32(0x1110a46bu); f_1110bc90();
  /* 1110a46b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110a46e:;
  /* 1110a46e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a471 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1110a474 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1110a477 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1110a479 jmp 0x1110a499 */
  goto L_1110a499;
L_1110a47b:;
  /* 1110a47b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1110a482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a485 push edx */
  push32((uint32_t)(EDX));
  /* 1110a486 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1110a489 push eax */
  push32((uint32_t)(EAX));
  /* 1110a48a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110a48d push ecx */
  push32((uint32_t)(ECX));
  /* 1110a48e call 0x1110bde0 */
  push32(0x1110a493u); f_1110bde0();
  /* 1110a493 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a496 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1110a499:;
  /* 1110a499 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110a49c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a49f je 0x1110a4b5 */
  if (C.zf) goto L_1110a4b5;
  /* 1110a4a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a4a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110a4a7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1110a4aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a4ad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1110a4b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110a4b3 jmp 0x1110a4bd */
  goto L_1110a4bd;
L_1110a4b5:;
  /* 1110a4b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110a4b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1110a4bd:;
  /* 1110a4bd pop edi */
  EDI = (pop32());
  /* 1110a4be pop esi */
  ESI = (pop32());
  /* 1110a4bf pop ebx */
  EBX = (pop32());
  /* 1110a4c0 mov esp, ebp */
  ESP = (EBP);
  /* 1110a4c2 pop ebp */
  EBP = (pop32());
  /* 1110a4c3 ret  */
  ESPCHK(0x1110a250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4d0 @ 0x1110a4d0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1110a4d0(void) {
  FTRACE(0x1110a4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110a4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110a4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1110a4d3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a4d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1110a4da push esi */
  push32((uint32_t)(ESI));
  /* 1110a4db push edi */
  push32((uint32_t)(EDI));
  /* 1110a4dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1110a4e3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1110a4ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1110a4f4:;
  /* 1110a4f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a4f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1110a4f9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1110a4fc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a500 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a503 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a506 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1110a509 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110a50b je 0x1110b0e7 */
  if (C.zf) goto L_1110b0e7;
  /* 1110a511 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a518 jl 0x1110b0e7 */
  if ((C.sf!=C.of)) goto L_1110b0e7;
  /* 1110a51e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a522 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a525 jl 0x1110a546 */
  if ((C.sf!=C.of)) goto L_1110a546;
  /* 1110a527 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a52b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a52e jg 0x1110a546 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110a546;
  /* 1110a530 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a534 movsx ecx, byte ptr [eax + 0x1112af64] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1112af64))));
  /* 1110a53b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1110a53e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1110a544 jmp 0x1110a550 */
  goto L_1110a550;
L_1110a546:;
  /* 1110a546 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1110a550:;
  /* 1110a550 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1110a556 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1110a559 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110a55c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110a55f movsx edx, byte ptr [ecx + eax*8 + 0x1112af84] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1112af84))));
  /* 1110a567 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1110a56a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1110a56d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110a570 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1110a576 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a57d ja 0x1110b0e2 */
  if ((!C.cf&&!C.zf)) goto L_1110b0e2;
  /* 1110a583 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1110a589 jmp dword ptr [ecx*4 + 0x1110b0f4] */
  switch (ECX) {
    case 0: goto L_1110a590;
    case 1: goto L_1110a62a;
    case 2: goto L_1110a66c;
    case 3: goto L_1110a6db;
    case 4: goto L_1110a733;
    case 5: goto L_1110a742;
    case 6: goto L_1110a78e;
    case 7: goto L_1110a821;
    case 8: goto L_1110a6b8;
    case 9: goto L_1110a6c3;
    case 10: goto L_1110a6ae;
    case 11: goto L_1110a6a3;
    case 12: goto L_1110a6ce;
    case 13: goto L_1110a6d6;
    default: x86_unimpl("switch@0x1110a589 out of table"); return;
  }
L_1110a590:;
  /* 1110a590 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1110a597 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110a59a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1110a5a0 mov eax, dword ptr [0x1112dc98] */
  EAX = (r32((uint32_t)(0x1112dc98)));
  /* 1110a5a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110a5a7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1110a5ab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1110a5b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110a5b3 je 0x1110a60d */
  if (C.zf) goto L_1110a60d;
  /* 1110a5b5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1110a5bb push edx */
  push32((uint32_t)(EDX));
  /* 1110a5bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110a5bf push eax */
  push32((uint32_t)(EAX));
  /* 1110a5c0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1110a5c5 call 0x1110b200 */
  push32(0x1110a5cau); f_1110b200();
  /* 1110a5ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a5cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a5d0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110a5d2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1110a5d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a5d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a5db mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1110a5de:;
  /* 1110a5de movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a5e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110a5e4 jne 0x1110a607 */
  if (!C.zf) goto L_1110a607;
  /* 1110a5e6 push 0x1112b004 */
  push32((uint32_t)(0x1112b004u));
  /* 1110a5eb push 0 */
  push32((uint32_t)(0x0u));
  /* 1110a5ed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1110a5f2 push 0x1112aff8 */
  push32((uint32_t)(0x1112aff8u));
  /* 1110a5f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110a5f9 call 0x11102600 */
  push32(0x1110a5feu); f_11102600();
  /* 1110a5fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a601 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a604 jne 0x1110a607 */
  if (!C.zf) goto L_1110a607;
  /* 1110a606 int3  */
  x86_unimpl("int3 @ 0x1110a606");
L_1110a607:;
  /* 1110a607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110a609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a60b jne 0x1110a5de */
  if (!C.zf) goto L_1110a5de;
L_1110a60d:;
  /* 1110a60d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1110a613 push ecx */
  push32((uint32_t)(ECX));
  /* 1110a614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110a617 push edx */
  push32((uint32_t)(EDX));
  /* 1110a618 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a61c push eax */
  push32((uint32_t)(EAX));
  /* 1110a61d call 0x1110b200 */
  push32(0x1110a622u); f_1110b200();
  /* 1110a622 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a625 jmp 0x1110b0e2 */
  goto L_1110b0e2;
L_1110a62a:;
  /* 1110a62a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110a631 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110a634 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1110a63a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1110a640 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1110a646 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1110a64c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1110a64f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110a656 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1110a660 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1110a667 jmp 0x1110b0e2 */
  goto L_1110b0e2;
L_1110a66c:;
  /* 1110a66c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a670 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1110a676 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1110a67c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a67f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1110a685 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a68c ja 0x1110a6d6 */
  if ((!C.cf&&!C.zf)) goto L_1110a6d6;
  /* 1110a68e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1110a694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110a696 mov al, byte ptr [ecx + 0x1110b12c] */
  AL = (r8((uint32_t)(ECX + 0x1110b12c)));
  /* 1110a69c jmp dword ptr [eax*4 + 0x1110b114] */
  switch (EAX) {
    case 0: goto L_1110a6b8;
    case 1: goto L_1110a6c3;
    case 2: goto L_1110a6ae;
    case 3: goto L_1110a6a3;
    case 4: goto L_1110a6ce;
    case 5: goto L_1110a6d6;
    default: x86_unimpl("switch@0x1110a69c out of table"); return;
  }
L_1110a6a3:;
  /* 1110a6a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a6a6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1110a6a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110a6ac jmp 0x1110a6d6 */
  goto L_1110a6d6;
L_1110a6ae:;
  /* 1110a6ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a6b1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1110a6b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110a6b6 jmp 0x1110a6d6 */
  goto L_1110a6d6;
L_1110a6b8:;
  /* 1110a6b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a6bb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1110a6be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110a6c1 jmp 0x1110a6d6 */
  goto L_1110a6d6;
L_1110a6c3:;
  /* 1110a6c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a6c6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1110a6c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110a6cc jmp 0x1110a6d6 */
  goto L_1110a6d6;
L_1110a6ce:;
  /* 1110a6ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a6d1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1110a6d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110a6d6:;
  /* 1110a6d6 jmp 0x1110b0e2 */
  goto L_1110b0e2;
L_1110a6db:;
  /* 1110a6db movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a6df cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a6e2 jne 0x1110a717 */
  if (!C.zf) goto L_1110a717;
  /* 1110a6e4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1110a6e7 push edx */
  push32((uint32_t)(EDX));
  /* 1110a6e8 call 0x1110b310 */
  push32(0x1110a6edu); f_1110b310();
  /* 1110a6ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a6f0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1110a6f6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a6fd jge 0x1110a715 */
  if ((C.sf==C.of)) goto L_1110a715;
  /* 1110a6ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a702 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1110a704 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110a707 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1110a70d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110a70f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1110a715:;
  /* 1110a715 jmp 0x1110a72e */
  goto L_1110a72e;
L_1110a717:;
  /* 1110a717 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1110a71d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110a720 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a724 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1110a728 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1110a72e:;
  /* 1110a72e jmp 0x1110b0e2 */
  goto L_1110b0e2;
L_1110a733:;
  /* 1110a733 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1110a73d jmp 0x1110b0e2 */
  goto L_1110b0e2;
L_1110a742:;
  /* 1110a742 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a746 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a749 jne 0x1110a772 */
  if (!C.zf) goto L_1110a772;
  /* 1110a74b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1110a74e push eax */
  push32((uint32_t)(EAX));
  /* 1110a74f call 0x1110b310 */
  push32(0x1110a754u); f_1110b310();
  /* 1110a754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a757 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1110a75d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a764 jge 0x1110a770 */
  if ((C.sf==C.of)) goto L_1110a770;
  /* 1110a766 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1110a770:;
  /* 1110a770 jmp 0x1110a789 */
  goto L_1110a789;
L_1110a772:;
  /* 1110a772 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1110a778 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110a77b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a77f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1110a783 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1110a789:;
  /* 1110a789 jmp 0x1110b0e2 */
  goto L_1110b0e2;
L_1110a78e:;
  /* 1110a78e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a792 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1110a798 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1110a79e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a7a1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1110a7a7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a7ae ja 0x1110a81c */
  if ((!C.cf&&!C.zf)) goto L_1110a81c;
  /* 1110a7b0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1110a7b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110a7b8 mov al, byte ptr [ecx + 0x1110b151] */
  AL = (r8((uint32_t)(ECX + 0x1110b151)));
  /* 1110a7be jmp dword ptr [eax*4 + 0x1110b13d] */
  switch (EAX) {
    case 0: goto L_1110a7d0;
    case 1: goto L_1110a809;
    case 2: goto L_1110a7c5;
    case 3: goto L_1110a813;
    case 4: goto L_1110a81c;
    default: x86_unimpl("switch@0x1110a7be out of table"); return;
  }
L_1110a7c5:;
  /* 1110a7c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a7c8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1110a7cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110a7ce jmp 0x1110a81c */
  goto L_1110a81c;
L_1110a7d0:;
  /* 1110a7d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a7d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110a7d6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a7d9 jne 0x1110a7fb */
  if (!C.zf) goto L_1110a7fb;
  /* 1110a7db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a7de movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1110a7e2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a7e5 jne 0x1110a7fb */
  if (!C.zf) goto L_1110a7fb;
  /* 1110a7e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110a7ea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a7ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1110a7f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a7f3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1110a7f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110a7f9 jmp 0x1110a807 */
  goto L_1110a807;
L_1110a7fb:;
  /* 1110a7fb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1110a802 jmp 0x1110a590 */
  goto L_1110a590;
L_1110a807:;
  /* 1110a807 jmp 0x1110a81c */
  goto L_1110a81c;
L_1110a809:;
  /* 1110a809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a80c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1110a80e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110a811 jmp 0x1110a81c */
  goto L_1110a81c;
L_1110a813:;
  /* 1110a813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a816 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1110a819 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1110a81c:;
  /* 1110a81c jmp 0x1110b0e2 */
  goto L_1110b0e2;
L_1110a821:;
  /* 1110a821 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110a825 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1110a82b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1110a831 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110a834 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1110a83a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a841 ja 0x1110af07 */
  if ((!C.cf&&!C.zf)) goto L_1110af07;
  /* 1110a847 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1110a84d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110a84f mov cl, byte ptr [edx + 0x1110b1bc] */
  CL = (r8((uint32_t)(EDX + 0x1110b1bc)));
  /* 1110a855 jmp dword ptr [ecx*4 + 0x1110b180] */
  switch (ECX) {
    case 0: goto L_1110a85c;
    case 1: goto L_1110aaf0;
    case 2: goto L_1110a980;
    case 3: goto L_1110ac29;
    case 4: goto L_1110a8eb;
    case 5: goto L_1110a871;
    case 6: goto L_1110abfb;
    case 7: goto L_1110ab00;
    case 8: goto L_1110aaa5;
    case 9: goto L_1110ac75;
    case 10: goto L_1110ac1f;
    case 11: goto L_1110a996;
    case 12: goto L_1110ac13;
    case 13: goto L_1110ac35;
    case 14: goto L_1110af07;
    default: x86_unimpl("switch@0x1110a855 out of table"); return;
  }
L_1110a85c:;
  /* 1110a85c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a85f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1110a864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a866 jne 0x1110a871 */
  if (!C.zf) goto L_1110a871;
  /* 1110a868 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a86b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1110a86e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1110a871:;
  /* 1110a871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a874 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1110a87a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110a87c je 0x1110a8b7 */
  if (C.zf) goto L_1110a8b7;
  /* 1110a87e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1110a881 push eax */
  push32((uint32_t)(EAX));
  /* 1110a882 call 0x1110b350 */
  push32(0x1110a887u); f_1110b350();
  /* 1110a887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a88a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1110a88e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1110a892 push ecx */
  push32((uint32_t)(ECX));
  /* 1110a893 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1110a899 push edx */
  push32((uint32_t)(EDX));
  /* 1110a89a call 0x1110c430 */
  push32(0x1110a89fu); f_1110c430();
  /* 1110a89f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a8a2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1110a8a5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a8a9 jge 0x1110a8b5 */
  if ((C.sf==C.of)) goto L_1110a8b5;
  /* 1110a8ab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1110a8b5:;
  /* 1110a8b5 jmp 0x1110a8dd */
  goto L_1110a8dd;
L_1110a8b7:;
  /* 1110a8b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1110a8ba push eax */
  push32((uint32_t)(EAX));
  /* 1110a8bb call 0x1110b310 */
  push32(0x1110a8c0u); f_1110b310();
  /* 1110a8c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a8c3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1110a8ca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1110a8d0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1110a8d6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1110a8dd:;
  /* 1110a8dd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1110a8e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1110a8e6 jmp 0x1110af07 */
  goto L_1110af07;
L_1110a8eb:;
  /* 1110a8eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1110a8ee push eax */
  push32((uint32_t)(EAX));
  /* 1110a8ef call 0x1110b310 */
  push32(0x1110a8f4u); f_1110b310();
  /* 1110a8f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a8f7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1110a8fd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a904 je 0x1110a912 */
  if (C.zf) goto L_1110a912;
  /* 1110a906 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1110a90c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a910 jne 0x1110a92c */
  if (!C.zf) goto L_1110a92c;
L_1110a912:;
  /* 1110a912 mov edx, dword ptr [0x1112dfb0] */
  EDX = (r32((uint32_t)(0x1112dfb0)));
  /* 1110a918 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1110a91b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110a91e push eax */
  push32((uint32_t)(EAX));
  /* 1110a91f call 0x11106370 */
  push32(0x1110a924u); f_11106370();
  /* 1110a924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a927 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1110a92a jmp 0x1110a97b */
  goto L_1110a97b;
L_1110a92c:;
  /* 1110a92c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a92f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1110a935 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110a937 je 0x1110a95c */
  if (C.zf) goto L_1110a95c;
  /* 1110a939 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1110a93f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1110a942 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1110a945 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1110a94b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1110a94e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1110a950 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1110a953 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1110a95a jmp 0x1110a97b */
  goto L_1110a97b;
L_1110a95c:;
  /* 1110a95c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1110a963 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1110a969 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1110a96c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1110a96f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1110a975 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1110a978 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1110a97b:;
  /* 1110a97b jmp 0x1110af07 */
  goto L_1110af07;
L_1110a980:;
  /* 1110a980 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a983 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1110a989 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110a98b jne 0x1110a996 */
  if (!C.zf) goto L_1110a996;
  /* 1110a98d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a990 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1110a993 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1110a996:;
  /* 1110a996 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a99d jne 0x1110a9ab */
  if (!C.zf) goto L_1110a9ab;
  /* 1110a99f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1110a9a9 jmp 0x1110a9b7 */
  goto L_1110a9b7;
L_1110a9ab:;
  /* 1110a9ab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1110a9b1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1110a9b7:;
  /* 1110a9b7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1110a9bd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1110a9c3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1110a9c6 push edx */
  push32((uint32_t)(EDX));
  /* 1110a9c7 call 0x1110b310 */
  push32(0x1110a9ccu); f_1110b310();
  /* 1110a9cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110a9cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1110a9d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110a9d5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1110a9da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110a9dc je 0x1110aa46 */
  if (C.zf) goto L_1110aa46;
  /* 1110a9de cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110a9e2 jne 0x1110a9ed */
  if (!C.zf) goto L_1110a9ed;
  /* 1110a9e4 mov ecx, dword ptr [0x1112dfb4] */
  ECX = (r32((uint32_t)(0x1112dfb4)));
  /* 1110a9ea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1110a9ed:;
  /* 1110a9ed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1110a9f4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110a9f7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1110a9fd:;
  /* 1110a9fd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1110aa03 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1110aa09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110aa0c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1110aa12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110aa14 je 0x1110aa36 */
  if (C.zf) goto L_1110aa36;
  /* 1110aa16 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1110aa1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110aa1e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1110aa21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110aa23 je 0x1110aa36 */
  if (C.zf) goto L_1110aa36;
  /* 1110aa25 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1110aa2b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110aa2e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1110aa34 jmp 0x1110a9fd */
  goto L_1110a9fd;
L_1110aa36:;
  /* 1110aa36 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1110aa3c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110aa3f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1110aa41 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1110aa44 jmp 0x1110aaa0 */
  goto L_1110aaa0;
L_1110aa46:;
  /* 1110aa46 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110aa4a jne 0x1110aa54 */
  if (!C.zf) goto L_1110aa54;
  /* 1110aa4c mov eax, dword ptr [0x1112dfb0] */
  EAX = (r32((uint32_t)(0x1112dfb0)));
  /* 1110aa51 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1110aa54:;
  /* 1110aa54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110aa57 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1110aa5d:;
  /* 1110aa5d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1110aa63 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1110aa69 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110aa6c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1110aa72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110aa74 je 0x1110aa94 */
  if (C.zf) goto L_1110aa94;
  /* 1110aa76 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1110aa7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110aa7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110aa81 je 0x1110aa94 */
  if (C.zf) goto L_1110aa94;
  /* 1110aa83 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1110aa89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110aa8c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1110aa92 jmp 0x1110aa5d */
  goto L_1110aa5d;
L_1110aa94:;
  /* 1110aa94 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1110aa9a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110aa9d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1110aaa0:;
  /* 1110aaa0 jmp 0x1110af07 */
  goto L_1110af07;
L_1110aaa5:;
  /* 1110aaa5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1110aaa8 push edx */
  push32((uint32_t)(EDX));
  /* 1110aaa9 call 0x1110b310 */
  push32(0x1110aaaeu); f_1110b310();
  /* 1110aaae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110aab1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1110aab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110aaba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1110aabd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110aabf je 0x1110aad3 */
  if (C.zf) goto L_1110aad3;
  /* 1110aac1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1110aac7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1110aace mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1110aad1 jmp 0x1110aae1 */
  goto L_1110aae1;
L_1110aad3:;
  /* 1110aad3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1110aad9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1110aadf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1110aae1:;
  /* 1110aae1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1110aaeb jmp 0x1110af07 */
  goto L_1110af07;
L_1110aaf0:;
  /* 1110aaf0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1110aaf7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1110aafa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1110aafd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1110ab00:;
  /* 1110ab00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ab03 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1110ab05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110ab08 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1110ab0e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1110ab11 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ab18 jge 0x1110ab26 */
  if ((C.sf==C.of)) goto L_1110ab26;
  /* 1110ab1a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1110ab24 jmp 0x1110ab42 */
  goto L_1110ab42;
L_1110ab26:;
  /* 1110ab26 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ab2d jne 0x1110ab42 */
  if (!C.zf) goto L_1110ab42;
  /* 1110ab2f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110ab33 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ab36 jne 0x1110ab42 */
  if (!C.zf) goto L_1110ab42;
  /* 1110ab38 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1110ab42:;
  /* 1110ab42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110ab45 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ab48 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1110ab4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110ab4e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ab51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110ab53 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1110ab56 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1110ab5c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1110ab62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ab65 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ab66 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1110ab6c push edx */
  push32((uint32_t)(EDX));
  /* 1110ab6d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110ab71 push eax */
  push32((uint32_t)(EAX));
  /* 1110ab72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110ab75 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ab76 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1110ab7c push edx */
  push32((uint32_t)(EDX));
  /* 1110ab7d call dword ptr [0x1112e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112e3a0))), 0x1110ab83u);
  /* 1110ab83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ab86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ab89 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1110ab8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ab90 je 0x1110aba8 */
  if (C.zf) goto L_1110aba8;
  /* 1110ab92 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ab99 jne 0x1110aba8 */
  if (!C.zf) goto L_1110aba8;
  /* 1110ab9b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110ab9e push ecx */
  push32((uint32_t)(ECX));
  /* 1110ab9f call dword ptr [0x1112e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112e3ac))), 0x1110aba5u);
  /* 1110aba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110aba8:;
  /* 1110aba8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1110abac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110abaf jne 0x1110abca */
  if (!C.zf) goto L_1110abca;
  /* 1110abb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110abb4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1110abb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110abbb jne 0x1110abca */
  if (!C.zf) goto L_1110abca;
  /* 1110abbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110abc0 push ecx */
  push32((uint32_t)(ECX));
  /* 1110abc1 call dword ptr [0x1112e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112e3a4))), 0x1110abc7u);
  /* 1110abc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110abca:;
  /* 1110abca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110abcd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110abd0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110abd3 jne 0x1110abe7 */
  if (!C.zf) goto L_1110abe7;
  /* 1110abd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110abd8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1110abdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110abde mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110abe1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110abe4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1110abe7:;
  /* 1110abe7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110abea push eax */
  push32((uint32_t)(EAX));
  /* 1110abeb call 0x11106370 */
  push32(0x1110abf0u); f_11106370();
  /* 1110abf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110abf3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1110abf6 jmp 0x1110af07 */
  goto L_1110af07;
L_1110abfb:;
  /* 1110abfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110abfe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1110ac01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110ac04 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1110ac0e jmp 0x1110ac95 */
  goto L_1110ac95;
L_1110ac13:;
  /* 1110ac13 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1110ac1d jmp 0x1110ac95 */
  goto L_1110ac95;
L_1110ac1f:;
  /* 1110ac1f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1110ac29:;
  /* 1110ac29 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1110ac33 jmp 0x1110ac3f */
  goto L_1110ac3f;
L_1110ac35:;
  /* 1110ac35 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1110ac3f:;
  /* 1110ac3f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1110ac49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ac4c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1110ac52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110ac54 je 0x1110ac73 */
  if (C.zf) goto L_1110ac73;
  /* 1110ac56 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1110ac5d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1110ac63 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ac66 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1110ac6c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1110ac73:;
  /* 1110ac73 jmp 0x1110ac95 */
  goto L_1110ac95;
L_1110ac75:;
  /* 1110ac75 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1110ac7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ac82 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1110ac88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110ac8a je 0x1110ac95 */
  if (C.zf) goto L_1110ac95;
  /* 1110ac8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ac8f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1110ac92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1110ac95:;
  /* 1110ac95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ac98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1110ac9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ac9f je 0x1110acbe */
  if (C.zf) goto L_1110acbe;
  /* 1110aca1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1110aca4 push ecx */
  push32((uint32_t)(ECX));
  /* 1110aca5 call 0x1110b330 */
  push32(0x1110acaau); f_1110b330();
  /* 1110acaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110acad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1110acb3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1110acb9 jmp 0x1110ad4f */
  goto L_1110ad4f;
L_1110acbe:;
  /* 1110acbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110acc1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1110acc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110acc6 je 0x1110ad10 */
  if (C.zf) goto L_1110ad10;
  /* 1110acc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110accb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1110acce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110acd0 je 0x1110acf0 */
  if (C.zf) goto L_1110acf0;
  /* 1110acd2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1110acd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110acd6 call 0x1110b310 */
  push32(0x1110acdbu); f_1110b310();
  /* 1110acdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110acde movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1110ace1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110ace2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1110ace8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1110acee jmp 0x1110ad0e */
  goto L_1110ad0e;
L_1110acf0:;
  /* 1110acf0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1110acf3 push edx */
  push32((uint32_t)(EDX));
  /* 1110acf4 call 0x1110b310 */
  push32(0x1110acf9u); f_1110b310();
  /* 1110acf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110acfc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110ad01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110ad02 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1110ad08 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1110ad0e:;
  /* 1110ad0e jmp 0x1110ad4f */
  goto L_1110ad4f;
L_1110ad10:;
  /* 1110ad10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ad13 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1110ad16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ad18 je 0x1110ad35 */
  if (C.zf) goto L_1110ad35;
  /* 1110ad1a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1110ad1d push ecx */
  push32((uint32_t)(ECX));
  /* 1110ad1e call 0x1110b310 */
  push32(0x1110ad23u); f_1110b310();
  /* 1110ad23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ad26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110ad27 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1110ad2d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1110ad33 jmp 0x1110ad4f */
  goto L_1110ad4f;
L_1110ad35:;
  /* 1110ad35 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1110ad38 push edx */
  push32((uint32_t)(EDX));
  /* 1110ad39 call 0x1110b310 */
  push32(0x1110ad3eu); f_1110b310();
  /* 1110ad3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ad41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ad43 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1110ad49 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1110ad4f:;
  /* 1110ad4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ad52 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1110ad55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110ad57 je 0x1110ad97 */
  if (C.zf) goto L_1110ad97;
  /* 1110ad59 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ad60 jg 0x1110ad97 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110ad97;
  /* 1110ad62 jl 0x1110ad6d */
  if ((C.sf!=C.of)) goto L_1110ad6d;
  /* 1110ad64 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ad6b jae 0x1110ad97 */
  if (!C.cf) goto L_1110ad97;
L_1110ad6d:;
  /* 1110ad6d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1110ad73 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110ad75 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1110ad7b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ad7e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110ad80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1110ad86 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1110ad8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ad8f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1110ad92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110ad95 jmp 0x1110adaf */
  goto L_1110adaf;
L_1110ad97:;
  /* 1110ad97 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1110ad9d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1110ada3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1110ada9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1110adaf:;
  /* 1110adaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110adb2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1110adb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110adba jne 0x1110add7 */
  if (!C.zf) goto L_1110add7;
  /* 1110adbc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1110adc2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1110adc8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1110adcb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1110add1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1110add7:;
  /* 1110add7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110adde jge 0x1110adec */
  if ((C.sf==C.of)) goto L_1110adec;
  /* 1110ade0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1110adea jmp 0x1110adf5 */
  goto L_1110adf5;
L_1110adec:;
  /* 1110adec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110adef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1110adf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1110adf5:;
  /* 1110adf5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1110adfb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1110ae01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ae03 jne 0x1110ae0c */
  if (!C.zf) goto L_1110ae0c;
  /* 1110ae05 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1110ae0c:;
  /* 1110ae0c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1110ae0f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1110ae12:;
  /* 1110ae12 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1110ae18 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1110ae1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ae21 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1110ae27 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110ae29 jg 0x1110ae3f */
  if ((!C.zf&&C.sf==C.of)) goto L_1110ae3f;
  /* 1110ae2b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1110ae31 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1110ae37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110ae39 je 0x1110aec0 */
  if (C.zf) goto L_1110aec0;
L_1110ae3f:;
  /* 1110ae3f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1110ae45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110ae46 push edx */
  push32((uint32_t)(EDX));
  /* 1110ae47 push eax */
  push32((uint32_t)(EAX));
  /* 1110ae48 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1110ae4e push edx */
  push32((uint32_t)(EDX));
  /* 1110ae4f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1110ae55 push eax */
  push32((uint32_t)(EAX));
  /* 1110ae56 call 0x1110a1d0 */
  push32(0x1110ae5bu); f_1110a1d0();
  /* 1110ae5b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ae5e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1110ae64 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1110ae6a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110ae6b push edx */
  push32((uint32_t)(EDX));
  /* 1110ae6c push eax */
  push32((uint32_t)(EAX));
  /* 1110ae6d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1110ae73 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ae74 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1110ae7a push edx */
  push32((uint32_t)(EDX));
  /* 1110ae7b call 0x1110a160 */
  push32(0x1110ae80u); f_1110a160();
  /* 1110ae80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1110ae86 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1110ae8c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ae93 jle 0x1110aea7 */
  if ((C.zf||C.sf!=C.of)) goto L_1110aea7;
  /* 1110ae95 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1110ae9b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110aea1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1110aea7:;
  /* 1110aea7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110aeaa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1110aeb0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1110aeb2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110aeb5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110aeb8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1110aebb jmp 0x1110ae12 */
  goto L_1110ae12;
L_1110aec0:;
  /* 1110aec0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1110aec3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110aec6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1110aec9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110aecc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110aecf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1110aed2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110aed5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1110aeda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110aedc je 0x1110af07 */
  if (C.zf) goto L_1110af07;
  /* 1110aede mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110aee1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110aee4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110aee7 jne 0x1110aeef */
  if (!C.zf) goto L_1110aeef;
  /* 1110aee9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110aeed jne 0x1110af07 */
  if (!C.zf) goto L_1110af07;
L_1110aeef:;
  /* 1110aeef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110aef2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110aef5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1110aef8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110aefb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1110aefe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110af01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110af04 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1110af07:;
  /* 1110af07 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110af0e jne 0x1110b0e2 */
  if (!C.zf) goto L_1110b0e2;
  /* 1110af14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110af17 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1110af1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110af1c je 0x1110af6d */
  if (C.zf) goto L_1110af6d;
  /* 1110af1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110af21 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1110af27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110af29 je 0x1110af3b */
  if (C.zf) goto L_1110af3b;
  /* 1110af2b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1110af32 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1110af39 jmp 0x1110af6d */
  goto L_1110af6d;
L_1110af3b:;
  /* 1110af3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110af3e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1110af41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110af43 je 0x1110af55 */
  if (C.zf) goto L_1110af55;
  /* 1110af45 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1110af4c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1110af53 jmp 0x1110af6d */
  goto L_1110af6d;
L_1110af55:;
  /* 1110af55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110af58 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1110af5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110af5d je 0x1110af6d */
  if (C.zf) goto L_1110af6d;
  /* 1110af5f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1110af66 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1110af6d:;
  /* 1110af6d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1110af73 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110af76 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110af79 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1110af7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110af82 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1110af85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110af87 jne 0x1110afa5 */
  if (!C.zf) goto L_1110afa5;
  /* 1110af89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1110af8f push eax */
  push32((uint32_t)(EAX));
  /* 1110af90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110af93 push ecx */
  push32((uint32_t)(ECX));
  /* 1110af94 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1110af9a push edx */
  push32((uint32_t)(EDX));
  /* 1110af9b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1110af9d call 0x1110b280 */
  push32(0x1110afa2u); f_1110b280();
  /* 1110afa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110afa5:;
  /* 1110afa5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1110afab push eax */
  push32((uint32_t)(EAX));
  /* 1110afac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110afaf push ecx */
  push32((uint32_t)(ECX));
  /* 1110afb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110afb3 push edx */
  push32((uint32_t)(EDX));
  /* 1110afb4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1110afba push eax */
  push32((uint32_t)(EAX));
  /* 1110afbb call 0x1110b2c0 */
  push32(0x1110afc0u); f_1110b2c0();
  /* 1110afc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110afc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110afc6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1110afc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110afcb je 0x1110aff3 */
  if (C.zf) goto L_1110aff3;
  /* 1110afcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110afd0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1110afd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110afd5 jne 0x1110aff3 */
  if (!C.zf) goto L_1110aff3;
  /* 1110afd7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1110afdd push eax */
  push32((uint32_t)(EAX));
  /* 1110afde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110afe1 push ecx */
  push32((uint32_t)(ECX));
  /* 1110afe2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1110afe8 push edx */
  push32((uint32_t)(EDX));
  /* 1110afe9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1110afeb call 0x1110b280 */
  push32(0x1110aff0u); f_1110b280();
  /* 1110aff0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110aff3:;
  /* 1110aff3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110aff7 je 0x1110b0a1 */
  if (C.zf) goto L_1110b0a1;
  /* 1110affd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b001 jle 0x1110b0a1 */
  if ((C.zf||C.sf!=C.of)) goto L_1110b0a1;
  /* 1110b007 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110b00a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1110b010 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110b013 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1110b019:;
  /* 1110b019 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1110b01f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1110b025 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b028 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1110b02e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110b030 je 0x1110b09f */
  if (C.zf) goto L_1110b09f;
  /* 1110b032 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1110b038 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1110b03b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1110b042 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1110b049 push eax */
  push32((uint32_t)(EAX));
  /* 1110b04a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1110b050 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b051 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1110b057 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b05a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1110b060 call 0x1110c430 */
  push32(0x1110b065u); f_1110c430();
  /* 1110b065 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b068 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1110b06e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b075 jg 0x1110b079 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110b079;
  /* 1110b077 jmp 0x1110b09f */
  goto L_1110b09f;
L_1110b079:;
  /* 1110b079 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1110b07f push eax */
  push32((uint32_t)(EAX));
  /* 1110b080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b083 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b084 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1110b08a push edx */
  push32((uint32_t)(EDX));
  /* 1110b08b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1110b091 push eax */
  push32((uint32_t)(EAX));
  /* 1110b092 call 0x1110b2c0 */
  push32(0x1110b097u); f_1110b2c0();
  /* 1110b097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b09a jmp 0x1110b019 */
  goto L_1110b019;
L_1110b09f:;
  /* 1110b09f jmp 0x1110b0bc */
  goto L_1110b0bc;
L_1110b0a1:;
  /* 1110b0a1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1110b0a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b0a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b0ab push edx */
  push32((uint32_t)(EDX));
  /* 1110b0ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110b0af push eax */
  push32((uint32_t)(EAX));
  /* 1110b0b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110b0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b0b4 call 0x1110b2c0 */
  push32(0x1110b0b9u); f_1110b2c0();
  /* 1110b0b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110b0bc:;
  /* 1110b0bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110b0bf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1110b0c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110b0c4 je 0x1110b0e2 */
  if (C.zf) goto L_1110b0e2;
  /* 1110b0c6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1110b0cc push eax */
  push32((uint32_t)(EAX));
  /* 1110b0cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b0d1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1110b0d7 push edx */
  push32((uint32_t)(EDX));
  /* 1110b0d8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1110b0da call 0x1110b280 */
  push32(0x1110b0dfu); f_1110b280();
  /* 1110b0df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110b0e2:;
  /* 1110b0e2 jmp 0x1110a4f4 */
  goto L_1110a4f4;
L_1110b0e7:;
  /* 1110b0e7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1110b0ed pop edi */
  EDI = (pop32());
  /* 1110b0ee pop esi */
  ESI = (pop32());
  /* 1110b0ef pop ebx */
  EBX = (pop32());
  /* 1110b0f0 mov esp, ebp */
  ESP = (EBP);
  /* 1110b0f2 pop ebp */
  EBP = (pop32());
  /* 1110b0f3 ret  */
  ESPCHK(0x1110a4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x1110b200 (119 bytes, 44 insns) */
void f_1110b200(void) {
  FTRACE(0x1110b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b201 mov ebp, esp */
  EBP = (ESP);
  /* 1110b203 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b204 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b207 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1110b20a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b20d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b210 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1110b213 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b216 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b21a jl 0x1110b242 */
  if ((C.sf!=C.of)) goto L_1110b242;
  /* 1110b21c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b21f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110b221 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1110b224 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1110b226 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1110b22a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110b230 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110b233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b236 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110b238 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b23b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b23e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1110b240 jmp 0x1110b255 */
  goto L_1110b255;
L_1110b242:;
  /* 1110b242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b245 push edx */
  push32((uint32_t)(EDX));
  /* 1110b246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b249 push eax */
  push32((uint32_t)(EAX));
  /* 1110b24a call 0x1110a250 */
  push32(0x1110b24fu); f_1110a250();
  /* 1110b24f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b252 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110b255:;
  /* 1110b255 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b259 jne 0x1110b266 */
  if (!C.zf) goto L_1110b266;
  /* 1110b25b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b25e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1110b264 jmp 0x1110b273 */
  goto L_1110b273;
L_1110b266:;
  /* 1110b266 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b269 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110b26b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b26e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b271 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1110b273:;
  /* 1110b273 mov esp, ebp */
  ESP = (EBP);
  /* 1110b275 pop ebp */
  EBP = (pop32());
  /* 1110b276 ret  */
  ESPCHK(0x1110b200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b280 @ 0x1110b280 (53 bytes, 23 insns) */
void f_1110b280(void) {
  FTRACE(0x1110b280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b280 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b281 mov ebp, esp */
  EBP = (ESP);
L_1110b283:;
  /* 1110b283 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b286 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b289 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b28c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1110b28f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110b291 jle 0x1110b2b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1110b2b3;
  /* 1110b293 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b296 push edx */
  push32((uint32_t)(EDX));
  /* 1110b297 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b29a push eax */
  push32((uint32_t)(EAX));
  /* 1110b29b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b29e push ecx */
  push32((uint32_t)(ECX));
  /* 1110b29f call 0x1110b200 */
  push32(0x1110b2a4u); f_1110b200();
  /* 1110b2a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b2a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b2aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b2ad jne 0x1110b2b1 */
  if (!C.zf) goto L_1110b2b1;
  /* 1110b2af jmp 0x1110b2b3 */
  goto L_1110b2b3;
L_1110b2b1:;
  /* 1110b2b1 jmp 0x1110b283 */
  goto L_1110b283;
L_1110b2b3:;
  /* 1110b2b3 pop ebp */
  EBP = (pop32());
  /* 1110b2b4 ret  */
  ESPCHK(0x1110b280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c0 @ 0x1110b2c0 (74 bytes, 31 insns) */
void f_1110b2c0(void) {
  FTRACE(0x1110b2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1110b2c3 push ecx */
  push32((uint32_t)(ECX));
L_1110b2c4:;
  /* 1110b2c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b2c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b2ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b2cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1110b2d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110b2d2 jle 0x1110b306 */
  if ((C.zf||C.sf!=C.of)) goto L_1110b306;
  /* 1110b2d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1110b2d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b2db push eax */
  push32((uint32_t)(EAX));
  /* 1110b2dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b2df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110b2e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110b2e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110b2e8 push eax */
  push32((uint32_t)(EAX));
  /* 1110b2e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b2ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b2ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1110b2f2 call 0x1110b200 */
  push32(0x1110b2f7u); f_1110b200();
  /* 1110b2f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b2fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b2fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b300 jne 0x1110b304 */
  if (!C.zf) goto L_1110b304;
  /* 1110b302 jmp 0x1110b306 */
  goto L_1110b306;
L_1110b304:;
  /* 1110b304 jmp 0x1110b2c4 */
  goto L_1110b2c4;
L_1110b306:;
  /* 1110b306 mov esp, ebp */
  ESP = (EBP);
  /* 1110b308 pop ebp */
  EBP = (pop32());
  /* 1110b309 ret  */
  ESPCHK(0x1110b2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b310 @ 0x1110b310 (26 bytes, 12 insns) */
void f_1110b310(void) {
  FTRACE(0x1110b310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b310 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b311 mov ebp, esp */
  EBP = (ESP);
  /* 1110b313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b316 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110b318 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b31b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b31e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1110b320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b323 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110b325 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1110b328 pop ebp */
  EBP = (pop32());
  /* 1110b329 ret  */
  ESPCHK(0x1110b310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b330 @ 0x1110b330 (31 bytes, 14 insns) */
void f_1110b330(void) {
  FTRACE(0x1110b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b330 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b331 mov ebp, esp */
  EBP = (ESP);
  /* 1110b333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b336 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110b338 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b33b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b33e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1110b340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b343 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110b345 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b348 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1110b34a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1110b34d pop ebp */
  EBP = (pop32());
  /* 1110b34e ret  */
  ESPCHK(0x1110b330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b350 @ 0x1110b350 (27 bytes, 12 insns) */
void f_1110b350(void) {
  FTRACE(0x1110b350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b350 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b351 mov ebp, esp */
  EBP = (ESP);
  /* 1110b353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b356 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110b358 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b35b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b35e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1110b360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b363 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110b365 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1110b369 pop ebp */
  EBP = (pop32());
  /* 1110b36a ret  */
  ESPCHK(0x1110b350u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1110b370 (145 bytes, 42 insns) */
void f_1110b370(void) {
  FTRACE(0x1110b370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b370 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b371 mov ebp, esp */
  EBP = (ESP);
  /* 1110b373 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b374 call 0x1110b420 */
  push32(0x1110b379u); f_1110b420();
  /* 1110b379 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b37c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1110b37e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110b385 jmp 0x1110b390 */
  goto L_1110b390;
L_1110b387:;
  /* 1110b387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110b38a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b38d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1110b390:;
  /* 1110b390 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b394 jae 0x1110b3ba */
  if (!C.cf) goto L_1110b3ba;
  /* 1110b396 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110b399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b39c cmp ecx, dword ptr [eax*8 + 0x1112dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1112dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b3a3 jne 0x1110b3b8 */
  if (!C.zf) goto L_1110b3b8;
  /* 1110b3a5 call 0x1110b410 */
  push32(0x1110b3aau); f_1110b410();
  /* 1110b3aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110b3ad mov ecx, dword ptr [edx*8 + 0x1112dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1112dfbc)));
  /* 1110b3b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1110b3b6 jmp 0x1110b3fd */
  goto L_1110b3fd;
L_1110b3b8:;
  /* 1110b3b8 jmp 0x1110b387 */
  goto L_1110b387;
L_1110b3ba:;
  /* 1110b3ba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b3be jb 0x1110b3d3 */
  if (C.cf) goto L_1110b3d3;
  /* 1110b3c0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b3c4 ja 0x1110b3d3 */
  if ((!C.cf&&!C.zf)) goto L_1110b3d3;
  /* 1110b3c6 call 0x1110b410 */
  push32(0x1110b3cbu); f_1110b410();
  /* 1110b3cb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1110b3d1 jmp 0x1110b3fd */
  goto L_1110b3fd;
L_1110b3d3:;
  /* 1110b3d3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b3da jb 0x1110b3f2 */
  if (C.cf) goto L_1110b3f2;
  /* 1110b3dc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b3e3 ja 0x1110b3f2 */
  if ((!C.cf&&!C.zf)) goto L_1110b3f2;
  /* 1110b3e5 call 0x1110b410 */
  push32(0x1110b3eau); f_1110b410();
  /* 1110b3ea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1110b3f0 jmp 0x1110b3fd */
  goto L_1110b3fd;
L_1110b3f2:;
  /* 1110b3f2 call 0x1110b410 */
  push32(0x1110b3f7u); f_1110b410();
  /* 1110b3f7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1110b3fd:;
  /* 1110b3fd mov esp, ebp */
  ESP = (EBP);
  /* 1110b3ff pop ebp */
  EBP = (pop32());
  /* 1110b400 ret  */
  ESPCHK(0x1110b370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b410 @ 0x1110b410 (13 bytes, 6 insns) */
void f_1110b410(void) {
  FTRACE(0x1110b410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b410 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b411 mov ebp, esp */
  EBP = (ESP);
  /* 1110b413 call 0x11102f80 */
  push32(0x1110b418u); f_11102f80();
  /* 1110b418 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b41b pop ebp */
  EBP = (pop32());
  /* 1110b41c ret  */
  ESPCHK(0x1110b410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b420 @ 0x1110b420 (13 bytes, 6 insns) */
void f_1110b420(void) {
  FTRACE(0x1110b420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b420 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b421 mov ebp, esp */
  EBP = (ESP);
  /* 1110b423 call 0x11102f80 */
  push32(0x1110b428u); f_11102f80();
  /* 1110b428 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b42b pop ebp */
  EBP = (pop32());
  /* 1110b42c ret  */
  ESPCHK(0x1110b420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b430 @ 0x1110b430 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1110b430(void) {
  FTRACE(0x1110b430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b430 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b431 mov ebp, esp */
  EBP = (ESP);
  /* 1110b433 push edi */
  push32((uint32_t)(EDI));
  /* 1110b434 push esi */
  push32((uint32_t)(ESI));
  /* 1110b435 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b438 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b43b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b43e mov eax, ecx */
  EAX = (ECX);
  /* 1110b440 mov edx, ecx */
  EDX = (ECX);
  /* 1110b442 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b444 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b446 jbe 0x1110b450 */
  if ((C.cf||C.zf)) goto L_1110b450;
  /* 1110b448 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b44a jb 0x1110b5c8 */
  if (C.cf) goto L_1110b5c8;
L_1110b450:;
  /* 1110b450 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1110b456 jne 0x1110b46c */
  if (!C.zf) goto L_1110b46c;
  /* 1110b458 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b45b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1110b45e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b461 jb 0x1110b48c */
  if (C.cf) goto L_1110b48c;
  /* 1110b463 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b465 jmp dword ptr [edx*4 + 0x1110b578] */
  switch (EDX) {
    case 0: goto L_1110b588;
    case 1: goto L_1110b590;
    case 2: goto L_1110b59c;
    case 3: goto L_1110b5b0;
    default: x86_unimpl("switch@0x1110b465 out of table"); return;
  }
L_1110b46c:;
  /* 1110b46c mov eax, edi */
  EAX = (EDI);
  /* 1110b46e mov edx, 3 */
  EDX = (0x3u);
  /* 1110b473 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b476 jb 0x1110b484 */
  if (C.cf) goto L_1110b484;
  /* 1110b478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1110b47b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b47d jmp dword ptr [eax*4 + 0x1110b490] */
  switch (EAX) {
    case 1: goto L_1110b4a0;
    case 2: goto L_1110b4cc;
    case 3: goto L_1110b4f0;
    default: x86_unimpl("switch@0x1110b47d out of table"); return;
  }
L_1110b484:;
  /* 1110b484 jmp dword ptr [ecx*4 + 0x1110b588] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1110b588)))); return;
  /* 1110b48b nop  */
  /* nop */
L_1110b48c:;
  /* 1110b48c jmp dword ptr [ecx*4 + 0x1110b50c] */
  switch (ECX) {
    case 0: goto L_1110b56f;
    case 1: goto L_1110b55c;
    case 2: goto L_1110b554;
    case 3: goto L_1110b54c;
    case 4: goto L_1110b544;
    case 5: goto L_1110b53c;
    case 6: goto L_1110b534;
    case 7: goto L_1110b52c;
    default: x86_unimpl("switch@0x1110b48c out of table"); return;
  }
  /* 1110b493 nop  */
  /* nop */
L_1110b4a0:;
  /* 1110b4a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110b4a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110b4a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1110b4a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110b4a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110b4ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110b4af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b4b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110b4b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b4b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b4bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b4be jb 0x1110b48c */
  if (C.cf) goto L_1110b48c;
  /* 1110b4c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b4c2 jmp dword ptr [edx*4 + 0x1110b578] */
  switch (EDX) {
    case 0: goto L_1110b588;
    case 1: goto L_1110b590;
    case 2: goto L_1110b59c;
    case 3: goto L_1110b5b0;
    default: x86_unimpl("switch@0x1110b4c2 out of table"); return;
  }
  /* 1110b4c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110b4cc:;
  /* 1110b4cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110b4ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110b4d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1110b4d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110b4d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b4d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110b4db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b4de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b4e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b4e4 jb 0x1110b48c */
  if (C.cf) goto L_1110b48c;
  /* 1110b4e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b4e8 jmp dword ptr [edx*4 + 0x1110b578] */
  switch (EDX) {
    case 0: goto L_1110b588;
    case 1: goto L_1110b590;
    case 2: goto L_1110b59c;
    case 3: goto L_1110b5b0;
    default: x86_unimpl("switch@0x1110b4e8 out of table"); return;
  }
  /* 1110b4ef nop  */
  /* nop */
L_1110b4f0:;
  /* 1110b4f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110b4f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110b4f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1110b4f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1110b4f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b4fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1110b4fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b4fe jb 0x1110b48c */
  if (C.cf) goto L_1110b48c;
  /* 1110b500 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b502 jmp dword ptr [edx*4 + 0x1110b578] */
  switch (EDX) {
    case 0: goto L_1110b588;
    case 1: goto L_1110b590;
    case 2: goto L_1110b59c;
    case 3: goto L_1110b5b0;
    default: x86_unimpl("switch@0x1110b502 out of table"); return;
  }
  /* 1110b509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110b52c:;
  /* 1110b52c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1110b530 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1110b534:;
  /* 1110b534 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1110b538 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1110b53c:;
  /* 1110b53c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1110b540 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1110b544:;
  /* 1110b544 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1110b548 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1110b54c:;
  /* 1110b54c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1110b550 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1110b554:;
  /* 1110b554 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1110b558 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1110b55c:;
  /* 1110b55c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1110b560 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1110b564 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1110b56b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b56d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1110b56f:;
  /* 1110b56f jmp dword ptr [edx*4 + 0x1110b578] */
  switch (EDX) {
    case 0: goto L_1110b588;
    case 1: goto L_1110b590;
    case 2: goto L_1110b59c;
    case 3: goto L_1110b5b0;
    default: x86_unimpl("switch@0x1110b56f out of table"); return;
  }
  /* 1110b576 mov edi, edi */
  EDI = (EDI);
L_1110b588:;
  /* 1110b588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b58b pop esi */
  ESI = (pop32());
  /* 1110b58c pop edi */
  EDI = (pop32());
  /* 1110b58d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b58e ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
  /* 1110b58f nop  */
  /* nop */
L_1110b590:;
  /* 1110b590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110b592 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1110b594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b597 pop esi */
  ESI = (pop32());
  /* 1110b598 pop edi */
  EDI = (pop32());
  /* 1110b599 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b59a ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
  /* 1110b59b nop  */
  /* nop */
L_1110b59c:;
  /* 1110b59c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110b59e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1110b5a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110b5a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110b5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b5a9 pop esi */
  ESI = (pop32());
  /* 1110b5aa pop edi */
  EDI = (pop32());
  /* 1110b5ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b5ac ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
  /* 1110b5ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110b5b0:;
  /* 1110b5b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110b5b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1110b5b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110b5b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110b5ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110b5bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110b5c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b5c3 pop esi */
  ESI = (pop32());
  /* 1110b5c4 pop edi */
  EDI = (pop32());
  /* 1110b5c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b5c6 ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
  /* 1110b5c7 nop  */
  /* nop */
L_1110b5c8:;
  /* 1110b5c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1110b5cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1110b5d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1110b5d6 jne 0x1110b5fc */
  if (!C.zf) goto L_1110b5fc;
  /* 1110b5d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b5db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1110b5de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b5e1 jb 0x1110b5f0 */
  if (C.cf) goto L_1110b5f0;
  /* 1110b5e3 std  */
  C.df=1;
  /* 1110b5e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b5e6 cld  */
  C.df=0;
  /* 1110b5e7 jmp dword ptr [edx*4 + 0x1110b710] */
  switch (EDX) {
    case 0: goto L_1110b720;
    case 1: goto L_1110b728;
    case 2: goto L_1110b738;
    case 3: goto L_1110b74c;
    default: x86_unimpl("switch@0x1110b5e7 out of table"); return;
  }
  /* 1110b5ee mov edi, edi */
  EDI = (EDI);
L_1110b5f0:;
  /* 1110b5f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110b5f2 jmp dword ptr [ecx*4 + 0x1110b6c0] */
  switch (ECX) {
    case 0: goto L_1110b707;
    default: x86_unimpl("switch@0x1110b5f2 out of table"); return;
  }
  /* 1110b5f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110b5fc:;
  /* 1110b5fc mov eax, edi */
  EAX = (EDI);
  /* 1110b5fe mov edx, 3 */
  EDX = (0x3u);
  /* 1110b603 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b606 jb 0x1110b614 */
  if (C.cf) goto L_1110b614;
  /* 1110b608 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1110b60b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b60d jmp dword ptr [eax*4 + 0x1110b618] */
  switch (EAX) {
    case 1: goto L_1110b628;
    case 2: goto L_1110b648;
    case 3: goto L_1110b670;
    default: x86_unimpl("switch@0x1110b60d out of table"); return;
  }
L_1110b614:;
  /* 1110b614 jmp dword ptr [ecx*4 + 0x1110b710] */
  switch (ECX) {
    case 0: goto L_1110b720;
    case 1: goto L_1110b728;
    case 2: goto L_1110b738;
    case 3: goto L_1110b74c;
    default: x86_unimpl("switch@0x1110b614 out of table"); return;
  }
  /* 1110b61b nop  */
  /* nop */
L_1110b628:;
  /* 1110b628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110b62b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110b62d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110b630 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1110b631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b634 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1110b635 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b638 jb 0x1110b5f0 */
  if (C.cf) goto L_1110b5f0;
  /* 1110b63a std  */
  C.df=1;
  /* 1110b63b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b63d cld  */
  C.df=0;
  /* 1110b63e jmp dword ptr [edx*4 + 0x1110b710] */
  switch (EDX) {
    case 0: goto L_1110b720;
    case 1: goto L_1110b728;
    case 2: goto L_1110b738;
    case 3: goto L_1110b74c;
    default: x86_unimpl("switch@0x1110b63e out of table"); return;
  }
  /* 1110b645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110b648:;
  /* 1110b648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110b64b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110b64d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110b650 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110b653 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b656 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110b659 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b65c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b65f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b662 jb 0x1110b5f0 */
  if (C.cf) goto L_1110b5f0;
  /* 1110b664 std  */
  C.df=1;
  /* 1110b665 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b667 cld  */
  C.df=0;
  /* 1110b668 jmp dword ptr [edx*4 + 0x1110b710] */
  switch (EDX) {
    case 0: goto L_1110b720;
    case 1: goto L_1110b728;
    case 2: goto L_1110b738;
    case 3: goto L_1110b74c;
    default: x86_unimpl("switch@0x1110b668 out of table"); return;
  }
  /* 1110b66f nop  */
  /* nop */
L_1110b670:;
  /* 1110b670 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110b673 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1110b675 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110b678 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110b67b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110b67e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110b681 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1110b684 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110b687 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b68a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b68d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b690 jb 0x1110b5f0 */
  if (C.cf) goto L_1110b5f0;
  /* 1110b696 std  */
  C.df=1;
  /* 1110b697 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1110b699 cld  */
  C.df=0;
  /* 1110b69a jmp dword ptr [edx*4 + 0x1110b710] */
  switch (EDX) {
    case 0: goto L_1110b720;
    case 1: goto L_1110b728;
    case 2: goto L_1110b738;
    case 3: goto L_1110b74c;
    default: x86_unimpl("switch@0x1110b69a out of table"); return;
  }
  /* 1110b6a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1110b6a4 les esi, ptr [esi - 0x4933eef0] */
  x86_unimpl("les @ 0x1110b6a4");
  /* 1110b6aa adc byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1110b6ac aam 0xb6 */
  x86_unimpl("aam @ 0x1110b6ac");
  /* 1110b6ae adc byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1110b6b0 fdiv qword ptr [esi - 0x491beef0] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(ESI + -0x491beef0)));
  /* 1110b6b6 adc byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1110b6b8 in al, dx */
  x86_unimpl("in @ 0x1110b6b8");
  /* 1110b6b9 mov dh, 0x10 */
  C.d.b.h = (0x10u);
  /* 1110b6bb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b6bd mov dh, 0x10 */
  C.d.b.h = (0x10u);
  /* 1110b6c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1110b6c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1110b6cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1110b6d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1110b6d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1110b6d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1110b6dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1110b6e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1110b6e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1110b6e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1110b6ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1110b6f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1110b6f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1110b6f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1110b6fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1110b703 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b705 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1110b707:;
  /* 1110b707 jmp dword ptr [edx*4 + 0x1110b710] */
  switch (EDX) {
    case 0: goto L_1110b720;
    case 1: goto L_1110b728;
    case 2: goto L_1110b738;
    case 3: goto L_1110b74c;
    default: x86_unimpl("switch@0x1110b707 out of table"); return;
  }
  /* 1110b70e mov edi, edi */
  EDI = (EDI);
L_1110b720:;
  /* 1110b720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b723 pop esi */
  ESI = (pop32());
  /* 1110b724 pop edi */
  EDI = (pop32());
  /* 1110b725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b726 ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
  /* 1110b727 nop  */
  /* nop */
L_1110b728:;
  /* 1110b728 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110b72b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110b72e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b731 pop esi */
  ESI = (pop32());
  /* 1110b732 pop edi */
  EDI = (pop32());
  /* 1110b733 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b734 ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
  /* 1110b735 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110b738:;
  /* 1110b738 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110b73b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110b73e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110b741 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110b744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b747 pop esi */
  ESI = (pop32());
  /* 1110b748 pop edi */
  EDI = (pop32());
  /* 1110b749 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b74a ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
  /* 1110b74b nop  */
  /* nop */
L_1110b74c:;
  /* 1110b74c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1110b74f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1110b752 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1110b755 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1110b758 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1110b75b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1110b75e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b761 pop esi */
  ESI = (pop32());
  /* 1110b762 pop edi */
  EDI = (pop32());
  /* 1110b763 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110b764 ret  */
  ESPCHK(0x1110b430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x1110b770 (421 bytes, 148 insns) */
void f_1110b770(void) {
  FTRACE(0x1110b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b770 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b771 mov ebp, esp */
  EBP = (ESP);
  /* 1110b773 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1110b775 push 0x1112b020 */
  push32((uint32_t)(0x1112b020u));
  /* 1110b77a push 0x1110c648 */
  push32((uint32_t)(0x1110c648u));
  /* 1110b77f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1110b785 push eax */
  push32((uint32_t)(EAX));
  /* 1110b786 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1110b78d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b790 push ebx */
  push32((uint32_t)(EBX));
  /* 1110b791 push esi */
  push32((uint32_t)(ESI));
  /* 1110b792 push edi */
  push32((uint32_t)(EDI));
  /* 1110b793 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1110b796 cmp dword ptr [0x1112f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b79d jne 0x1110b7ee */
  if (!C.zf) goto L_1110b7ee;
  /* 1110b79f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1110b7a2 push eax */
  push32((uint32_t)(EAX));
  /* 1110b7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110b7a5 push 0x1112b018 */
  push32((uint32_t)(0x1112b018u));
  /* 1110b7aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1110b7ac call dword ptr [0x111322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ec))), 0x1110b7b2u);
  /* 1110b7b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110b7b4 je 0x1110b7c2 */
  if (C.zf) goto L_1110b7c2;
  /* 1110b7b6 mov dword ptr [0x1112f704], 1 */
  w32((uint32_t)(0x1112f704), (0x1u));
  /* 1110b7c0 jmp 0x1110b7ee */
  goto L_1110b7ee;
L_1110b7c2:;
  /* 1110b7c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1110b7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110b7c8 push 0x1112b014 */
  push32((uint32_t)(0x1112b014u));
  /* 1110b7cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1110b7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b7d1 call dword ptr [0x111322f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f0))), 0x1110b7d7u);
  /* 1110b7d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110b7d9 je 0x1110b7e7 */
  if (C.zf) goto L_1110b7e7;
  /* 1110b7db mov dword ptr [0x1112f704], 2 */
  w32((uint32_t)(0x1112f704), (0x2u));
  /* 1110b7e5 jmp 0x1110b7ee */
  goto L_1110b7ee;
L_1110b7e7:;
  /* 1110b7e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110b7e9 jmp 0x1110b918 */
  goto L_1110b918;
L_1110b7ee:;
  /* 1110b7ee cmp dword ptr [0x1112f704], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f704))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b7f5 jne 0x1110b825 */
  if (!C.zf) goto L_1110b825;
  /* 1110b7f7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b7fb jne 0x1110b806 */
  if (!C.zf) goto L_1110b806;
  /* 1110b7fd mov edx, dword ptr [0x1112f710] */
  EDX = (r32((uint32_t)(0x1112f710)));
  /* 1110b803 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1110b806:;
  /* 1110b806 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b809 push eax */
  push32((uint32_t)(EAX));
  /* 1110b80a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b80d push ecx */
  push32((uint32_t)(ECX));
  /* 1110b80e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b811 push edx */
  push32((uint32_t)(EDX));
  /* 1110b812 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b815 push eax */
  push32((uint32_t)(EAX));
  /* 1110b816 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1110b819 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b81a call dword ptr [0x111322f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f0))), 0x1110b820u);
  /* 1110b820 jmp 0x1110b918 */
  goto L_1110b918;
L_1110b825:;
  /* 1110b825 cmp dword ptr [0x1112f704], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f704))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b82c jne 0x1110b916 */
  if (!C.zf) goto L_1110b916;
  /* 1110b832 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b836 jne 0x1110b841 */
  if (!C.zf) goto L_1110b841;
  /* 1110b838 mov edx, dword ptr [0x1112f720] */
  EDX = (r32((uint32_t)(0x1112f720)));
  /* 1110b83e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1110b841:;
  /* 1110b841 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b843 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b845 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b848 push eax */
  push32((uint32_t)(EAX));
  /* 1110b849 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b84c push ecx */
  push32((uint32_t)(ECX));
  /* 1110b84d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1110b850 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110b852 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110b854 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1110b857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b85a push edx */
  push32((uint32_t)(EDX));
  /* 1110b85b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110b85e push eax */
  push32((uint32_t)(EAX));
  /* 1110b85f call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x1110b865u);
  /* 1110b865 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1110b868 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b86c jne 0x1110b875 */
  if (!C.zf) goto L_1110b875;
  /* 1110b86e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110b870 jmp 0x1110b918 */
  goto L_1110b918;
L_1110b875:;
  /* 1110b875 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110b87c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110b87f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1110b881 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b884 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1110b886 call 0x111066e0 */
  push32(0x1110b88bu); f_111066e0();
  /* 1110b88b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1110b88e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1110b891 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110b894 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1110b897 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110b89a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1110b89c push edx */
  push32((uint32_t)(EDX));
  /* 1110b89d push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b89f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110b8a2 push eax */
  push32((uint32_t)(EAX));
  /* 1110b8a3 call 0x111072b0 */
  push32(0x1110b8a8u); f_111072b0();
  /* 1110b8a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b8ab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1110b8b2 jmp 0x1110b8cb */
  goto L_1110b8cb;
  /* 1110b8b4 mov eax, 1 */
  EAX = (0x1u);
  /* 1110b8b9 ret  */
  ESPCHK(0x1110b770u, _esp0);
  ESP += 4; return;
  /* 1110b8ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1110b8bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1110b8c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1110b8cb:;
  /* 1110b8cb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b8cf jne 0x1110b8d5 */
  if (!C.zf) goto L_1110b8d5;
  /* 1110b8d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110b8d3 jmp 0x1110b918 */
  goto L_1110b918;
L_1110b8d5:;
  /* 1110b8d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110b8d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b8d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110b8dc push edx */
  push32((uint32_t)(EDX));
  /* 1110b8dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b8e0 push eax */
  push32((uint32_t)(EAX));
  /* 1110b8e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b8e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110b8e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110b8ea push edx */
  push32((uint32_t)(EDX));
  /* 1110b8eb call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x1110b8f1u);
  /* 1110b8f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1110b8f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b8f8 jne 0x1110b8fe */
  if (!C.zf) goto L_1110b8fe;
  /* 1110b8fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110b8fc jmp 0x1110b918 */
  goto L_1110b918;
L_1110b8fe:;
  /* 1110b8fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b901 push eax */
  push32((uint32_t)(EAX));
  /* 1110b902 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110b905 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b906 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110b909 push edx */
  push32((uint32_t)(EDX));
  /* 1110b90a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b90d push eax */
  push32((uint32_t)(EAX));
  /* 1110b90e call dword ptr [0x111322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322ec))), 0x1110b914u);
  /* 1110b914 jmp 0x1110b918 */
  goto L_1110b918;
L_1110b916:;
  /* 1110b916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110b918:;
  /* 1110b918 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1110b91b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110b91e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1110b925 pop edi */
  EDI = (pop32());
  /* 1110b926 pop esi */
  ESI = (pop32());
  /* 1110b927 pop ebx */
  EBX = (pop32());
  /* 1110b928 mov esp, ebp */
  ESP = (EBP);
  /* 1110b92a pop ebp */
  EBP = (pop32());
  /* 1110b92b ret  */
  ESPCHK(0x1110b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x1110b930 (727 bytes, 263 insns) */
void f_1110b930(void) {
  FTRACE(0x1110b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110b930 push ebp */
  push32((uint32_t)(EBP));
  /* 1110b931 mov ebp, esp */
  EBP = (ESP);
  /* 1110b933 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1110b935 push 0x1112b030 */
  push32((uint32_t)(0x1112b030u));
  /* 1110b93a push 0x1110c648 */
  push32((uint32_t)(0x1110c648u));
  /* 1110b93f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1110b945 push eax */
  push32((uint32_t)(EAX));
  /* 1110b946 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1110b94d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b950 push ebx */
  push32((uint32_t)(EBX));
  /* 1110b951 push esi */
  push32((uint32_t)(ESI));
  /* 1110b952 push edi */
  push32((uint32_t)(EDI));
  /* 1110b953 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1110b956 cmp dword ptr [0x1112f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b95d jne 0x1110b9b6 */
  if (!C.zf) goto L_1110b9b6;
  /* 1110b95f push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b961 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b963 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110b965 push 0x1112b018 */
  push32((uint32_t)(0x1112b018u));
  /* 1110b96a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1110b96f push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b971 call dword ptr [0x111322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322e4))), 0x1110b977u);
  /* 1110b977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110b979 je 0x1110b987 */
  if (C.zf) goto L_1110b987;
  /* 1110b97b mov dword ptr [0x1112f728], 1 */
  w32((uint32_t)(0x1112f728), (0x1u));
  /* 1110b985 jmp 0x1110b9b6 */
  goto L_1110b9b6;
L_1110b987:;
  /* 1110b987 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b98b push 1 */
  push32((uint32_t)(0x1u));
  /* 1110b98d push 0x1112b014 */
  push32((uint32_t)(0x1112b014u));
  /* 1110b992 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1110b997 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110b999 call dword ptr [0x111322e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322e8))), 0x1110b99fu);
  /* 1110b99f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110b9a1 je 0x1110b9af */
  if (C.zf) goto L_1110b9af;
  /* 1110b9a3 mov dword ptr [0x1112f728], 2 */
  w32((uint32_t)(0x1112f728), (0x2u));
  /* 1110b9ad jmp 0x1110b9b6 */
  goto L_1110b9b6;
L_1110b9af:;
  /* 1110b9af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110b9b1 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110b9b6:;
  /* 1110b9b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b9ba jle 0x1110b9cf */
  if ((C.zf||C.sf!=C.of)) goto L_1110b9cf;
  /* 1110b9bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b9bf push eax */
  push32((uint32_t)(EAX));
  /* 1110b9c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b9c4 call 0x1110bc40 */
  push32(0x1110b9c9u); f_1110bc40();
  /* 1110b9c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110b9cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1110b9cf:;
  /* 1110b9cf cmp dword ptr [0x1112f728], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f728))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110b9d6 jne 0x1110b9fb */
  if (!C.zf) goto L_1110b9fb;
  /* 1110b9d8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1110b9db push edx */
  push32((uint32_t)(EDX));
  /* 1110b9dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110b9df push eax */
  push32((uint32_t)(EAX));
  /* 1110b9e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110b9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110b9e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110b9e7 push edx */
  push32((uint32_t)(EDX));
  /* 1110b9e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110b9eb push eax */
  push32((uint32_t)(EAX));
  /* 1110b9ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110b9ef push ecx */
  push32((uint32_t)(ECX));
  /* 1110b9f0 call dword ptr [0x111322e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322e8))), 0x1110b9f6u);
  /* 1110b9f6 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110b9fb:;
  /* 1110b9fb cmp dword ptr [0x1112f728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ba02 jne 0x1110bc1f */
  if (!C.zf) goto L_1110bc1f;
  /* 1110ba08 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ba0c jne 0x1110ba17 */
  if (!C.zf) goto L_1110ba17;
  /* 1110ba0e mov edx, dword ptr [0x1112f720] */
  EDX = (r32((uint32_t)(0x1112f720)));
  /* 1110ba14 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1110ba17:;
  /* 1110ba17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ba19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ba1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110ba1e push eax */
  push32((uint32_t)(EAX));
  /* 1110ba1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110ba22 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ba23 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1110ba26 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110ba28 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ba2a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1110ba2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ba30 push edx */
  push32((uint32_t)(EDX));
  /* 1110ba31 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1110ba34 push eax */
  push32((uint32_t)(EAX));
  /* 1110ba35 call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x1110ba3bu);
  /* 1110ba3b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1110ba3e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ba42 jne 0x1110ba4b */
  if (!C.zf) goto L_1110ba4b;
  /* 1110ba44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ba46 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110ba4b:;
  /* 1110ba4b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110ba52 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110ba55 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1110ba57 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ba5a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1110ba5c call 0x111066e0 */
  push32(0x1110ba61u); f_111066e0();
  /* 1110ba61 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1110ba64 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1110ba67 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110ba6a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1110ba6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1110ba74 jmp 0x1110ba8d */
  goto L_1110ba8d;
  /* 1110ba76 mov eax, 1 */
  EAX = (0x1u);
  /* 1110ba7b ret  */
  ESPCHK(0x1110b930u, _esp0);
  ESP += 4; return;
  /* 1110ba7c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1110ba7f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1110ba86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1110ba8d:;
  /* 1110ba8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ba91 jne 0x1110ba9a */
  if (!C.zf) goto L_1110ba9a;
  /* 1110ba93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ba95 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110ba9a:;
  /* 1110ba9a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110ba9d push edx */
  push32((uint32_t)(EDX));
  /* 1110ba9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110baa1 push eax */
  push32((uint32_t)(EAX));
  /* 1110baa2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110baa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110baa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110baa9 push edx */
  push32((uint32_t)(EDX));
  /* 1110baaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1110baac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1110baaf push eax */
  push32((uint32_t)(EAX));
  /* 1110bab0 call dword ptr [0x111322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322f4))), 0x1110bab6u);
  /* 1110bab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110bab8 jne 0x1110bac1 */
  if (!C.zf) goto L_1110bac1;
  /* 1110baba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110babc jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bac1:;
  /* 1110bac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bac5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110bac8 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bac9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110bacc push edx */
  push32((uint32_t)(EDX));
  /* 1110bacd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110bad0 push eax */
  push32((uint32_t)(EAX));
  /* 1110bad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bad4 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bad5 call dword ptr [0x111322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322e4))), 0x1110badbu);
  /* 1110badb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1110bade cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bae2 jne 0x1110baeb */
  if (!C.zf) goto L_1110baeb;
  /* 1110bae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110bae6 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110baeb:;
  /* 1110baeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110baee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1110baf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110baf6 je 0x1110bb3b */
  if (C.zf) goto L_1110bb3b;
  /* 1110baf8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bafc je 0x1110bb36 */
  if (C.zf) goto L_1110bb36;
  /* 1110bafe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110bb01 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bb04 jle 0x1110bb0d */
  if ((C.zf||C.sf!=C.of)) goto L_1110bb0d;
  /* 1110bb06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110bb08 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bb0d:;
  /* 1110bb0d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1110bb10 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bb11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110bb14 push edx */
  push32((uint32_t)(EDX));
  /* 1110bb15 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110bb18 push eax */
  push32((uint32_t)(EAX));
  /* 1110bb19 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110bb1c push ecx */
  push32((uint32_t)(ECX));
  /* 1110bb1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110bb20 push edx */
  push32((uint32_t)(EDX));
  /* 1110bb21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bb24 push eax */
  push32((uint32_t)(EAX));
  /* 1110bb25 call dword ptr [0x111322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322e4))), 0x1110bb2bu);
  /* 1110bb2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110bb2d jne 0x1110bb36 */
  if (!C.zf) goto L_1110bb36;
  /* 1110bb2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110bb31 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bb36:;
  /* 1110bb36 jmp 0x1110bc1a */
  goto L_1110bc1a;
L_1110bb3b:;
  /* 1110bb3b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110bb3e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1110bb41 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1110bb48 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110bb4b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1110bb4d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bb50 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1110bb52 call 0x111066e0 */
  push32(0x1110bb57u); f_111066e0();
  /* 1110bb57 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1110bb5a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1110bb5d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1110bb60 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1110bb63 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1110bb6a jmp 0x1110bb83 */
  goto L_1110bb83;
  /* 1110bb6c mov eax, 1 */
  EAX = (0x1u);
  /* 1110bb71 ret  */
  ESPCHK(0x1110b930u, _esp0);
  ESP += 4; return;
  /* 1110bb72 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1110bb75 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1110bb7c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1110bb83:;
  /* 1110bb83 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bb87 jne 0x1110bb90 */
  if (!C.zf) goto L_1110bb90;
  /* 1110bb89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110bb8b jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bb90:;
  /* 1110bb90 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110bb93 push eax */
  push32((uint32_t)(EAX));
  /* 1110bb94 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110bb97 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bb98 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110bb9b push edx */
  push32((uint32_t)(EDX));
  /* 1110bb9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110bb9f push eax */
  push32((uint32_t)(EAX));
  /* 1110bba0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110bba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bba7 push edx */
  push32((uint32_t)(EDX));
  /* 1110bba8 call dword ptr [0x111322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322e4))), 0x1110bbaeu);
  /* 1110bbae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110bbb0 jne 0x1110bbb6 */
  if (!C.zf) goto L_1110bbb6;
  /* 1110bbb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110bbb4 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bbb6:;
  /* 1110bbb6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bbba jne 0x1110bbea */
  if (!C.zf) goto L_1110bbea;
  /* 1110bbbc push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bbbe push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bbc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bbc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bbc4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110bbc7 push eax */
  push32((uint32_t)(EAX));
  /* 1110bbc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110bbcb push ecx */
  push32((uint32_t)(ECX));
  /* 1110bbcc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1110bbd1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1110bbd4 push edx */
  push32((uint32_t)(EDX));
  /* 1110bbd5 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x1110bbdbu);
  /* 1110bbdb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1110bbde cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bbe2 jne 0x1110bbe8 */
  if (!C.zf) goto L_1110bbe8;
  /* 1110bbe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110bbe6 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bbe8:;
  /* 1110bbe8 jmp 0x1110bc1a */
  goto L_1110bc1a;
L_1110bbea:;
  /* 1110bbea push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bbec push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bbee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1110bbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1110bbf2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110bbf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bbf6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110bbf9 push edx */
  push32((uint32_t)(EDX));
  /* 1110bbfa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110bbfd push eax */
  push32((uint32_t)(EAX));
  /* 1110bbfe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1110bc03 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1110bc06 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bc07 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x1110bc0du);
  /* 1110bc0d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1110bc10 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bc14 jne 0x1110bc1a */
  if (!C.zf) goto L_1110bc1a;
  /* 1110bc16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110bc18 jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bc1a:;
  /* 1110bc1a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110bc1d jmp 0x1110bc21 */
  goto L_1110bc21;
L_1110bc1f:;
  /* 1110bc1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110bc21:;
  /* 1110bc21 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1110bc24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110bc27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1110bc2e pop edi */
  EDI = (pop32());
  /* 1110bc2f pop esi */
  ESI = (pop32());
  /* 1110bc30 pop ebx */
  EBX = (pop32());
  /* 1110bc31 mov esp, ebp */
  ESP = (EBP);
  /* 1110bc33 pop ebp */
  EBP = (pop32());
  /* 1110bc34 ret  */
  ESPCHK(0x1110b930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc40 @ 0x1110bc40 (80 bytes, 32 insns) */
void f_1110bc40(void) {
  FTRACE(0x1110bc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110bc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1110bc41 mov ebp, esp */
  EBP = (ESP);
  /* 1110bc43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bc46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110bc49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110bc4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bc4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1110bc52:;
  /* 1110bc52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bc55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bc58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bc5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110bc5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110bc60 je 0x1110bc77 */
  if (C.zf) goto L_1110bc77;
  /* 1110bc62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bc65 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110bc68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110bc6a je 0x1110bc77 */
  if (C.zf) goto L_1110bc77;
  /* 1110bc6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bc6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bc72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110bc75 jmp 0x1110bc52 */
  goto L_1110bc52;
L_1110bc77:;
  /* 1110bc77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bc7a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110bc7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110bc7f jne 0x1110bc89 */
  if (!C.zf) goto L_1110bc89;
  /* 1110bc81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bc84 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bc87 jmp 0x1110bc8c */
  goto L_1110bc8c;
L_1110bc89:;
  /* 1110bc89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1110bc8c:;
  /* 1110bc8c mov esp, ebp */
  ESP = (EBP);
  /* 1110bc8e pop ebp */
  EBP = (pop32());
  /* 1110bc8f ret  */
  ESPCHK(0x1110bc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x1110bc90 (130 bytes, 43 insns) */
void f_1110bc90(void) {
  FTRACE(0x1110bc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110bc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1110bc91 mov ebp, esp */
  EBP = (ESP);
  /* 1110bc93 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bc97 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bc9d jae 0x1110bcc1 */
  if (!C.cf) goto L_1110bcc1;
  /* 1110bc9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bca2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110bca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bca8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110bcab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110bcae mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110bcb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1110bcba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110bcbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110bcbf jne 0x1110bcdc */
  if (!C.zf) goto L_1110bcdc;
L_1110bcc1:;
  /* 1110bcc1 call 0x1110b410 */
  push32(0x1110bcc6u); f_1110b410();
  /* 1110bcc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110bccc call 0x1110b420 */
  push32(0x1110bcd1u); f_1110b420();
  /* 1110bcd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1110bcd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110bcda jmp 0x1110bd0e */
  goto L_1110bd0e;
L_1110bcdc:;
  /* 1110bcdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bcdf push edx */
  push32((uint32_t)(EDX));
  /* 1110bce0 call 0x1110cc30 */
  push32(0x1110bce5u); f_1110cc30();
  /* 1110bce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bce8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110bceb push eax */
  push32((uint32_t)(EAX));
  /* 1110bcec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110bcef push ecx */
  push32((uint32_t)(ECX));
  /* 1110bcf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bcf3 push edx */
  push32((uint32_t)(EDX));
  /* 1110bcf4 call 0x1110bd20 */
  push32(0x1110bcf9u); f_1110bd20();
  /* 1110bcf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bcfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110bcff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bd02 push eax */
  push32((uint32_t)(EAX));
  /* 1110bd03 call 0x1110ccc0 */
  push32(0x1110bd08u); f_1110ccc0();
  /* 1110bd08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bd0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1110bd0e:;
  /* 1110bd0e mov esp, ebp */
  ESP = (EBP);
  /* 1110bd10 pop ebp */
  EBP = (pop32());
  /* 1110bd11 ret  */
  ESPCHK(0x1110bc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd20 @ 0x1110bd20 (178 bytes, 56 insns) */
void f_1110bd20(void) {
  FTRACE(0x1110bd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110bd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1110bd21 mov ebp, esp */
  EBP = (ESP);
  /* 1110bd23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bd26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bd29 push eax */
  push32((uint32_t)(EAX));
  /* 1110bd2a call 0x1110cab0 */
  push32(0x1110bd2fu); f_1110cab0();
  /* 1110bd2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bd32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1110bd35 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bd39 jne 0x1110bd4e */
  if (!C.zf) goto L_1110bd4e;
  /* 1110bd3b call 0x1110b410 */
  push32(0x1110bd40u); f_1110b410();
  /* 1110bd40 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110bd46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110bd49 jmp 0x1110bdce */
  goto L_1110bdce;
L_1110bd4e:;
  /* 1110bd4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110bd51 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bd52 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bd54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110bd57 push edx */
  push32((uint32_t)(EDX));
  /* 1110bd58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110bd5b push eax */
  push32((uint32_t)(EAX));
  /* 1110bd5c call dword ptr [0x111322e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322e0))), 0x1110bd62u);
  /* 1110bd62 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110bd65 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bd69 jne 0x1110bd76 */
  if (!C.zf) goto L_1110bd76;
  /* 1110bd6b call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x1110bd71u);
  /* 1110bd71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110bd74 jmp 0x1110bd7d */
  goto L_1110bd7d;
L_1110bd76:;
  /* 1110bd76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1110bd7d:;
  /* 1110bd7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bd81 je 0x1110bd94 */
  if (C.zf) goto L_1110bd94;
  /* 1110bd83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bd86 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bd87 call 0x1110b370 */
  push32(0x1110bd8cu); f_1110b370();
  /* 1110bd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bd8f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110bd92 jmp 0x1110bdce */
  goto L_1110bdce;
L_1110bd94:;
  /* 1110bd94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bd97 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1110bd9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bd9d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1110bda0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110bda3 mov ecx, dword ptr [edx*4 + 0x11130ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 1110bdaa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1110bdae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1110bdb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bdb4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110bdb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bdba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110bdbd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110bdc0 mov eax, dword ptr [eax*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110bdc7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1110bdcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1110bdce:;
  /* 1110bdce mov esp, ebp */
  ESP = (EBP);
  /* 1110bdd0 pop ebp */
  EBP = (pop32());
  /* 1110bdd1 ret  */
  ESPCHK(0x1110bd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bde0 @ 0x1110bde0 (130 bytes, 43 insns) */
void f_1110bde0(void) {
  FTRACE(0x1110bde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110bde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110bde1 mov ebp, esp */
  EBP = (ESP);
  /* 1110bde3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110bde4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bde7 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bded jae 0x1110be11 */
  if (!C.cf) goto L_1110be11;
  /* 1110bdef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bdf2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110bdf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bdf8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110bdfb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110bdfe mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110be05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1110be0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110be0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110be0f jne 0x1110be2c */
  if (!C.zf) goto L_1110be2c;
L_1110be11:;
  /* 1110be11 call 0x1110b410 */
  push32(0x1110be16u); f_1110b410();
  /* 1110be16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110be1c call 0x1110b420 */
  push32(0x1110be21u); f_1110b420();
  /* 1110be21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1110be27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110be2a jmp 0x1110be5e */
  goto L_1110be5e;
L_1110be2c:;
  /* 1110be2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110be2f push edx */
  push32((uint32_t)(EDX));
  /* 1110be30 call 0x1110cc30 */
  push32(0x1110be35u); f_1110cc30();
  /* 1110be35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110be38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110be3b push eax */
  push32((uint32_t)(EAX));
  /* 1110be3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110be3f push ecx */
  push32((uint32_t)(ECX));
  /* 1110be40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110be43 push edx */
  push32((uint32_t)(EDX));
  /* 1110be44 call 0x1110be70 */
  push32(0x1110be49u); f_1110be70();
  /* 1110be49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110be4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110be4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110be52 push eax */
  push32((uint32_t)(EAX));
  /* 1110be53 call 0x1110ccc0 */
  push32(0x1110be58u); f_1110ccc0();
  /* 1110be58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110be5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1110be5e:;
  /* 1110be5e mov esp, ebp */
  ESP = (EBP);
  /* 1110be60 pop ebp */
  EBP = (pop32());
  /* 1110be61 ret  */
  ESPCHK(0x1110bde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be70 @ 0x1110be70 (627 bytes, 182 insns) */
void f_1110be70(void) {
  FTRACE(0x1110be70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110be70 push ebp */
  push32((uint32_t)(EBP));
  /* 1110be71 mov ebp, esp */
  EBP = (ESP);
  /* 1110be73 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110be79 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1110be80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110be83 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1110be89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110be8d jne 0x1110be96 */
  if (!C.zf) goto L_1110be96;
  /* 1110be8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110be91 jmp 0x1110c0df */
  goto L_1110c0df;
L_1110be96:;
  /* 1110be96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110be99 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110be9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110be9f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110bea2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110bea5 mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110beac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1110beb1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1110beb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110beb6 je 0x1110bec8 */
  if (C.zf) goto L_1110bec8;
  /* 1110beb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110beba push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bebf push edx */
  push32((uint32_t)(EDX));
  /* 1110bec0 call 0x1110bd20 */
  push32(0x1110bec5u); f_1110bd20();
  /* 1110bec5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110bec8:;
  /* 1110bec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110becb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110bece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bed1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110bed4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110bed7 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110bede movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1110bee3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1110bee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110beea je 0x1110bffc */
  if (C.zf) goto L_1110bffc;
  /* 1110bef0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110bef3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110bef6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1110befd:;
  /* 1110befd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bf00 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bf03 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bf06 jae 0x1110bffa */
  if (!C.cf) goto L_1110bffa;
  /* 1110bf0c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1110bf12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1110bf15:;
  /* 1110bf15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bf18 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1110bf1e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bf20 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bf26 jge 0x1110bf87 */
  if ((C.sf==C.of)) goto L_1110bf87;
  /* 1110bf28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bf2b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bf2e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bf31 jae 0x1110bf87 */
  if (!C.cf) goto L_1110bf87;
  /* 1110bf33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bf36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1110bf38 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1110bf3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110bf41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bf44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110bf47 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1110bf4e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bf51 jne 0x1110bf71 */
  if (!C.zf) goto L_1110bf71;
  /* 1110bf53 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1110bf59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bf5c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1110bf62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bf65 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1110bf68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bf6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bf6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1110bf71:;
  /* 1110bf71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bf74 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1110bf7a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1110bf7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bf7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bf82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110bf85 jmp 0x1110bf15 */
  goto L_1110bf15;
L_1110bf87:;
  /* 1110bf87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bf89 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1110bf8f push edx */
  push32((uint32_t)(EDX));
  /* 1110bf90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bf93 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1110bf99 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bf9b push eax */
  push32((uint32_t)(EAX));
  /* 1110bf9c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1110bfa2 push edx */
  push32((uint32_t)(EDX));
  /* 1110bfa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bfa6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110bfa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110bfac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110bfaf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110bfb2 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110bfb9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1110bfbc push eax */
  push32((uint32_t)(EAX));
  /* 1110bfbd call dword ptr [0x11132338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132338))), 0x1110bfc3u);
  /* 1110bfc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110bfc5 je 0x1110bfea */
  if (C.zf) goto L_1110bfea;
  /* 1110bfc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110bfca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110bfd0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1110bfd3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110bfd6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1110bfdc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110bfde cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110bfe4 jge 0x1110bfe8 */
  if ((C.sf==C.of)) goto L_1110bfe8;
  /* 1110bfe6 jmp 0x1110bffa */
  goto L_1110bffa;
L_1110bfe8:;
  /* 1110bfe8 jmp 0x1110bff5 */
  goto L_1110bff5;
L_1110bfea:;
  /* 1110bfea call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x1110bff0u);
  /* 1110bff0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1110bff3 jmp 0x1110bffa */
  goto L_1110bffa;
L_1110bff5:;
  /* 1110bff5 jmp 0x1110befd */
  goto L_1110befd;
L_1110bffa:;
  /* 1110bffa jmp 0x1110c04c */
  goto L_1110c04c;
L_1110bffc:;
  /* 1110bffc push 0 */
  push32((uint32_t)(0x0u));
  /* 1110bffe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1110c004 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c005 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110c008 push edx */
  push32((uint32_t)(EDX));
  /* 1110c009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c00c push eax */
  push32((uint32_t)(EAX));
  /* 1110c00d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c010 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c016 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110c019 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c01c mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110c023 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1110c026 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c027 call dword ptr [0x11132338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132338))), 0x1110c02du);
  /* 1110c02d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110c02f je 0x1110c043 */
  if (C.zf) goto L_1110c043;
  /* 1110c031 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1110c038 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1110c03e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1110c041 jmp 0x1110c04c */
  goto L_1110c04c;
L_1110c043:;
  /* 1110c043 call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x1110c049u);
  /* 1110c049 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1110c04c:;
  /* 1110c04c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c050 jne 0x1110c0d6 */
  if (!C.zf) goto L_1110c0d6;
  /* 1110c056 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c05a je 0x1110c08a */
  if (C.zf) goto L_1110c08a;
  /* 1110c05c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c060 jne 0x1110c079 */
  if (!C.zf) goto L_1110c079;
  /* 1110c062 call 0x1110b410 */
  push32(0x1110c067u); f_1110b410();
  /* 1110c067 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110c06d call 0x1110b420 */
  push32(0x1110c072u); f_1110b420();
  /* 1110c072 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c075 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1110c077 jmp 0x1110c085 */
  goto L_1110c085;
L_1110c079:;
  /* 1110c079 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c07c push edx */
  push32((uint32_t)(EDX));
  /* 1110c07d call 0x1110b370 */
  push32(0x1110c082u); f_1110b370();
  /* 1110c082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110c085:;
  /* 1110c085 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110c088 jmp 0x1110c0df */
  goto L_1110c0df;
L_1110c08a:;
  /* 1110c08a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c08d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110c090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c093 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110c096 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c099 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110c0a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1110c0a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1110c0a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110c0aa je 0x1110c0bb */
  if (C.zf) goto L_1110c0bb;
  /* 1110c0ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c0af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110c0b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c0b5 jne 0x1110c0bb */
  if (!C.zf) goto L_1110c0bb;
  /* 1110c0b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110c0b9 jmp 0x1110c0df */
  goto L_1110c0df;
L_1110c0bb:;
  /* 1110c0bb call 0x1110b410 */
  push32(0x1110c0c0u); f_1110b410();
  /* 1110c0c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1110c0c6 call 0x1110b420 */
  push32(0x1110c0cbu); f_1110b420();
  /* 1110c0cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1110c0d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110c0d4 jmp 0x1110c0df */
  goto L_1110c0df;
L_1110c0d6:;
  /* 1110c0d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110c0d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1110c0df:;
  /* 1110c0df mov esp, ebp */
  ESP = (EBP);
  /* 1110c0e1 pop ebp */
  EBP = (pop32());
  /* 1110c0e2 ret  */
  ESPCHK(0x1110be70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0f0 @ 0x1110c0f0 (199 bytes, 68 insns) */
void f_1110c0f0(void) {
  FTRACE(0x1110c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1110c0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c0f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1110c0f5 push esi */
  push32((uint32_t)(ESI));
  /* 1110c0f6 push edi */
  push32((uint32_t)(EDI));
L_1110c0f7:;
  /* 1110c0f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c0fb jne 0x1110c11b */
  if (!C.zf) goto L_1110c11b;
  /* 1110c0fd push 0x1112af78 */
  push32((uint32_t)(0x1112af78u));
  /* 1110c102 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110c104 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1110c106 push 0x1112b048 */
  push32((uint32_t)(0x1112b048u));
  /* 1110c10b push 2 */
  push32((uint32_t)(0x2u));
  /* 1110c10d call 0x11102600 */
  push32(0x1110c112u); f_11102600();
  /* 1110c112 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c115 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c118 jne 0x1110c11b */
  if (!C.zf) goto L_1110c11b;
  /* 1110c11a int3  */
  x86_unimpl("int3 @ 0x1110c11a");
L_1110c11b:;
  /* 1110c11b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110c11d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110c11f jne 0x1110c0f7 */
  if (!C.zf) goto L_1110c0f7;
  /* 1110c121 mov ecx, dword ptr [0x1112f72c] */
  ECX = (r32((uint32_t)(0x1112f72c)));
  /* 1110c127 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c12a mov dword ptr [0x1112f72c], ecx */
  w32((uint32_t)(0x1112f72c), (ECX));
  /* 1110c130 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c133 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110c136 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1110c138 push 0x1112b048 */
  push32((uint32_t)(0x1112b048u));
  /* 1110c13d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110c13f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1110c144 call 0x11103540 */
  push32(0x1110c149u); f_11103540();
  /* 1110c149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c14c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c14f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1110c152 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c155 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c159 je 0x1110c176 */
  if (C.zf) goto L_1110c176;
  /* 1110c15b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c15e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110c161 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1110c164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c167 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1110c16a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c16d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1110c174 jmp 0x1110c19b */
  goto L_1110c19b;
L_1110c176:;
  /* 1110c176 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c179 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110c17c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1110c17f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c182 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1110c185 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c188 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c18b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c18e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1110c191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c194 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1110c19b:;
  /* 1110c19b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c19e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c1a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1110c1a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1110c1a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c1a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1110c1b0 pop edi */
  EDI = (pop32());
  /* 1110c1b1 pop esi */
  ESI = (pop32());
  /* 1110c1b2 pop ebx */
  EBX = (pop32());
  /* 1110c1b3 mov esp, ebp */
  ESP = (EBP);
  /* 1110c1b5 pop ebp */
  EBP = (pop32());
  /* 1110c1b6 ret  */
  ESPCHK(0x1110c0f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1110c1c0 (50 bytes, 17 insns) */
void f_1110c1c0(void) {
  FTRACE(0x1110c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1110c1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c1c6 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c1cc jb 0x1110c1d2 */
  if (C.cf) goto L_1110c1d2;
  /* 1110c1ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110c1d0 jmp 0x1110c1f0 */
  goto L_1110c1f0;
L_1110c1d2:;
  /* 1110c1d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c1d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c1d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c1db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110c1de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c1e1 mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110c1e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1110c1ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1110c1f0:;
  /* 1110c1f0 pop ebp */
  EBP = (pop32());
  /* 1110c1f1 ret  */
  ESPCHK(0x1110c1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c200 @ 0x1110c200 (300 bytes, 80 insns) */
void f_1110c200(void) {
  FTRACE(0x1110c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c200 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c201 mov ebp, esp */
  EBP = (ESP);
  /* 1110c203 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c204 cmp dword ptr [0x11130be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c20b jne 0x1110c219 */
  if (!C.zf) goto L_1110c219;
  /* 1110c20d mov dword ptr [0x11130be0], 0x200 */
  w32((uint32_t)(0x11130be0), (0x200u));
  /* 1110c217 jmp 0x1110c22c */
  goto L_1110c22c;
L_1110c219:;
  /* 1110c219 cmp dword ptr [0x11130be0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11130be0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c220 jge 0x1110c22c */
  if ((C.sf==C.of)) goto L_1110c22c;
  /* 1110c222 mov dword ptr [0x11130be0], 0x14 */
  w32((uint32_t)(0x11130be0), (0x14u));
L_1110c22c:;
  /* 1110c22c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1110c231 push 0x1112b054 */
  push32((uint32_t)(0x1112b054u));
  /* 1110c236 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110c238 push 4 */
  push32((uint32_t)(0x4u));
  /* 1110c23a mov eax, dword ptr [0x11130be0] */
  EAX = (r32((uint32_t)(0x11130be0)));
  /* 1110c23f push eax */
  push32((uint32_t)(EAX));
  /* 1110c240 call 0x11103950 */
  push32(0x1110c245u); f_11103950();
  /* 1110c245 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c248 mov dword ptr [0x1112f8a0], eax */
  w32((uint32_t)(0x1112f8a0), (EAX));
  /* 1110c24d cmp dword ptr [0x1112f8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c254 jne 0x1110c295 */
  if (!C.zf) goto L_1110c295;
  /* 1110c256 mov dword ptr [0x11130be0], 0x14 */
  w32((uint32_t)(0x11130be0), (0x14u));
  /* 1110c260 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1110c265 push 0x1112b054 */
  push32((uint32_t)(0x1112b054u));
  /* 1110c26a push 2 */
  push32((uint32_t)(0x2u));
  /* 1110c26c push 4 */
  push32((uint32_t)(0x4u));
  /* 1110c26e mov ecx, dword ptr [0x11130be0] */
  ECX = (r32((uint32_t)(0x11130be0)));
  /* 1110c274 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c275 call 0x11103950 */
  push32(0x1110c27au); f_11103950();
  /* 1110c27a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c27d mov dword ptr [0x1112f8a0], eax */
  w32((uint32_t)(0x1112f8a0), (EAX));
  /* 1110c282 cmp dword ptr [0x1112f8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c289 jne 0x1110c295 */
  if (!C.zf) goto L_1110c295;
  /* 1110c28b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1110c28d call 0x111024b0 */
  push32(0x1110c292u); f_111024b0();
  /* 1110c292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110c295:;
  /* 1110c295 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110c29c jmp 0x1110c2a7 */
  goto L_1110c2a7;
L_1110c29e:;
  /* 1110c29e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c2a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c2a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1110c2a7:;
  /* 1110c2a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c2ab jge 0x1110c2c6 */
  if ((C.sf==C.of)) goto L_1110c2c6;
  /* 1110c2ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c2b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110c2b3 add eax, 0x1112e120 */
  { uint32_t _a=(EAX),_b=(0x1112e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c2b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c2bb mov edx, dword ptr [0x1112f8a0] */
  EDX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110c2c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1110c2c4 jmp 0x1110c29e */
  goto L_1110c29e;
L_1110c2c6:;
  /* 1110c2c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110c2cd jmp 0x1110c2d8 */
  goto L_1110c2d8;
L_1110c2cf:;
  /* 1110c2cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c2d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c2d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110c2d8:;
  /* 1110c2d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c2dc jge 0x1110c328 */
  if ((C.sf==C.of)) goto L_1110c328;
  /* 1110c2de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c2e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c2e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c2e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110c2ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c2ed mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110c2f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c2f8 je 0x1110c316 */
  if (C.zf) goto L_1110c316;
  /* 1110c2fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c2fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c300 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c303 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110c306 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c309 mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110c310 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c314 jne 0x1110c326 */
  if (!C.zf) goto L_1110c326;
L_1110c316:;
  /* 1110c316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c319 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c31c mov dword ptr [ecx + 0x1112e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1112e130), (0xffffffffu));
L_1110c326:;
  /* 1110c326 jmp 0x1110c2cf */
  goto L_1110c2cf;
L_1110c328:;
  /* 1110c328 mov esp, ebp */
  ESP = (EBP);
  /* 1110c32a pop ebp */
  EBP = (pop32());
  /* 1110c32b ret  */
  ESPCHK(0x1110c200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c330 @ 0x1110c330 (26 bytes, 9 insns) */
void f_1110c330(void) {
  FTRACE(0x1110c330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c330 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c331 mov ebp, esp */
  EBP = (ESP);
  /* 1110c333 call 0x1110cf30 */
  push32(0x1110c338u); f_1110cf30();
  /* 1110c338 movsx eax, byte ptr [0x1112f548] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1112f548))));
  /* 1110c33f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110c341 je 0x1110c348 */
  if (C.zf) goto L_1110c348;
  /* 1110c343 call 0x1110ccf0 */
  push32(0x1110c348u); f_1110ccf0();
L_1110c348:;
  /* 1110c348 pop ebp */
  EBP = (pop32());
  /* 1110c349 ret  */
  ESPCHK(0x1110c330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c350 @ 0x1110c350 (61 bytes, 20 insns) */
void f_1110c350(void) {
  FTRACE(0x1110c350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c350 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c351 mov ebp, esp */
  EBP = (ESP);
  /* 1110c353 cmp dword ptr [ebp + 8], 0x1112e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1112e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c35a jb 0x1110c37e */
  if (C.cf) goto L_1110c37e;
  /* 1110c35c cmp dword ptr [ebp + 8], 0x1112e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1112e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c363 ja 0x1110c37e */
  if ((!C.cf&&!C.zf)) goto L_1110c37e;
  /* 1110c365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c368 sub eax, 0x1112e120 */
  { uint32_t _a=(EAX),_b=(0x1112e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110c36d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110c370 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c373 push eax */
  push32((uint32_t)(EAX));
  /* 1110c374 call 0x11106f40 */
  push32(0x1110c379u); f_11106f40();
  /* 1110c379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c37c jmp 0x1110c38b */
  goto L_1110c38b;
L_1110c37e:;
  /* 1110c37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c381 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c384 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c385 call dword ptr [0x1113231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113231c))), 0x1110c38bu);
L_1110c38b:;
  /* 1110c38b pop ebp */
  EBP = (pop32());
  /* 1110c38c ret  */
  ESPCHK(0x1110c350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x1110c390 (41 bytes, 16 insns) */
void f_1110c390(void) {
  FTRACE(0x1110c390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c390 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c391 mov ebp, esp */
  EBP = (ESP);
  /* 1110c393 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c397 jge 0x1110c3aa */
  if ((C.sf==C.of)) goto L_1110c3aa;
  /* 1110c399 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c39c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c39f push eax */
  push32((uint32_t)(EAX));
  /* 1110c3a0 call 0x11106f40 */
  push32(0x1110c3a5u); f_11106f40();
  /* 1110c3a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c3a8 jmp 0x1110c3b7 */
  goto L_1110c3b7;
L_1110c3aa:;
  /* 1110c3aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c3ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c3b1 call dword ptr [0x1113231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113231c))), 0x1110c3b7u);
L_1110c3b7:;
  /* 1110c3b7 pop ebp */
  EBP = (pop32());
  /* 1110c3b8 ret  */
  ESPCHK(0x1110c390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c0 @ 0x1110c3c0 (61 bytes, 20 insns) */
void f_1110c3c0(void) {
  FTRACE(0x1110c3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1110c3c3 cmp dword ptr [ebp + 8], 0x1112e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1112e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c3ca jb 0x1110c3ee */
  if (C.cf) goto L_1110c3ee;
  /* 1110c3cc cmp dword ptr [ebp + 8], 0x1112e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1112e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c3d3 ja 0x1110c3ee */
  if ((!C.cf&&!C.zf)) goto L_1110c3ee;
  /* 1110c3d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c3d8 sub eax, 0x1112e120 */
  { uint32_t _a=(EAX),_b=(0x1112e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110c3dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110c3e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c3e3 push eax */
  push32((uint32_t)(EAX));
  /* 1110c3e4 call 0x11106fe0 */
  push32(0x1110c3e9u); f_11106fe0();
  /* 1110c3e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c3ec jmp 0x1110c3fb */
  goto L_1110c3fb;
L_1110c3ee:;
  /* 1110c3ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c3f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c3f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c3f5 call dword ptr [0x11132318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132318))), 0x1110c3fbu);
L_1110c3fb:;
  /* 1110c3fb pop ebp */
  EBP = (pop32());
  /* 1110c3fc ret  */
  ESPCHK(0x1110c3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x1110c400 (41 bytes, 16 insns) */
void f_1110c400(void) {
  FTRACE(0x1110c400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c400 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c401 mov ebp, esp */
  EBP = (ESP);
  /* 1110c403 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c407 jge 0x1110c41a */
  if ((C.sf==C.of)) goto L_1110c41a;
  /* 1110c409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c40c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c40f push eax */
  push32((uint32_t)(EAX));
  /* 1110c410 call 0x11106fe0 */
  push32(0x1110c415u); f_11106fe0();
  /* 1110c415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c418 jmp 0x1110c427 */
  goto L_1110c427;
L_1110c41a:;
  /* 1110c41a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c41d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c420 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c421 call dword ptr [0x11132318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132318))), 0x1110c427u);
L_1110c427:;
  /* 1110c427 pop ebp */
  EBP = (pop32());
  /* 1110c428 ret  */
  ESPCHK(0x1110c400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x1110c430 (119 bytes, 34 insns) */
void f_1110c430(void) {
  FTRACE(0x1110c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c430 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c431 mov ebp, esp */
  EBP = (ESP);
  /* 1110c433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110c436 push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 1110c43b call dword ptr [0x1113234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113234c))), 0x1110c441u);
  /* 1110c441 cmp dword ptr [0x1112f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c448 je 0x1110c468 */
  if (C.zf) goto L_1110c468;
  /* 1110c44a push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 1110c44f call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x1110c455u);
  /* 1110c455 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1110c457 call 0x11106f40 */
  push32(0x1110c45cu); f_11106f40();
  /* 1110c45c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c45f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1110c466 jmp 0x1110c46f */
  goto L_1110c46f;
L_1110c468:;
  /* 1110c468 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1110c46f:;
  /* 1110c46f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1110c473 push eax */
  push32((uint32_t)(EAX));
  /* 1110c474 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c477 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c478 call 0x1110c4b0 */
  push32(0x1110c47du); f_1110c4b0();
  /* 1110c47d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c480 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110c483 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c487 je 0x1110c495 */
  if (C.zf) goto L_1110c495;
  /* 1110c489 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1110c48b call 0x11106fe0 */
  push32(0x1110c490u); f_11106fe0();
  /* 1110c490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c493 jmp 0x1110c4a0 */
  goto L_1110c4a0;
L_1110c495:;
  /* 1110c495 push 0x1112f89c */
  push32((uint32_t)(0x1112f89cu));
  /* 1110c49a call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x1110c4a0u);
L_1110c4a0:;
  /* 1110c4a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110c4a3 mov esp, ebp */
  ESP = (EBP);
  /* 1110c4a5 pop ebp */
  EBP = (pop32());
  /* 1110c4a6 ret  */
  ESPCHK(0x1110c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4b0 @ 0x1110c4b0 (160 bytes, 50 insns) */
void f_1110c4b0(void) {
  FTRACE(0x1110c4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1110c4b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110c4b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c4ba jne 0x1110c4c3 */
  if (!C.zf) goto L_1110c4c3;
  /* 1110c4bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110c4be jmp 0x1110c54c */
  goto L_1110c54c;
L_1110c4c3:;
  /* 1110c4c3 cmp dword ptr [0x1112f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c4ca jne 0x1110c4fa */
  if (!C.zf) goto L_1110c4fa;
  /* 1110c4cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c4cf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110c4d4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c4d9 jle 0x1110c4eb */
  if ((C.zf||C.sf!=C.of)) goto L_1110c4eb;
  /* 1110c4db call 0x1110b410 */
  push32(0x1110c4e0u); f_1110b410();
  /* 1110c4e0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1110c4e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110c4e9 jmp 0x1110c54c */
  goto L_1110c54c;
L_1110c4eb:;
  /* 1110c4eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c4ee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1110c4f1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1110c4f3 mov eax, 1 */
  EAX = (0x1u);
  /* 1110c4f8 jmp 0x1110c54c */
  goto L_1110c54c;
L_1110c4fa:;
  /* 1110c4fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110c501 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1110c504 push eax */
  push32((uint32_t)(EAX));
  /* 1110c505 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110c507 mov ecx, dword ptr [0x1112dea4] */
  ECX = (r32((uint32_t)(0x1112dea4)));
  /* 1110c50d push ecx */
  push32((uint32_t)(ECX));
  /* 1110c50e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c511 push edx */
  push32((uint32_t)(EDX));
  /* 1110c512 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110c514 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1110c517 push eax */
  push32((uint32_t)(EAX));
  /* 1110c518 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1110c51d mov ecx, dword ptr [0x1112f720] */
  ECX = (r32((uint32_t)(0x1112f720)));
  /* 1110c523 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c524 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x1110c52au);
  /* 1110c52a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110c52d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c531 je 0x1110c539 */
  if (C.zf) goto L_1110c539;
  /* 1110c533 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c537 je 0x1110c549 */
  if (C.zf) goto L_1110c549;
L_1110c539:;
  /* 1110c539 call 0x1110b410 */
  push32(0x1110c53eu); f_1110b410();
  /* 1110c53e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1110c544 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110c547 jmp 0x1110c54c */
  goto L_1110c54c;
L_1110c549:;
  /* 1110c549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1110c54c:;
  /* 1110c54c mov esp, ebp */
  ESP = (EBP);
  /* 1110c54e pop ebp */
  EBP = (pop32());
  /* 1110c54f ret  */
  ESPCHK(0x1110c4b0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1110c550 (32 bytes, 18 insns) */
void f_1110c550(void) {
  FTRACE(0x1110c550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c550 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c551 mov ebp, esp */
  EBP = (ESP);
  /* 1110c553 push ebx */
  push32((uint32_t)(EBX));
  /* 1110c554 push esi */
  push32((uint32_t)(ESI));
  /* 1110c555 push edi */
  push32((uint32_t)(EDI));
  /* 1110c556 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c557 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110c559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110c55b push 0x1110c568 */
  push32((uint32_t)(0x1110c568u));
  /* 1110c560 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1110c563 call 0x11113c9c */
  push32(0x1110c568u); f_11113c9c();
  /* 1110c568 pop ebp */
  EBP = (pop32());
  /* 1110c569 pop edi */
  EDI = (pop32());
  /* 1110c56a pop esi */
  ESI = (pop32());
  /* 1110c56b pop ebx */
  EBX = (pop32());
  /* 1110c56c mov esp, ebp */
  ESP = (EBP);
  /* 1110c56e pop ebp */
  EBP = (pop32());
  /* 1110c56f ret  */
  ESPCHK(0x1110c550u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1110c592 (104 bytes, 33 insns) */
void f_1110c592(void) {
  FTRACE(0x1110c592u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c592 push ebx */
  push32((uint32_t)(EBX));
  /* 1110c593 push esi */
  push32((uint32_t)(ESI));
  /* 1110c594 push edi */
  push32((uint32_t)(EDI));
  /* 1110c595 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1110c599 push eax */
  push32((uint32_t)(EAX));
  /* 1110c59a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1110c59c push 0x1110c570 */
  push32((uint32_t)(0x1110c570u));
  /* 1110c5a1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1110c5a8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1110c5af:;
  /* 1110c5af mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1110c5b3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1110c5b6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1110c5b9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c5bc je 0x1110c5ec */
  if (C.zf) goto L_1110c5ec;
  /* 1110c5be cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c5c2 je 0x1110c5ec */
  if (C.zf) goto L_1110c5ec;
  /* 1110c5c4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1110c5c7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1110c5ca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1110c5ce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1110c5d1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c5d6 jne 0x1110c5ea */
  if (!C.zf) goto L_1110c5ea;
  /* 1110c5d8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1110c5dd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1110c5e1 call 0x1110c626 */
  push32(0x1110c5e6u); f_1110c626();
  /* 1110c5e6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1110c5eau);
L_1110c5ea:;
  /* 1110c5ea jmp 0x1110c5af */
  goto L_1110c5af;
L_1110c5ec:;
  /* 1110c5ec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1110c5f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c5f6 pop edi */
  EDI = (pop32());
  /* 1110c5f7 pop esi */
  ESI = (pop32());
  /* 1110c5f8 pop ebx */
  EBX = (pop32());
  /* 1110c5f9 ret  */
  ESPCHK(0x1110c592u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c626 @ 0x1110c626 (24 bytes, 10 insns) */
void f_1110c626(void) {
  FTRACE(0x1110c626u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c626 push ebx */
  push32((uint32_t)(EBX));
  /* 1110c627 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c628 mov ebx, 0x1112e3b8 */
  EBX = (0x1112e3b8u);
  /* 1110c62d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c630 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1110c633 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1110c636 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1110c639 pop ecx */
  ECX = (pop32());
  /* 1110c63a pop ebx */
  EBX = (pop32());
  /* 1110c63b ret 4 */
  ESPCHK(0x1110c626u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c705 @ 0x1110c705 (27 bytes, 11 insns) */
void f_1110c705(void) {
  FTRACE(0x1110c705u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c705 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c706 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1110c70a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1110c70c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1110c70f push eax */
  push32((uint32_t)(EAX));
  /* 1110c710 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1110c713 push eax */
  push32((uint32_t)(EAX));
  /* 1110c714 call 0x1110c592 */
  push32(0x1110c719u); f_1110c592();
  /* 1110c719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c71c pop ebp */
  EBP = (pop32());
  /* 1110c71d ret 4 */
  ESPCHK(0x1110c705u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c720 @ 0x1110c720 (482 bytes, 138 insns) */
void f_1110c720(void) {
  FTRACE(0x1110c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c720 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c721 mov ebp, esp */
  EBP = (ESP);
  /* 1110c723 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110c726 push esi */
  push32((uint32_t)(ESI));
  /* 1110c727 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1110c72e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1110c730 call 0x11106f40 */
  push32(0x1110c735u); f_11106f40();
  /* 1110c735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c738 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1110c73f jmp 0x1110c74a */
  goto L_1110c74a;
L_1110c741:;
  /* 1110c741 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c744 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c747 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1110c74a:;
  /* 1110c74a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c74e jge 0x1110c8f0 */
  if ((C.sf==C.of)) goto L_1110c8f0;
  /* 1110c754 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c757 cmp dword ptr [ecx*4 + 0x11130ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11130ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c75f je 0x1110c856 */
  if (C.zf) goto L_1110c856;
  /* 1110c765 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c768 mov eax, dword ptr [edx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 1110c76f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110c772 jmp 0x1110c77d */
  goto L_1110c77d;
L_1110c774:;
  /* 1110c774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c777 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c77a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1110c77d:;
  /* 1110c77d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c780 mov eax, dword ptr [edx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 1110c787 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c78c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c78f jae 0x1110c846 */
  if (!C.cf) goto L_1110c846;
  /* 1110c795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c798 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1110c79c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1110c79f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110c7a1 jne 0x1110c841 */
  if (!C.zf) goto L_1110c841;
  /* 1110c7a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c7aa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c7ae jne 0x1110c7e9 */
  if (!C.zf) goto L_1110c7e9;
  /* 1110c7b0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1110c7b2 call 0x11106f40 */
  push32(0x1110c7b7u); f_11106f40();
  /* 1110c7b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c7ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c7bd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c7c1 jne 0x1110c7df */
  if (!C.zf) goto L_1110c7df;
  /* 1110c7c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c7c6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c7c9 push edx */
  push32((uint32_t)(EDX));
  /* 1110c7ca call dword ptr [0x11132320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132320))), 0x1110c7d0u);
  /* 1110c7d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c7d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1110c7d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c7d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c7dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1110c7df:;
  /* 1110c7df push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1110c7e1 call 0x11106fe0 */
  push32(0x1110c7e6u); f_11106fe0();
  /* 1110c7e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110c7e9:;
  /* 1110c7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c7ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c7ef push eax */
  push32((uint32_t)(EAX));
  /* 1110c7f0 call dword ptr [0x1113231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113231c))), 0x1110c7f6u);
  /* 1110c7f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c7f9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1110c7fd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1110c800 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110c802 je 0x1110c816 */
  if (C.zf) goto L_1110c816;
  /* 1110c804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c807 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c80a push eax */
  push32((uint32_t)(EAX));
  /* 1110c80b call dword ptr [0x11132318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132318))), 0x1110c811u);
  /* 1110c811 jmp 0x1110c774 */
  goto L_1110c774;
L_1110c816:;
  /* 1110c816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c819 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1110c81f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c822 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c825 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c82b sub eax, dword ptr [edx*4 + 0x11130ee0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11130ee0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110c832 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110c833 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1110c838 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1110c83a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c83c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110c83f jmp 0x1110c846 */
  goto L_1110c846;
L_1110c841:;
  /* 1110c841 jmp 0x1110c774 */
  goto L_1110c774;
L_1110c846:;
  /* 1110c846 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c84a je 0x1110c851 */
  if (C.zf) goto L_1110c851;
  /* 1110c84c jmp 0x1110c8f0 */
  goto L_1110c8f0;
L_1110c851:;
  /* 1110c851 jmp 0x1110c8eb */
  goto L_1110c8eb;
L_1110c856:;
  /* 1110c856 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1110c858 push 0x1112b05c */
  push32((uint32_t)(0x1112b05cu));
  /* 1110c85d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110c85f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1110c864 call 0x11103540 */
  push32(0x1110c869u); f_11103540();
  /* 1110c869 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c86c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110c86f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c873 je 0x1110c8e9 */
  if (C.zf) goto L_1110c8e9;
  /* 1110c875 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c878 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c87b mov dword ptr [eax*4 + 0x11130ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x11130ee0), (ECX));
  /* 1110c882 mov edx, dword ptr [0x1113101c] */
  EDX = (r32((uint32_t)(0x1113101c)));
  /* 1110c888 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c88b mov dword ptr [0x1113101c], edx */
  w32((uint32_t)(0x1113101c), (EDX));
  /* 1110c891 jmp 0x1110c89c */
  goto L_1110c89c;
L_1110c893:;
  /* 1110c893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c896 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110c89c:;
  /* 1110c89c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c89f mov edx, dword ptr [ecx*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110c8a6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c8ac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c8af jae 0x1110c8d4 */
  if (!C.cf) goto L_1110c8d4;
  /* 1110c8b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c8b4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1110c8b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c8bb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1110c8c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c8c4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1110c8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110c8cb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1110c8d2 jmp 0x1110c893 */
  goto L_1110c893;
L_1110c8d4:;
  /* 1110c8d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110c8d7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c8da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110c8dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110c8e0 push edx */
  push32((uint32_t)(EDX));
  /* 1110c8e1 call 0x1110cc30 */
  push32(0x1110c8e6u); f_1110cc30();
  /* 1110c8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110c8e9:;
  /* 1110c8e9 jmp 0x1110c8f0 */
  goto L_1110c8f0;
L_1110c8eb:;
  /* 1110c8eb jmp 0x1110c741 */
  goto L_1110c741;
L_1110c8f0:;
  /* 1110c8f0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1110c8f2 call 0x11106fe0 */
  push32(0x1110c8f7u); f_11106fe0();
  /* 1110c8f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110c8fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110c8fd pop esi */
  ESI = (pop32());
  /* 1110c8fe mov esp, ebp */
  ESP = (EBP);
  /* 1110c900 pop ebp */
  EBP = (pop32());
  /* 1110c901 ret  */
  ESPCHK(0x1110c720u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1110c910 (183 bytes, 57 insns) */
void f_1110c910(void) {
  FTRACE(0x1110c910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c910 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c911 mov ebp, esp */
  EBP = (ESP);
  /* 1110c913 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c917 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c91d jae 0x1110c9aa */
  if (!C.cf) goto L_1110c9aa;
  /* 1110c923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c926 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c929 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c92c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110c92f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c932 mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110c939 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c93d jne 0x1110c9aa */
  if (!C.zf) goto L_1110c9aa;
  /* 1110c93f cmp dword ptr [0x1112f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c946 jne 0x1110c98a */
  if (!C.zf) goto L_1110c98a;
  /* 1110c948 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c94b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110c94e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c952 je 0x1110c962 */
  if (C.zf) goto L_1110c962;
  /* 1110c954 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c958 je 0x1110c970 */
  if (C.zf) goto L_1110c970;
  /* 1110c95a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c95e je 0x1110c97e */
  if (C.zf) goto L_1110c97e;
  /* 1110c960 jmp 0x1110c98a */
  goto L_1110c98a;
L_1110c962:;
  /* 1110c962 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c965 push edx */
  push32((uint32_t)(EDX));
  /* 1110c966 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1110c968 call dword ptr [0x111322d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d8))), 0x1110c96eu);
  /* 1110c96e jmp 0x1110c98a */
  goto L_1110c98a;
L_1110c970:;
  /* 1110c970 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c973 push eax */
  push32((uint32_t)(EAX));
  /* 1110c974 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1110c976 call dword ptr [0x111322d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d8))), 0x1110c97cu);
  /* 1110c97c jmp 0x1110c98a */
  goto L_1110c98a;
L_1110c97e:;
  /* 1110c97e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c981 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c982 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1110c984 call dword ptr [0x111322d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d8))), 0x1110c98au);
L_1110c98a:;
  /* 1110c98a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c98d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1110c990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c993 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1110c996 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c999 mov ecx, dword ptr [edx*4 + 0x11130ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 1110c9a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110c9a3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1110c9a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110c9a8 jmp 0x1110c9c3 */
  goto L_1110c9c3;
L_1110c9aa:;
  /* 1110c9aa call 0x1110b410 */
  push32(0x1110c9afu); f_1110b410();
  /* 1110c9af mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110c9b5 call 0x1110b420 */
  push32(0x1110c9bau); f_1110b420();
  /* 1110c9ba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1110c9c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1110c9c3:;
  /* 1110c9c3 mov esp, ebp */
  ESP = (EBP);
  /* 1110c9c5 pop ebp */
  EBP = (pop32());
  /* 1110c9c6 ret  */
  ESPCHK(0x1110c910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9d0 @ 0x1110c9d0 (216 bytes, 63 insns) */
void f_1110c9d0(void) {
  FTRACE(0x1110c9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110c9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110c9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1110c9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110c9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c9d7 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110c9dd jae 0x1110ca8b */
  if (!C.cf) goto L_1110ca8b;
  /* 1110c9e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c9e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110c9e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110c9ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110c9ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110c9f2 mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110c9f9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1110c9fe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110ca01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110ca03 je 0x1110ca8b */
  if (C.zf) goto L_1110ca8b;
  /* 1110ca09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ca0c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1110ca0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ca12 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1110ca15 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ca18 mov ecx, dword ptr [edx*4 + 0x11130ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 1110ca1f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ca23 je 0x1110ca8b */
  if (C.zf) goto L_1110ca8b;
  /* 1110ca25 cmp dword ptr [0x1112f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ca2c jne 0x1110ca6a */
  if (!C.zf) goto L_1110ca6a;
  /* 1110ca2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ca31 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110ca34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ca38 je 0x1110ca48 */
  if (C.zf) goto L_1110ca48;
  /* 1110ca3a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ca3e je 0x1110ca54 */
  if (C.zf) goto L_1110ca54;
  /* 1110ca40 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ca44 je 0x1110ca60 */
  if (C.zf) goto L_1110ca60;
  /* 1110ca46 jmp 0x1110ca6a */
  goto L_1110ca6a;
L_1110ca48:;
  /* 1110ca48 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ca4a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1110ca4c call dword ptr [0x111322d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d8))), 0x1110ca52u);
  /* 1110ca52 jmp 0x1110ca6a */
  goto L_1110ca6a;
L_1110ca54:;
  /* 1110ca54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ca56 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1110ca58 call dword ptr [0x111322d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d8))), 0x1110ca5eu);
  /* 1110ca5e jmp 0x1110ca6a */
  goto L_1110ca6a;
L_1110ca60:;
  /* 1110ca60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ca62 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1110ca64 call dword ptr [0x111322d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d8))), 0x1110ca6au);
L_1110ca6a:;
  /* 1110ca6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ca6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110ca70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ca73 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110ca76 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ca79 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110ca80 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1110ca87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ca89 jmp 0x1110caa4 */
  goto L_1110caa4;
L_1110ca8b:;
  /* 1110ca8b call 0x1110b410 */
  push32(0x1110ca90u); f_1110b410();
  /* 1110ca90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110ca96 call 0x1110b420 */
  push32(0x1110ca9bu); f_1110b420();
  /* 1110ca9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1110caa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1110caa4:;
  /* 1110caa4 mov esp, ebp */
  ESP = (EBP);
  /* 1110caa6 pop ebp */
  EBP = (pop32());
  /* 1110caa7 ret  */
  ESPCHK(0x1110c9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cab0 @ 0x1110cab0 (102 bytes, 30 insns) */
void f_1110cab0(void) {
  FTRACE(0x1110cab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110cab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110cab1 mov ebp, esp */
  EBP = (ESP);
  /* 1110cab3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cab6 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cabc jae 0x1110cafb */
  if (!C.cf) goto L_1110cafb;
  /* 1110cabe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cac1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110cac4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cac7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110caca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110cacd mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110cad4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1110cad9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110cadc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110cade je 0x1110cafb */
  if (C.zf) goto L_1110cafb;
  /* 1110cae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cae3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1110cae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cae9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1110caec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110caef mov ecx, dword ptr [edx*4 + 0x11130ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 1110caf6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1110caf9 jmp 0x1110cb14 */
  goto L_1110cb14;
L_1110cafb:;
  /* 1110cafb call 0x1110b410 */
  push32(0x1110cb00u); f_1110b410();
  /* 1110cb00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110cb06 call 0x1110b420 */
  push32(0x1110cb0bu); f_1110b420();
  /* 1110cb0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1110cb11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1110cb14:;
  /* 1110cb14 pop ebp */
  EBP = (pop32());
  /* 1110cb15 ret  */
  ESPCHK(0x1110cab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb20 @ 0x1110cb20 (260 bytes, 83 insns) */
void f_1110cb20(void) {
  FTRACE(0x1110cb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110cb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1110cb21 mov ebp, esp */
  EBP = (ESP);
  /* 1110cb23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110cb26 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1110cb2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110cb2d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1110cb30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110cb32 je 0x1110cb3d */
  if (C.zf) goto L_1110cb3d;
  /* 1110cb34 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1110cb37 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1110cb3a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1110cb3d:;
  /* 1110cb3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110cb40 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1110cb46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110cb48 je 0x1110cb52 */
  if (C.zf) goto L_1110cb52;
  /* 1110cb4a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1110cb4d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1110cb4f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1110cb52:;
  /* 1110cb52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110cb55 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1110cb5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110cb5d je 0x1110cb68 */
  if (C.zf) goto L_1110cb68;
  /* 1110cb5f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1110cb62 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1110cb65 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1110cb68:;
  /* 1110cb68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cb6b push eax */
  push32((uint32_t)(EAX));
  /* 1110cb6c call dword ptr [0x11132384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132384))), 0x1110cb72u);
  /* 1110cb72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110cb75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cb79 jne 0x1110cb92 */
  if (!C.zf) goto L_1110cb92;
  /* 1110cb7b call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x1110cb81u);
  /* 1110cb81 push eax */
  push32((uint32_t)(EAX));
  /* 1110cb82 call 0x1110b370 */
  push32(0x1110cb87u); f_1110b370();
  /* 1110cb87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cb8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110cb8d jmp 0x1110cc20 */
  goto L_1110cc20;
L_1110cb92:;
  /* 1110cb92 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cb96 jne 0x1110cba3 */
  if (!C.zf) goto L_1110cba3;
  /* 1110cb98 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1110cb9b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1110cb9e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1110cba1 jmp 0x1110cbb2 */
  goto L_1110cbb2;
L_1110cba3:;
  /* 1110cba3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cba7 jne 0x1110cbb2 */
  if (!C.zf) goto L_1110cbb2;
  /* 1110cba9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1110cbac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1110cbaf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1110cbb2:;
  /* 1110cbb2 call 0x1110c720 */
  push32(0x1110cbb7u); f_1110c720();
  /* 1110cbb7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110cbba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cbbe jne 0x1110cbdb */
  if (!C.zf) goto L_1110cbdb;
  /* 1110cbc0 call 0x1110b410 */
  push32(0x1110cbc5u); f_1110b410();
  /* 1110cbc5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1110cbcb call 0x1110b420 */
  push32(0x1110cbd0u); f_1110b420();
  /* 1110cbd0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1110cbd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110cbd9 jmp 0x1110cc20 */
  goto L_1110cc20;
L_1110cbdb:;
  /* 1110cbdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cbde push eax */
  push32((uint32_t)(EAX));
  /* 1110cbdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cbe2 push ecx */
  push32((uint32_t)(ECX));
  /* 1110cbe3 call 0x1110c910 */
  push32(0x1110cbe8u); f_1110c910();
  /* 1110cbe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cbeb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1110cbee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1110cbf1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1110cbf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cbf7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110cbfa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cbfd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110cc00 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110cc03 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110cc0a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1110cc0d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1110cc11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cc14 push ecx */
  push32((uint32_t)(ECX));
  /* 1110cc15 call 0x1110ccc0 */
  push32(0x1110cc1au); f_1110ccc0();
  /* 1110cc1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cc1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1110cc20:;
  /* 1110cc20 mov esp, ebp */
  ESP = (EBP);
  /* 1110cc22 pop ebp */
  EBP = (pop32());
  /* 1110cc23 ret  */
  ESPCHK(0x1110cb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x1110cc30 (134 bytes, 44 insns) */
void f_1110cc30(void) {
  FTRACE(0x1110cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1110cc31 mov ebp, esp */
  EBP = (ESP);
  /* 1110cc33 push ecx */
  push32((uint32_t)(ECX));
  /* 1110cc34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cc37 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110cc3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cc3d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110cc40 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110cc43 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110cc4a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cc4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110cc4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cc52 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cc56 jne 0x1110cc91 */
  if (!C.zf) goto L_1110cc91;
  /* 1110cc58 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1110cc5a call 0x11106f40 */
  push32(0x1110cc5fu); f_11106f40();
  /* 1110cc5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cc62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cc65 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cc69 jne 0x1110cc87 */
  if (!C.zf) goto L_1110cc87;
  /* 1110cc6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cc6e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cc71 push edx */
  push32((uint32_t)(EDX));
  /* 1110cc72 call dword ptr [0x11132320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132320))), 0x1110cc78u);
  /* 1110cc78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cc7b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1110cc7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cc81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cc84 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1110cc87:;
  /* 1110cc87 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1110cc89 call 0x11106fe0 */
  push32(0x1110cc8eu); f_11106fe0();
  /* 1110cc8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110cc91:;
  /* 1110cc91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cc94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110cc97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cc9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110cc9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110cca0 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110cca7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1110ccab push eax */
  push32((uint32_t)(EAX));
  /* 1110ccac call dword ptr [0x1113231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113231c))), 0x1110ccb2u);
  /* 1110ccb2 mov esp, ebp */
  ESP = (EBP);
  /* 1110ccb4 pop ebp */
  EBP = (pop32());
  /* 1110ccb5 ret  */
  ESPCHK(0x1110cc30u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1110ccc0 (38 bytes, 13 insns) */
void f_1110ccc0(void) {
  FTRACE(0x1110ccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ccc1 mov ebp, esp */
  EBP = (ESP);
  /* 1110ccc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ccc6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110ccc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cccc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110cccf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ccd2 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110ccd9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1110ccdd push eax */
  push32((uint32_t)(EAX));
  /* 1110ccde call dword ptr [0x11132318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132318))), 0x1110cce4u);
  /* 1110cce4 pop ebp */
  EBP = (pop32());
  /* 1110cce5 ret  */
  ESPCHK(0x1110ccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x1110ccf0 (218 bytes, 63 insns) */
void f_1110ccf0(void) {
  FTRACE(0x1110ccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ccf1 mov ebp, esp */
  EBP = (ESP);
  /* 1110ccf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ccf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110ccfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ccff call 0x11106f40 */
  push32(0x1110cd04u); f_11106f40();
  /* 1110cd04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cd07 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1110cd0e jmp 0x1110cd19 */
  goto L_1110cd19;
L_1110cd10:;
  /* 1110cd10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cd13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cd16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1110cd19:;
  /* 1110cd19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cd1c cmp ecx, dword ptr [0x11130be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cd22 jge 0x1110cdb9 */
  if ((C.sf==C.of)) goto L_1110cdb9;
  /* 1110cd28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cd2b mov eax, dword ptr [0x1112f8a0] */
  EAX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cd30 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cd34 je 0x1110cdb4 */
  if (C.zf) goto L_1110cdb4;
  /* 1110cd36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cd39 mov edx, dword ptr [0x1112f8a0] */
  EDX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cd3f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1110cd42 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110cd45 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1110cd4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110cd4d je 0x1110cd71 */
  if (C.zf) goto L_1110cd71;
  /* 1110cd4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cd52 mov eax, dword ptr [0x1112f8a0] */
  EAX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cd57 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1110cd5a push ecx */
  push32((uint32_t)(ECX));
  /* 1110cd5b call 0x1110dae0 */
  push32(0x1110cd60u); f_1110dae0();
  /* 1110cd60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cd63 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cd66 je 0x1110cd71 */
  if (C.zf) goto L_1110cd71;
  /* 1110cd68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cd6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cd6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1110cd71:;
  /* 1110cd71 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cd75 jl 0x1110cdb4 */
  if ((C.sf!=C.of)) goto L_1110cdb4;
  /* 1110cd77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cd7a mov ecx, dword ptr [0x1112f8a0] */
  ECX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cd80 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1110cd83 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cd86 push edx */
  push32((uint32_t)(EDX));
  /* 1110cd87 call dword ptr [0x1113238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113238c))), 0x1110cd8du);
  /* 1110cd8d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110cd8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cd92 mov ecx, dword ptr [0x1112f8a0] */
  ECX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cd98 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1110cd9b push edx */
  push32((uint32_t)(EDX));
  /* 1110cd9c call 0x11103fd0 */
  push32(0x1110cda1u); f_11103fd0();
  /* 1110cda1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cda4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cda7 mov ecx, dword ptr [0x1112f8a0] */
  ECX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cdad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1110cdb4:;
  /* 1110cdb4 jmp 0x1110cd10 */
  goto L_1110cd10;
L_1110cdb9:;
  /* 1110cdb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110cdbb call 0x11106fe0 */
  push32(0x1110cdc0u); f_11106fe0();
  /* 1110cdc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cdc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cdc6 mov esp, ebp */
  ESP = (EBP);
  /* 1110cdc8 pop ebp */
  EBP = (pop32());
  /* 1110cdc9 ret  */
  ESPCHK(0x1110ccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdd0 @ 0x1110cdd0 (68 bytes, 26 insns) */
void f_1110cdd0(void) {
  FTRACE(0x1110cdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110cdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110cdd1 mov ebp, esp */
  EBP = (ESP);
  /* 1110cdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110cdd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cdd8 jne 0x1110cde6 */
  if (!C.zf) goto L_1110cde6;
  /* 1110cdda push 0 */
  push32((uint32_t)(0x0u));
  /* 1110cddc call 0x1110cf40 */
  push32(0x1110cde1u); f_1110cf40();
  /* 1110cde1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cde4 jmp 0x1110ce10 */
  goto L_1110ce10;
L_1110cde6:;
  /* 1110cde6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cde9 push eax */
  push32((uint32_t)(EAX));
  /* 1110cdea call 0x1110c350 */
  push32(0x1110cdefu); f_1110c350();
  /* 1110cdef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cdf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110cdf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110cdf6 call 0x1110ce20 */
  push32(0x1110cdfbu); f_1110ce20();
  /* 1110cdfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cdfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110ce01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ce04 push edx */
  push32((uint32_t)(EDX));
  /* 1110ce05 call 0x1110c3c0 */
  push32(0x1110ce0au); f_1110c3c0();
  /* 1110ce0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ce0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1110ce10:;
  /* 1110ce10 mov esp, ebp */
  ESP = (EBP);
  /* 1110ce12 pop ebp */
  EBP = (pop32());
  /* 1110ce13 ret  */
  ESPCHK(0x1110cdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce20 @ 0x1110ce20 (65 bytes, 26 insns) */
void f_1110ce20(void) {
  FTRACE(0x1110ce20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ce20 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ce21 mov ebp, esp */
  EBP = (ESP);
  /* 1110ce23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ce26 push eax */
  push32((uint32_t)(EAX));
  /* 1110ce27 call 0x1110ce70 */
  push32(0x1110ce2cu); f_1110ce70();
  /* 1110ce2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ce2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ce31 je 0x1110ce38 */
  if (C.zf) goto L_1110ce38;
  /* 1110ce33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110ce36 jmp 0x1110ce5f */
  goto L_1110ce5f;
L_1110ce38:;
  /* 1110ce38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ce3b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110ce3e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1110ce44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110ce46 je 0x1110ce5d */
  if (C.zf) goto L_1110ce5d;
  /* 1110ce48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ce4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1110ce4e push ecx */
  push32((uint32_t)(ECX));
  /* 1110ce4f call 0x1110dc30 */
  push32(0x1110ce54u); f_1110dc30();
  /* 1110ce54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ce57 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110ce59 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ce5b jmp 0x1110ce5f */
  goto L_1110ce5f;
L_1110ce5d:;
  /* 1110ce5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110ce5f:;
  /* 1110ce5f pop ebp */
  EBP = (pop32());
  /* 1110ce60 ret  */
  ESPCHK(0x1110ce20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x1110ce70 (183 bytes, 62 insns) */
void f_1110ce70(void) {
  FTRACE(0x1110ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ce71 mov ebp, esp */
  EBP = (ESP);
  /* 1110ce73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ce76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110ce7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ce80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110ce83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ce86 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110ce89 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1110ce8c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ce8f jne 0x1110cf0b */
  if (!C.zf) goto L_1110cf0b;
  /* 1110ce91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ce94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110ce97 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1110ce9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110ce9f je 0x1110cf0b */
  if (C.zf) goto L_1110cf0b;
  /* 1110cea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cea4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cea7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1110cea9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ceac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110ceaf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ceb3 jle 0x1110cf0b */
  if ((C.zf||C.sf!=C.of)) goto L_1110cf0b;
  /* 1110ceb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ceb8 push edx */
  push32((uint32_t)(EDX));
  /* 1110ceb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cebc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1110cebf push ecx */
  push32((uint32_t)(ECX));
  /* 1110cec0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cec3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1110cec6 push eax */
  push32((uint32_t)(EAX));
  /* 1110cec7 call 0x1110bde0 */
  push32(0x1110ceccu); f_1110bde0();
  /* 1110cecc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cecf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ced2 jne 0x1110cef5 */
  if (!C.zf) goto L_1110cef5;
  /* 1110ced4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ced7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110ceda and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1110cee0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110cee2 je 0x1110cef3 */
  if (C.zf) goto L_1110cef3;
  /* 1110cee4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cee7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110ceea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1110ceed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cef0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1110cef3:;
  /* 1110cef3 jmp 0x1110cf0b */
  goto L_1110cf0b;
L_1110cef5:;
  /* 1110cef5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cef8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110cefb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1110cefe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cf01 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1110cf04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1110cf0b:;
  /* 1110cf0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cf0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cf11 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1110cf14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1110cf16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110cf19 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1110cf20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110cf23 mov esp, ebp */
  ESP = (EBP);
  /* 1110cf25 pop ebp */
  EBP = (pop32());
  /* 1110cf26 ret  */
  ESPCHK(0x1110ce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf30 @ 0x1110cf30 (15 bytes, 7 insns) */
void f_1110cf30(void) {
  FTRACE(0x1110cf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110cf30 push ebp */
  push32((uint32_t)(EBP));
  /* 1110cf31 mov ebp, esp */
  EBP = (ESP);
  /* 1110cf33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110cf35 call 0x1110cf40 */
  push32(0x1110cf3au); f_1110cf40();
  /* 1110cf3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cf3d pop ebp */
  EBP = (pop32());
  /* 1110cf3e ret  */
  ESPCHK(0x1110cf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x1110cf40 (319 bytes, 94 insns) */
void f_1110cf40(void) {
  FTRACE(0x1110cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1110cf41 mov ebp, esp */
  EBP = (ESP);
  /* 1110cf43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110cf46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110cf4d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110cf54 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110cf56 call 0x11106f40 */
  push32(0x1110cf5bu); f_11106f40();
  /* 1110cf5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cf5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1110cf65 jmp 0x1110cf70 */
  goto L_1110cf70;
L_1110cf67:;
  /* 1110cf67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cf6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cf6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1110cf70:;
  /* 1110cf70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cf73 cmp ecx, dword ptr [0x11130be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11130be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cf79 jge 0x1110d063 */
  if ((C.sf==C.of)) goto L_1110d063;
  /* 1110cf7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cf82 mov eax, dword ptr [0x1112f8a0] */
  EAX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cf87 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cf8b je 0x1110d05e */
  if (C.zf) goto L_1110d05e;
  /* 1110cf91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cf94 mov edx, dword ptr [0x1112f8a0] */
  EDX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cf9a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1110cf9d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1110cfa0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1110cfa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110cfa8 je 0x1110d05e */
  if (C.zf) goto L_1110d05e;
  /* 1110cfae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cfb1 mov eax, dword ptr [0x1112f8a0] */
  EAX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cfb6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1110cfb9 push ecx */
  push32((uint32_t)(ECX));
  /* 1110cfba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cfbd push edx */
  push32((uint32_t)(EDX));
  /* 1110cfbe call 0x1110c390 */
  push32(0x1110cfc3u); f_1110c390();
  /* 1110cfc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cfc6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cfc9 mov ecx, dword ptr [0x1112f8a0] */
  ECX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cfcf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1110cfd2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1110cfd5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1110cfda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110cfdc je 0x1110d045 */
  if (C.zf) goto L_1110d045;
  /* 1110cfde cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cfe2 jne 0x1110d009 */
  if (!C.zf) goto L_1110d009;
  /* 1110cfe4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110cfe7 mov edx, dword ptr [0x1112f8a0] */
  EDX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110cfed mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1110cff0 push eax */
  push32((uint32_t)(EAX));
  /* 1110cff1 call 0x1110ce20 */
  push32(0x1110cff6u); f_1110ce20();
  /* 1110cff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110cff9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110cffc je 0x1110d007 */
  if (C.zf) goto L_1110d007;
  /* 1110cffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d001 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d004 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1110d007:;
  /* 1110d007 jmp 0x1110d045 */
  goto L_1110d045;
L_1110d009:;
  /* 1110d009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d00d jne 0x1110d045 */
  if (!C.zf) goto L_1110d045;
  /* 1110d00f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d012 mov eax, dword ptr [0x1112f8a0] */
  EAX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110d017 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1110d01a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110d01d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1110d020 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110d022 je 0x1110d045 */
  if (C.zf) goto L_1110d045;
  /* 1110d024 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d027 mov ecx, dword ptr [0x1112f8a0] */
  ECX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110d02d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1110d030 push edx */
  push32((uint32_t)(EDX));
  /* 1110d031 call 0x1110ce20 */
  push32(0x1110d036u); f_1110ce20();
  /* 1110d036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d039 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d03c jne 0x1110d045 */
  if (!C.zf) goto L_1110d045;
  /* 1110d03e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1110d045:;
  /* 1110d045 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d048 mov ecx, dword ptr [0x1112f8a0] */
  ECX = (r32((uint32_t)(0x1112f8a0)));
  /* 1110d04e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1110d051 push edx */
  push32((uint32_t)(EDX));
  /* 1110d052 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d055 push eax */
  push32((uint32_t)(EAX));
  /* 1110d056 call 0x1110c400 */
  push32(0x1110d05bu); f_1110c400();
  /* 1110d05b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110d05e:;
  /* 1110d05e jmp 0x1110cf67 */
  goto L_1110cf67;
L_1110d063:;
  /* 1110d063 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d065 call 0x11106fe0 */
  push32(0x1110d06au); f_11106fe0();
  /* 1110d06a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d06d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d071 jne 0x1110d078 */
  if (!C.zf) goto L_1110d078;
  /* 1110d073 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d076 jmp 0x1110d07b */
  goto L_1110d07b;
L_1110d078:;
  /* 1110d078 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1110d07b:;
  /* 1110d07b mov esp, ebp */
  ESP = (EBP);
  /* 1110d07d pop ebp */
  EBP = (pop32());
  /* 1110d07e ret  */
  ESPCHK(0x1110cf40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1110d080 (15 bytes, 7 insns) */
void f_1110d080(void) {
  FTRACE(0x1110d080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d080 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d081 mov ebp, esp */
  EBP = (ESP);
  /* 1110d083 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d085 call 0x111024b0 */
  push32(0x1110d08au); f_111024b0();
  /* 1110d08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d08d pop ebp */
  EBP = (pop32());
  /* 1110d08e ret  */
  ESPCHK(0x1110d080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d090 @ 0x1110d090 (1007 bytes, 269 insns) */
void f_1110d090(void) {
  FTRACE(0x1110d090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d090 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d091 mov ebp, esp */
  EBP = (ESP);
  /* 1110d093 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d099 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d09d jl 0x1110d0a5 */
  if ((C.sf!=C.of)) goto L_1110d0a5;
  /* 1110d09f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d0a3 jle 0x1110d0ac */
  if ((C.zf||C.sf!=C.of)) goto L_1110d0ac;
L_1110d0a5:;
  /* 1110d0a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d0a7 jmp 0x1110d47b */
  goto L_1110d47b;
L_1110d0ac:;
  /* 1110d0ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1110d0ae call 0x11106f40 */
  push32(0x1110d0b3u); f_11106f40();
  /* 1110d0b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d0b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1110d0bd mov eax, dword ptr [0x1112f88c] */
  EAX = (r32((uint32_t)(0x1112f88c)));
  /* 1110d0c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d0c5 mov dword ptr [0x1112f88c], eax */
  w32((uint32_t)(0x1112f88c), (EAX));
L_1110d0ca:;
  /* 1110d0ca cmp dword ptr [0x1112f89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d0d1 je 0x1110d0dd */
  if (C.zf) goto L_1110d0dd;
  /* 1110d0d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110d0d5 call dword ptr [0x111322d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d4))), 0x1110d0dbu);
  /* 1110d0db jmp 0x1110d0ca */
  goto L_1110d0ca;
L_1110d0dd:;
  /* 1110d0dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d0e1 je 0x1110d121 */
  if (C.zf) goto L_1110d121;
  /* 1110d0e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d0e7 je 0x1110d101 */
  if (C.zf) goto L_1110d101;
  /* 1110d0e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d0ec push ecx */
  push32((uint32_t)(ECX));
  /* 1110d0ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d0f0 push edx */
  push32((uint32_t)(EDX));
  /* 1110d0f1 call 0x1110d480 */
  push32(0x1110d0f6u); f_1110d480();
  /* 1110d0f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d0f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1110d0ff jmp 0x1110d113 */
  goto L_1110d113;
L_1110d101:;
  /* 1110d101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d104 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d107 mov ecx, dword ptr [eax + 0x1112e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1112e4dc)));
  /* 1110d10d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1110d113:;
  /* 1110d113 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1110d119 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1110d11c jmp 0x1110d45b */
  goto L_1110d45b;
L_1110d121:;
  /* 1110d121 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1110d128 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1110d12f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d133 je 0x1110d453 */
  if (C.zf) goto L_1110d453;
  /* 1110d139 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d13c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110d13f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d142 jne 0x1110d364 */
  if (!C.zf) goto L_1110d364;
  /* 1110d148 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d14b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1110d14f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d152 jne 0x1110d364 */
  if (!C.zf) goto L_1110d364;
  /* 1110d158 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d15b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1110d15f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d162 jne 0x1110d364 */
  if (!C.zf) goto L_1110d364;
  /* 1110d168 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d16b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1110d171:;
  /* 1110d171 push 0x1112b0ac */
  push32((uint32_t)(0x1112b0acu));
  /* 1110d176 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1110d17c push ecx */
  push32((uint32_t)(ECX));
  /* 1110d17d call 0x1110f2e0 */
  push32(0x1110d182u); f_1110f2e0();
  /* 1110d182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d185 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1110d18b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d192 je 0x1110d1bd */
  if (C.zf) goto L_1110d1bd;
  /* 1110d194 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d19a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d1a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1110d1a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d1ad je 0x1110d1bd */
  if (C.zf) goto L_1110d1bd;
  /* 1110d1af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d1b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110d1b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d1bb jne 0x1110d1e3 */
  if (!C.zf) goto L_1110d1e3;
L_1110d1bd:;
  /* 1110d1bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d1c1 je 0x1110d1dc */
  if (C.zf) goto L_1110d1dc;
  /* 1110d1c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1110d1c5 call 0x11106fe0 */
  push32(0x1110d1cau); f_11106fe0();
  /* 1110d1ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d1cd mov edx, dword ptr [0x1112f88c] */
  EDX = (r32((uint32_t)(0x1112f88c)));
  /* 1110d1d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d1d6 mov dword ptr [0x1112f88c], edx */
  w32((uint32_t)(0x1112f88c), (EDX));
L_1110d1dc:;
  /* 1110d1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d1de jmp 0x1110d47b */
  goto L_1110d47b;
L_1110d1e3:;
  /* 1110d1e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1110d1ea jmp 0x1110d1f5 */
  goto L_1110d1f5;
L_1110d1ec:;
  /* 1110d1ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110d1ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d1f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1110d1f5:;
  /* 1110d1f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d1f9 jg 0x1110d243 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110d243;
  /* 1110d1fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1110d201 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d202 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1110d208 push edx */
  push32((uint32_t)(EDX));
  /* 1110d209 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110d20c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d20f mov ecx, dword ptr [eax + 0x1112e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1112e4d8)));
  /* 1110d215 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d216 call 0x1110f2a0 */
  push32(0x1110d21bu); f_1110f2a0();
  /* 1110d21b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d21e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d220 jne 0x1110d241 */
  if (!C.zf) goto L_1110d241;
  /* 1110d222 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110d225 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d228 mov eax, dword ptr [edx + 0x1112e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1112e4d8)));
  /* 1110d22e push eax */
  push32((uint32_t)(EAX));
  /* 1110d22f call 0x11106370 */
  push32(0x1110d234u); f_11106370();
  /* 1110d234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d237 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d23d jne 0x1110d241 */
  if (!C.zf) goto L_1110d241;
  /* 1110d23f jmp 0x1110d243 */
  goto L_1110d243;
L_1110d241:;
  /* 1110d241 jmp 0x1110d1ec */
  goto L_1110d1ec;
L_1110d243:;
  /* 1110d243 push 0x1112b0a8 */
  push32((uint32_t)(0x1112b0a8u));
  /* 1110d248 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d24e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d251 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1110d257 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d25d push edx */
  push32((uint32_t)(EDX));
  /* 1110d25e call 0x1110f260 */
  push32(0x1110d263u); f_1110f260();
  /* 1110d263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d266 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1110d26c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d273 jne 0x1110d2a9 */
  if (!C.zf) goto L_1110d2a9;
  /* 1110d275 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d27b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110d27e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d281 je 0x1110d2a9 */
  if (C.zf) goto L_1110d2a9;
  /* 1110d283 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d287 je 0x1110d2a2 */
  if (C.zf) goto L_1110d2a2;
  /* 1110d289 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1110d28b call 0x11106fe0 */
  push32(0x1110d290u); f_11106fe0();
  /* 1110d290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d293 mov edx, dword ptr [0x1112f88c] */
  EDX = (r32((uint32_t)(0x1112f88c)));
  /* 1110d299 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d29c mov dword ptr [0x1112f88c], edx */
  w32((uint32_t)(0x1112f88c), (EDX));
L_1110d2a2:;
  /* 1110d2a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d2a4 jmp 0x1110d47b */
  goto L_1110d47b;
L_1110d2a9:;
  /* 1110d2a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d2ad jg 0x1110d2fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1110d2fa;
  /* 1110d2af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1110d2b5 push eax */
  push32((uint32_t)(EAX));
  /* 1110d2b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d2bc push ecx */
  push32((uint32_t)(ECX));
  /* 1110d2bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1110d2c3 push edx */
  push32((uint32_t)(EDX));
  /* 1110d2c4 call 0x11106d60 */
  push32(0x1110d2c9u); f_11106d60();
  /* 1110d2c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d2cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1110d2d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1110d2da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1110d2e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d2e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110d2e4 push edx */
  push32((uint32_t)(EDX));
  /* 1110d2e5 call 0x1110d480 */
  push32(0x1110d2eau); f_1110d480();
  /* 1110d2ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d2ef je 0x1110d2fa */
  if (C.zf) goto L_1110d2fa;
  /* 1110d2f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d2f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d2f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1110d2fa:;
  /* 1110d2fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d300 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d306 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1110d30c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1110d312 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110d315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d317 je 0x1110d328 */
  if (C.zf) goto L_1110d328;
  /* 1110d319 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1110d31f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d322 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1110d328:;
  /* 1110d328 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1110d32e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110d331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d333 jne 0x1110d171 */
  if (!C.zf) goto L_1110d171;
  /* 1110d339 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d33d je 0x1110d34c */
  if (C.zf) goto L_1110d34c;
  /* 1110d33f call 0x1110d620 */
  push32(0x1110d344u); f_1110d620();
  /* 1110d344 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1110d34a jmp 0x1110d356 */
  goto L_1110d356;
L_1110d34c:;
  /* 1110d34c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1110d356:;
  /* 1110d356 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1110d35c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110d35f jmp 0x1110d451 */
  goto L_1110d451;
L_1110d364:;
  /* 1110d364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d367 push edx */
  push32((uint32_t)(EDX));
  /* 1110d368 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110d36a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110d36c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1110d372 push eax */
  push32((uint32_t)(EAX));
  /* 1110d373 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d376 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d377 call 0x1110d720 */
  push32(0x1110d37cu); f_1110d720();
  /* 1110d37c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d37f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110d382 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d386 je 0x1110d451 */
  if (C.zf) goto L_1110d451;
  /* 1110d38c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1110d393 jmp 0x1110d39e */
  goto L_1110d39e;
L_1110d395:;
  /* 1110d395 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110d398 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d39b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1110d39e:;
  /* 1110d39e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d3a2 jg 0x1110d400 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110d400;
  /* 1110d3a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d3a8 je 0x1110d3fe */
  if (C.zf) goto L_1110d3fe;
  /* 1110d3aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110d3ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d3b0 mov ecx, dword ptr [eax + 0x1112e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1112e4dc)));
  /* 1110d3b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d3b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1110d3bd push edx */
  push32((uint32_t)(EDX));
  /* 1110d3be call 0x1110f1d0 */
  push32(0x1110d3c3u); f_1110f1d0();
  /* 1110d3c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d3c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d3c8 je 0x1110d3f5 */
  if (C.zf) goto L_1110d3f5;
  /* 1110d3ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1110d3d0 push eax */
  push32((uint32_t)(EAX));
  /* 1110d3d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110d3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d3d5 call 0x1110d480 */
  push32(0x1110d3dau); f_1110d480();
  /* 1110d3da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d3dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d3df je 0x1110d3ec */
  if (C.zf) goto L_1110d3ec;
  /* 1110d3e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d3e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d3e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1110d3ea jmp 0x1110d3f3 */
  goto L_1110d3f3;
L_1110d3ec:;
  /* 1110d3ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1110d3f3:;
  /* 1110d3f3 jmp 0x1110d3fe */
  goto L_1110d3fe;
L_1110d3f5:;
  /* 1110d3f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d3f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d3fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1110d3fe:;
  /* 1110d3fe jmp 0x1110d395 */
  goto L_1110d395;
L_1110d400:;
  /* 1110d400 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d404 je 0x1110d42b */
  if (C.zf) goto L_1110d42b;
  /* 1110d406 call 0x1110d620 */
  push32(0x1110d40bu); f_1110d620();
  /* 1110d40b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110d40e push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d410 mov ecx, dword ptr [0x1112e4dc] */
  ECX = (r32((uint32_t)(0x1112e4dc)));
  /* 1110d416 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d417 call 0x11103fd0 */
  push32(0x1110d41cu); f_11103fd0();
  /* 1110d41c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d41f mov dword ptr [0x1112e4dc], 0 */
  w32((uint32_t)(0x1112e4dc), (0x0u));
  /* 1110d429 jmp 0x1110d451 */
  goto L_1110d451;
L_1110d42b:;
  /* 1110d42b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d42f je 0x1110d43e */
  if (C.zf) goto L_1110d43e;
  /* 1110d431 call 0x1110d620 */
  push32(0x1110d436u); f_1110d620();
  /* 1110d436 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1110d43c jmp 0x1110d448 */
  goto L_1110d448;
L_1110d43e:;
  /* 1110d43e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1110d448:;
  /* 1110d448 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1110d44e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1110d451:;
  /* 1110d451 jmp 0x1110d45b */
  goto L_1110d45b;
L_1110d453:;
  /* 1110d453 call 0x1110d620 */
  push32(0x1110d458u); f_1110d620();
  /* 1110d458 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1110d45b:;
  /* 1110d45b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d45f je 0x1110d478 */
  if (C.zf) goto L_1110d478;
  /* 1110d461 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1110d463 call 0x11106fe0 */
  push32(0x1110d468u); f_11106fe0();
  /* 1110d468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d46b mov eax, dword ptr [0x1112f88c] */
  EAX = (r32((uint32_t)(0x1112f88c)));
  /* 1110d470 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d473 mov dword ptr [0x1112f88c], eax */
  w32((uint32_t)(0x1112f88c), (EAX));
L_1110d478:;
  /* 1110d478 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1110d47b:;
  /* 1110d47b mov esp, ebp */
  ESP = (EBP);
  /* 1110d47d pop ebp */
  EBP = (pop32());
  /* 1110d47e ret  */
  ESPCHK(0x1110d090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x1110d480 (403 bytes, 117 insns) */
void f_1110d480(void) {
  FTRACE(0x1110d480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d480 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d481 mov ebp, esp */
  EBP = (ESP);
  /* 1110d483 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d48c push eax */
  push32((uint32_t)(EAX));
  /* 1110d48d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1110d493 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d494 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1110d49a push edx */
  push32((uint32_t)(EDX));
  /* 1110d49b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1110d4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1110d4a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d4a6 call 0x1110d720 */
  push32(0x1110d4abu); f_1110d720();
  /* 1110d4ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d4ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d4b0 jne 0x1110d4b9 */
  if (!C.zf) goto L_1110d4b9;
  /* 1110d4b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d4b4 jmp 0x1110d60f */
  goto L_1110d60f;
L_1110d4b9:;
  /* 1110d4b9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1110d4be push 0x1112b0b0 */
  push32((uint32_t)(0x1112b0b0u));
  /* 1110d4c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d4c5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1110d4cb push edx */
  push32((uint32_t)(EDX));
  /* 1110d4cc call 0x11106370 */
  push32(0x1110d4d1u); f_11106370();
  /* 1110d4d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d4d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d4d7 push eax */
  push32((uint32_t)(EAX));
  /* 1110d4d8 call 0x11103540 */
  push32(0x1110d4ddu); f_11103540();
  /* 1110d4dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d4e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110d4e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d4e7 jne 0x1110d4f0 */
  if (!C.zf) goto L_1110d4f0;
  /* 1110d4e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d4eb jmp 0x1110d60f */
  goto L_1110d60f;
L_1110d4f0:;
  /* 1110d4f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d4f3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d4f6 mov ecx, dword ptr [eax + 0x1112e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1112e4dc)));
  /* 1110d4fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110d4ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d502 mov eax, dword ptr [edx*4 + 0x1112f708] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1112f708)));
  /* 1110d509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110d50c push 6 */
  push32((uint32_t)(0x6u));
  /* 1110d50e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d511 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d514 add ecx, 0x1112f758 */
  { uint32_t _a=(ECX),_b=(0x1112f758u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d51a push ecx */
  push32((uint32_t)(ECX));
  /* 1110d51b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1110d51e push edx */
  push32((uint32_t)(EDX));
  /* 1110d51f call 0x11109e20 */
  push32(0x1110d524u); f_11109e20();
  /* 1110d524 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d527 mov eax, dword ptr [0x1112f720] */
  EAX = (r32((uint32_t)(0x1112f720)));
  /* 1110d52c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1110d52f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1110d535 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d536 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110d539 push edx */
  push32((uint32_t)(EDX));
  /* 1110d53a call 0x111064f0 */
  push32(0x1110d53fu); f_111064f0();
  /* 1110d53f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d545 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d548 mov dword ptr [ecx + 0x1112e4dc], eax */
  w32((uint32_t)(ECX + 0x1112e4dc), (EAX));
  /* 1110d54e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1110d554 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1110d55a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d55d mov dword ptr [eax*4 + 0x1112f708], edx */
  w32((uint32_t)(EAX*4 + 0x1112f708), (EDX));
  /* 1110d564 push 6 */
  push32((uint32_t)(0x6u));
  /* 1110d566 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1110d56c push ecx */
  push32((uint32_t)(ECX));
  /* 1110d56d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d570 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d573 add edx, 0x1112f758 */
  { uint32_t _a=(EDX),_b=(0x1112f758u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d579 push edx */
  push32((uint32_t)(EDX));
  /* 1110d57a call 0x11109e20 */
  push32(0x1110d57fu); f_11109e20();
  /* 1110d57f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d582 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d586 jne 0x1110d593 */
  if (!C.zf) goto L_1110d593;
  /* 1110d588 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d58e mov dword ptr [0x1112f720], eax */
  w32((uint32_t)(0x1112f720), (EAX));
L_1110d593:;
  /* 1110d593 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d597 jne 0x1110d5a5 */
  if (!C.zf) goto L_1110d5a5;
  /* 1110d599 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1110d59f mov dword ptr [0x1112f724], ecx */
  w32((uint32_t)(0x1112f724), (ECX));
L_1110d5a5:;
  /* 1110d5a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d5a8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d5ab call dword ptr [edx + 0x1112e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1112e4e0))), 0x1110d5b1u);
  /* 1110d5b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d5b3 je 0x1110d5ec */
  if (C.zf) goto L_1110d5ec;
  /* 1110d5b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d5b8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d5bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d5be mov dword ptr [eax + 0x1112e4dc], ecx */
  w32((uint32_t)(EAX + 0x1112e4dc), (ECX));
  /* 1110d5c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d5c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110d5c9 push edx */
  push32((uint32_t)(EDX));
  /* 1110d5ca call 0x11103fd0 */
  push32(0x1110d5cfu); f_11103fd0();
  /* 1110d5cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d5d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d5d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d5d8 mov dword ptr [eax*4 + 0x1112f708], ecx */
  w32((uint32_t)(EAX*4 + 0x1112f708), (ECX));
  /* 1110d5df mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110d5e2 mov dword ptr [0x1112f720], edx */
  w32((uint32_t)(0x1112f720), (EDX));
  /* 1110d5e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d5ea jmp 0x1110d60f */
  goto L_1110d60f;
L_1110d5ec:;
  /* 1110d5ec cmp dword ptr [ebp - 0xc], 0x1112e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1112e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d5f3 je 0x1110d603 */
  if (C.zf) goto L_1110d603;
  /* 1110d5f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d5f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d5fa push eax */
  push32((uint32_t)(EAX));
  /* 1110d5fb call 0x11103fd0 */
  push32(0x1110d600u); f_11103fd0();
  /* 1110d600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110d603:;
  /* 1110d603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d606 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d609 mov eax, dword ptr [ecx + 0x1112e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1112e4dc)));
L_1110d60f:;
  /* 1110d60f mov esp, ebp */
  ESP = (EBP);
  /* 1110d611 pop ebp */
  EBP = (pop32());
  /* 1110d612 ret  */
  ESPCHK(0x1110d480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d620 @ 0x1110d620 (256 bytes, 72 insns) */
void f_1110d620(void) {
  FTRACE(0x1110d620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d620 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d621 mov ebp, esp */
  EBP = (ESP);
  /* 1110d623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d626 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1110d62d cmp dword ptr [0x1112e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d634 jne 0x1110d654 */
  if (!C.zf) goto L_1110d654;
  /* 1110d636 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1110d63b push 0x1112b0b0 */
  push32((uint32_t)(0x1112b0b0u));
  /* 1110d640 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d642 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1110d647 call 0x11103540 */
  push32(0x1110d64cu); f_11103540();
  /* 1110d64c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d64f mov dword ptr [0x1112e4dc], eax */
  w32((uint32_t)(0x1112e4dc), (EAX));
L_1110d654:;
  /* 1110d654 mov eax, dword ptr [0x1112e4dc] */
  EAX = (r32((uint32_t)(0x1112e4dc)));
  /* 1110d659 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1110d65c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1110d663 jmp 0x1110d66e */
  goto L_1110d66e;
L_1110d665:;
  /* 1110d665 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d668 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d66b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1110d66e:;
  /* 1110d66e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d671 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d674 mov eax, dword ptr [edx + 0x1112e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1112e4dc)));
  /* 1110d67a push eax */
  push32((uint32_t)(EAX));
  /* 1110d67b push 0x1112b0bc */
  push32((uint32_t)(0x1112b0bcu));
  /* 1110d680 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d683 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d686 mov edx, dword ptr [ecx + 0x1112e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1112e4d8)));
  /* 1110d68c push edx */
  push32((uint32_t)(EDX));
  /* 1110d68d push 3 */
  push32((uint32_t)(0x3u));
  /* 1110d68f mov eax, dword ptr [0x1112e4dc] */
  EAX = (r32((uint32_t)(0x1112e4dc)));
  /* 1110d694 push eax */
  push32((uint32_t)(EAX));
  /* 1110d695 call 0x1110d8c0 */
  push32(0x1110d69au); f_1110d8c0();
  /* 1110d69a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d69d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d6a1 jge 0x1110d6e9 */
  if ((C.sf==C.of)) goto L_1110d6e9;
  /* 1110d6a3 push 0x1112b0a8 */
  push32((uint32_t)(0x1112b0a8u));
  /* 1110d6a8 mov ecx, dword ptr [0x1112e4dc] */
  ECX = (r32((uint32_t)(0x1112e4dc)));
  /* 1110d6ae push ecx */
  push32((uint32_t)(ECX));
  /* 1110d6af call 0x11106500 */
  push32(0x1110d6b4u); f_11106500();
  /* 1110d6b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d6b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d6ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d6bd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d6c0 mov eax, dword ptr [edx + 0x1112e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1112e4dc)));
  /* 1110d6c6 push eax */
  push32((uint32_t)(EAX));
  /* 1110d6c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d6ca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110d6cd mov edx, dword ptr [ecx + 0x1112e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1112e4dc)));
  /* 1110d6d3 push edx */
  push32((uint32_t)(EDX));
  /* 1110d6d4 call 0x1110f1d0 */
  push32(0x1110d6d9u); f_1110f1d0();
  /* 1110d6d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d6dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d6de je 0x1110d6e7 */
  if (C.zf) goto L_1110d6e7;
  /* 1110d6e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1110d6e7:;
  /* 1110d6e7 jmp 0x1110d717 */
  goto L_1110d717;
L_1110d6e9:;
  /* 1110d6e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d6ed jne 0x1110d6f6 */
  if (!C.zf) goto L_1110d6f6;
  /* 1110d6ef mov eax, dword ptr [0x1112e4dc] */
  EAX = (r32((uint32_t)(0x1112e4dc)));
  /* 1110d6f4 jmp 0x1110d71c */
  goto L_1110d71c;
L_1110d6f6:;
  /* 1110d6f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110d6f8 mov eax, dword ptr [0x1112e4dc] */
  EAX = (r32((uint32_t)(0x1112e4dc)));
  /* 1110d6fd push eax */
  push32((uint32_t)(EAX));
  /* 1110d6fe call 0x11103fd0 */
  push32(0x1110d703u); f_11103fd0();
  /* 1110d703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d706 mov dword ptr [0x1112e4dc], 0 */
  w32((uint32_t)(0x1112e4dc), (0x0u));
  /* 1110d710 mov eax, dword ptr [0x1112e4f4] */
  EAX = (r32((uint32_t)(0x1112e4f4)));
  /* 1110d715 jmp 0x1110d71c */
  goto L_1110d71c;
L_1110d717:;
  /* 1110d717 jmp 0x1110d665 */
  goto L_1110d665;
L_1110d71c:;
  /* 1110d71c mov esp, ebp */
  ESP = (EBP);
  /* 1110d71e pop ebp */
  EBP = (pop32());
  /* 1110d71f ret  */
  ESPCHK(0x1110d620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x1110d720 (388 bytes, 115 insns) */
void f_1110d720(void) {
  FTRACE(0x1110d720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d720 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d721 mov ebp, esp */
  EBP = (ESP);
  /* 1110d723 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d729 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d72d jne 0x1110d736 */
  if (!C.zf) goto L_1110d736;
  /* 1110d72f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d731 jmp 0x1110d8a0 */
  goto L_1110d8a0;
L_1110d736:;
  /* 1110d736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d739 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110d73c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d73f jne 0x1110d790 */
  if (!C.zf) goto L_1110d790;
  /* 1110d741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d744 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1110d748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d74a jne 0x1110d790 */
  if (!C.zf) goto L_1110d790;
  /* 1110d74c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d74f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1110d752 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d755 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1110d759 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d75d je 0x1110d779 */
  if (C.zf) goto L_1110d779;
  /* 1110d75f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110d762 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1110d767 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110d76a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1110d770 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110d773 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1110d779:;
  /* 1110d779 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d77d je 0x1110d788 */
  if (C.zf) goto L_1110d788;
  /* 1110d77f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110d782 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1110d788:;
  /* 1110d788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d78b jmp 0x1110d8a0 */
  goto L_1110d8a0;
L_1110d790:;
  /* 1110d790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d793 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d794 push 0x1112e450 */
  push32((uint32_t)(0x1112e450u));
  /* 1110d799 call 0x1110f1d0 */
  push32(0x1110d79eu); f_1110f1d0();
  /* 1110d79e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d7a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d7a3 je 0x1110d858 */
  if (C.zf) goto L_1110d858;
  /* 1110d7a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d7ac push edx */
  push32((uint32_t)(EDX));
  /* 1110d7ad push 0x1112e3cc */
  push32((uint32_t)(0x1112e3ccu));
  /* 1110d7b2 call 0x1110f1d0 */
  push32(0x1110d7b7u); f_1110f1d0();
  /* 1110d7b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d7bc je 0x1110d858 */
  if (C.zf) goto L_1110d858;
  /* 1110d7c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d7c5 push eax */
  push32((uint32_t)(EAX));
  /* 1110d7c6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1110d7cc push ecx */
  push32((uint32_t)(ECX));
  /* 1110d7cd call 0x1110d910 */
  push32(0x1110d7d2u); f_1110d910();
  /* 1110d7d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d7d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d7d7 je 0x1110d7e0 */
  if (C.zf) goto L_1110d7e0;
  /* 1110d7d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d7db jmp 0x1110d8a0 */
  goto L_1110d8a0;
L_1110d7e0:;
  /* 1110d7e0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1110d7e6 push edx */
  push32((uint32_t)(EDX));
  /* 1110d7e7 push 0x1112f730 */
  push32((uint32_t)(0x1112f730u));
  /* 1110d7ec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1110d7f2 push eax */
  push32((uint32_t)(EAX));
  /* 1110d7f3 call 0x1110f320 */
  push32(0x1110d7f8u); f_1110f320();
  /* 1110d7f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d7fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d7fd jne 0x1110d806 */
  if (!C.zf) goto L_1110d806;
  /* 1110d7ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d801 jmp 0x1110d8a0 */
  goto L_1110d8a0;
L_1110d806:;
  /* 1110d806 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110d808 mov cx, word ptr [0x1112f734] */
  CX = (r16((uint32_t)(0x1112f734)));
  /* 1110d80f mov dword ptr [0x1112f738], ecx */
  w32((uint32_t)(0x1112f738), (ECX));
  /* 1110d815 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1110d81b push edx */
  push32((uint32_t)(EDX));
  /* 1110d81c push 0x1112e450 */
  push32((uint32_t)(0x1112e450u));
  /* 1110d821 call 0x1110da70 */
  push32(0x1110d826u); f_1110da70();
  /* 1110d826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d82c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110d82f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110d831 je 0x1110d846 */
  if (C.zf) goto L_1110d846;
  /* 1110d833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d836 push edx */
  push32((uint32_t)(EDX));
  /* 1110d837 push 0x1112e3cc */
  push32((uint32_t)(0x1112e3ccu));
  /* 1110d83c call 0x111064f0 */
  push32(0x1110d841u); f_111064f0();
  /* 1110d841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d844 jmp 0x1110d858 */
  goto L_1110d858;
L_1110d846:;
  /* 1110d846 push 0x1112e450 */
  push32((uint32_t)(0x1112e450u));
  /* 1110d84b push 0x1112e3cc */
  push32((uint32_t)(0x1112e3ccu));
  /* 1110d850 call 0x111064f0 */
  push32(0x1110d855u); f_111064f0();
  /* 1110d855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110d858:;
  /* 1110d858 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d85c je 0x1110d871 */
  if (C.zf) goto L_1110d871;
  /* 1110d85e push 6 */
  push32((uint32_t)(0x6u));
  /* 1110d860 push 0x1112f730 */
  push32((uint32_t)(0x1112f730u));
  /* 1110d865 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110d868 push eax */
  push32((uint32_t)(EAX));
  /* 1110d869 call 0x11109e20 */
  push32(0x1110d86eu); f_11109e20();
  /* 1110d86e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110d871:;
  /* 1110d871 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d875 je 0x1110d88a */
  if (C.zf) goto L_1110d88a;
  /* 1110d877 push 4 */
  push32((uint32_t)(0x4u));
  /* 1110d879 push 0x1112f738 */
  push32((uint32_t)(0x1112f738u));
  /* 1110d87e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110d881 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d882 call 0x11109e20 */
  push32(0x1110d887u); f_11109e20();
  /* 1110d887 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110d88a:;
  /* 1110d88a push 0x1112e450 */
  push32((uint32_t)(0x1112e450u));
  /* 1110d88f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d892 push edx */
  push32((uint32_t)(EDX));
  /* 1110d893 call 0x111064f0 */
  push32(0x1110d898u); f_111064f0();
  /* 1110d898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d89b mov eax, 0x1112e450 */
  EAX = (0x1112e450u);
L_1110d8a0:;
  /* 1110d8a0 mov esp, ebp */
  ESP = (EBP);
  /* 1110d8a2 pop ebp */
  EBP = (pop32());
  /* 1110d8a3 ret  */
  ESPCHK(0x1110d720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x1110d8b0 (7 bytes, 5 insns) */
void f_1110d8b0(void) {
  FTRACE(0x1110d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1110d8b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d8b5 pop ebp */
  EBP = (pop32());
  /* 1110d8b6 ret  */
  ESPCHK(0x1110d8b0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1110d8c0 (79 bytes, 28 insns) */
void f_1110d8c0(void) {
  FTRACE(0x1110d8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1110d8c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d8c6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1110d8c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110d8cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110d8d3 jmp 0x1110d8de */
  goto L_1110d8de;
L_1110d8d5:;
  /* 1110d8d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110d8d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d8db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1110d8de:;
  /* 1110d8de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110d8e1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d8e4 jge 0x1110d904 */
  if ((C.sf==C.of)) goto L_1110d904;
  /* 1110d8e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d8e9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d8ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110d8ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d8f2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1110d8f5 push edx */
  push32((uint32_t)(EDX));
  /* 1110d8f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d8f9 push eax */
  push32((uint32_t)(EAX));
  /* 1110d8fa call 0x11106500 */
  push32(0x1110d8ffu); f_11106500();
  /* 1110d8ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d902 jmp 0x1110d8d5 */
  goto L_1110d8d5;
L_1110d904:;
  /* 1110d904 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110d90b mov esp, ebp */
  ESP = (EBP);
  /* 1110d90d pop ebp */
  EBP = (pop32());
  /* 1110d90e ret  */
  ESPCHK(0x1110d8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x1110d910 (349 bytes, 122 insns) */
void f_1110d910(void) {
  FTRACE(0x1110d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110d910 push ebp */
  push32((uint32_t)(EBP));
  /* 1110d911 mov ebp, esp */
  EBP = (ESP);
  /* 1110d913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110d916 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1110d91b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110d91d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d920 push eax */
  push32((uint32_t)(EAX));
  /* 1110d921 call 0x111072b0 */
  push32(0x1110d926u); f_111072b0();
  /* 1110d926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d929 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d92c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110d92f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110d931 jne 0x1110d93a */
  if (!C.zf) goto L_1110d93a;
  /* 1110d933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d935 jmp 0x1110da69 */
  goto L_1110da69;
L_1110d93a:;
  /* 1110d93a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d93d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110d940 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d943 jne 0x1110d970 */
  if (!C.zf) goto L_1110d970;
  /* 1110d945 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d948 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1110d94c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110d94e je 0x1110d970 */
  if (C.zf) goto L_1110d970;
  /* 1110d950 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d953 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d956 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d95a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d960 push edx */
  push32((uint32_t)(EDX));
  /* 1110d961 call 0x111064f0 */
  push32(0x1110d966u); f_111064f0();
  /* 1110d966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110d96b jmp 0x1110da69 */
  goto L_1110da69;
L_1110d970:;
  /* 1110d970 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110d977 jmp 0x1110d982 */
  goto L_1110d982;
L_1110d979:;
  /* 1110d979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110d97c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d97f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110d982:;
  /* 1110d982 push 0x1112b0c0 */
  push32((uint32_t)(0x1112b0c0u));
  /* 1110d987 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d98a push ecx */
  push32((uint32_t)(ECX));
  /* 1110d98b call 0x1110f260 */
  push32(0x1110d990u); f_1110f260();
  /* 1110d990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d993 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1110d996 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d99a jne 0x1110d9a4 */
  if (!C.zf) goto L_1110d9a4;
  /* 1110d99c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110d99f jmp 0x1110da69 */
  goto L_1110da69;
L_1110d9a4:;
  /* 1110d9a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d9a7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d9aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110d9ac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1110d9af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d9b3 jne 0x1110d9da */
  if (!C.zf) goto L_1110d9da;
  /* 1110d9b5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d9b9 jge 0x1110d9da */
  if ((C.sf==C.of)) goto L_1110d9da;
  /* 1110d9bb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110d9bf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d9c2 je 0x1110d9da */
  if (C.zf) goto L_1110d9da;
  /* 1110d9c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d9c7 push edx */
  push32((uint32_t)(EDX));
  /* 1110d9c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d9cb push eax */
  push32((uint32_t)(EAX));
  /* 1110d9cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d9cf push ecx */
  push32((uint32_t)(ECX));
  /* 1110d9d0 call 0x11106d60 */
  push32(0x1110d9d5u); f_11106d60();
  /* 1110d9d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d9d8 jmp 0x1110da40 */
  goto L_1110da40;
L_1110d9da:;
  /* 1110d9da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d9de jne 0x1110da08 */
  if (!C.zf) goto L_1110da08;
  /* 1110d9e0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d9e4 jge 0x1110da08 */
  if ((C.sf==C.of)) goto L_1110da08;
  /* 1110d9e6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110d9ea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110d9ed je 0x1110da08 */
  if (C.zf) goto L_1110da08;
  /* 1110d9ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110d9f2 push eax */
  push32((uint32_t)(EAX));
  /* 1110d9f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110d9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1110d9f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110d9fa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110d9fd push edx */
  push32((uint32_t)(EDX));
  /* 1110d9fe call 0x11106d60 */
  push32(0x1110da03u); f_11106d60();
  /* 1110da03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110da06 jmp 0x1110da40 */
  goto L_1110da40;
L_1110da08:;
  /* 1110da08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110da0c jne 0x1110da3b */
  if (!C.zf) goto L_1110da3b;
  /* 1110da0e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110da12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110da14 je 0x1110da1f */
  if (C.zf) goto L_1110da1f;
  /* 1110da16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110da1a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110da1d jne 0x1110da3b */
  if (!C.zf) goto L_1110da3b;
L_1110da1f:;
  /* 1110da1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110da22 push edx */
  push32((uint32_t)(EDX));
  /* 1110da23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110da26 push eax */
  push32((uint32_t)(EAX));
  /* 1110da27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110da2a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110da30 push ecx */
  push32((uint32_t)(ECX));
  /* 1110da31 call 0x11106d60 */
  push32(0x1110da36u); f_11106d60();
  /* 1110da36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110da39 jmp 0x1110da40 */
  goto L_1110da40;
L_1110da3b:;
  /* 1110da3b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110da3e jmp 0x1110da69 */
  goto L_1110da69;
L_1110da40:;
  /* 1110da40 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110da44 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110da47 jne 0x1110da4b */
  if (!C.zf) goto L_1110da4b;
  /* 1110da49 jmp 0x1110da67 */
  goto L_1110da67;
L_1110da4b:;
  /* 1110da4b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110da4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110da51 jne 0x1110da55 */
  if (!C.zf) goto L_1110da55;
  /* 1110da53 jmp 0x1110da67 */
  goto L_1110da67;
L_1110da55:;
  /* 1110da55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110da58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110da5b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1110da5f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1110da62 jmp 0x1110d979 */
  goto L_1110d979;
L_1110da67:;
  /* 1110da67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110da69:;
  /* 1110da69 mov esp, ebp */
  ESP = (EBP);
  /* 1110da6b pop ebp */
  EBP = (pop32());
  /* 1110da6c ret  */
  ESPCHK(0x1110d910u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1110da70 (101 bytes, 36 insns) */
void f_1110da70(void) {
  FTRACE(0x1110da70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110da70 push ebp */
  push32((uint32_t)(EBP));
  /* 1110da71 mov ebp, esp */
  EBP = (ESP);
  /* 1110da73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110da76 push eax */
  push32((uint32_t)(EAX));
  /* 1110da77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110da7a push ecx */
  push32((uint32_t)(ECX));
  /* 1110da7b call 0x111064f0 */
  push32(0x1110da80u); f_111064f0();
  /* 1110da80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110da83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110da86 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1110da8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110da8c je 0x1110daa8 */
  if (C.zf) goto L_1110daa8;
  /* 1110da8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110da91 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110da94 push ecx */
  push32((uint32_t)(ECX));
  /* 1110da95 push 0x1112b0c8 */
  push32((uint32_t)(0x1112b0c8u));
  /* 1110da9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1110da9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110da9f push edx */
  push32((uint32_t)(EDX));
  /* 1110daa0 call 0x1110d8c0 */
  push32(0x1110daa5u); f_1110d8c0();
  /* 1110daa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110daa8:;
  /* 1110daa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110daab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1110dab2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110dab4 je 0x1110dad3 */
  if (C.zf) goto L_1110dad3;
  /* 1110dab6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110dab9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dabf push edx */
  push32((uint32_t)(EDX));
  /* 1110dac0 push 0x1112b0c4 */
  push32((uint32_t)(0x1112b0c4u));
  /* 1110dac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110dac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110daca push eax */
  push32((uint32_t)(EAX));
  /* 1110dacb call 0x1110d8c0 */
  push32(0x1110dad0u); f_1110d8c0();
  /* 1110dad0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110dad3:;
  /* 1110dad3 pop ebp */
  EBP = (pop32());
  /* 1110dad4 ret  */
  ESPCHK(0x1110da70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x1110dae0 (130 bytes, 50 insns) */
void f_1110dae0(void) {
  FTRACE(0x1110dae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110dae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110dae1 mov ebp, esp */
  EBP = (ESP);
  /* 1110dae3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110dae4 push ebx */
  push32((uint32_t)(EBX));
  /* 1110dae5 push esi */
  push32((uint32_t)(ESI));
  /* 1110dae6 push edi */
  push32((uint32_t)(EDI));
  /* 1110dae7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1110daee:;
  /* 1110daee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110daf2 jne 0x1110db12 */
  if (!C.zf) goto L_1110db12;
  /* 1110daf4 push 0x1112b0d8 */
  push32((uint32_t)(0x1112b0d8u));
  /* 1110daf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110dafb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1110dafd push 0x1112b0cc */
  push32((uint32_t)(0x1112b0ccu));
  /* 1110db02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110db04 call 0x11102600 */
  push32(0x1110db09u); f_11102600();
  /* 1110db09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110db0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110db0f jne 0x1110db12 */
  if (!C.zf) goto L_1110db12;
  /* 1110db11 int3  */
  x86_unimpl("int3 @ 0x1110db11");
L_1110db12:;
  /* 1110db12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110db14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110db16 jne 0x1110daee */
  if (!C.zf) goto L_1110daee;
  /* 1110db18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110db1b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110db1e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1110db21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110db23 je 0x1110db31 */
  if (C.zf) goto L_1110db31;
  /* 1110db25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110db28 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1110db2f jmp 0x1110db58 */
  goto L_1110db58;
L_1110db31:;
  /* 1110db31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110db34 push ecx */
  push32((uint32_t)(ECX));
  /* 1110db35 call 0x1110c350 */
  push32(0x1110db3au); f_1110c350();
  /* 1110db3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110db3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110db40 push edx */
  push32((uint32_t)(EDX));
  /* 1110db41 call 0x1110db70 */
  push32(0x1110db46u); f_1110db70();
  /* 1110db46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110db49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110db4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110db4f push eax */
  push32((uint32_t)(EAX));
  /* 1110db50 call 0x1110c3c0 */
  push32(0x1110db55u); f_1110c3c0();
  /* 1110db55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110db58:;
  /* 1110db58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110db5b pop edi */
  EDI = (pop32());
  /* 1110db5c pop esi */
  ESI = (pop32());
  /* 1110db5d pop ebx */
  EBX = (pop32());
  /* 1110db5e mov esp, ebp */
  ESP = (EBP);
  /* 1110db60 pop ebp */
  EBP = (pop32());
  /* 1110db61 ret  */
  ESPCHK(0x1110dae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db70 @ 0x1110db70 (190 bytes, 67 insns) */
void f_1110db70(void) {
  FTRACE(0x1110db70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110db70 push ebp */
  push32((uint32_t)(EBP));
  /* 1110db71 mov ebp, esp */
  EBP = (ESP);
  /* 1110db73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110db76 push ebx */
  push32((uint32_t)(EBX));
  /* 1110db77 push esi */
  push32((uint32_t)(ESI));
  /* 1110db78 push edi */
  push32((uint32_t)(EDI));
  /* 1110db79 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1110db80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110db83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1110db86:;
  /* 1110db86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110db8a jne 0x1110dbaa */
  if (!C.zf) goto L_1110dbaa;
  /* 1110db8c push 0x1112af78 */
  push32((uint32_t)(0x1112af78u));
  /* 1110db91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110db93 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1110db95 push 0x1112b0cc */
  push32((uint32_t)(0x1112b0ccu));
  /* 1110db9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1110db9c call 0x11102600 */
  push32(0x1110dba1u); f_11102600();
  /* 1110dba1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dba4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110dba7 jne 0x1110dbaa */
  if (!C.zf) goto L_1110dbaa;
  /* 1110dba9 int3  */
  x86_unimpl("int3 @ 0x1110dba9");
L_1110dbaa:;
  /* 1110dbaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110dbac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110dbae jne 0x1110db86 */
  if (!C.zf) goto L_1110db86;
  /* 1110dbb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dbb3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1110dbb6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1110dbbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110dbbd je 0x1110dc1a */
  if (C.zf) goto L_1110dc1a;
  /* 1110dbbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dbc2 push ecx */
  push32((uint32_t)(ECX));
  /* 1110dbc3 call 0x1110ce70 */
  push32(0x1110dbc8u); f_1110ce70();
  /* 1110dbc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dbcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110dbce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dbd1 push edx */
  push32((uint32_t)(EDX));
  /* 1110dbd2 call 0x111101f0 */
  push32(0x1110dbd7u); f_111101f0();
  /* 1110dbd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dbda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dbdd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1110dbe0 push ecx */
  push32((uint32_t)(ECX));
  /* 1110dbe1 call 0x111100c0 */
  push32(0x1110dbe6u); f_111100c0();
  /* 1110dbe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dbe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110dbeb jge 0x1110dbf6 */
  if ((C.sf==C.of)) goto L_1110dbf6;
  /* 1110dbed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1110dbf4 jmp 0x1110dc1a */
  goto L_1110dc1a;
L_1110dbf6:;
  /* 1110dbf6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dbf9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110dbfd je 0x1110dc1a */
  if (C.zf) goto L_1110dc1a;
  /* 1110dbff push 2 */
  push32((uint32_t)(0x2u));
  /* 1110dc01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dc04 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1110dc07 push ecx */
  push32((uint32_t)(ECX));
  /* 1110dc08 call 0x11103fd0 */
  push32(0x1110dc0du); f_11103fd0();
  /* 1110dc0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dc10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dc13 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1110dc1a:;
  /* 1110dc1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110dc1d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1110dc24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dc27 pop edi */
  EDI = (pop32());
  /* 1110dc28 pop esi */
  ESI = (pop32());
  /* 1110dc29 pop ebx */
  EBX = (pop32());
  /* 1110dc2a mov esp, ebp */
  ESP = (EBP);
  /* 1110dc2c pop ebp */
  EBP = (pop32());
  /* 1110dc2d ret  */
  ESPCHK(0x1110db70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc30 @ 0x1110dc30 (210 bytes, 63 insns) */
void f_1110dc30(void) {
  FTRACE(0x1110dc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110dc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1110dc31 mov ebp, esp */
  EBP = (ESP);
  /* 1110dc33 push ecx */
  push32((uint32_t)(ECX));
  /* 1110dc34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dc37 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110dc3d jae 0x1110dc61 */
  if (!C.cf) goto L_1110dc61;
  /* 1110dc3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dc42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1110dc45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dc48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1110dc4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110dc4e mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 1110dc55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1110dc5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110dc5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110dc5f jne 0x1110dc74 */
  if (!C.zf) goto L_1110dc74;
L_1110dc61:;
  /* 1110dc61 call 0x1110b410 */
  push32(0x1110dc66u); f_1110b410();
  /* 1110dc66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110dc6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110dc6f jmp 0x1110dcfe */
  goto L_1110dcfe;
L_1110dc74:;
  /* 1110dc74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dc77 push edx */
  push32((uint32_t)(EDX));
  /* 1110dc78 call 0x1110cc30 */
  push32(0x1110dc7du); f_1110cc30();
  /* 1110dc7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dc80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dc83 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1110dc86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dc89 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110dc8c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110dc8f mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 1110dc96 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1110dc9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1110dc9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110dca0 je 0x1110dcdd */
  if (C.zf) goto L_1110dcdd;
  /* 1110dca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dca5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110dca6 call 0x1110cab0 */
  push32(0x1110dcabu); f_1110cab0();
  /* 1110dcab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dcae push eax */
  push32((uint32_t)(EAX));
  /* 1110dcaf call dword ptr [0x111322d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322d0))), 0x1110dcb5u);
  /* 1110dcb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110dcb7 jne 0x1110dcc4 */
  if (!C.zf) goto L_1110dcc4;
  /* 1110dcb9 call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x1110dcbfu);
  /* 1110dcbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110dcc2 jmp 0x1110dccb */
  goto L_1110dccb;
L_1110dcc4:;
  /* 1110dcc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1110dccb:;
  /* 1110dccb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110dccf jne 0x1110dcd3 */
  if (!C.zf) goto L_1110dcd3;
  /* 1110dcd1 jmp 0x1110dcef */
  goto L_1110dcef;
L_1110dcd3:;
  /* 1110dcd3 call 0x1110b420 */
  push32(0x1110dcd8u); f_1110b420();
  /* 1110dcd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dcdb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1110dcdd:;
  /* 1110dcdd call 0x1110b410 */
  push32(0x1110dce2u); f_1110b410();
  /* 1110dce2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1110dce8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1110dcef:;
  /* 1110dcef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dcf2 push eax */
  push32((uint32_t)(EAX));
  /* 1110dcf3 call 0x1110ccc0 */
  push32(0x1110dcf8u); f_1110ccc0();
  /* 1110dcf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dcfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1110dcfe:;
  /* 1110dcfe mov esp, ebp */
  ESP = (EBP);
  /* 1110dd00 pop ebp */
  EBP = (pop32());
  /* 1110dd01 ret  */
  ESPCHK(0x1110dc30u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1110dd10 (219 bytes, 64 insns) */
void f_1110dd10(void) {
  FTRACE(0x1110dd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110dd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1110dd11 mov ebp, esp */
  EBP = (ESP);
  /* 1110dd13 push ecx */
  push32((uint32_t)(ECX));
  /* 1110dd14 cmp dword ptr [0x1112f71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110dd1b je 0x1110ddb1 */
  if (C.zf) goto L_1110ddb1;
  /* 1110dd21 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1110dd23 push 0x1112b0e8 */
  push32((uint32_t)(0x1112b0e8u));
  /* 1110dd28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110dd2a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1110dd2f push 1 */
  push32((uint32_t)(0x1u));
  /* 1110dd31 call 0x11103950 */
  push32(0x1110dd36u); f_11103950();
  /* 1110dd36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dd39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110dd3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110dd40 jne 0x1110dd4c */
  if (!C.zf) goto L_1110dd4c;
  /* 1110dd42 mov eax, 1 */
  EAX = (0x1u);
  /* 1110dd47 jmp 0x1110dde7 */
  goto L_1110dde7;
L_1110dd4c:;
  /* 1110dd4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dd4f push eax */
  push32((uint32_t)(EAX));
  /* 1110dd50 call 0x1110ddf0 */
  push32(0x1110dd55u); f_1110ddf0();
  /* 1110dd55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110dd5a je 0x1110dd7d */
  if (C.zf) goto L_1110dd7d;
  /* 1110dd5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dd5f push ecx */
  push32((uint32_t)(ECX));
  /* 1110dd60 call 0x1110e380 */
  push32(0x1110dd65u); f_1110e380();
  /* 1110dd65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dd68 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110dd6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dd6d push edx */
  push32((uint32_t)(EDX));
  /* 1110dd6e call 0x11103fd0 */
  push32(0x1110dd73u); f_11103fd0();
  /* 1110dd73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dd76 mov eax, 1 */
  EAX = (0x1u);
  /* 1110dd7b jmp 0x1110dde7 */
  goto L_1110dde7;
L_1110dd7d:;
  /* 1110dd7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dd80 mov dword ptr [0x1112ec98], eax */
  w32((uint32_t)(0x1112ec98), (EAX));
  /* 1110dd85 mov ecx, dword ptr [0x1112f73c] */
  ECX = (r32((uint32_t)(0x1112f73c)));
  /* 1110dd8b push ecx */
  push32((uint32_t)(ECX));
  /* 1110dd8c call 0x1110e380 */
  push32(0x1110dd91u); f_1110e380();
  /* 1110dd91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dd94 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110dd96 mov edx, dword ptr [0x1112f73c] */
  EDX = (r32((uint32_t)(0x1112f73c)));
  /* 1110dd9c push edx */
  push32((uint32_t)(EDX));
  /* 1110dd9d call 0x11103fd0 */
  push32(0x1110dda2u); f_11103fd0();
  /* 1110dda2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dda5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dda8 mov dword ptr [0x1112f73c], eax */
  w32((uint32_t)(0x1112f73c), (EAX));
  /* 1110ddad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ddaf jmp 0x1110dde7 */
  goto L_1110dde7;
L_1110ddb1:;
  /* 1110ddb1 mov dword ptr [0x1112ec98], 0x1112eca0 */
  w32((uint32_t)(0x1112ec98), (0x1112eca0u));
  /* 1110ddbb mov ecx, dword ptr [0x1112f73c] */
  ECX = (r32((uint32_t)(0x1112f73c)));
  /* 1110ddc1 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ddc2 call 0x1110e380 */
  push32(0x1110ddc7u); f_1110e380();
  /* 1110ddc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ddca push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ddcc mov edx, dword ptr [0x1112f73c] */
  EDX = (r32((uint32_t)(0x1112f73c)));
  /* 1110ddd2 push edx */
  push32((uint32_t)(EDX));
  /* 1110ddd3 call 0x11103fd0 */
  push32(0x1110ddd8u); f_11103fd0();
  /* 1110ddd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dddb mov dword ptr [0x1112f73c], 0 */
  w32((uint32_t)(0x1112f73c), (0x0u));
  /* 1110dde5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110dde7:;
  /* 1110dde7 mov esp, ebp */
  ESP = (EBP);
  /* 1110dde9 pop ebp */
  EBP = (pop32());
  /* 1110ddea ret  */
  ESPCHK(0x1110dd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x1110ddf0 (1423 bytes, 533 insns) */
void f_1110ddf0(void) {
  FTRACE(0x1110ddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ddf1 mov ebp, esp */
  EBP = (ESP);
  /* 1110ddf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ddf6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1110ddfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ddff mov ax, word ptr [0x1112f776] */
  AX = (r16((uint32_t)(0x1112f776)));
  /* 1110de05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110de08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110de0a mov cx, word ptr [0x1112f778] */
  CX = (r16((uint32_t)(0x1112f778)));
  /* 1110de11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110de14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110de18 jne 0x1110de22 */
  if (!C.zf) goto L_1110de22;
  /* 1110de1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110de1d jmp 0x1110e37b */
  goto L_1110e37b;
L_1110de22:;
  /* 1110de22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110de25 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de28 push edx */
  push32((uint32_t)(EDX));
  /* 1110de29 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1110de2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110de2e push eax */
  push32((uint32_t)(EAX));
  /* 1110de2f push 1 */
  push32((uint32_t)(0x1u));
  /* 1110de31 call 0x11111700 */
  push32(0x1110de36u); f_11111700();
  /* 1110de36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110de3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110de3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110de41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110de44 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de47 push edx */
  push32((uint32_t)(EDX));
  /* 1110de48 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1110de4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110de4d push eax */
  push32((uint32_t)(EAX));
  /* 1110de4e push 1 */
  push32((uint32_t)(0x1u));
  /* 1110de50 call 0x11111700 */
  push32(0x1110de55u); f_11111700();
  /* 1110de55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110de5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110de5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110de60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110de63 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de66 push edx */
  push32((uint32_t)(EDX));
  /* 1110de67 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1110de69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110de6c push eax */
  push32((uint32_t)(EAX));
  /* 1110de6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1110de6f call 0x11111700 */
  push32(0x1110de74u); f_11111700();
  /* 1110de74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110de7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110de7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110de7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110de82 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de85 push edx */
  push32((uint32_t)(EDX));
  /* 1110de86 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1110de88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110de8b push eax */
  push32((uint32_t)(EAX));
  /* 1110de8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1110de8e call 0x11111700 */
  push32(0x1110de93u); f_11111700();
  /* 1110de93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110de96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110de99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110de9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110de9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dea1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dea4 push edx */
  push32((uint32_t)(EDX));
  /* 1110dea5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1110dea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110deaa push eax */
  push32((uint32_t)(EAX));
  /* 1110deab push 1 */
  push32((uint32_t)(0x1u));
  /* 1110dead call 0x11111700 */
  push32(0x1110deb2u); f_11111700();
  /* 1110deb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110deb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110deb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110deba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110debd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dec0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dec3 push edx */
  push32((uint32_t)(EDX));
  /* 1110dec4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1110dec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dec9 push eax */
  push32((uint32_t)(EAX));
  /* 1110deca push 1 */
  push32((uint32_t)(0x1u));
  /* 1110decc call 0x11111700 */
  push32(0x1110ded1u); f_11111700();
  /* 1110ded1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ded4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ded7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ded9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110dedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dedf push edx */
  push32((uint32_t)(EDX));
  /* 1110dee0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1110dee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dee5 push eax */
  push32((uint32_t)(EAX));
  /* 1110dee6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110dee8 call 0x11111700 */
  push32(0x1110deedu); f_11111700();
  /* 1110deed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110def0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110def3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110def5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110def8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110defb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110defe push edx */
  push32((uint32_t)(EDX));
  /* 1110deff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1110df01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110df04 push eax */
  push32((uint32_t)(EAX));
  /* 1110df05 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110df07 call 0x11111700 */
  push32(0x1110df0cu); f_11111700();
  /* 1110df0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110df12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110df14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110df17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110df1a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df1d push edx */
  push32((uint32_t)(EDX));
  /* 1110df1e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1110df20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110df23 push eax */
  push32((uint32_t)(EAX));
  /* 1110df24 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110df26 call 0x11111700 */
  push32(0x1110df2bu); f_11111700();
  /* 1110df2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110df31 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110df33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110df36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110df39 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df3c push edx */
  push32((uint32_t)(EDX));
  /* 1110df3d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1110df3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110df42 push eax */
  push32((uint32_t)(EAX));
  /* 1110df43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110df45 call 0x11111700 */
  push32(0x1110df4au); f_11111700();
  /* 1110df4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110df50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110df52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110df55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110df58 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df5b push edx */
  push32((uint32_t)(EDX));
  /* 1110df5c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1110df5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110df61 push eax */
  push32((uint32_t)(EAX));
  /* 1110df62 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110df64 call 0x11111700 */
  push32(0x1110df69u); f_11111700();
  /* 1110df69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110df6f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110df71 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110df74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110df77 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df7a push edx */
  push32((uint32_t)(EDX));
  /* 1110df7b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1110df7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110df80 push eax */
  push32((uint32_t)(EAX));
  /* 1110df81 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110df83 call 0x11111700 */
  push32(0x1110df88u); f_11111700();
  /* 1110df88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110df8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110df90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110df93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110df96 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110df99 push edx */
  push32((uint32_t)(EDX));
  /* 1110df9a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1110df9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110df9f push eax */
  push32((uint32_t)(EAX));
  /* 1110dfa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110dfa2 call 0x11111700 */
  push32(0x1110dfa7u); f_11111700();
  /* 1110dfa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dfaa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110dfad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110dfaf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110dfb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dfb5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dfb8 push edx */
  push32((uint32_t)(EDX));
  /* 1110dfb9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1110dfbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dfbe push eax */
  push32((uint32_t)(EAX));
  /* 1110dfbf push 1 */
  push32((uint32_t)(0x1u));
  /* 1110dfc1 call 0x11111700 */
  push32(0x1110dfc6u); f_11111700();
  /* 1110dfc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dfc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110dfcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110dfce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110dfd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dfd4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dfd7 push edx */
  push32((uint32_t)(EDX));
  /* 1110dfd8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1110dfda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dfdd push eax */
  push32((uint32_t)(EAX));
  /* 1110dfde push 1 */
  push32((uint32_t)(0x1u));
  /* 1110dfe0 call 0x11111700 */
  push32(0x1110dfe5u); f_11111700();
  /* 1110dfe5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dfe8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110dfeb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110dfed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110dff0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110dff3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110dff6 push edx */
  push32((uint32_t)(EDX));
  /* 1110dff7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1110dff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110dffc push eax */
  push32((uint32_t)(EAX));
  /* 1110dffd push 1 */
  push32((uint32_t)(0x1u));
  /* 1110dfff call 0x11111700 */
  push32(0x1110e004u); f_11111700();
  /* 1110e004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e00a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e00c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e00f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e012 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e015 push edx */
  push32((uint32_t)(EDX));
  /* 1110e016 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1110e018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e01b push eax */
  push32((uint32_t)(EAX));
  /* 1110e01c push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e01e call 0x11111700 */
  push32(0x1110e023u); f_11111700();
  /* 1110e023 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e026 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e029 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e02b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e02e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e031 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e034 push edx */
  push32((uint32_t)(EDX));
  /* 1110e035 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1110e037 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e03a push eax */
  push32((uint32_t)(EAX));
  /* 1110e03b push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e03d call 0x11111700 */
  push32(0x1110e042u); f_11111700();
  /* 1110e042 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e045 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e048 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e04a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e04d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e050 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e053 push edx */
  push32((uint32_t)(EDX));
  /* 1110e054 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1110e056 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e059 push eax */
  push32((uint32_t)(EAX));
  /* 1110e05a push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e05c call 0x11111700 */
  push32(0x1110e061u); f_11111700();
  /* 1110e061 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e064 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e067 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e069 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e06c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e06f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e072 push edx */
  push32((uint32_t)(EDX));
  /* 1110e073 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1110e075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e078 push eax */
  push32((uint32_t)(EAX));
  /* 1110e079 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e07b call 0x11111700 */
  push32(0x1110e080u); f_11111700();
  /* 1110e080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e083 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e086 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e088 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e08b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e08e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e091 push edx */
  push32((uint32_t)(EDX));
  /* 1110e092 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1110e094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e097 push eax */
  push32((uint32_t)(EAX));
  /* 1110e098 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e09a call 0x11111700 */
  push32(0x1110e09fu); f_11111700();
  /* 1110e09f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e0a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e0a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e0a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e0aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e0ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e0b0 push edx */
  push32((uint32_t)(EDX));
  /* 1110e0b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1110e0b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e0b6 push eax */
  push32((uint32_t)(EAX));
  /* 1110e0b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e0b9 call 0x11111700 */
  push32(0x1110e0beu); f_11111700();
  /* 1110e0be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e0c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e0c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e0c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e0c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e0cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e0cf push edx */
  push32((uint32_t)(EDX));
  /* 1110e0d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1110e0d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e0d5 push eax */
  push32((uint32_t)(EAX));
  /* 1110e0d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e0d8 call 0x11111700 */
  push32(0x1110e0ddu); f_11111700();
  /* 1110e0dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e0e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e0e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e0e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e0e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e0eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e0ee push edx */
  push32((uint32_t)(EDX));
  /* 1110e0ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1110e0f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e0f4 push eax */
  push32((uint32_t)(EAX));
  /* 1110e0f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e0f7 call 0x11111700 */
  push32(0x1110e0fcu); f_11111700();
  /* 1110e0fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e102 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e104 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e10a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e10d push edx */
  push32((uint32_t)(EDX));
  /* 1110e10e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1110e110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e113 push eax */
  push32((uint32_t)(EAX));
  /* 1110e114 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e116 call 0x11111700 */
  push32(0x1110e11bu); f_11111700();
  /* 1110e11b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e11e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e121 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e123 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e129 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e12c push edx */
  push32((uint32_t)(EDX));
  /* 1110e12d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1110e12f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e132 push eax */
  push32((uint32_t)(EAX));
  /* 1110e133 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e135 call 0x11111700 */
  push32(0x1110e13au); f_11111700();
  /* 1110e13a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e13d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e140 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e142 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e148 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e14b push edx */
  push32((uint32_t)(EDX));
  /* 1110e14c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1110e14e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e151 push eax */
  push32((uint32_t)(EAX));
  /* 1110e152 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e154 call 0x11111700 */
  push32(0x1110e159u); f_11111700();
  /* 1110e159 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e15c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e15f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e161 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e167 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e16a push edx */
  push32((uint32_t)(EDX));
  /* 1110e16b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1110e16d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e170 push eax */
  push32((uint32_t)(EAX));
  /* 1110e171 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e173 call 0x11111700 */
  push32(0x1110e178u); f_11111700();
  /* 1110e178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e17b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e17e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e180 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e186 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e189 push edx */
  push32((uint32_t)(EDX));
  /* 1110e18a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1110e18c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e18f push eax */
  push32((uint32_t)(EAX));
  /* 1110e190 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e192 call 0x11111700 */
  push32(0x1110e197u); f_11111700();
  /* 1110e197 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e19a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e19d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e19f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e1a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e1a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e1a8 push edx */
  push32((uint32_t)(EDX));
  /* 1110e1a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1110e1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e1ae push eax */
  push32((uint32_t)(EAX));
  /* 1110e1af push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e1b1 call 0x11111700 */
  push32(0x1110e1b6u); f_11111700();
  /* 1110e1b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e1b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e1bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e1be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e1c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e1c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e1c7 push edx */
  push32((uint32_t)(EDX));
  /* 1110e1c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1110e1ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e1cd push eax */
  push32((uint32_t)(EAX));
  /* 1110e1ce push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e1d0 call 0x11111700 */
  push32(0x1110e1d5u); f_11111700();
  /* 1110e1d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e1d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e1db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e1dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e1e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e1e6 push edx */
  push32((uint32_t)(EDX));
  /* 1110e1e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1110e1e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e1ec push eax */
  push32((uint32_t)(EAX));
  /* 1110e1ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e1ef call 0x11111700 */
  push32(0x1110e1f4u); f_11111700();
  /* 1110e1f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e1f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e1fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e1fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e1ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e202 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e208 push edx */
  push32((uint32_t)(EDX));
  /* 1110e209 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1110e20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e20e push eax */
  push32((uint32_t)(EAX));
  /* 1110e20f push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e211 call 0x11111700 */
  push32(0x1110e216u); f_11111700();
  /* 1110e216 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e219 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e21c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e21e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e224 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e22a push edx */
  push32((uint32_t)(EDX));
  /* 1110e22b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1110e22d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e230 push eax */
  push32((uint32_t)(EAX));
  /* 1110e231 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e233 call 0x11111700 */
  push32(0x1110e238u); f_11111700();
  /* 1110e238 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e23b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e23e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e246 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e24c push edx */
  push32((uint32_t)(EDX));
  /* 1110e24d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1110e24f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e252 push eax */
  push32((uint32_t)(EAX));
  /* 1110e253 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e255 call 0x11111700 */
  push32(0x1110e25au); f_11111700();
  /* 1110e25a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e25d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e260 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e262 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e268 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e26e push edx */
  push32((uint32_t)(EDX));
  /* 1110e26f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1110e271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e274 push eax */
  push32((uint32_t)(EAX));
  /* 1110e275 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e277 call 0x11111700 */
  push32(0x1110e27cu); f_11111700();
  /* 1110e27c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e27f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e282 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e284 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e28a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e290 push edx */
  push32((uint32_t)(EDX));
  /* 1110e291 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1110e293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e296 push eax */
  push32((uint32_t)(EAX));
  /* 1110e297 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e299 call 0x11111700 */
  push32(0x1110e29eu); f_11111700();
  /* 1110e29e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e2a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e2a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e2a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e2a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e2ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e2b2 push edx */
  push32((uint32_t)(EDX));
  /* 1110e2b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1110e2b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e2b8 push eax */
  push32((uint32_t)(EAX));
  /* 1110e2b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e2bb call 0x11111700 */
  push32(0x1110e2c0u); f_11111700();
  /* 1110e2c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e2c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e2c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e2c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e2cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e2ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e2d4 push edx */
  push32((uint32_t)(EDX));
  /* 1110e2d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1110e2d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e2da push eax */
  push32((uint32_t)(EAX));
  /* 1110e2db push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e2dd call 0x11111700 */
  push32(0x1110e2e2u); f_11111700();
  /* 1110e2e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e2e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e2e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e2ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e2f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e2f6 push edx */
  push32((uint32_t)(EDX));
  /* 1110e2f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1110e2f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e2fc push eax */
  push32((uint32_t)(EAX));
  /* 1110e2fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e2ff call 0x11111700 */
  push32(0x1110e304u); f_11111700();
  /* 1110e304 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e307 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e30a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e30c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e312 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e318 push edx */
  push32((uint32_t)(EDX));
  /* 1110e319 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1110e31b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110e31e push eax */
  push32((uint32_t)(EAX));
  /* 1110e31f push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e321 call 0x11111700 */
  push32(0x1110e326u); f_11111700();
  /* 1110e326 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e329 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e32c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e32e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e334 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e33a push edx */
  push32((uint32_t)(EDX));
  /* 1110e33b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1110e33d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110e340 push eax */
  push32((uint32_t)(EAX));
  /* 1110e341 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e343 call 0x11111700 */
  push32(0x1110e348u); f_11111700();
  /* 1110e348 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e34b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e34e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e350 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e353 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e356 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e35c push edx */
  push32((uint32_t)(EDX));
  /* 1110e35d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1110e362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110e365 push eax */
  push32((uint32_t)(EAX));
  /* 1110e366 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e368 call 0x11111700 */
  push32(0x1110e36du); f_11111700();
  /* 1110e36d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e370 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110e373 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e375 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1110e378 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1110e37b:;
  /* 1110e37b mov esp, ebp */
  ESP = (EBP);
  /* 1110e37d pop ebp */
  EBP = (pop32());
  /* 1110e37e ret  */
  ESPCHK(0x1110ddf0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1110e380 (779 bytes, 265 insns) */
void f_1110e380(void) {
  FTRACE(0x1110e380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110e380 push ebp */
  push32((uint32_t)(EBP));
  /* 1110e381 mov ebp, esp */
  EBP = (ESP);
  /* 1110e383 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e387 jne 0x1110e38e */
  if (!C.zf) goto L_1110e38e;
  /* 1110e389 jmp 0x1110e689 */
  goto L_1110e689;
L_1110e38e:;
  /* 1110e38e push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e393 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1110e396 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e397 call 0x11103fd0 */
  push32(0x1110e39cu); f_11103fd0();
  /* 1110e39c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e39f push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e3a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e3a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1110e3a7 push eax */
  push32((uint32_t)(EAX));
  /* 1110e3a8 call 0x11103fd0 */
  push32(0x1110e3adu); f_11103fd0();
  /* 1110e3ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e3b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e3b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110e3b8 push edx */
  push32((uint32_t)(EDX));
  /* 1110e3b9 call 0x11103fd0 */
  push32(0x1110e3beu); f_11103fd0();
  /* 1110e3be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e3c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e3c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e3c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1110e3c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e3ca call 0x11103fd0 */
  push32(0x1110e3cfu); f_11103fd0();
  /* 1110e3cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e3d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e3d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e3d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1110e3da push eax */
  push32((uint32_t)(EAX));
  /* 1110e3db call 0x11103fd0 */
  push32(0x1110e3e0u); f_11103fd0();
  /* 1110e3e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e3e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e3e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e3e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1110e3eb push edx */
  push32((uint32_t)(EDX));
  /* 1110e3ec call 0x11103fd0 */
  push32(0x1110e3f1u); f_11103fd0();
  /* 1110e3f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e3f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e3f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110e3fb push ecx */
  push32((uint32_t)(ECX));
  /* 1110e3fc call 0x11103fd0 */
  push32(0x1110e401u); f_11103fd0();
  /* 1110e401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e404 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e406 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e409 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1110e40c push eax */
  push32((uint32_t)(EAX));
  /* 1110e40d call 0x11103fd0 */
  push32(0x1110e412u); f_11103fd0();
  /* 1110e412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e415 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e417 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e41a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1110e41d push edx */
  push32((uint32_t)(EDX));
  /* 1110e41e call 0x11103fd0 */
  push32(0x1110e423u); f_11103fd0();
  /* 1110e423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e426 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e428 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e42b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1110e42e push ecx */
  push32((uint32_t)(ECX));
  /* 1110e42f call 0x11103fd0 */
  push32(0x1110e434u); f_11103fd0();
  /* 1110e434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e437 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e439 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e43c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1110e43f push eax */
  push32((uint32_t)(EAX));
  /* 1110e440 call 0x11103fd0 */
  push32(0x1110e445u); f_11103fd0();
  /* 1110e445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e448 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e44a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e44d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1110e450 push edx */
  push32((uint32_t)(EDX));
  /* 1110e451 call 0x11103fd0 */
  push32(0x1110e456u); f_11103fd0();
  /* 1110e456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e459 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e45b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e45e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1110e461 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e462 call 0x11103fd0 */
  push32(0x1110e467u); f_11103fd0();
  /* 1110e467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e46a push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e46c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e46f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1110e472 push eax */
  push32((uint32_t)(EAX));
  /* 1110e473 call 0x11103fd0 */
  push32(0x1110e478u); f_11103fd0();
  /* 1110e478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e47b push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e47d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e480 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1110e483 push edx */
  push32((uint32_t)(EDX));
  /* 1110e484 call 0x11103fd0 */
  push32(0x1110e489u); f_11103fd0();
  /* 1110e489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e48c push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e48e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e491 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1110e494 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e495 call 0x11103fd0 */
  push32(0x1110e49au); f_11103fd0();
  /* 1110e49a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e49d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e49f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e4a2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1110e4a5 push eax */
  push32((uint32_t)(EAX));
  /* 1110e4a6 call 0x11103fd0 */
  push32(0x1110e4abu); f_11103fd0();
  /* 1110e4ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e4ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e4b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e4b3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1110e4b6 push edx */
  push32((uint32_t)(EDX));
  /* 1110e4b7 call 0x11103fd0 */
  push32(0x1110e4bcu); f_11103fd0();
  /* 1110e4bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e4bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e4c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e4c4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1110e4c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e4c8 call 0x11103fd0 */
  push32(0x1110e4cdu); f_11103fd0();
  /* 1110e4cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e4d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e4d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e4d5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1110e4d8 push eax */
  push32((uint32_t)(EAX));
  /* 1110e4d9 call 0x11103fd0 */
  push32(0x1110e4deu); f_11103fd0();
  /* 1110e4de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e4e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e4e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e4e6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1110e4e9 push edx */
  push32((uint32_t)(EDX));
  /* 1110e4ea call 0x11103fd0 */
  push32(0x1110e4efu); f_11103fd0();
  /* 1110e4ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e4f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e4f7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1110e4fa push ecx */
  push32((uint32_t)(ECX));
  /* 1110e4fb call 0x11103fd0 */
  push32(0x1110e500u); f_11103fd0();
  /* 1110e500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e503 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e508 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1110e50b push eax */
  push32((uint32_t)(EAX));
  /* 1110e50c call 0x11103fd0 */
  push32(0x1110e511u); f_11103fd0();
  /* 1110e511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e514 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e519 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1110e51c push edx */
  push32((uint32_t)(EDX));
  /* 1110e51d call 0x11103fd0 */
  push32(0x1110e522u); f_11103fd0();
  /* 1110e522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e525 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e52a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1110e52d push ecx */
  push32((uint32_t)(ECX));
  /* 1110e52e call 0x11103fd0 */
  push32(0x1110e533u); f_11103fd0();
  /* 1110e533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e536 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e53b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1110e53e push eax */
  push32((uint32_t)(EAX));
  /* 1110e53f call 0x11103fd0 */
  push32(0x1110e544u); f_11103fd0();
  /* 1110e544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e547 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e54c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1110e54f push edx */
  push32((uint32_t)(EDX));
  /* 1110e550 call 0x11103fd0 */
  push32(0x1110e555u); f_11103fd0();
  /* 1110e555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e558 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e55a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e55d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1110e560 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e561 call 0x11103fd0 */
  push32(0x1110e566u); f_11103fd0();
  /* 1110e566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e569 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e56b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e56e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1110e571 push eax */
  push32((uint32_t)(EAX));
  /* 1110e572 call 0x11103fd0 */
  push32(0x1110e577u); f_11103fd0();
  /* 1110e577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e57a push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e57c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e57f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1110e582 push edx */
  push32((uint32_t)(EDX));
  /* 1110e583 call 0x11103fd0 */
  push32(0x1110e588u); f_11103fd0();
  /* 1110e588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e58b push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e58d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e590 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1110e593 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e594 call 0x11103fd0 */
  push32(0x1110e599u); f_11103fd0();
  /* 1110e599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e59c push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e59e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e5a1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1110e5a4 push eax */
  push32((uint32_t)(EAX));
  /* 1110e5a5 call 0x11103fd0 */
  push32(0x1110e5aau); f_11103fd0();
  /* 1110e5aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e5ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e5af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e5b2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1110e5b8 push edx */
  push32((uint32_t)(EDX));
  /* 1110e5b9 call 0x11103fd0 */
  push32(0x1110e5beu); f_11103fd0();
  /* 1110e5be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e5c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e5c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e5c6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1110e5cc push ecx */
  push32((uint32_t)(ECX));
  /* 1110e5cd call 0x11103fd0 */
  push32(0x1110e5d2u); f_11103fd0();
  /* 1110e5d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e5d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e5d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e5da mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1110e5e0 push eax */
  push32((uint32_t)(EAX));
  /* 1110e5e1 call 0x11103fd0 */
  push32(0x1110e5e6u); f_11103fd0();
  /* 1110e5e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e5e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e5eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e5ee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1110e5f4 push edx */
  push32((uint32_t)(EDX));
  /* 1110e5f5 call 0x11103fd0 */
  push32(0x1110e5fau); f_11103fd0();
  /* 1110e5fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e5fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e5ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e602 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1110e608 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e609 call 0x11103fd0 */
  push32(0x1110e60eu); f_11103fd0();
  /* 1110e60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e611 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e616 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1110e61c push eax */
  push32((uint32_t)(EAX));
  /* 1110e61d call 0x11103fd0 */
  push32(0x1110e622u); f_11103fd0();
  /* 1110e622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e625 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e627 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e62a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1110e630 push edx */
  push32((uint32_t)(EDX));
  /* 1110e631 call 0x11103fd0 */
  push32(0x1110e636u); f_11103fd0();
  /* 1110e636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e639 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e63b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e63e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1110e644 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e645 call 0x11103fd0 */
  push32(0x1110e64au); f_11103fd0();
  /* 1110e64a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e64d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e64f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e652 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1110e658 push eax */
  push32((uint32_t)(EAX));
  /* 1110e659 call 0x11103fd0 */
  push32(0x1110e65eu); f_11103fd0();
  /* 1110e65e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e661 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e666 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1110e66c push edx */
  push32((uint32_t)(EDX));
  /* 1110e66d call 0x11103fd0 */
  push32(0x1110e672u); f_11103fd0();
  /* 1110e672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e675 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e677 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e67a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1110e680 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e681 call 0x11103fd0 */
  push32(0x1110e686u); f_11103fd0();
  /* 1110e686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110e689:;
  /* 1110e689 pop ebp */
  EBP = (pop32());
  /* 1110e68a ret  */
  ESPCHK(0x1110e380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e690 @ 0x1110e690 (678 bytes, 180 insns) */
void f_1110e690(void) {
  FTRACE(0x1110e690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110e690 push ebp */
  push32((uint32_t)(EBP));
  /* 1110e691 mov ebp, esp */
  EBP = (ESP);
  /* 1110e693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110e696 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110e69d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110e69f mov ax, word ptr [0x1112f772] */
  AX = (r16((uint32_t)(0x1112f772)));
  /* 1110e6a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110e6a8 cmp dword ptr [0x1112f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e6af je 0x1110e80a */
  if (C.zf) goto L_1110e80a;
  /* 1110e6b5 push 0x1112f740 */
  push32((uint32_t)(0x1112f740u));
  /* 1110e6ba push 0xe */
  push32((uint32_t)(0xeu));
  /* 1110e6bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e6bf push ecx */
  push32((uint32_t)(ECX));
  /* 1110e6c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e6c2 call 0x11111700 */
  push32(0x1110e6c7u); f_11111700();
  /* 1110e6c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e6ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110e6cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1110e6cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1110e6d2 push 0x1112f744 */
  push32((uint32_t)(0x1112f744u));
  /* 1110e6d7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1110e6d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e6dc push eax */
  push32((uint32_t)(EAX));
  /* 1110e6dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e6df call 0x11111700 */
  push32(0x1110e6e4u); f_11111700();
  /* 1110e6e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e6e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110e6ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e6ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110e6ef push 0x1112f748 */
  push32((uint32_t)(0x1112f748u));
  /* 1110e6f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1110e6f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e6f9 push edx */
  push32((uint32_t)(EDX));
  /* 1110e6fa push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e6fc call 0x11111700 */
  push32(0x1110e701u); f_11111700();
  /* 1110e701 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e704 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110e707 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110e709 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110e70c mov edx, dword ptr [0x1112f748] */
  EDX = (r32((uint32_t)(0x1112f748)));
  /* 1110e712 push edx */
  push32((uint32_t)(EDX));
  /* 1110e713 call 0x1110e940 */
  push32(0x1110e718u); f_1110e940();
  /* 1110e718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e71b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e71f je 0x1110e779 */
  if (C.zf) goto L_1110e779;
  /* 1110e721 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e723 mov eax, dword ptr [0x1112f740] */
  EAX = (r32((uint32_t)(0x1112f740)));
  /* 1110e728 push eax */
  push32((uint32_t)(EAX));
  /* 1110e729 call 0x11103fd0 */
  push32(0x1110e72eu); f_11103fd0();
  /* 1110e72e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e731 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e733 mov ecx, dword ptr [0x1112f744] */
  ECX = (r32((uint32_t)(0x1112f744)));
  /* 1110e739 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e73a call 0x11103fd0 */
  push32(0x1110e73fu); f_11103fd0();
  /* 1110e73f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e742 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e744 mov edx, dword ptr [0x1112f748] */
  EDX = (r32((uint32_t)(0x1112f748)));
  /* 1110e74a push edx */
  push32((uint32_t)(EDX));
  /* 1110e74b call 0x11103fd0 */
  push32(0x1110e750u); f_11103fd0();
  /* 1110e750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e753 mov dword ptr [0x1112f740], 0 */
  w32((uint32_t)(0x1112f740), (0x0u));
  /* 1110e75d mov dword ptr [0x1112f744], 0 */
  w32((uint32_t)(0x1112f744), (0x0u));
  /* 1110e767 mov dword ptr [0x1112f748], 0 */
  w32((uint32_t)(0x1112f748), (0x0u));
  /* 1110e771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110e774 jmp 0x1110e932 */
  goto L_1110e932;
L_1110e779:;
  /* 1110e779 mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e77e cmp dword ptr [eax], 0x1112ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1112ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e784 je 0x1110e7c0 */
  if (C.zf) goto L_1110e7c0;
  /* 1110e786 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e788 mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e78e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110e790 push edx */
  push32((uint32_t)(EDX));
  /* 1110e791 call 0x11103fd0 */
  push32(0x1110e796u); f_11103fd0();
  /* 1110e796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e799 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e79b mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e7a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1110e7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e7a4 call 0x11103fd0 */
  push32(0x1110e7a9u); f_11103fd0();
  /* 1110e7a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e7ac push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e7ae mov edx, dword ptr [0x1112ed88] */
  EDX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e7b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1110e7b7 push eax */
  push32((uint32_t)(EAX));
  /* 1110e7b8 call 0x11103fd0 */
  push32(0x1110e7bdu); f_11103fd0();
  /* 1110e7bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110e7c0:;
  /* 1110e7c0 mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e7c6 mov edx, dword ptr [0x1112f740] */
  EDX = (r32((uint32_t)(0x1112f740)));
  /* 1110e7cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1110e7ce mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e7d3 mov ecx, dword ptr [0x1112f744] */
  ECX = (r32((uint32_t)(0x1112f744)));
  /* 1110e7d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1110e7dc mov edx, dword ptr [0x1112ed88] */
  EDX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e7e2 mov eax, dword ptr [0x1112f748] */
  EAX = (r32((uint32_t)(0x1112f748)));
  /* 1110e7e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1110e7ea mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e7f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110e7f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110e7f4 mov byte ptr [0x1112dea8], al */
  w8((uint32_t)(0x1112dea8), (AL));
  /* 1110e7f9 mov dword ptr [0x1112deac], 1 */
  w32((uint32_t)(0x1112deac), (0x1u));
  /* 1110e803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110e805 jmp 0x1110e932 */
  goto L_1110e932;
L_1110e80a:;
  /* 1110e80a push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e80c mov ecx, dword ptr [0x1112f740] */
  ECX = (r32((uint32_t)(0x1112f740)));
  /* 1110e812 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e813 call 0x11103fd0 */
  push32(0x1110e818u); f_11103fd0();
  /* 1110e818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e81b push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e81d mov edx, dword ptr [0x1112f744] */
  EDX = (r32((uint32_t)(0x1112f744)));
  /* 1110e823 push edx */
  push32((uint32_t)(EDX));
  /* 1110e824 call 0x11103fd0 */
  push32(0x1110e829u); f_11103fd0();
  /* 1110e829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e82c push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e82e mov eax, dword ptr [0x1112f748] */
  EAX = (r32((uint32_t)(0x1112f748)));
  /* 1110e833 push eax */
  push32((uint32_t)(EAX));
  /* 1110e834 call 0x11103fd0 */
  push32(0x1110e839u); f_11103fd0();
  /* 1110e839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e83c mov dword ptr [0x1112f740], 0 */
  w32((uint32_t)(0x1112f740), (0x0u));
  /* 1110e846 mov dword ptr [0x1112f744], 0 */
  w32((uint32_t)(0x1112f744), (0x0u));
  /* 1110e850 mov dword ptr [0x1112f748], 0 */
  w32((uint32_t)(0x1112f748), (0x0u));
  /* 1110e85a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1110e85f push 0x1112b0f4 */
  push32((uint32_t)(0x1112b0f4u));
  /* 1110e864 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e866 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e868 call 0x11103540 */
  push32(0x1110e86du); f_11103540();
  /* 1110e86d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e870 mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e876 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1110e878 mov edx, dword ptr [0x1112ed88] */
  EDX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e87e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e881 jne 0x1110e88b */
  if (!C.zf) goto L_1110e88b;
  /* 1110e883 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110e886 jmp 0x1110e932 */
  goto L_1110e932;
L_1110e88b:;
  /* 1110e88b push 0x1112b0c4 */
  push32((uint32_t)(0x1112b0c4u));
  /* 1110e890 mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e895 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110e897 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e898 call 0x111064f0 */
  push32(0x1110e89du); f_111064f0();
  /* 1110e89d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e8a0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1110e8a5 push 0x1112b0f4 */
  push32((uint32_t)(0x1112b0f4u));
  /* 1110e8aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e8ac push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e8ae call 0x11103540 */
  push32(0x1110e8b3u); f_11103540();
  /* 1110e8b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e8b6 mov edx, dword ptr [0x1112ed88] */
  EDX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e8bc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1110e8bf mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e8c4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e8c8 jne 0x1110e8cf */
  if (!C.zf) goto L_1110e8cf;
  /* 1110e8ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110e8cd jmp 0x1110e932 */
  goto L_1110e932;
L_1110e8cf:;
  /* 1110e8cf mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e8d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1110e8d8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1110e8db push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1110e8e0 push 0x1112b0f4 */
  push32((uint32_t)(0x1112b0f4u));
  /* 1110e8e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e8e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e8e9 call 0x11103540 */
  push32(0x1110e8eeu); f_11103540();
  /* 1110e8ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e8f1 mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e8f7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1110e8fa mov edx, dword ptr [0x1112ed88] */
  EDX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e900 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e904 jne 0x1110e90b */
  if (!C.zf) goto L_1110e90b;
  /* 1110e906 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110e909 jmp 0x1110e932 */
  goto L_1110e932;
L_1110e90b:;
  /* 1110e90b mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e910 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1110e913 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1110e916 mov edx, dword ptr [0x1112ed88] */
  EDX = (r32((uint32_t)(0x1112ed88)));
  /* 1110e91c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110e91e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1110e920 mov byte ptr [0x1112dea8], cl */
  w8((uint32_t)(0x1112dea8), (CL));
  /* 1110e926 mov dword ptr [0x1112deac], 1 */
  w32((uint32_t)(0x1112deac), (0x1u));
  /* 1110e930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110e932:;
  /* 1110e932 mov esp, ebp */
  ESP = (EBP);
  /* 1110e934 pop ebp */
  EBP = (pop32());
  /* 1110e935 ret  */
  ESPCHK(0x1110e690u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1110e940 (125 bytes, 49 insns) */
void f_1110e940(void) {
  FTRACE(0x1110e940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110e940 push ebp */
  push32((uint32_t)(EBP));
  /* 1110e941 mov ebp, esp */
  EBP = (ESP);
  /* 1110e943 push ecx */
  push32((uint32_t)(ECX));
L_1110e944:;
  /* 1110e944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e947 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110e94a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110e94c je 0x1110e9b9 */
  if (C.zf) goto L_1110e9b9;
  /* 1110e94e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e951 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110e954 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e957 jl 0x1110e97d */
  if ((C.sf!=C.of)) goto L_1110e97d;
  /* 1110e959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e95c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110e95f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e962 jg 0x1110e97d */
  if ((!C.zf&&C.sf==C.of)) goto L_1110e97d;
  /* 1110e964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e967 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110e96a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110e96d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e970 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1110e972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e975 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e978 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1110e97b jmp 0x1110e9b7 */
  goto L_1110e9b7;
L_1110e97d:;
  /* 1110e97d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e980 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110e983 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e986 jne 0x1110e9ae */
  if (!C.zf) goto L_1110e9ae;
  /* 1110e988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e98b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110e98e:;
  /* 1110e98e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e991 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e994 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1110e997 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1110e999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e99c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e99f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110e9a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e9a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110e9a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110e9aa jne 0x1110e98e */
  if (!C.zf) goto L_1110e98e;
  /* 1110e9ac jmp 0x1110e9b7 */
  goto L_1110e9b7;
L_1110e9ae:;
  /* 1110e9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110e9b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e9b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1110e9b7:;
  /* 1110e9b7 jmp 0x1110e944 */
  goto L_1110e944;
L_1110e9b9:;
  /* 1110e9b9 mov esp, ebp */
  ESP = (EBP);
  /* 1110e9bb pop ebp */
  EBP = (pop32());
  /* 1110e9bc ret  */
  ESPCHK(0x1110e940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x1110e9c0 (304 bytes, 85 insns) */
void f_1110e9c0(void) {
  FTRACE(0x1110e9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110e9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110e9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1110e9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110e9c4 cmp dword ptr [0x1112f714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e9cb je 0x1110ea8c */
  if (C.zf) goto L_1110ea8c;
  /* 1110e9d1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1110e9d3 push 0x1112b100 */
  push32((uint32_t)(0x1112b100u));
  /* 1110e9d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110e9da push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1110e9dc push 1 */
  push32((uint32_t)(0x1u));
  /* 1110e9de call 0x11103950 */
  push32(0x1110e9e3u); f_11103950();
  /* 1110e9e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110e9e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110e9e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110e9ed jne 0x1110e9f9 */
  if (!C.zf) goto L_1110e9f9;
  /* 1110e9ef mov eax, 1 */
  EAX = (0x1u);
  /* 1110e9f4 jmp 0x1110eaec */
  goto L_1110eaec;
L_1110e9f9:;
  /* 1110e9f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110e9fc push eax */
  push32((uint32_t)(EAX));
  /* 1110e9fd call 0x1110eaf0 */
  push32(0x1110ea02u); f_1110eaf0();
  /* 1110ea02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ea05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ea07 je 0x1110ea2d */
  if (C.zf) goto L_1110ea2d;
  /* 1110ea09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ea0c push ecx */
  push32((uint32_t)(ECX));
  /* 1110ea0d call 0x1110ed80 */
  push32(0x1110ea12u); f_1110ed80();
  /* 1110ea12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ea15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ea17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ea1a push edx */
  push32((uint32_t)(EDX));
  /* 1110ea1b call 0x11103fd0 */
  push32(0x1110ea20u); f_11103fd0();
  /* 1110ea20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ea23 mov eax, 1 */
  EAX = (0x1u);
  /* 1110ea28 jmp 0x1110eaec */
  goto L_1110eaec;
L_1110ea2d:;
  /* 1110ea2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ea30 mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110ea36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110ea38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1110ea3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ea3d mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110ea43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1110ea46 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1110ea49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ea4c mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110ea52 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1110ea55 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1110ea58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ea5b mov dword ptr [0x1112ed88], eax */
  w32((uint32_t)(0x1112ed88), (EAX));
  /* 1110ea60 mov ecx, dword ptr [0x1112f74c] */
  ECX = (r32((uint32_t)(0x1112f74c)));
  /* 1110ea66 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ea67 call 0x1110ed80 */
  push32(0x1110ea6cu); f_1110ed80();
  /* 1110ea6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ea6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ea71 mov edx, dword ptr [0x1112f74c] */
  EDX = (r32((uint32_t)(0x1112f74c)));
  /* 1110ea77 push edx */
  push32((uint32_t)(EDX));
  /* 1110ea78 call 0x11103fd0 */
  push32(0x1110ea7du); f_11103fd0();
  /* 1110ea7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ea80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ea83 mov dword ptr [0x1112f74c], eax */
  w32((uint32_t)(0x1112f74c), (EAX));
  /* 1110ea88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ea8a jmp 0x1110eaec */
  goto L_1110eaec;
L_1110ea8c:;
  /* 1110ea8c mov ecx, dword ptr [0x1112ed88] */
  ECX = (r32((uint32_t)(0x1112ed88)));
  /* 1110ea92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110ea94 mov dword ptr [0x1112ed58], edx */
  w32((uint32_t)(0x1112ed58), (EDX));
  /* 1110ea9a mov eax, dword ptr [0x1112ed88] */
  EAX = (r32((uint32_t)(0x1112ed88)));
  /* 1110ea9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1110eaa2 mov dword ptr [0x1112ed5c], ecx */
  w32((uint32_t)(0x1112ed5c), (ECX));
  /* 1110eaa8 mov edx, dword ptr [0x1112ed88] */
  EDX = (r32((uint32_t)(0x1112ed88)));
  /* 1110eaae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1110eab1 mov dword ptr [0x1112ed60], eax */
  w32((uint32_t)(0x1112ed60), (EAX));
  /* 1110eab6 mov dword ptr [0x1112ed88], 0x1112ed58 */
  w32((uint32_t)(0x1112ed88), (0x1112ed58u));
  /* 1110eac0 mov ecx, dword ptr [0x1112f74c] */
  ECX = (r32((uint32_t)(0x1112f74c)));
  /* 1110eac6 push ecx */
  push32((uint32_t)(ECX));
  /* 1110eac7 call 0x1110ed80 */
  push32(0x1110eaccu); f_1110ed80();
  /* 1110eacc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eacf push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ead1 mov edx, dword ptr [0x1112f74c] */
  EDX = (r32((uint32_t)(0x1112f74c)));
  /* 1110ead7 push edx */
  push32((uint32_t)(EDX));
  /* 1110ead8 call 0x11103fd0 */
  push32(0x1110eaddu); f_11103fd0();
  /* 1110eadd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eae0 mov dword ptr [0x1112f74c], 0 */
  w32((uint32_t)(0x1112f74c), (0x0u));
  /* 1110eaea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110eaec:;
  /* 1110eaec mov esp, ebp */
  ESP = (EBP);
  /* 1110eaee pop ebp */
  EBP = (pop32());
  /* 1110eaef ret  */
  ESPCHK(0x1110e9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaf0 @ 0x1110eaf0 (525 bytes, 200 insns) */
void f_1110eaf0(void) {
  FTRACE(0x1110eaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110eaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110eaf1 mov ebp, esp */
  EBP = (ESP);
  /* 1110eaf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110eaf6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110eafd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110eaff mov ax, word ptr [0x1112f76c] */
  AX = (r16((uint32_t)(0x1112f76c)));
  /* 1110eb05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110eb08 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110eb0c jne 0x1110eb16 */
  if (!C.zf) goto L_1110eb16;
  /* 1110eb0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110eb11 jmp 0x1110ecf9 */
  goto L_1110ecf9;
L_1110eb16:;
  /* 1110eb16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110eb19 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb1c push ecx */
  push32((uint32_t)(ECX));
  /* 1110eb1d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1110eb1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110eb22 push edx */
  push32((uint32_t)(EDX));
  /* 1110eb23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110eb25 call 0x11111700 */
  push32(0x1110eb2au); f_11111700();
  /* 1110eb2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110eb30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110eb32 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110eb35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110eb38 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb3b push edx */
  push32((uint32_t)(EDX));
  /* 1110eb3c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1110eb3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110eb41 push eax */
  push32((uint32_t)(EAX));
  /* 1110eb42 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110eb44 call 0x11111700 */
  push32(0x1110eb49u); f_11111700();
  /* 1110eb49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110eb4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110eb51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110eb54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110eb57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb5a push edx */
  push32((uint32_t)(EDX));
  /* 1110eb5b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1110eb5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110eb60 push eax */
  push32((uint32_t)(EAX));
  /* 1110eb61 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110eb63 call 0x11111700 */
  push32(0x1110eb68u); f_11111700();
  /* 1110eb68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110eb6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110eb70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110eb73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110eb76 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb79 push edx */
  push32((uint32_t)(EDX));
  /* 1110eb7a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1110eb7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110eb7f push eax */
  push32((uint32_t)(EAX));
  /* 1110eb80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110eb82 call 0x11111700 */
  push32(0x1110eb87u); f_11111700();
  /* 1110eb87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110eb8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110eb8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110eb92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110eb95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eb98 push edx */
  push32((uint32_t)(EDX));
  /* 1110eb99 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1110eb9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110eb9e push eax */
  push32((uint32_t)(EAX));
  /* 1110eb9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1110eba1 call 0x11111700 */
  push32(0x1110eba6u); f_11111700();
  /* 1110eba6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eba9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ebac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ebae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ebb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ebb4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1110ebb7 push eax */
  push32((uint32_t)(EAX));
  /* 1110ebb8 call 0x1110ed00 */
  push32(0x1110ebbdu); f_1110ed00();
  /* 1110ebbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ebc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ebc3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ebc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ebc7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1110ebc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ebcc push edx */
  push32((uint32_t)(EDX));
  /* 1110ebcd push 1 */
  push32((uint32_t)(0x1u));
  /* 1110ebcf call 0x11111700 */
  push32(0x1110ebd4u); f_11111700();
  /* 1110ebd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ebd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ebda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ebdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ebdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ebe2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ebe5 push edx */
  push32((uint32_t)(EDX));
  /* 1110ebe6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1110ebe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ebeb push eax */
  push32((uint32_t)(EAX));
  /* 1110ebec push 1 */
  push32((uint32_t)(0x1u));
  /* 1110ebee call 0x11111700 */
  push32(0x1110ebf3u); f_11111700();
  /* 1110ebf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ebf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ebf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ebfb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ebfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ec01 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec04 push edx */
  push32((uint32_t)(EDX));
  /* 1110ec05 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1110ec07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ec0a push eax */
  push32((uint32_t)(EAX));
  /* 1110ec0b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ec0d call 0x11111700 */
  push32(0x1110ec12u); f_11111700();
  /* 1110ec12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ec18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ec1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ec1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ec20 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec23 push edx */
  push32((uint32_t)(EDX));
  /* 1110ec24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1110ec26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ec29 push eax */
  push32((uint32_t)(EAX));
  /* 1110ec2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ec2c call 0x11111700 */
  push32(0x1110ec31u); f_11111700();
  /* 1110ec31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ec37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ec39 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ec3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ec3f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec42 push edx */
  push32((uint32_t)(EDX));
  /* 1110ec43 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1110ec45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ec48 push eax */
  push32((uint32_t)(EAX));
  /* 1110ec49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ec4b call 0x11111700 */
  push32(0x1110ec50u); f_11111700();
  /* 1110ec50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ec56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ec58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ec5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ec5e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec61 push edx */
  push32((uint32_t)(EDX));
  /* 1110ec62 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1110ec64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ec67 push eax */
  push32((uint32_t)(EAX));
  /* 1110ec68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ec6a call 0x11111700 */
  push32(0x1110ec6fu); f_11111700();
  /* 1110ec6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ec75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ec77 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ec7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ec7d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec80 push edx */
  push32((uint32_t)(EDX));
  /* 1110ec81 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1110ec83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ec86 push eax */
  push32((uint32_t)(EAX));
  /* 1110ec87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ec89 call 0x11111700 */
  push32(0x1110ec8eu); f_11111700();
  /* 1110ec8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ec94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ec96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ec99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ec9c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ec9f push edx */
  push32((uint32_t)(EDX));
  /* 1110eca0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1110eca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110eca5 push eax */
  push32((uint32_t)(EAX));
  /* 1110eca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110eca8 call 0x11111700 */
  push32(0x1110ecadu); f_11111700();
  /* 1110ecad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ecb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ecb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ecb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ecb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ecbb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ecbe push edx */
  push32((uint32_t)(EDX));
  /* 1110ecbf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1110ecc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ecc4 push eax */
  push32((uint32_t)(EAX));
  /* 1110ecc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ecc7 call 0x11111700 */
  push32(0x1110ecccu); f_11111700();
  /* 1110eccc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eccf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ecd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ecd4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ecd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ecda add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ecdd push edx */
  push32((uint32_t)(EDX));
  /* 1110ecde push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1110ece0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ece3 push eax */
  push32((uint32_t)(EAX));
  /* 1110ece4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ece6 call 0x11111700 */
  push32(0x1110ecebu); f_11111700();
  /* 1110eceb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ecee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ecf1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ecf3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ecf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1110ecf9:;
  /* 1110ecf9 mov esp, ebp */
  ESP = (EBP);
  /* 1110ecfb pop ebp */
  EBP = (pop32());
  /* 1110ecfc ret  */
  ESPCHK(0x1110eaf0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1110ed00 (125 bytes, 49 insns) */
void f_1110ed00(void) {
  FTRACE(0x1110ed00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ed00 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ed01 mov ebp, esp */
  EBP = (ESP);
  /* 1110ed03 push ecx */
  push32((uint32_t)(ECX));
L_1110ed04:;
  /* 1110ed04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110ed0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110ed0c je 0x1110ed79 */
  if (C.zf) goto L_1110ed79;
  /* 1110ed0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110ed14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ed17 jl 0x1110ed3d */
  if ((C.sf!=C.of)) goto L_1110ed3d;
  /* 1110ed19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110ed1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ed22 jg 0x1110ed3d */
  if ((!C.zf&&C.sf==C.of)) goto L_1110ed3d;
  /* 1110ed24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110ed2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ed2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1110ed32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ed38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1110ed3b jmp 0x1110ed77 */
  goto L_1110ed77;
L_1110ed3d:;
  /* 1110ed3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110ed43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ed46 jne 0x1110ed6e */
  if (!C.zf) goto L_1110ed6e;
  /* 1110ed48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110ed4e:;
  /* 1110ed4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ed51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ed54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1110ed57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1110ed59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ed5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ed5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110ed62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110ed65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110ed68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ed6a jne 0x1110ed4e */
  if (!C.zf) goto L_1110ed4e;
  /* 1110ed6c jmp 0x1110ed77 */
  goto L_1110ed77;
L_1110ed6e:;
  /* 1110ed6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ed74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1110ed77:;
  /* 1110ed77 jmp 0x1110ed04 */
  goto L_1110ed04;
L_1110ed79:;
  /* 1110ed79 mov esp, ebp */
  ESP = (EBP);
  /* 1110ed7b pop ebp */
  EBP = (pop32());
  /* 1110ed7c ret  */
  ESPCHK(0x1110ed00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed80 @ 0x1110ed80 (147 bytes, 52 insns) */
void f_1110ed80(void) {
  FTRACE(0x1110ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ed81 mov ebp, esp */
  EBP = (ESP);
  /* 1110ed83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ed87 jne 0x1110ed8e */
  if (!C.zf) goto L_1110ed8e;
  /* 1110ed89 jmp 0x1110ee11 */
  goto L_1110ee11;
L_1110ed8e:;
  /* 1110ed8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed91 cmp dword ptr [eax + 0xc], 0x1112f7a8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1112f7a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ed98 je 0x1110ee11 */
  if (C.zf) goto L_1110ee11;
  /* 1110ed9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ed9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ed9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1110eda2 push edx */
  push32((uint32_t)(EDX));
  /* 1110eda3 call 0x11103fd0 */
  push32(0x1110eda8u); f_11103fd0();
  /* 1110eda8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110edab push 2 */
  push32((uint32_t)(0x2u));
  /* 1110edad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110edb0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1110edb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110edb4 call 0x11103fd0 */
  push32(0x1110edb9u); f_11103fd0();
  /* 1110edb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110edbc push 2 */
  push32((uint32_t)(0x2u));
  /* 1110edbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110edc1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1110edc4 push eax */
  push32((uint32_t)(EAX));
  /* 1110edc5 call 0x11103fd0 */
  push32(0x1110edcau); f_11103fd0();
  /* 1110edca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110edcd push 2 */
  push32((uint32_t)(0x2u));
  /* 1110edcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110edd2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1110edd5 push edx */
  push32((uint32_t)(EDX));
  /* 1110edd6 call 0x11103fd0 */
  push32(0x1110eddbu); f_11103fd0();
  /* 1110eddb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110edde push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ede0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ede3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1110ede6 push ecx */
  push32((uint32_t)(ECX));
  /* 1110ede7 call 0x11103fd0 */
  push32(0x1110edecu); f_11103fd0();
  /* 1110edec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110edef push 2 */
  push32((uint32_t)(0x2u));
  /* 1110edf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110edf4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1110edf7 push eax */
  push32((uint32_t)(EAX));
  /* 1110edf8 call 0x11103fd0 */
  push32(0x1110edfdu); f_11103fd0();
  /* 1110edfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ee00 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ee02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ee05 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1110ee08 push edx */
  push32((uint32_t)(EDX));
  /* 1110ee09 call 0x11103fd0 */
  push32(0x1110ee0eu); f_11103fd0();
  /* 1110ee0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110ee11:;
  /* 1110ee11 pop ebp */
  EBP = (pop32());
  /* 1110ee12 ret  */
  ESPCHK(0x1110ed80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee20 @ 0x1110ee20 (928 bytes, 284 insns) */
void f_1110ee20(void) {
  FTRACE(0x1110ee20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ee20 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ee21 mov ebp, esp */
  EBP = (ESP);
  /* 1110ee23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ee26 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1110ee2d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1110ee34 cmp dword ptr [0x1112f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ee3b je 0x1110f171 */
  if (C.zf) goto L_1110f171;
  /* 1110ee41 cmp dword ptr [0x1112f720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ee48 jne 0x1110ee70 */
  if (!C.zf) goto L_1110ee70;
  /* 1110ee4a push 0x1112f720 */
  push32((uint32_t)(0x1112f720u));
  /* 1110ee4f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1110ee54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ee56 mov ax, word ptr [0x1112f764] */
  AX = (r16((uint32_t)(0x1112f764)));
  /* 1110ee5c push eax */
  push32((uint32_t)(EAX));
  /* 1110ee5d push 0 */
  push32((uint32_t)(0x0u));
  /* 1110ee5f call 0x11111700 */
  push32(0x1110ee64u); f_11111700();
  /* 1110ee64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ee67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ee69 je 0x1110ee70 */
  if (C.zf) goto L_1110ee70;
  /* 1110ee6b jmp 0x1110f132 */
  goto L_1110f132;
L_1110ee70:;
  /* 1110ee70 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1110ee72 push 0x1112b10c */
  push32((uint32_t)(0x1112b10cu));
  /* 1110ee77 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ee79 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1110ee7e call 0x11103540 */
  push32(0x1110ee83u); f_11103540();
  /* 1110ee83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ee86 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1110ee89 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1110ee8b push 0x1112b10c */
  push32((uint32_t)(0x1112b10cu));
  /* 1110ee90 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110ee92 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1110ee97 call 0x11103540 */
  push32(0x1110ee9cu); f_11103540();
  /* 1110ee9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ee9f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1110eea2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1110eea4 push 0x1112b10c */
  push32((uint32_t)(0x1112b10cu));
  /* 1110eea9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110eeab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1110eeb0 call 0x11103540 */
  push32(0x1110eeb5u); f_11103540();
  /* 1110eeb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eeb8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1110eebb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1110eebd push 0x1112b10c */
  push32((uint32_t)(0x1112b10cu));
  /* 1110eec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110eec4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1110eec9 call 0x11103540 */
  push32(0x1110eeceu); f_11103540();
  /* 1110eece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110eed1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1110eed4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110eed8 je 0x1110eeec */
  if (C.zf) goto L_1110eeec;
  /* 1110eeda cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110eede je 0x1110eeec */
  if (C.zf) goto L_1110eeec;
  /* 1110eee0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110eee4 je 0x1110eeec */
  if (C.zf) goto L_1110eeec;
  /* 1110eee6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110eeea jne 0x1110eef1 */
  if (!C.zf) goto L_1110eef1;
L_1110eeec:;
  /* 1110eeec jmp 0x1110f132 */
  goto L_1110f132;
L_1110eef1:;
  /* 1110eef1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110eef4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1110eef7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1110eefe jmp 0x1110ef09 */
  goto L_1110ef09;
L_1110ef00:;
  /* 1110ef00 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110ef03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ef06 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1110ef09:;
  /* 1110ef09 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ef10 jge 0x1110ef25 */
  if ((C.sf==C.of)) goto L_1110ef25;
  /* 1110ef12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110ef15 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1110ef18 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1110ef1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110ef1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ef20 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1110ef23 jmp 0x1110ef00 */
  goto L_1110ef00;
L_1110ef25:;
  /* 1110ef25 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1110ef28 push eax */
  push32((uint32_t)(EAX));
  /* 1110ef29 mov ecx, dword ptr [0x1112f720] */
  ECX = (r32((uint32_t)(0x1112f720)));
  /* 1110ef2f push ecx */
  push32((uint32_t)(ECX));
  /* 1110ef30 call dword ptr [0x11132300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132300))), 0x1110ef36u);
  /* 1110ef36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ef38 jne 0x1110ef3f */
  if (!C.zf) goto L_1110ef3f;
  /* 1110ef3a jmp 0x1110f132 */
  goto L_1110f132;
L_1110ef3f:;
  /* 1110ef3f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ef43 jbe 0x1110ef4a */
  if ((C.cf||C.zf)) goto L_1110ef4a;
  /* 1110ef45 jmp 0x1110f132 */
  goto L_1110f132;
L_1110ef4a:;
  /* 1110ef4a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110ef4d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1110ef53 mov dword ptr [0x1112dea4], edx */
  w32((uint32_t)(0x1112dea4), (EDX));
  /* 1110ef59 cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ef60 jle 0x1110efb9 */
  if ((C.zf||C.sf!=C.of)) goto L_1110efb9;
  /* 1110ef62 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1110ef65 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1110ef68 jmp 0x1110ef73 */
  goto L_1110ef73;
L_1110ef6a:;
  /* 1110ef6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110ef6d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ef70 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1110ef73:;
  /* 1110ef73 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110ef76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110ef78 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110ef7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110ef7c je 0x1110efb9 */
  if (C.zf) goto L_1110efb9;
  /* 1110ef7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110ef81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110ef83 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1110ef86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110ef88 je 0x1110efb9 */
  if (C.zf) goto L_1110efb9;
  /* 1110ef8a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110ef8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110ef8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1110ef91 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1110ef94 jmp 0x1110ef9f */
  goto L_1110ef9f;
L_1110ef96:;
  /* 1110ef96 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110ef99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ef9c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1110ef9f:;
  /* 1110ef9f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110efa2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110efa4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1110efa7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110efaa jg 0x1110efb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110efb7;
  /* 1110efac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110efaf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110efb2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1110efb5 jmp 0x1110ef96 */
  goto L_1110ef96;
L_1110efb7:;
  /* 1110efb7 jmp 0x1110ef6a */
  goto L_1110ef6a;
L_1110efb9:;
  /* 1110efb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110efbb push 0 */
  push32((uint32_t)(0x0u));
  /* 1110efbd push 0 */
  push32((uint32_t)(0x0u));
  /* 1110efbf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110efc2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110efc5 push eax */
  push32((uint32_t)(EAX));
  /* 1110efc6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1110efcb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110efce push ecx */
  push32((uint32_t)(ECX));
  /* 1110efcf push 1 */
  push32((uint32_t)(0x1u));
  /* 1110efd1 call 0x1110b770 */
  push32(0x1110efd6u); f_1110b770();
  /* 1110efd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110efd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110efdb jne 0x1110efe2 */
  if (!C.zf) goto L_1110efe2;
  /* 1110efdd jmp 0x1110f132 */
  goto L_1110f132;
L_1110efe2:;
  /* 1110efe2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110efe5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1110efea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110efed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1110eff0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1110eff7 jmp 0x1110f002 */
  goto L_1110f002;
L_1110eff9:;
  /* 1110eff9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110effc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110efff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1110f002:;
  /* 1110f002 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f009 jge 0x1110f020 */
  if ((C.sf==C.of)) goto L_1110f020;
  /* 1110f00b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110f00e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1110f012 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1110f015 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110f018 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f01b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1110f01e jmp 0x1110eff9 */
  goto L_1110eff9;
L_1110f020:;
  /* 1110f020 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110f022 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110f024 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110f027 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f02a push edx */
  push32((uint32_t)(EDX));
  /* 1110f02b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1110f030 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110f033 push eax */
  push32((uint32_t)(EAX));
  /* 1110f034 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110f036 call 0x111119a0 */
  push32(0x1110f03bu); f_111119a0();
  /* 1110f03b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f03e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f040 jne 0x1110f047 */
  if (!C.zf) goto L_1110f047;
  /* 1110f042 jmp 0x1110f132 */
  goto L_1110f132;
L_1110f047:;
  /* 1110f047 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110f04a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1110f04f cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f056 jle 0x1110f0b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1110f0b3;
  /* 1110f058 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1110f05b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1110f05e jmp 0x1110f069 */
  goto L_1110f069;
L_1110f060:;
  /* 1110f060 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110f063 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f066 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1110f069:;
  /* 1110f069 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110f06c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110f06e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1110f070 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110f072 je 0x1110f0b3 */
  if (C.zf) goto L_1110f0b3;
  /* 1110f074 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110f077 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110f079 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1110f07c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110f07e je 0x1110f0b3 */
  if (C.zf) goto L_1110f0b3;
  /* 1110f080 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110f083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f085 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110f087 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1110f08a jmp 0x1110f095 */
  goto L_1110f095;
L_1110f08c:;
  /* 1110f08c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110f08f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f092 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1110f095:;
  /* 1110f095 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1110f098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f09a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1110f09d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f0a0 jg 0x1110f0b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110f0b1;
  /* 1110f0a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1110f0a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110f0a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1110f0af jmp 0x1110f08c */
  goto L_1110f08c;
L_1110f0b1:;
  /* 1110f0b1 jmp 0x1110f060 */
  goto L_1110f060;
L_1110f0b3:;
  /* 1110f0b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110f0b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f0b9 mov dword ptr [0x1112dc98], eax */
  w32((uint32_t)(0x1112dc98), (EAX));
  /* 1110f0be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110f0c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f0c4 mov dword ptr [0x1112dc9c], ecx */
  w32((uint32_t)(0x1112dc9c), (ECX));
  /* 1110f0ca cmp dword ptr [0x1112f750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f0d1 je 0x1110f0e4 */
  if (C.zf) goto L_1110f0e4;
  /* 1110f0d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f0d5 mov edx, dword ptr [0x1112f750] */
  EDX = (r32((uint32_t)(0x1112f750)));
  /* 1110f0db push edx */
  push32((uint32_t)(EDX));
  /* 1110f0dc call 0x11103fd0 */
  push32(0x1110f0e1u); f_11103fd0();
  /* 1110f0e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110f0e4:;
  /* 1110f0e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110f0e7 mov dword ptr [0x1112f750], eax */
  w32((uint32_t)(0x1112f750), (EAX));
  /* 1110f0ec cmp dword ptr [0x1112f754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f0f3 je 0x1110f106 */
  if (C.zf) goto L_1110f106;
  /* 1110f0f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f0f7 mov ecx, dword ptr [0x1112f754] */
  ECX = (r32((uint32_t)(0x1112f754)));
  /* 1110f0fd push ecx */
  push32((uint32_t)(ECX));
  /* 1110f0fe call 0x11103fd0 */
  push32(0x1110f103u); f_11103fd0();
  /* 1110f103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110f106:;
  /* 1110f106 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110f109 mov dword ptr [0x1112f754], edx */
  w32((uint32_t)(0x1112f754), (EDX));
  /* 1110f10f push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f111 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110f114 push eax */
  push32((uint32_t)(EAX));
  /* 1110f115 call 0x11103fd0 */
  push32(0x1110f11au); f_11103fd0();
  /* 1110f11a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f11d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f11f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110f122 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f123 call 0x11103fd0 */
  push32(0x1110f128u); f_11103fd0();
  /* 1110f128 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f12b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f12d jmp 0x1110f1bc */
  goto L_1110f1bc;
L_1110f132:;
  /* 1110f132 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f134 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1110f137 push edx */
  push32((uint32_t)(EDX));
  /* 1110f138 call 0x11103fd0 */
  push32(0x1110f13du); f_11103fd0();
  /* 1110f13d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f140 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f142 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1110f145 push eax */
  push32((uint32_t)(EAX));
  /* 1110f146 call 0x11103fd0 */
  push32(0x1110f14bu); f_11103fd0();
  /* 1110f14b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f14e push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f150 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1110f153 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f154 call 0x11103fd0 */
  push32(0x1110f159u); f_11103fd0();
  /* 1110f159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f15c push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f15e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1110f161 push edx */
  push32((uint32_t)(EDX));
  /* 1110f162 call 0x11103fd0 */
  push32(0x1110f167u); f_11103fd0();
  /* 1110f167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f16a mov eax, 1 */
  EAX = (0x1u);
  /* 1110f16f jmp 0x1110f1bc */
  goto L_1110f1bc;
L_1110f171:;
  /* 1110f171 mov dword ptr [0x1112dc98], 0x1112dca2 */
  w32((uint32_t)(0x1112dc98), (0x1112dca2u));
  /* 1110f17b mov dword ptr [0x1112dc9c], 0x1112dca2 */
  w32((uint32_t)(0x1112dc9c), (0x1112dca2u));
  /* 1110f185 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f187 mov eax, dword ptr [0x1112f750] */
  EAX = (r32((uint32_t)(0x1112f750)));
  /* 1110f18c push eax */
  push32((uint32_t)(EAX));
  /* 1110f18d call 0x11103fd0 */
  push32(0x1110f192u); f_11103fd0();
  /* 1110f192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f195 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110f197 mov ecx, dword ptr [0x1112f754] */
  ECX = (r32((uint32_t)(0x1112f754)));
  /* 1110f19d push ecx */
  push32((uint32_t)(ECX));
  /* 1110f19e call 0x11103fd0 */
  push32(0x1110f1a3u); f_11103fd0();
  /* 1110f1a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f1a6 mov dword ptr [0x1112f750], 0 */
  w32((uint32_t)(0x1112f750), (0x0u));
  /* 1110f1b0 mov dword ptr [0x1112f754], 0 */
  w32((uint32_t)(0x1112f754), (0x0u));
  /* 1110f1ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110f1bc:;
  /* 1110f1bc mov esp, ebp */
  ESP = (EBP);
  /* 1110f1be pop ebp */
  EBP = (pop32());
  /* 1110f1bf ret  */
  ESPCHK(0x1110ee20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1c0 @ 0x1110f1c0 (7 bytes, 5 insns) */
void f_1110f1c0(void) {
  FTRACE(0x1110f1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1110f1c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f1c5 pop ebp */
  EBP = (pop32());
  /* 1110f1c6 ret  */
  ESPCHK(0x1110f1c0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1110f1d0 (129 bytes, 56 insns) */
void f_1110f1d0(void) {
  FTRACE(0x1110f1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f1d0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1110f1d4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1110f1d8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1110f1de jne 0x1110f21c */
  if (!C.zf) goto L_1110f21c;
L_1110f1e0:;
  /* 1110f1e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110f1e2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f1e4 jne 0x1110f214 */
  if (!C.zf) goto L_1110f214;
  /* 1110f1e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f1e8 je 0x1110f210 */
  if (C.zf) goto L_1110f210;
  /* 1110f1ea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f1ed jne 0x1110f214 */
  if (!C.zf) goto L_1110f214;
  /* 1110f1ef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1110f1f1 je 0x1110f210 */
  if (C.zf) goto L_1110f210;
  /* 1110f1f3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1110f1f6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f1f9 jne 0x1110f214 */
  if (!C.zf) goto L_1110f214;
  /* 1110f1fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f1fd je 0x1110f210 */
  if (C.zf) goto L_1110f210;
  /* 1110f1ff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f202 jne 0x1110f214 */
  if (!C.zf) goto L_1110f214;
  /* 1110f204 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f207 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f20a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1110f20c jne 0x1110f1e0 */
  if (!C.zf) goto L_1110f1e0;
  /* 1110f20e mov edi, edi */
  EDI = (EDI);
L_1110f210:;
  /* 1110f210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f212 ret  */
  ESPCHK(0x1110f1d0u, _esp0);
  ESP += 4; return;
  /* 1110f213 nop  */
  /* nop */
L_1110f214:;
  /* 1110f214 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f216 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1110f218 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1110f219 ret  */
  ESPCHK(0x1110f1d0u, _esp0);
  ESP += 4; return;
  /* 1110f21a mov edi, edi */
  EDI = (EDI);
L_1110f21c:;
  /* 1110f21c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1110f222 je 0x1110f238 */
  if (C.zf) goto L_1110f238;
  /* 1110f224 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110f226 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1110f227 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f229 jne 0x1110f214 */
  if (!C.zf) goto L_1110f214;
  /* 1110f22b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1110f22c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f22e je 0x1110f210 */
  if (C.zf) goto L_1110f210;
  /* 1110f230 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1110f236 je 0x1110f1e0 */
  if (C.zf) goto L_1110f1e0;
L_1110f238:;
  /* 1110f238 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1110f23b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f23e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f240 jne 0x1110f214 */
  if (!C.zf) goto L_1110f214;
  /* 1110f242 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f244 je 0x1110f210 */
  if (C.zf) goto L_1110f210;
  /* 1110f246 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f249 jne 0x1110f214 */
  if (!C.zf) goto L_1110f214;
  /* 1110f24b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1110f24d je 0x1110f210 */
  if (C.zf) goto L_1110f210;
  /* 1110f24f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f252 jmp 0x1110f1e0 */
  goto L_1110f1e0;
}

/* FUN_1000f260 @ 0x1110f260 (62 bytes, 35 insns) */
void f_1110f260(void) {
  FTRACE(0x1110f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f260 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f261 mov ebp, esp */
  EBP = (ESP);
  /* 1110f263 push esi */
  push32((uint32_t)(ESI));
  /* 1110f264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f266 push eax */
  push32((uint32_t)(EAX));
  /* 1110f267 push eax */
  push32((uint32_t)(EAX));
  /* 1110f268 push eax */
  push32((uint32_t)(EAX));
  /* 1110f269 push eax */
  push32((uint32_t)(EAX));
  /* 1110f26a push eax */
  push32((uint32_t)(EAX));
  /* 1110f26b push eax */
  push32((uint32_t)(EAX));
  /* 1110f26c push eax */
  push32((uint32_t)(EAX));
  /* 1110f26d push eax */
  push32((uint32_t)(EAX));
  /* 1110f26e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110f271 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110f274:;
  /* 1110f274 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110f276 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f278 je 0x1110f281 */
  if (C.zf) goto L_1110f281;
  /* 1110f27a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1110f27b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1110f27b");
  /* 1110f27f jmp 0x1110f274 */
  goto L_1110f274;
L_1110f281:;
  /* 1110f281 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f284 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110f287 nop  */
  /* nop */
L_1110f288:;
  /* 1110f288 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1110f289 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110f28b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f28d je 0x1110f296 */
  if (C.zf) goto L_1110f296;
  /* 1110f28f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1110f290 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1110f290");
  /* 1110f294 jae 0x1110f288 */
  if (!C.cf) goto L_1110f288;
L_1110f296:;
  /* 1110f296 mov eax, ecx */
  EAX = (ECX);
  /* 1110f298 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f29b pop esi */
  ESI = (pop32());
  /* 1110f29c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110f29d ret  */
  ESPCHK(0x1110f260u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1110f2a0 (56 bytes, 31 insns) */
void f_1110f2a0(void) {
  FTRACE(0x1110f2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1110f2a3 push edi */
  push32((uint32_t)(EDI));
  /* 1110f2a4 push esi */
  push32((uint32_t)(ESI));
  /* 1110f2a5 push ebx */
  push32((uint32_t)(EBX));
  /* 1110f2a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110f2a9 jecxz 0x1110f2d1 */
  x86_unimpl("jecxz @ 0x1110f2a9");
  /* 1110f2ab mov ebx, ecx */
  EBX = (ECX);
  /* 1110f2ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f2b0 mov esi, edi */
  ESI = (EDI);
  /* 1110f2b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f2b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1110f2b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110f2b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f2ba mov edi, esi */
  EDI = (ESI);
  /* 1110f2bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1110f2bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1110f2c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1110f2c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110f2c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1110f2c9 ja 0x1110f2cf */
  if ((!C.cf&&!C.zf)) goto L_1110f2cf;
  /* 1110f2cb je 0x1110f2d1 */
  if (C.zf) goto L_1110f2d1;
  /* 1110f2cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1110f2ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1110f2cf:;
  /* 1110f2cf not ecx */
  ECX = (~(ECX));
L_1110f2d1:;
  /* 1110f2d1 mov eax, ecx */
  EAX = (ECX);
  /* 1110f2d3 pop ebx */
  EBX = (pop32());
  /* 1110f2d4 pop esi */
  ESI = (pop32());
  /* 1110f2d5 pop edi */
  EDI = (pop32());
  /* 1110f2d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110f2d7 ret  */
  ESPCHK(0x1110f2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x1110f2e0 (58 bytes, 32 insns) */
void f_1110f2e0(void) {
  FTRACE(0x1110f2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1110f2e3 push esi */
  push32((uint32_t)(ESI));
  /* 1110f2e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f2e6 push eax */
  push32((uint32_t)(EAX));
  /* 1110f2e7 push eax */
  push32((uint32_t)(EAX));
  /* 1110f2e8 push eax */
  push32((uint32_t)(EAX));
  /* 1110f2e9 push eax */
  push32((uint32_t)(EAX));
  /* 1110f2ea push eax */
  push32((uint32_t)(EAX));
  /* 1110f2eb push eax */
  push32((uint32_t)(EAX));
  /* 1110f2ec push eax */
  push32((uint32_t)(EAX));
  /* 1110f2ed push eax */
  push32((uint32_t)(EAX));
  /* 1110f2ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110f2f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1110f2f4:;
  /* 1110f2f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1110f2f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f2f8 je 0x1110f301 */
  if (C.zf) goto L_1110f301;
  /* 1110f2fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1110f2fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1110f2fb");
  /* 1110f2ff jmp 0x1110f2f4 */
  goto L_1110f2f4;
L_1110f301:;
  /* 1110f301 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1110f304:;
  /* 1110f304 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1110f306 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1110f308 je 0x1110f314 */
  if (C.zf) goto L_1110f314;
  /* 1110f30a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1110f30b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1110f30b");
  /* 1110f30f jae 0x1110f304 */
  if (!C.cf) goto L_1110f304;
  /* 1110f311 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1110f314:;
  /* 1110f314 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f317 pop esi */
  ESI = (pop32());
  /* 1110f318 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1110f319 ret  */
  ESPCHK(0x1110f2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f320 @ 0x1110f320 (512 bytes, 147 insns) */
void f_1110f320(void) {
  FTRACE(0x1110f320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f320 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f321 mov ebp, esp */
  EBP = (ESP);
  /* 1110f323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f326 cmp dword ptr [0x1112f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f32d jne 0x1110f352 */
  if (!C.zf) goto L_1110f352;
  /* 1110f32f call 0x1110fdf0 */
  push32(0x1110f334u); f_1110fdf0();
  /* 1110f334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f336 je 0x1110f342 */
  if (C.zf) goto L_1110f342;
  /* 1110f338 mov eax, dword ptr [0x111322c4] */
  EAX = (r32((uint32_t)(0x111322c4)));
  /* 1110f33d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110f340 jmp 0x1110f349 */
  goto L_1110f349;
L_1110f342:;
  /* 1110f342 mov dword ptr [ebp - 8], 0x1110fe40 */
  w32((uint32_t)(EBP + -0x8), (0x1110fe40u));
L_1110f349:;
  /* 1110f349 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110f34c mov dword ptr [0x1112f79c], ecx */
  w32((uint32_t)(0x1112f79c), (ECX));
L_1110f352:;
  /* 1110f352 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f356 jne 0x1110f362 */
  if (!C.zf) goto L_1110f362;
  /* 1110f358 call 0x1110fc40 */
  push32(0x1110f35du); f_1110fc40();
  /* 1110f35d jmp 0x1110f42e */
  goto L_1110f42e;
L_1110f362:;
  /* 1110f362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f365 mov dword ptr [0x1112f78c], edx */
  w32((uint32_t)(0x1112f78c), (EDX));
  /* 1110f36b cmp dword ptr [0x1112f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f372 je 0x1110f394 */
  if (C.zf) goto L_1110f394;
  /* 1110f374 mov eax, dword ptr [0x1112f78c] */
  EAX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f379 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110f37c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110f37e je 0x1110f394 */
  if (C.zf) goto L_1110f394;
  /* 1110f380 push 0x1112f78c */
  push32((uint32_t)(0x1112f78cu));
  /* 1110f385 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1110f387 push 0x1112ea90 */
  push32((uint32_t)(0x1112ea90u));
  /* 1110f38c call 0x1110f520 */
  push32(0x1110f391u); f_1110f520();
  /* 1110f391 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110f394:;
  /* 1110f394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f397 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f39a mov dword ptr [0x1112f790], edx */
  w32((uint32_t)(0x1112f790), (EDX));
  /* 1110f3a0 cmp dword ptr [0x1112f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f3a7 je 0x1110f3c9 */
  if (C.zf) goto L_1110f3c9;
  /* 1110f3a9 mov eax, dword ptr [0x1112f790] */
  EAX = (r32((uint32_t)(0x1112f790)));
  /* 1110f3ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110f3b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110f3b3 je 0x1110f3c9 */
  if (C.zf) goto L_1110f3c9;
  /* 1110f3b5 push 0x1112f790 */
  push32((uint32_t)(0x1112f790u));
  /* 1110f3ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1110f3bc push 0x1112e9d8 */
  push32((uint32_t)(0x1112e9d8u));
  /* 1110f3c1 call 0x1110f520 */
  push32(0x1110f3c6u); f_1110f520();
  /* 1110f3c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110f3c9:;
  /* 1110f3c9 mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
  /* 1110f3d3 cmp dword ptr [0x1112f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f3da je 0x1110f40d */
  if (C.zf) goto L_1110f40d;
  /* 1110f3dc mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f3e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110f3e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f3e7 je 0x1110f40d */
  if (C.zf) goto L_1110f40d;
  /* 1110f3e9 cmp dword ptr [0x1112f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f3f0 je 0x1110f406 */
  if (C.zf) goto L_1110f406;
  /* 1110f3f2 mov ecx, dword ptr [0x1112f790] */
  ECX = (r32((uint32_t)(0x1112f790)));
  /* 1110f3f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1110f3fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110f3fd je 0x1110f406 */
  if (C.zf) goto L_1110f406;
  /* 1110f3ff call 0x1110f5b0 */
  push32(0x1110f404u); f_1110f5b0();
  /* 1110f404 jmp 0x1110f40b */
  goto L_1110f40b;
L_1110f406:;
  /* 1110f406 call 0x1110f9a0 */
  push32(0x1110f40bu); f_1110f9a0();
L_1110f40b:;
  /* 1110f40b jmp 0x1110f42e */
  goto L_1110f42e;
L_1110f40d:;
  /* 1110f40d cmp dword ptr [0x1112f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f414 je 0x1110f429 */
  if (C.zf) goto L_1110f429;
  /* 1110f416 mov eax, dword ptr [0x1112f790] */
  EAX = (r32((uint32_t)(0x1112f790)));
  /* 1110f41b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110f41e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110f420 je 0x1110f429 */
  if (C.zf) goto L_1110f429;
  /* 1110f422 call 0x1110fb40 */
  push32(0x1110f427u); f_1110fb40();
  /* 1110f427 jmp 0x1110f42e */
  goto L_1110f42e;
L_1110f429:;
  /* 1110f429 call 0x1110fc40 */
  push32(0x1110f42eu); f_1110fc40();
L_1110f42e:;
  /* 1110f42e cmp dword ptr [0x1112f794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f435 jne 0x1110f43e */
  if (!C.zf) goto L_1110f43e;
  /* 1110f437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f439 jmp 0x1110f51c */
  goto L_1110f51c;
L_1110f43e:;
  /* 1110f43e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f441 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f447 push edx */
  push32((uint32_t)(EDX));
  /* 1110f448 call 0x1110fc70 */
  push32(0x1110f44du); f_1110fc70();
  /* 1110f44d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f450 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110f453 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f457 je 0x1110f46c */
  if (C.zf) goto L_1110f46c;
  /* 1110f459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f45c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110f461 push eax */
  push32((uint32_t)(EAX));
  /* 1110f462 call dword ptr [0x111322c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c8))), 0x1110f468u);
  /* 1110f468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f46a jne 0x1110f473 */
  if (!C.zf) goto L_1110f473;
L_1110f46c:;
  /* 1110f46c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f46e jmp 0x1110f51c */
  goto L_1110f51c;
L_1110f473:;
  /* 1110f473 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110f475 mov ecx, dword ptr [0x1112f77c] */
  ECX = (r32((uint32_t)(0x1112f77c)));
  /* 1110f47b push ecx */
  push32((uint32_t)(ECX));
  /* 1110f47c call dword ptr [0x111322cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322cc))), 0x1110f482u);
  /* 1110f482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f484 jne 0x1110f48d */
  if (!C.zf) goto L_1110f48d;
  /* 1110f486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f488 jmp 0x1110f51c */
  goto L_1110f51c;
L_1110f48d:;
  /* 1110f48d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f491 je 0x1110f4b8 */
  if (C.zf) goto L_1110f4b8;
  /* 1110f493 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110f496 mov ax, word ptr [0x1112f77c] */
  AX = (r16((uint32_t)(0x1112f77c)));
  /* 1110f49c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1110f49f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110f4a2 mov dx, word ptr [0x1112f798] */
  DX = (r16((uint32_t)(0x1112f798)));
  /* 1110f4a9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1110f4ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110f4b0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1110f4b4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1110f4b8:;
  /* 1110f4b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f4bc je 0x1110f517 */
  if (C.zf) goto L_1110f517;
  /* 1110f4be push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1110f4c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110f4c3 push edx */
  push32((uint32_t)(EDX));
  /* 1110f4c4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1110f4c9 mov eax, dword ptr [0x1112f77c] */
  EAX = (r32((uint32_t)(0x1112f77c)));
  /* 1110f4ce push eax */
  push32((uint32_t)(EAX));
  /* 1110f4cf call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110f4d5u);
  /* 1110f4d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f4d7 jne 0x1110f4dd */
  if (!C.zf) goto L_1110f4dd;
  /* 1110f4d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f4db jmp 0x1110f51c */
  goto L_1110f51c;
L_1110f4dd:;
  /* 1110f4dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1110f4df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110f4e2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f4e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f4e6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1110f4eb mov edx, dword ptr [0x1112f798] */
  EDX = (r32((uint32_t)(0x1112f798)));
  /* 1110f4f1 push edx */
  push32((uint32_t)(EDX));
  /* 1110f4f2 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110f4f8u);
  /* 1110f4f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f4fa jne 0x1110f500 */
  if (!C.zf) goto L_1110f500;
  /* 1110f4fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110f4fe jmp 0x1110f51c */
  goto L_1110f51c;
L_1110f500:;
  /* 1110f500 push 0xa */
  push32((uint32_t)(0xau));
  /* 1110f502 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110f505 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f50a push eax */
  push32((uint32_t)(EAX));
  /* 1110f50b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f50e push ecx */
  push32((uint32_t)(ECX));
  /* 1110f50f call 0x11106080 */
  push32(0x1110f514u); f_11106080();
  /* 1110f514 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110f517:;
  /* 1110f517 mov eax, 1 */
  EAX = (0x1u);
L_1110f51c:;
  /* 1110f51c mov esp, ebp */
  ESP = (EBP);
  /* 1110f51e pop ebp */
  EBP = (pop32());
  /* 1110f51f ret  */
  ESPCHK(0x1110f320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x1110f520 (130 bytes, 47 insns) */
void f_1110f520(void) {
  FTRACE(0x1110f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f520 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f521 mov ebp, esp */
  EBP = (ESP);
  /* 1110f523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f526 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1110f52d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1110f534:;
  /* 1110f534 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110f537 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f53a jg 0x1110f59e */
  if ((!C.zf&&C.sf==C.of)) goto L_1110f59e;
  /* 1110f53c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f540 je 0x1110f59e */
  if (C.zf) goto L_1110f59e;
  /* 1110f542 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110f545 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f548 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110f549 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f54b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1110f54d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110f550 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f553 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f556 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1110f559 push eax */
  push32((uint32_t)(EAX));
  /* 1110f55a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110f55d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110f55f push edx */
  push32((uint32_t)(EDX));
  /* 1110f560 call 0x11111c10 */
  push32(0x1110f565u); f_11111c10();
  /* 1110f565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f568 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110f56b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f56f jne 0x1110f582 */
  if (!C.zf) goto L_1110f582;
  /* 1110f571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f574 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f577 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1110f57b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110f57e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1110f580 jmp 0x1110f59c */
  goto L_1110f59c;
L_1110f582:;
  /* 1110f582 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f586 jge 0x1110f593 */
  if ((C.sf==C.of)) goto L_1110f593;
  /* 1110f588 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f58b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f58e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1110f591 jmp 0x1110f59c */
  goto L_1110f59c;
L_1110f593:;
  /* 1110f593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f596 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f599 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1110f59c:;
  /* 1110f59c jmp 0x1110f534 */
  goto L_1110f534;
L_1110f59e:;
  /* 1110f59e mov esp, ebp */
  ESP = (EBP);
  /* 1110f5a0 pop ebp */
  EBP = (pop32());
  /* 1110f5a1 ret  */
  ESPCHK(0x1110f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x1110f5b0 (186 bytes, 50 insns) */
void f_1110f5b0(void) {
  FTRACE(0x1110f5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1110f5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f5b4 mov eax, dword ptr [0x1112f78c] */
  EAX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f5b9 push eax */
  push32((uint32_t)(EAX));
  /* 1110f5ba call 0x11106370 */
  push32(0x1110f5bfu); f_11106370();
  /* 1110f5bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f5c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110f5c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f5c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1110f5ca mov dword ptr [0x1112f788], ecx */
  w32((uint32_t)(0x1112f788), (ECX));
  /* 1110f5d0 mov edx, dword ptr [0x1112f790] */
  EDX = (r32((uint32_t)(0x1112f790)));
  /* 1110f5d6 push edx */
  push32((uint32_t)(EDX));
  /* 1110f5d7 call 0x11106370 */
  push32(0x1110f5dcu); f_11106370();
  /* 1110f5dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f5df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110f5e1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f5e4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1110f5e7 mov dword ptr [0x1112f780], ecx */
  w32((uint32_t)(0x1112f780), (ECX));
  /* 1110f5ed mov dword ptr [0x1112f77c], 0 */
  w32((uint32_t)(0x1112f77c), (0x0u));
  /* 1110f5f7 cmp dword ptr [0x1112f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f5fe je 0x1110f609 */
  if (C.zf) goto L_1110f609;
  /* 1110f600 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1110f607 jmp 0x1110f61b */
  goto L_1110f61b;
L_1110f609:;
  /* 1110f609 mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f60f push edx */
  push32((uint32_t)(EDX));
  /* 1110f610 call 0x11110050 */
  push32(0x1110f615u); f_11110050();
  /* 1110f615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f618 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110f61b:;
  /* 1110f61b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f61e mov dword ptr [0x1112f784], eax */
  w32((uint32_t)(0x1112f784), (EAX));
  /* 1110f623 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110f625 push 0x1110f670 */
  push32((uint32_t)(0x1110f670u));
  /* 1110f62a call dword ptr [0x111322c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c0))), 0x1110f630u);
  /* 1110f630 mov ecx, dword ptr [0x1112f794] */
  ECX = (r32((uint32_t)(0x1112f794)));
  /* 1110f636 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1110f63c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110f63e je 0x1110f65c */
  if (C.zf) goto L_1110f65c;
  /* 1110f640 mov edx, dword ptr [0x1112f794] */
  EDX = (r32((uint32_t)(0x1112f794)));
  /* 1110f646 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1110f64c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110f64e je 0x1110f65c */
  if (C.zf) goto L_1110f65c;
  /* 1110f650 mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110f655 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1110f658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f65a jne 0x1110f666 */
  if (!C.zf) goto L_1110f666;
L_1110f65c:;
  /* 1110f65c mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
L_1110f666:;
  /* 1110f666 mov esp, ebp */
  ESP = (EBP);
  /* 1110f668 pop ebp */
  EBP = (pop32());
  /* 1110f669 ret  */
  ESPCHK(0x1110f5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x1110f670 (804 bytes, 220 insns) */
void f_1110f670(void) {
  FTRACE(0x1110f670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f670 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f671 mov ebp, esp */
  EBP = (ESP);
  /* 1110f673 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110f679 push eax */
  push32((uint32_t)(EAX));
  /* 1110f67a call 0x1110ffd0 */
  push32(0x1110f67fu); f_1110ffd0();
  /* 1110f67f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f682 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1110f685 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1110f687 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1110f68a push ecx */
  push32((uint32_t)(ECX));
  /* 1110f68b mov edx, dword ptr [0x1112f780] */
  EDX = (r32((uint32_t)(0x1112f780)));
  /* 1110f691 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110f693 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f695 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1110f69b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f6a1 push edx */
  push32((uint32_t)(EDX));
  /* 1110f6a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f6a5 push eax */
  push32((uint32_t)(EAX));
  /* 1110f6a6 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110f6acu);
  /* 1110f6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f6ae jne 0x1110f6c4 */
  if (!C.zf) goto L_1110f6c4;
  /* 1110f6b0 mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
  /* 1110f6ba mov eax, 1 */
  EAX = (0x1u);
  /* 1110f6bf jmp 0x1110f98e */
  goto L_1110f98e;
L_1110f6c4:;
  /* 1110f6c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1110f6c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f6c8 mov edx, dword ptr [0x1112f790] */
  EDX = (r32((uint32_t)(0x1112f790)));
  /* 1110f6ce push edx */
  push32((uint32_t)(EDX));
  /* 1110f6cf call 0x11111c10 */
  push32(0x1110f6d4u); f_11111c10();
  /* 1110f6d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f6d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f6d9 jne 0x1110f7ff */
  if (!C.zf) goto L_1110f7ff;
  /* 1110f6df push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1110f6e1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1110f6e4 push eax */
  push32((uint32_t)(EAX));
  /* 1110f6e5 mov ecx, dword ptr [0x1112f788] */
  ECX = (r32((uint32_t)(0x1112f788)));
  /* 1110f6eb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110f6ed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f6ef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1110f6f5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f6fb push ecx */
  push32((uint32_t)(ECX));
  /* 1110f6fc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f6ff push edx */
  push32((uint32_t)(EDX));
  /* 1110f700 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110f706u);
  /* 1110f706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f708 jne 0x1110f71e */
  if (!C.zf) goto L_1110f71e;
  /* 1110f70a mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
  /* 1110f714 mov eax, 1 */
  EAX = (0x1u);
  /* 1110f719 jmp 0x1110f98e */
  goto L_1110f98e;
L_1110f71e:;
  /* 1110f71e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1110f721 push eax */
  push32((uint32_t)(EAX));
  /* 1110f722 mov ecx, dword ptr [0x1112f78c] */
  ECX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f728 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f729 call 0x11111c10 */
  push32(0x1110f72eu); f_11111c10();
  /* 1110f72e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f733 jne 0x1110f760 */
  if (!C.zf) goto L_1110f760;
  /* 1110f735 mov edx, dword ptr [0x1112f794] */
  EDX = (r32((uint32_t)(0x1112f794)));
  /* 1110f73b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1110f741 mov dword ptr [0x1112f794], edx */
  w32((uint32_t)(0x1112f794), (EDX));
  /* 1110f747 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f74a mov dword ptr [0x1112f798], eax */
  w32((uint32_t)(0x1112f798), (EAX));
  /* 1110f74f mov ecx, dword ptr [0x1112f798] */
  ECX = (r32((uint32_t)(0x1112f798)));
  /* 1110f755 mov dword ptr [0x1112f77c], ecx */
  w32((uint32_t)(0x1112f77c), (ECX));
  /* 1110f75b jmp 0x1110f7ff */
  goto L_1110f7ff;
L_1110f760:;
  /* 1110f760 mov edx, dword ptr [0x1112f794] */
  EDX = (r32((uint32_t)(0x1112f794)));
  /* 1110f766 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1110f769 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110f76b jne 0x1110f7ff */
  if (!C.zf) goto L_1110f7ff;
  /* 1110f771 cmp dword ptr [0x1112f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f778 je 0x1110f7cd */
  if (C.zf) goto L_1110f7cd;
  /* 1110f77a mov eax, dword ptr [0x1112f784] */
  EAX = (r32((uint32_t)(0x1112f784)));
  /* 1110f77f push eax */
  push32((uint32_t)(EAX));
  /* 1110f780 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1110f783 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f784 mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f78a push edx */
  push32((uint32_t)(EDX));
  /* 1110f78b call 0x11111ce0 */
  push32(0x1110f790u); f_11111ce0();
  /* 1110f790 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f795 jne 0x1110f7cd */
  if (!C.zf) goto L_1110f7cd;
  /* 1110f797 mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110f79c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1110f79e mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
  /* 1110f7a3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f7a6 mov dword ptr [0x1112f798], ecx */
  w32((uint32_t)(0x1112f798), (ECX));
  /* 1110f7ac mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f7b2 push edx */
  push32((uint32_t)(EDX));
  /* 1110f7b3 call 0x11106370 */
  push32(0x1110f7b8u); f_11106370();
  /* 1110f7b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f7bb cmp eax, dword ptr [0x1112f784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112f784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f7c1 jne 0x1110f7cb */
  if (!C.zf) goto L_1110f7cb;
  /* 1110f7c3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f7c6 mov dword ptr [0x1112f77c], eax */
  w32((uint32_t)(0x1112f77c), (EAX));
L_1110f7cb:;
  /* 1110f7cb jmp 0x1110f7ff */
  goto L_1110f7ff;
L_1110f7cd:;
  /* 1110f7cd mov ecx, dword ptr [0x1112f794] */
  ECX = (r32((uint32_t)(0x1112f794)));
  /* 1110f7d3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110f7d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110f7d8 jne 0x1110f7ff */
  if (!C.zf) goto L_1110f7ff;
  /* 1110f7da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f7dd push edx */
  push32((uint32_t)(EDX));
  /* 1110f7de call 0x1110fd10 */
  push32(0x1110f7e3u); f_1110fd10();
  /* 1110f7e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f7e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f7e8 je 0x1110f7ff */
  if (C.zf) goto L_1110f7ff;
  /* 1110f7ea mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110f7ef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1110f7f1 mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
  /* 1110f7f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f7f9 mov dword ptr [0x1112f798], ecx */
  w32((uint32_t)(0x1112f798), (ECX));
L_1110f7ff:;
  /* 1110f7ff mov edx, dword ptr [0x1112f794] */
  EDX = (r32((uint32_t)(0x1112f794)));
  /* 1110f805 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1110f80b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f811 je 0x1110f981 */
  if (C.zf) goto L_1110f981;
  /* 1110f817 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1110f819 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1110f81c push eax */
  push32((uint32_t)(EAX));
  /* 1110f81d mov ecx, dword ptr [0x1112f788] */
  ECX = (r32((uint32_t)(0x1112f788)));
  /* 1110f823 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110f825 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f827 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1110f82d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f833 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f834 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f837 push edx */
  push32((uint32_t)(EDX));
  /* 1110f838 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110f83eu);
  /* 1110f83e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f840 jne 0x1110f856 */
  if (!C.zf) goto L_1110f856;
  /* 1110f842 mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
  /* 1110f84c mov eax, 1 */
  EAX = (0x1u);
  /* 1110f851 jmp 0x1110f98e */
  goto L_1110f98e;
L_1110f856:;
  /* 1110f856 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1110f859 push eax */
  push32((uint32_t)(EAX));
  /* 1110f85a mov ecx, dword ptr [0x1112f78c] */
  ECX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f860 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f861 call 0x11111c10 */
  push32(0x1110f866u); f_11111c10();
  /* 1110f866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f86b jne 0x1110f920 */
  if (!C.zf) goto L_1110f920;
  /* 1110f871 mov edx, dword ptr [0x1112f794] */
  EDX = (r32((uint32_t)(0x1112f794)));
  /* 1110f877 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1110f87a mov dword ptr [0x1112f794], edx */
  w32((uint32_t)(0x1112f794), (EDX));
  /* 1110f880 cmp dword ptr [0x1112f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f887 je 0x1110f8aa */
  if (C.zf) goto L_1110f8aa;
  /* 1110f889 mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110f88e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1110f891 mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
  /* 1110f896 cmp dword ptr [0x1112f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f89d jne 0x1110f8a8 */
  if (!C.zf) goto L_1110f8a8;
  /* 1110f89f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f8a2 mov dword ptr [0x1112f77c], ecx */
  w32((uint32_t)(0x1112f77c), (ECX));
L_1110f8a8:;
  /* 1110f8a8 jmp 0x1110f91e */
  goto L_1110f91e;
L_1110f8aa:;
  /* 1110f8aa cmp dword ptr [0x1112f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f8b1 je 0x1110f8ff */
  if (C.zf) goto L_1110f8ff;
  /* 1110f8b3 mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f8b9 push edx */
  push32((uint32_t)(EDX));
  /* 1110f8ba call 0x11106370 */
  push32(0x1110f8bfu); f_11106370();
  /* 1110f8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f8c2 cmp eax, dword ptr [0x1112f784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112f784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f8c8 jne 0x1110f8ff */
  if (!C.zf) goto L_1110f8ff;
  /* 1110f8ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1110f8cc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f8cf push eax */
  push32((uint32_t)(EAX));
  /* 1110f8d0 call 0x1110fd60 */
  push32(0x1110f8d5u); f_1110fd60();
  /* 1110f8d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f8d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f8da je 0x1110f8fd */
  if (C.zf) goto L_1110f8fd;
  /* 1110f8dc mov ecx, dword ptr [0x1112f794] */
  ECX = (r32((uint32_t)(0x1112f794)));
  /* 1110f8e2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1110f8e5 mov dword ptr [0x1112f794], ecx */
  w32((uint32_t)(0x1112f794), (ECX));
  /* 1110f8eb cmp dword ptr [0x1112f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f8f2 jne 0x1110f8fd */
  if (!C.zf) goto L_1110f8fd;
  /* 1110f8f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f8f7 mov dword ptr [0x1112f77c], edx */
  w32((uint32_t)(0x1112f77c), (EDX));
L_1110f8fd:;
  /* 1110f8fd jmp 0x1110f91e */
  goto L_1110f91e;
L_1110f8ff:;
  /* 1110f8ff mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110f904 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1110f907 mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
  /* 1110f90c cmp dword ptr [0x1112f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f913 jne 0x1110f91e */
  if (!C.zf) goto L_1110f91e;
  /* 1110f915 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f918 mov dword ptr [0x1112f77c], ecx */
  w32((uint32_t)(0x1112f77c), (ECX));
L_1110f91e:;
  /* 1110f91e jmp 0x1110f981 */
  goto L_1110f981;
L_1110f920:;
  /* 1110f920 cmp dword ptr [0x1112f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f927 jne 0x1110f981 */
  if (!C.zf) goto L_1110f981;
  /* 1110f929 cmp dword ptr [0x1112f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f930 je 0x1110f981 */
  if (C.zf) goto L_1110f981;
  /* 1110f932 mov edx, dword ptr [0x1112f784] */
  EDX = (r32((uint32_t)(0x1112f784)));
  /* 1110f938 push edx */
  push32((uint32_t)(EDX));
  /* 1110f939 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1110f93c push eax */
  push32((uint32_t)(EAX));
  /* 1110f93d mov ecx, dword ptr [0x1112f78c] */
  ECX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f943 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f944 call 0x11111ce0 */
  push32(0x1110f949u); f_11111ce0();
  /* 1110f949 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f94c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f94e jne 0x1110f981 */
  if (!C.zf) goto L_1110f981;
  /* 1110f950 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110f952 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f955 push edx */
  push32((uint32_t)(EDX));
  /* 1110f956 call 0x1110fd60 */
  push32(0x1110f95bu); f_1110fd60();
  /* 1110f95b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f95e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110f960 je 0x1110f981 */
  if (C.zf) goto L_1110f981;
  /* 1110f962 mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110f967 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1110f96a mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
  /* 1110f96f cmp dword ptr [0x1112f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f976 jne 0x1110f981 */
  if (!C.zf) goto L_1110f981;
  /* 1110f978 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110f97b mov dword ptr [0x1112f77c], ecx */
  w32((uint32_t)(0x1112f77c), (ECX));
L_1110f981:;
  /* 1110f981 mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110f986 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1110f989 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110f98b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110f98d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1110f98e:;
  /* 1110f98e mov esp, ebp */
  ESP = (EBP);
  /* 1110f990 pop ebp */
  EBP = (pop32());
  /* 1110f991 ret 4 */
  ESPCHK(0x1110f670u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f9a0 @ 0x1110f9a0 (116 bytes, 33 insns) */
void f_1110f9a0(void) {
  FTRACE(0x1110f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1110f9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1110f9a4 mov eax, dword ptr [0x1112f78c] */
  EAX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f9a9 push eax */
  push32((uint32_t)(EAX));
  /* 1110f9aa call 0x11106370 */
  push32(0x1110f9afu); f_11106370();
  /* 1110f9af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f9b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110f9b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f9b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1110f9ba mov dword ptr [0x1112f788], ecx */
  w32((uint32_t)(0x1112f788), (ECX));
  /* 1110f9c0 cmp dword ptr [0x1112f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110f9c7 je 0x1110f9d2 */
  if (C.zf) goto L_1110f9d2;
  /* 1110f9c9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1110f9d0 jmp 0x1110f9e4 */
  goto L_1110f9e4;
L_1110f9d2:;
  /* 1110f9d2 mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110f9d8 push edx */
  push32((uint32_t)(EDX));
  /* 1110f9d9 call 0x11110050 */
  push32(0x1110f9deu); f_11110050();
  /* 1110f9de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110f9e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110f9e4:;
  /* 1110f9e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110f9e7 mov dword ptr [0x1112f784], eax */
  w32((uint32_t)(0x1112f784), (EAX));
  /* 1110f9ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1110f9ee push 0x1110fa20 */
  push32((uint32_t)(0x1110fa20u));
  /* 1110f9f3 call dword ptr [0x111322c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c0))), 0x1110f9f9u);
  /* 1110f9f9 mov ecx, dword ptr [0x1112f794] */
  ECX = (r32((uint32_t)(0x1112f794)));
  /* 1110f9ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1110fa02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110fa04 jne 0x1110fa10 */
  if (!C.zf) goto L_1110fa10;
  /* 1110fa06 mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
L_1110fa10:;
  /* 1110fa10 mov esp, ebp */
  ESP = (EBP);
  /* 1110fa12 pop ebp */
  EBP = (pop32());
  /* 1110fa13 ret  */
  ESPCHK(0x1110f9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa20 @ 0x1110fa20 (287 bytes, 86 insns) */
void f_1110fa20(void) {
  FTRACE(0x1110fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fa21 mov ebp, esp */
  EBP = (ESP);
  /* 1110fa23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fa26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fa29 push eax */
  push32((uint32_t)(EAX));
  /* 1110fa2a call 0x1110ffd0 */
  push32(0x1110fa2fu); f_1110ffd0();
  /* 1110fa2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fa32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1110fa35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1110fa37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1110fa3a push ecx */
  push32((uint32_t)(ECX));
  /* 1110fa3b mov edx, dword ptr [0x1112f788] */
  EDX = (r32((uint32_t)(0x1112f788)));
  /* 1110fa41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110fa43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fa45 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1110fa4b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fa51 push edx */
  push32((uint32_t)(EDX));
  /* 1110fa52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110fa55 push eax */
  push32((uint32_t)(EAX));
  /* 1110fa56 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110fa5cu);
  /* 1110fa5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fa5e jne 0x1110fa74 */
  if (!C.zf) goto L_1110fa74;
  /* 1110fa60 mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
  /* 1110fa6a mov eax, 1 */
  EAX = (0x1u);
  /* 1110fa6f jmp 0x1110fb39 */
  goto L_1110fb39;
L_1110fa74:;
  /* 1110fa74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1110fa77 push ecx */
  push32((uint32_t)(ECX));
  /* 1110fa78 mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110fa7e push edx */
  push32((uint32_t)(EDX));
  /* 1110fa7f call 0x11111c10 */
  push32(0x1110fa84u); f_11111c10();
  /* 1110fa84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fa87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fa89 jne 0x1110fac9 */
  if (!C.zf) goto L_1110fac9;
  /* 1110fa8b cmp dword ptr [0x1112f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fa92 jne 0x1110faa6 */
  if (!C.zf) goto L_1110faa6;
  /* 1110fa94 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110fa96 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110fa99 push eax */
  push32((uint32_t)(EAX));
  /* 1110fa9a call 0x1110fd60 */
  push32(0x1110fa9fu); f_1110fd60();
  /* 1110fa9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110faa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110faa4 je 0x1110fac7 */
  if (C.zf) goto L_1110fac7;
L_1110faa6:;
  /* 1110faa6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110faa9 mov dword ptr [0x1112f798], ecx */
  w32((uint32_t)(0x1112f798), (ECX));
  /* 1110faaf mov edx, dword ptr [0x1112f798] */
  EDX = (r32((uint32_t)(0x1112f798)));
  /* 1110fab5 mov dword ptr [0x1112f77c], edx */
  w32((uint32_t)(0x1112f77c), (EDX));
  /* 1110fabb mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110fac0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1110fac2 mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
L_1110fac7:;
  /* 1110fac7 jmp 0x1110fb2c */
  goto L_1110fb2c;
L_1110fac9:;
  /* 1110fac9 cmp dword ptr [0x1112f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fad0 jne 0x1110fb2c */
  if (!C.zf) goto L_1110fb2c;
  /* 1110fad2 cmp dword ptr [0x1112f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fad9 je 0x1110fb2c */
  if (C.zf) goto L_1110fb2c;
  /* 1110fadb mov ecx, dword ptr [0x1112f784] */
  ECX = (r32((uint32_t)(0x1112f784)));
  /* 1110fae1 push ecx */
  push32((uint32_t)(ECX));
  /* 1110fae2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1110fae5 push edx */
  push32((uint32_t)(EDX));
  /* 1110fae6 mov eax, dword ptr [0x1112f78c] */
  EAX = (r32((uint32_t)(0x1112f78c)));
  /* 1110faeb push eax */
  push32((uint32_t)(EAX));
  /* 1110faec call 0x11111ce0 */
  push32(0x1110faf1u); f_11111ce0();
  /* 1110faf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110faf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110faf6 jne 0x1110fb2c */
  if (!C.zf) goto L_1110fb2c;
  /* 1110faf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110fafa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110fafd push ecx */
  push32((uint32_t)(ECX));
  /* 1110fafe call 0x1110fd60 */
  push32(0x1110fb03u); f_1110fd60();
  /* 1110fb03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fb06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fb08 je 0x1110fb2c */
  if (C.zf) goto L_1110fb2c;
  /* 1110fb0a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110fb0d mov dword ptr [0x1112f798], edx */
  w32((uint32_t)(0x1112f798), (EDX));
  /* 1110fb13 mov eax, dword ptr [0x1112f798] */
  EAX = (r32((uint32_t)(0x1112f798)));
  /* 1110fb18 mov dword ptr [0x1112f77c], eax */
  w32((uint32_t)(0x1112f77c), (EAX));
  /* 1110fb1d mov ecx, dword ptr [0x1112f794] */
  ECX = (r32((uint32_t)(0x1112f794)));
  /* 1110fb23 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1110fb26 mov dword ptr [0x1112f794], ecx */
  w32((uint32_t)(0x1112f794), (ECX));
L_1110fb2c:;
  /* 1110fb2c mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110fb31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1110fb34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110fb36 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fb38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1110fb39:;
  /* 1110fb39 mov esp, ebp */
  ESP = (EBP);
  /* 1110fb3b pop ebp */
  EBP = (pop32());
  /* 1110fb3c ret 4 */
  ESPCHK(0x1110fa20u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fb40 @ 0x1110fb40 (69 bytes, 20 insns) */
void f_1110fb40(void) {
  FTRACE(0x1110fb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fb41 mov ebp, esp */
  EBP = (ESP);
  /* 1110fb43 mov eax, dword ptr [0x1112f790] */
  EAX = (r32((uint32_t)(0x1112f790)));
  /* 1110fb48 push eax */
  push32((uint32_t)(EAX));
  /* 1110fb49 call 0x11106370 */
  push32(0x1110fb4eu); f_11106370();
  /* 1110fb4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fb51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110fb53 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fb56 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1110fb59 mov dword ptr [0x1112f780], ecx */
  w32((uint32_t)(0x1112f780), (ECX));
  /* 1110fb5f push 1 */
  push32((uint32_t)(0x1u));
  /* 1110fb61 push 0x1110fb90 */
  push32((uint32_t)(0x1110fb90u));
  /* 1110fb66 call dword ptr [0x111322c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c0))), 0x1110fb6cu);
  /* 1110fb6c mov edx, dword ptr [0x1112f794] */
  EDX = (r32((uint32_t)(0x1112f794)));
  /* 1110fb72 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1110fb75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110fb77 jne 0x1110fb83 */
  if (!C.zf) goto L_1110fb83;
  /* 1110fb79 mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
L_1110fb83:;
  /* 1110fb83 pop ebp */
  EBP = (pop32());
  /* 1110fb84 ret  */
  ESPCHK(0x1110fb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb90 @ 0x1110fb90 (172 bytes, 54 insns) */
void f_1110fb90(void) {
  FTRACE(0x1110fb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fb91 mov ebp, esp */
  EBP = (ESP);
  /* 1110fb93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fb96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fb99 push eax */
  push32((uint32_t)(EAX));
  /* 1110fb9a call 0x1110ffd0 */
  push32(0x1110fb9fu); f_1110ffd0();
  /* 1110fb9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fba2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1110fba5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1110fba7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1110fbaa push ecx */
  push32((uint32_t)(ECX));
  /* 1110fbab mov edx, dword ptr [0x1112f780] */
  EDX = (r32((uint32_t)(0x1112f780)));
  /* 1110fbb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110fbb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fbb5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1110fbbb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fbc1 push edx */
  push32((uint32_t)(EDX));
  /* 1110fbc2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110fbc5 push eax */
  push32((uint32_t)(EAX));
  /* 1110fbc6 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110fbccu);
  /* 1110fbcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fbce jne 0x1110fbe1 */
  if (!C.zf) goto L_1110fbe1;
  /* 1110fbd0 mov dword ptr [0x1112f794], 0 */
  w32((uint32_t)(0x1112f794), (0x0u));
  /* 1110fbda mov eax, 1 */
  EAX = (0x1u);
  /* 1110fbdf jmp 0x1110fc36 */
  goto L_1110fc36;
L_1110fbe1:;
  /* 1110fbe1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1110fbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 1110fbe5 mov edx, dword ptr [0x1112f790] */
  EDX = (r32((uint32_t)(0x1112f790)));
  /* 1110fbeb push edx */
  push32((uint32_t)(EDX));
  /* 1110fbec call 0x11111c10 */
  push32(0x1110fbf1u); f_11111c10();
  /* 1110fbf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fbf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fbf6 jne 0x1110fc29 */
  if (!C.zf) goto L_1110fc29;
  /* 1110fbf8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110fbfb push eax */
  push32((uint32_t)(EAX));
  /* 1110fbfc call 0x1110fd10 */
  push32(0x1110fc01u); f_1110fd10();
  /* 1110fc01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fc04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fc06 je 0x1110fc29 */
  if (C.zf) goto L_1110fc29;
  /* 1110fc08 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1110fc0b mov dword ptr [0x1112f798], ecx */
  w32((uint32_t)(0x1112f798), (ECX));
  /* 1110fc11 mov edx, dword ptr [0x1112f798] */
  EDX = (r32((uint32_t)(0x1112f798)));
  /* 1110fc17 mov dword ptr [0x1112f77c], edx */
  w32((uint32_t)(0x1112f77c), (EDX));
  /* 1110fc1d mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110fc22 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1110fc24 mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
L_1110fc29:;
  /* 1110fc29 mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110fc2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1110fc31 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110fc33 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fc35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1110fc36:;
  /* 1110fc36 mov esp, ebp */
  ESP = (EBP);
  /* 1110fc38 pop ebp */
  EBP = (pop32());
  /* 1110fc39 ret 4 */
  ESPCHK(0x1110fb90u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fc40 @ 0x1110fc40 (43 bytes, 11 insns) */
void f_1110fc40(void) {
  FTRACE(0x1110fc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fc41 mov ebp, esp */
  EBP = (ESP);
  /* 1110fc43 mov eax, dword ptr [0x1112f794] */
  EAX = (r32((uint32_t)(0x1112f794)));
  /* 1110fc48 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1110fc4d mov dword ptr [0x1112f794], eax */
  w32((uint32_t)(0x1112f794), (EAX));
  /* 1110fc52 call dword ptr [0x111322bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322bc))), 0x1110fc58u);
  /* 1110fc58 mov dword ptr [0x1112f798], eax */
  w32((uint32_t)(0x1112f798), (EAX));
  /* 1110fc5d mov ecx, dword ptr [0x1112f798] */
  ECX = (r32((uint32_t)(0x1112f798)));
  /* 1110fc63 mov dword ptr [0x1112f77c], ecx */
  w32((uint32_t)(0x1112f77c), (ECX));
  /* 1110fc69 pop ebp */
  EBP = (pop32());
  /* 1110fc6a ret  */
  ESPCHK(0x1110fc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc70 @ 0x1110fc70 (155 bytes, 57 insns) */
void f_1110fc70(void) {
  FTRACE(0x1110fc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fc71 mov ebp, esp */
  EBP = (ESP);
  /* 1110fc73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fc76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fc7a je 0x1110fc9b */
  if (C.zf) goto L_1110fc9b;
  /* 1110fc7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fc7f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110fc82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110fc84 je 0x1110fc9b */
  if (C.zf) goto L_1110fc9b;
  /* 1110fc86 push 0x1112b79c */
  push32((uint32_t)(0x1112b79cu));
  /* 1110fc8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fc8e push edx */
  push32((uint32_t)(EDX));
  /* 1110fc8f call 0x1110f1d0 */
  push32(0x1110fc94u); f_1110f1d0();
  /* 1110fc94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fc97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fc99 jne 0x1110fcc3 */
  if (!C.zf) goto L_1110fcc3;
L_1110fc9b:;
  /* 1110fc9b push 8 */
  push32((uint32_t)(0x8u));
  /* 1110fc9d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1110fca0 push eax */
  push32((uint32_t)(EAX));
  /* 1110fca1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1110fca6 mov ecx, dword ptr [0x1112f798] */
  ECX = (r32((uint32_t)(0x1112f798)));
  /* 1110fcac push ecx */
  push32((uint32_t)(ECX));
  /* 1110fcad call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110fcb3u);
  /* 1110fcb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fcb5 jne 0x1110fcbb */
  if (!C.zf) goto L_1110fcbb;
  /* 1110fcb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110fcb9 jmp 0x1110fd07 */
  goto L_1110fd07;
L_1110fcbb:;
  /* 1110fcbb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1110fcbe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1110fcc1 jmp 0x1110fcfb */
  goto L_1110fcfb;
L_1110fcc3:;
  /* 1110fcc3 push 0x1112b798 */
  push32((uint32_t)(0x1112b798u));
  /* 1110fcc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fccb push eax */
  push32((uint32_t)(EAX));
  /* 1110fccc call 0x1110f1d0 */
  push32(0x1110fcd1u); f_1110f1d0();
  /* 1110fcd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fcd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fcd6 jne 0x1110fcfb */
  if (!C.zf) goto L_1110fcfb;
  /* 1110fcd8 push 8 */
  push32((uint32_t)(0x8u));
  /* 1110fcda lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1110fcdd push ecx */
  push32((uint32_t)(ECX));
  /* 1110fcde push 0xb */
  push32((uint32_t)(0xbu));
  /* 1110fce0 mov edx, dword ptr [0x1112f798] */
  EDX = (r32((uint32_t)(0x1112f798)));
  /* 1110fce6 push edx */
  push32((uint32_t)(EDX));
  /* 1110fce7 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110fcedu);
  /* 1110fced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fcef jne 0x1110fcf5 */
  if (!C.zf) goto L_1110fcf5;
  /* 1110fcf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110fcf3 jmp 0x1110fd07 */
  goto L_1110fd07;
L_1110fcf5:;
  /* 1110fcf5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1110fcf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1110fcfb:;
  /* 1110fcfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fcfe push ecx */
  push32((uint32_t)(ECX));
  /* 1110fcff call 0x11111df0 */
  push32(0x1110fd04u); f_11111df0();
  /* 1110fd04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110fd07:;
  /* 1110fd07 mov esp, ebp */
  ESP = (EBP);
  /* 1110fd09 pop ebp */
  EBP = (pop32());
  /* 1110fd0a ret  */
  ESPCHK(0x1110fc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x1110fd10 (79 bytes, 26 insns) */
void f_1110fd10(void) {
  FTRACE(0x1110fd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fd11 mov ebp, esp */
  EBP = (ESP);
  /* 1110fd13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fd16 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1110fd1a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1110fd1e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110fd25 jmp 0x1110fd30 */
  goto L_1110fd30;
L_1110fd27:;
  /* 1110fd27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110fd2a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fd2d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1110fd30:;
  /* 1110fd30 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fd34 jae 0x1110fd56 */
  if (!C.cf) goto L_1110fd56;
  /* 1110fd36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110fd39 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1110fd3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110fd42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110fd44 mov cx, word ptr [eax*2 + 0x1112e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1112e9c4)));
  /* 1110fd4c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fd4e jne 0x1110fd54 */
  if (!C.zf) goto L_1110fd54;
  /* 1110fd50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110fd52 jmp 0x1110fd5b */
  goto L_1110fd5b;
L_1110fd54:;
  /* 1110fd54 jmp 0x1110fd27 */
  goto L_1110fd27;
L_1110fd56:;
  /* 1110fd56 mov eax, 1 */
  EAX = (0x1u);
L_1110fd5b:;
  /* 1110fd5b mov esp, ebp */
  ESP = (EBP);
  /* 1110fd5d pop ebp */
  EBP = (pop32());
  /* 1110fd5e ret  */
  ESPCHK(0x1110fd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd60 @ 0x1110fd60 (135 bytes, 48 insns) */
void f_1110fd60(void) {
  FTRACE(0x1110fd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fd61 mov ebp, esp */
  EBP = (ESP);
  /* 1110fd63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fd66 push esi */
  push32((uint32_t)(ESI));
  /* 1110fd67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fd6a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110fd6f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110fd74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110fd79 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1110fd7c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110fd81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110fd84 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1110fd86 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1110fd89 push ecx */
  push32((uint32_t)(ECX));
  /* 1110fd8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1110fd8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110fd8f push edx */
  push32((uint32_t)(EDX));
  /* 1110fd90 call dword ptr [0x1112f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f79c))), 0x1110fd96u);
  /* 1110fd96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fd98 jne 0x1110fd9e */
  if (!C.zf) goto L_1110fd9e;
  /* 1110fd9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110fd9c jmp 0x1110fde2 */
  goto L_1110fde2;
L_1110fd9e:;
  /* 1110fd9e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1110fda1 push eax */
  push32((uint32_t)(EAX));
  /* 1110fda2 call 0x1110ffd0 */
  push32(0x1110fda7u); f_1110ffd0();
  /* 1110fda7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fdaa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fdad je 0x1110fddd */
  if (C.zf) goto L_1110fddd;
  /* 1110fdaf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fdb3 je 0x1110fddd */
  if (C.zf) goto L_1110fddd;
  /* 1110fdb5 mov ecx, dword ptr [0x1112f78c] */
  ECX = (r32((uint32_t)(0x1112f78c)));
  /* 1110fdbb push ecx */
  push32((uint32_t)(ECX));
  /* 1110fdbc call 0x11110050 */
  push32(0x1110fdc1u); f_11110050();
  /* 1110fdc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fdc4 mov esi, eax */
  ESI = (EAX);
  /* 1110fdc6 mov edx, dword ptr [0x1112f78c] */
  EDX = (r32((uint32_t)(0x1112f78c)));
  /* 1110fdcc push edx */
  push32((uint32_t)(EDX));
  /* 1110fdcd call 0x11106370 */
  push32(0x1110fdd2u); f_11106370();
  /* 1110fdd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fdd5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fdd7 jne 0x1110fddd */
  if (!C.zf) goto L_1110fddd;
  /* 1110fdd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110fddb jmp 0x1110fde2 */
  goto L_1110fde2;
L_1110fddd:;
  /* 1110fddd mov eax, 1 */
  EAX = (0x1u);
L_1110fde2:;
  /* 1110fde2 pop esi */
  ESI = (pop32());
  /* 1110fde3 mov esp, ebp */
  ESP = (EBP);
  /* 1110fde5 pop ebp */
  EBP = (pop32());
  /* 1110fde6 ret  */
  ESPCHK(0x1110fd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdf0 @ 0x1110fdf0 (77 bytes, 18 insns) */
void f_1110fdf0(void) {
  FTRACE(0x1110fdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1110fdf3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fdf9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1110fe03 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1110fe09 push eax */
  push32((uint32_t)(EAX));
  /* 1110fe0a call dword ptr [0x111322b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322b8))), 0x1110fe10u);
  /* 1110fe10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110fe12 je 0x1110fe29 */
  if (C.zf) goto L_1110fe29;
  /* 1110fe14 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fe1b jne 0x1110fe29 */
  if (!C.zf) goto L_1110fe29;
  /* 1110fe1d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1110fe27 jmp 0x1110fe33 */
  goto L_1110fe33;
L_1110fe29:;
  /* 1110fe29 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1110fe33:;
  /* 1110fe33 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1110fe39 mov esp, ebp */
  ESP = (EBP);
  /* 1110fe3b pop ebp */
  EBP = (pop32());
  /* 1110fe3c ret  */
  ESPCHK(0x1110fdf0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1110fe40 (388 bytes, 118 insns) */
void f_1110fe40(void) {
  FTRACE(0x1110fe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110fe40 push ebp */
  push32((uint32_t)(EBP));
  /* 1110fe41 mov ebp, esp */
  EBP = (ESP);
  /* 1110fe43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fe46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1110fe4d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1110fe54 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1110fe5b:;
  /* 1110fe5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110fe5e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fe61 jg 0x1110ffa8 */
  if ((!C.zf&&C.sf==C.of)) goto L_1110ffa8;
  /* 1110fe67 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110fe6a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fe6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1110fe6e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110fe70 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1110fe72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1110fe75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110fe78 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110fe7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110fe7e cmp edx, dword ptr [ecx + 0x1112e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1112e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fe84 jne 0x1110ff7e */
  if (!C.zf) goto L_1110ff7e;
  /* 1110fe8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110fe8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1110fe90 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fe94 ja 0x1110feb7 */
  if ((!C.cf&&!C.zf)) goto L_1110feb7;
  /* 1110fe96 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fe9a je 0x1110ff29 */
  if (C.zf) goto L_1110ff29;
  /* 1110fea0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fea4 je 0x1110fed4 */
  if (C.zf) goto L_1110fed4;
  /* 1110fea6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110feaa je 0x1110fef6 */
  if (C.zf) goto L_1110fef6;
  /* 1110feac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110feb0 je 0x1110ff18 */
  if (C.zf) goto L_1110ff18;
  /* 1110feb2 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110feb7:;
  /* 1110feb7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110febe je 0x1110fee5 */
  if (C.zf) goto L_1110fee5;
  /* 1110fec0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fec7 je 0x1110ff07 */
  if (C.zf) goto L_1110ff07;
  /* 1110fec9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fed0 je 0x1110ff3a */
  if (C.zf) goto L_1110ff3a;
  /* 1110fed2 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110fed4:;
  /* 1110fed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110fed7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110feda add ecx, 0x1112e524 */
  { uint32_t _a=(ECX),_b=(0x1112e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110fee0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110fee3 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110fee5:;
  /* 1110fee5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110fee8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110feeb mov eax, dword ptr [edx + 0x1112e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1112e52c)));
  /* 1110fef1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110fef4 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110fef6:;
  /* 1110fef6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110fef9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110fefc add ecx, 0x1112e530 */
  { uint32_t _a=(ECX),_b=(0x1112e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ff02 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ff05 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110ff07:;
  /* 1110ff07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ff0a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ff0d mov eax, dword ptr [edx + 0x1112e534] */
  EAX = (r32((uint32_t)(EDX + 0x1112e534)));
  /* 1110ff13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110ff16 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110ff18:;
  /* 1110ff18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ff1b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ff1e add ecx, 0x1112e538 */
  { uint32_t _a=(ECX),_b=(0x1112e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ff24 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1110ff27 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110ff29:;
  /* 1110ff29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ff2c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ff2f add edx, 0x1112e53c */
  { uint32_t _a=(EDX),_b=(0x1112e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ff35 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1110ff38 jmp 0x1110ff48 */
  goto L_1110ff48;
L_1110ff3a:;
  /* 1110ff3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ff3d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ff40 add eax, 0x1112e544 */
  { uint32_t _a=(EAX),_b=(0x1112e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ff45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1110ff48:;
  /* 1110ff48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ff4c je 0x1110ff54 */
  if (C.zf) goto L_1110ff54;
  /* 1110ff4e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ff52 jge 0x1110ff56 */
  if ((C.sf==C.of)) goto L_1110ff56;
L_1110ff54:;
  /* 1110ff54 jmp 0x1110ffa8 */
  goto L_1110ffa8;
L_1110ff56:;
  /* 1110ff56 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110ff59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ff5c push ecx */
  push32((uint32_t)(ECX));
  /* 1110ff5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110ff60 push edx */
  push32((uint32_t)(EDX));
  /* 1110ff61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110ff64 push eax */
  push32((uint32_t)(EAX));
  /* 1110ff65 call 0x11106d60 */
  push32(0x1110ff6au); f_11106d60();
  /* 1110ff6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ff6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110ff70 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ff73 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1110ff77 mov eax, 1 */
  EAX = (0x1u);
  /* 1110ff7c jmp 0x1110ffbe */
  goto L_1110ffbe;
L_1110ff7e:;
  /* 1110ff7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ff81 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110ff84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ff87 cmp eax, dword ptr [edx + 0x1112e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1112e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110ff8d jae 0x1110ff9a */
  if (!C.cf) goto L_1110ff9a;
  /* 1110ff8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ff92 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ff95 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110ff98 jmp 0x1110ffa3 */
  goto L_1110ffa3;
L_1110ff9a:;
  /* 1110ff9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110ff9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ffa0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1110ffa3:;
  /* 1110ffa3 jmp 0x1110fe5b */
  goto L_1110fe5b;
L_1110ffa8:;
  /* 1110ffa8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110ffab push eax */
  push32((uint32_t)(EAX));
  /* 1110ffac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110ffaf push ecx */
  push32((uint32_t)(ECX));
  /* 1110ffb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110ffb3 push edx */
  push32((uint32_t)(EDX));
  /* 1110ffb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ffb7 push eax */
  push32((uint32_t)(EAX));
  /* 1110ffb8 call dword ptr [0x111322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322c4))), 0x1110ffbeu);
L_1110ffbe:;
  /* 1110ffbe mov esp, ebp */
  ESP = (EBP);
  /* 1110ffc0 pop ebp */
  EBP = (pop32());
  /* 1110ffc1 ret 0x10 */
  ESPCHK(0x1110fe40u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ffd0 @ 0x1110ffd0 (118 bytes, 42 insns) */
void f_1110ffd0(void) {
  FTRACE(0x1110ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1110ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 1110ffd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110ffd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1110ffdd:;
  /* 1110ffdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ffe0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1110ffe2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1110ffe5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110ffe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110ffec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110ffef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1110fff2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110fff4 je 0x1111003f */
  if (C.zf) goto L_1111003f;
  /* 1110fff6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1110fffa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110fffd jl 0x11110012 */
  if ((C.sf!=C.of)) goto L_11110012;
  /* 1110ffff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11110003 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110006 jg 0x11110012 */
  if ((!C.zf&&C.sf==C.of)) goto L_11110012;
  /* 11110008 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1111000b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1111000d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11110010 jmp 0x1111002c */
  goto L_1111002c;
L_11110012:;
  /* 11110012 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11110016 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110019 jl 0x1111002c */
  if ((C.sf!=C.of)) goto L_1111002c;
  /* 1111001b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1111001f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110022 jg 0x1111002c */
  if ((!C.zf&&C.sf==C.of)) goto L_1111002c;
  /* 11110024 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11110027 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11110029 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1111002c:;
  /* 1111002c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111002f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11110032 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11110036 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1111003a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1111003d jmp 0x1110ffdd */
  goto L_1110ffdd;
L_1111003f:;
  /* 1111003f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110042 mov esp, ebp */
  ESP = (EBP);
  /* 11110044 pop ebp */
  EBP = (pop32());
  /* 11110045 ret  */
  ESPCHK(0x1110ffd0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11110050 (101 bytes, 36 insns) */
void f_11110050(void) {
  FTRACE(0x11110050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11110050 push ebp */
  push32((uint32_t)(EBP));
  /* 11110051 mov ebp, esp */
  EBP = (ESP);
  /* 11110053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110056 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1111005d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110060 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11110062 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11110065 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110068 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111006b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1111006e:;
  /* 1111006e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11110072 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110075 jl 0x11110080 */
  if ((C.sf!=C.of)) goto L_11110080;
  /* 11110077 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1111007b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111007e jle 0x11110092 */
  if ((C.zf||C.sf!=C.of)) goto L_11110092;
L_11110080:;
  /* 11110080 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11110084 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110087 jl 0x111100ae */
  if ((C.sf!=C.of)) goto L_111100ae;
  /* 11110089 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1111008d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110090 jg 0x111100ae */
  if ((!C.zf&&C.sf==C.of)) goto L_111100ae;
L_11110092:;
  /* 11110092 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11110095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110098 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1111009b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111009e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111100a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 111100a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111100a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111100a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111100ac jmp 0x1111006e */
  goto L_1111006e;
L_111100ae:;
  /* 111100ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111100b1 mov esp, ebp */
  ESP = (EBP);
  /* 111100b3 pop ebp */
  EBP = (pop32());
  /* 111100b4 ret  */
  ESPCHK(0x11110050u, _esp0);
  ESP += 4; return;
}

/* FUN_100100c0 @ 0x111100c0 (122 bytes, 39 insns) */
void f_111100c0(void) {
  FTRACE(0x111100c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111100c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111100c1 mov ebp, esp */
  EBP = (ESP);
  /* 111100c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111100c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111100c7 cmp eax, dword ptr [0x1113101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1113101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111100cd jae 0x111100f1 */
  if (!C.cf) goto L_111100f1;
  /* 111100cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111100d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111100d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111100d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 111100db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111100de mov eax, dword ptr [ecx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 111100e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 111100ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111100ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111100ef jne 0x1111010c */
  if (!C.zf) goto L_1111010c;
L_111100f1:;
  /* 111100f1 call 0x1110b410 */
  push32(0x111100f6u); f_1110b410();
  /* 111100f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111100fc call 0x1110b420 */
  push32(0x11110101u); f_1110b420();
  /* 11110101 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11110107 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1111010a jmp 0x11110136 */
  goto L_11110136;
L_1111010c:;
  /* 1111010c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111010f push edx */
  push32((uint32_t)(EDX));
  /* 11110110 call 0x1110cc30 */
  push32(0x11110115u); f_1110cc30();
  /* 11110115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111011b push eax */
  push32((uint32_t)(EAX));
  /* 1111011c call 0x11110140 */
  push32(0x11110121u); f_11110140();
  /* 11110121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110124 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11110127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111012a push ecx */
  push32((uint32_t)(ECX));
  /* 1111012b call 0x1110ccc0 */
  push32(0x11110130u); f_1110ccc0();
  /* 11110130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11110136:;
  /* 11110136 mov esp, ebp */
  ESP = (EBP);
  /* 11110138 pop ebp */
  EBP = (pop32());
  /* 11110139 ret  */
  ESPCHK(0x111100c0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11110140 (170 bytes, 59 insns) */
void f_11110140(void) {
  FTRACE(0x11110140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11110140 push ebp */
  push32((uint32_t)(EBP));
  /* 11110141 mov ebp, esp */
  EBP = (ESP);
  /* 11110143 push ecx */
  push32((uint32_t)(ECX));
  /* 11110144 push esi */
  push32((uint32_t)(ESI));
  /* 11110145 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110148 push eax */
  push32((uint32_t)(EAX));
  /* 11110149 call 0x1110cab0 */
  push32(0x1111014eu); f_1110cab0();
  /* 1111014e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110151 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110154 je 0x11110193 */
  if (C.zf) goto L_11110193;
  /* 11110156 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111015a je 0x11110162 */
  if (C.zf) goto L_11110162;
  /* 1111015c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110160 jne 0x1111017c */
  if (!C.zf) goto L_1111017c;
L_11110162:;
  /* 11110162 push 1 */
  push32((uint32_t)(0x1u));
  /* 11110164 call 0x1110cab0 */
  push32(0x11110169u); f_1110cab0();
  /* 11110169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111016c mov esi, eax */
  ESI = (EAX);
  /* 1111016e push 2 */
  push32((uint32_t)(0x2u));
  /* 11110170 call 0x1110cab0 */
  push32(0x11110175u); f_1110cab0();
  /* 11110175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110178 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111017a je 0x11110193 */
  if (C.zf) goto L_11110193;
L_1111017c:;
  /* 1111017c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111017f push ecx */
  push32((uint32_t)(ECX));
  /* 11110180 call 0x1110cab0 */
  push32(0x11110185u); f_1110cab0();
  /* 11110185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110188 push eax */
  push32((uint32_t)(EAX));
  /* 11110189 call dword ptr [0x111322b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111322b4))), 0x1111018fu);
  /* 1111018f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11110191 je 0x1111019c */
  if (C.zf) goto L_1111019c;
L_11110193:;
  /* 11110193 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1111019a jmp 0x111101a5 */
  goto L_111101a5;
L_1111019c:;
  /* 1111019c call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x111101a2u);
  /* 111101a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111101a5:;
  /* 111101a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111101a8 push edx */
  push32((uint32_t)(EDX));
  /* 111101a9 call 0x1110c9d0 */
  push32(0x111101aeu); f_1110c9d0();
  /* 111101ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111101b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111101b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111101b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111101ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111101bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111101c0 mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 111101c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 111101cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111101d0 je 0x111101e3 */
  if (C.zf) goto L_111101e3;
  /* 111101d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111101d5 push eax */
  push32((uint32_t)(EAX));
  /* 111101d6 call 0x1110b370 */
  push32(0x111101dbu); f_1110b370();
  /* 111101db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111101de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111101e1 jmp 0x111101e5 */
  goto L_111101e5;
L_111101e3:;
  /* 111101e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111101e5:;
  /* 111101e5 pop esi */
  ESI = (pop32());
  /* 111101e6 mov esp, ebp */
  ESP = (EBP);
  /* 111101e8 pop ebp */
  EBP = (pop32());
  /* 111101e9 ret  */
  ESPCHK(0x11110140u, _esp0);
  ESP += 4; return;
}

/* FUN_100101f0 @ 0x111101f0 (146 bytes, 52 insns) */
void f_111101f0(void) {
  FTRACE(0x111101f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111101f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111101f1 mov ebp, esp */
  EBP = (ESP);
  /* 111101f3 push ebx */
  push32((uint32_t)(EBX));
  /* 111101f4 push esi */
  push32((uint32_t)(ESI));
  /* 111101f5 push edi */
  push32((uint32_t)(EDI));
L_111101f6:;
  /* 111101f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111101fa jne 0x1111021a */
  if (!C.zf) goto L_1111021a;
  /* 111101fc push 0x1112b0d8 */
  push32((uint32_t)(0x1112b0d8u));
  /* 11110201 push 0 */
  push32((uint32_t)(0x0u));
  /* 11110203 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11110205 push 0x1112b7a0 */
  push32((uint32_t)(0x1112b7a0u));
  /* 1111020a push 2 */
  push32((uint32_t)(0x2u));
  /* 1111020c call 0x11102600 */
  push32(0x11110211u); f_11102600();
  /* 11110211 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110214 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110217 jne 0x1111021a */
  if (!C.zf) goto L_1111021a;
  /* 11110219 int3  */
  x86_unimpl("int3 @ 0x11110219");
L_1111021a:;
  /* 1111021a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1111021c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1111021e jne 0x111101f6 */
  if (!C.zf) goto L_111101f6;
  /* 11110220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110223 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11110226 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1111022c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1111022e je 0x1111027d */
  if (C.zf) goto L_1111027d;
  /* 11110230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110233 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11110236 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11110239 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1111023b je 0x1111027d */
  if (C.zf) goto L_1111027d;
  /* 1111023d push 2 */
  push32((uint32_t)(0x2u));
  /* 1111023f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110242 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11110245 push eax */
  push32((uint32_t)(EAX));
  /* 11110246 call 0x11103fd0 */
  push32(0x1111024bu); f_11103fd0();
  /* 1111024b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111024e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110251 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11110254 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1111025a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111025d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11110260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110263 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11110269 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1111026c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11110273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110276 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1111027d:;
  /* 1111027d pop edi */
  EDI = (pop32());
  /* 1111027e pop esi */
  ESI = (pop32());
  /* 1111027f pop ebx */
  EBX = (pop32());
  /* 11110280 pop ebp */
  EBP = (pop32());
  /* 11110281 ret  */
  ESPCHK(0x111101f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010290 @ 0x11110290 (289 bytes, 97 insns) */
void f_11110290(void) {
  FTRACE(0x11110290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11110290 push ebp */
  push32((uint32_t)(EBP));
  /* 11110291 mov ebp, esp */
  EBP = (ESP);
  /* 11110293 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11110296 push esi */
  push32((uint32_t)(ESI));
  /* 11110297 mov eax, dword ptr [0x1112ec98] */
  EAX = (r32((uint32_t)(0x1112ec98)));
  /* 1111029c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1111029f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111102a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111102ad jmp 0x111102b8 */
  goto L_111102b8;
L_111102af:;
  /* 111102af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111102b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111102b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111102b8:;
  /* 111102b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111102bc jae 0x111102f1 */
  if (!C.cf) goto L_111102f1;
  /* 111102be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111102c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111102c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 111102c7 push ecx */
  push32((uint32_t)(ECX));
  /* 111102c8 call 0x11106370 */
  push32(0x111102cdu); f_11106370();
  /* 111102cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111102d0 mov esi, eax */
  ESI = (EAX);
  /* 111102d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111102d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111102d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 111102dc push ecx */
  push32((uint32_t)(ECX));
  /* 111102dd call 0x11106370 */
  push32(0x111102e2u); f_11106370();
  /* 111102e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111102e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111102e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111102ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111102ef jmp 0x111102af */
  goto L_111102af;
L_111102f1:;
  /* 111102f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111102f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111102f7 push eax */
  push32((uint32_t)(EAX));
  /* 111102f8 call 0x11103520 */
  push32(0x111102fdu); f_11103520();
  /* 111102fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110300 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11110303 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110307 je 0x111103a9 */
  if (C.zf) goto L_111103a9;
  /* 1111030d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110310 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11110313 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1111031a jmp 0x11110325 */
  goto L_11110325;
L_1111031c:;
  /* 1111031c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111031f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110322 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11110325:;
  /* 11110325 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110329 jae 0x1111039a */
  if (!C.cf) goto L_1111039a;
  /* 1111032b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111032e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11110331 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110334 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110337 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1111033a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111033d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110340 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11110343 push ecx */
  push32((uint32_t)(ECX));
  /* 11110344 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110347 push edx */
  push32((uint32_t)(EDX));
  /* 11110348 call 0x111064f0 */
  push32(0x1111034du); f_111064f0();
  /* 1111034d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110350 push eax */
  push32((uint32_t)(EAX));
  /* 11110351 call 0x11106370 */
  push32(0x11110356u); f_11106370();
  /* 11110356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110359 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111035c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111035e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11110361 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110364 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11110367 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111036a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111036d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11110370 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110373 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110376 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1111037a push eax */
  push32((uint32_t)(EAX));
  /* 1111037b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111037e push ecx */
  push32((uint32_t)(ECX));
  /* 1111037f call 0x111064f0 */
  push32(0x11110384u); f_111064f0();
  /* 11110384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110387 push eax */
  push32((uint32_t)(EAX));
  /* 11110388 call 0x11106370 */
  push32(0x1111038du); f_11106370();
  /* 1111038d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110390 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110393 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110395 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11110398 jmp 0x1111031c */
  goto L_1111031c;
L_1111039a:;
  /* 1111039a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111039d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111103a0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111103a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111103a6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111103a9:;
  /* 111103a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111103ac pop esi */
  ESI = (pop32());
  /* 111103ad mov esp, ebp */
  ESP = (EBP);
  /* 111103af pop ebp */
  EBP = (pop32());
  /* 111103b0 ret  */
  ESPCHK(0x11110290u, _esp0);
  ESP += 4; return;
}

/* FUN_100103c0 @ 0x111103c0 (291 bytes, 97 insns) */
void f_111103c0(void) {
  FTRACE(0x111103c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111103c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111103c1 mov ebp, esp */
  EBP = (ESP);
  /* 111103c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111103c6 push esi */
  push32((uint32_t)(ESI));
  /* 111103c7 mov eax, dword ptr [0x1112ec98] */
  EAX = (r32((uint32_t)(0x1112ec98)));
  /* 111103cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111103cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111103d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111103dd jmp 0x111103e8 */
  goto L_111103e8;
L_111103df:;
  /* 111103df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111103e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111103e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111103e8:;
  /* 111103e8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111103ec jae 0x11110422 */
  if (!C.cf) goto L_11110422;
  /* 111103ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111103f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111103f4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 111103f8 push ecx */
  push32((uint32_t)(ECX));
  /* 111103f9 call 0x11106370 */
  push32(0x111103feu); f_11106370();
  /* 111103fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110401 mov esi, eax */
  ESI = (EAX);
  /* 11110403 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110406 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110409 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1111040d push ecx */
  push32((uint32_t)(ECX));
  /* 1111040e call 0x11106370 */
  push32(0x11110413u); f_11106370();
  /* 11110413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110416 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110419 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1111041d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11110420 jmp 0x111103df */
  goto L_111103df;
L_11110422:;
  /* 11110422 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11110425 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110428 push eax */
  push32((uint32_t)(EAX));
  /* 11110429 call 0x11103520 */
  push32(0x1111042eu); f_11103520();
  /* 1111042e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110431 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11110434 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110438 je 0x111104db */
  if (C.zf) goto L_111104db;
  /* 1111043e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110441 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11110444 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1111044b jmp 0x11110456 */
  goto L_11110456;
L_1111044d:;
  /* 1111044d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110450 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110453 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11110456:;
  /* 11110456 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111045a jae 0x111104cc */
  if (!C.cf) goto L_111104cc;
  /* 1111045c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111045f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11110462 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110468 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1111046b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111046e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110471 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11110475 push ecx */
  push32((uint32_t)(ECX));
  /* 11110476 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110479 push edx */
  push32((uint32_t)(EDX));
  /* 1111047a call 0x111064f0 */
  push32(0x1111047fu); f_111064f0();
  /* 1111047f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110482 push eax */
  push32((uint32_t)(EAX));
  /* 11110483 call 0x11106370 */
  push32(0x11110488u); f_11106370();
  /* 11110488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111048b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111048e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110490 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11110493 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110496 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11110499 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111049c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111049f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111104a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111104a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111104a8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 111104ac push eax */
  push32((uint32_t)(EAX));
  /* 111104ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111104b0 push ecx */
  push32((uint32_t)(ECX));
  /* 111104b1 call 0x111064f0 */
  push32(0x111104b6u); f_111064f0();
  /* 111104b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111104b9 push eax */
  push32((uint32_t)(EAX));
  /* 111104ba call 0x11106370 */
  push32(0x111104bfu); f_11106370();
  /* 111104bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111104c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111104c5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111104c7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111104ca jmp 0x1111044d */
  goto L_1111044d;
L_111104cc:;
  /* 111104cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111104cf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111104d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111104d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111104d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111104db:;
  /* 111104db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111104de pop esi */
  ESI = (pop32());
  /* 111104df mov esp, ebp */
  ESP = (EBP);
  /* 111104e1 pop ebp */
  EBP = (pop32());
  /* 111104e2 ret  */
  ESPCHK(0x111103c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104f0 @ 0x111104f0 (878 bytes, 273 insns) */
void f_111104f0(void) {
  FTRACE(0x111104f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111104f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111104f1 mov ebp, esp */
  EBP = (ESP);
  /* 111104f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111104f6 push esi */
  push32((uint32_t)(ESI));
  /* 111104f7 mov eax, dword ptr [0x1112ec98] */
  EAX = (r32((uint32_t)(0x1112ec98)));
  /* 111104fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111104ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11110506 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1111050d jmp 0x11110518 */
  goto L_11110518;
L_1111050f:;
  /* 1111050f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110512 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110515 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11110518:;
  /* 11110518 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111051c jae 0x11110551 */
  if (!C.cf) goto L_11110551;
  /* 1111051e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110524 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11110527 push ecx */
  push32((uint32_t)(ECX));
  /* 11110528 call 0x11106370 */
  push32(0x1111052du); f_11106370();
  /* 1111052d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110530 mov esi, eax */
  ESI = (EAX);
  /* 11110532 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110535 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110538 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1111053c push ecx */
  push32((uint32_t)(ECX));
  /* 1111053d call 0x11106370 */
  push32(0x11110542u); f_11106370();
  /* 11110542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110545 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110548 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1111054c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1111054f jmp 0x1111050f */
  goto L_1111050f;
L_11110551:;
  /* 11110551 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11110558 jmp 0x11110563 */
  goto L_11110563;
L_1111055a:;
  /* 1111055a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111055d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110560 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11110563:;
  /* 11110563 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110567 jae 0x1111059d */
  if (!C.cf) goto L_1111059d;
  /* 11110569 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111056c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1111056f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11110573 push eax */
  push32((uint32_t)(EAX));
  /* 11110574 call 0x11106370 */
  push32(0x11110579u); f_11106370();
  /* 11110579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111057c mov esi, eax */
  ESI = (EAX);
  /* 1111057e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110581 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110584 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11110588 push eax */
  push32((uint32_t)(EAX));
  /* 11110589 call 0x11106370 */
  push32(0x1111058eu); f_11106370();
  /* 1111058e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110591 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110594 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11110598 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1111059b jmp 0x1111055a */
  goto L_1111055a;
L_1111059d:;
  /* 1111059d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111105a0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 111105a6 push eax */
  push32((uint32_t)(EAX));
  /* 111105a7 call 0x11106370 */
  push32(0x111105acu); f_11106370();
  /* 111105ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111105af mov esi, eax */
  ESI = (EAX);
  /* 111105b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111105b4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 111105ba push edx */
  push32((uint32_t)(EDX));
  /* 111105bb call 0x11106370 */
  push32(0x111105c0u); f_11106370();
  /* 111105c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111105c3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111105c6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 111105ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111105cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111105d0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 111105d6 push edx */
  push32((uint32_t)(EDX));
  /* 111105d7 call 0x11106370 */
  push32(0x111105dcu); f_11106370();
  /* 111105dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111105df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111105e2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111105e6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111105e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111105ec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 111105f2 push ecx */
  push32((uint32_t)(ECX));
  /* 111105f3 call 0x11106370 */
  push32(0x111105f8u); f_11106370();
  /* 111105f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111105fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111105fe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11110602 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11110605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110608 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1111060e push edx */
  push32((uint32_t)(EDX));
  /* 1111060f call 0x11106370 */
  push32(0x11110614u); f_11106370();
  /* 11110614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110617 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1111061a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1111061e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11110621 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11110624 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110629 push eax */
  push32((uint32_t)(EAX));
  /* 1111062a call 0x11103520 */
  push32(0x1111062fu); f_11103520();
  /* 1111062f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110632 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11110635 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110639 je 0x11110856 */
  if (C.zf) goto L_11110856;
  /* 1111063f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110642 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11110645 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110648 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1111064e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11110651 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11110656 mov eax, dword ptr [0x1112ec98] */
  EAX = (r32((uint32_t)(0x1112ec98)));
  /* 1111065b push eax */
  push32((uint32_t)(EAX));
  /* 1111065c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1111065f push ecx */
  push32((uint32_t)(ECX));
  /* 11110660 call 0x11109e20 */
  push32(0x11110665u); f_11109e20();
  /* 11110665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110668 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1111066f jmp 0x1111067a */
  goto L_1111067a;
L_11110671:;
  /* 11110671 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110674 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11110677 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1111067a:;
  /* 1111067a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1111067e jae 0x111106ee */
  if (!C.cf) goto L_111106ee;
  /* 11110680 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110683 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11110686 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110689 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1111068c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111068f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110692 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11110695 push edx */
  push32((uint32_t)(EDX));
  /* 11110696 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110699 push eax */
  push32((uint32_t)(EAX));
  /* 1111069a call 0x111064f0 */
  push32(0x1111069fu); f_111064f0();
  /* 1111069f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111106a2 push eax */
  push32((uint32_t)(EAX));
  /* 111106a3 call 0x11106370 */
  push32(0x111106a8u); f_11106370();
  /* 111106a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111106ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111106ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111106b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111106b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111106b8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111106bb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111106be mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 111106c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111106c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111106c8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 111106cc push edx */
  push32((uint32_t)(EDX));
  /* 111106cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111106d0 push eax */
  push32((uint32_t)(EAX));
  /* 111106d1 call 0x111064f0 */
  push32(0x111106d6u); f_111064f0();
  /* 111106d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111106d9 push eax */
  push32((uint32_t)(EAX));
  /* 111106da call 0x11106370 */
  push32(0x111106dfu); f_11106370();
  /* 111106df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111106e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111106e5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111106e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111106ec jmp 0x11110671 */
  goto L_11110671;
L_111106ee:;
  /* 111106ee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 111106f5 jmp 0x11110700 */
  goto L_11110700;
L_111106f7:;
  /* 111106f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111106fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111106fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11110700:;
  /* 11110700 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11110704 jae 0x11110776 */
  if (!C.cf) goto L_11110776;
  /* 11110706 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110709 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1111070c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111070f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11110713 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110716 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110719 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1111071d push eax */
  push32((uint32_t)(EAX));
  /* 1111071e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110721 push ecx */
  push32((uint32_t)(ECX));
  /* 11110722 call 0x111064f0 */
  push32(0x11110727u); f_111064f0();
  /* 11110727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111072a push eax */
  push32((uint32_t)(EAX));
  /* 1111072b call 0x11106370 */
  push32(0x11110730u); f_11106370();
  /* 11110730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110733 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110736 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1111073a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1111073d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11110740 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11110743 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110746 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1111074a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1111074d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110750 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11110754 push eax */
  push32((uint32_t)(EAX));
  /* 11110755 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110758 push ecx */
  push32((uint32_t)(ECX));
  /* 11110759 call 0x111064f0 */
  push32(0x1111075eu); f_111064f0();
  /* 1111075e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110761 push eax */
  push32((uint32_t)(EAX));
  /* 11110762 call 0x11106370 */
  push32(0x11110767u); f_11106370();
  /* 11110767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111076a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111076d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11110771 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11110774 jmp 0x111106f7 */
  goto L_111106f7;
L_11110776:;
  /* 11110776 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11110779 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111077c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11110782 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110785 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1111078b push ecx */
  push32((uint32_t)(ECX));
  /* 1111078c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111078f push edx */
  push32((uint32_t)(EDX));
  /* 11110790 call 0x111064f0 */
  push32(0x11110795u); f_111064f0();
  /* 11110795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110798 push eax */
  push32((uint32_t)(EAX));
  /* 11110799 call 0x11106370 */
  push32(0x1111079eu); f_11106370();
  /* 1111079e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111107a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111107a4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111107a8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111107ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111107ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111107b1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 111107b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111107ba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 111107c0 push eax */
  push32((uint32_t)(EAX));
  /* 111107c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111107c4 push ecx */
  push32((uint32_t)(ECX));
  /* 111107c5 call 0x111064f0 */
  push32(0x111107cau); f_111064f0();
  /* 111107ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111107cd push eax */
  push32((uint32_t)(EAX));
  /* 111107ce call 0x11106370 */
  push32(0x111107d3u); f_11106370();
  /* 111107d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111107d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111107d9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 111107dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111107e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111107e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111107e6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 111107ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111107ef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 111107f5 push ecx */
  push32((uint32_t)(ECX));
  /* 111107f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111107f9 push edx */
  push32((uint32_t)(EDX));
  /* 111107fa call 0x111064f0 */
  push32(0x111107ffu); f_111064f0();
  /* 111107ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110802 push eax */
  push32((uint32_t)(EAX));
  /* 11110803 call 0x11106370 */
  push32(0x11110808u); f_11106370();
  /* 11110808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111080b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111080e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11110812 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11110815 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11110818 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111081b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11110821 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11110824 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1111082a push eax */
  push32((uint32_t)(EAX));
  /* 1111082b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1111082e push ecx */
  push32((uint32_t)(ECX));
  /* 1111082f call 0x111064f0 */
  push32(0x11110834u); f_111064f0();
  /* 11110834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110837 push eax */
  push32((uint32_t)(EAX));
  /* 11110838 call 0x11106370 */
  push32(0x1111083du); f_11106370();
  /* 1111083d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11110840 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110843 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11110847 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1111084a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1111084d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11110850 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11110856:;
  /* 11110856 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11110859 pop esi */
  ESI = (pop32());
  /* 1111085a mov esp, ebp */
  ESP = (EBP);
  /* 1111085c pop ebp */
  EBP = (pop32());
  /* 1111085d ret  */
  ESPCHK(0x111104f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010860 @ 0x11110860 (31 bytes, 15 insns) */
void f_11110860(void) {
  FTRACE(0x11110860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11110860 push ebp */
  push32((uint32_t)(EBP));
  /* 11110861 mov ebp, esp */
  EBP = (ESP);
  /* 11110863 push 0 */
  push32((uint32_t)(0x0u));
  /* 11110865 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11110868 push eax */
  push32((uint32_t)(EAX));
  /* 11110869 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1111086c push ecx */
  push32((uint32_t)(ECX));
  /* 1111086d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11110870 push edx */
  push32((uint32_t)(EDX));
  /* 11110871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11110874 push eax */
  push32((uint32_t)(EAX));
  /* 11110875 call 0x11110880 */
  push32(0x1111087au); f_11110880();
  /* 1111087a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1111087d pop ebp */
  EBP = (pop32());
  /* 1111087e ret  */
  ESPCHK(0x11110860u, _esp0);
  ESP += 4; return;
}

