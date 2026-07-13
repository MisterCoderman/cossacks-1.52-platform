#include "recomp.h"

/* FUN_10007850 @ 0x12627850 (10 bytes, 5 insns) */
void f_12627850(void) {
  FTRACE(0x12627850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627850 push ebp */
  push32((uint32_t)(EBP));
  /* 12627851 mov ebp, esp */
  EBP = (ESP);
  /* 12627853 mov eax, dword ptr [0x1264dc94] */
  EAX = (r32((uint32_t)(0x1264dc94)));
  /* 12627858 pop ebp */
  EBP = (pop32());
  /* 12627859 ret  */
  ESPCHK(0x12627850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007860 @ 0x12627860 (31 bytes, 11 insns) */
void f_12627860(void) {
  FTRACE(0x12627860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627860 push ebp */
  push32((uint32_t)(EBP));
  /* 12627861 mov ebp, esp */
  EBP = (ESP);
  /* 12627863 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262786a jbe 0x12627870 */
  if ((C.cf||C.zf)) goto L_12627870;
  /* 1262786c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262786e jmp 0x1262787d */
  goto L_1262787d;
L_12627870:;
  /* 12627870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627873 mov dword ptr [0x1264dc94], eax */
  w32((uint32_t)(0x1264dc94), (EAX));
  /* 12627878 mov eax, 1 */
  EAX = (0x1u);
L_1262787d:;
  /* 1262787d pop ebp */
  EBP = (pop32());
  /* 1262787e ret  */
  ESPCHK(0x12627860u, _esp0);
  ESP += 4; return;
}

/* FUN_10007880 @ 0x12627880 (89 bytes, 20 insns) */
void f_12627880(void) {
  FTRACE(0x12627880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627880 push ebp */
  push32((uint32_t)(EBP));
  /* 12627881 mov ebp, esp */
  EBP = (ESP);
  /* 12627883 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12627888 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262788a mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 1262788f push eax */
  push32((uint32_t)(EAX));
  /* 12627890 call dword ptr [0x1265234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265234c))), 0x12627896u);
  /* 12627896 mov dword ptr [0x12650ea8], eax */
  w32((uint32_t)(0x12650ea8), (EAX));
  /* 1262789b cmp dword ptr [0x12650ea8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650ea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126278a2 jne 0x126278a8 */
  if (!C.zf) goto L_126278a8;
  /* 126278a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126278a6 jmp 0x126278d7 */
  goto L_126278d7;
L_126278a8:;
  /* 126278a8 mov ecx, dword ptr [0x12650ea8] */
  ECX = (r32((uint32_t)(0x12650ea8)));
  /* 126278ae mov dword ptr [0x12650e9c], ecx */
  w32((uint32_t)(0x12650e9c), (ECX));
  /* 126278b4 mov dword ptr [0x12650ea0], 0 */
  w32((uint32_t)(0x12650ea0), (0x0u));
  /* 126278be mov dword ptr [0x12650ea4], 0 */
  w32((uint32_t)(0x12650ea4), (0x0u));
  /* 126278c8 mov dword ptr [0x12650e88], 0x10 */
  w32((uint32_t)(0x12650e88), (0x10u));
  /* 126278d2 mov eax, 1 */
  EAX = (0x1u);
L_126278d7:;
  /* 126278d7 pop ebp */
  EBP = (pop32());
  /* 126278d8 ret  */
  ESPCHK(0x12627880u, _esp0);
  ESP += 4; return;
}

/* FUN_100078e0 @ 0x126278e0 (85 bytes, 29 insns) */
void f_126278e0(void) {
  FTRACE(0x126278e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126278e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126278e1 mov ebp, esp */
  EBP = (ESP);
  /* 126278e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126278e6 mov eax, dword ptr [0x12650ea4] */
  EAX = (r32((uint32_t)(0x12650ea4)));
  /* 126278eb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126278ee mov ecx, dword ptr [0x12650ea8] */
  ECX = (r32((uint32_t)(0x12650ea8)));
  /* 126278f4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126278f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126278f9 mov edx, dword ptr [0x12650ea8] */
  EDX = (r32((uint32_t)(0x12650ea8)));
  /* 126278ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12627902:;
  /* 12627902 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627905 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627908 jae 0x1262792f */
  if (!C.cf) goto L_1262792f;
  /* 1262790a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262790d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627910 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627913 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12627916 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262791d jae 0x12627924 */
  if (!C.cf) goto L_12627924;
  /* 1262791f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627922 jmp 0x12627931 */
  goto L_12627931;
L_12627924:;
  /* 12627924 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627927 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262792a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262792d jmp 0x12627902 */
  goto L_12627902;
L_1262792f:;
  /* 1262792f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12627931:;
  /* 12627931 mov esp, ebp */
  ESP = (EBP);
  /* 12627933 pop ebp */
  EBP = (pop32());
  /* 12627934 ret  */
  ESPCHK(0x126278e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007940 @ 0x12627940 (95 bytes, 33 insns) */
void f_12627940(void) {
  FTRACE(0x12627940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627940 push ebp */
  push32((uint32_t)(EBP));
  /* 12627941 mov ebp, esp */
  EBP = (ESP);
  /* 12627943 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627949 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262794c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262794f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12627952 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627955 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12627958 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262795b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12627960 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627963 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627965 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627968 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1262796b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1262796d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262796f jne 0x12627991 */
  if (!C.zf) goto L_12627991;
  /* 12627971 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627974 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12627977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12627979 jne 0x12627991 */
  if (!C.zf) goto L_12627991;
  /* 1262797b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262797e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12627984 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627986 je 0x12627991 */
  if (C.zf) goto L_12627991;
  /* 12627988 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1262798f jmp 0x12627998 */
  goto L_12627998;
L_12627991:;
  /* 12627991 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12627998:;
  /* 12627998 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262799b mov esp, ebp */
  ESP = (EBP);
  /* 1262799d pop ebp */
  EBP = (pop32());
  /* 1262799e ret  */
  ESPCHK(0x12627940u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x126279a0 (1485 bytes, 453 insns) */
void f_126279a0(void) {
  FTRACE(0x126279a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126279a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126279a1 mov ebp, esp */
  EBP = (ESP);
  /* 126279a3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126279a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126279a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 126279ac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 126279af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126279b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126279b5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126279b8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126279bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126279be shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 126279c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126279c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126279c7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126279cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 126279d0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 126279d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126279da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126279dd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126279e0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 126279e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126279e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126279e8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126279eb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 126279ee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126279f1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126279f4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 126279f7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 126279fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126279fc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126279ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627a02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12627a05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12627a08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12627a0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12627a0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627a10 jne 0x12627b38 */
  if (!C.zf) goto L_12627b38;
  /* 12627a16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12627a19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12627a1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627a1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12627a22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627a26 jbe 0x12627a2f */
  if ((C.cf||C.zf)) goto L_12627a2f;
  /* 12627a28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12627a2f:;
  /* 12627a2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12627a32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12627a35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12627a38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627a3b jne 0x12627b11 */
  if (!C.zf) goto L_12627b11;
  /* 12627a41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627a45 jae 0x12627aa6 */
  if (!C.cf) goto L_12627aa6;
  /* 12627a47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12627a4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12627a4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627a51 not eax */
  EAX = (~(EAX));
  /* 12627a53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627a56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627a59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12627a5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12627a5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627a62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627a65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12627a69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627a6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627a6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12627a72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12627a75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627a78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627a7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12627a7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627a81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627a84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12627a88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12627a8a jne 0x12627aa4 */
  if (!C.zf) goto L_12627aa4;
  /* 12627a8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12627a91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12627a94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627a96 not eax */
  EAX = (~(EAX));
  /* 12627a98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627a9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12627a9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12627a9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627aa2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12627aa4:;
  /* 12627aa4 jmp 0x12627b11 */
  goto L_12627b11;
L_12627aa6:;
  /* 12627aa6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12627aa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627aac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12627ab1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627ab3 not edx */
  EDX = (~(EDX));
  /* 12627ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627ab8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627abb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12627ac2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12627ac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627ac7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627aca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12627ad1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627ad4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627ad7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12627ada sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12627add mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627ae0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627ae3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12627ae6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627ae9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627aec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12627af0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627af2 jne 0x12627b11 */
  if (!C.zf) goto L_12627b11;
  /* 12627af4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12627af7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627afa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12627aff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627b01 not edx */
  EDX = (~(EDX));
  /* 12627b03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627b06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12627b09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12627b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627b0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12627b11:;
  /* 12627b11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12627b14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12627b17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12627b1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12627b1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12627b20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12627b23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12627b26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12627b29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12627b2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12627b2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12627b32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627b35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12627b38:;
  /* 12627b38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12627b3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12627b3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627b41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12627b44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627b48 jbe 0x12627b51 */
  if ((C.cf||C.zf)) goto L_12627b51;
  /* 12627b4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12627b51:;
  /* 12627b51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12627b54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12627b57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627b59 jne 0x12627cb5 */
  if (!C.zf) goto L_12627cb5;
  /* 12627b5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627b62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627b65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12627b68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12627b6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12627b6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627b71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12627b74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627b78 jbe 0x12627b81 */
  if ((C.cf||C.zf)) goto L_12627b81;
  /* 12627b7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12627b81:;
  /* 12627b81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12627b84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627b87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12627b8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12627b8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12627b90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627b93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12627b96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627b9a jbe 0x12627ba3 */
  if ((C.cf||C.zf)) goto L_12627ba3;
  /* 12627b9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12627ba3:;
  /* 12627ba3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12627ba6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627ba9 je 0x12627caf */
  if (C.zf) goto L_12627caf;
  /* 12627baf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627bb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627bb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12627bb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627bbb jne 0x12627c91 */
  if (!C.zf) goto L_12627c91;
  /* 12627bc1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627bc5 jae 0x12627c26 */
  if (!C.cf) goto L_12627c26;
  /* 12627bc7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12627bcc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12627bcf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627bd1 not edx */
  EDX = (~(EDX));
  /* 12627bd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627bd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627bd9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12627bdd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12627bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627be2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627be5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12627be9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627bec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627bef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12627bf2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12627bf5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627bf8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627bfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12627bfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627c01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627c04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12627c08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627c0a jne 0x12627c24 */
  if (!C.zf) goto L_12627c24;
  /* 12627c0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12627c11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12627c14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627c16 not edx */
  EDX = (~(EDX));
  /* 12627c18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627c1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12627c1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12627c1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627c22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12627c24:;
  /* 12627c24 jmp 0x12627c91 */
  goto L_12627c91;
L_12627c26:;
  /* 12627c26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12627c29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627c2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12627c31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627c33 not eax */
  EAX = (~(EAX));
  /* 12627c35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627c38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627c3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12627c42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12627c44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627c47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627c4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12627c51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627c54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627c57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12627c5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12627c5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627c60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627c63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12627c66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627c69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627c6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12627c70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12627c72 jne 0x12627c91 */
  if (!C.zf) goto L_12627c91;
  /* 12627c74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12627c77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627c7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12627c7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627c81 not eax */
  EAX = (~(EAX));
  /* 12627c83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627c86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12627c89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12627c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627c8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12627c91:;
  /* 12627c91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627c94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12627c97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627c9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12627c9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12627ca0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627ca3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12627ca6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627ca9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12627cac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12627caf:;
  /* 12627caf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627cb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12627cb5:;
  /* 12627cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12627cb8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12627cbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627cbd jne 0x12627ccb */
  if (!C.zf) goto L_12627ccb;
  /* 12627cbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12627cc2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627cc5 je 0x12627ddb */
  if (C.zf) goto L_12627ddb;
L_12627ccb:;
  /* 12627ccb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12627cce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627cd1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12627cd4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12627cd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627cda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12627cdd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12627ce0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12627ce3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627ce6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12627ce9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12627cec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12627cef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627cf2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12627cf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627cf8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12627cfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627cfe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12627d01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627d04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627d07 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12627d0a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627d0d jne 0x12627ddb */
  if (!C.zf) goto L_12627ddb;
  /* 12627d13 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627d17 jae 0x12627d74 */
  if (!C.cf) goto L_12627d74;
  /* 12627d19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d1c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627d1f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12627d23 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d26 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627d29 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12627d2c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12627d2f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d32 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627d35 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12627d38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12627d3a jne 0x12627d52 */
  if (!C.zf) goto L_12627d52;
  /* 12627d3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12627d41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12627d44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627d49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12627d4b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12627d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627d50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12627d52:;
  /* 12627d52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12627d57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12627d5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627d5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627d5f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12627d66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12627d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627d6b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12627d72 jmp 0x12627ddb */
  goto L_12627ddb;
L_12627d74:;
  /* 12627d74 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d77 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627d7a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12627d7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d81 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627d84 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12627d87 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12627d8a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627d8d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627d90 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12627d93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12627d95 jne 0x12627db2 */
  if (!C.zf) goto L_12627db2;
  /* 12627d97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12627d9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627d9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12627da2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627da7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12627daa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12627dac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627daf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12627db2:;
  /* 12627db2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12627db5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627db8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12627dbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627dbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627dc2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627dc5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12627dcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12627dce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627dd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12627dd4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12627ddb:;
  /* 12627ddb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627dde mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12627de1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12627de3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12627de6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627de9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12627dec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12627def mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627df2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12627df4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627df7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627dfa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12627dfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627dff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627e02 jne 0x12627f69 */
  if (!C.zf) goto L_12627f69;
  /* 12627e08 cmp dword ptr [0x12650ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627e0f je 0x12627f58 */
  if (C.zf) goto L_12627f58;
  /* 12627e15 mov eax, dword ptr [0x12650e98] */
  EAX = (r32((uint32_t)(0x12650e98)));
  /* 12627e1a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12627e1d mov ecx, dword ptr [0x12650ea0] */
  ECX = (r32((uint32_t)(0x12650ea0)));
  /* 12627e23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12627e26 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627e28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12627e2b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12627e30 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12627e35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12627e38 push eax */
  push32((uint32_t)(EAX));
  /* 12627e39 call dword ptr [0x12652330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652330))), 0x12627e3fu);
  /* 12627e3f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12627e44 mov ecx, dword ptr [0x12650e98] */
  ECX = (r32((uint32_t)(0x12650e98)));
  /* 12627e4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627e4c mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12627e51 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12627e54 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12627e56 mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12627e5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12627e5f mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12627e64 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12627e67 mov edx, dword ptr [0x12650e98] */
  EDX = (r32((uint32_t)(0x12650e98)));
  /* 12627e6d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12627e78 mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12627e7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12627e80 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12627e83 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12627e86 mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12627e8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12627e8e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12627e91 mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12627e97 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12627e9a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12627e9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627ea0 jne 0x12627eb6 */
  if (!C.zf) goto L_12627eb6;
  /* 12627ea2 mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12627ea8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12627eab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12627ead mov ecx, dword ptr [0x12650ea0] */
  ECX = (r32((uint32_t)(0x12650ea0)));
  /* 12627eb3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12627eb6:;
  /* 12627eb6 mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12627ebc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627ec0 jne 0x12627f58 */
  if (!C.zf) goto L_12627f58;
  /* 12627ec6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12627ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12627ecd mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12627ed2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12627ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 12627ed6 call dword ptr [0x12652330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652330))), 0x12627edcu);
  /* 12627edc mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12627ee2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12627ee5 push eax */
  push32((uint32_t)(EAX));
  /* 12627ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12627ee8 mov ecx, dword ptr [0x12650eac] */
  ECX = (r32((uint32_t)(0x12650eac)));
  /* 12627eee push ecx */
  push32((uint32_t)(ECX));
  /* 12627eef call dword ptr [0x1265232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265232c))), 0x12627ef5u);
  /* 12627ef5 mov edx, dword ptr [0x12650ea4] */
  EDX = (r32((uint32_t)(0x12650ea4)));
  /* 12627efb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12627efe mov eax, dword ptr [0x12650ea8] */
  EAX = (r32((uint32_t)(0x12650ea8)));
  /* 12627f03 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627f05 mov ecx, dword ptr [0x12650ea0] */
  ECX = (r32((uint32_t)(0x12650ea0)));
  /* 12627f0b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627f0e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627f10 push eax */
  push32((uint32_t)(EAX));
  /* 12627f11 mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12627f17 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627f1a push edx */
  push32((uint32_t)(EDX));
  /* 12627f1b mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12627f20 push eax */
  push32((uint32_t)(EAX));
  /* 12627f21 call 0x1262b4d0 */
  push32(0x12627f26u); f_1262b4d0();
  /* 12627f26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627f29 mov ecx, dword ptr [0x12650ea4] */
  ECX = (r32((uint32_t)(0x12650ea4)));
  /* 12627f2f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627f32 mov dword ptr [0x12650ea4], ecx */
  w32((uint32_t)(0x12650ea4), (ECX));
  /* 12627f38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627f3b cmp edx, dword ptr [0x12650ea0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12650ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627f41 jbe 0x12627f4c */
  if ((C.cf||C.zf)) goto L_12627f4c;
  /* 12627f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627f46 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627f49 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12627f4c:;
  /* 12627f4c mov ecx, dword ptr [0x12650ea8] */
  ECX = (r32((uint32_t)(0x12650ea8)));
  /* 12627f52 mov dword ptr [0x12650e9c], ecx */
  w32((uint32_t)(0x12650e9c), (ECX));
L_12627f58:;
  /* 12627f58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627f5b mov dword ptr [0x12650ea0], edx */
  w32((uint32_t)(0x12650ea0), (EDX));
  /* 12627f61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627f64 mov dword ptr [0x12650e98], eax */
  w32((uint32_t)(0x12650e98), (EAX));
L_12627f69:;
  /* 12627f69 mov esp, ebp */
  ESP = (EBP);
  /* 12627f6b pop ebp */
  EBP = (pop32());
  /* 12627f6c ret  */
  ESPCHK(0x126279a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x12627f70 (1334 bytes, 427 insns) */
void f_12627f70(void) {
  FTRACE(0x12627f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12627f71 mov ebp, esp */
  EBP = (ESP);
  /* 12627f73 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627f76 push esi */
  push32((uint32_t)(ESI));
  /* 12627f77 mov eax, dword ptr [0x12650ea4] */
  EAX = (r32((uint32_t)(0x12650ea4)));
  /* 12627f7c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12627f7f mov ecx, dword ptr [0x12650ea8] */
  ECX = (r32((uint32_t)(0x12650ea8)));
  /* 12627f85 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627f87 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12627f8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627f8d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627f90 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12627f93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12627f96 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12627f99 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12627f9c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627f9f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12627fa2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627fa6 jge 0x12627fbc */
  if ((C.sf==C.of)) goto L_12627fbc;
  /* 12627fa8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12627fab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12627fae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12627fb0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12627fb3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12627fba jmp 0x12627fd1 */
  goto L_12627fd1;
L_12627fbc:;
  /* 12627fbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12627fc3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12627fc6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627fc9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12627fcc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12627fce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12627fd1:;
  /* 12627fd1 mov ecx, dword ptr [0x12650e9c] */
  ECX = (r32((uint32_t)(0x12650e9c)));
  /* 12627fd7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12627fda:;
  /* 12627fda mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12627fdd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627fe0 jae 0x12628006 */
  if (!C.cf) goto L_12628006;
  /* 12627fe2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12627fe5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12627fe8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12627fea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12627fed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12627ff0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12627ff3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12627ff5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12627ff7 je 0x12627ffb */
  if (C.zf) goto L_12627ffb;
  /* 12627ff9 jmp 0x12628006 */
  goto L_12628006;
L_12627ffb:;
  /* 12627ffb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12627ffe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628001 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12628004 jmp 0x12627fda */
  goto L_12627fda;
L_12628006:;
  /* 12628006 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628009 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262800c jne 0x126280ed */
  if (!C.zf) goto L_126280ed;
  /* 12628012 mov eax, dword ptr [0x12650ea8] */
  EAX = (r32((uint32_t)(0x12650ea8)));
  /* 12628017 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1262801a:;
  /* 1262801a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262801d cmp ecx, dword ptr [0x12650e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628023 jae 0x12628049 */
  if (!C.cf) goto L_12628049;
  /* 12628025 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628028 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262802b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1262802d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628030 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12628033 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12628036 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12628038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262803a je 0x1262803e */
  if (C.zf) goto L_1262803e;
  /* 1262803c jmp 0x12628049 */
  goto L_12628049;
L_1262803e:;
  /* 1262803e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628041 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628044 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12628047 jmp 0x1262801a */
  goto L_1262801a;
L_12628049:;
  /* 12628049 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262804c cmp ecx, dword ptr [0x12650e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628052 jne 0x126280ed */
  if (!C.zf) goto L_126280ed;
L_12628058:;
  /* 12628058 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262805b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262805e jae 0x12628076 */
  if (!C.cf) goto L_12628076;
  /* 12628060 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628063 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628067 je 0x1262806b */
  if (C.zf) goto L_1262806b;
  /* 12628069 jmp 0x12628076 */
  goto L_12628076;
L_1262806b:;
  /* 1262806b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262806e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628071 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12628074 jmp 0x12628058 */
  goto L_12628058;
L_12628076:;
  /* 12628076 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628079 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262807c jne 0x126280c7 */
  if (!C.zf) goto L_126280c7;
  /* 1262807e mov eax, dword ptr [0x12650ea8] */
  EAX = (r32((uint32_t)(0x12650ea8)));
  /* 12628083 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12628086:;
  /* 12628086 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628089 cmp ecx, dword ptr [0x12650e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262808f jae 0x126280a7 */
  if (!C.cf) goto L_126280a7;
  /* 12628091 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628094 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628098 je 0x1262809c */
  if (C.zf) goto L_1262809c;
  /* 1262809a jmp 0x126280a7 */
  goto L_126280a7;
L_1262809c:;
  /* 1262809c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262809f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126280a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126280a5 jmp 0x12628086 */
  goto L_12628086;
L_126280a7:;
  /* 126280a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126280aa cmp ecx, dword ptr [0x12650e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126280b0 jne 0x126280c7 */
  if (!C.zf) goto L_126280c7;
  /* 126280b2 call 0x126284b0 */
  push32(0x126280b7u); f_126284b0();
  /* 126280b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126280ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126280be jne 0x126280c7 */
  if (!C.zf) goto L_126280c7;
  /* 126280c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126280c2 jmp 0x126284a1 */
  goto L_126284a1;
L_126280c7:;
  /* 126280c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126280ca push edx */
  push32((uint32_t)(EDX));
  /* 126280cb call 0x126285c0 */
  push32(0x126280d0u); f_126285c0();
  /* 126280d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126280d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126280d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 126280d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 126280db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126280de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 126280e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126280e4 jne 0x126280ed */
  if (!C.zf) goto L_126280ed;
  /* 126280e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126280e8 jmp 0x126284a1 */
  goto L_126284a1;
L_126280ed:;
  /* 126280ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126280f0 mov dword ptr [0x12650e9c], edx */
  w32((uint32_t)(0x12650e9c), (EDX));
  /* 126280f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126280f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 126280fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 126280ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628102 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12628104 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12628107 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262810b je 0x12628130 */
  if (C.zf) goto L_12628130;
  /* 1262810d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628110 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628113 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12628116 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1262811a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262811d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628120 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12628123 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1262812a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1262812c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262812e jne 0x12628165 */
  if (!C.zf) goto L_12628165;
L_12628130:;
  /* 12628130 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12628137:;
  /* 12628137 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262813a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1262813d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12628140 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12628144 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628147 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1262814a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1262814d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12628154 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12628156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12628158 jne 0x12628165 */
  if (!C.zf) goto L_12628165;
  /* 1262815a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262815d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628160 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12628163 jmp 0x12628137 */
  goto L_12628137;
L_12628165:;
  /* 12628165 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628168 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262816e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628171 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12628178 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262817b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12628182 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628185 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628188 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262818b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1262818f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12628192 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628196 jne 0x126281b2 */
  if (!C.zf) goto L_126281b2;
  /* 12628198 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1262819f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126281a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 126281a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 126281a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 126281af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_126281b2:;
  /* 126281b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126281b6 jl 0x126281cb */
  if ((C.sf!=C.of)) goto L_126281cb;
  /* 126281b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126281bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 126281bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 126281c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126281c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126281c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 126281c9 jmp 0x126281b2 */
  goto L_126281b2;
L_126281cb:;
  /* 126281cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 126281ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126281d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 126281d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126281d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126281db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126281dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126281e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126281e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126281e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 126281e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126281ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126281ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126281f3 jle 0x126281fc */
  if ((C.zf||C.sf!=C.of)) goto L_126281fc;
  /* 126281f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_126281fc:;
  /* 126281fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126281ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628202 je 0x12628420 */
  if (C.zf) goto L_12628420;
  /* 12628208 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262820b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262820e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628211 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628214 jne 0x126282ea */
  if (!C.zf) goto L_126282ea;
  /* 1262821a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262821e jge 0x1262827f */
  if ((C.sf==C.of)) goto L_1262827f;
  /* 12628220 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628225 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628228 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1262822a not eax */
  EAX = (~(EAX));
  /* 1262822c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262822f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628232 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12628236 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12628238 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262823b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1262823e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12628242 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628245 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628248 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1262824b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1262824e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628251 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628254 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12628257 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1262825a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262825d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12628261 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12628263 jne 0x1262827d */
  if (!C.zf) goto L_1262827d;
  /* 12628265 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1262826a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262826d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1262826f not eax */
  EAX = (~(EAX));
  /* 12628271 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628274 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12628276 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12628278 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262827b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1262827d:;
  /* 1262827d jmp 0x126282ea */
  goto L_126282ea;
L_1262827f:;
  /* 1262827f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628282 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628285 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1262828a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1262828c not edx */
  EDX = (~(EDX));
  /* 1262828e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628291 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628294 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1262829b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1262829d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126282a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126282a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 126282aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 126282ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126282b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 126282b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 126282b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126282b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126282bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 126282bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 126282c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126282c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 126282c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126282cb jne 0x126282ea */
  if (!C.zf) goto L_126282ea;
  /* 126282cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126282d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126282d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 126282d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 126282da not edx */
  EDX = (~(EDX));
  /* 126282dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126282df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126282e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 126282e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126282e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_126282ea:;
  /* 126282ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126282ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 126282f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126282f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 126282f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 126282f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126282fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126282ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628302 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12628305 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12628308 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262830c je 0x12628420 */
  if (C.zf) goto L_12628420;
  /* 12628312 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628318 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1262831b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262831e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628321 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12628324 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628327 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1262832a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262832d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12628330 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12628333 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12628336 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628339 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1262833c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262833f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628342 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628345 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12628348 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262834b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262834e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628351 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628354 jne 0x12628420 */
  if (!C.zf) goto L_12628420;
  /* 1262835a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262835e jge 0x126283ba */
  if ((C.sf==C.of)) goto L_126283ba;
  /* 12628360 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628363 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628366 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1262836a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1262836d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628370 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12628373 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12628375 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628378 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262837b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1262837e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12628380 jne 0x12628398 */
  if (!C.zf) goto L_12628398;
  /* 12628382 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628387 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262838a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1262838c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262838f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12628391 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12628393 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628396 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12628398:;
  /* 12628398 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1262839d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126283a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 126283a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126283a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 126283a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 126283ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126283ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126283b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126283b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 126283b8 jmp 0x12628420 */
  goto L_12628420;
L_126283ba:;
  /* 126283ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 126283bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126283c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 126283c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126283c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126283ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 126283cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 126283cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126283d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126283d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 126283d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126283da jne 0x126283f7 */
  if (!C.zf) goto L_126283f7;
  /* 126283dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126283df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126283e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 126283e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 126283e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126283ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126283ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 126283f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126283f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_126283f7:;
  /* 126283f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126283fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126283fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628402 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628404 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628407 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1262840a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12628411 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12628413 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628416 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628419 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12628420:;
  /* 12628420 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628424 je 0x1262843a */
  if (C.zf) goto L_1262843a;
  /* 12628426 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262842c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1262842e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628431 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12628437 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1262843a:;
  /* 1262843a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262843d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628440 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12628443 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628446 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628449 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262844c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1262844e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628451 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628454 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628457 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262845a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1262845d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628460 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12628462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628465 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12628467 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262846a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262846d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1262846f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12628471 jne 0x12628493 */
  if (!C.zf) goto L_12628493;
  /* 12628473 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628476 cmp eax, dword ptr [0x12650ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12650ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262847c jne 0x12628493 */
  if (!C.zf) goto L_12628493;
  /* 1262847e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628481 cmp ecx, dword ptr [0x12650e98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650e98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628487 jne 0x12628493 */
  if (!C.zf) goto L_12628493;
  /* 12628489 mov dword ptr [0x12650ea0], 0 */
  w32((uint32_t)(0x12650ea0), (0x0u));
L_12628493:;
  /* 12628493 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12628496 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628499 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1262849b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262849e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_126284a1:;
  /* 126284a1 pop esi */
  ESI = (pop32());
  /* 126284a2 mov esp, ebp */
  ESP = (EBP);
  /* 126284a4 pop ebp */
  EBP = (pop32());
  /* 126284a5 ret  */
  ESPCHK(0x12627f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x126284b0 (271 bytes, 78 insns) */
void f_126284b0(void) {
  FTRACE(0x126284b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126284b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126284b1 mov ebp, esp */
  EBP = (ESP);
  /* 126284b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126284b4 mov eax, dword ptr [0x12650ea4] */
  EAX = (r32((uint32_t)(0x12650ea4)));
  /* 126284b9 cmp eax, dword ptr [0x12650e88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12650e88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126284bf jne 0x1262850b */
  if (!C.zf) goto L_1262850b;
  /* 126284c1 mov ecx, dword ptr [0x12650e88] */
  ECX = (r32((uint32_t)(0x12650e88)));
  /* 126284c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126284ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126284cd push ecx */
  push32((uint32_t)(ECX));
  /* 126284ce mov edx, dword ptr [0x12650ea8] */
  EDX = (r32((uint32_t)(0x12650ea8)));
  /* 126284d4 push edx */
  push32((uint32_t)(EDX));
  /* 126284d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126284d7 mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 126284dc push eax */
  push32((uint32_t)(EAX));
  /* 126284dd call dword ptr [0x12652350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652350))), 0x126284e3u);
  /* 126284e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126284e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126284ea jne 0x126284f3 */
  if (!C.zf) goto L_126284f3;
  /* 126284ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126284ee jmp 0x126285bb */
  goto L_126285bb;
L_126284f3:;
  /* 126284f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126284f6 mov dword ptr [0x12650ea8], ecx */
  w32((uint32_t)(0x12650ea8), (ECX));
  /* 126284fc mov edx, dword ptr [0x12650e88] */
  EDX = (r32((uint32_t)(0x12650e88)));
  /* 12628502 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628505 mov dword ptr [0x12650e88], edx */
  w32((uint32_t)(0x12650e88), (EDX));
L_1262850b:;
  /* 1262850b mov eax, dword ptr [0x12650ea4] */
  EAX = (r32((uint32_t)(0x12650ea4)));
  /* 12628510 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12628513 mov ecx, dword ptr [0x12650ea8] */
  ECX = (r32((uint32_t)(0x12650ea8)));
  /* 12628519 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262851b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262851e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12628523 push 8 */
  push32((uint32_t)(0x8u));
  /* 12628525 mov edx, dword ptr [0x12650eac] */
  EDX = (r32((uint32_t)(0x12650eac)));
  /* 1262852b push edx */
  push32((uint32_t)(EDX));
  /* 1262852c call dword ptr [0x1265234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265234c))), 0x12628532u);
  /* 12628532 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628535 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12628538 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262853b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262853f jne 0x12628545 */
  if (!C.zf) goto L_12628545;
  /* 12628541 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12628543 jmp 0x126285bb */
  goto L_126285bb;
L_12628545:;
  /* 12628545 push 4 */
  push32((uint32_t)(0x4u));
  /* 12628547 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1262854c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12628551 push 0 */
  push32((uint32_t)(0x0u));
  /* 12628553 call dword ptr [0x12652338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652338))), 0x12628559u);
  /* 12628559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262855c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1262855f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628562 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628566 jne 0x12628582 */
  if (!C.zf) goto L_12628582;
  /* 12628568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262856b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1262856e push ecx */
  push32((uint32_t)(ECX));
  /* 1262856f push 0 */
  push32((uint32_t)(0x0u));
  /* 12628571 mov edx, dword ptr [0x12650eac] */
  EDX = (r32((uint32_t)(0x12650eac)));
  /* 12628577 push edx */
  push32((uint32_t)(EDX));
  /* 12628578 call dword ptr [0x1265232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265232c))), 0x1262857eu);
  /* 1262857e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12628580 jmp 0x126285bb */
  goto L_126285bb;
L_12628582:;
  /* 12628582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628585 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262858b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262858e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12628595 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628598 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1262859f mov eax, dword ptr [0x12650ea4] */
  EAX = (r32((uint32_t)(0x12650ea4)));
  /* 126285a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126285a7 mov dword ptr [0x12650ea4], eax */
  w32((uint32_t)(0x12650ea4), (EAX));
  /* 126285ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126285af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 126285b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 126285b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_126285bb:;
  /* 126285bb mov esp, ebp */
  ESP = (EBP);
  /* 126285bd pop ebp */
  EBP = (pop32());
  /* 126285be ret  */
  ESPCHK(0x126284b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085c0 @ 0x126285c0 (494 bytes, 149 insns) */
void f_126285c0(void) {
  FTRACE(0x126285c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126285c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126285c1 mov ebp, esp */
  EBP = (ESP);
  /* 126285c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126285c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126285c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 126285cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 126285cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126285d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 126285d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126285d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_126285df:;
  /* 126285df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126285e3 jl 0x126285f8 */
  if ((C.sf!=C.of)) goto L_126285f8;
  /* 126285e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126285e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 126285ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126285ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126285f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126285f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 126285f6 jmp 0x126285df */
  goto L_126285df;
L_126285f8:;
  /* 126285f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 126285fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12628601 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628604 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1262860b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1262860e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12628615 jmp 0x12628620 */
  goto L_12628620;
L_12628617:;
  /* 12628617 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262861a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262861d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12628620:;
  /* 12628620 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628624 jge 0x12628646 */
  if ((C.sf==C.of)) goto L_12628646;
  /* 12628626 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628629 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262862c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1262862f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12628632 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628635 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628638 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1262863b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262863e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628641 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12628644 jmp 0x12628617 */
  goto L_12628617;
L_12628646:;
  /* 12628646 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628649 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1262864c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262864f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12628652 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628654 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12628657 push 4 */
  push32((uint32_t)(0x4u));
  /* 12628659 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1262865e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12628663 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628666 push edx */
  push32((uint32_t)(EDX));
  /* 12628667 call dword ptr [0x12652338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652338))), 0x1262866du);
  /* 1262866d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262866f jne 0x12628679 */
  if (!C.zf) goto L_12628679;
  /* 12628671 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12628674 jmp 0x126287aa */
  goto L_126287aa;
L_12628679:;
  /* 12628679 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262867c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628681 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12628684 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628687 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262868a jmp 0x12628698 */
  goto L_12628698;
L_1262868c:;
  /* 1262868c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262868f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628695 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12628698:;
  /* 12628698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262869b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262869e ja 0x126286fd */
  if ((!C.cf&&!C.zf)) goto L_126286fd;
  /* 126286a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126286a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 126286aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126286ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 126286b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126286ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126286bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126286c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126286c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 126286c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126286cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126286d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126286d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 126286d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126286db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126286e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126286e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 126286e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126286ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126286ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 126286f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126286f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 126286fb jmp 0x1262868c */
  goto L_1262868c;
L_126286fd:;
  /* 126286fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12628700 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628706 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12628709 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262870c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262870f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628712 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12628715 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628718 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1262871b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1262871e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628721 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628724 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12628727 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262872a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262872d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628730 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12628733 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628736 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12628739 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1262873c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262873f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628742 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12628745 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628748 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262874b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12628753 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628756 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628759 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12628764 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628767 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1262876b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262876e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12628771 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12628774 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628777 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1262877a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262877c jne 0x1262878d */
  if (!C.zf) goto L_1262878d;
  /* 1262877e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628781 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12628784 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12628787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262878a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1262878d:;
  /* 1262878d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628792 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628795 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628797 not edx */
  EDX = (~(EDX));
  /* 12628799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262879c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1262879f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 126287a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126287a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 126287a7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_126287aa:;
  /* 126287aa mov esp, ebp */
  ESP = (EBP);
  /* 126287ac pop ebp */
  EBP = (pop32());
  /* 126287ad ret  */
  ESPCHK(0x126285c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b0 @ 0x126287b0 (1515 bytes, 489 insns) */
void f_126287b0(void) {
  FTRACE(0x126287b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126287b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126287b1 mov ebp, esp */
  EBP = (ESP);
  /* 126287b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126287b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126287b9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126287bc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 126287be mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 126287c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126287c4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 126287c7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 126287ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126287cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126287d0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126287d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126287d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126287d9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 126287dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126287df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126287e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126287e8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126287eb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 126287f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 126287f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126287f8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126287fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126287fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628801 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12628803 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628806 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12628809 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262880c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262880f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12628812 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628815 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12628817 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1262881a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262881d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628820 jle 0x12628ad6 */
  if ((C.zf||C.sf!=C.of)) goto L_12628ad6;
  /* 12628826 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628829 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1262882c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262882e jne 0x1262883b */
  if (!C.zf) goto L_1262883b;
  /* 12628830 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628833 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628836 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628839 jle 0x12628842 */
  if ((C.zf||C.sf!=C.of)) goto L_12628842;
L_1262883b:;
  /* 1262883b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262883d jmp 0x12628d97 */
  goto L_12628d97;
L_12628842:;
  /* 12628842 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628845 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12628848 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262884b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1262884e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628852 jbe 0x1262885b */
  if ((C.cf||C.zf)) goto L_1262885b;
  /* 12628854 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1262885b:;
  /* 1262885b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262885e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628861 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12628864 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628867 jne 0x1262893d */
  if (!C.zf) goto L_1262893d;
  /* 1262886d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628871 jae 0x126288d2 */
  if (!C.cf) goto L_126288d2;
  /* 12628873 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628878 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262887b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1262887d not edx */
  EDX = (~(EDX));
  /* 1262887f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628882 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628885 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12628889 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1262888b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262888e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628891 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12628895 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628898 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262889b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1262889e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 126288a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 126288a4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126288a7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 126288aa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126288ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126288b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 126288b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126288b6 jne 0x126288d0 */
  if (!C.zf) goto L_126288d0;
  /* 126288b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 126288bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126288c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 126288c2 not edx */
  EDX = (~(EDX));
  /* 126288c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126288c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126288c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 126288cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126288ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_126288d0:;
  /* 126288d0 jmp 0x1262893d */
  goto L_1262893d;
L_126288d2:;
  /* 126288d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126288d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126288d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 126288dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 126288df not eax */
  EAX = (~(EAX));
  /* 126288e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126288e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 126288e7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 126288ee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 126288f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126288f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126288f6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 126288fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628900 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628903 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12628906 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12628909 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262890c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262890f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12628912 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628915 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628918 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1262891c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262891e jne 0x1262893d */
  if (!C.zf) goto L_1262893d;
  /* 12628920 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628923 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628926 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1262892b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1262892d not eax */
  EAX = (~(EAX));
  /* 1262892f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628932 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12628935 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12628937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262893a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1262893d:;
  /* 1262893d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628940 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12628943 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628946 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628949 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1262894c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262894f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12628952 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628955 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12628958 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1262895b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262895e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628961 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628964 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12628967 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262896b jle 0x12628ab7 */
  if ((C.zf||C.sf!=C.of)) goto L_12628ab7;
  /* 12628971 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628974 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628977 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1262897a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262897d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12628980 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628983 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12628986 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262898a jbe 0x12628993 */
  if ((C.cf||C.zf)) goto L_12628993;
  /* 1262898c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12628993:;
  /* 12628993 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628996 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12628999 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1262899c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1262899f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126289a2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126289a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126289a8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 126289ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126289ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126289b1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 126289b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126289b7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126289ba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 126289bd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126289c0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126289c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126289c6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 126289c9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126289cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126289cf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 126289d2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126289d5 jne 0x12628aa3 */
  if (!C.zf) goto L_12628aa3;
  /* 126289db cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126289df jae 0x12628a3c */
  if (!C.cf) goto L_12628a3c;
  /* 126289e1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126289e4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126289e7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 126289eb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126289ee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126289f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 126289f4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 126289f7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126289fa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126289fd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12628a00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12628a02 jne 0x12628a1a */
  if (!C.zf) goto L_12628a1a;
  /* 12628a04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628a09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628a0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628a0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628a11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12628a13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12628a15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628a18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12628a1a:;
  /* 12628a1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628a1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628a22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12628a24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628a27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628a2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12628a2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12628a30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628a33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628a36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12628a3a jmp 0x12628aa3 */
  goto L_12628aa3;
L_12628a3c:;
  /* 12628a3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628a3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628a42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12628a46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628a49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628a4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12628a4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12628a52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628a55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628a58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12628a5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12628a5d jne 0x12628a7a */
  if (!C.zf) goto L_12628a7a;
  /* 12628a5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628a62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628a65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628a6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628a6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628a6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628a72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12628a74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628a77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12628a7a:;
  /* 12628a7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628a7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628a80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628a85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12628a87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628a8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628a8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12628a94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12628a96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628a99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628a9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12628aa3:;
  /* 12628aa3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628aa6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628aa9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12628aab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628aae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628ab1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628ab4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12628ab7:;
  /* 12628ab7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12628aba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628abd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628ac0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12628ac2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12628ac5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628ac8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628acb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628ace mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12628ad1 jmp 0x12628d92 */
  goto L_12628d92;
L_12628ad6:;
  /* 12628ad6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12628ad9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628adc jge 0x12628d92 */
  if ((C.sf==C.of)) goto L_12628d92;
  /* 12628ae2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12628ae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628ae8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628aeb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12628aed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12628af0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628af3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628af6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628af9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12628afc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628aff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628b02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12628b05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628b08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628b0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12628b0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628b11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12628b14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628b17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12628b1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628b1e jbe 0x12628b27 */
  if ((C.cf||C.zf)) goto L_12628b27;
  /* 12628b20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12628b27:;
  /* 12628b27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628b2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12628b2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12628b2f jne 0x12628c70 */
  if (!C.zf) goto L_12628c70;
  /* 12628b35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12628b38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12628b3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628b3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12628b41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628b45 jbe 0x12628b4e */
  if ((C.cf||C.zf)) goto L_12628b4e;
  /* 12628b47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12628b4e:;
  /* 12628b4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628b51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628b54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12628b57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628b5a jne 0x12628c30 */
  if (!C.zf) goto L_12628c30;
  /* 12628b60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628b64 jae 0x12628bc5 */
  if (!C.cf) goto L_12628bc5;
  /* 12628b66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628b6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628b6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628b70 not edx */
  EDX = (~(EDX));
  /* 12628b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628b75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628b78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12628b7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12628b7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628b81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628b84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12628b88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628b8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628b8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12628b91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12628b94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628b97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628b9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12628b9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628ba0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628ba3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12628ba7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12628ba9 jne 0x12628bc3 */
  if (!C.zf) goto L_12628bc3;
  /* 12628bab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628bb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628bb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628bb5 not edx */
  EDX = (~(EDX));
  /* 12628bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628bba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12628bbc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12628bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628bc1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12628bc3:;
  /* 12628bc3 jmp 0x12628c30 */
  goto L_12628c30;
L_12628bc5:;
  /* 12628bc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628bc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628bcb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628bd0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12628bd2 not eax */
  EAX = (~(EAX));
  /* 12628bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628bd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628bda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12628be1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12628be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628be6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628be9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12628bf0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628bf3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628bf6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12628bf9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12628bfc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628bff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628c02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12628c05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628c08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628c0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12628c0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12628c11 jne 0x12628c30 */
  if (!C.zf) goto L_12628c30;
  /* 12628c13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12628c16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628c19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628c1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12628c20 not eax */
  EAX = (~(EAX));
  /* 12628c22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628c25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12628c28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12628c2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628c2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12628c30:;
  /* 12628c30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628c33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12628c36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628c39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628c3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12628c3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628c42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12628c45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12628c48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12628c4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12628c4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628c51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628c54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12628c57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628c5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12628c5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628c60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12628c63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628c67 jbe 0x12628c70 */
  if ((C.cf||C.zf)) goto L_12628c70;
  /* 12628c69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12628c70:;
  /* 12628c70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12628c73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12628c76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12628c79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12628c7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628c7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628c82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628c85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12628c88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628c8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628c8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12628c91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12628c94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628c97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12628c9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628c9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628ca0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628ca3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12628ca6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628ca9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628cac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12628caf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628cb2 jne 0x12628d7e */
  if (!C.zf) goto L_12628d7e;
  /* 12628cb8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628cbc jae 0x12628d18 */
  if (!C.cf) goto L_12628d18;
  /* 12628cbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628cc1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628cc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12628cc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628ccb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628cce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12628cd1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12628cd3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628cd6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628cd9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12628cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12628cde jne 0x12628cf6 */
  if (!C.zf) goto L_12628cf6;
  /* 12628ce0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628ce5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12628ce8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12628cea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628ced mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12628cef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12628cf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628cf4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12628cf6:;
  /* 12628cf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628cfb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12628cfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628d03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628d06 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12628d0a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12628d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628d0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628d12 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12628d16 jmp 0x12628d7e */
  goto L_12628d7e;
L_12628d18:;
  /* 12628d18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628d1b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628d1e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12628d22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628d25 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628d28 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12628d2b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12628d2d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628d30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628d33 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12628d36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12628d38 jne 0x12628d55 */
  if (!C.zf) goto L_12628d55;
  /* 12628d3a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12628d3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628d40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12628d45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12628d47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628d4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12628d4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12628d4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12628d52 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12628d55:;
  /* 12628d55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12628d58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628d5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628d60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628d62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628d65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628d68 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12628d6f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12628d71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628d74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12628d77 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12628d7e:;
  /* 12628d7e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628d81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628d84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12628d86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12628d89 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628d8c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12628d8f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12628d92:;
  /* 12628d92 mov eax, 1 */
  EAX = (0x1u);
L_12628d97:;
  /* 12628d97 mov esp, ebp */
  ESP = (EBP);
  /* 12628d99 pop ebp */
  EBP = (pop32());
  /* 12628d9a ret  */
  ESPCHK(0x126287b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008da0 @ 0x12628da0 (304 bytes, 79 insns) */
void f_12628da0(void) {
  FTRACE(0x12628da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12628da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12628da1 mov ebp, esp */
  EBP = (ESP);
  /* 12628da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12628da4 cmp dword ptr [0x12650ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628dab je 0x12628ecc */
  if (C.zf) goto L_12628ecc;
  /* 12628db1 mov eax, dword ptr [0x12650e98] */
  EAX = (r32((uint32_t)(0x12650e98)));
  /* 12628db6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12628db9 mov ecx, dword ptr [0x12650ea0] */
  ECX = (r32((uint32_t)(0x12650ea0)));
  /* 12628dbf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12628dc2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628dc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12628dc7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12628dcc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12628dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12628dd4 push eax */
  push32((uint32_t)(EAX));
  /* 12628dd5 call dword ptr [0x12652330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652330))), 0x12628ddbu);
  /* 12628ddb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12628de0 mov ecx, dword ptr [0x12650e98] */
  ECX = (r32((uint32_t)(0x12650e98)));
  /* 12628de6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12628de8 mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12628ded mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12628df0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12628df2 mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12628df8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12628dfb mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12628e03 mov edx, dword ptr [0x12650e98] */
  EDX = (r32((uint32_t)(0x12650e98)));
  /* 12628e09 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12628e14 mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12628e1c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12628e1f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12628e22 mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e27 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12628e2a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12628e2d mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12628e36 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12628e3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12628e3c jne 0x12628e52 */
  if (!C.zf) goto L_12628e52;
  /* 12628e3e mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e44 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12628e47 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12628e49 mov ecx, dword ptr [0x12650ea0] */
  ECX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e4f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12628e52:;
  /* 12628e52 mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e58 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628e5c jne 0x12628ec2 */
  if (!C.zf) goto L_12628ec2;
  /* 12628e5e cmp dword ptr [0x12650ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12650ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628e65 jle 0x12628ec2 */
  if ((C.zf||C.sf!=C.of)) goto L_12628ec2;
  /* 12628e67 mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e6c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12628e6f push ecx */
  push32((uint32_t)(ECX));
  /* 12628e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12628e72 mov edx, dword ptr [0x12650eac] */
  EDX = (r32((uint32_t)(0x12650eac)));
  /* 12628e78 push edx */
  push32((uint32_t)(EDX));
  /* 12628e79 call dword ptr [0x1265232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265232c))), 0x12628e7fu);
  /* 12628e7f mov eax, dword ptr [0x12650ea4] */
  EAX = (r32((uint32_t)(0x12650ea4)));
  /* 12628e84 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12628e87 mov ecx, dword ptr [0x12650ea8] */
  ECX = (r32((uint32_t)(0x12650ea8)));
  /* 12628e8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628e8f mov edx, dword ptr [0x12650ea0] */
  EDX = (r32((uint32_t)(0x12650ea0)));
  /* 12628e95 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628e98 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628e9a push ecx */
  push32((uint32_t)(ECX));
  /* 12628e9b mov eax, dword ptr [0x12650ea0] */
  EAX = (r32((uint32_t)(0x12650ea0)));
  /* 12628ea0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628ea3 push eax */
  push32((uint32_t)(EAX));
  /* 12628ea4 mov ecx, dword ptr [0x12650ea0] */
  ECX = (r32((uint32_t)(0x12650ea0)));
  /* 12628eaa push ecx */
  push32((uint32_t)(ECX));
  /* 12628eab call 0x1262b4d0 */
  push32(0x12628eb0u); f_1262b4d0();
  /* 12628eb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12628eb3 mov edx, dword ptr [0x12650ea4] */
  EDX = (r32((uint32_t)(0x12650ea4)));
  /* 12628eb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628ebc mov dword ptr [0x12650ea4], edx */
  w32((uint32_t)(0x12650ea4), (EDX));
L_12628ec2:;
  /* 12628ec2 mov dword ptr [0x12650ea0], 0 */
  w32((uint32_t)(0x12650ea0), (0x0u));
L_12628ecc:;
  /* 12628ecc mov esp, ebp */
  ESP = (EBP);
  /* 12628ece pop ebp */
  EBP = (pop32());
  /* 12628ecf ret  */
  ESPCHK(0x12628da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ed0 @ 0x12628ed0 (1565 bytes, 343 insns) */
void f_12628ed0(void) {
  FTRACE(0x12628ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12628ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12628ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12628ed3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12628ed9 mov eax, dword ptr [0x12650ea4] */
  EAX = (r32((uint32_t)(0x12650ea4)));
  /* 12628ede imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12628ee1 push eax */
  push32((uint32_t)(EAX));
  /* 12628ee2 mov ecx, dword ptr [0x12650ea8] */
  ECX = (r32((uint32_t)(0x12650ea8)));
  /* 12628ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 12628ee9 call dword ptr [0x1265224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265224c))), 0x12628eefu);
  /* 12628eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12628ef1 je 0x12628efb */
  if (C.zf) goto L_12628efb;
  /* 12628ef3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12628ef6 jmp 0x126294e9 */
  goto L_126294e9;
L_12628efb:;
  /* 12628efb mov edx, dword ptr [0x12650ea8] */
  EDX = (r32((uint32_t)(0x12650ea8)));
  /* 12628f01 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12628f07 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12628f11 jmp 0x12628f22 */
  goto L_12628f22;
L_12628f13:;
  /* 12628f13 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12628f19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628f1c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12628f22:;
  /* 12628f22 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12628f28 cmp ecx, dword ptr [0x12650ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628f2e jge 0x126294e7 */
  if ((C.sf==C.of)) goto L_126294e7;
  /* 12628f34 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12628f3a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12628f3d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12628f43 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12628f48 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12628f4e push ecx */
  push32((uint32_t)(ECX));
  /* 12628f4f call dword ptr [0x1265224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265224c))), 0x12628f55u);
  /* 12628f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12628f57 je 0x12628f63 */
  if (C.zf) goto L_12628f63;
  /* 12628f59 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12628f5e jmp 0x126294e9 */
  goto L_126294e9;
L_12628f63:;
  /* 12628f63 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12628f69 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12628f6c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12628f72 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12628f78 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628f7e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12628f81 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12628f87 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12628f8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12628f8d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12628f97 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12628fa1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12628fa8 jmp 0x12628fb3 */
  goto L_12628fb3;
L_12628faa:;
  /* 12628faa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12628fad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628fb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12628fb3:;
  /* 12628fb3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628fb7 jge 0x126294ab */
  if ((C.sf==C.of)) goto L_126294ab;
  /* 12628fbd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12628fc7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12628fd1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12628fdb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12628fe5 jmp 0x12628ff6 */
  goto L_12628ff6;
L_12628fe7:;
  /* 12628fe7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12628fed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12628ff0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12628ff6:;
  /* 12628ff6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12628ffd jge 0x12629012 */
  if ((C.sf==C.of)) goto L_12629012;
  /* 12628fff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12629005 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12629010 jmp 0x12628fe7 */
  goto L_12628fe7;
L_12629012:;
  /* 12629012 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629016 jl 0x1262944d */
  if ((C.sf!=C.of)) goto L_1262944d;
  /* 1262901c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12629021 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12629027 push ecx */
  push32((uint32_t)(ECX));
  /* 12629028 call dword ptr [0x1265224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265224c))), 0x1262902eu);
  /* 1262902e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12629030 je 0x1262903c */
  if (C.zf) goto L_1262903c;
  /* 12629032 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12629037 jmp 0x126294e9 */
  goto L_126294e9;
L_1262903c:;
  /* 1262903c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12629042 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12629045 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1262904f jmp 0x12629060 */
  goto L_12629060;
L_12629051:;
  /* 12629051 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12629057 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262905a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12629060:;
  /* 12629060 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629067 jge 0x126291e4 */
  if ((C.sf==C.of)) goto L_126291e4;
  /* 1262906d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12629070 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629073 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12629079 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1262907f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629085 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1262908b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12629091 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629095 jne 0x126290a2 */
  if (!C.zf) goto L_126290a2;
  /* 12629097 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1262909d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126290a0 je 0x126290ac */
  if (C.zf) goto L_126290ac;
L_126290a2:;
  /* 126290a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 126290a7 jmp 0x126294e9 */
  goto L_126294e9;
L_126290ac:;
  /* 126290ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 126290b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126290b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 126290ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 126290c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 126290c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 126290cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 126290cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126290d1 je 0x12629109 */
  if (C.zf) goto L_12629109;
  /* 126290d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 126290d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126290dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 126290e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126290ec jle 0x126290f8 */
  if ((C.zf||C.sf!=C.of)) goto L_126290f8;
  /* 126290ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 126290f3 jmp 0x126294e9 */
  goto L_126294e9;
L_126290f8:;
  /* 126290f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 126290fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629101 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12629107 jmp 0x1262914b */
  goto L_1262914b;
L_12629109:;
  /* 12629109 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1262910f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12629112 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12629115 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1262911b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629122 jle 0x1262912e */
  if ((C.zf||C.sf!=C.of)) goto L_1262912e;
  /* 12629124 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1262912e:;
  /* 1262912e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12629134 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1262913b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262913e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12629144 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1262914b:;
  /* 1262914b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629152 jl 0x1262916d */
  if ((C.sf!=C.of)) goto L_1262916d;
  /* 12629154 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1262915a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1262915d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262915f jne 0x1262916d */
  if (!C.zf) goto L_1262916d;
  /* 12629161 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262916b jle 0x12629177 */
  if ((C.zf||C.sf!=C.of)) goto L_12629177;
L_1262916d:;
  /* 1262916d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12629172 jmp 0x126294e9 */
  goto L_126294e9;
L_12629177:;
  /* 12629177 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1262917d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629183 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12629186 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262918c je 0x12629198 */
  if (C.zf) goto L_12629198;
  /* 1262918e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12629193 jmp 0x126294e9 */
  goto L_126294e9;
L_12629198:;
  /* 12629198 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1262919e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126291a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 126291aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 126291b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126291b6 jb 0x126290ac */
  if (C.cf) goto L_126290ac;
  /* 126291bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 126291c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126291c8 je 0x126291d4 */
  if (C.zf) goto L_126291d4;
  /* 126291ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 126291cf jmp 0x126294e9 */
  goto L_126294e9;
L_126291d4:;
  /* 126291d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126291d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126291dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126291df jmp 0x12629051 */
  goto L_12629051;
L_126291e4:;
  /* 126291e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126291e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126291e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126291ef je 0x126291fb */
  if (C.zf) goto L_126291fb;
  /* 126291f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 126291f6 jmp 0x126294e9 */
  goto L_126294e9;
L_126291fb:;
  /* 126291fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126291fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12629204 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1262920b jmp 0x12629216 */
  goto L_12629216;
L_1262920d:;
  /* 1262920d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12629210 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629213 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12629216:;
  /* 12629216 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262921a jge 0x1262944d */
  if ((C.sf==C.of)) goto L_1262944d;
  /* 12629220 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1262922a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12629230 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12629236:;
  /* 12629236 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1262923c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1262923f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12629245 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1262924b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629251 je 0x1262937a */
  if (C.zf) goto L_1262937a;
  /* 12629257 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262925a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12629260 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629267 je 0x1262937a */
  if (C.zf) goto L_1262937a;
  /* 1262926d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12629273 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629279 jb 0x1262928e */
  if (C.cf) goto L_1262928e;
  /* 1262927b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12629281 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629286 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262928c jb 0x12629298 */
  if (C.cf) goto L_12629298;
L_1262928e:;
  /* 1262928e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12629293 jmp 0x126294e9 */
  goto L_126294e9;
L_12629298:;
  /* 12629298 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1262929e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 126292a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 126292aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 126292b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126292b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 126292b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126292b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126292be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_126292c4:;
  /* 126292c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126292c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126292cd je 0x126292ee */
  if (C.zf) goto L_126292ee;
  /* 126292cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126292d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126292d8 jne 0x126292dc */
  if (!C.zf) goto L_126292dc;
  /* 126292da jmp 0x126292ee */
  goto L_126292ee;
L_126292dc:;
  /* 126292dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126292df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126292e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 126292e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126292e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126292e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 126292ec jmp 0x126292c4 */
  goto L_126292c4;
L_126292ee:;
  /* 126292ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126292f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126292f7 jne 0x12629303 */
  if (!C.zf) goto L_12629303;
  /* 126292f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 126292fe jmp 0x126294e9 */
  goto L_126294e9;
L_12629303:;
  /* 12629303 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12629309 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262930b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1262930e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12629311 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12629317 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262931e jle 0x1262932a */
  if ((C.zf||C.sf!=C.of)) goto L_1262932a;
  /* 12629320 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1262932a:;
  /* 1262932a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12629330 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629333 je 0x1262933f */
  if (C.zf) goto L_1262933f;
  /* 12629335 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1262933a jmp 0x126294e9 */
  goto L_126294e9;
L_1262933f:;
  /* 1262933f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12629345 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12629348 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262934e je 0x1262935a */
  if (C.zf) goto L_1262935a;
  /* 12629350 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12629355 jmp 0x126294e9 */
  goto L_126294e9;
L_1262935a:;
  /* 1262935a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12629360 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12629366 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1262936c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262936f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12629375 jmp 0x12629236 */
  goto L_12629236;
L_1262937a:;
  /* 1262937a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629381 je 0x126293f1 */
  if (C.zf) goto L_126293f1;
  /* 12629383 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629387 jge 0x126293bb */
  if ((C.sf==C.of)) goto L_126293bb;
  /* 12629389 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1262938e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12629391 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12629393 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12629399 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1262939b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 126293a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 126293a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126293a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 126293ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 126293b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126293b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 126293b9 jmp 0x126293f1 */
  goto L_126293f1;
L_126293bb:;
  /* 126293bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126293be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126293c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 126293c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 126293c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 126293ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126293d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 126293d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126293d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126293dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 126293e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 126293e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 126293e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126293eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_126293f1:;
  /* 126293f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 126293f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126293fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629400 jne 0x12629414 */
  if (!C.zf) goto L_12629414;
  /* 12629402 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12629405 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1262940b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629412 je 0x1262941e */
  if (C.zf) goto L_1262941e;
L_12629414:;
  /* 12629414 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12629419 jmp 0x126294e9 */
  goto L_126294e9;
L_1262941e:;
  /* 1262941e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12629424 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12629427 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262942d je 0x12629439 */
  if (C.zf) goto L_12629439;
  /* 1262942f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12629434 jmp 0x126294e9 */
  goto L_126294e9;
L_12629439:;
  /* 12629439 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1262943f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629442 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12629448 jmp 0x1262920d */
  goto L_1262920d;
L_1262944d:;
  /* 1262944d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12629450 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12629456 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1262945c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629460 jne 0x1262947a */
  if (!C.zf) goto L_1262947a;
  /* 12629462 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12629465 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1262946b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12629471 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629478 je 0x12629481 */
  if (C.zf) goto L_12629481;
L_1262947a:;
  /* 1262947a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1262947f jmp 0x126294e9 */
  goto L_126294e9;
L_12629481:;
  /* 12629481 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12629487 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262948d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12629493 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12629496 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262949b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1262949e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126294a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 126294a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126294a6 jmp 0x12628faa */
  goto L_12628faa;
L_126294ab:;
  /* 126294ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 126294b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 126294b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126294b9 jne 0x126294cc */
  if (!C.zf) goto L_126294cc;
  /* 126294bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 126294c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 126294c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126294ca je 0x126294d3 */
  if (C.zf) goto L_126294d3;
L_126294cc:;
  /* 126294cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 126294d1 jmp 0x126294e9 */
  goto L_126294e9;
L_126294d3:;
  /* 126294d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 126294d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126294dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 126294e2 jmp 0x12628f13 */
  goto L_12628f13;
L_126294e7:;
  /* 126294e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_126294e9:;
  /* 126294e9 mov esp, ebp */
  ESP = (EBP);
  /* 126294eb pop ebp */
  EBP = (pop32());
  /* 126294ec ret  */
  ESPCHK(0x12628ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x126294f0 (250 bytes, 92 insns) */
void f_126294f0(void) {
  FTRACE(0x126294f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126294f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126294f1 mov ebp, esp */
  EBP = (ESP);
  /* 126294f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126294f6 push ebx */
  push32((uint32_t)(EBX));
  /* 126294f7 push esi */
  push32((uint32_t)(ESI));
  /* 126294f8 push edi */
  push32((uint32_t)(EDI));
  /* 126294f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 126294fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 126294ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12629502 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12629505:;
  /* 12629505 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629509 jne 0x12629529 */
  if (!C.zf) goto L_12629529;
  /* 1262950b push 0x1264aef0 */
  push32((uint32_t)(0x1264aef0u));
  /* 12629510 push 0 */
  push32((uint32_t)(0x0u));
  /* 12629512 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12629514 push 0x1264aee4 */
  push32((uint32_t)(0x1264aee4u));
  /* 12629519 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262951b call 0x126226a0 */
  push32(0x12629520u); f_126226a0();
  /* 12629520 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629523 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629526 jne 0x12629529 */
  if (!C.zf) goto L_12629529;
  /* 12629528 int3  */
  x86_unimpl("int3 @ 0x12629528");
L_12629529:;
  /* 12629529 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262952b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262952d jne 0x12629505 */
  if (!C.zf) goto L_12629505;
L_1262952f:;
  /* 1262952f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629533 jne 0x12629553 */
  if (!C.zf) goto L_12629553;
  /* 12629535 push 0x1264aed4 */
  push32((uint32_t)(0x1264aed4u));
  /* 1262953a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262953c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1262953e push 0x1264aee4 */
  push32((uint32_t)(0x1264aee4u));
  /* 12629543 push 2 */
  push32((uint32_t)(0x2u));
  /* 12629545 call 0x126226a0 */
  push32(0x1262954au); f_126226a0();
  /* 1262954a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262954d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629550 jne 0x12629553 */
  if (!C.zf) goto L_12629553;
  /* 12629552 int3  */
  x86_unimpl("int3 @ 0x12629552");
L_12629553:;
  /* 12629553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12629555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12629557 jne 0x1262952f */
  if (!C.zf) goto L_1262952f;
  /* 12629559 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262955c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12629563 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12629569 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1262956c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262956f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12629572 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12629574 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629577 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1262957e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12629581 push ecx */
  push32((uint32_t)(ECX));
  /* 12629582 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12629585 push edx */
  push32((uint32_t)(EDX));
  /* 12629586 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629589 push eax */
  push32((uint32_t)(EAX));
  /* 1262958a call 0x1262a570 */
  push32(0x1262958fu); f_1262a570();
  /* 1262958f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629592 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12629595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629598 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1262959b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262959e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126295a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 126295a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126295a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126295ab jl 0x126295cf */
  if ((C.sf!=C.of)) goto L_126295cf;
  /* 126295ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126295b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126295b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 126295b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126295b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126295bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 126295c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126295c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126295c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126295c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126295cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126295cd jmp 0x126295e0 */
  goto L_126295e0;
L_126295cf:;
  /* 126295cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126295d2 push edx */
  push32((uint32_t)(EDX));
  /* 126295d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126295d5 call 0x1262a2f0 */
  push32(0x126295dau); f_1262a2f0();
  /* 126295da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126295dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_126295e0:;
  /* 126295e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 126295e3 pop edi */
  EDI = (pop32());
  /* 126295e4 pop esi */
  ESI = (pop32());
  /* 126295e5 pop ebx */
  EBX = (pop32());
  /* 126295e6 mov esp, ebp */
  ESP = (EBP);
  /* 126295e8 pop ebp */
  EBP = (pop32());
  /* 126295e9 ret  */
  ESPCHK(0x126294f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f0 @ 0x126295f0 (183 bytes, 58 insns) */
void f_126295f0(void) {
  FTRACE(0x126295f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126295f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126295f1 mov ebp, esp */
  EBP = (ESP);
  /* 126295f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126295f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126295f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126295fc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629601 ja 0x1262961a */
  if ((!C.cf&&!C.zf)) goto L_1262961a;
  /* 12629603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12629606 mov edx, dword ptr [0x1264dc98] */
  EDX = (r32((uint32_t)(0x1264dc98)));
  /* 1262960c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262960e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12629612 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12629615 jmp 0x126296a3 */
  goto L_126296a3;
L_1262961a:;
  /* 1262961a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262961d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12629620 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12629626 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262962c mov edx, dword ptr [0x1264dc98] */
  EDX = (r32((uint32_t)(0x1264dc98)));
  /* 12629632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12629634 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12629638 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1262963d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262963f je 0x12629663 */
  if (C.zf) goto L_12629663;
  /* 12629641 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12629644 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12629647 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262964d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12629650 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12629653 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12629656 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1262965a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12629661 jmp 0x12629674 */
  goto L_12629674;
L_12629663:;
  /* 12629663 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12629666 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12629669 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1262966d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12629674:;
  /* 12629674 push 1 */
  push32((uint32_t)(0x1u));
  /* 12629676 push 0 */
  push32((uint32_t)(0x0u));
  /* 12629678 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262967a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1262967d push ecx */
  push32((uint32_t)(ECX));
  /* 1262967e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12629681 push edx */
  push32((uint32_t)(EDX));
  /* 12629682 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12629685 push eax */
  push32((uint32_t)(EAX));
  /* 12629686 push 1 */
  push32((uint32_t)(0x1u));
  /* 12629688 call 0x1262b810 */
  push32(0x1262968du); f_1262b810();
  /* 1262968d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12629692 jne 0x12629698 */
  if (!C.zf) goto L_12629698;
  /* 12629694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12629696 jmp 0x126296a3 */
  goto L_126296a3;
L_12629698:;
  /* 12629698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262969b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126296a0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_126296a3:;
  /* 126296a3 mov esp, ebp */
  ESP = (EBP);
  /* 126296a5 pop ebp */
  EBP = (pop32());
  /* 126296a6 ret  */
  ESPCHK(0x126295f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x126296b0 (836 bytes, 238 insns) */
void f_126296b0(void) {
  FTRACE(0x126296b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126296b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126296b1 mov ebp, esp */
  EBP = (ESP);
  /* 126296b3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126296b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 126296b8 call 0x12626fe0 */
  push32(0x126296bdu); f_12626fe0();
  /* 126296bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126296c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126296c3 push eax */
  push32((uint32_t)(EAX));
  /* 126296c4 call 0x12629a00 */
  push32(0x126296c9u); f_12629a00();
  /* 126296c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126296cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126296cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126296d2 cmp ecx, dword ptr [0x12650be4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650be4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126296d8 jne 0x126296eb */
  if (!C.zf) goto L_126296eb;
  /* 126296da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 126296dc call 0x12627080 */
  push32(0x126296e1u); f_12627080();
  /* 126296e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126296e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126296e6 jmp 0x126299f0 */
  goto L_126299f0;
L_126296eb:;
  /* 126296eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126296ef jne 0x1262970c */
  if (!C.zf) goto L_1262970c;
  /* 126296f1 call 0x12629ae0 */
  push32(0x126296f6u); f_12629ae0();
  /* 126296f6 call 0x12629b60 */
  push32(0x126296fbu); f_12629b60();
  /* 126296fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 126296fd call 0x12627080 */
  push32(0x12629702u); f_12627080();
  /* 12629702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629705 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12629707 jmp 0x126299f0 */
  goto L_126299f0;
L_1262970c:;
  /* 1262970c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12629713 jmp 0x1262971e */
  goto L_1262971e;
L_12629715:;
  /* 12629715 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629718 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262971b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1262971e:;
  /* 1262971e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629722 jae 0x1262986f */
  if (!C.cf) goto L_1262986f;
  /* 12629728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262972b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262972e mov ecx, dword ptr [eax + 0x1264deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1264deb8)));
  /* 12629734 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629737 jne 0x1262986a */
  if (!C.zf) goto L_1262986a;
  /* 1262973d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12629744 jmp 0x1262974f */
  goto L_1262974f;
L_12629746:;
  /* 12629746 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629749 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262974c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1262974f:;
  /* 1262974f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629756 jae 0x12629764 */
  if (!C.cf) goto L_12629764;
  /* 12629758 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262975b mov byte ptr [eax + 0x12650d80], 0 */
  w8((uint32_t)(EAX + 0x12650d80), (0x0u));
  /* 12629762 jmp 0x12629746 */
  goto L_12629746;
L_12629764:;
  /* 12629764 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262976b jmp 0x12629776 */
  goto L_12629776;
L_1262976d:;
  /* 1262976d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12629770 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629773 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12629776:;
  /* 12629776 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262977a jae 0x126297f7 */
  if (!C.cf) goto L_126297f7;
  /* 1262977c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262977f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12629782 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12629785 lea ecx, [edx + eax*8 + 0x1264dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1264dec8));
  /* 1262978c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262978f jmp 0x1262979a */
  goto L_1262979a;
L_12629791:;
  /* 12629791 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12629794 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629797 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1262979a:;
  /* 1262979a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262979d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262979f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 126297a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126297a3 je 0x126297f2 */
  if (C.zf) goto L_126297f2;
  /* 126297a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126297a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126297aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 126297ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126297af je 0x126297f2 */
  if (C.zf) goto L_126297f2;
  /* 126297b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126297b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126297b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126297b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 126297bb jmp 0x126297c6 */
  goto L_126297c6;
L_126297bd:;
  /* 126297bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126297c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126297c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_126297c6:;
  /* 126297c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126297c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126297cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 126297ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126297d1 ja 0x126297f0 */
  if ((!C.cf&&!C.zf)) goto L_126297f0;
  /* 126297d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126297d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126297d9 mov dl, byte ptr [eax + 0x12650d81] */
  DL = (r8((uint32_t)(EAX + 0x12650d81)));
  /* 126297df or dl, byte ptr [ecx + 0x1264deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1264deb0))); DL = (_r); fl_logic(_r,8); }
  /* 126297e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126297e8 mov byte ptr [eax + 0x12650d81], dl */
  w8((uint32_t)(EAX + 0x12650d81), (DL));
  /* 126297ee jmp 0x126297bd */
  goto L_126297bd;
L_126297f0:;
  /* 126297f0 jmp 0x12629791 */
  goto L_12629791;
L_126297f2:;
  /* 126297f2 jmp 0x1262976d */
  goto L_1262976d;
L_126297f7:;
  /* 126297f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126297fa mov dword ptr [0x12650be4], ecx */
  w32((uint32_t)(0x12650be4), (ECX));
  /* 12629800 mov dword ptr [0x12650c6c], 1 */
  w32((uint32_t)(0x12650c6c), (0x1u));
  /* 1262980a mov edx, dword ptr [0x12650be4] */
  EDX = (r32((uint32_t)(0x12650be4)));
  /* 12629810 push edx */
  push32((uint32_t)(EDX));
  /* 12629811 call 0x12629a60 */
  push32(0x12629816u); f_12629a60();
  /* 12629816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629819 mov dword ptr [0x12650e84], eax */
  w32((uint32_t)(0x12650e84), (EAX));
  /* 1262981e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12629825 jmp 0x12629830 */
  goto L_12629830;
L_12629827:;
  /* 12629827 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262982a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262982d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12629830:;
  /* 12629830 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629834 jae 0x12629854 */
  if (!C.cf) goto L_12629854;
  /* 12629836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629839 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262983c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262983f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12629842 mov cx, word ptr [ecx + eax*2 + 0x1264debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1264debc)));
  /* 1262984a mov word ptr [edx*2 + 0x12650c60], cx */
  w16((uint32_t)(EDX*2 + 0x12650c60), (CX));
  /* 12629852 jmp 0x12629827 */
  goto L_12629827;
L_12629854:;
  /* 12629854 call 0x12629b60 */
  push32(0x12629859u); f_12629b60();
  /* 12629859 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1262985b call 0x12627080 */
  push32(0x12629860u); f_12627080();
  /* 12629860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12629865 jmp 0x126299f0 */
  goto L_126299f0;
L_1262986a:;
  /* 1262986a jmp 0x12629715 */
  goto L_12629715;
L_1262986f:;
  /* 1262986f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12629872 push edx */
  push32((uint32_t)(EDX));
  /* 12629873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12629876 push eax */
  push32((uint32_t)(EAX));
  /* 12629877 call dword ptr [0x12652354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652354))), 0x1262987du);
  /* 1262987d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629880 jne 0x126299c2 */
  if (!C.zf) goto L_126299c2;
  /* 12629886 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1262988d jmp 0x12629898 */
  goto L_12629898;
L_1262988f:;
  /* 1262988f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629895 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12629898:;
  /* 12629898 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262989f jae 0x126298ad */
  if (!C.cf) goto L_126298ad;
  /* 126298a1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126298a4 mov byte ptr [edx + 0x12650d80], 0 */
  w8((uint32_t)(EDX + 0x12650d80), (0x0u));
  /* 126298ab jmp 0x1262988f */
  goto L_1262988f;
L_126298ad:;
  /* 126298ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126298b0 mov dword ptr [0x12650be4], eax */
  w32((uint32_t)(0x12650be4), (EAX));
  /* 126298b5 mov dword ptr [0x12650e84], 0 */
  w32((uint32_t)(0x12650e84), (0x0u));
  /* 126298bf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126298c3 jbe 0x1262997e */
  if ((C.cf||C.zf)) goto L_1262997e;
  /* 126298c9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 126298cc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 126298cf jmp 0x126298da */
  goto L_126298da;
L_126298d1:;
  /* 126298d1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126298d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126298d7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_126298da:;
  /* 126298da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 126298dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126298df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 126298e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126298e3 je 0x1262992c */
  if (C.zf) goto L_1262992c;
  /* 126298e5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126298e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126298ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 126298ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126298ef je 0x1262992c */
  if (C.zf) goto L_1262992c;
  /* 126298f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 126298f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126298f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126298f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 126298fb jmp 0x12629906 */
  goto L_12629906;
L_126298fd:;
  /* 126298fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629900 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629903 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12629906:;
  /* 12629906 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12629909 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262990b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1262990e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629911 ja 0x1262992a */
  if ((!C.cf&&!C.zf)) goto L_1262992a;
  /* 12629913 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629916 mov cl, byte ptr [eax + 0x12650d81] */
  CL = (r8((uint32_t)(EAX + 0x12650d81)));
  /* 1262991c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1262991f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629922 mov byte ptr [edx + 0x12650d81], cl */
  w8((uint32_t)(EDX + 0x12650d81), (CL));
  /* 12629928 jmp 0x126298fd */
  goto L_126298fd;
L_1262992a:;
  /* 1262992a jmp 0x126298d1 */
  goto L_126298d1;
L_1262992c:;
  /* 1262992c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12629933 jmp 0x1262993e */
  goto L_1262993e;
L_12629935:;
  /* 12629935 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629938 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262993b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1262993e:;
  /* 1262993e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629945 jae 0x1262995e */
  if (!C.cf) goto L_1262995e;
  /* 12629947 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262994a mov dl, byte ptr [ecx + 0x12650d81] */
  DL = (r8((uint32_t)(ECX + 0x12650d81)));
  /* 12629950 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12629953 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12629956 mov byte ptr [eax + 0x12650d81], dl */
  w8((uint32_t)(EAX + 0x12650d81), (DL));
  /* 1262995c jmp 0x12629935 */
  goto L_12629935;
L_1262995e:;
  /* 1262995e mov ecx, dword ptr [0x12650be4] */
  ECX = (r32((uint32_t)(0x12650be4)));
  /* 12629964 push ecx */
  push32((uint32_t)(ECX));
  /* 12629965 call 0x12629a60 */
  push32(0x1262996au); f_12629a60();
  /* 1262996a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262996d mov dword ptr [0x12650e84], eax */
  w32((uint32_t)(0x12650e84), (EAX));
  /* 12629972 mov dword ptr [0x12650c6c], 1 */
  w32((uint32_t)(0x12650c6c), (0x1u));
  /* 1262997c jmp 0x12629988 */
  goto L_12629988;
L_1262997e:;
  /* 1262997e mov dword ptr [0x12650c6c], 0 */
  w32((uint32_t)(0x12650c6c), (0x0u));
L_12629988:;
  /* 12629988 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262998f jmp 0x1262999a */
  goto L_1262999a;
L_12629991:;
  /* 12629991 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12629994 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629997 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1262999a:;
  /* 1262999a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262999e jae 0x126299af */
  if (!C.cf) goto L_126299af;
  /* 126299a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126299a3 mov word ptr [eax*2 + 0x12650c60], 0 */
  w16((uint32_t)(EAX*2 + 0x12650c60), (0x0u));
  /* 126299ad jmp 0x12629991 */
  goto L_12629991;
L_126299af:;
  /* 126299af call 0x12629b60 */
  push32(0x126299b4u); f_12629b60();
  /* 126299b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 126299b6 call 0x12627080 */
  push32(0x126299bbu); f_12627080();
  /* 126299bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126299be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126299c0 jmp 0x126299f0 */
  goto L_126299f0;
L_126299c2:;
  /* 126299c2 cmp dword ptr [0x1264f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126299c9 je 0x126299e3 */
  if (C.zf) goto L_126299e3;
  /* 126299cb call 0x12629ae0 */
  push32(0x126299d0u); f_12629ae0();
  /* 126299d0 call 0x12629b60 */
  push32(0x126299d5u); f_12629b60();
  /* 126299d5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 126299d7 call 0x12627080 */
  push32(0x126299dcu); f_12627080();
  /* 126299dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126299df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126299e1 jmp 0x126299f0 */
  goto L_126299f0;
L_126299e3:;
  /* 126299e3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 126299e5 call 0x12627080 */
  push32(0x126299eau); f_12627080();
  /* 126299ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126299ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_126299f0:;
  /* 126299f0 mov esp, ebp */
  ESP = (EBP);
  /* 126299f2 pop ebp */
  EBP = (pop32());
  /* 126299f3 ret  */
  ESPCHK(0x126296b0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12629a00 (89 bytes, 21 insns) */
void f_12629a00(void) {
  FTRACE(0x12629a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12629a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12629a01 mov ebp, esp */
  EBP = (ESP);
  /* 12629a03 mov dword ptr [0x1264f700], 0 */
  w32((uint32_t)(0x1264f700), (0x0u));
  /* 12629a0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629a11 jne 0x12629a25 */
  if (!C.zf) goto L_12629a25;
  /* 12629a13 mov dword ptr [0x1264f700], 1 */
  w32((uint32_t)(0x1264f700), (0x1u));
  /* 12629a1d call dword ptr [0x1265235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265235c))), 0x12629a23u);
  /* 12629a23 jmp 0x12629a57 */
  goto L_12629a57;
L_12629a25:;
  /* 12629a25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629a29 jne 0x12629a3d */
  if (!C.zf) goto L_12629a3d;
  /* 12629a2b mov dword ptr [0x1264f700], 1 */
  w32((uint32_t)(0x1264f700), (0x1u));
  /* 12629a35 call dword ptr [0x12652358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652358))), 0x12629a3bu);
  /* 12629a3b jmp 0x12629a57 */
  goto L_12629a57;
L_12629a3d:;
  /* 12629a3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629a41 jne 0x12629a54 */
  if (!C.zf) goto L_12629a54;
  /* 12629a43 mov dword ptr [0x1264f700], 1 */
  w32((uint32_t)(0x1264f700), (0x1u));
  /* 12629a4d mov eax, dword ptr [0x1264f720] */
  EAX = (r32((uint32_t)(0x1264f720)));
  /* 12629a52 jmp 0x12629a57 */
  goto L_12629a57;
L_12629a54:;
  /* 12629a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12629a57:;
  /* 12629a57 pop ebp */
  EBP = (pop32());
  /* 12629a58 ret  */
  ESPCHK(0x12629a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a60 @ 0x12629a60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12629a60(void) {
  FTRACE(0x12629a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12629a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12629a61 mov ebp, esp */
  EBP = (ESP);
  /* 12629a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12629a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12629a67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12629a6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629a6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12629a73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12629a76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629a7a ja 0x12629aaa */
  if ((!C.cf&&!C.zf)) goto L_12629aaa;
  /* 12629a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629a7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12629a81 mov dl, byte ptr [eax + 0x12629ac4] */
  DL = (r8((uint32_t)(EAX + 0x12629ac4)));
  /* 12629a87 jmp dword ptr [edx*4 + 0x12629ab0] */
  switch (EDX) {
    case 0: goto L_12629a8e;
    case 1: goto L_12629a95;
    case 2: goto L_12629a9c;
    case 3: goto L_12629aa3;
    case 4: goto L_12629aaa;
    default: x86_unimpl("switch@0x12629a87 out of table"); return;
  }
L_12629a8e:;
  /* 12629a8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12629a93 jmp 0x12629aac */
  goto L_12629aac;
L_12629a95:;
  /* 12629a95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12629a9a jmp 0x12629aac */
  goto L_12629aac;
L_12629a9c:;
  /* 12629a9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12629aa1 jmp 0x12629aac */
  goto L_12629aac;
L_12629aa3:;
  /* 12629aa3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12629aa8 jmp 0x12629aac */
  goto L_12629aac;
L_12629aaa:;
  /* 12629aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12629aac:;
  /* 12629aac mov esp, ebp */
  ESP = (EBP);
  /* 12629aae pop ebp */
  EBP = (pop32());
  /* 12629aaf ret  */
  ESPCHK(0x12629a60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12629ae0 (116 bytes, 29 insns) */
void f_12629ae0(void) {
  FTRACE(0x12629ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12629ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12629ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12629ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12629ae4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12629aeb jmp 0x12629af6 */
  goto L_12629af6;
L_12629aed:;
  /* 12629aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629af0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629af3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12629af6:;
  /* 12629af6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629afd jge 0x12629b0b */
  if ((C.sf==C.of)) goto L_12629b0b;
  /* 12629aff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629b02 mov byte ptr [ecx + 0x12650d80], 0 */
  w8((uint32_t)(ECX + 0x12650d80), (0x0u));
  /* 12629b09 jmp 0x12629aed */
  goto L_12629aed;
L_12629b0b:;
  /* 12629b0b mov dword ptr [0x12650be4], 0 */
  w32((uint32_t)(0x12650be4), (0x0u));
  /* 12629b15 mov dword ptr [0x12650c6c], 0 */
  w32((uint32_t)(0x12650c6c), (0x0u));
  /* 12629b1f mov dword ptr [0x12650e84], 0 */
  w32((uint32_t)(0x12650e84), (0x0u));
  /* 12629b29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12629b30 jmp 0x12629b3b */
  goto L_12629b3b;
L_12629b32:;
  /* 12629b32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629b35 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629b38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12629b3b:;
  /* 12629b3b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629b3f jge 0x12629b50 */
  if ((C.sf==C.of)) goto L_12629b50;
  /* 12629b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629b44 mov word ptr [eax*2 + 0x12650c60], 0 */
  w16((uint32_t)(EAX*2 + 0x12650c60), (0x0u));
  /* 12629b4e jmp 0x12629b32 */
  goto L_12629b32;
L_12629b50:;
  /* 12629b50 mov esp, ebp */
  ESP = (EBP);
  /* 12629b52 pop ebp */
  EBP = (pop32());
  /* 12629b53 ret  */
  ESPCHK(0x12629ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b60 @ 0x12629b60 (770 bytes, 175 insns) */
void f_12629b60(void) {
  FTRACE(0x12629b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12629b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12629b61 mov ebp, esp */
  EBP = (ESP);
  /* 12629b63 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12629b69 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12629b6f push eax */
  push32((uint32_t)(EAX));
  /* 12629b70 mov ecx, dword ptr [0x12650be4] */
  ECX = (r32((uint32_t)(0x12650be4)));
  /* 12629b76 push ecx */
  push32((uint32_t)(ECX));
  /* 12629b77 call dword ptr [0x12652354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652354))), 0x12629b7du);
  /* 12629b7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629b80 jne 0x12629d99 */
  if (!C.zf) goto L_12629d99;
  /* 12629b86 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12629b90 jmp 0x12629ba1 */
  goto L_12629ba1;
L_12629b92:;
  /* 12629b92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629b98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629b9b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12629ba1:;
  /* 12629ba1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629bab jae 0x12629bc2 */
  if (!C.cf) goto L_12629bc2;
  /* 12629bad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629bb3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12629bb9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12629bc0 jmp 0x12629b92 */
  goto L_12629b92;
L_12629bc2:;
  /* 12629bc2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12629bc9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12629bcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12629bd2 jmp 0x12629bdd */
  goto L_12629bdd;
L_12629bd4:;
  /* 12629bd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629bd7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629bda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12629bdd:;
  /* 12629bdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629be0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12629be2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12629be4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12629be6 je 0x12629c28 */
  if (C.zf) goto L_12629c28;
  /* 12629be8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629beb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12629bed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12629bef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12629bf5 jmp 0x12629c06 */
  goto L_12629c06;
L_12629bf7:;
  /* 12629bf7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629bfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629c00 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12629c06:;
  /* 12629c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12629c09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12629c0b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12629c0e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629c14 ja 0x12629c26 */
  if ((!C.cf&&!C.zf)) goto L_12629c26;
  /* 12629c16 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629c1c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12629c24 jmp 0x12629bf7 */
  goto L_12629bf7;
L_12629c26:;
  /* 12629c26 jmp 0x12629bd4 */
  goto L_12629bd4;
L_12629c28:;
  /* 12629c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12629c2a mov eax, dword ptr [0x12650e84] */
  EAX = (r32((uint32_t)(0x12650e84)));
  /* 12629c2f push eax */
  push32((uint32_t)(EAX));
  /* 12629c30 mov ecx, dword ptr [0x12650be4] */
  ECX = (r32((uint32_t)(0x12650be4)));
  /* 12629c36 push ecx */
  push32((uint32_t)(ECX));
  /* 12629c37 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12629c3d push edx */
  push32((uint32_t)(EDX));
  /* 12629c3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12629c43 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12629c49 push eax */
  push32((uint32_t)(EAX));
  /* 12629c4a push 1 */
  push32((uint32_t)(0x1u));
  /* 12629c4c call 0x1262b810 */
  push32(0x12629c51u); f_1262b810();
  /* 12629c51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12629c56 mov ecx, dword ptr [0x12650be4] */
  ECX = (r32((uint32_t)(0x12650be4)));
  /* 12629c5c push ecx */
  push32((uint32_t)(ECX));
  /* 12629c5d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12629c62 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12629c68 push edx */
  push32((uint32_t)(EDX));
  /* 12629c69 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12629c6e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12629c74 push eax */
  push32((uint32_t)(EAX));
  /* 12629c75 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12629c7a mov ecx, dword ptr [0x12650e84] */
  ECX = (r32((uint32_t)(0x12650e84)));
  /* 12629c80 push ecx */
  push32((uint32_t)(ECX));
  /* 12629c81 call 0x1262b9d0 */
  push32(0x12629c86u); f_1262b9d0();
  /* 12629c86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12629c8b mov edx, dword ptr [0x12650be4] */
  EDX = (r32((uint32_t)(0x12650be4)));
  /* 12629c91 push edx */
  push32((uint32_t)(EDX));
  /* 12629c92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12629c97 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12629c9d push eax */
  push32((uint32_t)(EAX));
  /* 12629c9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12629ca3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12629ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 12629caa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12629caf mov edx, dword ptr [0x12650e84] */
  EDX = (r32((uint32_t)(0x12650e84)));
  /* 12629cb5 push edx */
  push32((uint32_t)(EDX));
  /* 12629cb6 call 0x1262b9d0 */
  push32(0x12629cbbu); f_1262b9d0();
  /* 12629cbb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629cbe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12629cc8 jmp 0x12629cd9 */
  goto L_12629cd9;
L_12629cca:;
  /* 12629cca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629cd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629cd3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12629cd9:;
  /* 12629cd9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629ce3 jae 0x12629d94 */
  if (!C.cf) goto L_12629d94;
  /* 12629ce9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629cef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12629cf1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12629cf9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12629cfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12629cfe je 0x12629d36 */
  if (C.zf) goto L_12629d36;
  /* 12629d00 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d06 mov cl, byte ptr [eax + 0x12650d81] */
  CL = (r8((uint32_t)(EAX + 0x12650d81)));
  /* 12629d0c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12629d0f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d15 mov byte ptr [edx + 0x12650d81], cl */
  w8((uint32_t)(EDX + 0x12650d81), (CL));
  /* 12629d1b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d21 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d27 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12629d2e mov byte ptr [eax + 0x12650c80], dl */
  w8((uint32_t)(EAX + 0x12650c80), (DL));
  /* 12629d34 jmp 0x12629d8f */
  goto L_12629d8f;
L_12629d36:;
  /* 12629d36 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12629d3e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12629d46 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12629d49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12629d4b je 0x12629d82 */
  if (C.zf) goto L_12629d82;
  /* 12629d4d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d53 mov al, byte ptr [edx + 0x12650d81] */
  AL = (r8((uint32_t)(EDX + 0x12650d81)));
  /* 12629d59 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12629d5b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d61 mov byte ptr [ecx + 0x12650d81], al */
  w8((uint32_t)(ECX + 0x12650d81), (AL));
  /* 12629d67 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d73 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12629d7a mov byte ptr [edx + 0x12650c80], cl */
  w8((uint32_t)(EDX + 0x12650c80), (CL));
  /* 12629d80 jmp 0x12629d8f */
  goto L_12629d8f;
L_12629d82:;
  /* 12629d82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629d88 mov byte ptr [edx + 0x12650c80], 0 */
  w8((uint32_t)(EDX + 0x12650c80), (0x0u));
L_12629d8f:;
  /* 12629d8f jmp 0x12629cca */
  goto L_12629cca;
L_12629d94:;
  /* 12629d94 jmp 0x12629e5e */
  goto L_12629e5e;
L_12629d99:;
  /* 12629d99 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12629da3 jmp 0x12629db4 */
  goto L_12629db4;
L_12629da5:;
  /* 12629da5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629dab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629dae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12629db4:;
  /* 12629db4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629dbe jae 0x12629e5e */
  if (!C.cf) goto L_12629e5e;
  /* 12629dc4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629dcb jb 0x12629e08 */
  if (C.cf) goto L_12629e08;
  /* 12629dcd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629dd4 ja 0x12629e08 */
  if ((!C.cf&&!C.zf)) goto L_12629e08;
  /* 12629dd6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629ddc mov dl, byte ptr [ecx + 0x12650d81] */
  DL = (r8((uint32_t)(ECX + 0x12650d81)));
  /* 12629de2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12629de5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629deb mov byte ptr [eax + 0x12650d81], dl */
  w8((uint32_t)(EAX + 0x12650d81), (DL));
  /* 12629df1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629df7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629dfa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629e00 mov byte ptr [edx + 0x12650c80], cl */
  w8((uint32_t)(EDX + 0x12650c80), (CL));
  /* 12629e06 jmp 0x12629e59 */
  goto L_12629e59;
L_12629e08:;
  /* 12629e08 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629e0f jb 0x12629e4c */
  if (C.cf) goto L_12629e4c;
  /* 12629e11 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629e18 ja 0x12629e4c */
  if ((!C.cf&&!C.zf)) goto L_12629e4c;
  /* 12629e1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629e20 mov cl, byte ptr [eax + 0x12650d81] */
  CL = (r8((uint32_t)(EAX + 0x12650d81)));
  /* 12629e26 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12629e29 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629e2f mov byte ptr [edx + 0x12650d81], cl */
  w8((uint32_t)(EDX + 0x12650d81), (CL));
  /* 12629e35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629e3b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12629e3e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629e44 mov byte ptr [ecx + 0x12650c80], al */
  w8((uint32_t)(ECX + 0x12650c80), (AL));
  /* 12629e4a jmp 0x12629e59 */
  goto L_12629e59;
L_12629e4c:;
  /* 12629e4c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12629e52 mov byte ptr [edx + 0x12650c80], 0 */
  w8((uint32_t)(EDX + 0x12650c80), (0x0u));
L_12629e59:;
  /* 12629e59 jmp 0x12629da5 */
  goto L_12629da5;
L_12629e5e:;
  /* 12629e5e mov esp, ebp */
  ESP = (EBP);
  /* 12629e60 pop ebp */
  EBP = (pop32());
  /* 12629e61 ret  */
  ESPCHK(0x12629b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e70 @ 0x12629e70 (23 bytes, 9 insns) */
void f_12629e70(void) {
  FTRACE(0x12629e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12629e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12629e71 mov ebp, esp */
  EBP = (ESP);
  /* 12629e73 cmp dword ptr [0x12650c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629e7a je 0x12629e83 */
  if (C.zf) goto L_12629e83;
  /* 12629e7c mov eax, dword ptr [0x12650be4] */
  EAX = (r32((uint32_t)(0x12650be4)));
  /* 12629e81 jmp 0x12629e85 */
  goto L_12629e85;
L_12629e83:;
  /* 12629e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12629e85:;
  /* 12629e85 pop ebp */
  EBP = (pop32());
  /* 12629e86 ret  */
  ESPCHK(0x12629e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e90 @ 0x12629e90 (34 bytes, 10 insns) */
void f_12629e90(void) {
  FTRACE(0x12629e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12629e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12629e91 mov ebp, esp */
  EBP = (ESP);
  /* 12629e93 cmp dword ptr [0x12651030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12651030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629e9a jne 0x12629eb0 */
  if (!C.zf) goto L_12629eb0;
  /* 12629e9c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12629e9e call 0x126296b0 */
  push32(0x12629ea3u); f_126296b0();
  /* 12629ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12629ea6 mov dword ptr [0x12651030], 1 */
  w32((uint32_t)(0x12651030), (0x1u));
L_12629eb0:;
  /* 12629eb0 pop ebp */
  EBP = (pop32());
  /* 12629eb1 ret  */
  ESPCHK(0x12629e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ec0 @ 0x12629ec0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_12629ec0(void) {
  FTRACE(0x12629ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12629ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12629ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12629ec3 push edi */
  push32((uint32_t)(EDI));
  /* 12629ec4 push esi */
  push32((uint32_t)(ESI));
  /* 12629ec5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12629ec8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12629ecb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12629ece mov eax, ecx */
  EAX = (ECX);
  /* 12629ed0 mov edx, ecx */
  EDX = (ECX);
  /* 12629ed2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629ed4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629ed6 jbe 0x12629ee0 */
  if ((C.cf||C.zf)) goto L_12629ee0;
  /* 12629ed8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629eda jb 0x1262a058 */
  if (C.cf) goto L_1262a058;
L_12629ee0:;
  /* 12629ee0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12629ee6 jne 0x12629efc */
  if (!C.zf) goto L_12629efc;
  /* 12629ee8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12629eeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12629eee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629ef1 jb 0x12629f1c */
  if (C.cf) goto L_12629f1c;
  /* 12629ef3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12629ef5 jmp dword ptr [edx*4 + 0x1262a008] */
  switch (EDX) {
    case 0: goto L_1262a018;
    case 1: goto L_1262a020;
    case 2: goto L_1262a02c;
    case 3: goto L_1262a040;
    default: x86_unimpl("switch@0x12629ef5 out of table"); return;
  }
L_12629efc:;
  /* 12629efc mov eax, edi */
  EAX = (EDI);
  /* 12629efe mov edx, 3 */
  EDX = (0x3u);
  /* 12629f03 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12629f06 jb 0x12629f14 */
  if (C.cf) goto L_12629f14;
  /* 12629f08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12629f0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12629f0d jmp dword ptr [eax*4 + 0x12629f20] */
  switch (EAX) {
    case 1: goto L_12629f30;
    case 2: goto L_12629f5c;
    case 3: goto L_12629f80;
    default: x86_unimpl("switch@0x12629f0d out of table"); return;
  }
L_12629f14:;
  /* 12629f14 jmp dword ptr [ecx*4 + 0x1262a018] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1262a018)))); return;
  /* 12629f1b nop  */
  /* nop */
L_12629f1c:;
  /* 12629f1c jmp dword ptr [ecx*4 + 0x12629f9c] */
  switch (ECX) {
    case 0: goto L_12629fff;
    case 1: goto L_12629fec;
    case 2: goto L_12629fe4;
    case 3: goto L_12629fdc;
    case 4: goto L_12629fd4;
    case 5: goto L_12629fcc;
    case 6: goto L_12629fc4;
    case 7: goto L_12629fbc;
    default: x86_unimpl("switch@0x12629f1c out of table"); return;
  }
  /* 12629f23 nop  */
  /* nop */
L_12629f30:;
  /* 12629f30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12629f32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12629f34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12629f36 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12629f39 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12629f3c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12629f3f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12629f42 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12629f45 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12629f48 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12629f4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629f4e jb 0x12629f1c */
  if (C.cf) goto L_12629f1c;
  /* 12629f50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12629f52 jmp dword ptr [edx*4 + 0x1262a008] */
  switch (EDX) {
    case 0: goto L_1262a018;
    case 1: goto L_1262a020;
    case 2: goto L_1262a02c;
    case 3: goto L_1262a040;
    default: x86_unimpl("switch@0x12629f52 out of table"); return;
  }
  /* 12629f59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12629f5c:;
  /* 12629f5c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12629f5e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12629f60 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12629f62 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12629f65 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12629f68 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12629f6b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12629f6e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12629f71 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629f74 jb 0x12629f1c */
  if (C.cf) goto L_12629f1c;
  /* 12629f76 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12629f78 jmp dword ptr [edx*4 + 0x1262a008] */
  switch (EDX) {
    case 0: goto L_1262a018;
    case 1: goto L_1262a020;
    case 2: goto L_1262a02c;
    case 3: goto L_1262a040;
    default: x86_unimpl("switch@0x12629f78 out of table"); return;
  }
  /* 12629f7f nop  */
  /* nop */
L_12629f80:;
  /* 12629f80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12629f82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12629f84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12629f86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12629f87 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12629f8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12629f8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12629f8e jb 0x12629f1c */
  if (C.cf) goto L_12629f1c;
  /* 12629f90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12629f92 jmp dword ptr [edx*4 + 0x1262a008] */
  switch (EDX) {
    case 0: goto L_1262a018;
    case 1: goto L_1262a020;
    case 2: goto L_1262a02c;
    case 3: goto L_1262a040;
    default: x86_unimpl("switch@0x12629f92 out of table"); return;
  }
  /* 12629f99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12629fbc:;
  /* 12629fbc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12629fc0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12629fc4:;
  /* 12629fc4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12629fc8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12629fcc:;
  /* 12629fcc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12629fd0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12629fd4:;
  /* 12629fd4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12629fd8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12629fdc:;
  /* 12629fdc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12629fe0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12629fe4:;
  /* 12629fe4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12629fe8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12629fec:;
  /* 12629fec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12629ff0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12629ff4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12629ffb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12629ffd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12629fff:;
  /* 12629fff jmp dword ptr [edx*4 + 0x1262a008] */
  switch (EDX) {
    case 0: goto L_1262a018;
    case 1: goto L_1262a020;
    case 2: goto L_1262a02c;
    case 3: goto L_1262a040;
    default: x86_unimpl("switch@0x12629fff out of table"); return;
  }
  /* 1262a006 mov edi, edi */
  EDI = (EDI);
L_1262a018:;
  /* 1262a018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a01b pop esi */
  ESI = (pop32());
  /* 1262a01c pop edi */
  EDI = (pop32());
  /* 1262a01d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a01e ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
  /* 1262a01f nop  */
  /* nop */
L_1262a020:;
  /* 1262a020 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262a022 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262a024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a027 pop esi */
  ESI = (pop32());
  /* 1262a028 pop edi */
  EDI = (pop32());
  /* 1262a029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a02a ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
  /* 1262a02b nop  */
  /* nop */
L_1262a02c:;
  /* 1262a02c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262a02e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262a030 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262a033 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262a036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a039 pop esi */
  ESI = (pop32());
  /* 1262a03a pop edi */
  EDI = (pop32());
  /* 1262a03b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a03c ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
  /* 1262a03d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262a040:;
  /* 1262a040 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262a042 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262a044 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262a047 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262a04a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262a04d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262a050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a053 pop esi */
  ESI = (pop32());
  /* 1262a054 pop edi */
  EDI = (pop32());
  /* 1262a055 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a056 ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
  /* 1262a057 nop  */
  /* nop */
L_1262a058:;
  /* 1262a058 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1262a05c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1262a060 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1262a066 jne 0x1262a08c */
  if (!C.zf) goto L_1262a08c;
  /* 1262a068 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262a06b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a06e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a071 jb 0x1262a080 */
  if (C.cf) goto L_1262a080;
  /* 1262a073 std  */
  C.df=1;
  /* 1262a074 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262a076 cld  */
  C.df=0;
  /* 1262a077 jmp dword ptr [edx*4 + 0x1262a1a0] */
  switch (EDX) {
    case 0: goto L_1262a1b0;
    case 1: goto L_1262a1b8;
    case 2: goto L_1262a1c8;
    case 3: goto L_1262a1dc;
    default: x86_unimpl("switch@0x1262a077 out of table"); return;
  }
  /* 1262a07e mov edi, edi */
  EDI = (EDI);
L_1262a080:;
  /* 1262a080 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262a082 jmp dword ptr [ecx*4 + 0x1262a150] */
  switch (ECX) {
    case 0: goto L_1262a197;
    default: x86_unimpl("switch@0x1262a082 out of table"); return;
  }
  /* 1262a089 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262a08c:;
  /* 1262a08c mov eax, edi */
  EAX = (EDI);
  /* 1262a08e mov edx, 3 */
  EDX = (0x3u);
  /* 1262a093 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a096 jb 0x1262a0a4 */
  if (C.cf) goto L_1262a0a4;
  /* 1262a098 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1262a09b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a09d jmp dword ptr [eax*4 + 0x1262a0a8] */
  switch (EAX) {
    case 1: goto L_1262a0b8;
    case 2: goto L_1262a0d8;
    case 3: goto L_1262a100;
    default: x86_unimpl("switch@0x1262a09d out of table"); return;
  }
L_1262a0a4:;
  /* 1262a0a4 jmp dword ptr [ecx*4 + 0x1262a1a0] */
  switch (ECX) {
    case 0: goto L_1262a1b0;
    case 1: goto L_1262a1b8;
    case 2: goto L_1262a1c8;
    case 3: goto L_1262a1dc;
    default: x86_unimpl("switch@0x1262a0a4 out of table"); return;
  }
  /* 1262a0ab nop  */
  /* nop */
L_1262a0b8:;
  /* 1262a0b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262a0bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262a0bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262a0c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1262a0c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262a0c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1262a0c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a0c8 jb 0x1262a080 */
  if (C.cf) goto L_1262a080;
  /* 1262a0ca std  */
  C.df=1;
  /* 1262a0cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262a0cd cld  */
  C.df=0;
  /* 1262a0ce jmp dword ptr [edx*4 + 0x1262a1a0] */
  switch (EDX) {
    case 0: goto L_1262a1b0;
    case 1: goto L_1262a1b8;
    case 2: goto L_1262a1c8;
    case 3: goto L_1262a1dc;
    default: x86_unimpl("switch@0x1262a0ce out of table"); return;
  }
  /* 1262a0d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262a0d8:;
  /* 1262a0d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262a0db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262a0dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262a0e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262a0e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262a0e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262a0e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a0ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a0ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a0f2 jb 0x1262a080 */
  if (C.cf) goto L_1262a080;
  /* 1262a0f4 std  */
  C.df=1;
  /* 1262a0f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262a0f7 cld  */
  C.df=0;
  /* 1262a0f8 jmp dword ptr [edx*4 + 0x1262a1a0] */
  switch (EDX) {
    case 0: goto L_1262a1b0;
    case 1: goto L_1262a1b8;
    case 2: goto L_1262a1c8;
    case 3: goto L_1262a1dc;
    default: x86_unimpl("switch@0x1262a0f8 out of table"); return;
  }
  /* 1262a0ff nop  */
  /* nop */
L_1262a100:;
  /* 1262a100 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262a103 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262a105 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262a108 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262a10b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262a10e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262a111 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262a114 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262a117 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a11a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a11d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a120 jb 0x1262a080 */
  if (C.cf) goto L_1262a080;
  /* 1262a126 std  */
  C.df=1;
  /* 1262a127 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262a129 cld  */
  C.df=0;
  /* 1262a12a jmp dword ptr [edx*4 + 0x1262a1a0] */
  switch (EDX) {
    case 0: goto L_1262a1b0;
    case 1: goto L_1262a1b8;
    case 2: goto L_1262a1c8;
    case 3: goto L_1262a1dc;
    default: x86_unimpl("switch@0x1262a12a out of table"); return;
  }
  /* 1262a131 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1262a134 push esp */
  push32((uint32_t)(ESP));
  /* 1262a135 mov eax, dword ptr [0xa15c1262] */
  EAX = (r32((uint32_t)(0xa15c1262)));
  /* 1262a13a bound edx, qword ptr [edx] */
  x86_unimpl("bound @ 0x1262a13a");
  /* 1262a13c mov eax, dword ptr fs:[0xa16c1262] */
  EAX = (r32((uint32_t)(0xa16c1262)));
  /* 1262a142 bound edx, qword ptr [edx] */
  x86_unimpl("bound @ 0x1262a142");
  /* 1262a144 je 0x1262a0e7 */
  if (C.zf) goto L_1262a0e7;
  /* 1262a146 bound edx, qword ptr [edx] */
  x86_unimpl("bound @ 0x1262a146");
  /* 1262a148 jl 0x1262a0eb */
  if ((C.sf!=C.of)) goto L_1262a0eb;
  /* 1262a14a bound edx, qword ptr [edx] */
  x86_unimpl("bound @ 0x1262a14a");
  /* 1262a14e bound edx, qword ptr [edx] */
  x86_unimpl("bound @ 0x1262a14e");
  /* 1262a154 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1262a158 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1262a15c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1262a160 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1262a164 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1262a168 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1262a16c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1262a170 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1262a174 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1262a178 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1262a17c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1262a180 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1262a184 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1262a188 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1262a18c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1262a193 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a195 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1262a197:;
  /* 1262a197 jmp dword ptr [edx*4 + 0x1262a1a0] */
  switch (EDX) {
    case 0: goto L_1262a1b0;
    case 1: goto L_1262a1b8;
    case 2: goto L_1262a1c8;
    case 3: goto L_1262a1dc;
    default: x86_unimpl("switch@0x1262a197 out of table"); return;
  }
  /* 1262a19e mov edi, edi */
  EDI = (EDI);
L_1262a1b0:;
  /* 1262a1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a1b3 pop esi */
  ESI = (pop32());
  /* 1262a1b4 pop edi */
  EDI = (pop32());
  /* 1262a1b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a1b6 ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
  /* 1262a1b7 nop  */
  /* nop */
L_1262a1b8:;
  /* 1262a1b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262a1bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262a1be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a1c1 pop esi */
  ESI = (pop32());
  /* 1262a1c2 pop edi */
  EDI = (pop32());
  /* 1262a1c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a1c4 ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
  /* 1262a1c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262a1c8:;
  /* 1262a1c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262a1cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262a1ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262a1d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262a1d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a1d7 pop esi */
  ESI = (pop32());
  /* 1262a1d8 pop edi */
  EDI = (pop32());
  /* 1262a1d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a1da ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
  /* 1262a1db nop  */
  /* nop */
L_1262a1dc:;
  /* 1262a1dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262a1df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262a1e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262a1e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262a1e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262a1eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262a1ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a1f1 pop esi */
  ESI = (pop32());
  /* 1262a1f2 pop edi */
  EDI = (pop32());
  /* 1262a1f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262a1f4 ret  */
  ESPCHK(0x12629ec0u, _esp0);
  ESP += 4; return;
L_1262a0e7: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1262a0e7 (unresolved jump table)"); return;
L_1262a0eb: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1262a0eb (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1262a200 (104 bytes, 43 insns) */
void f_1262a200(void) {
  FTRACE(0x1262a200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262a200 push ebx */
  push32((uint32_t)(EBX));
  /* 1262a201 push esi */
  push32((uint32_t)(ESI));
  /* 1262a202 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1262a206 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262a208 jne 0x1262a222 */
  if (!C.zf) goto L_1262a222;
  /* 1262a20a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1262a20e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1262a212 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262a214 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1262a216 mov ebx, eax */
  EBX = (EAX);
  /* 1262a218 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1262a21c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1262a21e mov edx, ebx */
  EDX = (EBX);
  /* 1262a220 jmp 0x1262a263 */
  goto L_1262a263;
L_1262a222:;
  /* 1262a222 mov ecx, eax */
  ECX = (EAX);
  /* 1262a224 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1262a228 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1262a22c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1262a230:;
  /* 1262a230 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1262a232 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1262a234 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1262a236 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1262a238 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262a23a jne 0x1262a230 */
  if (!C.zf) goto L_1262a230;
  /* 1262a23c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1262a23e mov esi, eax */
  ESI = (EAX);
  /* 1262a240 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1262a244 mov ecx, eax */
  ECX = (EAX);
  /* 1262a246 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1262a24a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1262a24c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a24e jb 0x1262a25e */
  if (C.cf) goto L_1262a25e;
  /* 1262a250 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a254 ja 0x1262a25e */
  if ((!C.cf&&!C.zf)) goto L_1262a25e;
  /* 1262a256 jb 0x1262a25f */
  if (C.cf) goto L_1262a25f;
  /* 1262a258 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a25c jbe 0x1262a25f */
  if ((C.cf||C.zf)) goto L_1262a25f;
L_1262a25e:;
  /* 1262a25e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1262a25f:;
  /* 1262a25f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262a261 mov eax, esi */
  EAX = (ESI);
L_1262a263:;
  /* 1262a263 pop esi */
  ESI = (pop32());
  /* 1262a264 pop ebx */
  EBX = (pop32());
  /* 1262a265 ret 0x10 */
  ESPCHK(0x1262a200u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1262a270 (117 bytes, 44 insns) */
void f_1262a270(void) {
  FTRACE(0x1262a270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262a270 push ebx */
  push32((uint32_t)(EBX));
  /* 1262a271 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1262a275 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262a277 jne 0x1262a291 */
  if (!C.zf) goto L_1262a291;
  /* 1262a279 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1262a27d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1262a281 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262a283 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1262a285 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1262a289 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1262a28b mov eax, edx */
  EAX = (EDX);
  /* 1262a28d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262a28f jmp 0x1262a2e1 */
  goto L_1262a2e1;
L_1262a291:;
  /* 1262a291 mov ecx, eax */
  ECX = (EAX);
  /* 1262a293 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1262a297 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1262a29b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1262a29f:;
  /* 1262a29f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1262a2a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1262a2a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1262a2a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1262a2a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262a2a9 jne 0x1262a29f */
  if (!C.zf) goto L_1262a29f;
  /* 1262a2ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1262a2ad mov ecx, eax */
  ECX = (EAX);
  /* 1262a2af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1262a2b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1262a2b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1262a2b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a2ba jb 0x1262a2ca */
  if (C.cf) goto L_1262a2ca;
  /* 1262a2bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a2c0 ja 0x1262a2ca */
  if ((!C.cf&&!C.zf)) goto L_1262a2ca;
  /* 1262a2c2 jb 0x1262a2d2 */
  if (C.cf) goto L_1262a2d2;
  /* 1262a2c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a2c8 jbe 0x1262a2d2 */
  if ((C.cf||C.zf)) goto L_1262a2d2;
L_1262a2ca:;
  /* 1262a2ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a2ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1262a2d2:;
  /* 1262a2d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a2d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a2da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262a2dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262a2de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1262a2e1:;
  /* 1262a2e1 pop ebx */
  EBX = (pop32());
  /* 1262a2e2 ret 0x10 */
  ESPCHK(0x1262a270u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a2f0 @ 0x1262a2f0 (628 bytes, 214 insns) */
void f_1262a2f0(void) {
  FTRACE(0x1262a2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262a2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262a2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1262a2f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a2f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1262a2f7 push esi */
  push32((uint32_t)(ESI));
  /* 1262a2f8 push edi */
  push32((uint32_t)(EDI));
L_1262a2f9:;
  /* 1262a2f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a2fd jne 0x1262a31d */
  if (!C.zf) goto L_1262a31d;
  /* 1262a2ff push 0x1264af9c */
  push32((uint32_t)(0x1264af9cu));
  /* 1262a304 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262a306 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1262a308 push 0x1264af90 */
  push32((uint32_t)(0x1264af90u));
  /* 1262a30d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262a30f call 0x126226a0 */
  push32(0x1262a314u); f_126226a0();
  /* 1262a314 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a31a jne 0x1262a31d */
  if (!C.zf) goto L_1262a31d;
  /* 1262a31c int3  */
  x86_unimpl("int3 @ 0x1262a31c");
L_1262a31d:;
  /* 1262a31d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262a31f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a321 jne 0x1262a2f9 */
  if (!C.zf) goto L_1262a2f9;
  /* 1262a323 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a326 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262a329 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a32c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1262a32f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1262a332 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a335 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262a338 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a33e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262a340 je 0x1262a34f */
  if (C.zf) goto L_1262a34f;
  /* 1262a342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a345 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262a348 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1262a34b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262a34d je 0x1262a365 */
  if (C.zf) goto L_1262a365;
L_1262a34f:;
  /* 1262a34f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a352 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1262a355 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1262a357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a35a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1262a35d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262a360 jmp 0x1262a55d */
  goto L_1262a55d;
L_1262a365:;
  /* 1262a365 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a368 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1262a36b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1262a36e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a370 je 0x1262a3bc */
  if (C.zf) goto L_1262a3bc;
  /* 1262a372 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a375 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1262a37c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a37f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1262a382 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1262a385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a387 je 0x1262a3a5 */
  if (C.zf) goto L_1262a3a5;
  /* 1262a389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a38c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a38f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1262a392 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1262a394 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a397 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262a39a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1262a39d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1262a3a3 jmp 0x1262a3bc */
  goto L_1262a3bc;
L_1262a3a5:;
  /* 1262a3a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262a3ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a3ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1262a3b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262a3b7 jmp 0x1262a55d */
  goto L_1262a55d;
L_1262a3bc:;
  /* 1262a3bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262a3c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a3c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1262a3cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262a3d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1262a3d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1262a3da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1262a3e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262a3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a3ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1262a3f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a3f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262a3f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1262a3fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262a3ff jne 0x1262a42f */
  if (!C.zf) goto L_1262a42f;
  /* 1262a401 cmp dword ptr [ebp - 8], 0x1264e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1264e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a408 je 0x1262a413 */
  if (C.zf) goto L_1262a413;
  /* 1262a40a cmp dword ptr [ebp - 8], 0x1264e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1264e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a411 jne 0x1262a423 */
  if (!C.zf) goto L_1262a423;
L_1262a413:;
  /* 1262a413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262a416 push edx */
  push32((uint32_t)(EDX));
  /* 1262a417 call 0x1262c260 */
  push32(0x1262a41cu); f_1262c260();
  /* 1262a41c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a421 jne 0x1262a42f */
  if (!C.zf) goto L_1262a42f;
L_1262a423:;
  /* 1262a423 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a426 push eax */
  push32((uint32_t)(EAX));
  /* 1262a427 call 0x1262c190 */
  push32(0x1262a42cu); f_1262c190();
  /* 1262a42c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262a42f:;
  /* 1262a42f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a432 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262a435 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a43b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262a43d je 0x1262a51b */
  if (C.zf) goto L_1262a51b;
L_1262a443:;
  /* 1262a443 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a446 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a449 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1262a44b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a44e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262a450 jge 0x1262a473 */
  if ((C.sf==C.of)) goto L_1262a473;
  /* 1262a452 push 0x1264af50 */
  push32((uint32_t)(0x1264af50u));
  /* 1262a457 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262a459 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1262a45e push 0x1264af90 */
  push32((uint32_t)(0x1264af90u));
  /* 1262a463 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262a465 call 0x126226a0 */
  push32(0x1262a46au); f_126226a0();
  /* 1262a46a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a46d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a470 jne 0x1262a473 */
  if (!C.zf) goto L_1262a473;
  /* 1262a472 int3  */
  x86_unimpl("int3 @ 0x1262a472");
L_1262a473:;
  /* 1262a473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262a475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a477 jne 0x1262a443 */
  if (!C.zf) goto L_1262a443;
  /* 1262a479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a47c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a47f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1262a481 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a484 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262a487 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a48a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1262a48d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a490 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a493 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1262a495 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a498 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1262a49b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a49e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a4a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1262a4a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a4a8 jle 0x1262a4c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1262a4c6;
  /* 1262a4aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a4ad push ecx */
  push32((uint32_t)(ECX));
  /* 1262a4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a4b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1262a4b4 push eax */
  push32((uint32_t)(EAX));
  /* 1262a4b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262a4b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1262a4b9 call 0x1262be80 */
  push32(0x1262a4beu); f_1262be80();
  /* 1262a4be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a4c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1262a4c4 jmp 0x1262a50e */
  goto L_1262a50e;
L_1262a4c6:;
  /* 1262a4c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a4ca je 0x1262a4e9 */
  if (C.zf) goto L_1262a4e9;
  /* 1262a4cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262a4cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1262a4d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262a4d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1262a4d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262a4db mov ecx, dword ptr [edx*4 + 0x12650ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262a4e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a4e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1262a4e7 jmp 0x1262a4f0 */
  goto L_1262a4f0;
L_1262a4e9:;
  /* 1262a4e9 mov dword ptr [ebp - 0x14], 0x1264da60 */
  w32((uint32_t)(EBP + -0x14), (0x1264da60u));
L_1262a4f0:;
  /* 1262a4f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262a4f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1262a4f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1262a4fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a4fc je 0x1262a50e */
  if (C.zf) goto L_1262a50e;
  /* 1262a4fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1262a500 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262a502 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262a505 push ecx */
  push32((uint32_t)(ECX));
  /* 1262a506 call 0x1262bd30 */
  push32(0x1262a50bu); f_1262bd30();
  /* 1262a50b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262a50e:;
  /* 1262a50e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a511 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1262a514 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1262a517 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1262a519 jmp 0x1262a539 */
  goto L_1262a539;
L_1262a51b:;
  /* 1262a51b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1262a522 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a525 push edx */
  push32((uint32_t)(EDX));
  /* 1262a526 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1262a529 push eax */
  push32((uint32_t)(EAX));
  /* 1262a52a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262a52d push ecx */
  push32((uint32_t)(ECX));
  /* 1262a52e call 0x1262be80 */
  push32(0x1262a533u); f_1262be80();
  /* 1262a533 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a536 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1262a539:;
  /* 1262a539 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262a53c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a53f je 0x1262a555 */
  if (C.zf) goto L_1262a555;
  /* 1262a541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a544 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262a547 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1262a54a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a54d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1262a550 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262a553 jmp 0x1262a55d */
  goto L_1262a55d;
L_1262a555:;
  /* 1262a555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a558 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1262a55d:;
  /* 1262a55d pop edi */
  EDI = (pop32());
  /* 1262a55e pop esi */
  ESI = (pop32());
  /* 1262a55f pop ebx */
  EBX = (pop32());
  /* 1262a560 mov esp, ebp */
  ESP = (EBP);
  /* 1262a562 pop ebp */
  EBP = (pop32());
  /* 1262a563 ret  */
  ESPCHK(0x1262a2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x1262a570 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1262a570(void) {
  FTRACE(0x1262a570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262a570 push ebp */
  push32((uint32_t)(EBP));
  /* 1262a571 mov ebp, esp */
  EBP = (ESP);
  /* 1262a573 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a579 push ebx */
  push32((uint32_t)(EBX));
  /* 1262a57a push esi */
  push32((uint32_t)(ESI));
  /* 1262a57b push edi */
  push32((uint32_t)(EDI));
  /* 1262a57c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1262a583 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1262a58d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1262a594:;
  /* 1262a594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a597 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1262a599 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1262a59c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a5a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a5a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a5a6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1262a5a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262a5ab je 0x1262b187 */
  if (C.zf) goto L_1262b187;
  /* 1262a5b1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a5b8 jl 0x1262b187 */
  if ((C.sf!=C.of)) goto L_1262b187;
  /* 1262a5be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a5c2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a5c5 jl 0x1262a5e6 */
  if ((C.sf!=C.of)) goto L_1262a5e6;
  /* 1262a5c7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a5cb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a5ce jg 0x1262a5e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1262a5e6;
  /* 1262a5d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a5d4 movsx ecx, byte ptr [eax + 0x1264af88] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1264af88))));
  /* 1262a5db and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1262a5de mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1262a5e4 jmp 0x1262a5f0 */
  goto L_1262a5f0;
L_1262a5e6:;
  /* 1262a5e6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1262a5f0:;
  /* 1262a5f0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1262a5f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1262a5f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262a5fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262a5ff movsx edx, byte ptr [ecx + eax*8 + 0x1264afa8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1264afa8))));
  /* 1262a607 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1262a60a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1262a60d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262a610 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1262a616 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a61d ja 0x1262b182 */
  if ((!C.cf&&!C.zf)) goto L_1262b182;
  /* 1262a623 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1262a629 jmp dword ptr [ecx*4 + 0x1262b194] */
  switch (ECX) {
    case 0: goto L_1262a630;
    case 1: goto L_1262a6ca;
    case 2: goto L_1262a70c;
    case 3: goto L_1262a77b;
    case 4: goto L_1262a7d3;
    case 5: goto L_1262a7e2;
    case 6: goto L_1262a82e;
    case 7: goto L_1262a8c1;
    case 8: goto L_1262a758;
    case 9: goto L_1262a763;
    case 10: goto L_1262a74e;
    case 11: goto L_1262a743;
    case 12: goto L_1262a76e;
    case 13: goto L_1262a776;
    default: x86_unimpl("switch@0x1262a629 out of table"); return;
  }
L_1262a630:;
  /* 1262a630 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1262a637 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262a63a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262a640 mov eax, dword ptr [0x1264dc98] */
  EAX = (r32((uint32_t)(0x1264dc98)));
  /* 1262a645 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262a647 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1262a64b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1262a651 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262a653 je 0x1262a6ad */
  if (C.zf) goto L_1262a6ad;
  /* 1262a655 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1262a65b push edx */
  push32((uint32_t)(EDX));
  /* 1262a65c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a65f push eax */
  push32((uint32_t)(EAX));
  /* 1262a660 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a664 push ecx */
  push32((uint32_t)(ECX));
  /* 1262a665 call 0x1262b2a0 */
  push32(0x1262a66au); f_1262b2a0();
  /* 1262a66a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a66d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a670 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262a672 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1262a675 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a678 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a67b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1262a67e:;
  /* 1262a67e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a682 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262a684 jne 0x1262a6a7 */
  if (!C.zf) goto L_1262a6a7;
  /* 1262a686 push 0x1264b028 */
  push32((uint32_t)(0x1264b028u));
  /* 1262a68b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262a68d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1262a692 push 0x1264b01c */
  push32((uint32_t)(0x1264b01cu));
  /* 1262a697 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262a699 call 0x126226a0 */
  push32(0x1262a69eu); f_126226a0();
  /* 1262a69e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a6a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a6a4 jne 0x1262a6a7 */
  if (!C.zf) goto L_1262a6a7;
  /* 1262a6a6 int3  */
  x86_unimpl("int3 @ 0x1262a6a6");
L_1262a6a7:;
  /* 1262a6a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262a6a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a6ab jne 0x1262a67e */
  if (!C.zf) goto L_1262a67e;
L_1262a6ad:;
  /* 1262a6ad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1262a6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262a6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262a6b7 push edx */
  push32((uint32_t)(EDX));
  /* 1262a6b8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a6bc push eax */
  push32((uint32_t)(EAX));
  /* 1262a6bd call 0x1262b2a0 */
  push32(0x1262a6c2u); f_1262b2a0();
  /* 1262a6c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a6c5 jmp 0x1262b182 */
  goto L_1262b182;
L_1262a6ca:;
  /* 1262a6ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262a6d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262a6d4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1262a6da mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1262a6e0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1262a6e6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1262a6ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1262a6ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262a6f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1262a700 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1262a707 jmp 0x1262b182 */
  goto L_1262b182;
L_1262a70c:;
  /* 1262a70c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a710 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1262a716 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1262a71c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a71f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1262a725 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a72c ja 0x1262a776 */
  if ((!C.cf&&!C.zf)) goto L_1262a776;
  /* 1262a72e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1262a734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262a736 mov al, byte ptr [ecx + 0x1262b1cc] */
  AL = (r8((uint32_t)(ECX + 0x1262b1cc)));
  /* 1262a73c jmp dword ptr [eax*4 + 0x1262b1b4] */
  switch (EAX) {
    case 0: goto L_1262a758;
    case 1: goto L_1262a763;
    case 2: goto L_1262a74e;
    case 3: goto L_1262a743;
    case 4: goto L_1262a76e;
    case 5: goto L_1262a776;
    default: x86_unimpl("switch@0x1262a73c out of table"); return;
  }
L_1262a743:;
  /* 1262a743 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a746 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a749 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262a74c jmp 0x1262a776 */
  goto L_1262a776;
L_1262a74e:;
  /* 1262a74e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a751 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1262a753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262a756 jmp 0x1262a776 */
  goto L_1262a776;
L_1262a758:;
  /* 1262a758 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a75b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1262a75e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262a761 jmp 0x1262a776 */
  goto L_1262a776;
L_1262a763:;
  /* 1262a763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a766 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1262a769 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262a76c jmp 0x1262a776 */
  goto L_1262a776;
L_1262a76e:;
  /* 1262a76e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a771 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1262a773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262a776:;
  /* 1262a776 jmp 0x1262b182 */
  goto L_1262b182;
L_1262a77b:;
  /* 1262a77b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a77f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a782 jne 0x1262a7b7 */
  if (!C.zf) goto L_1262a7b7;
  /* 1262a784 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1262a787 push edx */
  push32((uint32_t)(EDX));
  /* 1262a788 call 0x1262b3b0 */
  push32(0x1262a78du); f_1262b3b0();
  /* 1262a78d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a790 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1262a796 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a79d jge 0x1262a7b5 */
  if ((C.sf==C.of)) goto L_1262a7b5;
  /* 1262a79f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a7a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1262a7a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262a7a7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1262a7ad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262a7af mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1262a7b5:;
  /* 1262a7b5 jmp 0x1262a7ce */
  goto L_1262a7ce;
L_1262a7b7:;
  /* 1262a7b7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1262a7bd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262a7c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a7c4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1262a7c8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1262a7ce:;
  /* 1262a7ce jmp 0x1262b182 */
  goto L_1262b182;
L_1262a7d3:;
  /* 1262a7d3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1262a7dd jmp 0x1262b182 */
  goto L_1262b182;
L_1262a7e2:;
  /* 1262a7e2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a7e6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a7e9 jne 0x1262a812 */
  if (!C.zf) goto L_1262a812;
  /* 1262a7eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1262a7ee push eax */
  push32((uint32_t)(EAX));
  /* 1262a7ef call 0x1262b3b0 */
  push32(0x1262a7f4u); f_1262b3b0();
  /* 1262a7f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a7f7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1262a7fd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a804 jge 0x1262a810 */
  if ((C.sf==C.of)) goto L_1262a810;
  /* 1262a806 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1262a810:;
  /* 1262a810 jmp 0x1262a829 */
  goto L_1262a829;
L_1262a812:;
  /* 1262a812 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1262a818 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262a81b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a81f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1262a823 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1262a829:;
  /* 1262a829 jmp 0x1262b182 */
  goto L_1262b182;
L_1262a82e:;
  /* 1262a82e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a832 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1262a838 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1262a83e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a841 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1262a847 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a84e ja 0x1262a8bc */
  if ((!C.cf&&!C.zf)) goto L_1262a8bc;
  /* 1262a850 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1262a856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262a858 mov al, byte ptr [ecx + 0x1262b1f1] */
  AL = (r8((uint32_t)(ECX + 0x1262b1f1)));
  /* 1262a85e jmp dword ptr [eax*4 + 0x1262b1dd] */
  switch (EAX) {
    case 0: goto L_1262a870;
    case 1: goto L_1262a8a9;
    case 2: goto L_1262a865;
    case 3: goto L_1262a8b3;
    case 4: goto L_1262a8bc;
    default: x86_unimpl("switch@0x1262a85e out of table"); return;
  }
L_1262a865:;
  /* 1262a865 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a868 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a86b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262a86e jmp 0x1262a8bc */
  goto L_1262a8bc;
L_1262a870:;
  /* 1262a870 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a873 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262a876 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a879 jne 0x1262a89b */
  if (!C.zf) goto L_1262a89b;
  /* 1262a87b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a87e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1262a882 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a885 jne 0x1262a89b */
  if (!C.zf) goto L_1262a89b;
  /* 1262a887 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262a88a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a88d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1262a890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a893 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1262a896 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262a899 jmp 0x1262a8a7 */
  goto L_1262a8a7;
L_1262a89b:;
  /* 1262a89b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1262a8a2 jmp 0x1262a630 */
  goto L_1262a630;
L_1262a8a7:;
  /* 1262a8a7 jmp 0x1262a8bc */
  goto L_1262a8bc;
L_1262a8a9:;
  /* 1262a8a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a8ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1262a8ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262a8b1 jmp 0x1262a8bc */
  goto L_1262a8bc;
L_1262a8b3:;
  /* 1262a8b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a8b6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1262a8b9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262a8bc:;
  /* 1262a8bc jmp 0x1262b182 */
  goto L_1262b182;
L_1262a8c1:;
  /* 1262a8c1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262a8c5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1262a8cb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1262a8d1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262a8d4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1262a8da cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a8e1 ja 0x1262afa7 */
  if ((!C.cf&&!C.zf)) goto L_1262afa7;
  /* 1262a8e7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1262a8ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262a8ef mov cl, byte ptr [edx + 0x1262b25c] */
  CL = (r8((uint32_t)(EDX + 0x1262b25c)));
  /* 1262a8f5 jmp dword ptr [ecx*4 + 0x1262b220] */
  switch (ECX) {
    case 0: goto L_1262a8fc;
    case 1: goto L_1262ab90;
    case 2: goto L_1262aa20;
    case 3: goto L_1262acc9;
    case 4: goto L_1262a98b;
    case 5: goto L_1262a911;
    case 6: goto L_1262ac9b;
    case 7: goto L_1262aba0;
    case 8: goto L_1262ab45;
    case 9: goto L_1262ad15;
    case 10: goto L_1262acbf;
    case 11: goto L_1262aa36;
    case 12: goto L_1262acb3;
    case 13: goto L_1262acd5;
    case 14: goto L_1262afa7;
    default: x86_unimpl("switch@0x1262a8f5 out of table"); return;
  }
L_1262a8fc:;
  /* 1262a8fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a8ff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1262a904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262a906 jne 0x1262a911 */
  if (!C.zf) goto L_1262a911;
  /* 1262a908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a90b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1262a90e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262a911:;
  /* 1262a911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a914 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1262a91a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262a91c je 0x1262a957 */
  if (C.zf) goto L_1262a957;
  /* 1262a91e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1262a921 push eax */
  push32((uint32_t)(EAX));
  /* 1262a922 call 0x1262b3f0 */
  push32(0x1262a927u); f_1262b3f0();
  /* 1262a927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a92a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1262a92e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1262a932 push ecx */
  push32((uint32_t)(ECX));
  /* 1262a933 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1262a939 push edx */
  push32((uint32_t)(EDX));
  /* 1262a93a call 0x1262c4d0 */
  push32(0x1262a93fu); f_1262c4d0();
  /* 1262a93f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a942 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1262a945 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a949 jge 0x1262a955 */
  if ((C.sf==C.of)) goto L_1262a955;
  /* 1262a94b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1262a955:;
  /* 1262a955 jmp 0x1262a97d */
  goto L_1262a97d;
L_1262a957:;
  /* 1262a957 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1262a95a push eax */
  push32((uint32_t)(EAX));
  /* 1262a95b call 0x1262b3b0 */
  push32(0x1262a960u); f_1262b3b0();
  /* 1262a960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a963 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1262a96a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1262a970 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1262a976 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1262a97d:;
  /* 1262a97d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1262a983 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1262a986 jmp 0x1262afa7 */
  goto L_1262afa7;
L_1262a98b:;
  /* 1262a98b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1262a98e push eax */
  push32((uint32_t)(EAX));
  /* 1262a98f call 0x1262b3b0 */
  push32(0x1262a994u); f_1262b3b0();
  /* 1262a994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a997 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1262a99d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a9a4 je 0x1262a9b2 */
  if (C.zf) goto L_1262a9b2;
  /* 1262a9a6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1262a9ac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262a9b0 jne 0x1262a9cc */
  if (!C.zf) goto L_1262a9cc;
L_1262a9b2:;
  /* 1262a9b2 mov edx, dword ptr [0x1264dfb0] */
  EDX = (r32((uint32_t)(0x1264dfb0)));
  /* 1262a9b8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1262a9bb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262a9be push eax */
  push32((uint32_t)(EAX));
  /* 1262a9bf call 0x12626410 */
  push32(0x1262a9c4u); f_12626410();
  /* 1262a9c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262a9c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1262a9ca jmp 0x1262aa1b */
  goto L_1262aa1b;
L_1262a9cc:;
  /* 1262a9cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262a9cf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1262a9d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262a9d7 je 0x1262a9fc */
  if (C.zf) goto L_1262a9fc;
  /* 1262a9d9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1262a9df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1262a9e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1262a9e5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1262a9eb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1262a9ee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1262a9f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1262a9f3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1262a9fa jmp 0x1262aa1b */
  goto L_1262aa1b;
L_1262a9fc:;
  /* 1262a9fc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1262aa03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1262aa09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1262aa0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1262aa0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1262aa15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1262aa18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1262aa1b:;
  /* 1262aa1b jmp 0x1262afa7 */
  goto L_1262afa7;
L_1262aa20:;
  /* 1262aa20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262aa23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1262aa29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262aa2b jne 0x1262aa36 */
  if (!C.zf) goto L_1262aa36;
  /* 1262aa2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262aa30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1262aa33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1262aa36:;
  /* 1262aa36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262aa3d jne 0x1262aa4b */
  if (!C.zf) goto L_1262aa4b;
  /* 1262aa3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1262aa49 jmp 0x1262aa57 */
  goto L_1262aa57;
L_1262aa4b:;
  /* 1262aa4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1262aa51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1262aa57:;
  /* 1262aa57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1262aa5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1262aa63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1262aa66 push edx */
  push32((uint32_t)(EDX));
  /* 1262aa67 call 0x1262b3b0 */
  push32(0x1262aa6cu); f_1262b3b0();
  /* 1262aa6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262aa6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1262aa72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262aa75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1262aa7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262aa7c je 0x1262aae6 */
  if (C.zf) goto L_1262aae6;
  /* 1262aa7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262aa82 jne 0x1262aa8d */
  if (!C.zf) goto L_1262aa8d;
  /* 1262aa84 mov ecx, dword ptr [0x1264dfb4] */
  ECX = (r32((uint32_t)(0x1264dfb4)));
  /* 1262aa8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1262aa8d:;
  /* 1262aa8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1262aa94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262aa97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1262aa9d:;
  /* 1262aa9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1262aaa3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1262aaa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262aaac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1262aab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262aab4 je 0x1262aad6 */
  if (C.zf) goto L_1262aad6;
  /* 1262aab6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1262aabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262aabe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1262aac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262aac3 je 0x1262aad6 */
  if (C.zf) goto L_1262aad6;
  /* 1262aac5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1262aacb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262aace mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1262aad4 jmp 0x1262aa9d */
  goto L_1262aa9d;
L_1262aad6:;
  /* 1262aad6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1262aadc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262aadf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1262aae1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1262aae4 jmp 0x1262ab40 */
  goto L_1262ab40;
L_1262aae6:;
  /* 1262aae6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262aaea jne 0x1262aaf4 */
  if (!C.zf) goto L_1262aaf4;
  /* 1262aaec mov eax, dword ptr [0x1264dfb0] */
  EAX = (r32((uint32_t)(0x1264dfb0)));
  /* 1262aaf1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1262aaf4:;
  /* 1262aaf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262aaf7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1262aafd:;
  /* 1262aafd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1262ab03 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1262ab09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262ab0c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1262ab12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262ab14 je 0x1262ab34 */
  if (C.zf) goto L_1262ab34;
  /* 1262ab16 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1262ab1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262ab1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262ab21 je 0x1262ab34 */
  if (C.zf) goto L_1262ab34;
  /* 1262ab23 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1262ab29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ab2c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1262ab32 jmp 0x1262aafd */
  goto L_1262aafd;
L_1262ab34:;
  /* 1262ab34 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1262ab3a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262ab3d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1262ab40:;
  /* 1262ab40 jmp 0x1262afa7 */
  goto L_1262afa7;
L_1262ab45:;
  /* 1262ab45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1262ab48 push edx */
  push32((uint32_t)(EDX));
  /* 1262ab49 call 0x1262b3b0 */
  push32(0x1262ab4eu); f_1262b3b0();
  /* 1262ab4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ab51 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1262ab57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ab5a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1262ab5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ab5f je 0x1262ab73 */
  if (C.zf) goto L_1262ab73;
  /* 1262ab61 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1262ab67 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1262ab6e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1262ab71 jmp 0x1262ab81 */
  goto L_1262ab81;
L_1262ab73:;
  /* 1262ab73 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1262ab79 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1262ab7f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1262ab81:;
  /* 1262ab81 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1262ab8b jmp 0x1262afa7 */
  goto L_1262afa7;
L_1262ab90:;
  /* 1262ab90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1262ab97 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1262ab9a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1262ab9d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1262aba0:;
  /* 1262aba0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262aba3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1262aba5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262aba8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1262abae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1262abb1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262abb8 jge 0x1262abc6 */
  if ((C.sf==C.of)) goto L_1262abc6;
  /* 1262abba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1262abc4 jmp 0x1262abe2 */
  goto L_1262abe2;
L_1262abc6:;
  /* 1262abc6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262abcd jne 0x1262abe2 */
  if (!C.zf) goto L_1262abe2;
  /* 1262abcf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262abd3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262abd6 jne 0x1262abe2 */
  if (!C.zf) goto L_1262abe2;
  /* 1262abd8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1262abe2:;
  /* 1262abe2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262abe5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262abe8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1262abeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262abee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262abf1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262abf3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1262abf6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1262abfc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1262ac02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ac05 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ac06 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1262ac0c push edx */
  push32((uint32_t)(EDX));
  /* 1262ac0d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262ac11 push eax */
  push32((uint32_t)(EAX));
  /* 1262ac12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262ac15 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ac16 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1262ac1c push edx */
  push32((uint32_t)(EDX));
  /* 1262ac1d call dword ptr [0x1264e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264e3a0))), 0x1262ac23u);
  /* 1262ac23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ac26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ac29 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1262ac2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ac30 je 0x1262ac48 */
  if (C.zf) goto L_1262ac48;
  /* 1262ac32 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ac39 jne 0x1262ac48 */
  if (!C.zf) goto L_1262ac48;
  /* 1262ac3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262ac3e push ecx */
  push32((uint32_t)(ECX));
  /* 1262ac3f call dword ptr [0x1264e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264e3ac))), 0x1262ac45u);
  /* 1262ac45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262ac48:;
  /* 1262ac48 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1262ac4c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ac4f jne 0x1262ac6a */
  if (!C.zf) goto L_1262ac6a;
  /* 1262ac51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ac54 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1262ac59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ac5b jne 0x1262ac6a */
  if (!C.zf) goto L_1262ac6a;
  /* 1262ac5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262ac60 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ac61 call dword ptr [0x1264e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264e3a4))), 0x1262ac67u);
  /* 1262ac67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262ac6a:;
  /* 1262ac6a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262ac6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262ac70 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ac73 jne 0x1262ac87 */
  if (!C.zf) goto L_1262ac87;
  /* 1262ac75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ac78 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1262ac7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262ac7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262ac81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ac84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1262ac87:;
  /* 1262ac87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262ac8a push eax */
  push32((uint32_t)(EAX));
  /* 1262ac8b call 0x12626410 */
  push32(0x1262ac90u); f_12626410();
  /* 1262ac90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ac93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1262ac96 jmp 0x1262afa7 */
  goto L_1262afa7;
L_1262ac9b:;
  /* 1262ac9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ac9e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1262aca1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262aca4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1262acae jmp 0x1262ad35 */
  goto L_1262ad35;
L_1262acb3:;
  /* 1262acb3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1262acbd jmp 0x1262ad35 */
  goto L_1262ad35;
L_1262acbf:;
  /* 1262acbf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1262acc9:;
  /* 1262acc9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1262acd3 jmp 0x1262acdf */
  goto L_1262acdf;
L_1262acd5:;
  /* 1262acd5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1262acdf:;
  /* 1262acdf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1262ace9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262acec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1262acf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262acf4 je 0x1262ad13 */
  if (C.zf) goto L_1262ad13;
  /* 1262acf6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1262acfd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1262ad03 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ad06 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1262ad0c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1262ad13:;
  /* 1262ad13 jmp 0x1262ad35 */
  goto L_1262ad35;
L_1262ad15:;
  /* 1262ad15 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1262ad1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ad22 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1262ad28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262ad2a je 0x1262ad35 */
  if (C.zf) goto L_1262ad35;
  /* 1262ad2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ad2f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1262ad32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1262ad35:;
  /* 1262ad35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ad38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1262ad3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ad3f je 0x1262ad5e */
  if (C.zf) goto L_1262ad5e;
  /* 1262ad41 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1262ad44 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ad45 call 0x1262b3d0 */
  push32(0x1262ad4au); f_1262b3d0();
  /* 1262ad4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ad4d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1262ad53 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1262ad59 jmp 0x1262adef */
  goto L_1262adef;
L_1262ad5e:;
  /* 1262ad5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ad61 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1262ad64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262ad66 je 0x1262adb0 */
  if (C.zf) goto L_1262adb0;
  /* 1262ad68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ad6b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1262ad6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ad70 je 0x1262ad90 */
  if (C.zf) goto L_1262ad90;
  /* 1262ad72 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1262ad75 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ad76 call 0x1262b3b0 */
  push32(0x1262ad7bu); f_1262b3b0();
  /* 1262ad7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ad7e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1262ad81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262ad82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1262ad88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1262ad8e jmp 0x1262adae */
  goto L_1262adae;
L_1262ad90:;
  /* 1262ad90 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1262ad93 push edx */
  push32((uint32_t)(EDX));
  /* 1262ad94 call 0x1262b3b0 */
  push32(0x1262ad99u); f_1262b3b0();
  /* 1262ad99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ad9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262ada1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262ada2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1262ada8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1262adae:;
  /* 1262adae jmp 0x1262adef */
  goto L_1262adef;
L_1262adb0:;
  /* 1262adb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262adb3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1262adb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262adb8 je 0x1262add5 */
  if (C.zf) goto L_1262add5;
  /* 1262adba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1262adbd push ecx */
  push32((uint32_t)(ECX));
  /* 1262adbe call 0x1262b3b0 */
  push32(0x1262adc3u); f_1262b3b0();
  /* 1262adc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262adc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262adc7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1262adcd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1262add3 jmp 0x1262adef */
  goto L_1262adef;
L_1262add5:;
  /* 1262add5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1262add8 push edx */
  push32((uint32_t)(EDX));
  /* 1262add9 call 0x1262b3b0 */
  push32(0x1262addeu); f_1262b3b0();
  /* 1262adde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ade1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ade3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1262ade9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1262adef:;
  /* 1262adef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262adf2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1262adf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262adf7 je 0x1262ae37 */
  if (C.zf) goto L_1262ae37;
  /* 1262adf9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ae00 jg 0x1262ae37 */
  if ((!C.zf&&C.sf==C.of)) goto L_1262ae37;
  /* 1262ae02 jl 0x1262ae0d */
  if ((C.sf!=C.of)) goto L_1262ae0d;
  /* 1262ae04 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ae0b jae 0x1262ae37 */
  if (!C.cf) goto L_1262ae37;
L_1262ae0d:;
  /* 1262ae0d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1262ae13 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262ae15 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1262ae1b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ae1e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262ae20 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1262ae26 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1262ae2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ae2f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1262ae32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262ae35 jmp 0x1262ae4f */
  goto L_1262ae4f;
L_1262ae37:;
  /* 1262ae37 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1262ae3d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1262ae43 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1262ae49 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1262ae4f:;
  /* 1262ae4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ae52 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1262ae58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262ae5a jne 0x1262ae77 */
  if (!C.zf) goto L_1262ae77;
  /* 1262ae5c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1262ae62 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1262ae68 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1262ae6b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1262ae71 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1262ae77:;
  /* 1262ae77 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ae7e jge 0x1262ae8c */
  if ((C.sf==C.of)) goto L_1262ae8c;
  /* 1262ae80 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1262ae8a jmp 0x1262ae95 */
  goto L_1262ae95;
L_1262ae8c:;
  /* 1262ae8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ae8f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1262ae92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1262ae95:;
  /* 1262ae95 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1262ae9b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1262aea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262aea3 jne 0x1262aeac */
  if (!C.zf) goto L_1262aeac;
  /* 1262aea5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1262aeac:;
  /* 1262aeac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1262aeaf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1262aeb2:;
  /* 1262aeb2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1262aeb8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1262aebe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262aec1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1262aec7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262aec9 jg 0x1262aedf */
  if ((!C.zf&&C.sf==C.of)) goto L_1262aedf;
  /* 1262aecb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1262aed1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1262aed7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262aed9 je 0x1262af60 */
  if (C.zf) goto L_1262af60;
L_1262aedf:;
  /* 1262aedf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1262aee5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262aee6 push edx */
  push32((uint32_t)(EDX));
  /* 1262aee7 push eax */
  push32((uint32_t)(EAX));
  /* 1262aee8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1262aeee push edx */
  push32((uint32_t)(EDX));
  /* 1262aeef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1262aef5 push eax */
  push32((uint32_t)(EAX));
  /* 1262aef6 call 0x1262a270 */
  push32(0x1262aefbu); f_1262a270();
  /* 1262aefb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262aefe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1262af04 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1262af0a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262af0b push edx */
  push32((uint32_t)(EDX));
  /* 1262af0c push eax */
  push32((uint32_t)(EAX));
  /* 1262af0d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1262af13 push ecx */
  push32((uint32_t)(ECX));
  /* 1262af14 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1262af1a push edx */
  push32((uint32_t)(EDX));
  /* 1262af1b call 0x1262a200 */
  push32(0x1262af20u); f_1262a200();
  /* 1262af20 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1262af26 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1262af2c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262af33 jle 0x1262af47 */
  if ((C.zf||C.sf!=C.of)) goto L_1262af47;
  /* 1262af35 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1262af3b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262af41 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1262af47:;
  /* 1262af47 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262af4a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1262af50 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1262af52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262af55 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262af58 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1262af5b jmp 0x1262aeb2 */
  goto L_1262aeb2;
L_1262af60:;
  /* 1262af60 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1262af63 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262af66 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1262af69 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262af6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262af6f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1262af72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262af75 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1262af7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262af7c je 0x1262afa7 */
  if (C.zf) goto L_1262afa7;
  /* 1262af7e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262af81 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262af84 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262af87 jne 0x1262af8f */
  if (!C.zf) goto L_1262af8f;
  /* 1262af89 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262af8d jne 0x1262afa7 */
  if (!C.zf) goto L_1262afa7;
L_1262af8f:;
  /* 1262af8f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262af92 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262af95 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1262af98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262af9b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1262af9e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262afa1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262afa4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1262afa7:;
  /* 1262afa7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262afae jne 0x1262b182 */
  if (!C.zf) goto L_1262b182;
  /* 1262afb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262afb7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1262afba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262afbc je 0x1262b00d */
  if (C.zf) goto L_1262b00d;
  /* 1262afbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262afc1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1262afc7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262afc9 je 0x1262afdb */
  if (C.zf) goto L_1262afdb;
  /* 1262afcb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1262afd2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1262afd9 jmp 0x1262b00d */
  goto L_1262b00d;
L_1262afdb:;
  /* 1262afdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262afde and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1262afe1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262afe3 je 0x1262aff5 */
  if (C.zf) goto L_1262aff5;
  /* 1262afe5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1262afec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1262aff3 jmp 0x1262b00d */
  goto L_1262b00d;
L_1262aff5:;
  /* 1262aff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262aff8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1262affb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262affd je 0x1262b00d */
  if (C.zf) goto L_1262b00d;
  /* 1262afff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1262b006 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1262b00d:;
  /* 1262b00d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1262b013 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b016 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b019 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1262b01f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b022 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1262b025 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262b027 jne 0x1262b045 */
  if (!C.zf) goto L_1262b045;
  /* 1262b029 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1262b02f push eax */
  push32((uint32_t)(EAX));
  /* 1262b030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b033 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b034 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1262b03a push edx */
  push32((uint32_t)(EDX));
  /* 1262b03b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1262b03d call 0x1262b320 */
  push32(0x1262b042u); f_1262b320();
  /* 1262b042 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262b045:;
  /* 1262b045 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1262b04b push eax */
  push32((uint32_t)(EAX));
  /* 1262b04c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b04f push ecx */
  push32((uint32_t)(ECX));
  /* 1262b050 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262b053 push edx */
  push32((uint32_t)(EDX));
  /* 1262b054 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1262b05a push eax */
  push32((uint32_t)(EAX));
  /* 1262b05b call 0x1262b360 */
  push32(0x1262b060u); f_1262b360();
  /* 1262b060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b063 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b066 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1262b069 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262b06b je 0x1262b093 */
  if (C.zf) goto L_1262b093;
  /* 1262b06d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b070 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1262b073 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262b075 jne 0x1262b093 */
  if (!C.zf) goto L_1262b093;
  /* 1262b077 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1262b07d push eax */
  push32((uint32_t)(EAX));
  /* 1262b07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b081 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b082 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1262b088 push edx */
  push32((uint32_t)(EDX));
  /* 1262b089 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1262b08b call 0x1262b320 */
  push32(0x1262b090u); f_1262b320();
  /* 1262b090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262b093:;
  /* 1262b093 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b097 je 0x1262b141 */
  if (C.zf) goto L_1262b141;
  /* 1262b09d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b0a1 jle 0x1262b141 */
  if ((C.zf||C.sf!=C.of)) goto L_1262b141;
  /* 1262b0a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262b0aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1262b0b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262b0b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1262b0b9:;
  /* 1262b0b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1262b0bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1262b0c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b0c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1262b0ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262b0d0 je 0x1262b13f */
  if (C.zf) goto L_1262b13f;
  /* 1262b0d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1262b0d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1262b0db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1262b0e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1262b0e9 push eax */
  push32((uint32_t)(EAX));
  /* 1262b0ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1262b0f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b0f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1262b0f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b0fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1262b100 call 0x1262c4d0 */
  push32(0x1262b105u); f_1262c4d0();
  /* 1262b105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b108 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1262b10e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b115 jg 0x1262b119 */
  if ((!C.zf&&C.sf==C.of)) goto L_1262b119;
  /* 1262b117 jmp 0x1262b13f */
  goto L_1262b13f;
L_1262b119:;
  /* 1262b119 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1262b11f push eax */
  push32((uint32_t)(EAX));
  /* 1262b120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b123 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b124 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1262b12a push edx */
  push32((uint32_t)(EDX));
  /* 1262b12b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1262b131 push eax */
  push32((uint32_t)(EAX));
  /* 1262b132 call 0x1262b360 */
  push32(0x1262b137u); f_1262b360();
  /* 1262b137 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b13a jmp 0x1262b0b9 */
  goto L_1262b0b9;
L_1262b13f:;
  /* 1262b13f jmp 0x1262b15c */
  goto L_1262b15c;
L_1262b141:;
  /* 1262b141 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1262b147 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b14b push edx */
  push32((uint32_t)(EDX));
  /* 1262b14c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262b14f push eax */
  push32((uint32_t)(EAX));
  /* 1262b150 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262b153 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b154 call 0x1262b360 */
  push32(0x1262b159u); f_1262b360();
  /* 1262b159 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262b15c:;
  /* 1262b15c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b15f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1262b162 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262b164 je 0x1262b182 */
  if (C.zf) goto L_1262b182;
  /* 1262b166 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1262b16c push eax */
  push32((uint32_t)(EAX));
  /* 1262b16d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b170 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b171 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1262b177 push edx */
  push32((uint32_t)(EDX));
  /* 1262b178 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1262b17a call 0x1262b320 */
  push32(0x1262b17fu); f_1262b320();
  /* 1262b17f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262b182:;
  /* 1262b182 jmp 0x1262a594 */
  goto L_1262a594;
L_1262b187:;
  /* 1262b187 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1262b18d pop edi */
  EDI = (pop32());
  /* 1262b18e pop esi */
  ESI = (pop32());
  /* 1262b18f pop ebx */
  EBX = (pop32());
  /* 1262b190 mov esp, ebp */
  ESP = (EBP);
  /* 1262b192 pop ebp */
  EBP = (pop32());
  /* 1262b193 ret  */
  ESPCHK(0x1262a570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2a0 @ 0x1262b2a0 (119 bytes, 44 insns) */
void f_1262b2a0(void) {
  FTRACE(0x1262b2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b2a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b2a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1262b2aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b2ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b2b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1262b2b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b2b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b2ba jl 0x1262b2e2 */
  if ((C.sf!=C.of)) goto L_1262b2e2;
  /* 1262b2bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b2bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262b2c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1262b2c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1262b2c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1262b2ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262b2d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262b2d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b2d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1262b2d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b2db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b2de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1262b2e0 jmp 0x1262b2f5 */
  goto L_1262b2f5;
L_1262b2e2:;
  /* 1262b2e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b2e5 push edx */
  push32((uint32_t)(EDX));
  /* 1262b2e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b2e9 push eax */
  push32((uint32_t)(EAX));
  /* 1262b2ea call 0x1262a2f0 */
  push32(0x1262b2efu); f_1262a2f0();
  /* 1262b2ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b2f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262b2f5:;
  /* 1262b2f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b2f9 jne 0x1262b306 */
  if (!C.zf) goto L_1262b306;
  /* 1262b2fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b2fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1262b304 jmp 0x1262b313 */
  goto L_1262b313;
L_1262b306:;
  /* 1262b306 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b309 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1262b30b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b30e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b311 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1262b313:;
  /* 1262b313 mov esp, ebp */
  ESP = (EBP);
  /* 1262b315 pop ebp */
  EBP = (pop32());
  /* 1262b316 ret  */
  ESPCHK(0x1262b2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x1262b320 (53 bytes, 23 insns) */
void f_1262b320(void) {
  FTRACE(0x1262b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b321 mov ebp, esp */
  EBP = (ESP);
L_1262b323:;
  /* 1262b323 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b326 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b329 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b32c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1262b32f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262b331 jle 0x1262b353 */
  if ((C.zf||C.sf!=C.of)) goto L_1262b353;
  /* 1262b333 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262b336 push edx */
  push32((uint32_t)(EDX));
  /* 1262b337 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b33a push eax */
  push32((uint32_t)(EAX));
  /* 1262b33b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b33e push ecx */
  push32((uint32_t)(ECX));
  /* 1262b33f call 0x1262b2a0 */
  push32(0x1262b344u); f_1262b2a0();
  /* 1262b344 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b347 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262b34a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b34d jne 0x1262b351 */
  if (!C.zf) goto L_1262b351;
  /* 1262b34f jmp 0x1262b353 */
  goto L_1262b353;
L_1262b351:;
  /* 1262b351 jmp 0x1262b323 */
  goto L_1262b323;
L_1262b353:;
  /* 1262b353 pop ebp */
  EBP = (pop32());
  /* 1262b354 ret  */
  ESPCHK(0x1262b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b360 @ 0x1262b360 (74 bytes, 31 insns) */
void f_1262b360(void) {
  FTRACE(0x1262b360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b360 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b361 mov ebp, esp */
  EBP = (ESP);
  /* 1262b363 push ecx */
  push32((uint32_t)(ECX));
L_1262b364:;
  /* 1262b364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b367 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b36a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b36d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1262b370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262b372 jle 0x1262b3a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1262b3a6;
  /* 1262b374 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262b377 push edx */
  push32((uint32_t)(EDX));
  /* 1262b378 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b37b push eax */
  push32((uint32_t)(EAX));
  /* 1262b37c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b37f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262b382 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262b385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b388 push eax */
  push32((uint32_t)(EAX));
  /* 1262b389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b38c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b38f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1262b392 call 0x1262b2a0 */
  push32(0x1262b397u); f_1262b2a0();
  /* 1262b397 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b39a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262b39d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b3a0 jne 0x1262b3a4 */
  if (!C.zf) goto L_1262b3a4;
  /* 1262b3a2 jmp 0x1262b3a6 */
  goto L_1262b3a6;
L_1262b3a4:;
  /* 1262b3a4 jmp 0x1262b364 */
  goto L_1262b364;
L_1262b3a6:;
  /* 1262b3a6 mov esp, ebp */
  ESP = (EBP);
  /* 1262b3a8 pop ebp */
  EBP = (pop32());
  /* 1262b3a9 ret  */
  ESPCHK(0x1262b360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3b0 @ 0x1262b3b0 (26 bytes, 12 insns) */
void f_1262b3b0(void) {
  FTRACE(0x1262b3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b3b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262b3b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b3bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1262b3c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262b3c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1262b3c8 pop ebp */
  EBP = (pop32());
  /* 1262b3c9 ret  */
  ESPCHK(0x1262b3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3d0 @ 0x1262b3d0 (31 bytes, 14 insns) */
void f_1262b3d0(void) {
  FTRACE(0x1262b3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b3d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262b3d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b3db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1262b3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262b3e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b3e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1262b3ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1262b3ed pop ebp */
  EBP = (pop32());
  /* 1262b3ee ret  */
  ESPCHK(0x1262b3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3f0 @ 0x1262b3f0 (27 bytes, 12 insns) */
void f_1262b3f0(void) {
  FTRACE(0x1262b3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b3f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262b3f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b3fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b3fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1262b400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b403 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262b405 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1262b409 pop ebp */
  EBP = (pop32());
  /* 1262b40a ret  */
  ESPCHK(0x1262b3f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1262b410 (145 bytes, 42 insns) */
void f_1262b410(void) {
  FTRACE(0x1262b410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b410 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b411 mov ebp, esp */
  EBP = (ESP);
  /* 1262b413 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b414 call 0x1262b4c0 */
  push32(0x1262b419u); f_1262b4c0();
  /* 1262b419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b41c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1262b41e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262b425 jmp 0x1262b430 */
  goto L_1262b430;
L_1262b427:;
  /* 1262b427 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b42a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b42d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1262b430:;
  /* 1262b430 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b434 jae 0x1262b45a */
  if (!C.cf) goto L_1262b45a;
  /* 1262b436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b43c cmp ecx, dword ptr [eax*8 + 0x1264dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1264dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b443 jne 0x1262b458 */
  if (!C.zf) goto L_1262b458;
  /* 1262b445 call 0x1262b4b0 */
  push32(0x1262b44au); f_1262b4b0();
  /* 1262b44a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262b44d mov ecx, dword ptr [edx*8 + 0x1264dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1264dfbc)));
  /* 1262b454 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1262b456 jmp 0x1262b49d */
  goto L_1262b49d;
L_1262b458:;
  /* 1262b458 jmp 0x1262b427 */
  goto L_1262b427;
L_1262b45a:;
  /* 1262b45a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b45e jb 0x1262b473 */
  if (C.cf) goto L_1262b473;
  /* 1262b460 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b464 ja 0x1262b473 */
  if ((!C.cf&&!C.zf)) goto L_1262b473;
  /* 1262b466 call 0x1262b4b0 */
  push32(0x1262b46bu); f_1262b4b0();
  /* 1262b46b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1262b471 jmp 0x1262b49d */
  goto L_1262b49d;
L_1262b473:;
  /* 1262b473 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b47a jb 0x1262b492 */
  if (C.cf) goto L_1262b492;
  /* 1262b47c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b483 ja 0x1262b492 */
  if ((!C.cf&&!C.zf)) goto L_1262b492;
  /* 1262b485 call 0x1262b4b0 */
  push32(0x1262b48au); f_1262b4b0();
  /* 1262b48a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1262b490 jmp 0x1262b49d */
  goto L_1262b49d;
L_1262b492:;
  /* 1262b492 call 0x1262b4b0 */
  push32(0x1262b497u); f_1262b4b0();
  /* 1262b497 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1262b49d:;
  /* 1262b49d mov esp, ebp */
  ESP = (EBP);
  /* 1262b49f pop ebp */
  EBP = (pop32());
  /* 1262b4a0 ret  */
  ESPCHK(0x1262b410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4b0 @ 0x1262b4b0 (13 bytes, 6 insns) */
void f_1262b4b0(void) {
  FTRACE(0x1262b4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b4b3 call 0x12623020 */
  push32(0x1262b4b8u); f_12623020();
  /* 1262b4b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b4bb pop ebp */
  EBP = (pop32());
  /* 1262b4bc ret  */
  ESPCHK(0x1262b4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x1262b4c0 (13 bytes, 6 insns) */
void f_1262b4c0(void) {
  FTRACE(0x1262b4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b4c3 call 0x12623020 */
  push32(0x1262b4c8u); f_12623020();
  /* 1262b4c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b4cb pop ebp */
  EBP = (pop32());
  /* 1262b4cc ret  */
  ESPCHK(0x1262b4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4d0 @ 0x1262b4d0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1262b4d0(void) {
  FTRACE(0x1262b4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b4d3 push edi */
  push32((uint32_t)(EDI));
  /* 1262b4d4 push esi */
  push32((uint32_t)(ESI));
  /* 1262b4d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b4d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b4db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b4de mov eax, ecx */
  EAX = (ECX);
  /* 1262b4e0 mov edx, ecx */
  EDX = (ECX);
  /* 1262b4e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b4e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b4e6 jbe 0x1262b4f0 */
  if ((C.cf||C.zf)) goto L_1262b4f0;
  /* 1262b4e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b4ea jb 0x1262b668 */
  if (C.cf) goto L_1262b668;
L_1262b4f0:;
  /* 1262b4f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1262b4f6 jne 0x1262b50c */
  if (!C.zf) goto L_1262b50c;
  /* 1262b4f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b4fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1262b4fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b501 jb 0x1262b52c */
  if (C.cf) goto L_1262b52c;
  /* 1262b503 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b505 jmp dword ptr [edx*4 + 0x1262b618] */
  switch (EDX) {
    case 0: goto L_1262b628;
    case 1: goto L_1262b630;
    case 2: goto L_1262b63c;
    case 3: goto L_1262b650;
    default: x86_unimpl("switch@0x1262b505 out of table"); return;
  }
L_1262b50c:;
  /* 1262b50c mov eax, edi */
  EAX = (EDI);
  /* 1262b50e mov edx, 3 */
  EDX = (0x3u);
  /* 1262b513 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b516 jb 0x1262b524 */
  if (C.cf) goto L_1262b524;
  /* 1262b518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1262b51b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b51d jmp dword ptr [eax*4 + 0x1262b530] */
  switch (EAX) {
    case 1: goto L_1262b540;
    case 2: goto L_1262b56c;
    case 3: goto L_1262b590;
    default: x86_unimpl("switch@0x1262b51d out of table"); return;
  }
L_1262b524:;
  /* 1262b524 jmp dword ptr [ecx*4 + 0x1262b628] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1262b628)))); return;
  /* 1262b52b nop  */
  /* nop */
L_1262b52c:;
  /* 1262b52c jmp dword ptr [ecx*4 + 0x1262b5ac] */
  switch (ECX) {
    case 0: goto L_1262b60f;
    case 1: goto L_1262b5fc;
    case 2: goto L_1262b5f4;
    case 3: goto L_1262b5ec;
    case 4: goto L_1262b5e4;
    case 5: goto L_1262b5dc;
    case 6: goto L_1262b5d4;
    case 7: goto L_1262b5cc;
    default: x86_unimpl("switch@0x1262b52c out of table"); return;
  }
  /* 1262b533 nop  */
  /* nop */
L_1262b540:;
  /* 1262b540 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262b542 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262b544 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262b546 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262b549 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262b54c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262b54f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b552 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262b555 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b558 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b55b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b55e jb 0x1262b52c */
  if (C.cf) goto L_1262b52c;
  /* 1262b560 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b562 jmp dword ptr [edx*4 + 0x1262b618] */
  switch (EDX) {
    case 0: goto L_1262b628;
    case 1: goto L_1262b630;
    case 2: goto L_1262b63c;
    case 3: goto L_1262b650;
    default: x86_unimpl("switch@0x1262b562 out of table"); return;
  }
  /* 1262b569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262b56c:;
  /* 1262b56c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262b56e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262b570 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262b572 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262b575 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b578 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262b57b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b57e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b581 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b584 jb 0x1262b52c */
  if (C.cf) goto L_1262b52c;
  /* 1262b586 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b588 jmp dword ptr [edx*4 + 0x1262b618] */
  switch (EDX) {
    case 0: goto L_1262b628;
    case 1: goto L_1262b630;
    case 2: goto L_1262b63c;
    case 3: goto L_1262b650;
    default: x86_unimpl("switch@0x1262b588 out of table"); return;
  }
  /* 1262b58f nop  */
  /* nop */
L_1262b590:;
  /* 1262b590 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262b592 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262b594 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262b596 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1262b597 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b59a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1262b59b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b59e jb 0x1262b52c */
  if (C.cf) goto L_1262b52c;
  /* 1262b5a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b5a2 jmp dword ptr [edx*4 + 0x1262b618] */
  switch (EDX) {
    case 0: goto L_1262b628;
    case 1: goto L_1262b630;
    case 2: goto L_1262b63c;
    case 3: goto L_1262b650;
    default: x86_unimpl("switch@0x1262b5a2 out of table"); return;
  }
  /* 1262b5a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262b5cc:;
  /* 1262b5cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1262b5d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1262b5d4:;
  /* 1262b5d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1262b5d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1262b5dc:;
  /* 1262b5dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1262b5e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1262b5e4:;
  /* 1262b5e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1262b5e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1262b5ec:;
  /* 1262b5ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1262b5f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1262b5f4:;
  /* 1262b5f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1262b5f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1262b5fc:;
  /* 1262b5fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1262b600 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1262b604 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1262b60b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b60d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1262b60f:;
  /* 1262b60f jmp dword ptr [edx*4 + 0x1262b618] */
  switch (EDX) {
    case 0: goto L_1262b628;
    case 1: goto L_1262b630;
    case 2: goto L_1262b63c;
    case 3: goto L_1262b650;
    default: x86_unimpl("switch@0x1262b60f out of table"); return;
  }
  /* 1262b616 mov edi, edi */
  EDI = (EDI);
L_1262b628:;
  /* 1262b628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b62b pop esi */
  ESI = (pop32());
  /* 1262b62c pop edi */
  EDI = (pop32());
  /* 1262b62d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b62e ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
  /* 1262b62f nop  */
  /* nop */
L_1262b630:;
  /* 1262b630 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262b632 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262b634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b637 pop esi */
  ESI = (pop32());
  /* 1262b638 pop edi */
  EDI = (pop32());
  /* 1262b639 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b63a ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
  /* 1262b63b nop  */
  /* nop */
L_1262b63c:;
  /* 1262b63c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262b63e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262b640 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262b643 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262b646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b649 pop esi */
  ESI = (pop32());
  /* 1262b64a pop edi */
  EDI = (pop32());
  /* 1262b64b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b64c ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
  /* 1262b64d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262b650:;
  /* 1262b650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262b652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1262b654 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262b657 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262b65a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262b65d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262b660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b663 pop esi */
  ESI = (pop32());
  /* 1262b664 pop edi */
  EDI = (pop32());
  /* 1262b665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b666 ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
  /* 1262b667 nop  */
  /* nop */
L_1262b668:;
  /* 1262b668 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1262b66c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1262b670 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1262b676 jne 0x1262b69c */
  if (!C.zf) goto L_1262b69c;
  /* 1262b678 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b67b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1262b67e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b681 jb 0x1262b690 */
  if (C.cf) goto L_1262b690;
  /* 1262b683 std  */
  C.df=1;
  /* 1262b684 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b686 cld  */
  C.df=0;
  /* 1262b687 jmp dword ptr [edx*4 + 0x1262b7b0] */
  switch (EDX) {
    case 0: goto L_1262b7c0;
    case 1: goto L_1262b7c8;
    case 2: goto L_1262b7d8;
    case 3: goto L_1262b7ec;
    default: x86_unimpl("switch@0x1262b687 out of table"); return;
  }
  /* 1262b68e mov edi, edi */
  EDI = (EDI);
L_1262b690:;
  /* 1262b690 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262b692 jmp dword ptr [ecx*4 + 0x1262b760] */
  switch (ECX) {
    case 0: goto L_1262b7a7;
    default: x86_unimpl("switch@0x1262b692 out of table"); return;
  }
  /* 1262b699 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262b69c:;
  /* 1262b69c mov eax, edi */
  EAX = (EDI);
  /* 1262b69e mov edx, 3 */
  EDX = (0x3u);
  /* 1262b6a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b6a6 jb 0x1262b6b4 */
  if (C.cf) goto L_1262b6b4;
  /* 1262b6a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1262b6ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b6ad jmp dword ptr [eax*4 + 0x1262b6b8] */
  switch (EAX) {
    case 1: goto L_1262b6c8;
    case 2: goto L_1262b6e8;
    case 3: goto L_1262b710;
    default: x86_unimpl("switch@0x1262b6ad out of table"); return;
  }
L_1262b6b4:;
  /* 1262b6b4 jmp dword ptr [ecx*4 + 0x1262b7b0] */
  switch (ECX) {
    case 0: goto L_1262b7c0;
    case 1: goto L_1262b7c8;
    case 2: goto L_1262b7d8;
    case 3: goto L_1262b7ec;
    default: x86_unimpl("switch@0x1262b6b4 out of table"); return;
  }
  /* 1262b6bb nop  */
  /* nop */
L_1262b6c8:;
  /* 1262b6c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262b6cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262b6cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262b6d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1262b6d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b6d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1262b6d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b6d8 jb 0x1262b690 */
  if (C.cf) goto L_1262b690;
  /* 1262b6da std  */
  C.df=1;
  /* 1262b6db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b6dd cld  */
  C.df=0;
  /* 1262b6de jmp dword ptr [edx*4 + 0x1262b7b0] */
  switch (EDX) {
    case 0: goto L_1262b7c0;
    case 1: goto L_1262b7c8;
    case 2: goto L_1262b7d8;
    case 3: goto L_1262b7ec;
    default: x86_unimpl("switch@0x1262b6de out of table"); return;
  }
  /* 1262b6e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262b6e8:;
  /* 1262b6e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262b6eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262b6ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262b6f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262b6f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b6f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262b6f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b6fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b6ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b702 jb 0x1262b690 */
  if (C.cf) goto L_1262b690;
  /* 1262b704 std  */
  C.df=1;
  /* 1262b705 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b707 cld  */
  C.df=0;
  /* 1262b708 jmp dword ptr [edx*4 + 0x1262b7b0] */
  switch (EDX) {
    case 0: goto L_1262b7c0;
    case 1: goto L_1262b7c8;
    case 2: goto L_1262b7d8;
    case 3: goto L_1262b7ec;
    default: x86_unimpl("switch@0x1262b708 out of table"); return;
  }
  /* 1262b70f nop  */
  /* nop */
L_1262b710:;
  /* 1262b710 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262b713 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1262b715 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262b718 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262b71b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262b71e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262b721 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262b724 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262b727 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b72a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b72d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b730 jb 0x1262b690 */
  if (C.cf) goto L_1262b690;
  /* 1262b736 std  */
  C.df=1;
  /* 1262b737 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1262b739 cld  */
  C.df=0;
  /* 1262b73a jmp dword ptr [edx*4 + 0x1262b7b0] */
  switch (EDX) {
    case 0: goto L_1262b7c0;
    case 1: goto L_1262b7c8;
    case 2: goto L_1262b7d8;
    case 3: goto L_1262b7ec;
    default: x86_unimpl("switch@0x1262b73a out of table"); return;
  }
  /* 1262b741 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1262b744 mov bh, 0x62 */
  C.b.b.h = (0x62u);
  /* 1262b747 adc ch, byte ptr [edi + esi*4 + 0x62] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDI + ESI*4 + 0x62))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1262b74b adc dh, byte ptr [edi + esi*4 + 0x62] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDI + ESI*4 + 0x62))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1262b74f adc bh, byte ptr [edi + esi*4 + 0x62] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDI + ESI*4 + 0x62))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1262b753 adc al, byte ptr [edi + esi*4 - 0x4873ed9e] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + ESI*4 + -0x4873ed9e))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1262b75a bound edx, qword ptr [edx] */
  x86_unimpl("bound @ 0x1262b75a");
  /* 1262b75c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1262b75d mov bh, 0x62 */
  C.b.b.h = (0x62u);
  /* 1262b764 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1262b768 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1262b76c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1262b770 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1262b774 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1262b778 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1262b77c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1262b780 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1262b784 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1262b788 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1262b78c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1262b790 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1262b794 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1262b798 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1262b79c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1262b7a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b7a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1262b7a7:;
  /* 1262b7a7 jmp dword ptr [edx*4 + 0x1262b7b0] */
  switch (EDX) {
    case 0: goto L_1262b7c0;
    case 1: goto L_1262b7c8;
    case 2: goto L_1262b7d8;
    case 3: goto L_1262b7ec;
    default: x86_unimpl("switch@0x1262b7a7 out of table"); return;
  }
  /* 1262b7ae mov edi, edi */
  EDI = (EDI);
L_1262b7c0:;
  /* 1262b7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b7c3 pop esi */
  ESI = (pop32());
  /* 1262b7c4 pop edi */
  EDI = (pop32());
  /* 1262b7c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b7c6 ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
  /* 1262b7c7 nop  */
  /* nop */
L_1262b7c8:;
  /* 1262b7c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262b7cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262b7ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b7d1 pop esi */
  ESI = (pop32());
  /* 1262b7d2 pop edi */
  EDI = (pop32());
  /* 1262b7d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b7d4 ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
  /* 1262b7d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262b7d8:;
  /* 1262b7d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262b7db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262b7de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262b7e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262b7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b7e7 pop esi */
  ESI = (pop32());
  /* 1262b7e8 pop edi */
  EDI = (pop32());
  /* 1262b7e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b7ea ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
  /* 1262b7eb nop  */
  /* nop */
L_1262b7ec:;
  /* 1262b7ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1262b7ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1262b7f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1262b7f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1262b7f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1262b7fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1262b7fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b801 pop esi */
  ESI = (pop32());
  /* 1262b802 pop edi */
  EDI = (pop32());
  /* 1262b803 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262b804 ret  */
  ESPCHK(0x1262b4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b810 @ 0x1262b810 (421 bytes, 148 insns) */
void f_1262b810(void) {
  FTRACE(0x1262b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b810 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b811 mov ebp, esp */
  EBP = (ESP);
  /* 1262b813 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1262b815 push 0x1264b040 */
  push32((uint32_t)(0x1264b040u));
  /* 1262b81a push 0x1262c6e8 */
  push32((uint32_t)(0x1262c6e8u));
  /* 1262b81f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1262b825 push eax */
  push32((uint32_t)(EAX));
  /* 1262b826 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1262b82d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b830 push ebx */
  push32((uint32_t)(EBX));
  /* 1262b831 push esi */
  push32((uint32_t)(ESI));
  /* 1262b832 push edi */
  push32((uint32_t)(EDI));
  /* 1262b833 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1262b836 cmp dword ptr [0x1264f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b83d jne 0x1262b88e */
  if (!C.zf) goto L_1262b88e;
  /* 1262b83f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1262b842 push eax */
  push32((uint32_t)(EAX));
  /* 1262b843 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262b845 push 0x1264b03c */
  push32((uint32_t)(0x1264b03cu));
  /* 1262b84a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262b84c call dword ptr [0x12652368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652368))), 0x1262b852u);
  /* 1262b852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262b854 je 0x1262b862 */
  if (C.zf) goto L_1262b862;
  /* 1262b856 mov dword ptr [0x1264f704], 1 */
  w32((uint32_t)(0x1264f704), (0x1u));
  /* 1262b860 jmp 0x1262b88e */
  goto L_1262b88e;
L_1262b862:;
  /* 1262b862 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1262b865 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b866 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262b868 push 0x1264b038 */
  push32((uint32_t)(0x1264b038u));
  /* 1262b86d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262b86f push 0 */
  push32((uint32_t)(0x0u));
  /* 1262b871 call dword ptr [0x12652364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652364))), 0x1262b877u);
  /* 1262b877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262b879 je 0x1262b887 */
  if (C.zf) goto L_1262b887;
  /* 1262b87b mov dword ptr [0x1264f704], 2 */
  w32((uint32_t)(0x1264f704), (0x2u));
  /* 1262b885 jmp 0x1262b88e */
  goto L_1262b88e;
L_1262b887:;
  /* 1262b887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262b889 jmp 0x1262b9b8 */
  goto L_1262b9b8;
L_1262b88e:;
  /* 1262b88e cmp dword ptr [0x1264f704], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1264f704))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b895 jne 0x1262b8c5 */
  if (!C.zf) goto L_1262b8c5;
  /* 1262b897 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b89b jne 0x1262b8a6 */
  if (!C.zf) goto L_1262b8a6;
  /* 1262b89d mov edx, dword ptr [0x1264f710] */
  EDX = (r32((uint32_t)(0x1264f710)));
  /* 1262b8a3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1262b8a6:;
  /* 1262b8a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262b8a9 push eax */
  push32((uint32_t)(EAX));
  /* 1262b8aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b8ad push ecx */
  push32((uint32_t)(ECX));
  /* 1262b8ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b8b1 push edx */
  push32((uint32_t)(EDX));
  /* 1262b8b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1262b8b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1262b8b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b8ba call dword ptr [0x12652364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652364))), 0x1262b8c0u);
  /* 1262b8c0 jmp 0x1262b9b8 */
  goto L_1262b9b8;
L_1262b8c5:;
  /* 1262b8c5 cmp dword ptr [0x1264f704], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f704))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b8cc jne 0x1262b9b6 */
  if (!C.zf) goto L_1262b9b6;
  /* 1262b8d2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b8d6 jne 0x1262b8e1 */
  if (!C.zf) goto L_1262b8e1;
  /* 1262b8d8 mov edx, dword ptr [0x1264f720] */
  EDX = (r32((uint32_t)(0x1264f720)));
  /* 1262b8de mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1262b8e1:;
  /* 1262b8e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262b8e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262b8e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b8e8 push eax */
  push32((uint32_t)(EAX));
  /* 1262b8e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b8ec push ecx */
  push32((uint32_t)(ECX));
  /* 1262b8ed mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1262b8f0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262b8f2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262b8f4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1262b8f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b8fa push edx */
  push32((uint32_t)(EDX));
  /* 1262b8fb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1262b8fe push eax */
  push32((uint32_t)(EAX));
  /* 1262b8ff call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x1262b905u);
  /* 1262b905 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1262b908 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b90c jne 0x1262b915 */
  if (!C.zf) goto L_1262b915;
  /* 1262b90e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262b910 jmp 0x1262b9b8 */
  goto L_1262b9b8;
L_1262b915:;
  /* 1262b915 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262b91c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262b91f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1262b921 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b924 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1262b926 call 0x12626780 */
  push32(0x1262b92bu); f_12626780();
  /* 1262b92b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1262b92e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1262b931 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262b934 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1262b937 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262b93a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1262b93c push edx */
  push32((uint32_t)(EDX));
  /* 1262b93d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262b93f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262b942 push eax */
  push32((uint32_t)(EAX));
  /* 1262b943 call 0x12627350 */
  push32(0x1262b948u); f_12627350();
  /* 1262b948 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b94b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1262b952 jmp 0x1262b96b */
  goto L_1262b96b;
  /* 1262b954 mov eax, 1 */
  EAX = (0x1u);
  /* 1262b959 ret  */
  ESPCHK(0x1262b810u, _esp0);
  ESP += 4; return;
  /* 1262b95a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1262b95d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1262b964 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1262b96b:;
  /* 1262b96b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b96f jne 0x1262b975 */
  if (!C.zf) goto L_1262b975;
  /* 1262b971 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262b973 jmp 0x1262b9b8 */
  goto L_1262b9b8;
L_1262b975:;
  /* 1262b975 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262b978 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b979 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262b97c push edx */
  push32((uint32_t)(EDX));
  /* 1262b97d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262b980 push eax */
  push32((uint32_t)(EAX));
  /* 1262b981 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262b984 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b985 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262b987 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1262b98a push edx */
  push32((uint32_t)(EDX));
  /* 1262b98b call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x1262b991u);
  /* 1262b991 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1262b994 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b998 jne 0x1262b99e */
  if (!C.zf) goto L_1262b99e;
  /* 1262b99a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262b99c jmp 0x1262b9b8 */
  goto L_1262b9b8;
L_1262b99e:;
  /* 1262b99e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262b9a1 push eax */
  push32((uint32_t)(EAX));
  /* 1262b9a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262b9a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1262b9a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262b9a9 push edx */
  push32((uint32_t)(EDX));
  /* 1262b9aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262b9ad push eax */
  push32((uint32_t)(EAX));
  /* 1262b9ae call dword ptr [0x12652368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652368))), 0x1262b9b4u);
  /* 1262b9b4 jmp 0x1262b9b8 */
  goto L_1262b9b8;
L_1262b9b6:;
  /* 1262b9b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262b9b8:;
  /* 1262b9b8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1262b9bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262b9be mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1262b9c5 pop edi */
  EDI = (pop32());
  /* 1262b9c6 pop esi */
  ESI = (pop32());
  /* 1262b9c7 pop ebx */
  EBX = (pop32());
  /* 1262b9c8 mov esp, ebp */
  ESP = (EBP);
  /* 1262b9ca pop ebp */
  EBP = (pop32());
  /* 1262b9cb ret  */
  ESPCHK(0x1262b810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x1262b9d0 (727 bytes, 263 insns) */
void f_1262b9d0(void) {
  FTRACE(0x1262b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1262b9d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1262b9d5 push 0x1264b050 */
  push32((uint32_t)(0x1264b050u));
  /* 1262b9da push 0x1262c6e8 */
  push32((uint32_t)(0x1262c6e8u));
  /* 1262b9df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1262b9e5 push eax */
  push32((uint32_t)(EAX));
  /* 1262b9e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1262b9ed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262b9f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1262b9f1 push esi */
  push32((uint32_t)(ESI));
  /* 1262b9f2 push edi */
  push32((uint32_t)(EDI));
  /* 1262b9f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1262b9f6 cmp dword ptr [0x1264f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262b9fd jne 0x1262ba56 */
  if (!C.zf) goto L_1262ba56;
  /* 1262b9ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ba01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ba03 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ba05 push 0x1264b03c */
  push32((uint32_t)(0x1264b03cu));
  /* 1262ba0a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1262ba0f push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ba11 call dword ptr [0x12652298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652298))), 0x1262ba17u);
  /* 1262ba17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ba19 je 0x1262ba27 */
  if (C.zf) goto L_1262ba27;
  /* 1262ba1b mov dword ptr [0x1264f728], 1 */
  w32((uint32_t)(0x1264f728), (0x1u));
  /* 1262ba25 jmp 0x1262ba56 */
  goto L_1262ba56;
L_1262ba27:;
  /* 1262ba27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ba29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ba2b push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ba2d push 0x1264b038 */
  push32((uint32_t)(0x1264b038u));
  /* 1262ba32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1262ba37 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ba39 call dword ptr [0x12652300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652300))), 0x1262ba3fu);
  /* 1262ba3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ba41 je 0x1262ba4f */
  if (C.zf) goto L_1262ba4f;
  /* 1262ba43 mov dword ptr [0x1264f728], 2 */
  w32((uint32_t)(0x1264f728), (0x2u));
  /* 1262ba4d jmp 0x1262ba56 */
  goto L_1262ba56;
L_1262ba4f:;
  /* 1262ba4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262ba51 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262ba56:;
  /* 1262ba56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ba5a jle 0x1262ba6f */
  if ((C.zf||C.sf!=C.of)) goto L_1262ba6f;
  /* 1262ba5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262ba5f push eax */
  push32((uint32_t)(EAX));
  /* 1262ba60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262ba63 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ba64 call 0x1262bce0 */
  push32(0x1262ba69u); f_1262bce0();
  /* 1262ba69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ba6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1262ba6f:;
  /* 1262ba6f cmp dword ptr [0x1264f728], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1264f728))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ba76 jne 0x1262ba9b */
  if (!C.zf) goto L_1262ba9b;
  /* 1262ba78 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1262ba7b push edx */
  push32((uint32_t)(EDX));
  /* 1262ba7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1262ba7f push eax */
  push32((uint32_t)(EAX));
  /* 1262ba80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262ba83 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ba84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262ba87 push edx */
  push32((uint32_t)(EDX));
  /* 1262ba88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262ba8b push eax */
  push32((uint32_t)(EAX));
  /* 1262ba8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ba8f push ecx */
  push32((uint32_t)(ECX));
  /* 1262ba90 call dword ptr [0x12652300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652300))), 0x1262ba96u);
  /* 1262ba96 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262ba9b:;
  /* 1262ba9b cmp dword ptr [0x1264f728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262baa2 jne 0x1262bcbf */
  if (!C.zf) goto L_1262bcbf;
  /* 1262baa8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262baac jne 0x1262bab7 */
  if (!C.zf) goto L_1262bab7;
  /* 1262baae mov edx, dword ptr [0x1264f720] */
  EDX = (r32((uint32_t)(0x1264f720)));
  /* 1262bab4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1262bab7:;
  /* 1262bab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262babb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262babe push eax */
  push32((uint32_t)(EAX));
  /* 1262babf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262bac2 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bac3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1262bac6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262bac8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262baca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1262bacd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bad0 push edx */
  push32((uint32_t)(EDX));
  /* 1262bad1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1262bad4 push eax */
  push32((uint32_t)(EAX));
  /* 1262bad5 call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x1262badbu);
  /* 1262badb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1262bade cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bae2 jne 0x1262baeb */
  if (!C.zf) goto L_1262baeb;
  /* 1262bae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bae6 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262baeb:;
  /* 1262baeb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262baf2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262baf5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1262baf7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bafa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1262bafc call 0x12626780 */
  push32(0x1262bb01u); f_12626780();
  /* 1262bb01 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1262bb04 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1262bb07 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262bb0a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1262bb0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1262bb14 jmp 0x1262bb2d */
  goto L_1262bb2d;
  /* 1262bb16 mov eax, 1 */
  EAX = (0x1u);
  /* 1262bb1b ret  */
  ESPCHK(0x1262b9d0u, _esp0);
  ESP += 4; return;
  /* 1262bb1c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1262bb1f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1262bb26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1262bb2d:;
  /* 1262bb2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bb31 jne 0x1262bb3a */
  if (!C.zf) goto L_1262bb3a;
  /* 1262bb33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bb35 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bb3a:;
  /* 1262bb3a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262bb3d push edx */
  push32((uint32_t)(EDX));
  /* 1262bb3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262bb41 push eax */
  push32((uint32_t)(EAX));
  /* 1262bb42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262bb45 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bb46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262bb49 push edx */
  push32((uint32_t)(EDX));
  /* 1262bb4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262bb4c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1262bb4f push eax */
  push32((uint32_t)(EAX));
  /* 1262bb50 call dword ptr [0x12652360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652360))), 0x1262bb56u);
  /* 1262bb56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262bb58 jne 0x1262bb61 */
  if (!C.zf) goto L_1262bb61;
  /* 1262bb5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bb5c jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bb61:;
  /* 1262bb61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bb63 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bb65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262bb68 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bb69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262bb6c push edx */
  push32((uint32_t)(EDX));
  /* 1262bb6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bb70 push eax */
  push32((uint32_t)(EAX));
  /* 1262bb71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bb74 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bb75 call dword ptr [0x12652298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652298))), 0x1262bb7bu);
  /* 1262bb7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1262bb7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bb82 jne 0x1262bb8b */
  if (!C.zf) goto L_1262bb8b;
  /* 1262bb84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bb86 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bb8b:;
  /* 1262bb8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bb8e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1262bb94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262bb96 je 0x1262bbdb */
  if (C.zf) goto L_1262bbdb;
  /* 1262bb98 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bb9c je 0x1262bbd6 */
  if (C.zf) goto L_1262bbd6;
  /* 1262bb9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262bba1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bba4 jle 0x1262bbad */
  if ((C.zf||C.sf!=C.of)) goto L_1262bbad;
  /* 1262bba6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bba8 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bbad:;
  /* 1262bbad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1262bbb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bbb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1262bbb4 push edx */
  push32((uint32_t)(EDX));
  /* 1262bbb5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262bbb8 push eax */
  push32((uint32_t)(EAX));
  /* 1262bbb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262bbbc push ecx */
  push32((uint32_t)(ECX));
  /* 1262bbbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bbc0 push edx */
  push32((uint32_t)(EDX));
  /* 1262bbc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bbc4 push eax */
  push32((uint32_t)(EAX));
  /* 1262bbc5 call dword ptr [0x12652298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652298))), 0x1262bbcbu);
  /* 1262bbcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262bbcd jne 0x1262bbd6 */
  if (!C.zf) goto L_1262bbd6;
  /* 1262bbcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bbd1 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bbd6:;
  /* 1262bbd6 jmp 0x1262bcba */
  goto L_1262bcba;
L_1262bbdb:;
  /* 1262bbdb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262bbde mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1262bbe1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1262bbe8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262bbeb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1262bbed add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bbf0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1262bbf2 call 0x12626780 */
  push32(0x1262bbf7u); f_12626780();
  /* 1262bbf7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1262bbfa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1262bbfd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1262bc00 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1262bc03 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1262bc0a jmp 0x1262bc23 */
  goto L_1262bc23;
  /* 1262bc0c mov eax, 1 */
  EAX = (0x1u);
  /* 1262bc11 ret  */
  ESPCHK(0x1262b9d0u, _esp0);
  ESP += 4; return;
  /* 1262bc12 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1262bc15 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1262bc1c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1262bc23:;
  /* 1262bc23 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bc27 jne 0x1262bc30 */
  if (!C.zf) goto L_1262bc30;
  /* 1262bc29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bc2b jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bc30:;
  /* 1262bc30 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262bc33 push eax */
  push32((uint32_t)(EAX));
  /* 1262bc34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262bc37 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bc38 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262bc3b push edx */
  push32((uint32_t)(EDX));
  /* 1262bc3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262bc3f push eax */
  push32((uint32_t)(EAX));
  /* 1262bc40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bc43 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bc47 push edx */
  push32((uint32_t)(EDX));
  /* 1262bc48 call dword ptr [0x12652298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652298))), 0x1262bc4eu);
  /* 1262bc4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262bc50 jne 0x1262bc56 */
  if (!C.zf) goto L_1262bc56;
  /* 1262bc52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bc54 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bc56:;
  /* 1262bc56 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bc5a jne 0x1262bc8a */
  if (!C.zf) goto L_1262bc8a;
  /* 1262bc5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bc5e push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bc60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bc62 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bc64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262bc67 push eax */
  push32((uint32_t)(EAX));
  /* 1262bc68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262bc6b push ecx */
  push32((uint32_t)(ECX));
  /* 1262bc6c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1262bc71 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1262bc74 push edx */
  push32((uint32_t)(EDX));
  /* 1262bc75 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x1262bc7bu);
  /* 1262bc7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1262bc7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bc82 jne 0x1262bc88 */
  if (!C.zf) goto L_1262bc88;
  /* 1262bc84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bc86 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bc88:;
  /* 1262bc88 jmp 0x1262bcba */
  goto L_1262bcba;
L_1262bc8a:;
  /* 1262bc8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bc8c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bc8e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1262bc91 push eax */
  push32((uint32_t)(EAX));
  /* 1262bc92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1262bc95 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bc96 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262bc99 push edx */
  push32((uint32_t)(EDX));
  /* 1262bc9a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262bc9d push eax */
  push32((uint32_t)(EAX));
  /* 1262bc9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1262bca3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1262bca6 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bca7 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x1262bcadu);
  /* 1262bcad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1262bcb0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bcb4 jne 0x1262bcba */
  if (!C.zf) goto L_1262bcba;
  /* 1262bcb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bcb8 jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bcba:;
  /* 1262bcba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262bcbd jmp 0x1262bcc1 */
  goto L_1262bcc1;
L_1262bcbf:;
  /* 1262bcbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262bcc1:;
  /* 1262bcc1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1262bcc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262bcc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1262bcce pop edi */
  EDI = (pop32());
  /* 1262bccf pop esi */
  ESI = (pop32());
  /* 1262bcd0 pop ebx */
  EBX = (pop32());
  /* 1262bcd1 mov esp, ebp */
  ESP = (EBP);
  /* 1262bcd3 pop ebp */
  EBP = (pop32());
  /* 1262bcd4 ret  */
  ESPCHK(0x1262b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x1262bce0 (80 bytes, 32 insns) */
void f_1262bce0(void) {
  FTRACE(0x1262bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262bce1 mov ebp, esp */
  EBP = (ESP);
  /* 1262bce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bce6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bce9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262bcec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bcef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262bcf2:;
  /* 1262bcf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262bcf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262bcf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bcfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262bcfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262bd00 je 0x1262bd17 */
  if (C.zf) goto L_1262bd17;
  /* 1262bd02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bd05 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262bd08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262bd0a je 0x1262bd17 */
  if (C.zf) goto L_1262bd17;
  /* 1262bd0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bd0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bd12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262bd15 jmp 0x1262bcf2 */
  goto L_1262bcf2;
L_1262bd17:;
  /* 1262bd17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bd1a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262bd1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262bd1f jne 0x1262bd29 */
  if (!C.zf) goto L_1262bd29;
  /* 1262bd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bd24 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bd27 jmp 0x1262bd2c */
  goto L_1262bd2c;
L_1262bd29:;
  /* 1262bd29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1262bd2c:;
  /* 1262bd2c mov esp, ebp */
  ESP = (EBP);
  /* 1262bd2e pop ebp */
  EBP = (pop32());
  /* 1262bd2f ret  */
  ESPCHK(0x1262bce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd30 @ 0x1262bd30 (130 bytes, 43 insns) */
void f_1262bd30(void) {
  FTRACE(0x1262bd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262bd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1262bd31 mov ebp, esp */
  EBP = (ESP);
  /* 1262bd33 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bd34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bd37 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bd3d jae 0x1262bd61 */
  if (!C.cf) goto L_1262bd61;
  /* 1262bd3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bd42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262bd45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bd48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262bd4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262bd4e mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262bd55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1262bd5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1262bd5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262bd5f jne 0x1262bd7c */
  if (!C.zf) goto L_1262bd7c;
L_1262bd61:;
  /* 1262bd61 call 0x1262b4b0 */
  push32(0x1262bd66u); f_1262b4b0();
  /* 1262bd66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262bd6c call 0x1262b4c0 */
  push32(0x1262bd71u); f_1262b4c0();
  /* 1262bd71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262bd77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262bd7a jmp 0x1262bdae */
  goto L_1262bdae;
L_1262bd7c:;
  /* 1262bd7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bd7f push edx */
  push32((uint32_t)(EDX));
  /* 1262bd80 call 0x1262ccd0 */
  push32(0x1262bd85u); f_1262ccd0();
  /* 1262bd85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bd88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262bd8b push eax */
  push32((uint32_t)(EAX));
  /* 1262bd8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bd8f push ecx */
  push32((uint32_t)(ECX));
  /* 1262bd90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bd93 push edx */
  push32((uint32_t)(EDX));
  /* 1262bd94 call 0x1262bdc0 */
  push32(0x1262bd99u); f_1262bdc0();
  /* 1262bd99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bd9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262bd9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bda2 push eax */
  push32((uint32_t)(EAX));
  /* 1262bda3 call 0x1262cd60 */
  push32(0x1262bda8u); f_1262cd60();
  /* 1262bda8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bdab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1262bdae:;
  /* 1262bdae mov esp, ebp */
  ESP = (EBP);
  /* 1262bdb0 pop ebp */
  EBP = (pop32());
  /* 1262bdb1 ret  */
  ESPCHK(0x1262bd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdc0 @ 0x1262bdc0 (178 bytes, 56 insns) */
void f_1262bdc0(void) {
  FTRACE(0x1262bdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262bdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262bdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1262bdc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bdc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bdc9 push eax */
  push32((uint32_t)(EAX));
  /* 1262bdca call 0x1262cb50 */
  push32(0x1262bdcfu); f_1262cb50();
  /* 1262bdcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bdd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1262bdd5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bdd9 jne 0x1262bdee */
  if (!C.zf) goto L_1262bdee;
  /* 1262bddb call 0x1262b4b0 */
  push32(0x1262bde0u); f_1262b4b0();
  /* 1262bde0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262bde6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262bde9 jmp 0x1262be6e */
  goto L_1262be6e;
L_1262bdee:;
  /* 1262bdee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262bdf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1262bdf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bdf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bdf7 push edx */
  push32((uint32_t)(EDX));
  /* 1262bdf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262bdfb push eax */
  push32((uint32_t)(EAX));
  /* 1262bdfc call dword ptr [0x12652294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652294))), 0x1262be02u);
  /* 1262be02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262be05 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262be09 jne 0x1262be16 */
  if (!C.zf) goto L_1262be16;
  /* 1262be0b call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x1262be11u);
  /* 1262be11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262be14 jmp 0x1262be1d */
  goto L_1262be1d;
L_1262be16:;
  /* 1262be16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1262be1d:;
  /* 1262be1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262be21 je 0x1262be34 */
  if (C.zf) goto L_1262be34;
  /* 1262be23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262be26 push ecx */
  push32((uint32_t)(ECX));
  /* 1262be27 call 0x1262b410 */
  push32(0x1262be2cu); f_1262b410();
  /* 1262be2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262be2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262be32 jmp 0x1262be6e */
  goto L_1262be6e;
L_1262be34:;
  /* 1262be34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262be37 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1262be3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262be3d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1262be40 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262be43 mov ecx, dword ptr [edx*4 + 0x12650ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262be4a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1262be4e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1262be51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262be54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262be57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262be5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262be5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262be60 mov eax, dword ptr [eax*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262be67 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1262be6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1262be6e:;
  /* 1262be6e mov esp, ebp */
  ESP = (EBP);
  /* 1262be70 pop ebp */
  EBP = (pop32());
  /* 1262be71 ret  */
  ESPCHK(0x1262bdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x1262be80 (130 bytes, 43 insns) */
void f_1262be80(void) {
  FTRACE(0x1262be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262be80 push ebp */
  push32((uint32_t)(EBP));
  /* 1262be81 mov ebp, esp */
  EBP = (ESP);
  /* 1262be83 push ecx */
  push32((uint32_t)(ECX));
  /* 1262be84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262be87 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262be8d jae 0x1262beb1 */
  if (!C.cf) goto L_1262beb1;
  /* 1262be8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262be92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262be95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262be98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262be9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262be9e mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262bea5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1262beaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1262bead test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262beaf jne 0x1262becc */
  if (!C.zf) goto L_1262becc;
L_1262beb1:;
  /* 1262beb1 call 0x1262b4b0 */
  push32(0x1262beb6u); f_1262b4b0();
  /* 1262beb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262bebc call 0x1262b4c0 */
  push32(0x1262bec1u); f_1262b4c0();
  /* 1262bec1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262bec7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262beca jmp 0x1262befe */
  goto L_1262befe;
L_1262becc:;
  /* 1262becc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262becf push edx */
  push32((uint32_t)(EDX));
  /* 1262bed0 call 0x1262ccd0 */
  push32(0x1262bed5u); f_1262ccd0();
  /* 1262bed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bed8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262bedb push eax */
  push32((uint32_t)(EAX));
  /* 1262bedc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bedf push ecx */
  push32((uint32_t)(ECX));
  /* 1262bee0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bee3 push edx */
  push32((uint32_t)(EDX));
  /* 1262bee4 call 0x1262bf10 */
  push32(0x1262bee9u); f_1262bf10();
  /* 1262bee9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262beec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262beef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bef2 push eax */
  push32((uint32_t)(EAX));
  /* 1262bef3 call 0x1262cd60 */
  push32(0x1262bef8u); f_1262cd60();
  /* 1262bef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262befb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1262befe:;
  /* 1262befe mov esp, ebp */
  ESP = (EBP);
  /* 1262bf00 pop ebp */
  EBP = (pop32());
  /* 1262bf01 ret  */
  ESPCHK(0x1262be80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf10 @ 0x1262bf10 (627 bytes, 182 insns) */
void f_1262bf10(void) {
  FTRACE(0x1262bf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262bf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1262bf11 mov ebp, esp */
  EBP = (ESP);
  /* 1262bf13 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bf19 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1262bf20 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262bf23 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1262bf29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bf2d jne 0x1262bf36 */
  if (!C.zf) goto L_1262bf36;
  /* 1262bf2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262bf31 jmp 0x1262c17f */
  goto L_1262c17f;
L_1262bf36:;
  /* 1262bf36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bf39 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262bf3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bf3f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262bf42 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262bf45 mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262bf4c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1262bf51 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1262bf54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262bf56 je 0x1262bf68 */
  if (C.zf) goto L_1262bf68;
  /* 1262bf58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262bf5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262bf5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bf5f push edx */
  push32((uint32_t)(EDX));
  /* 1262bf60 call 0x1262bdc0 */
  push32(0x1262bf65u); f_1262bdc0();
  /* 1262bf65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262bf68:;
  /* 1262bf68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bf6b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262bf6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262bf71 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262bf74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262bf77 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262bf7e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1262bf83 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1262bf88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262bf8a je 0x1262c09c */
  if (C.zf) goto L_1262c09c;
  /* 1262bf90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262bf93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262bf96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1262bf9d:;
  /* 1262bf9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bfa0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bfa3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bfa6 jae 0x1262c09a */
  if (!C.cf) goto L_1262c09a;
  /* 1262bfac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1262bfb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1262bfb5:;
  /* 1262bfb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262bfb8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1262bfbe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bfc0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bfc6 jge 0x1262c027 */
  if ((C.sf==C.of)) goto L_1262c027;
  /* 1262bfc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bfcb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262bfce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bfd1 jae 0x1262c027 */
  if (!C.cf) goto L_1262c027;
  /* 1262bfd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bfd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1262bfd8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1262bfde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262bfe1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bfe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262bfe7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1262bfee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262bff1 jne 0x1262c011 */
  if (!C.zf) goto L_1262c011;
  /* 1262bff3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1262bff9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262bffc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1262c002 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c005 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1262c008 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c00b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c00e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1262c011:;
  /* 1262c011 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c014 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1262c01a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1262c01c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c01f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c022 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262c025 jmp 0x1262bfb5 */
  goto L_1262bfb5;
L_1262c027:;
  /* 1262c027 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262c029 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1262c02f push edx */
  push32((uint32_t)(EDX));
  /* 1262c030 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c033 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1262c039 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c03b push eax */
  push32((uint32_t)(EAX));
  /* 1262c03c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1262c042 push edx */
  push32((uint32_t)(EDX));
  /* 1262c043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c046 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262c049 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c04c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262c04f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262c052 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262c059 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1262c05c push eax */
  push32((uint32_t)(EAX));
  /* 1262c05d call dword ptr [0x126522ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ac))), 0x1262c063u);
  /* 1262c063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262c065 je 0x1262c08a */
  if (C.zf) goto L_1262c08a;
  /* 1262c067 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262c06a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c070 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1262c073 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c076 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1262c07c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c07e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c084 jge 0x1262c088 */
  if ((C.sf==C.of)) goto L_1262c088;
  /* 1262c086 jmp 0x1262c09a */
  goto L_1262c09a;
L_1262c088:;
  /* 1262c088 jmp 0x1262c095 */
  goto L_1262c095;
L_1262c08a:;
  /* 1262c08a call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x1262c090u);
  /* 1262c090 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1262c093 jmp 0x1262c09a */
  goto L_1262c09a;
L_1262c095:;
  /* 1262c095 jmp 0x1262bf9d */
  goto L_1262bf9d;
L_1262c09a:;
  /* 1262c09a jmp 0x1262c0ec */
  goto L_1262c0ec;
L_1262c09c:;
  /* 1262c09c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262c09e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1262c0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c0a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262c0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1262c0a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262c0ac push eax */
  push32((uint32_t)(EAX));
  /* 1262c0ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c0b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c0b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c0b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262c0b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262c0bc mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262c0c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1262c0c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c0c7 call dword ptr [0x126522ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ac))), 0x1262c0cdu);
  /* 1262c0cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262c0cf je 0x1262c0e3 */
  if (C.zf) goto L_1262c0e3;
  /* 1262c0d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262c0d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1262c0de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1262c0e1 jmp 0x1262c0ec */
  goto L_1262c0ec;
L_1262c0e3:;
  /* 1262c0e3 call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x1262c0e9u);
  /* 1262c0e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1262c0ec:;
  /* 1262c0ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c0f0 jne 0x1262c176 */
  if (!C.zf) goto L_1262c176;
  /* 1262c0f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c0fa je 0x1262c12a */
  if (C.zf) goto L_1262c12a;
  /* 1262c0fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c100 jne 0x1262c119 */
  if (!C.zf) goto L_1262c119;
  /* 1262c102 call 0x1262b4b0 */
  push32(0x1262c107u); f_1262b4b0();
  /* 1262c107 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262c10d call 0x1262b4c0 */
  push32(0x1262c112u); f_1262b4c0();
  /* 1262c112 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c115 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1262c117 jmp 0x1262c125 */
  goto L_1262c125;
L_1262c119:;
  /* 1262c119 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c11c push edx */
  push32((uint32_t)(EDX));
  /* 1262c11d call 0x1262b410 */
  push32(0x1262c122u); f_1262b410();
  /* 1262c122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262c125:;
  /* 1262c125 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262c128 jmp 0x1262c17f */
  goto L_1262c17f;
L_1262c12a:;
  /* 1262c12a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c12d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262c130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c133 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262c136 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262c139 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262c140 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1262c145 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1262c148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262c14a je 0x1262c15b */
  if (C.zf) goto L_1262c15b;
  /* 1262c14c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262c14f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262c152 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c155 jne 0x1262c15b */
  if (!C.zf) goto L_1262c15b;
  /* 1262c157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262c159 jmp 0x1262c17f */
  goto L_1262c17f;
L_1262c15b:;
  /* 1262c15b call 0x1262b4b0 */
  push32(0x1262c160u); f_1262b4b0();
  /* 1262c160 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1262c166 call 0x1262b4c0 */
  push32(0x1262c16bu); f_1262b4c0();
  /* 1262c16b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262c171 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262c174 jmp 0x1262c17f */
  goto L_1262c17f;
L_1262c176:;
  /* 1262c176 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262c179 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1262c17f:;
  /* 1262c17f mov esp, ebp */
  ESP = (EBP);
  /* 1262c181 pop ebp */
  EBP = (pop32());
  /* 1262c182 ret  */
  ESPCHK(0x1262bf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x1262c190 (199 bytes, 68 insns) */
void f_1262c190(void) {
  FTRACE(0x1262c190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c190 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c191 mov ebp, esp */
  EBP = (ESP);
  /* 1262c193 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c194 push ebx */
  push32((uint32_t)(EBX));
  /* 1262c195 push esi */
  push32((uint32_t)(ESI));
  /* 1262c196 push edi */
  push32((uint32_t)(EDI));
L_1262c197:;
  /* 1262c197 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c19b jne 0x1262c1bb */
  if (!C.zf) goto L_1262c1bb;
  /* 1262c19d push 0x1264af9c */
  push32((uint32_t)(0x1264af9cu));
  /* 1262c1a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262c1a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1262c1a6 push 0x1264b068 */
  push32((uint32_t)(0x1264b068u));
  /* 1262c1ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1262c1ad call 0x126226a0 */
  push32(0x1262c1b2u); f_126226a0();
  /* 1262c1b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c1b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c1b8 jne 0x1262c1bb */
  if (!C.zf) goto L_1262c1bb;
  /* 1262c1ba int3  */
  x86_unimpl("int3 @ 0x1262c1ba");
L_1262c1bb:;
  /* 1262c1bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262c1bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262c1bf jne 0x1262c197 */
  if (!C.zf) goto L_1262c197;
  /* 1262c1c1 mov ecx, dword ptr [0x1264f72c] */
  ECX = (r32((uint32_t)(0x1264f72c)));
  /* 1262c1c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c1ca mov dword ptr [0x1264f72c], ecx */
  w32((uint32_t)(0x1264f72c), (ECX));
  /* 1262c1d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c1d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262c1d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1262c1d8 push 0x1264b068 */
  push32((uint32_t)(0x1264b068u));
  /* 1262c1dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1262c1df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1262c1e4 call 0x126235e0 */
  push32(0x1262c1e9u); f_126235e0();
  /* 1262c1e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c1ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c1ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1262c1f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c1f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c1f9 je 0x1262c216 */
  if (C.zf) goto L_1262c216;
  /* 1262c1fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c1fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262c201 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1262c204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c207 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1262c20a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c20d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1262c214 jmp 0x1262c23b */
  goto L_1262c23b;
L_1262c216:;
  /* 1262c216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c219 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262c21c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1262c21f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c222 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1262c225 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c228 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c22b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c22e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1262c231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c234 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1262c23b:;
  /* 1262c23b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c23e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c241 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1262c244 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1262c246 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c249 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1262c250 pop edi */
  EDI = (pop32());
  /* 1262c251 pop esi */
  ESI = (pop32());
  /* 1262c252 pop ebx */
  EBX = (pop32());
  /* 1262c253 mov esp, ebp */
  ESP = (EBP);
  /* 1262c255 pop ebp */
  EBP = (pop32());
  /* 1262c256 ret  */
  ESPCHK(0x1262c190u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1262c260 (50 bytes, 17 insns) */
void f_1262c260(void) {
  FTRACE(0x1262c260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c260 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c261 mov ebp, esp */
  EBP = (ESP);
  /* 1262c263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c266 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c26c jb 0x1262c272 */
  if (C.cf) goto L_1262c272;
  /* 1262c26e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262c270 jmp 0x1262c290 */
  goto L_1262c290;
L_1262c272:;
  /* 1262c272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c275 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c27b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262c27e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262c281 mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262c288 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1262c28d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1262c290:;
  /* 1262c290 pop ebp */
  EBP = (pop32());
  /* 1262c291 ret  */
  ESPCHK(0x1262c260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x1262c2a0 (300 bytes, 80 insns) */
void f_1262c2a0(void) {
  FTRACE(0x1262c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c2a4 cmp dword ptr [0x12650be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c2ab jne 0x1262c2b9 */
  if (!C.zf) goto L_1262c2b9;
  /* 1262c2ad mov dword ptr [0x12650be0], 0x200 */
  w32((uint32_t)(0x12650be0), (0x200u));
  /* 1262c2b7 jmp 0x1262c2cc */
  goto L_1262c2cc;
L_1262c2b9:;
  /* 1262c2b9 cmp dword ptr [0x12650be0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12650be0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c2c0 jge 0x1262c2cc */
  if ((C.sf==C.of)) goto L_1262c2cc;
  /* 1262c2c2 mov dword ptr [0x12650be0], 0x14 */
  w32((uint32_t)(0x12650be0), (0x14u));
L_1262c2cc:;
  /* 1262c2cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1262c2d1 push 0x1264b074 */
  push32((uint32_t)(0x1264b074u));
  /* 1262c2d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262c2d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1262c2da mov eax, dword ptr [0x12650be0] */
  EAX = (r32((uint32_t)(0x12650be0)));
  /* 1262c2df push eax */
  push32((uint32_t)(EAX));
  /* 1262c2e0 call 0x126239f0 */
  push32(0x1262c2e5u); f_126239f0();
  /* 1262c2e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c2e8 mov dword ptr [0x1264f8a0], eax */
  w32((uint32_t)(0x1264f8a0), (EAX));
  /* 1262c2ed cmp dword ptr [0x1264f8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c2f4 jne 0x1262c335 */
  if (!C.zf) goto L_1262c335;
  /* 1262c2f6 mov dword ptr [0x12650be0], 0x14 */
  w32((uint32_t)(0x12650be0), (0x14u));
  /* 1262c300 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1262c305 push 0x1264b074 */
  push32((uint32_t)(0x1264b074u));
  /* 1262c30a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262c30c push 4 */
  push32((uint32_t)(0x4u));
  /* 1262c30e mov ecx, dword ptr [0x12650be0] */
  ECX = (r32((uint32_t)(0x12650be0)));
  /* 1262c314 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c315 call 0x126239f0 */
  push32(0x1262c31au); f_126239f0();
  /* 1262c31a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c31d mov dword ptr [0x1264f8a0], eax */
  w32((uint32_t)(0x1264f8a0), (EAX));
  /* 1262c322 cmp dword ptr [0x1264f8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c329 jne 0x1262c335 */
  if (!C.zf) goto L_1262c335;
  /* 1262c32b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1262c32d call 0x12622550 */
  push32(0x1262c332u); f_12622550();
  /* 1262c332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262c335:;
  /* 1262c335 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262c33c jmp 0x1262c347 */
  goto L_1262c347;
L_1262c33e:;
  /* 1262c33e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c341 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c344 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1262c347:;
  /* 1262c347 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c34b jge 0x1262c366 */
  if ((C.sf==C.of)) goto L_1262c366;
  /* 1262c34d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c350 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262c353 add eax, 0x1264e120 */
  { uint32_t _a=(EAX),_b=(0x1264e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c35b mov edx, dword ptr [0x1264f8a0] */
  EDX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262c361 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1262c364 jmp 0x1262c33e */
  goto L_1262c33e;
L_1262c366:;
  /* 1262c366 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262c36d jmp 0x1262c378 */
  goto L_1262c378;
L_1262c36f:;
  /* 1262c36f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c372 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c375 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262c378:;
  /* 1262c378 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c37c jge 0x1262c3c8 */
  if ((C.sf==C.of)) goto L_1262c3c8;
  /* 1262c37e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c381 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c384 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c387 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262c38a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262c38d mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262c394 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c398 je 0x1262c3b6 */
  if (C.zf) goto L_1262c3b6;
  /* 1262c39a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c39d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c3a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c3a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262c3a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262c3a9 mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262c3b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c3b4 jne 0x1262c3c6 */
  if (!C.zf) goto L_1262c3c6;
L_1262c3b6:;
  /* 1262c3b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c3b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c3bc mov dword ptr [ecx + 0x1264e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1264e130), (0xffffffffu));
L_1262c3c6:;
  /* 1262c3c6 jmp 0x1262c36f */
  goto L_1262c36f;
L_1262c3c8:;
  /* 1262c3c8 mov esp, ebp */
  ESP = (EBP);
  /* 1262c3ca pop ebp */
  EBP = (pop32());
  /* 1262c3cb ret  */
  ESPCHK(0x1262c2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x1262c3d0 (26 bytes, 9 insns) */
void f_1262c3d0(void) {
  FTRACE(0x1262c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c3d3 call 0x1262cfd0 */
  push32(0x1262c3d8u); f_1262cfd0();
  /* 1262c3d8 movsx eax, byte ptr [0x1264f544] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1264f544))));
  /* 1262c3df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262c3e1 je 0x1262c3e8 */
  if (C.zf) goto L_1262c3e8;
  /* 1262c3e3 call 0x1262cd90 */
  push32(0x1262c3e8u); f_1262cd90();
L_1262c3e8:;
  /* 1262c3e8 pop ebp */
  EBP = (pop32());
  /* 1262c3e9 ret  */
  ESPCHK(0x1262c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x1262c3f0 (61 bytes, 20 insns) */
void f_1262c3f0(void) {
  FTRACE(0x1262c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c3f3 cmp dword ptr [ebp + 8], 0x1264e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1264e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c3fa jb 0x1262c41e */
  if (C.cf) goto L_1262c41e;
  /* 1262c3fc cmp dword ptr [ebp + 8], 0x1264e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1264e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c403 ja 0x1262c41e */
  if ((!C.cf&&!C.zf)) goto L_1262c41e;
  /* 1262c405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c408 sub eax, 0x1264e120 */
  { uint32_t _a=(EAX),_b=(0x1264e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c40d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262c410 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c413 push eax */
  push32((uint32_t)(EAX));
  /* 1262c414 call 0x12626fe0 */
  push32(0x1262c419u); f_12626fe0();
  /* 1262c419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c41c jmp 0x1262c42b */
  goto L_1262c42b;
L_1262c41e:;
  /* 1262c41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c421 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c424 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c425 call dword ptr [0x1265233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265233c))), 0x1262c42bu);
L_1262c42b:;
  /* 1262c42b pop ebp */
  EBP = (pop32());
  /* 1262c42c ret  */
  ESPCHK(0x1262c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x1262c430 (41 bytes, 16 insns) */
void f_1262c430(void) {
  FTRACE(0x1262c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c430 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c431 mov ebp, esp */
  EBP = (ESP);
  /* 1262c433 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c437 jge 0x1262c44a */
  if ((C.sf==C.of)) goto L_1262c44a;
  /* 1262c439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c43c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c43f push eax */
  push32((uint32_t)(EAX));
  /* 1262c440 call 0x12626fe0 */
  push32(0x1262c445u); f_12626fe0();
  /* 1262c445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c448 jmp 0x1262c457 */
  goto L_1262c457;
L_1262c44a:;
  /* 1262c44a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262c44d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c450 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c451 call dword ptr [0x1265233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265233c))), 0x1262c457u);
L_1262c457:;
  /* 1262c457 pop ebp */
  EBP = (pop32());
  /* 1262c458 ret  */
  ESPCHK(0x1262c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c460 @ 0x1262c460 (61 bytes, 20 insns) */
void f_1262c460(void) {
  FTRACE(0x1262c460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c460 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c461 mov ebp, esp */
  EBP = (ESP);
  /* 1262c463 cmp dword ptr [ebp + 8], 0x1264e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1264e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c46a jb 0x1262c48e */
  if (C.cf) goto L_1262c48e;
  /* 1262c46c cmp dword ptr [ebp + 8], 0x1264e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1264e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c473 ja 0x1262c48e */
  if ((!C.cf&&!C.zf)) goto L_1262c48e;
  /* 1262c475 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c478 sub eax, 0x1264e120 */
  { uint32_t _a=(EAX),_b=(0x1264e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c47d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262c480 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c483 push eax */
  push32((uint32_t)(EAX));
  /* 1262c484 call 0x12627080 */
  push32(0x1262c489u); f_12627080();
  /* 1262c489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c48c jmp 0x1262c49b */
  goto L_1262c49b;
L_1262c48e:;
  /* 1262c48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c491 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c494 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c495 call dword ptr [0x12652340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652340))), 0x1262c49bu);
L_1262c49b:;
  /* 1262c49b pop ebp */
  EBP = (pop32());
  /* 1262c49c ret  */
  ESPCHK(0x1262c460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4a0 @ 0x1262c4a0 (41 bytes, 16 insns) */
void f_1262c4a0(void) {
  FTRACE(0x1262c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c4a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c4a7 jge 0x1262c4ba */
  if ((C.sf==C.of)) goto L_1262c4ba;
  /* 1262c4a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c4ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c4af push eax */
  push32((uint32_t)(EAX));
  /* 1262c4b0 call 0x12627080 */
  push32(0x1262c4b5u); f_12627080();
  /* 1262c4b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c4b8 jmp 0x1262c4c7 */
  goto L_1262c4c7;
L_1262c4ba:;
  /* 1262c4ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262c4bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c4c1 call dword ptr [0x12652340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652340))), 0x1262c4c7u);
L_1262c4c7:;
  /* 1262c4c7 pop ebp */
  EBP = (pop32());
  /* 1262c4c8 ret  */
  ESPCHK(0x1262c4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x1262c4d0 (119 bytes, 34 insns) */
void f_1262c4d0(void) {
  FTRACE(0x1262c4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c4d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c4d6 push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 1262c4db call dword ptr [0x126522c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c0))), 0x1262c4e1u);
  /* 1262c4e1 cmp dword ptr [0x1264f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c4e8 je 0x1262c508 */
  if (C.zf) goto L_1262c508;
  /* 1262c4ea push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 1262c4ef call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x1262c4f5u);
  /* 1262c4f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1262c4f7 call 0x12626fe0 */
  push32(0x1262c4fcu); f_12626fe0();
  /* 1262c4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c4ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1262c506 jmp 0x1262c50f */
  goto L_1262c50f;
L_1262c508:;
  /* 1262c508 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1262c50f:;
  /* 1262c50f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1262c513 push eax */
  push32((uint32_t)(EAX));
  /* 1262c514 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c517 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c518 call 0x1262c550 */
  push32(0x1262c51du); f_1262c550();
  /* 1262c51d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c520 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262c523 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c527 je 0x1262c535 */
  if (C.zf) goto L_1262c535;
  /* 1262c529 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1262c52b call 0x12627080 */
  push32(0x1262c530u); f_12627080();
  /* 1262c530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c533 jmp 0x1262c540 */
  goto L_1262c540;
L_1262c535:;
  /* 1262c535 push 0x1264f89c */
  push32((uint32_t)(0x1264f89cu));
  /* 1262c53a call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x1262c540u);
L_1262c540:;
  /* 1262c540 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c543 mov esp, ebp */
  ESP = (EBP);
  /* 1262c545 pop ebp */
  EBP = (pop32());
  /* 1262c546 ret  */
  ESPCHK(0x1262c4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c550 @ 0x1262c550 (160 bytes, 50 insns) */
void f_1262c550(void) {
  FTRACE(0x1262c550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c550 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c551 mov ebp, esp */
  EBP = (ESP);
  /* 1262c553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c55a jne 0x1262c563 */
  if (!C.zf) goto L_1262c563;
  /* 1262c55c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262c55e jmp 0x1262c5ec */
  goto L_1262c5ec;
L_1262c563:;
  /* 1262c563 cmp dword ptr [0x1264f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c56a jne 0x1262c59a */
  if (!C.zf) goto L_1262c59a;
  /* 1262c56c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262c56f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262c574 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c579 jle 0x1262c58b */
  if ((C.zf||C.sf!=C.of)) goto L_1262c58b;
  /* 1262c57b call 0x1262b4b0 */
  push32(0x1262c580u); f_1262b4b0();
  /* 1262c580 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1262c586 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262c589 jmp 0x1262c5ec */
  goto L_1262c5ec;
L_1262c58b:;
  /* 1262c58b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c58e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1262c591 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1262c593 mov eax, 1 */
  EAX = (0x1u);
  /* 1262c598 jmp 0x1262c5ec */
  goto L_1262c5ec;
L_1262c59a:;
  /* 1262c59a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262c5a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1262c5a4 push eax */
  push32((uint32_t)(EAX));
  /* 1262c5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262c5a7 mov ecx, dword ptr [0x1264dea4] */
  ECX = (r32((uint32_t)(0x1264dea4)));
  /* 1262c5ad push ecx */
  push32((uint32_t)(ECX));
  /* 1262c5ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c5b1 push edx */
  push32((uint32_t)(EDX));
  /* 1262c5b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262c5b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1262c5b7 push eax */
  push32((uint32_t)(EAX));
  /* 1262c5b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1262c5bd mov ecx, dword ptr [0x1264f720] */
  ECX = (r32((uint32_t)(0x1264f720)));
  /* 1262c5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c5c4 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x1262c5cau);
  /* 1262c5ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262c5cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c5d1 je 0x1262c5d9 */
  if (C.zf) goto L_1262c5d9;
  /* 1262c5d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c5d7 je 0x1262c5e9 */
  if (C.zf) goto L_1262c5e9;
L_1262c5d9:;
  /* 1262c5d9 call 0x1262b4b0 */
  push32(0x1262c5deu); f_1262b4b0();
  /* 1262c5de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1262c5e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262c5e7 jmp 0x1262c5ec */
  goto L_1262c5ec;
L_1262c5e9:;
  /* 1262c5e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1262c5ec:;
  /* 1262c5ec mov esp, ebp */
  ESP = (EBP);
  /* 1262c5ee pop ebp */
  EBP = (pop32());
  /* 1262c5ef ret  */
  ESPCHK(0x1262c550u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1262c5f0 (32 bytes, 18 insns) */
void f_1262c5f0(void) {
  FTRACE(0x1262c5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c5f3 push ebx */
  push32((uint32_t)(EBX));
  /* 1262c5f4 push esi */
  push32((uint32_t)(ESI));
  /* 1262c5f5 push edi */
  push32((uint32_t)(EDI));
  /* 1262c5f6 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262c5f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262c5fb push 0x1262c608 */
  push32((uint32_t)(0x1262c608u));
  /* 1262c600 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1262c603 call 0x12633d3c */
  push32(0x1262c608u); f_12633d3c();
  /* 1262c608 pop ebp */
  EBP = (pop32());
  /* 1262c609 pop edi */
  EDI = (pop32());
  /* 1262c60a pop esi */
  ESI = (pop32());
  /* 1262c60b pop ebx */
  EBX = (pop32());
  /* 1262c60c mov esp, ebp */
  ESP = (EBP);
  /* 1262c60e pop ebp */
  EBP = (pop32());
  /* 1262c60f ret  */
  ESPCHK(0x1262c5f0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1262c632 (104 bytes, 33 insns) */
void f_1262c632(void) {
  FTRACE(0x1262c632u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c632 push ebx */
  push32((uint32_t)(EBX));
  /* 1262c633 push esi */
  push32((uint32_t)(ESI));
  /* 1262c634 push edi */
  push32((uint32_t)(EDI));
  /* 1262c635 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1262c639 push eax */
  push32((uint32_t)(EAX));
  /* 1262c63a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1262c63c push 0x1262c610 */
  push32((uint32_t)(0x1262c610u));
  /* 1262c641 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1262c648 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1262c64f:;
  /* 1262c64f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1262c653 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1262c656 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1262c659 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c65c je 0x1262c68c */
  if (C.zf) goto L_1262c68c;
  /* 1262c65e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c662 je 0x1262c68c */
  if (C.zf) goto L_1262c68c;
  /* 1262c664 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1262c667 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1262c66a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1262c66e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1262c671 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c676 jne 0x1262c68a */
  if (!C.zf) goto L_1262c68a;
  /* 1262c678 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1262c67d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1262c681 call 0x1262c6c6 */
  push32(0x1262c686u); f_1262c6c6();
  /* 1262c686 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1262c68au);
L_1262c68a:;
  /* 1262c68a jmp 0x1262c64f */
  goto L_1262c64f;
L_1262c68c:;
  /* 1262c68c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1262c693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c696 pop edi */
  EDI = (pop32());
  /* 1262c697 pop esi */
  ESI = (pop32());
  /* 1262c698 pop ebx */
  EBX = (pop32());
  /* 1262c699 ret  */
  ESPCHK(0x1262c632u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c6 @ 0x1262c6c6 (24 bytes, 10 insns) */
void f_1262c6c6(void) {
  FTRACE(0x1262c6c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c6c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1262c6c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c6c8 mov ebx, 0x1264e3b8 */
  EBX = (0x1264e3b8u);
  /* 1262c6cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c6d0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1262c6d3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1262c6d6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1262c6d9 pop ecx */
  ECX = (pop32());
  /* 1262c6da pop ebx */
  EBX = (pop32());
  /* 1262c6db ret 4 */
  ESPCHK(0x1262c6c6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c7a5 @ 0x1262c7a5 (27 bytes, 11 insns) */
void f_1262c7a5(void) {
  FTRACE(0x1262c7a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c7a5 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c7a6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1262c7aa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1262c7ac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1262c7af push eax */
  push32((uint32_t)(EAX));
  /* 1262c7b0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1262c7b3 push eax */
  push32((uint32_t)(EAX));
  /* 1262c7b4 call 0x1262c632 */
  push32(0x1262c7b9u); f_1262c632();
  /* 1262c7b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c7bc pop ebp */
  EBP = (pop32());
  /* 1262c7bd ret 4 */
  ESPCHK(0x1262c7a5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c7c0 @ 0x1262c7c0 (482 bytes, 138 insns) */
void f_1262c7c0(void) {
  FTRACE(0x1262c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c7c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c7c6 push esi */
  push32((uint32_t)(ESI));
  /* 1262c7c7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1262c7ce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1262c7d0 call 0x12626fe0 */
  push32(0x1262c7d5u); f_12626fe0();
  /* 1262c7d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c7d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262c7df jmp 0x1262c7ea */
  goto L_1262c7ea;
L_1262c7e1:;
  /* 1262c7e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c7e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c7e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1262c7ea:;
  /* 1262c7ea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c7ee jge 0x1262c990 */
  if ((C.sf==C.of)) goto L_1262c990;
  /* 1262c7f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c7f7 cmp dword ptr [ecx*4 + 0x12650ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12650ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c7ff je 0x1262c8f6 */
  if (C.zf) goto L_1262c8f6;
  /* 1262c805 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c808 mov eax, dword ptr [edx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262c80f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262c812 jmp 0x1262c81d */
  goto L_1262c81d;
L_1262c814:;
  /* 1262c814 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c817 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c81a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262c81d:;
  /* 1262c81d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c820 mov eax, dword ptr [edx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262c827 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c82c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c82f jae 0x1262c8e6 */
  if (!C.cf) goto L_1262c8e6;
  /* 1262c835 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c838 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1262c83c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1262c83f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262c841 jne 0x1262c8e1 */
  if (!C.zf) goto L_1262c8e1;
  /* 1262c847 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c84a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c84e jne 0x1262c889 */
  if (!C.zf) goto L_1262c889;
  /* 1262c850 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1262c852 call 0x12626fe0 */
  push32(0x1262c857u); f_12626fe0();
  /* 1262c857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c85a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c85d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c861 jne 0x1262c87f */
  if (!C.zf) goto L_1262c87f;
  /* 1262c863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c866 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c869 push edx */
  push32((uint32_t)(EDX));
  /* 1262c86a call dword ptr [0x12652304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652304))), 0x1262c870u);
  /* 1262c870 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c873 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1262c876 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c879 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c87c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1262c87f:;
  /* 1262c87f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1262c881 call 0x12627080 */
  push32(0x1262c886u); f_12627080();
  /* 1262c886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262c889:;
  /* 1262c889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c88c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c88f push eax */
  push32((uint32_t)(EAX));
  /* 1262c890 call dword ptr [0x1265233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265233c))), 0x1262c896u);
  /* 1262c896 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c899 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1262c89d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1262c8a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262c8a2 je 0x1262c8b6 */
  if (C.zf) goto L_1262c8b6;
  /* 1262c8a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c8a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c8aa push eax */
  push32((uint32_t)(EAX));
  /* 1262c8ab call dword ptr [0x12652340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652340))), 0x1262c8b1u);
  /* 1262c8b1 jmp 0x1262c814 */
  goto L_1262c814;
L_1262c8b6:;
  /* 1262c8b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c8b9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1262c8bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c8c2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c8c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c8cb sub eax, dword ptr [edx*4 + 0x12650ee0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12650ee0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262c8d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262c8d3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1262c8d8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1262c8da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c8dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262c8df jmp 0x1262c8e6 */
  goto L_1262c8e6;
L_1262c8e1:;
  /* 1262c8e1 jmp 0x1262c814 */
  goto L_1262c814;
L_1262c8e6:;
  /* 1262c8e6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c8ea je 0x1262c8f1 */
  if (C.zf) goto L_1262c8f1;
  /* 1262c8ec jmp 0x1262c990 */
  goto L_1262c990;
L_1262c8f1:;
  /* 1262c8f1 jmp 0x1262c98b */
  goto L_1262c98b;
L_1262c8f6:;
  /* 1262c8f6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1262c8f8 push 0x1264b07c */
  push32((uint32_t)(0x1264b07cu));
  /* 1262c8fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1262c8ff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1262c904 call 0x126235e0 */
  push32(0x1262c909u); f_126235e0();
  /* 1262c909 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c90c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262c90f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c913 je 0x1262c989 */
  if (C.zf) goto L_1262c989;
  /* 1262c915 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c918 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c91b mov dword ptr [eax*4 + 0x12650ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x12650ee0), (ECX));
  /* 1262c922 mov edx, dword ptr [0x1265101c] */
  EDX = (r32((uint32_t)(0x1265101c)));
  /* 1262c928 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c92b mov dword ptr [0x1265101c], edx */
  w32((uint32_t)(0x1265101c), (EDX));
  /* 1262c931 jmp 0x1262c93c */
  goto L_1262c93c;
L_1262c933:;
  /* 1262c933 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c936 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262c93c:;
  /* 1262c93c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c93f mov edx, dword ptr [ecx*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262c946 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c94c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c94f jae 0x1262c974 */
  if (!C.cf) goto L_1262c974;
  /* 1262c951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c954 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1262c958 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c95b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1262c961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c964 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1262c968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262c96b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1262c972 jmp 0x1262c933 */
  goto L_1262c933;
L_1262c974:;
  /* 1262c974 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262c977 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c97a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262c97d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c980 push edx */
  push32((uint32_t)(EDX));
  /* 1262c981 call 0x1262ccd0 */
  push32(0x1262c986u); f_1262ccd0();
  /* 1262c986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262c989:;
  /* 1262c989 jmp 0x1262c990 */
  goto L_1262c990;
L_1262c98b:;
  /* 1262c98b jmp 0x1262c7e1 */
  goto L_1262c7e1;
L_1262c990:;
  /* 1262c990 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1262c992 call 0x12627080 */
  push32(0x1262c997u); f_12627080();
  /* 1262c997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262c99a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262c99d pop esi */
  ESI = (pop32());
  /* 1262c99e mov esp, ebp */
  ESP = (EBP);
  /* 1262c9a0 pop ebp */
  EBP = (pop32());
  /* 1262c9a1 ret  */
  ESPCHK(0x1262c7c0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1262c9b0 (183 bytes, 57 insns) */
void f_1262c9b0(void) {
  FTRACE(0x1262c9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262c9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262c9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1262c9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262c9b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c9b7 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c9bd jae 0x1262ca4a */
  if (!C.cf) goto L_1262ca4a;
  /* 1262c9c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c9c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262c9c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c9cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262c9cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262c9d2 mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262c9d9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c9dd jne 0x1262ca4a */
  if (!C.zf) goto L_1262ca4a;
  /* 1262c9df cmp dword ptr [0x1264f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c9e6 jne 0x1262ca2a */
  if (!C.zf) goto L_1262ca2a;
  /* 1262c9e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262c9eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262c9ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c9f2 je 0x1262ca02 */
  if (C.zf) goto L_1262ca02;
  /* 1262c9f4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c9f8 je 0x1262ca10 */
  if (C.zf) goto L_1262ca10;
  /* 1262c9fa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262c9fe je 0x1262ca1e */
  if (C.zf) goto L_1262ca1e;
  /* 1262ca00 jmp 0x1262ca2a */
  goto L_1262ca2a;
L_1262ca02:;
  /* 1262ca02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262ca05 push edx */
  push32((uint32_t)(EDX));
  /* 1262ca06 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1262ca08 call dword ptr [0x1265228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265228c))), 0x1262ca0eu);
  /* 1262ca0e jmp 0x1262ca2a */
  goto L_1262ca2a;
L_1262ca10:;
  /* 1262ca10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262ca13 push eax */
  push32((uint32_t)(EAX));
  /* 1262ca14 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1262ca16 call dword ptr [0x1265228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265228c))), 0x1262ca1cu);
  /* 1262ca1c jmp 0x1262ca2a */
  goto L_1262ca2a;
L_1262ca1e:;
  /* 1262ca1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262ca21 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ca22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1262ca24 call dword ptr [0x1265228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265228c))), 0x1262ca2au);
L_1262ca2a:;
  /* 1262ca2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ca2d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1262ca30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ca33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1262ca36 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ca39 mov ecx, dword ptr [edx*4 + 0x12650ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262ca40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262ca43 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1262ca46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262ca48 jmp 0x1262ca63 */
  goto L_1262ca63;
L_1262ca4a:;
  /* 1262ca4a call 0x1262b4b0 */
  push32(0x1262ca4fu); f_1262b4b0();
  /* 1262ca4f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262ca55 call 0x1262b4c0 */
  push32(0x1262ca5au); f_1262b4c0();
  /* 1262ca5a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262ca60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1262ca63:;
  /* 1262ca63 mov esp, ebp */
  ESP = (EBP);
  /* 1262ca65 pop ebp */
  EBP = (pop32());
  /* 1262ca66 ret  */
  ESPCHK(0x1262c9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca70 @ 0x1262ca70 (216 bytes, 63 insns) */
void f_1262ca70(void) {
  FTRACE(0x1262ca70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262ca70 push ebp */
  push32((uint32_t)(EBP));
  /* 1262ca71 mov ebp, esp */
  EBP = (ESP);
  /* 1262ca73 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ca74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ca77 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ca7d jae 0x1262cb2b */
  if (!C.cf) goto L_1262cb2b;
  /* 1262ca83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ca86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262ca89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ca8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262ca8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ca92 mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262ca99 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1262ca9e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1262caa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262caa3 je 0x1262cb2b */
  if (C.zf) goto L_1262cb2b;
  /* 1262caa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262caac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1262caaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cab2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1262cab5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cab8 mov ecx, dword ptr [edx*4 + 0x12650ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262cabf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cac3 je 0x1262cb2b */
  if (C.zf) goto L_1262cb2b;
  /* 1262cac5 cmp dword ptr [0x1264f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cacc jne 0x1262cb0a */
  if (!C.zf) goto L_1262cb0a;
  /* 1262cace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cad1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262cad4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cad8 je 0x1262cae8 */
  if (C.zf) goto L_1262cae8;
  /* 1262cada cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cade je 0x1262caf4 */
  if (C.zf) goto L_1262caf4;
  /* 1262cae0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cae4 je 0x1262cb00 */
  if (C.zf) goto L_1262cb00;
  /* 1262cae6 jmp 0x1262cb0a */
  goto L_1262cb0a;
L_1262cae8:;
  /* 1262cae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262caea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1262caec call dword ptr [0x1265228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265228c))), 0x1262caf2u);
  /* 1262caf2 jmp 0x1262cb0a */
  goto L_1262cb0a;
L_1262caf4:;
  /* 1262caf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262caf6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1262caf8 call dword ptr [0x1265228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265228c))), 0x1262cafeu);
  /* 1262cafe jmp 0x1262cb0a */
  goto L_1262cb0a;
L_1262cb00:;
  /* 1262cb00 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262cb02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1262cb04 call dword ptr [0x1265228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265228c))), 0x1262cb0au);
L_1262cb0a:;
  /* 1262cb0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cb0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262cb10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cb13 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262cb16 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cb19 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262cb20 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1262cb27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262cb29 jmp 0x1262cb44 */
  goto L_1262cb44;
L_1262cb2b:;
  /* 1262cb2b call 0x1262b4b0 */
  push32(0x1262cb30u); f_1262b4b0();
  /* 1262cb30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262cb36 call 0x1262b4c0 */
  push32(0x1262cb3bu); f_1262b4c0();
  /* 1262cb3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262cb41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1262cb44:;
  /* 1262cb44 mov esp, ebp */
  ESP = (EBP);
  /* 1262cb46 pop ebp */
  EBP = (pop32());
  /* 1262cb47 ret  */
  ESPCHK(0x1262ca70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb50 @ 0x1262cb50 (102 bytes, 30 insns) */
void f_1262cb50(void) {
  FTRACE(0x1262cb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cb51 mov ebp, esp */
  EBP = (ESP);
  /* 1262cb53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cb56 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cb5c jae 0x1262cb9b */
  if (!C.cf) goto L_1262cb9b;
  /* 1262cb5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cb61 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262cb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cb67 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262cb6a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cb6d mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262cb74 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1262cb79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1262cb7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262cb7e je 0x1262cb9b */
  if (C.zf) goto L_1262cb9b;
  /* 1262cb80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cb83 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1262cb86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cb89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1262cb8c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cb8f mov ecx, dword ptr [edx*4 + 0x12650ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262cb96 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1262cb99 jmp 0x1262cbb4 */
  goto L_1262cbb4;
L_1262cb9b:;
  /* 1262cb9b call 0x1262b4b0 */
  push32(0x1262cba0u); f_1262b4b0();
  /* 1262cba0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262cba6 call 0x1262b4c0 */
  push32(0x1262cbabu); f_1262b4c0();
  /* 1262cbab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262cbb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1262cbb4:;
  /* 1262cbb4 pop ebp */
  EBP = (pop32());
  /* 1262cbb5 ret  */
  ESPCHK(0x1262cb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbc0 @ 0x1262cbc0 (260 bytes, 83 insns) */
void f_1262cbc0(void) {
  FTRACE(0x1262cbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1262cbc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262cbc6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262cbca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262cbcd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1262cbd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262cbd2 je 0x1262cbdd */
  if (C.zf) goto L_1262cbdd;
  /* 1262cbd4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1262cbd7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1262cbda mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1262cbdd:;
  /* 1262cbdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262cbe0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1262cbe6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262cbe8 je 0x1262cbf2 */
  if (C.zf) goto L_1262cbf2;
  /* 1262cbea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1262cbed or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1262cbef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1262cbf2:;
  /* 1262cbf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262cbf5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1262cbfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262cbfd je 0x1262cc08 */
  if (C.zf) goto L_1262cc08;
  /* 1262cbff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1262cc02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1262cc05 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1262cc08:;
  /* 1262cc08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cc0b push eax */
  push32((uint32_t)(EAX));
  /* 1262cc0c call dword ptr [0x126522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522f8))), 0x1262cc12u);
  /* 1262cc12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262cc15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cc19 jne 0x1262cc32 */
  if (!C.zf) goto L_1262cc32;
  /* 1262cc1b call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x1262cc21u);
  /* 1262cc21 push eax */
  push32((uint32_t)(EAX));
  /* 1262cc22 call 0x1262b410 */
  push32(0x1262cc27u); f_1262b410();
  /* 1262cc27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cc2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262cc2d jmp 0x1262ccc0 */
  goto L_1262ccc0;
L_1262cc32:;
  /* 1262cc32 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cc36 jne 0x1262cc43 */
  if (!C.zf) goto L_1262cc43;
  /* 1262cc38 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1262cc3b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1262cc3e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1262cc41 jmp 0x1262cc52 */
  goto L_1262cc52;
L_1262cc43:;
  /* 1262cc43 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cc47 jne 0x1262cc52 */
  if (!C.zf) goto L_1262cc52;
  /* 1262cc49 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1262cc4c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1262cc4f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1262cc52:;
  /* 1262cc52 call 0x1262c7c0 */
  push32(0x1262cc57u); f_1262c7c0();
  /* 1262cc57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262cc5a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cc5e jne 0x1262cc7b */
  if (!C.zf) goto L_1262cc7b;
  /* 1262cc60 call 0x1262b4b0 */
  push32(0x1262cc65u); f_1262b4b0();
  /* 1262cc65 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1262cc6b call 0x1262b4c0 */
  push32(0x1262cc70u); f_1262b4c0();
  /* 1262cc70 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262cc76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262cc79 jmp 0x1262ccc0 */
  goto L_1262ccc0;
L_1262cc7b:;
  /* 1262cc7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cc7e push eax */
  push32((uint32_t)(EAX));
  /* 1262cc7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cc82 push ecx */
  push32((uint32_t)(ECX));
  /* 1262cc83 call 0x1262c9b0 */
  push32(0x1262cc88u); f_1262c9b0();
  /* 1262cc88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cc8b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1262cc8e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1262cc91 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1262cc94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cc97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262cc9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cc9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262cca0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cca3 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262ccaa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1262ccad mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1262ccb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ccb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ccb5 call 0x1262cd60 */
  push32(0x1262ccbau); f_1262cd60();
  /* 1262ccba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ccbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1262ccc0:;
  /* 1262ccc0 mov esp, ebp */
  ESP = (EBP);
  /* 1262ccc2 pop ebp */
  EBP = (pop32());
  /* 1262ccc3 ret  */
  ESPCHK(0x1262cbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccd0 @ 0x1262ccd0 (134 bytes, 44 insns) */
void f_1262ccd0(void) {
  FTRACE(0x1262ccd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262ccd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262ccd1 mov ebp, esp */
  EBP = (ESP);
  /* 1262ccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ccd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ccd7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262ccda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ccdd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262cce0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cce3 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262ccea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ccec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262ccef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ccf2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ccf6 jne 0x1262cd31 */
  if (!C.zf) goto L_1262cd31;
  /* 1262ccf8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1262ccfa call 0x12626fe0 */
  push32(0x1262ccffu); f_12626fe0();
  /* 1262ccff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cd02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262cd05 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cd09 jne 0x1262cd27 */
  if (!C.zf) goto L_1262cd27;
  /* 1262cd0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262cd0e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cd11 push edx */
  push32((uint32_t)(EDX));
  /* 1262cd12 call dword ptr [0x12652304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652304))), 0x1262cd18u);
  /* 1262cd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262cd1b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1262cd1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cd21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262cd24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1262cd27:;
  /* 1262cd27 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1262cd29 call 0x12627080 */
  push32(0x1262cd2eu); f_12627080();
  /* 1262cd2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262cd31:;
  /* 1262cd31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cd34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262cd37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cd3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262cd3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cd40 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262cd47 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1262cd4b push eax */
  push32((uint32_t)(EAX));
  /* 1262cd4c call dword ptr [0x1265233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265233c))), 0x1262cd52u);
  /* 1262cd52 mov esp, ebp */
  ESP = (EBP);
  /* 1262cd54 pop ebp */
  EBP = (pop32());
  /* 1262cd55 ret  */
  ESPCHK(0x1262ccd0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1262cd60 (38 bytes, 13 insns) */
void f_1262cd60(void) {
  FTRACE(0x1262cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cd61 mov ebp, esp */
  EBP = (ESP);
  /* 1262cd63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cd66 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262cd69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cd6c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262cd6f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262cd72 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262cd79 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1262cd7d push eax */
  push32((uint32_t)(EAX));
  /* 1262cd7e call dword ptr [0x12652340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652340))), 0x1262cd84u);
  /* 1262cd84 pop ebp */
  EBP = (pop32());
  /* 1262cd85 ret  */
  ESPCHK(0x1262cd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd90 @ 0x1262cd90 (218 bytes, 63 insns) */
void f_1262cd90(void) {
  FTRACE(0x1262cd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cd91 mov ebp, esp */
  EBP = (ESP);
  /* 1262cd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262cd96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262cd9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262cd9f call 0x12626fe0 */
  push32(0x1262cda4u); f_12626fe0();
  /* 1262cda4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cda7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1262cdae jmp 0x1262cdb9 */
  goto L_1262cdb9;
L_1262cdb0:;
  /* 1262cdb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cdb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cdb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1262cdb9:;
  /* 1262cdb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cdbc cmp ecx, dword ptr [0x12650be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cdc2 jge 0x1262ce59 */
  if ((C.sf==C.of)) goto L_1262ce59;
  /* 1262cdc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cdcb mov eax, dword ptr [0x1264f8a0] */
  EAX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262cdd0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cdd4 je 0x1262ce54 */
  if (C.zf) goto L_1262ce54;
  /* 1262cdd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cdd9 mov edx, dword ptr [0x1264f8a0] */
  EDX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262cddf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1262cde2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262cde5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1262cdeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262cded je 0x1262ce11 */
  if (C.zf) goto L_1262ce11;
  /* 1262cdef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cdf2 mov eax, dword ptr [0x1264f8a0] */
  EAX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262cdf7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1262cdfa push ecx */
  push32((uint32_t)(ECX));
  /* 1262cdfb call 0x1262db80 */
  push32(0x1262ce00u); f_1262db80();
  /* 1262ce00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce03 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ce06 je 0x1262ce11 */
  if (C.zf) goto L_1262ce11;
  /* 1262ce08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ce0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1262ce11:;
  /* 1262ce11 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ce15 jl 0x1262ce54 */
  if ((C.sf!=C.of)) goto L_1262ce54;
  /* 1262ce17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ce1a mov ecx, dword ptr [0x1264f8a0] */
  ECX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262ce20 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1262ce23 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce26 push edx */
  push32((uint32_t)(EDX));
  /* 1262ce27 call dword ptr [0x12652250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652250))), 0x1262ce2du);
  /* 1262ce2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ce2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ce32 mov ecx, dword ptr [0x1264f8a0] */
  ECX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262ce38 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1262ce3b push edx */
  push32((uint32_t)(EDX));
  /* 1262ce3c call 0x12624070 */
  push32(0x1262ce41u); f_12624070();
  /* 1262ce41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ce47 mov ecx, dword ptr [0x1264f8a0] */
  ECX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262ce4d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1262ce54:;
  /* 1262ce54 jmp 0x1262cdb0 */
  goto L_1262cdb0;
L_1262ce59:;
  /* 1262ce59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ce5b call 0x12627080 */
  push32(0x1262ce60u); f_12627080();
  /* 1262ce60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ce66 mov esp, ebp */
  ESP = (EBP);
  /* 1262ce68 pop ebp */
  EBP = (pop32());
  /* 1262ce69 ret  */
  ESPCHK(0x1262cd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x1262ce70 (68 bytes, 26 insns) */
void f_1262ce70(void) {
  FTRACE(0x1262ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 1262ce71 mov ebp, esp */
  EBP = (ESP);
  /* 1262ce73 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ce74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ce78 jne 0x1262ce86 */
  if (!C.zf) goto L_1262ce86;
  /* 1262ce7a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ce7c call 0x1262cfe0 */
  push32(0x1262ce81u); f_1262cfe0();
  /* 1262ce81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce84 jmp 0x1262ceb0 */
  goto L_1262ceb0;
L_1262ce86:;
  /* 1262ce86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ce89 push eax */
  push32((uint32_t)(EAX));
  /* 1262ce8a call 0x1262c3f0 */
  push32(0x1262ce8fu); f_1262c3f0();
  /* 1262ce8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ce95 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ce96 call 0x1262cec0 */
  push32(0x1262ce9bu); f_1262cec0();
  /* 1262ce9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ce9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262cea1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cea4 push edx */
  push32((uint32_t)(EDX));
  /* 1262cea5 call 0x1262c460 */
  push32(0x1262ceaau); f_1262c460();
  /* 1262ceaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1262ceb0:;
  /* 1262ceb0 mov esp, ebp */
  ESP = (EBP);
  /* 1262ceb2 pop ebp */
  EBP = (pop32());
  /* 1262ceb3 ret  */
  ESPCHK(0x1262ce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x1262cec0 (65 bytes, 26 insns) */
void f_1262cec0(void) {
  FTRACE(0x1262cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cec1 mov ebp, esp */
  EBP = (ESP);
  /* 1262cec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cec6 push eax */
  push32((uint32_t)(EAX));
  /* 1262cec7 call 0x1262cf10 */
  push32(0x1262ceccu); f_1262cf10();
  /* 1262cecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cecf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ced1 je 0x1262ced8 */
  if (C.zf) goto L_1262ced8;
  /* 1262ced3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262ced6 jmp 0x1262ceff */
  goto L_1262ceff;
L_1262ced8:;
  /* 1262ced8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cedb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262cede and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1262cee4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262cee6 je 0x1262cefd */
  if (C.zf) goto L_1262cefd;
  /* 1262cee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ceeb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1262ceee push ecx */
  push32((uint32_t)(ECX));
  /* 1262ceef call 0x1262dcd0 */
  push32(0x1262cef4u); f_1262dcd0();
  /* 1262cef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cef7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262cef9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262cefb jmp 0x1262ceff */
  goto L_1262ceff;
L_1262cefd:;
  /* 1262cefd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262ceff:;
  /* 1262ceff pop ebp */
  EBP = (pop32());
  /* 1262cf00 ret  */
  ESPCHK(0x1262cec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf10 @ 0x1262cf10 (183 bytes, 62 insns) */
void f_1262cf10(void) {
  FTRACE(0x1262cf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cf11 mov ebp, esp */
  EBP = (ESP);
  /* 1262cf13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262cf16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262cf1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262cf20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262cf23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf26 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262cf29 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1262cf2c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cf2f jne 0x1262cfab */
  if (!C.zf) goto L_1262cfab;
  /* 1262cf31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262cf37 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1262cf3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262cf3f je 0x1262cfab */
  if (C.zf) goto L_1262cfab;
  /* 1262cf41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf47 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1262cf49 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262cf4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262cf4f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cf53 jle 0x1262cfab */
  if ((C.zf||C.sf!=C.of)) goto L_1262cfab;
  /* 1262cf55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262cf58 push edx */
  push32((uint32_t)(EDX));
  /* 1262cf59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf5c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1262cf5f push ecx */
  push32((uint32_t)(ECX));
  /* 1262cf60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf63 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1262cf66 push eax */
  push32((uint32_t)(EAX));
  /* 1262cf67 call 0x1262be80 */
  push32(0x1262cf6cu); f_1262be80();
  /* 1262cf6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cf6f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262cf72 jne 0x1262cf95 */
  if (!C.zf) goto L_1262cf95;
  /* 1262cf74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf77 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262cf7a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1262cf80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262cf82 je 0x1262cf93 */
  if (C.zf) goto L_1262cf93;
  /* 1262cf84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf87 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262cf8a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1262cf8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf90 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1262cf93:;
  /* 1262cf93 jmp 0x1262cfab */
  goto L_1262cfab;
L_1262cf95:;
  /* 1262cf95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cf98 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262cf9b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1262cf9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cfa1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1262cfa4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1262cfab:;
  /* 1262cfab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cfae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cfb1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1262cfb4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1262cfb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262cfb9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1262cfc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262cfc3 mov esp, ebp */
  ESP = (EBP);
  /* 1262cfc5 pop ebp */
  EBP = (pop32());
  /* 1262cfc6 ret  */
  ESPCHK(0x1262cf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfd0 @ 0x1262cfd0 (15 bytes, 7 insns) */
void f_1262cfd0(void) {
  FTRACE(0x1262cfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1262cfd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262cfd5 call 0x1262cfe0 */
  push32(0x1262cfdau); f_1262cfe0();
  /* 1262cfda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cfdd pop ebp */
  EBP = (pop32());
  /* 1262cfde ret  */
  ESPCHK(0x1262cfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfe0 @ 0x1262cfe0 (319 bytes, 94 insns) */
void f_1262cfe0(void) {
  FTRACE(0x1262cfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262cfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262cfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1262cfe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262cfe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262cfed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262cff4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262cff6 call 0x12626fe0 */
  push32(0x1262cffbu); f_12626fe0();
  /* 1262cffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262cffe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262d005 jmp 0x1262d010 */
  goto L_1262d010;
L_1262d007:;
  /* 1262d007 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d00a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d00d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1262d010:;
  /* 1262d010 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d013 cmp ecx, dword ptr [0x12650be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12650be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d019 jge 0x1262d103 */
  if ((C.sf==C.of)) goto L_1262d103;
  /* 1262d01f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d022 mov eax, dword ptr [0x1264f8a0] */
  EAX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d027 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d02b je 0x1262d0fe */
  if (C.zf) goto L_1262d0fe;
  /* 1262d031 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d034 mov edx, dword ptr [0x1264f8a0] */
  EDX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d03a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1262d03d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1262d040 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1262d046 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262d048 je 0x1262d0fe */
  if (C.zf) goto L_1262d0fe;
  /* 1262d04e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d051 mov eax, dword ptr [0x1264f8a0] */
  EAX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d056 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1262d059 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d05a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d05d push edx */
  push32((uint32_t)(EDX));
  /* 1262d05e call 0x1262c430 */
  push32(0x1262d063u); f_1262c430();
  /* 1262d063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d066 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d069 mov ecx, dword ptr [0x1264f8a0] */
  ECX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d06f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1262d072 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1262d075 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1262d07a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d07c je 0x1262d0e5 */
  if (C.zf) goto L_1262d0e5;
  /* 1262d07e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d082 jne 0x1262d0a9 */
  if (!C.zf) goto L_1262d0a9;
  /* 1262d084 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d087 mov edx, dword ptr [0x1264f8a0] */
  EDX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d08d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1262d090 push eax */
  push32((uint32_t)(EAX));
  /* 1262d091 call 0x1262cec0 */
  push32(0x1262d096u); f_1262cec0();
  /* 1262d096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d099 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d09c je 0x1262d0a7 */
  if (C.zf) goto L_1262d0a7;
  /* 1262d09e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d0a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d0a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262d0a7:;
  /* 1262d0a7 jmp 0x1262d0e5 */
  goto L_1262d0e5;
L_1262d0a9:;
  /* 1262d0a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d0ad jne 0x1262d0e5 */
  if (!C.zf) goto L_1262d0e5;
  /* 1262d0af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d0b2 mov eax, dword ptr [0x1264f8a0] */
  EAX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d0b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1262d0ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262d0bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1262d0c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262d0c2 je 0x1262d0e5 */
  if (C.zf) goto L_1262d0e5;
  /* 1262d0c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d0c7 mov ecx, dword ptr [0x1264f8a0] */
  ECX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d0cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1262d0d0 push edx */
  push32((uint32_t)(EDX));
  /* 1262d0d1 call 0x1262cec0 */
  push32(0x1262d0d6u); f_1262cec0();
  /* 1262d0d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d0d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d0dc jne 0x1262d0e5 */
  if (!C.zf) goto L_1262d0e5;
  /* 1262d0de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1262d0e5:;
  /* 1262d0e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d0e8 mov ecx, dword ptr [0x1264f8a0] */
  ECX = (r32((uint32_t)(0x1264f8a0)));
  /* 1262d0ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1262d0f1 push edx */
  push32((uint32_t)(EDX));
  /* 1262d0f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d0f5 push eax */
  push32((uint32_t)(EAX));
  /* 1262d0f6 call 0x1262c4a0 */
  push32(0x1262d0fbu); f_1262c4a0();
  /* 1262d0fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262d0fe:;
  /* 1262d0fe jmp 0x1262d007 */
  goto L_1262d007;
L_1262d103:;
  /* 1262d103 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d105 call 0x12627080 */
  push32(0x1262d10au); f_12627080();
  /* 1262d10a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d10d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d111 jne 0x1262d118 */
  if (!C.zf) goto L_1262d118;
  /* 1262d113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d116 jmp 0x1262d11b */
  goto L_1262d11b;
L_1262d118:;
  /* 1262d118 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1262d11b:;
  /* 1262d11b mov esp, ebp */
  ESP = (EBP);
  /* 1262d11d pop ebp */
  EBP = (pop32());
  /* 1262d11e ret  */
  ESPCHK(0x1262cfe0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1262d120 (15 bytes, 7 insns) */
void f_1262d120(void) {
  FTRACE(0x1262d120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d120 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d121 mov ebp, esp */
  EBP = (ESP);
  /* 1262d123 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d125 call 0x12622550 */
  push32(0x1262d12au); f_12622550();
  /* 1262d12a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d12d pop ebp */
  EBP = (pop32());
  /* 1262d12e ret  */
  ESPCHK(0x1262d120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x1262d130 (1007 bytes, 269 insns) */
void f_1262d130(void) {
  FTRACE(0x1262d130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d130 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d131 mov ebp, esp */
  EBP = (ESP);
  /* 1262d133 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d139 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d13d jl 0x1262d145 */
  if ((C.sf!=C.of)) goto L_1262d145;
  /* 1262d13f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d143 jle 0x1262d14c */
  if ((C.zf||C.sf!=C.of)) goto L_1262d14c;
L_1262d145:;
  /* 1262d145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d147 jmp 0x1262d51b */
  goto L_1262d51b;
L_1262d14c:;
  /* 1262d14c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1262d14e call 0x12626fe0 */
  push32(0x1262d153u); f_12626fe0();
  /* 1262d153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d156 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1262d15d mov eax, dword ptr [0x1264f88c] */
  EAX = (r32((uint32_t)(0x1264f88c)));
  /* 1262d162 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d165 mov dword ptr [0x1264f88c], eax */
  w32((uint32_t)(0x1264f88c), (EAX));
L_1262d16a:;
  /* 1262d16a cmp dword ptr [0x1264f89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d171 je 0x1262d17d */
  if (C.zf) goto L_1262d17d;
  /* 1262d173 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262d175 call dword ptr [0x12652288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652288))), 0x1262d17bu);
  /* 1262d17b jmp 0x1262d16a */
  goto L_1262d16a;
L_1262d17d:;
  /* 1262d17d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d181 je 0x1262d1c1 */
  if (C.zf) goto L_1262d1c1;
  /* 1262d183 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d187 je 0x1262d1a1 */
  if (C.zf) goto L_1262d1a1;
  /* 1262d189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d18c push ecx */
  push32((uint32_t)(ECX));
  /* 1262d18d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d190 push edx */
  push32((uint32_t)(EDX));
  /* 1262d191 call 0x1262d520 */
  push32(0x1262d196u); f_1262d520();
  /* 1262d196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d199 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1262d19f jmp 0x1262d1b3 */
  goto L_1262d1b3;
L_1262d1a1:;
  /* 1262d1a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d1a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d1a7 mov ecx, dword ptr [eax + 0x1264e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1264e4dc)));
  /* 1262d1ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1262d1b3:;
  /* 1262d1b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1262d1b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1262d1bc jmp 0x1262d4fb */
  goto L_1262d4fb;
L_1262d1c1:;
  /* 1262d1c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1262d1c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262d1cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d1d3 je 0x1262d4f3 */
  if (C.zf) goto L_1262d4f3;
  /* 1262d1d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d1dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262d1df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d1e2 jne 0x1262d404 */
  if (!C.zf) goto L_1262d404;
  /* 1262d1e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d1eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1262d1ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d1f2 jne 0x1262d404 */
  if (!C.zf) goto L_1262d404;
  /* 1262d1f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d1fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1262d1ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d202 jne 0x1262d404 */
  if (!C.zf) goto L_1262d404;
  /* 1262d208 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d20b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1262d211:;
  /* 1262d211 push 0x1264b0cc */
  push32((uint32_t)(0x1264b0ccu));
  /* 1262d216 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1262d21c push ecx */
  push32((uint32_t)(ECX));
  /* 1262d21d call 0x1262f380 */
  push32(0x1262d222u); f_1262f380();
  /* 1262d222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d225 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1262d22b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d232 je 0x1262d25d */
  if (C.zf) goto L_1262d25d;
  /* 1262d234 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d23a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d240 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1262d246 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d24d je 0x1262d25d */
  if (C.zf) goto L_1262d25d;
  /* 1262d24f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d255 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262d258 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d25b jne 0x1262d283 */
  if (!C.zf) goto L_1262d283;
L_1262d25d:;
  /* 1262d25d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d261 je 0x1262d27c */
  if (C.zf) goto L_1262d27c;
  /* 1262d263 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1262d265 call 0x12627080 */
  push32(0x1262d26au); f_12627080();
  /* 1262d26a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d26d mov edx, dword ptr [0x1264f88c] */
  EDX = (r32((uint32_t)(0x1264f88c)));
  /* 1262d273 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d276 mov dword ptr [0x1264f88c], edx */
  w32((uint32_t)(0x1264f88c), (EDX));
L_1262d27c:;
  /* 1262d27c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d27e jmp 0x1262d51b */
  goto L_1262d51b;
L_1262d283:;
  /* 1262d283 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1262d28a jmp 0x1262d295 */
  goto L_1262d295;
L_1262d28c:;
  /* 1262d28c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262d28f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d292 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1262d295:;
  /* 1262d295 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d299 jg 0x1262d2e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1262d2e3;
  /* 1262d29b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1262d2a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d2a2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1262d2a8 push edx */
  push32((uint32_t)(EDX));
  /* 1262d2a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262d2ac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d2af mov ecx, dword ptr [eax + 0x1264e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1264e4d8)));
  /* 1262d2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d2b6 call 0x1262f340 */
  push32(0x1262d2bbu); f_1262f340();
  /* 1262d2bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d2be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d2c0 jne 0x1262d2e1 */
  if (!C.zf) goto L_1262d2e1;
  /* 1262d2c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262d2c5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d2c8 mov eax, dword ptr [edx + 0x1264e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1264e4d8)));
  /* 1262d2ce push eax */
  push32((uint32_t)(EAX));
  /* 1262d2cf call 0x12626410 */
  push32(0x1262d2d4u); f_12626410();
  /* 1262d2d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d2d7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d2dd jne 0x1262d2e1 */
  if (!C.zf) goto L_1262d2e1;
  /* 1262d2df jmp 0x1262d2e3 */
  goto L_1262d2e3;
L_1262d2e1:;
  /* 1262d2e1 jmp 0x1262d28c */
  goto L_1262d28c;
L_1262d2e3:;
  /* 1262d2e3 push 0x1264b0c8 */
  push32((uint32_t)(0x1264b0c8u));
  /* 1262d2e8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d2ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d2f1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1262d2f7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d2fd push edx */
  push32((uint32_t)(EDX));
  /* 1262d2fe call 0x1262f300 */
  push32(0x1262d303u); f_1262f300();
  /* 1262d303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d306 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1262d30c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d313 jne 0x1262d349 */
  if (!C.zf) goto L_1262d349;
  /* 1262d315 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d31b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262d31e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d321 je 0x1262d349 */
  if (C.zf) goto L_1262d349;
  /* 1262d323 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d327 je 0x1262d342 */
  if (C.zf) goto L_1262d342;
  /* 1262d329 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1262d32b call 0x12627080 */
  push32(0x1262d330u); f_12627080();
  /* 1262d330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d333 mov edx, dword ptr [0x1264f88c] */
  EDX = (r32((uint32_t)(0x1264f88c)));
  /* 1262d339 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d33c mov dword ptr [0x1264f88c], edx */
  w32((uint32_t)(0x1264f88c), (EDX));
L_1262d342:;
  /* 1262d342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d344 jmp 0x1262d51b */
  goto L_1262d51b;
L_1262d349:;
  /* 1262d349 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d34d jg 0x1262d39a */
  if ((!C.zf&&C.sf==C.of)) goto L_1262d39a;
  /* 1262d34f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1262d355 push eax */
  push32((uint32_t)(EAX));
  /* 1262d356 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d35c push ecx */
  push32((uint32_t)(ECX));
  /* 1262d35d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1262d363 push edx */
  push32((uint32_t)(EDX));
  /* 1262d364 call 0x12626e00 */
  push32(0x1262d369u); f_12626e00();
  /* 1262d369 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d36c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1262d372 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1262d37a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1262d380 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d381 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262d384 push edx */
  push32((uint32_t)(EDX));
  /* 1262d385 call 0x1262d520 */
  push32(0x1262d38au); f_1262d520();
  /* 1262d38a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d38d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d38f je 0x1262d39a */
  if (C.zf) goto L_1262d39a;
  /* 1262d391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d394 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d397 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1262d39a:;
  /* 1262d39a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d3a0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d3a6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1262d3ac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1262d3b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262d3b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d3b7 je 0x1262d3c8 */
  if (C.zf) goto L_1262d3c8;
  /* 1262d3b9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1262d3bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d3c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1262d3c8:;
  /* 1262d3c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1262d3ce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262d3d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d3d3 jne 0x1262d211 */
  if (!C.zf) goto L_1262d211;
  /* 1262d3d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d3dd je 0x1262d3ec */
  if (C.zf) goto L_1262d3ec;
  /* 1262d3df call 0x1262d6c0 */
  push32(0x1262d3e4u); f_1262d6c0();
  /* 1262d3e4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1262d3ea jmp 0x1262d3f6 */
  goto L_1262d3f6;
L_1262d3ec:;
  /* 1262d3ec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1262d3f6:;
  /* 1262d3f6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1262d3fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262d3ff jmp 0x1262d4f1 */
  goto L_1262d4f1;
L_1262d404:;
  /* 1262d404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d407 push edx */
  push32((uint32_t)(EDX));
  /* 1262d408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262d40a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262d40c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1262d412 push eax */
  push32((uint32_t)(EAX));
  /* 1262d413 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d416 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d417 call 0x1262d7c0 */
  push32(0x1262d41cu); f_1262d7c0();
  /* 1262d41c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d41f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262d422 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d426 je 0x1262d4f1 */
  if (C.zf) goto L_1262d4f1;
  /* 1262d42c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1262d433 jmp 0x1262d43e */
  goto L_1262d43e;
L_1262d435:;
  /* 1262d435 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262d438 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d43b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1262d43e:;
  /* 1262d43e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d442 jg 0x1262d4a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1262d4a0;
  /* 1262d444 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d448 je 0x1262d49e */
  if (C.zf) goto L_1262d49e;
  /* 1262d44a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262d44d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d450 mov ecx, dword ptr [eax + 0x1264e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1264e4dc)));
  /* 1262d456 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d457 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1262d45d push edx */
  push32((uint32_t)(EDX));
  /* 1262d45e call 0x1262f270 */
  push32(0x1262d463u); f_1262f270();
  /* 1262d463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d468 je 0x1262d495 */
  if (C.zf) goto L_1262d495;
  /* 1262d46a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1262d470 push eax */
  push32((uint32_t)(EAX));
  /* 1262d471 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262d474 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d475 call 0x1262d520 */
  push32(0x1262d47au); f_1262d520();
  /* 1262d47a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d47d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d47f je 0x1262d48c */
  if (C.zf) goto L_1262d48c;
  /* 1262d481 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d484 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d487 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1262d48a jmp 0x1262d493 */
  goto L_1262d493;
L_1262d48c:;
  /* 1262d48c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1262d493:;
  /* 1262d493 jmp 0x1262d49e */
  goto L_1262d49e;
L_1262d495:;
  /* 1262d495 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d498 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d49b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1262d49e:;
  /* 1262d49e jmp 0x1262d435 */
  goto L_1262d435;
L_1262d4a0:;
  /* 1262d4a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d4a4 je 0x1262d4cb */
  if (C.zf) goto L_1262d4cb;
  /* 1262d4a6 call 0x1262d6c0 */
  push32(0x1262d4abu); f_1262d6c0();
  /* 1262d4ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262d4ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d4b0 mov ecx, dword ptr [0x1264e4dc] */
  ECX = (r32((uint32_t)(0x1264e4dc)));
  /* 1262d4b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d4b7 call 0x12624070 */
  push32(0x1262d4bcu); f_12624070();
  /* 1262d4bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d4bf mov dword ptr [0x1264e4dc], 0 */
  w32((uint32_t)(0x1264e4dc), (0x0u));
  /* 1262d4c9 jmp 0x1262d4f1 */
  goto L_1262d4f1;
L_1262d4cb:;
  /* 1262d4cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d4cf je 0x1262d4de */
  if (C.zf) goto L_1262d4de;
  /* 1262d4d1 call 0x1262d6c0 */
  push32(0x1262d4d6u); f_1262d6c0();
  /* 1262d4d6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1262d4dc jmp 0x1262d4e8 */
  goto L_1262d4e8;
L_1262d4de:;
  /* 1262d4de mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1262d4e8:;
  /* 1262d4e8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1262d4ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1262d4f1:;
  /* 1262d4f1 jmp 0x1262d4fb */
  goto L_1262d4fb;
L_1262d4f3:;
  /* 1262d4f3 call 0x1262d6c0 */
  push32(0x1262d4f8u); f_1262d6c0();
  /* 1262d4f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1262d4fb:;
  /* 1262d4fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d4ff je 0x1262d518 */
  if (C.zf) goto L_1262d518;
  /* 1262d501 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1262d503 call 0x12627080 */
  push32(0x1262d508u); f_12627080();
  /* 1262d508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d50b mov eax, dword ptr [0x1264f88c] */
  EAX = (r32((uint32_t)(0x1264f88c)));
  /* 1262d510 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d513 mov dword ptr [0x1264f88c], eax */
  w32((uint32_t)(0x1264f88c), (EAX));
L_1262d518:;
  /* 1262d518 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1262d51b:;
  /* 1262d51b mov esp, ebp */
  ESP = (EBP);
  /* 1262d51d pop ebp */
  EBP = (pop32());
  /* 1262d51e ret  */
  ESPCHK(0x1262d130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d520 @ 0x1262d520 (403 bytes, 117 insns) */
void f_1262d520(void) {
  FTRACE(0x1262d520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d520 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d521 mov ebp, esp */
  EBP = (ESP);
  /* 1262d523 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d529 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d52c push eax */
  push32((uint32_t)(EAX));
  /* 1262d52d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1262d533 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d534 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1262d53a push edx */
  push32((uint32_t)(EDX));
  /* 1262d53b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1262d541 push eax */
  push32((uint32_t)(EAX));
  /* 1262d542 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d545 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d546 call 0x1262d7c0 */
  push32(0x1262d54bu); f_1262d7c0();
  /* 1262d54b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d54e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d550 jne 0x1262d559 */
  if (!C.zf) goto L_1262d559;
  /* 1262d552 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d554 jmp 0x1262d6af */
  goto L_1262d6af;
L_1262d559:;
  /* 1262d559 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1262d55e push 0x1264b0d0 */
  push32((uint32_t)(0x1264b0d0u));
  /* 1262d563 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d565 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1262d56b push edx */
  push32((uint32_t)(EDX));
  /* 1262d56c call 0x12626410 */
  push32(0x1262d571u); f_12626410();
  /* 1262d571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d574 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d577 push eax */
  push32((uint32_t)(EAX));
  /* 1262d578 call 0x126235e0 */
  push32(0x1262d57du); f_126235e0();
  /* 1262d57d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d580 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262d583 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d587 jne 0x1262d590 */
  if (!C.zf) goto L_1262d590;
  /* 1262d589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d58b jmp 0x1262d6af */
  goto L_1262d6af;
L_1262d590:;
  /* 1262d590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d593 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d596 mov ecx, dword ptr [eax + 0x1264e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1264e4dc)));
  /* 1262d59c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262d59f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d5a2 mov eax, dword ptr [edx*4 + 0x1264f708] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1264f708)));
  /* 1262d5a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262d5ac push 6 */
  push32((uint32_t)(0x6u));
  /* 1262d5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d5b1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d5b4 add ecx, 0x1264f758 */
  { uint32_t _a=(ECX),_b=(0x1264f758u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d5ba push ecx */
  push32((uint32_t)(ECX));
  /* 1262d5bb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1262d5be push edx */
  push32((uint32_t)(EDX));
  /* 1262d5bf call 0x12629ec0 */
  push32(0x1262d5c4u); f_12629ec0();
  /* 1262d5c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d5c7 mov eax, dword ptr [0x1264f720] */
  EAX = (r32((uint32_t)(0x1264f720)));
  /* 1262d5cc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1262d5cf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1262d5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d5d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262d5d9 push edx */
  push32((uint32_t)(EDX));
  /* 1262d5da call 0x12626590 */
  push32(0x1262d5dfu); f_12626590();
  /* 1262d5df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d5e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d5e5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d5e8 mov dword ptr [ecx + 0x1264e4dc], eax */
  w32((uint32_t)(ECX + 0x1264e4dc), (EAX));
  /* 1262d5ee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1262d5f4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262d5fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d5fd mov dword ptr [eax*4 + 0x1264f708], edx */
  w32((uint32_t)(EAX*4 + 0x1264f708), (EDX));
  /* 1262d604 push 6 */
  push32((uint32_t)(0x6u));
  /* 1262d606 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1262d60c push ecx */
  push32((uint32_t)(ECX));
  /* 1262d60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d610 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d613 add edx, 0x1264f758 */
  { uint32_t _a=(EDX),_b=(0x1264f758u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d619 push edx */
  push32((uint32_t)(EDX));
  /* 1262d61a call 0x12629ec0 */
  push32(0x1262d61fu); f_12629ec0();
  /* 1262d61f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d622 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d626 jne 0x1262d633 */
  if (!C.zf) goto L_1262d633;
  /* 1262d628 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d62e mov dword ptr [0x1264f720], eax */
  w32((uint32_t)(0x1264f720), (EAX));
L_1262d633:;
  /* 1262d633 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d637 jne 0x1262d645 */
  if (!C.zf) goto L_1262d645;
  /* 1262d639 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1262d63f mov dword ptr [0x1264f724], ecx */
  w32((uint32_t)(0x1264f724), (ECX));
L_1262d645:;
  /* 1262d645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d648 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d64b call dword ptr [edx + 0x1264e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1264e4e0))), 0x1262d651u);
  /* 1262d651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d653 je 0x1262d68c */
  if (C.zf) goto L_1262d68c;
  /* 1262d655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d658 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d65b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d65e mov dword ptr [eax + 0x1264e4dc], ecx */
  w32((uint32_t)(EAX + 0x1264e4dc), (ECX));
  /* 1262d664 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d666 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262d669 push edx */
  push32((uint32_t)(EDX));
  /* 1262d66a call 0x12624070 */
  push32(0x1262d66fu); f_12624070();
  /* 1262d66f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d675 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d678 mov dword ptr [eax*4 + 0x1264f708], ecx */
  w32((uint32_t)(EAX*4 + 0x1264f708), (ECX));
  /* 1262d67f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262d682 mov dword ptr [0x1264f720], edx */
  w32((uint32_t)(0x1264f720), (EDX));
  /* 1262d688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d68a jmp 0x1262d6af */
  goto L_1262d6af;
L_1262d68c:;
  /* 1262d68c cmp dword ptr [ebp - 0xc], 0x1264e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1264e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d693 je 0x1262d6a3 */
  if (C.zf) goto L_1262d6a3;
  /* 1262d695 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d697 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262d69a push eax */
  push32((uint32_t)(EAX));
  /* 1262d69b call 0x12624070 */
  push32(0x1262d6a0u); f_12624070();
  /* 1262d6a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262d6a3:;
  /* 1262d6a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d6a6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d6a9 mov eax, dword ptr [ecx + 0x1264e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1264e4dc)));
L_1262d6af:;
  /* 1262d6af mov esp, ebp */
  ESP = (EBP);
  /* 1262d6b1 pop ebp */
  EBP = (pop32());
  /* 1262d6b2 ret  */
  ESPCHK(0x1262d520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6c0 @ 0x1262d6c0 (256 bytes, 72 insns) */
void f_1262d6c0(void) {
  FTRACE(0x1262d6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1262d6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d6c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1262d6cd cmp dword ptr [0x1264e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d6d4 jne 0x1262d6f4 */
  if (!C.zf) goto L_1262d6f4;
  /* 1262d6d6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1262d6db push 0x1264b0d0 */
  push32((uint32_t)(0x1264b0d0u));
  /* 1262d6e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d6e2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1262d6e7 call 0x126235e0 */
  push32(0x1262d6ecu); f_126235e0();
  /* 1262d6ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d6ef mov dword ptr [0x1264e4dc], eax */
  w32((uint32_t)(0x1264e4dc), (EAX));
L_1262d6f4:;
  /* 1262d6f4 mov eax, dword ptr [0x1264e4dc] */
  EAX = (r32((uint32_t)(0x1264e4dc)));
  /* 1262d6f9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1262d6fc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1262d703 jmp 0x1262d70e */
  goto L_1262d70e;
L_1262d705:;
  /* 1262d705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d708 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d70b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262d70e:;
  /* 1262d70e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d711 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d714 mov eax, dword ptr [edx + 0x1264e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1264e4dc)));
  /* 1262d71a push eax */
  push32((uint32_t)(EAX));
  /* 1262d71b push 0x1264b0dc */
  push32((uint32_t)(0x1264b0dcu));
  /* 1262d720 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d723 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d726 mov edx, dword ptr [ecx + 0x1264e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1264e4d8)));
  /* 1262d72c push edx */
  push32((uint32_t)(EDX));
  /* 1262d72d push 3 */
  push32((uint32_t)(0x3u));
  /* 1262d72f mov eax, dword ptr [0x1264e4dc] */
  EAX = (r32((uint32_t)(0x1264e4dc)));
  /* 1262d734 push eax */
  push32((uint32_t)(EAX));
  /* 1262d735 call 0x1262d960 */
  push32(0x1262d73au); f_1262d960();
  /* 1262d73a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d73d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d741 jge 0x1262d789 */
  if ((C.sf==C.of)) goto L_1262d789;
  /* 1262d743 push 0x1264b0c8 */
  push32((uint32_t)(0x1264b0c8u));
  /* 1262d748 mov ecx, dword ptr [0x1264e4dc] */
  ECX = (r32((uint32_t)(0x1264e4dc)));
  /* 1262d74e push ecx */
  push32((uint32_t)(ECX));
  /* 1262d74f call 0x126265a0 */
  push32(0x1262d754u); f_126265a0();
  /* 1262d754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d757 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d75a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d75d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d760 mov eax, dword ptr [edx + 0x1264e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1264e4dc)));
  /* 1262d766 push eax */
  push32((uint32_t)(EAX));
  /* 1262d767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d76a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262d76d mov edx, dword ptr [ecx + 0x1264e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1264e4dc)));
  /* 1262d773 push edx */
  push32((uint32_t)(EDX));
  /* 1262d774 call 0x1262f270 */
  push32(0x1262d779u); f_1262f270();
  /* 1262d779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d77c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d77e je 0x1262d787 */
  if (C.zf) goto L_1262d787;
  /* 1262d780 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1262d787:;
  /* 1262d787 jmp 0x1262d7b7 */
  goto L_1262d7b7;
L_1262d789:;
  /* 1262d789 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d78d jne 0x1262d796 */
  if (!C.zf) goto L_1262d796;
  /* 1262d78f mov eax, dword ptr [0x1264e4dc] */
  EAX = (r32((uint32_t)(0x1264e4dc)));
  /* 1262d794 jmp 0x1262d7bc */
  goto L_1262d7bc;
L_1262d796:;
  /* 1262d796 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262d798 mov eax, dword ptr [0x1264e4dc] */
  EAX = (r32((uint32_t)(0x1264e4dc)));
  /* 1262d79d push eax */
  push32((uint32_t)(EAX));
  /* 1262d79e call 0x12624070 */
  push32(0x1262d7a3u); f_12624070();
  /* 1262d7a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d7a6 mov dword ptr [0x1264e4dc], 0 */
  w32((uint32_t)(0x1264e4dc), (0x0u));
  /* 1262d7b0 mov eax, dword ptr [0x1264e4f4] */
  EAX = (r32((uint32_t)(0x1264e4f4)));
  /* 1262d7b5 jmp 0x1262d7bc */
  goto L_1262d7bc;
L_1262d7b7:;
  /* 1262d7b7 jmp 0x1262d705 */
  goto L_1262d705;
L_1262d7bc:;
  /* 1262d7bc mov esp, ebp */
  ESP = (EBP);
  /* 1262d7be pop ebp */
  EBP = (pop32());
  /* 1262d7bf ret  */
  ESPCHK(0x1262d6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x1262d7c0 (388 bytes, 115 insns) */
void f_1262d7c0(void) {
  FTRACE(0x1262d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1262d7c3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d7c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d7cd jne 0x1262d7d6 */
  if (!C.zf) goto L_1262d7d6;
  /* 1262d7cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d7d1 jmp 0x1262d940 */
  goto L_1262d940;
L_1262d7d6:;
  /* 1262d7d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d7d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262d7dc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d7df jne 0x1262d830 */
  if (!C.zf) goto L_1262d830;
  /* 1262d7e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d7e4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1262d7e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d7ea jne 0x1262d830 */
  if (!C.zf) goto L_1262d830;
  /* 1262d7ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d7ef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1262d7f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d7f5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1262d7f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d7fd je 0x1262d819 */
  if (C.zf) goto L_1262d819;
  /* 1262d7ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262d802 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1262d807 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262d80a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1262d810 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262d813 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1262d819:;
  /* 1262d819 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d81d je 0x1262d828 */
  if (C.zf) goto L_1262d828;
  /* 1262d81f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262d822 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1262d828:;
  /* 1262d828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d82b jmp 0x1262d940 */
  goto L_1262d940;
L_1262d830:;
  /* 1262d830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d833 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d834 push 0x1264e450 */
  push32((uint32_t)(0x1264e450u));
  /* 1262d839 call 0x1262f270 */
  push32(0x1262d83eu); f_1262f270();
  /* 1262d83e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d843 je 0x1262d8f8 */
  if (C.zf) goto L_1262d8f8;
  /* 1262d849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d84c push edx */
  push32((uint32_t)(EDX));
  /* 1262d84d push 0x1264e3cc */
  push32((uint32_t)(0x1264e3ccu));
  /* 1262d852 call 0x1262f270 */
  push32(0x1262d857u); f_1262f270();
  /* 1262d857 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d85c je 0x1262d8f8 */
  if (C.zf) goto L_1262d8f8;
  /* 1262d862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d865 push eax */
  push32((uint32_t)(EAX));
  /* 1262d866 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1262d86c push ecx */
  push32((uint32_t)(ECX));
  /* 1262d86d call 0x1262d9b0 */
  push32(0x1262d872u); f_1262d9b0();
  /* 1262d872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d877 je 0x1262d880 */
  if (C.zf) goto L_1262d880;
  /* 1262d879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d87b jmp 0x1262d940 */
  goto L_1262d940;
L_1262d880:;
  /* 1262d880 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1262d886 push edx */
  push32((uint32_t)(EDX));
  /* 1262d887 push 0x1264f730 */
  push32((uint32_t)(0x1264f730u));
  /* 1262d88c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1262d892 push eax */
  push32((uint32_t)(EAX));
  /* 1262d893 call 0x1262f3c0 */
  push32(0x1262d898u); f_1262f3c0();
  /* 1262d898 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d89b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d89d jne 0x1262d8a6 */
  if (!C.zf) goto L_1262d8a6;
  /* 1262d89f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d8a1 jmp 0x1262d940 */
  goto L_1262d940;
L_1262d8a6:;
  /* 1262d8a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262d8a8 mov cx, word ptr [0x1264f734] */
  CX = (r16((uint32_t)(0x1264f734)));
  /* 1262d8af mov dword ptr [0x1264f738], ecx */
  w32((uint32_t)(0x1264f738), (ECX));
  /* 1262d8b5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1262d8bb push edx */
  push32((uint32_t)(EDX));
  /* 1262d8bc push 0x1264e450 */
  push32((uint32_t)(0x1264e450u));
  /* 1262d8c1 call 0x1262db10 */
  push32(0x1262d8c6u); f_1262db10();
  /* 1262d8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d8c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d8cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262d8cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262d8d1 je 0x1262d8e6 */
  if (C.zf) goto L_1262d8e6;
  /* 1262d8d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d8d6 push edx */
  push32((uint32_t)(EDX));
  /* 1262d8d7 push 0x1264e3cc */
  push32((uint32_t)(0x1264e3ccu));
  /* 1262d8dc call 0x12626590 */
  push32(0x1262d8e1u); f_12626590();
  /* 1262d8e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d8e4 jmp 0x1262d8f8 */
  goto L_1262d8f8;
L_1262d8e6:;
  /* 1262d8e6 push 0x1264e450 */
  push32((uint32_t)(0x1264e450u));
  /* 1262d8eb push 0x1264e3cc */
  push32((uint32_t)(0x1264e3ccu));
  /* 1262d8f0 call 0x12626590 */
  push32(0x1262d8f5u); f_12626590();
  /* 1262d8f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262d8f8:;
  /* 1262d8f8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d8fc je 0x1262d911 */
  if (C.zf) goto L_1262d911;
  /* 1262d8fe push 6 */
  push32((uint32_t)(0x6u));
  /* 1262d900 push 0x1264f730 */
  push32((uint32_t)(0x1264f730u));
  /* 1262d905 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262d908 push eax */
  push32((uint32_t)(EAX));
  /* 1262d909 call 0x12629ec0 */
  push32(0x1262d90eu); f_12629ec0();
  /* 1262d90e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262d911:;
  /* 1262d911 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d915 je 0x1262d92a */
  if (C.zf) goto L_1262d92a;
  /* 1262d917 push 4 */
  push32((uint32_t)(0x4u));
  /* 1262d919 push 0x1264f738 */
  push32((uint32_t)(0x1264f738u));
  /* 1262d91e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262d921 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d922 call 0x12629ec0 */
  push32(0x1262d927u); f_12629ec0();
  /* 1262d927 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262d92a:;
  /* 1262d92a push 0x1264e450 */
  push32((uint32_t)(0x1264e450u));
  /* 1262d92f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d932 push edx */
  push32((uint32_t)(EDX));
  /* 1262d933 call 0x12626590 */
  push32(0x1262d938u); f_12626590();
  /* 1262d938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d93b mov eax, 0x1264e450 */
  EAX = (0x1264e450u);
L_1262d940:;
  /* 1262d940 mov esp, ebp */
  ESP = (EBP);
  /* 1262d942 pop ebp */
  EBP = (pop32());
  /* 1262d943 ret  */
  ESPCHK(0x1262d7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d950 @ 0x1262d950 (7 bytes, 5 insns) */
void f_1262d950(void) {
  FTRACE(0x1262d950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d950 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d951 mov ebp, esp */
  EBP = (ESP);
  /* 1262d953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d955 pop ebp */
  EBP = (pop32());
  /* 1262d956 ret  */
  ESPCHK(0x1262d950u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1262d960 (79 bytes, 28 insns) */
void f_1262d960(void) {
  FTRACE(0x1262d960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d960 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d961 mov ebp, esp */
  EBP = (ESP);
  /* 1262d963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d966 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1262d969 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262d96c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262d973 jmp 0x1262d97e */
  goto L_1262d97e;
L_1262d975:;
  /* 1262d975 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262d978 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d97b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1262d97e:;
  /* 1262d97e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262d981 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d984 jge 0x1262d9a4 */
  if ((C.sf==C.of)) goto L_1262d9a4;
  /* 1262d986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d989 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d98c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262d98f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262d992 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1262d995 push edx */
  push32((uint32_t)(EDX));
  /* 1262d996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d999 push eax */
  push32((uint32_t)(EAX));
  /* 1262d99a call 0x126265a0 */
  push32(0x1262d99fu); f_126265a0();
  /* 1262d99f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d9a2 jmp 0x1262d975 */
  goto L_1262d975;
L_1262d9a4:;
  /* 1262d9a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262d9ab mov esp, ebp */
  ESP = (EBP);
  /* 1262d9ad pop ebp */
  EBP = (pop32());
  /* 1262d9ae ret  */
  ESPCHK(0x1262d960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9b0 @ 0x1262d9b0 (349 bytes, 122 insns) */
void f_1262d9b0(void) {
  FTRACE(0x1262d9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262d9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262d9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1262d9b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262d9b6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1262d9bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1262d9bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d9c0 push eax */
  push32((uint32_t)(EAX));
  /* 1262d9c1 call 0x12627350 */
  push32(0x1262d9c6u); f_12627350();
  /* 1262d9c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d9cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262d9cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262d9d1 jne 0x1262d9da */
  if (!C.zf) goto L_1262d9da;
  /* 1262d9d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262d9d5 jmp 0x1262db09 */
  goto L_1262db09;
L_1262d9da:;
  /* 1262d9da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d9dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262d9e0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262d9e3 jne 0x1262da10 */
  if (!C.zf) goto L_1262da10;
  /* 1262d9e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d9e8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1262d9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262d9ee je 0x1262da10 */
  if (C.zf) goto L_1262da10;
  /* 1262d9f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262d9f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262d9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1262d9f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262d9fa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262da00 push edx */
  push32((uint32_t)(EDX));
  /* 1262da01 call 0x12626590 */
  push32(0x1262da06u); f_12626590();
  /* 1262da06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262da09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262da0b jmp 0x1262db09 */
  goto L_1262db09;
L_1262da10:;
  /* 1262da10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1262da17 jmp 0x1262da22 */
  goto L_1262da22;
L_1262da19:;
  /* 1262da19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262da1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262da1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262da22:;
  /* 1262da22 push 0x1264b0e0 */
  push32((uint32_t)(0x1264b0e0u));
  /* 1262da27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262da2a push ecx */
  push32((uint32_t)(ECX));
  /* 1262da2b call 0x1262f300 */
  push32(0x1262da30u); f_1262f300();
  /* 1262da30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262da33 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1262da36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262da3a jne 0x1262da44 */
  if (!C.zf) goto L_1262da44;
  /* 1262da3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262da3f jmp 0x1262db09 */
  goto L_1262db09;
L_1262da44:;
  /* 1262da44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262da47 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262da4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262da4c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1262da4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262da53 jne 0x1262da7a */
  if (!C.zf) goto L_1262da7a;
  /* 1262da55 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262da59 jge 0x1262da7a */
  if ((C.sf==C.of)) goto L_1262da7a;
  /* 1262da5b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1262da5f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262da62 je 0x1262da7a */
  if (C.zf) goto L_1262da7a;
  /* 1262da64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262da67 push edx */
  push32((uint32_t)(EDX));
  /* 1262da68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262da6b push eax */
  push32((uint32_t)(EAX));
  /* 1262da6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262da6f push ecx */
  push32((uint32_t)(ECX));
  /* 1262da70 call 0x12626e00 */
  push32(0x1262da75u); f_12626e00();
  /* 1262da75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262da78 jmp 0x1262dae0 */
  goto L_1262dae0;
L_1262da7a:;
  /* 1262da7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262da7e jne 0x1262daa8 */
  if (!C.zf) goto L_1262daa8;
  /* 1262da80 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262da84 jge 0x1262daa8 */
  if ((C.sf==C.of)) goto L_1262daa8;
  /* 1262da86 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1262da8a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262da8d je 0x1262daa8 */
  if (C.zf) goto L_1262daa8;
  /* 1262da8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262da92 push eax */
  push32((uint32_t)(EAX));
  /* 1262da93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262da96 push ecx */
  push32((uint32_t)(ECX));
  /* 1262da97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262da9a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262da9d push edx */
  push32((uint32_t)(EDX));
  /* 1262da9e call 0x12626e00 */
  push32(0x1262daa3u); f_12626e00();
  /* 1262daa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262daa6 jmp 0x1262dae0 */
  goto L_1262dae0;
L_1262daa8:;
  /* 1262daa8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262daac jne 0x1262dadb */
  if (!C.zf) goto L_1262dadb;
  /* 1262daae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1262dab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262dab4 je 0x1262dabf */
  if (C.zf) goto L_1262dabf;
  /* 1262dab6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1262daba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dabd jne 0x1262dadb */
  if (!C.zf) goto L_1262dadb;
L_1262dabf:;
  /* 1262dabf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262dac2 push edx */
  push32((uint32_t)(EDX));
  /* 1262dac3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262dac6 push eax */
  push32((uint32_t)(EAX));
  /* 1262dac7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262daca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dad0 push ecx */
  push32((uint32_t)(ECX));
  /* 1262dad1 call 0x12626e00 */
  push32(0x1262dad6u); f_12626e00();
  /* 1262dad6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dad9 jmp 0x1262dae0 */
  goto L_1262dae0;
L_1262dadb:;
  /* 1262dadb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262dade jmp 0x1262db09 */
  goto L_1262db09;
L_1262dae0:;
  /* 1262dae0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1262dae4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dae7 jne 0x1262daeb */
  if (!C.zf) goto L_1262daeb;
  /* 1262dae9 jmp 0x1262db07 */
  goto L_1262db07;
L_1262daeb:;
  /* 1262daeb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1262daef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262daf1 jne 0x1262daf5 */
  if (!C.zf) goto L_1262daf5;
  /* 1262daf3 jmp 0x1262db07 */
  goto L_1262db07;
L_1262daf5:;
  /* 1262daf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262daf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262dafb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1262daff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1262db02 jmp 0x1262da19 */
  goto L_1262da19;
L_1262db07:;
  /* 1262db07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262db09:;
  /* 1262db09 mov esp, ebp */
  ESP = (EBP);
  /* 1262db0b pop ebp */
  EBP = (pop32());
  /* 1262db0c ret  */
  ESPCHK(0x1262d9b0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1262db10 (101 bytes, 36 insns) */
void f_1262db10(void) {
  FTRACE(0x1262db10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262db10 push ebp */
  push32((uint32_t)(EBP));
  /* 1262db11 mov ebp, esp */
  EBP = (ESP);
  /* 1262db13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262db16 push eax */
  push32((uint32_t)(EAX));
  /* 1262db17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262db1a push ecx */
  push32((uint32_t)(ECX));
  /* 1262db1b call 0x12626590 */
  push32(0x1262db20u); f_12626590();
  /* 1262db20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262db23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262db26 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1262db2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262db2c je 0x1262db48 */
  if (C.zf) goto L_1262db48;
  /* 1262db2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262db31 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262db34 push ecx */
  push32((uint32_t)(ECX));
  /* 1262db35 push 0x1264b0e8 */
  push32((uint32_t)(0x1264b0e8u));
  /* 1262db3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262db3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262db3f push edx */
  push32((uint32_t)(EDX));
  /* 1262db40 call 0x1262d960 */
  push32(0x1262db45u); f_1262d960();
  /* 1262db45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262db48:;
  /* 1262db48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262db4b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1262db52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262db54 je 0x1262db73 */
  if (C.zf) goto L_1262db73;
  /* 1262db56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262db59 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262db5f push edx */
  push32((uint32_t)(EDX));
  /* 1262db60 push 0x1264b0e4 */
  push32((uint32_t)(0x1264b0e4u));
  /* 1262db65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262db67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262db6a push eax */
  push32((uint32_t)(EAX));
  /* 1262db6b call 0x1262d960 */
  push32(0x1262db70u); f_1262d960();
  /* 1262db70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262db73:;
  /* 1262db73 pop ebp */
  EBP = (pop32());
  /* 1262db74 ret  */
  ESPCHK(0x1262db10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x1262db80 (130 bytes, 50 insns) */
void f_1262db80(void) {
  FTRACE(0x1262db80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262db80 push ebp */
  push32((uint32_t)(EBP));
  /* 1262db81 mov ebp, esp */
  EBP = (ESP);
  /* 1262db83 push ecx */
  push32((uint32_t)(ECX));
  /* 1262db84 push ebx */
  push32((uint32_t)(EBX));
  /* 1262db85 push esi */
  push32((uint32_t)(ESI));
  /* 1262db86 push edi */
  push32((uint32_t)(EDI));
  /* 1262db87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1262db8e:;
  /* 1262db8e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262db92 jne 0x1262dbb2 */
  if (!C.zf) goto L_1262dbb2;
  /* 1262db94 push 0x1264b0f8 */
  push32((uint32_t)(0x1264b0f8u));
  /* 1262db99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262db9b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1262db9d push 0x1264b0ec */
  push32((uint32_t)(0x1264b0ecu));
  /* 1262dba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262dba4 call 0x126226a0 */
  push32(0x1262dba9u); f_126226a0();
  /* 1262dba9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dbac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dbaf jne 0x1262dbb2 */
  if (!C.zf) goto L_1262dbb2;
  /* 1262dbb1 int3  */
  x86_unimpl("int3 @ 0x1262dbb1");
L_1262dbb2:;
  /* 1262dbb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262dbb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262dbb6 jne 0x1262db8e */
  if (!C.zf) goto L_1262db8e;
  /* 1262dbb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dbbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262dbbe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1262dbc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262dbc3 je 0x1262dbd1 */
  if (C.zf) goto L_1262dbd1;
  /* 1262dbc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dbc8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1262dbcf jmp 0x1262dbf8 */
  goto L_1262dbf8;
L_1262dbd1:;
  /* 1262dbd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dbd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1262dbd5 call 0x1262c3f0 */
  push32(0x1262dbdau); f_1262c3f0();
  /* 1262dbda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dbdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dbe0 push edx */
  push32((uint32_t)(EDX));
  /* 1262dbe1 call 0x1262dc10 */
  push32(0x1262dbe6u); f_1262dc10();
  /* 1262dbe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dbe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262dbec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dbef push eax */
  push32((uint32_t)(EAX));
  /* 1262dbf0 call 0x1262c460 */
  push32(0x1262dbf5u); f_1262c460();
  /* 1262dbf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262dbf8:;
  /* 1262dbf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262dbfb pop edi */
  EDI = (pop32());
  /* 1262dbfc pop esi */
  ESI = (pop32());
  /* 1262dbfd pop ebx */
  EBX = (pop32());
  /* 1262dbfe mov esp, ebp */
  ESP = (EBP);
  /* 1262dc00 pop ebp */
  EBP = (pop32());
  /* 1262dc01 ret  */
  ESPCHK(0x1262db80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc10 @ 0x1262dc10 (190 bytes, 67 insns) */
void f_1262dc10(void) {
  FTRACE(0x1262dc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262dc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1262dc11 mov ebp, esp */
  EBP = (ESP);
  /* 1262dc13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262dc16 push ebx */
  push32((uint32_t)(EBX));
  /* 1262dc17 push esi */
  push32((uint32_t)(ESI));
  /* 1262dc18 push edi */
  push32((uint32_t)(EDI));
  /* 1262dc19 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1262dc20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dc23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1262dc26:;
  /* 1262dc26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dc2a jne 0x1262dc4a */
  if (!C.zf) goto L_1262dc4a;
  /* 1262dc2c push 0x1264af9c */
  push32((uint32_t)(0x1264af9cu));
  /* 1262dc31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262dc33 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1262dc35 push 0x1264b0ec */
  push32((uint32_t)(0x1264b0ecu));
  /* 1262dc3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262dc3c call 0x126226a0 */
  push32(0x1262dc41u); f_126226a0();
  /* 1262dc41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dc44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dc47 jne 0x1262dc4a */
  if (!C.zf) goto L_1262dc4a;
  /* 1262dc49 int3  */
  x86_unimpl("int3 @ 0x1262dc49");
L_1262dc4a:;
  /* 1262dc4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262dc4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262dc4e jne 0x1262dc26 */
  if (!C.zf) goto L_1262dc26;
  /* 1262dc50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dc53 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1262dc56 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1262dc5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262dc5d je 0x1262dcba */
  if (C.zf) goto L_1262dcba;
  /* 1262dc5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dc62 push ecx */
  push32((uint32_t)(ECX));
  /* 1262dc63 call 0x1262cf10 */
  push32(0x1262dc68u); f_1262cf10();
  /* 1262dc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dc6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262dc6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dc71 push edx */
  push32((uint32_t)(EDX));
  /* 1262dc72 call 0x12630290 */
  push32(0x1262dc77u); f_12630290();
  /* 1262dc77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dc7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dc7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1262dc80 push ecx */
  push32((uint32_t)(ECX));
  /* 1262dc81 call 0x12630160 */
  push32(0x1262dc86u); f_12630160();
  /* 1262dc86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dc89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262dc8b jge 0x1262dc96 */
  if ((C.sf==C.of)) goto L_1262dc96;
  /* 1262dc8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1262dc94 jmp 0x1262dcba */
  goto L_1262dcba;
L_1262dc96:;
  /* 1262dc96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dc99 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dc9d je 0x1262dcba */
  if (C.zf) goto L_1262dcba;
  /* 1262dc9f push 2 */
  push32((uint32_t)(0x2u));
  /* 1262dca1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dca4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1262dca7 push ecx */
  push32((uint32_t)(ECX));
  /* 1262dca8 call 0x12624070 */
  push32(0x1262dcadu); f_12624070();
  /* 1262dcad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dcb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dcb3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1262dcba:;
  /* 1262dcba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262dcbd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1262dcc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262dcc7 pop edi */
  EDI = (pop32());
  /* 1262dcc8 pop esi */
  ESI = (pop32());
  /* 1262dcc9 pop ebx */
  EBX = (pop32());
  /* 1262dcca mov esp, ebp */
  ESP = (EBP);
  /* 1262dccc pop ebp */
  EBP = (pop32());
  /* 1262dccd ret  */
  ESPCHK(0x1262dc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcd0 @ 0x1262dcd0 (210 bytes, 63 insns) */
void f_1262dcd0(void) {
  FTRACE(0x1262dcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262dcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262dcd1 mov ebp, esp */
  EBP = (ESP);
  /* 1262dcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262dcd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dcd7 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dcdd jae 0x1262dd01 */
  if (!C.cf) goto L_1262dd01;
  /* 1262dcdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dce2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1262dce5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dce8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1262dceb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262dcee mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262dcf5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1262dcfa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1262dcfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262dcff jne 0x1262dd14 */
  if (!C.zf) goto L_1262dd14;
L_1262dd01:;
  /* 1262dd01 call 0x1262b4b0 */
  push32(0x1262dd06u); f_1262b4b0();
  /* 1262dd06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262dd0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262dd0f jmp 0x1262dd9e */
  goto L_1262dd9e;
L_1262dd14:;
  /* 1262dd14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dd17 push edx */
  push32((uint32_t)(EDX));
  /* 1262dd18 call 0x1262ccd0 */
  push32(0x1262dd1du); f_1262ccd0();
  /* 1262dd1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dd20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dd23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1262dd26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dd29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1262dd2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262dd2f mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262dd36 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1262dd3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1262dd3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262dd40 je 0x1262dd7d */
  if (C.zf) goto L_1262dd7d;
  /* 1262dd42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dd45 push ecx */
  push32((uint32_t)(ECX));
  /* 1262dd46 call 0x1262cb50 */
  push32(0x1262dd4bu); f_1262cb50();
  /* 1262dd4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dd4e push eax */
  push32((uint32_t)(EAX));
  /* 1262dd4f call dword ptr [0x12652284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652284))), 0x1262dd55u);
  /* 1262dd55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262dd57 jne 0x1262dd64 */
  if (!C.zf) goto L_1262dd64;
  /* 1262dd59 call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x1262dd5fu);
  /* 1262dd5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262dd62 jmp 0x1262dd6b */
  goto L_1262dd6b;
L_1262dd64:;
  /* 1262dd64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1262dd6b:;
  /* 1262dd6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dd6f jne 0x1262dd73 */
  if (!C.zf) goto L_1262dd73;
  /* 1262dd71 jmp 0x1262dd8f */
  goto L_1262dd8f;
L_1262dd73:;
  /* 1262dd73 call 0x1262b4c0 */
  push32(0x1262dd78u); f_1262b4c0();
  /* 1262dd78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262dd7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1262dd7d:;
  /* 1262dd7d call 0x1262b4b0 */
  push32(0x1262dd82u); f_1262b4b0();
  /* 1262dd82 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1262dd88 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1262dd8f:;
  /* 1262dd8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dd92 push eax */
  push32((uint32_t)(EAX));
  /* 1262dd93 call 0x1262cd60 */
  push32(0x1262dd98u); f_1262cd60();
  /* 1262dd98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dd9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1262dd9e:;
  /* 1262dd9e mov esp, ebp */
  ESP = (EBP);
  /* 1262dda0 pop ebp */
  EBP = (pop32());
  /* 1262dda1 ret  */
  ESPCHK(0x1262dcd0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1262ddb0 (219 bytes, 64 insns) */
void f_1262ddb0(void) {
  FTRACE(0x1262ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1262ddb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ddb4 cmp dword ptr [0x1264f71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ddbb je 0x1262de51 */
  if (C.zf) goto L_1262de51;
  /* 1262ddc1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1262ddc3 push 0x1264b108 */
  push32((uint32_t)(0x1264b108u));
  /* 1262ddc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ddca push 0xac */
  push32((uint32_t)(0xacu));
  /* 1262ddcf push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ddd1 call 0x126239f0 */
  push32(0x1262ddd6u); f_126239f0();
  /* 1262ddd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ddd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262dddc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262dde0 jne 0x1262ddec */
  if (!C.zf) goto L_1262ddec;
  /* 1262dde2 mov eax, 1 */
  EAX = (0x1u);
  /* 1262dde7 jmp 0x1262de87 */
  goto L_1262de87;
L_1262ddec:;
  /* 1262ddec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ddef push eax */
  push32((uint32_t)(EAX));
  /* 1262ddf0 call 0x1262de90 */
  push32(0x1262ddf5u); f_1262de90();
  /* 1262ddf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ddf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ddfa je 0x1262de1d */
  if (C.zf) goto L_1262de1d;
  /* 1262ddfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ddff push ecx */
  push32((uint32_t)(ECX));
  /* 1262de00 call 0x1262e420 */
  push32(0x1262de05u); f_1262e420();
  /* 1262de05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262de08 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262de0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262de0d push edx */
  push32((uint32_t)(EDX));
  /* 1262de0e call 0x12624070 */
  push32(0x1262de13u); f_12624070();
  /* 1262de13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262de16 mov eax, 1 */
  EAX = (0x1u);
  /* 1262de1b jmp 0x1262de87 */
  goto L_1262de87;
L_1262de1d:;
  /* 1262de1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262de20 mov dword ptr [0x1264ec98], eax */
  w32((uint32_t)(0x1264ec98), (EAX));
  /* 1262de25 mov ecx, dword ptr [0x1264f73c] */
  ECX = (r32((uint32_t)(0x1264f73c)));
  /* 1262de2b push ecx */
  push32((uint32_t)(ECX));
  /* 1262de2c call 0x1262e420 */
  push32(0x1262de31u); f_1262e420();
  /* 1262de31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262de34 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262de36 mov edx, dword ptr [0x1264f73c] */
  EDX = (r32((uint32_t)(0x1264f73c)));
  /* 1262de3c push edx */
  push32((uint32_t)(EDX));
  /* 1262de3d call 0x12624070 */
  push32(0x1262de42u); f_12624070();
  /* 1262de42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262de45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262de48 mov dword ptr [0x1264f73c], eax */
  w32((uint32_t)(0x1264f73c), (EAX));
  /* 1262de4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262de4f jmp 0x1262de87 */
  goto L_1262de87;
L_1262de51:;
  /* 1262de51 mov dword ptr [0x1264ec98], 0x1264eca0 */
  w32((uint32_t)(0x1264ec98), (0x1264eca0u));
  /* 1262de5b mov ecx, dword ptr [0x1264f73c] */
  ECX = (r32((uint32_t)(0x1264f73c)));
  /* 1262de61 push ecx */
  push32((uint32_t)(ECX));
  /* 1262de62 call 0x1262e420 */
  push32(0x1262de67u); f_1262e420();
  /* 1262de67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262de6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262de6c mov edx, dword ptr [0x1264f73c] */
  EDX = (r32((uint32_t)(0x1264f73c)));
  /* 1262de72 push edx */
  push32((uint32_t)(EDX));
  /* 1262de73 call 0x12624070 */
  push32(0x1262de78u); f_12624070();
  /* 1262de78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262de7b mov dword ptr [0x1264f73c], 0 */
  w32((uint32_t)(0x1264f73c), (0x0u));
  /* 1262de85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262de87:;
  /* 1262de87 mov esp, ebp */
  ESP = (EBP);
  /* 1262de89 pop ebp */
  EBP = (pop32());
  /* 1262de8a ret  */
  ESPCHK(0x1262ddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de90 @ 0x1262de90 (1423 bytes, 533 insns) */
void f_1262de90(void) {
  FTRACE(0x1262de90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262de90 push ebp */
  push32((uint32_t)(EBP));
  /* 1262de91 mov ebp, esp */
  EBP = (ESP);
  /* 1262de93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262de96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1262de9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262de9f mov ax, word ptr [0x1264f776] */
  AX = (r16((uint32_t)(0x1264f776)));
  /* 1262dea5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262dea8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262deaa mov cx, word ptr [0x1264f778] */
  CX = (r16((uint32_t)(0x1264f778)));
  /* 1262deb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262deb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262deb8 jne 0x1262dec2 */
  if (!C.zf) goto L_1262dec2;
  /* 1262deba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262debd jmp 0x1262e41b */
  goto L_1262e41b;
L_1262dec2:;
  /* 1262dec2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dec5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dec8 push edx */
  push32((uint32_t)(EDX));
  /* 1262dec9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1262decb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262dece push eax */
  push32((uint32_t)(EAX));
  /* 1262decf push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ded1 call 0x126317a0 */
  push32(0x1262ded6u); f_126317a0();
  /* 1262ded6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ded9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262dedc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262dede mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262dee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dee4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dee7 push edx */
  push32((uint32_t)(EDX));
  /* 1262dee8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1262deea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262deed push eax */
  push32((uint32_t)(EAX));
  /* 1262deee push 1 */
  push32((uint32_t)(0x1u));
  /* 1262def0 call 0x126317a0 */
  push32(0x1262def5u); f_126317a0();
  /* 1262def5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262def8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262defb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262defd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262df00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262df03 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df06 push edx */
  push32((uint32_t)(EDX));
  /* 1262df07 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1262df09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262df0c push eax */
  push32((uint32_t)(EAX));
  /* 1262df0d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262df0f call 0x126317a0 */
  push32(0x1262df14u); f_126317a0();
  /* 1262df14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262df1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262df1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262df1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262df22 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df25 push edx */
  push32((uint32_t)(EDX));
  /* 1262df26 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1262df28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262df2b push eax */
  push32((uint32_t)(EAX));
  /* 1262df2c push 1 */
  push32((uint32_t)(0x1u));
  /* 1262df2e call 0x126317a0 */
  push32(0x1262df33u); f_126317a0();
  /* 1262df33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262df39 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262df3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262df3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262df41 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df44 push edx */
  push32((uint32_t)(EDX));
  /* 1262df45 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1262df47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262df4a push eax */
  push32((uint32_t)(EAX));
  /* 1262df4b push 1 */
  push32((uint32_t)(0x1u));
  /* 1262df4d call 0x126317a0 */
  push32(0x1262df52u); f_126317a0();
  /* 1262df52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262df58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262df5a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262df5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262df60 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df63 push edx */
  push32((uint32_t)(EDX));
  /* 1262df64 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1262df66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262df69 push eax */
  push32((uint32_t)(EAX));
  /* 1262df6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262df6c call 0x126317a0 */
  push32(0x1262df71u); f_126317a0();
  /* 1262df71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262df77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262df79 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262df7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262df7f push edx */
  push32((uint32_t)(EDX));
  /* 1262df80 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1262df82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262df85 push eax */
  push32((uint32_t)(EAX));
  /* 1262df86 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262df88 call 0x126317a0 */
  push32(0x1262df8du); f_126317a0();
  /* 1262df8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262df93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262df95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262df98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262df9b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262df9e push edx */
  push32((uint32_t)(EDX));
  /* 1262df9f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1262dfa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262dfa4 push eax */
  push32((uint32_t)(EAX));
  /* 1262dfa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262dfa7 call 0x126317a0 */
  push32(0x1262dfacu); f_126317a0();
  /* 1262dfac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dfaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262dfb2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262dfb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262dfb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dfba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dfbd push edx */
  push32((uint32_t)(EDX));
  /* 1262dfbe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1262dfc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262dfc3 push eax */
  push32((uint32_t)(EAX));
  /* 1262dfc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262dfc6 call 0x126317a0 */
  push32(0x1262dfcbu); f_126317a0();
  /* 1262dfcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dfce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262dfd1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262dfd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262dfd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dfd9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dfdc push edx */
  push32((uint32_t)(EDX));
  /* 1262dfdd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1262dfdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262dfe2 push eax */
  push32((uint32_t)(EAX));
  /* 1262dfe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262dfe5 call 0x126317a0 */
  push32(0x1262dfeau); f_126317a0();
  /* 1262dfea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dfed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262dff0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262dff2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262dff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262dff8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262dffb push edx */
  push32((uint32_t)(EDX));
  /* 1262dffc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1262dffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e001 push eax */
  push32((uint32_t)(EAX));
  /* 1262e002 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e004 call 0x126317a0 */
  push32(0x1262e009u); f_126317a0();
  /* 1262e009 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e00c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e00f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e011 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e017 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e01a push edx */
  push32((uint32_t)(EDX));
  /* 1262e01b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1262e01d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e020 push eax */
  push32((uint32_t)(EAX));
  /* 1262e021 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e023 call 0x126317a0 */
  push32(0x1262e028u); f_126317a0();
  /* 1262e028 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e02b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e02e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e030 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e036 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e039 push edx */
  push32((uint32_t)(EDX));
  /* 1262e03a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1262e03c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e03f push eax */
  push32((uint32_t)(EAX));
  /* 1262e040 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e042 call 0x126317a0 */
  push32(0x1262e047u); f_126317a0();
  /* 1262e047 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e04a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e04d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e04f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e052 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e055 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e058 push edx */
  push32((uint32_t)(EDX));
  /* 1262e059 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1262e05b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e05e push eax */
  push32((uint32_t)(EAX));
  /* 1262e05f push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e061 call 0x126317a0 */
  push32(0x1262e066u); f_126317a0();
  /* 1262e066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e069 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e06c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e06e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e074 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e077 push edx */
  push32((uint32_t)(EDX));
  /* 1262e078 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1262e07a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e07d push eax */
  push32((uint32_t)(EAX));
  /* 1262e07e push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e080 call 0x126317a0 */
  push32(0x1262e085u); f_126317a0();
  /* 1262e085 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e088 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e08b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e08d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e093 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e096 push edx */
  push32((uint32_t)(EDX));
  /* 1262e097 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1262e099 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e09c push eax */
  push32((uint32_t)(EAX));
  /* 1262e09d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e09f call 0x126317a0 */
  push32(0x1262e0a4u); f_126317a0();
  /* 1262e0a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e0a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e0aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e0ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e0af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e0b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e0b5 push edx */
  push32((uint32_t)(EDX));
  /* 1262e0b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1262e0b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e0bb push eax */
  push32((uint32_t)(EAX));
  /* 1262e0bc push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e0be call 0x126317a0 */
  push32(0x1262e0c3u); f_126317a0();
  /* 1262e0c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e0c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e0c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e0cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e0ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e0d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e0d4 push edx */
  push32((uint32_t)(EDX));
  /* 1262e0d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1262e0d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e0da push eax */
  push32((uint32_t)(EAX));
  /* 1262e0db push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e0dd call 0x126317a0 */
  push32(0x1262e0e2u); f_126317a0();
  /* 1262e0e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e0e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e0e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e0ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e0ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e0f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e0f3 push edx */
  push32((uint32_t)(EDX));
  /* 1262e0f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1262e0f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e0f9 push eax */
  push32((uint32_t)(EAX));
  /* 1262e0fa push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e0fc call 0x126317a0 */
  push32(0x1262e101u); f_126317a0();
  /* 1262e101 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e107 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e109 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e10c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e10f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e112 push edx */
  push32((uint32_t)(EDX));
  /* 1262e113 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1262e115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e118 push eax */
  push32((uint32_t)(EAX));
  /* 1262e119 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e11b call 0x126317a0 */
  push32(0x1262e120u); f_126317a0();
  /* 1262e120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e123 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e126 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e128 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e12b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e12e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e131 push edx */
  push32((uint32_t)(EDX));
  /* 1262e132 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1262e134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e137 push eax */
  push32((uint32_t)(EAX));
  /* 1262e138 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e13a call 0x126317a0 */
  push32(0x1262e13fu); f_126317a0();
  /* 1262e13f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e142 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e145 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e147 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e14a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e14d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e150 push edx */
  push32((uint32_t)(EDX));
  /* 1262e151 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1262e153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e156 push eax */
  push32((uint32_t)(EAX));
  /* 1262e157 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e159 call 0x126317a0 */
  push32(0x1262e15eu); f_126317a0();
  /* 1262e15e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e161 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e164 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e166 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e169 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e16c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e16f push edx */
  push32((uint32_t)(EDX));
  /* 1262e170 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1262e172 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e175 push eax */
  push32((uint32_t)(EAX));
  /* 1262e176 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e178 call 0x126317a0 */
  push32(0x1262e17du); f_126317a0();
  /* 1262e17d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e180 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e183 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e185 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e18b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e18e push edx */
  push32((uint32_t)(EDX));
  /* 1262e18f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1262e191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e194 push eax */
  push32((uint32_t)(EAX));
  /* 1262e195 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e197 call 0x126317a0 */
  push32(0x1262e19cu); f_126317a0();
  /* 1262e19c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e19f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e1a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e1a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e1a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e1aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e1ad push edx */
  push32((uint32_t)(EDX));
  /* 1262e1ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1262e1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e1b3 push eax */
  push32((uint32_t)(EAX));
  /* 1262e1b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e1b6 call 0x126317a0 */
  push32(0x1262e1bbu); f_126317a0();
  /* 1262e1bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e1be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e1c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e1c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e1c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e1c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e1cc push edx */
  push32((uint32_t)(EDX));
  /* 1262e1cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1262e1cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e1d2 push eax */
  push32((uint32_t)(EAX));
  /* 1262e1d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e1d5 call 0x126317a0 */
  push32(0x1262e1dau); f_126317a0();
  /* 1262e1da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e1dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e1e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e1e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e1e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e1e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e1eb push edx */
  push32((uint32_t)(EDX));
  /* 1262e1ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1262e1ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e1f1 push eax */
  push32((uint32_t)(EAX));
  /* 1262e1f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e1f4 call 0x126317a0 */
  push32(0x1262e1f9u); f_126317a0();
  /* 1262e1f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e1fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e1ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e201 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e207 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e20a push edx */
  push32((uint32_t)(EDX));
  /* 1262e20b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1262e20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e210 push eax */
  push32((uint32_t)(EAX));
  /* 1262e211 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e213 call 0x126317a0 */
  push32(0x1262e218u); f_126317a0();
  /* 1262e218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e21b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e21e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e220 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e226 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e229 push edx */
  push32((uint32_t)(EDX));
  /* 1262e22a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1262e22c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e22f push eax */
  push32((uint32_t)(EAX));
  /* 1262e230 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e232 call 0x126317a0 */
  push32(0x1262e237u); f_126317a0();
  /* 1262e237 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e23a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e23d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e23f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e242 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e245 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e248 push edx */
  push32((uint32_t)(EDX));
  /* 1262e249 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1262e24b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e24e push eax */
  push32((uint32_t)(EAX));
  /* 1262e24f push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e251 call 0x126317a0 */
  push32(0x1262e256u); f_126317a0();
  /* 1262e256 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e259 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e25c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e25e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e261 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e264 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e267 push edx */
  push32((uint32_t)(EDX));
  /* 1262e268 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1262e26a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e26d push eax */
  push32((uint32_t)(EAX));
  /* 1262e26e push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e270 call 0x126317a0 */
  push32(0x1262e275u); f_126317a0();
  /* 1262e275 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e278 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e27b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e27d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e280 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e283 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e286 push edx */
  push32((uint32_t)(EDX));
  /* 1262e287 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1262e289 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e28c push eax */
  push32((uint32_t)(EAX));
  /* 1262e28d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e28f call 0x126317a0 */
  push32(0x1262e294u); f_126317a0();
  /* 1262e294 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e297 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e29a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e29c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e29f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e2a2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e2a8 push edx */
  push32((uint32_t)(EDX));
  /* 1262e2a9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1262e2ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e2ae push eax */
  push32((uint32_t)(EAX));
  /* 1262e2af push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e2b1 call 0x126317a0 */
  push32(0x1262e2b6u); f_126317a0();
  /* 1262e2b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e2b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e2bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e2be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e2c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e2c4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e2ca push edx */
  push32((uint32_t)(EDX));
  /* 1262e2cb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1262e2cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e2d0 push eax */
  push32((uint32_t)(EAX));
  /* 1262e2d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e2d3 call 0x126317a0 */
  push32(0x1262e2d8u); f_126317a0();
  /* 1262e2d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e2db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e2de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e2e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e2e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e2e6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e2ec push edx */
  push32((uint32_t)(EDX));
  /* 1262e2ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1262e2ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e2f2 push eax */
  push32((uint32_t)(EAX));
  /* 1262e2f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e2f5 call 0x126317a0 */
  push32(0x1262e2fau); f_126317a0();
  /* 1262e2fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e2fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e300 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e302 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e308 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e30e push edx */
  push32((uint32_t)(EDX));
  /* 1262e30f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1262e311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e314 push eax */
  push32((uint32_t)(EAX));
  /* 1262e315 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e317 call 0x126317a0 */
  push32(0x1262e31cu); f_126317a0();
  /* 1262e31c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e31f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e322 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e324 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e32a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e330 push edx */
  push32((uint32_t)(EDX));
  /* 1262e331 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1262e333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e336 push eax */
  push32((uint32_t)(EAX));
  /* 1262e337 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e339 call 0x126317a0 */
  push32(0x1262e33eu); f_126317a0();
  /* 1262e33e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e341 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e344 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e346 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e34c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e352 push edx */
  push32((uint32_t)(EDX));
  /* 1262e353 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1262e355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e358 push eax */
  push32((uint32_t)(EAX));
  /* 1262e359 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e35b call 0x126317a0 */
  push32(0x1262e360u); f_126317a0();
  /* 1262e360 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e363 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e366 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e368 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e36b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e36e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e374 push edx */
  push32((uint32_t)(EDX));
  /* 1262e375 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1262e377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e37a push eax */
  push32((uint32_t)(EAX));
  /* 1262e37b push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e37d call 0x126317a0 */
  push32(0x1262e382u); f_126317a0();
  /* 1262e382 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e385 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e388 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e38a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e38d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e390 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e396 push edx */
  push32((uint32_t)(EDX));
  /* 1262e397 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1262e399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e39c push eax */
  push32((uint32_t)(EAX));
  /* 1262e39d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e39f call 0x126317a0 */
  push32(0x1262e3a4u); f_126317a0();
  /* 1262e3a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e3a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e3aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e3ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e3af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e3b2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e3b8 push edx */
  push32((uint32_t)(EDX));
  /* 1262e3b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1262e3bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262e3be push eax */
  push32((uint32_t)(EAX));
  /* 1262e3bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e3c1 call 0x126317a0 */
  push32(0x1262e3c6u); f_126317a0();
  /* 1262e3c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e3c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e3cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e3ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e3d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e3d4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e3da push edx */
  push32((uint32_t)(EDX));
  /* 1262e3db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1262e3dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262e3e0 push eax */
  push32((uint32_t)(EAX));
  /* 1262e3e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e3e3 call 0x126317a0 */
  push32(0x1262e3e8u); f_126317a0();
  /* 1262e3e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e3eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e3ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e3f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e3f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e3f6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e3fc push edx */
  push32((uint32_t)(EDX));
  /* 1262e3fd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1262e402 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262e405 push eax */
  push32((uint32_t)(EAX));
  /* 1262e406 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e408 call 0x126317a0 */
  push32(0x1262e40du); f_126317a0();
  /* 1262e40d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e410 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262e413 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e415 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262e418 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1262e41b:;
  /* 1262e41b mov esp, ebp */
  ESP = (EBP);
  /* 1262e41d pop ebp */
  EBP = (pop32());
  /* 1262e41e ret  */
  ESPCHK(0x1262de90u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1262e420 (779 bytes, 265 insns) */
void f_1262e420(void) {
  FTRACE(0x1262e420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262e420 push ebp */
  push32((uint32_t)(EBP));
  /* 1262e421 mov ebp, esp */
  EBP = (ESP);
  /* 1262e423 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e427 jne 0x1262e42e */
  if (!C.zf) goto L_1262e42e;
  /* 1262e429 jmp 0x1262e729 */
  goto L_1262e729;
L_1262e42e:;
  /* 1262e42e push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e433 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1262e436 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e437 call 0x12624070 */
  push32(0x1262e43cu); f_12624070();
  /* 1262e43c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e43f push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e444 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1262e447 push eax */
  push32((uint32_t)(EAX));
  /* 1262e448 call 0x12624070 */
  push32(0x1262e44du); f_12624070();
  /* 1262e44d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e450 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e455 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262e458 push edx */
  push32((uint32_t)(EDX));
  /* 1262e459 call 0x12624070 */
  push32(0x1262e45eu); f_12624070();
  /* 1262e45e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e461 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e466 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1262e469 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e46a call 0x12624070 */
  push32(0x1262e46fu); f_12624070();
  /* 1262e46f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e472 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e477 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1262e47a push eax */
  push32((uint32_t)(EAX));
  /* 1262e47b call 0x12624070 */
  push32(0x1262e480u); f_12624070();
  /* 1262e480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e483 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e485 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e488 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1262e48b push edx */
  push32((uint32_t)(EDX));
  /* 1262e48c call 0x12624070 */
  push32(0x1262e491u); f_12624070();
  /* 1262e491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e494 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e499 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262e49b push ecx */
  push32((uint32_t)(ECX));
  /* 1262e49c call 0x12624070 */
  push32(0x1262e4a1u); f_12624070();
  /* 1262e4a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e4a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e4a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e4a9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1262e4ac push eax */
  push32((uint32_t)(EAX));
  /* 1262e4ad call 0x12624070 */
  push32(0x1262e4b2u); f_12624070();
  /* 1262e4b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e4b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e4b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e4ba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1262e4bd push edx */
  push32((uint32_t)(EDX));
  /* 1262e4be call 0x12624070 */
  push32(0x1262e4c3u); f_12624070();
  /* 1262e4c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e4c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e4cb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1262e4ce push ecx */
  push32((uint32_t)(ECX));
  /* 1262e4cf call 0x12624070 */
  push32(0x1262e4d4u); f_12624070();
  /* 1262e4d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e4d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e4d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e4dc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1262e4df push eax */
  push32((uint32_t)(EAX));
  /* 1262e4e0 call 0x12624070 */
  push32(0x1262e4e5u); f_12624070();
  /* 1262e4e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e4e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e4ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e4ed mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1262e4f0 push edx */
  push32((uint32_t)(EDX));
  /* 1262e4f1 call 0x12624070 */
  push32(0x1262e4f6u); f_12624070();
  /* 1262e4f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e4f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e4fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e4fe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1262e501 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e502 call 0x12624070 */
  push32(0x1262e507u); f_12624070();
  /* 1262e507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e50a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e50c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e50f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1262e512 push eax */
  push32((uint32_t)(EAX));
  /* 1262e513 call 0x12624070 */
  push32(0x1262e518u); f_12624070();
  /* 1262e518 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e51b push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e51d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e520 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1262e523 push edx */
  push32((uint32_t)(EDX));
  /* 1262e524 call 0x12624070 */
  push32(0x1262e529u); f_12624070();
  /* 1262e529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e52c push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e52e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e531 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1262e534 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e535 call 0x12624070 */
  push32(0x1262e53au); f_12624070();
  /* 1262e53a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e53d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e53f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e542 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1262e545 push eax */
  push32((uint32_t)(EAX));
  /* 1262e546 call 0x12624070 */
  push32(0x1262e54bu); f_12624070();
  /* 1262e54b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e54e push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e553 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1262e556 push edx */
  push32((uint32_t)(EDX));
  /* 1262e557 call 0x12624070 */
  push32(0x1262e55cu); f_12624070();
  /* 1262e55c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e55f push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e564 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1262e567 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e568 call 0x12624070 */
  push32(0x1262e56du); f_12624070();
  /* 1262e56d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e570 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e575 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1262e578 push eax */
  push32((uint32_t)(EAX));
  /* 1262e579 call 0x12624070 */
  push32(0x1262e57eu); f_12624070();
  /* 1262e57e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e581 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e586 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1262e589 push edx */
  push32((uint32_t)(EDX));
  /* 1262e58a call 0x12624070 */
  push32(0x1262e58fu); f_12624070();
  /* 1262e58f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e592 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e597 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1262e59a push ecx */
  push32((uint32_t)(ECX));
  /* 1262e59b call 0x12624070 */
  push32(0x1262e5a0u); f_12624070();
  /* 1262e5a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e5a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e5a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e5a8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1262e5ab push eax */
  push32((uint32_t)(EAX));
  /* 1262e5ac call 0x12624070 */
  push32(0x1262e5b1u); f_12624070();
  /* 1262e5b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e5b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e5b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e5b9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1262e5bc push edx */
  push32((uint32_t)(EDX));
  /* 1262e5bd call 0x12624070 */
  push32(0x1262e5c2u); f_12624070();
  /* 1262e5c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e5c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e5c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e5ca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1262e5cd push ecx */
  push32((uint32_t)(ECX));
  /* 1262e5ce call 0x12624070 */
  push32(0x1262e5d3u); f_12624070();
  /* 1262e5d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e5d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e5d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e5db mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1262e5de push eax */
  push32((uint32_t)(EAX));
  /* 1262e5df call 0x12624070 */
  push32(0x1262e5e4u); f_12624070();
  /* 1262e5e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e5e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e5e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e5ec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1262e5ef push edx */
  push32((uint32_t)(EDX));
  /* 1262e5f0 call 0x12624070 */
  push32(0x1262e5f5u); f_12624070();
  /* 1262e5f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e5f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e5fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e5fd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1262e600 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e601 call 0x12624070 */
  push32(0x1262e606u); f_12624070();
  /* 1262e606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e609 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e60b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e60e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1262e611 push eax */
  push32((uint32_t)(EAX));
  /* 1262e612 call 0x12624070 */
  push32(0x1262e617u); f_12624070();
  /* 1262e617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e61a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e61c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e61f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1262e622 push edx */
  push32((uint32_t)(EDX));
  /* 1262e623 call 0x12624070 */
  push32(0x1262e628u); f_12624070();
  /* 1262e628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e62b push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e62d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e630 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1262e633 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e634 call 0x12624070 */
  push32(0x1262e639u); f_12624070();
  /* 1262e639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e63c push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e63e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e641 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1262e644 push eax */
  push32((uint32_t)(EAX));
  /* 1262e645 call 0x12624070 */
  push32(0x1262e64au); f_12624070();
  /* 1262e64a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e64d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e64f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e652 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1262e658 push edx */
  push32((uint32_t)(EDX));
  /* 1262e659 call 0x12624070 */
  push32(0x1262e65eu); f_12624070();
  /* 1262e65e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e661 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e666 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1262e66c push ecx */
  push32((uint32_t)(ECX));
  /* 1262e66d call 0x12624070 */
  push32(0x1262e672u); f_12624070();
  /* 1262e672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e675 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e677 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e67a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1262e680 push eax */
  push32((uint32_t)(EAX));
  /* 1262e681 call 0x12624070 */
  push32(0x1262e686u); f_12624070();
  /* 1262e686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e689 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e68b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e68e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1262e694 push edx */
  push32((uint32_t)(EDX));
  /* 1262e695 call 0x12624070 */
  push32(0x1262e69au); f_12624070();
  /* 1262e69a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e69d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e69f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e6a2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1262e6a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e6a9 call 0x12624070 */
  push32(0x1262e6aeu); f_12624070();
  /* 1262e6ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e6b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e6b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e6b6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1262e6bc push eax */
  push32((uint32_t)(EAX));
  /* 1262e6bd call 0x12624070 */
  push32(0x1262e6c2u); f_12624070();
  /* 1262e6c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e6c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e6c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e6ca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1262e6d0 push edx */
  push32((uint32_t)(EDX));
  /* 1262e6d1 call 0x12624070 */
  push32(0x1262e6d6u); f_12624070();
  /* 1262e6d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e6d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e6db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e6de mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1262e6e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e6e5 call 0x12624070 */
  push32(0x1262e6eau); f_12624070();
  /* 1262e6ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e6ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e6ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e6f2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1262e6f8 push eax */
  push32((uint32_t)(EAX));
  /* 1262e6f9 call 0x12624070 */
  push32(0x1262e6feu); f_12624070();
  /* 1262e6fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e701 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e706 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1262e70c push edx */
  push32((uint32_t)(EDX));
  /* 1262e70d call 0x12624070 */
  push32(0x1262e712u); f_12624070();
  /* 1262e712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e715 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e717 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e71a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1262e720 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e721 call 0x12624070 */
  push32(0x1262e726u); f_12624070();
  /* 1262e726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262e729:;
  /* 1262e729 pop ebp */
  EBP = (pop32());
  /* 1262e72a ret  */
  ESPCHK(0x1262e420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e730 @ 0x1262e730 (678 bytes, 180 insns) */
void f_1262e730(void) {
  FTRACE(0x1262e730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262e730 push ebp */
  push32((uint32_t)(EBP));
  /* 1262e731 mov ebp, esp */
  EBP = (ESP);
  /* 1262e733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262e736 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262e73d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262e73f mov ax, word ptr [0x1264f772] */
  AX = (r16((uint32_t)(0x1264f772)));
  /* 1262e745 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262e748 cmp dword ptr [0x1264f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e74f je 0x1262e8aa */
  if (C.zf) goto L_1262e8aa;
  /* 1262e755 push 0x1264f740 */
  push32((uint32_t)(0x1264f740u));
  /* 1262e75a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1262e75c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e75f push ecx */
  push32((uint32_t)(ECX));
  /* 1262e760 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e762 call 0x126317a0 */
  push32(0x1262e767u); f_126317a0();
  /* 1262e767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e76a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262e76d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1262e76f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1262e772 push 0x1264f744 */
  push32((uint32_t)(0x1264f744u));
  /* 1262e777 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1262e779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e77c push eax */
  push32((uint32_t)(EAX));
  /* 1262e77d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e77f call 0x126317a0 */
  push32(0x1262e784u); f_126317a0();
  /* 1262e784 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e787 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262e78a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e78c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262e78f push 0x1264f748 */
  push32((uint32_t)(0x1264f748u));
  /* 1262e794 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1262e796 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262e799 push edx */
  push32((uint32_t)(EDX));
  /* 1262e79a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262e79c call 0x126317a0 */
  push32(0x1262e7a1u); f_126317a0();
  /* 1262e7a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e7a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262e7a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262e7a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262e7ac mov edx, dword ptr [0x1264f748] */
  EDX = (r32((uint32_t)(0x1264f748)));
  /* 1262e7b2 push edx */
  push32((uint32_t)(EDX));
  /* 1262e7b3 call 0x1262e9e0 */
  push32(0x1262e7b8u); f_1262e9e0();
  /* 1262e7b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e7bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e7bf je 0x1262e819 */
  if (C.zf) goto L_1262e819;
  /* 1262e7c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e7c3 mov eax, dword ptr [0x1264f740] */
  EAX = (r32((uint32_t)(0x1264f740)));
  /* 1262e7c8 push eax */
  push32((uint32_t)(EAX));
  /* 1262e7c9 call 0x12624070 */
  push32(0x1262e7ceu); f_12624070();
  /* 1262e7ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e7d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e7d3 mov ecx, dword ptr [0x1264f744] */
  ECX = (r32((uint32_t)(0x1264f744)));
  /* 1262e7d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e7da call 0x12624070 */
  push32(0x1262e7dfu); f_12624070();
  /* 1262e7df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e7e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e7e4 mov edx, dword ptr [0x1264f748] */
  EDX = (r32((uint32_t)(0x1264f748)));
  /* 1262e7ea push edx */
  push32((uint32_t)(EDX));
  /* 1262e7eb call 0x12624070 */
  push32(0x1262e7f0u); f_12624070();
  /* 1262e7f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e7f3 mov dword ptr [0x1264f740], 0 */
  w32((uint32_t)(0x1264f740), (0x0u));
  /* 1262e7fd mov dword ptr [0x1264f744], 0 */
  w32((uint32_t)(0x1264f744), (0x0u));
  /* 1262e807 mov dword ptr [0x1264f748], 0 */
  w32((uint32_t)(0x1264f748), (0x0u));
  /* 1262e811 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262e814 jmp 0x1262e9d2 */
  goto L_1262e9d2;
L_1262e819:;
  /* 1262e819 mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e81e cmp dword ptr [eax], 0x1264ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1264ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e824 je 0x1262e860 */
  if (C.zf) goto L_1262e860;
  /* 1262e826 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e828 mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e82e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262e830 push edx */
  push32((uint32_t)(EDX));
  /* 1262e831 call 0x12624070 */
  push32(0x1262e836u); f_12624070();
  /* 1262e836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e839 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e83b mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e840 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1262e843 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e844 call 0x12624070 */
  push32(0x1262e849u); f_12624070();
  /* 1262e849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e84c push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e84e mov edx, dword ptr [0x1264ed88] */
  EDX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e854 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1262e857 push eax */
  push32((uint32_t)(EAX));
  /* 1262e858 call 0x12624070 */
  push32(0x1262e85du); f_12624070();
  /* 1262e85d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262e860:;
  /* 1262e860 mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e866 mov edx, dword ptr [0x1264f740] */
  EDX = (r32((uint32_t)(0x1264f740)));
  /* 1262e86c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1262e86e mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e873 mov ecx, dword ptr [0x1264f744] */
  ECX = (r32((uint32_t)(0x1264f744)));
  /* 1262e879 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1262e87c mov edx, dword ptr [0x1264ed88] */
  EDX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e882 mov eax, dword ptr [0x1264f748] */
  EAX = (r32((uint32_t)(0x1264f748)));
  /* 1262e887 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1262e88a mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e890 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262e892 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262e894 mov byte ptr [0x1264dea8], al */
  w8((uint32_t)(0x1264dea8), (AL));
  /* 1262e899 mov dword ptr [0x1264deac], 1 */
  w32((uint32_t)(0x1264deac), (0x1u));
  /* 1262e8a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262e8a5 jmp 0x1262e9d2 */
  goto L_1262e9d2;
L_1262e8aa:;
  /* 1262e8aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e8ac mov ecx, dword ptr [0x1264f740] */
  ECX = (r32((uint32_t)(0x1264f740)));
  /* 1262e8b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e8b3 call 0x12624070 */
  push32(0x1262e8b8u); f_12624070();
  /* 1262e8b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e8bb push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e8bd mov edx, dword ptr [0x1264f744] */
  EDX = (r32((uint32_t)(0x1264f744)));
  /* 1262e8c3 push edx */
  push32((uint32_t)(EDX));
  /* 1262e8c4 call 0x12624070 */
  push32(0x1262e8c9u); f_12624070();
  /* 1262e8c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e8cc push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e8ce mov eax, dword ptr [0x1264f748] */
  EAX = (r32((uint32_t)(0x1264f748)));
  /* 1262e8d3 push eax */
  push32((uint32_t)(EAX));
  /* 1262e8d4 call 0x12624070 */
  push32(0x1262e8d9u); f_12624070();
  /* 1262e8d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e8dc mov dword ptr [0x1264f740], 0 */
  w32((uint32_t)(0x1264f740), (0x0u));
  /* 1262e8e6 mov dword ptr [0x1264f744], 0 */
  w32((uint32_t)(0x1264f744), (0x0u));
  /* 1262e8f0 mov dword ptr [0x1264f748], 0 */
  w32((uint32_t)(0x1264f748), (0x0u));
  /* 1262e8fa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1262e8ff push 0x1264b114 */
  push32((uint32_t)(0x1264b114u));
  /* 1262e904 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e906 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e908 call 0x126235e0 */
  push32(0x1262e90du); f_126235e0();
  /* 1262e90d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e910 mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e916 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1262e918 mov edx, dword ptr [0x1264ed88] */
  EDX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e91e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e921 jne 0x1262e92b */
  if (!C.zf) goto L_1262e92b;
  /* 1262e923 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262e926 jmp 0x1262e9d2 */
  goto L_1262e9d2;
L_1262e92b:;
  /* 1262e92b push 0x1264b0e4 */
  push32((uint32_t)(0x1264b0e4u));
  /* 1262e930 mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e935 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262e937 push ecx */
  push32((uint32_t)(ECX));
  /* 1262e938 call 0x12626590 */
  push32(0x1262e93du); f_12626590();
  /* 1262e93d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e940 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1262e945 push 0x1264b114 */
  push32((uint32_t)(0x1264b114u));
  /* 1262e94a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e94c push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e94e call 0x126235e0 */
  push32(0x1262e953u); f_126235e0();
  /* 1262e953 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e956 mov edx, dword ptr [0x1264ed88] */
  EDX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e95c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1262e95f mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e964 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e968 jne 0x1262e96f */
  if (!C.zf) goto L_1262e96f;
  /* 1262e96a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262e96d jmp 0x1262e9d2 */
  goto L_1262e9d2;
L_1262e96f:;
  /* 1262e96f mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e975 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1262e978 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1262e97b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1262e980 push 0x1264b114 */
  push32((uint32_t)(0x1264b114u));
  /* 1262e985 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e987 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262e989 call 0x126235e0 */
  push32(0x1262e98eu); f_126235e0();
  /* 1262e98e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262e991 mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e997 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1262e99a mov edx, dword ptr [0x1264ed88] */
  EDX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e9a0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e9a4 jne 0x1262e9ab */
  if (!C.zf) goto L_1262e9ab;
  /* 1262e9a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262e9a9 jmp 0x1262e9d2 */
  goto L_1262e9d2;
L_1262e9ab:;
  /* 1262e9ab mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e9b0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1262e9b3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1262e9b6 mov edx, dword ptr [0x1264ed88] */
  EDX = (r32((uint32_t)(0x1264ed88)));
  /* 1262e9bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1262e9be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1262e9c0 mov byte ptr [0x1264dea8], cl */
  w8((uint32_t)(0x1264dea8), (CL));
  /* 1262e9c6 mov dword ptr [0x1264deac], 1 */
  w32((uint32_t)(0x1264deac), (0x1u));
  /* 1262e9d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262e9d2:;
  /* 1262e9d2 mov esp, ebp */
  ESP = (EBP);
  /* 1262e9d4 pop ebp */
  EBP = (pop32());
  /* 1262e9d5 ret  */
  ESPCHK(0x1262e730u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1262e9e0 (125 bytes, 49 insns) */
void f_1262e9e0(void) {
  FTRACE(0x1262e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1262e9e3 push ecx */
  push32((uint32_t)(ECX));
L_1262e9e4:;
  /* 1262e9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e9e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262e9ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262e9ec je 0x1262ea59 */
  if (C.zf) goto L_1262ea59;
  /* 1262e9ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e9f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262e9f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262e9f7 jl 0x1262ea1d */
  if ((C.sf!=C.of)) goto L_1262ea1d;
  /* 1262e9f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262e9fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262e9ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ea02 jg 0x1262ea1d */
  if ((!C.zf&&C.sf==C.of)) goto L_1262ea1d;
  /* 1262ea04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ea07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262ea0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262ea0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ea10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1262ea12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ea15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ea18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1262ea1b jmp 0x1262ea57 */
  goto L_1262ea57;
L_1262ea1d:;
  /* 1262ea1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ea20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262ea23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ea26 jne 0x1262ea4e */
  if (!C.zf) goto L_1262ea4e;
  /* 1262ea28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ea2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262ea2e:;
  /* 1262ea2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ea31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ea34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1262ea37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1262ea39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ea3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ea3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262ea42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ea45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262ea48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ea4a jne 0x1262ea2e */
  if (!C.zf) goto L_1262ea2e;
  /* 1262ea4c jmp 0x1262ea57 */
  goto L_1262ea57;
L_1262ea4e:;
  /* 1262ea4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ea51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ea54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1262ea57:;
  /* 1262ea57 jmp 0x1262e9e4 */
  goto L_1262e9e4;
L_1262ea59:;
  /* 1262ea59 mov esp, ebp */
  ESP = (EBP);
  /* 1262ea5b pop ebp */
  EBP = (pop32());
  /* 1262ea5c ret  */
  ESPCHK(0x1262e9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x1262ea60 (304 bytes, 85 insns) */
void f_1262ea60(void) {
  FTRACE(0x1262ea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262ea60 push ebp */
  push32((uint32_t)(EBP));
  /* 1262ea61 mov ebp, esp */
  EBP = (ESP);
  /* 1262ea63 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ea64 cmp dword ptr [0x1264f714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ea6b je 0x1262eb2c */
  if (C.zf) goto L_1262eb2c;
  /* 1262ea71 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1262ea73 push 0x1264b120 */
  push32((uint32_t)(0x1264b120u));
  /* 1262ea78 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ea7a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1262ea7c push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ea7e call 0x126239f0 */
  push32(0x1262ea83u); f_126239f0();
  /* 1262ea83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ea86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262ea89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ea8d jne 0x1262ea99 */
  if (!C.zf) goto L_1262ea99;
  /* 1262ea8f mov eax, 1 */
  EAX = (0x1u);
  /* 1262ea94 jmp 0x1262eb8c */
  goto L_1262eb8c;
L_1262ea99:;
  /* 1262ea99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ea9c push eax */
  push32((uint32_t)(EAX));
  /* 1262ea9d call 0x1262eb90 */
  push32(0x1262eaa2u); f_1262eb90();
  /* 1262eaa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eaa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262eaa7 je 0x1262eacd */
  if (C.zf) goto L_1262eacd;
  /* 1262eaa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262eaac push ecx */
  push32((uint32_t)(ECX));
  /* 1262eaad call 0x1262ee20 */
  push32(0x1262eab2u); f_1262ee20();
  /* 1262eab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262eab7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262eaba push edx */
  push32((uint32_t)(EDX));
  /* 1262eabb call 0x12624070 */
  push32(0x1262eac0u); f_12624070();
  /* 1262eac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eac3 mov eax, 1 */
  EAX = (0x1u);
  /* 1262eac8 jmp 0x1262eb8c */
  goto L_1262eb8c;
L_1262eacd:;
  /* 1262eacd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ead0 mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262ead6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262ead8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1262eada mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262eadd mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262eae3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1262eae6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1262eae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262eaec mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262eaf2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1262eaf5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1262eaf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262eafb mov dword ptr [0x1264ed88], eax */
  w32((uint32_t)(0x1264ed88), (EAX));
  /* 1262eb00 mov ecx, dword ptr [0x1264f74c] */
  ECX = (r32((uint32_t)(0x1264f74c)));
  /* 1262eb06 push ecx */
  push32((uint32_t)(ECX));
  /* 1262eb07 call 0x1262ee20 */
  push32(0x1262eb0cu); f_1262ee20();
  /* 1262eb0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eb0f push 2 */
  push32((uint32_t)(0x2u));
  /* 1262eb11 mov edx, dword ptr [0x1264f74c] */
  EDX = (r32((uint32_t)(0x1264f74c)));
  /* 1262eb17 push edx */
  push32((uint32_t)(EDX));
  /* 1262eb18 call 0x12624070 */
  push32(0x1262eb1du); f_12624070();
  /* 1262eb1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eb20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262eb23 mov dword ptr [0x1264f74c], eax */
  w32((uint32_t)(0x1264f74c), (EAX));
  /* 1262eb28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262eb2a jmp 0x1262eb8c */
  goto L_1262eb8c;
L_1262eb2c:;
  /* 1262eb2c mov ecx, dword ptr [0x1264ed88] */
  ECX = (r32((uint32_t)(0x1264ed88)));
  /* 1262eb32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262eb34 mov dword ptr [0x1264ed58], edx */
  w32((uint32_t)(0x1264ed58), (EDX));
  /* 1262eb3a mov eax, dword ptr [0x1264ed88] */
  EAX = (r32((uint32_t)(0x1264ed88)));
  /* 1262eb3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1262eb42 mov dword ptr [0x1264ed5c], ecx */
  w32((uint32_t)(0x1264ed5c), (ECX));
  /* 1262eb48 mov edx, dword ptr [0x1264ed88] */
  EDX = (r32((uint32_t)(0x1264ed88)));
  /* 1262eb4e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1262eb51 mov dword ptr [0x1264ed60], eax */
  w32((uint32_t)(0x1264ed60), (EAX));
  /* 1262eb56 mov dword ptr [0x1264ed88], 0x1264ed58 */
  w32((uint32_t)(0x1264ed88), (0x1264ed58u));
  /* 1262eb60 mov ecx, dword ptr [0x1264f74c] */
  ECX = (r32((uint32_t)(0x1264f74c)));
  /* 1262eb66 push ecx */
  push32((uint32_t)(ECX));
  /* 1262eb67 call 0x1262ee20 */
  push32(0x1262eb6cu); f_1262ee20();
  /* 1262eb6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eb6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1262eb71 mov edx, dword ptr [0x1264f74c] */
  EDX = (r32((uint32_t)(0x1264f74c)));
  /* 1262eb77 push edx */
  push32((uint32_t)(EDX));
  /* 1262eb78 call 0x12624070 */
  push32(0x1262eb7du); f_12624070();
  /* 1262eb7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eb80 mov dword ptr [0x1264f74c], 0 */
  w32((uint32_t)(0x1264f74c), (0x0u));
  /* 1262eb8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262eb8c:;
  /* 1262eb8c mov esp, ebp */
  ESP = (EBP);
  /* 1262eb8e pop ebp */
  EBP = (pop32());
  /* 1262eb8f ret  */
  ESPCHK(0x1262ea60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x1262eb90 (525 bytes, 200 insns) */
void f_1262eb90(void) {
  FTRACE(0x1262eb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262eb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1262eb91 mov ebp, esp */
  EBP = (ESP);
  /* 1262eb93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262eb96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262eb9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262eb9f mov ax, word ptr [0x1264f76c] */
  AX = (r16((uint32_t)(0x1264f76c)));
  /* 1262eba5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262eba8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ebac jne 0x1262ebb6 */
  if (!C.zf) goto L_1262ebb6;
  /* 1262ebae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262ebb1 jmp 0x1262ed99 */
  goto L_1262ed99;
L_1262ebb6:;
  /* 1262ebb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ebb9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ebbc push ecx */
  push32((uint32_t)(ECX));
  /* 1262ebbd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1262ebbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ebc2 push edx */
  push32((uint32_t)(EDX));
  /* 1262ebc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ebc5 call 0x126317a0 */
  push32(0x1262ebcau); f_126317a0();
  /* 1262ebca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ebcd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ebd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ebd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ebd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ebd8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ebdb push edx */
  push32((uint32_t)(EDX));
  /* 1262ebdc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1262ebde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ebe1 push eax */
  push32((uint32_t)(EAX));
  /* 1262ebe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ebe4 call 0x126317a0 */
  push32(0x1262ebe9u); f_126317a0();
  /* 1262ebe9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ebec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ebef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ebf1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ebf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ebf7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ebfa push edx */
  push32((uint32_t)(EDX));
  /* 1262ebfb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1262ebfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ec00 push eax */
  push32((uint32_t)(EAX));
  /* 1262ec01 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ec03 call 0x126317a0 */
  push32(0x1262ec08u); f_126317a0();
  /* 1262ec08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ec0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ec10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ec13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ec16 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec19 push edx */
  push32((uint32_t)(EDX));
  /* 1262ec1a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1262ec1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ec1f push eax */
  push32((uint32_t)(EAX));
  /* 1262ec20 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ec22 call 0x126317a0 */
  push32(0x1262ec27u); f_126317a0();
  /* 1262ec27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ec2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ec2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ec32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ec35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec38 push edx */
  push32((uint32_t)(EDX));
  /* 1262ec39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1262ec3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ec3e push eax */
  push32((uint32_t)(EAX));
  /* 1262ec3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ec41 call 0x126317a0 */
  push32(0x1262ec46u); f_126317a0();
  /* 1262ec46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ec4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ec4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ec51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ec54 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1262ec57 push eax */
  push32((uint32_t)(EAX));
  /* 1262ec58 call 0x1262eda0 */
  push32(0x1262ec5du); f_1262eda0();
  /* 1262ec5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ec63 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec66 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ec67 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1262ec69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ec6c push edx */
  push32((uint32_t)(EDX));
  /* 1262ec6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ec6f call 0x126317a0 */
  push32(0x1262ec74u); f_126317a0();
  /* 1262ec74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ec7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ec7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ec7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ec82 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec85 push edx */
  push32((uint32_t)(EDX));
  /* 1262ec86 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1262ec88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ec8b push eax */
  push32((uint32_t)(EAX));
  /* 1262ec8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1262ec8e call 0x126317a0 */
  push32(0x1262ec93u); f_126317a0();
  /* 1262ec93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ec96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ec99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ec9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ec9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262eca1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eca4 push edx */
  push32((uint32_t)(EDX));
  /* 1262eca5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1262eca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ecaa push eax */
  push32((uint32_t)(EAX));
  /* 1262ecab push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ecad call 0x126317a0 */
  push32(0x1262ecb2u); f_126317a0();
  /* 1262ecb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ecb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ecb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ecba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ecbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ecc0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ecc3 push edx */
  push32((uint32_t)(EDX));
  /* 1262ecc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1262ecc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ecc9 push eax */
  push32((uint32_t)(EAX));
  /* 1262ecca push 0 */
  push32((uint32_t)(0x0u));
  /* 1262eccc call 0x126317a0 */
  push32(0x1262ecd1u); f_126317a0();
  /* 1262ecd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ecd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ecd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ecd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ecdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ecdf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ece2 push edx */
  push32((uint32_t)(EDX));
  /* 1262ece3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1262ece5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ece8 push eax */
  push32((uint32_t)(EAX));
  /* 1262ece9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262eceb call 0x126317a0 */
  push32(0x1262ecf0u); f_126317a0();
  /* 1262ecf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ecf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ecf6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ecf8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ecfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ecfe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed01 push edx */
  push32((uint32_t)(EDX));
  /* 1262ed02 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1262ed04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ed07 push eax */
  push32((uint32_t)(EAX));
  /* 1262ed08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ed0a call 0x126317a0 */
  push32(0x1262ed0fu); f_126317a0();
  /* 1262ed0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ed15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ed17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ed1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ed1d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed20 push edx */
  push32((uint32_t)(EDX));
  /* 1262ed21 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1262ed23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ed26 push eax */
  push32((uint32_t)(EAX));
  /* 1262ed27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ed29 call 0x126317a0 */
  push32(0x1262ed2eu); f_126317a0();
  /* 1262ed2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ed34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ed36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ed39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ed3c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed3f push edx */
  push32((uint32_t)(EDX));
  /* 1262ed40 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1262ed42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ed45 push eax */
  push32((uint32_t)(EAX));
  /* 1262ed46 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ed48 call 0x126317a0 */
  push32(0x1262ed4du); f_126317a0();
  /* 1262ed4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ed53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ed55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ed58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ed5b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed5e push edx */
  push32((uint32_t)(EDX));
  /* 1262ed5f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1262ed61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ed64 push eax */
  push32((uint32_t)(EAX));
  /* 1262ed65 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ed67 call 0x126317a0 */
  push32(0x1262ed6cu); f_126317a0();
  /* 1262ed6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ed72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ed74 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ed77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ed7a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed7d push edx */
  push32((uint32_t)(EDX));
  /* 1262ed7e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1262ed80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ed83 push eax */
  push32((uint32_t)(EAX));
  /* 1262ed84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262ed86 call 0x126317a0 */
  push32(0x1262ed8bu); f_126317a0();
  /* 1262ed8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ed8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262ed91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1262ed93 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ed96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1262ed99:;
  /* 1262ed99 mov esp, ebp */
  ESP = (EBP);
  /* 1262ed9b pop ebp */
  EBP = (pop32());
  /* 1262ed9c ret  */
  ESPCHK(0x1262eb90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1262eda0 (125 bytes, 49 insns) */
void f_1262eda0(void) {
  FTRACE(0x1262eda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262eda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262eda1 mov ebp, esp */
  EBP = (ESP);
  /* 1262eda3 push ecx */
  push32((uint32_t)(ECX));
L_1262eda4:;
  /* 1262eda4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262eda7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262edaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262edac je 0x1262ee19 */
  if (C.zf) goto L_1262ee19;
  /* 1262edae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262edb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262edb4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262edb7 jl 0x1262eddd */
  if ((C.sf!=C.of)) goto L_1262eddd;
  /* 1262edb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262edbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262edbf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262edc2 jg 0x1262eddd */
  if ((!C.zf&&C.sf==C.of)) goto L_1262eddd;
  /* 1262edc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262edc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262edca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262edcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262edd0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1262edd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262edd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262edd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1262eddb jmp 0x1262ee17 */
  goto L_1262ee17;
L_1262eddd:;
  /* 1262eddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ede0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262ede3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ede6 jne 0x1262ee0e */
  if (!C.zf) goto L_1262ee0e;
  /* 1262ede8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262edeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262edee:;
  /* 1262edee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262edf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262edf4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1262edf7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1262edf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262edfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262edff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1262ee02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262ee05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262ee08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ee0a jne 0x1262edee */
  if (!C.zf) goto L_1262edee;
  /* 1262ee0c jmp 0x1262ee17 */
  goto L_1262ee17;
L_1262ee0e:;
  /* 1262ee0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ee14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1262ee17:;
  /* 1262ee17 jmp 0x1262eda4 */
  goto L_1262eda4;
L_1262ee19:;
  /* 1262ee19 mov esp, ebp */
  ESP = (EBP);
  /* 1262ee1b pop ebp */
  EBP = (pop32());
  /* 1262ee1c ret  */
  ESPCHK(0x1262eda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee20 @ 0x1262ee20 (147 bytes, 52 insns) */
void f_1262ee20(void) {
  FTRACE(0x1262ee20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262ee20 push ebp */
  push32((uint32_t)(EBP));
  /* 1262ee21 mov ebp, esp */
  EBP = (ESP);
  /* 1262ee23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ee27 jne 0x1262ee2e */
  if (!C.zf) goto L_1262ee2e;
  /* 1262ee29 jmp 0x1262eeb1 */
  goto L_1262eeb1;
L_1262ee2e:;
  /* 1262ee2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee31 cmp dword ptr [eax + 0xc], 0x1264f7a8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1264f7a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ee38 je 0x1262eeb1 */
  if (C.zf) goto L_1262eeb1;
  /* 1262ee3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ee3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1262ee42 push edx */
  push32((uint32_t)(EDX));
  /* 1262ee43 call 0x12624070 */
  push32(0x1262ee48u); f_12624070();
  /* 1262ee48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ee4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ee4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee50 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1262ee53 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ee54 call 0x12624070 */
  push32(0x1262ee59u); f_12624070();
  /* 1262ee59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ee5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ee5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee61 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1262ee64 push eax */
  push32((uint32_t)(EAX));
  /* 1262ee65 call 0x12624070 */
  push32(0x1262ee6au); f_12624070();
  /* 1262ee6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ee6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ee6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee72 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1262ee75 push edx */
  push32((uint32_t)(EDX));
  /* 1262ee76 call 0x12624070 */
  push32(0x1262ee7bu); f_12624070();
  /* 1262ee7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ee7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ee80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee83 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1262ee86 push ecx */
  push32((uint32_t)(ECX));
  /* 1262ee87 call 0x12624070 */
  push32(0x1262ee8cu); f_12624070();
  /* 1262ee8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ee8f push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ee91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ee94 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1262ee97 push eax */
  push32((uint32_t)(EAX));
  /* 1262ee98 call 0x12624070 */
  push32(0x1262ee9du); f_12624070();
  /* 1262ee9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262eea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262eea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262eea5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1262eea8 push edx */
  push32((uint32_t)(EDX));
  /* 1262eea9 call 0x12624070 */
  push32(0x1262eeaeu); f_12624070();
  /* 1262eeae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262eeb1:;
  /* 1262eeb1 pop ebp */
  EBP = (pop32());
  /* 1262eeb2 ret  */
  ESPCHK(0x1262ee20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eec0 @ 0x1262eec0 (928 bytes, 284 insns) */
void f_1262eec0(void) {
  FTRACE(0x1262eec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262eec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262eec1 mov ebp, esp */
  EBP = (ESP);
  /* 1262eec3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262eec6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1262eecd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1262eed4 cmp dword ptr [0x1264f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262eedb je 0x1262f211 */
  if (C.zf) goto L_1262f211;
  /* 1262eee1 cmp dword ptr [0x1264f720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262eee8 jne 0x1262ef10 */
  if (!C.zf) goto L_1262ef10;
  /* 1262eeea push 0x1264f720 */
  push32((uint32_t)(0x1264f720u));
  /* 1262eeef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1262eef4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262eef6 mov ax, word ptr [0x1264f764] */
  AX = (r16((uint32_t)(0x1264f764)));
  /* 1262eefc push eax */
  push32((uint32_t)(EAX));
  /* 1262eefd push 0 */
  push32((uint32_t)(0x0u));
  /* 1262eeff call 0x126317a0 */
  push32(0x1262ef04u); f_126317a0();
  /* 1262ef04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ef07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262ef09 je 0x1262ef10 */
  if (C.zf) goto L_1262ef10;
  /* 1262ef0b jmp 0x1262f1d2 */
  goto L_1262f1d2;
L_1262ef10:;
  /* 1262ef10 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1262ef12 push 0x1264b12c */
  push32((uint32_t)(0x1264b12cu));
  /* 1262ef17 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ef19 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1262ef1e call 0x126235e0 */
  push32(0x1262ef23u); f_126235e0();
  /* 1262ef23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ef26 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1262ef29 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1262ef2b push 0x1264b12c */
  push32((uint32_t)(0x1264b12cu));
  /* 1262ef30 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ef32 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1262ef37 call 0x126235e0 */
  push32(0x1262ef3cu); f_126235e0();
  /* 1262ef3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ef3f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1262ef42 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1262ef44 push 0x1264b12c */
  push32((uint32_t)(0x1264b12cu));
  /* 1262ef49 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ef4b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1262ef50 call 0x126235e0 */
  push32(0x1262ef55u); f_126235e0();
  /* 1262ef55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ef58 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1262ef5b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1262ef5d push 0x1264b12c */
  push32((uint32_t)(0x1264b12cu));
  /* 1262ef62 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262ef64 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1262ef69 call 0x126235e0 */
  push32(0x1262ef6eu); f_126235e0();
  /* 1262ef6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ef71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1262ef74 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ef78 je 0x1262ef8c */
  if (C.zf) goto L_1262ef8c;
  /* 1262ef7a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ef7e je 0x1262ef8c */
  if (C.zf) goto L_1262ef8c;
  /* 1262ef80 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ef84 je 0x1262ef8c */
  if (C.zf) goto L_1262ef8c;
  /* 1262ef86 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ef8a jne 0x1262ef91 */
  if (!C.zf) goto L_1262ef91;
L_1262ef8c:;
  /* 1262ef8c jmp 0x1262f1d2 */
  goto L_1262f1d2;
L_1262ef91:;
  /* 1262ef91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262ef94 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1262ef97 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1262ef9e jmp 0x1262efa9 */
  goto L_1262efa9;
L_1262efa0:;
  /* 1262efa0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262efa3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262efa6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1262efa9:;
  /* 1262efa9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262efb0 jge 0x1262efc5 */
  if ((C.sf==C.of)) goto L_1262efc5;
  /* 1262efb2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262efb5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1262efb8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1262efba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262efbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262efc0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1262efc3 jmp 0x1262efa0 */
  goto L_1262efa0;
L_1262efc5:;
  /* 1262efc5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1262efc8 push eax */
  push32((uint32_t)(EAX));
  /* 1262efc9 mov ecx, dword ptr [0x1264f720] */
  ECX = (r32((uint32_t)(0x1264f720)));
  /* 1262efcf push ecx */
  push32((uint32_t)(ECX));
  /* 1262efd0 call dword ptr [0x12652354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652354))), 0x1262efd6u);
  /* 1262efd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262efd8 jne 0x1262efdf */
  if (!C.zf) goto L_1262efdf;
  /* 1262efda jmp 0x1262f1d2 */
  goto L_1262f1d2;
L_1262efdf:;
  /* 1262efdf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262efe3 jbe 0x1262efea */
  if ((C.cf||C.zf)) goto L_1262efea;
  /* 1262efe5 jmp 0x1262f1d2 */
  goto L_1262f1d2;
L_1262efea:;
  /* 1262efea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262efed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262eff3 mov dword ptr [0x1264dea4], edx */
  w32((uint32_t)(0x1264dea4), (EDX));
  /* 1262eff9 cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f000 jle 0x1262f059 */
  if ((C.zf||C.sf!=C.of)) goto L_1262f059;
  /* 1262f002 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1262f005 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1262f008 jmp 0x1262f013 */
  goto L_1262f013;
L_1262f00a:;
  /* 1262f00a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f00d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f010 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1262f013:;
  /* 1262f013 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f018 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262f01a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f01c je 0x1262f059 */
  if (C.zf) goto L_1262f059;
  /* 1262f01e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f021 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262f023 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1262f026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262f028 je 0x1262f059 */
  if (C.zf) goto L_1262f059;
  /* 1262f02a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f02d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262f02f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1262f031 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1262f034 jmp 0x1262f03f */
  goto L_1262f03f;
L_1262f036:;
  /* 1262f036 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262f039 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f03c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1262f03f:;
  /* 1262f03f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f042 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262f044 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1262f047 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f04a jg 0x1262f057 */
  if ((!C.zf&&C.sf==C.of)) goto L_1262f057;
  /* 1262f04c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262f04f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f052 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1262f055 jmp 0x1262f036 */
  goto L_1262f036;
L_1262f057:;
  /* 1262f057 jmp 0x1262f00a */
  goto L_1262f00a;
L_1262f059:;
  /* 1262f059 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262f05b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262f05d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262f05f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262f062 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f065 push eax */
  push32((uint32_t)(EAX));
  /* 1262f066 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1262f06b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262f06e push ecx */
  push32((uint32_t)(ECX));
  /* 1262f06f push 1 */
  push32((uint32_t)(0x1u));
  /* 1262f071 call 0x1262b810 */
  push32(0x1262f076u); f_1262b810();
  /* 1262f076 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f07b jne 0x1262f082 */
  if (!C.zf) goto L_1262f082;
  /* 1262f07d jmp 0x1262f1d2 */
  goto L_1262f1d2;
L_1262f082:;
  /* 1262f082 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262f085 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1262f08a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262f08d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1262f090 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1262f097 jmp 0x1262f0a2 */
  goto L_1262f0a2;
L_1262f099:;
  /* 1262f099 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262f09c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f09f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1262f0a2:;
  /* 1262f0a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f0a9 jge 0x1262f0c0 */
  if ((C.sf==C.of)) goto L_1262f0c0;
  /* 1262f0ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262f0ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1262f0b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1262f0b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262f0b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f0bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1262f0be jmp 0x1262f099 */
  goto L_1262f099;
L_1262f0c0:;
  /* 1262f0c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262f0c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262f0c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262f0c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f0ca push edx */
  push32((uint32_t)(EDX));
  /* 1262f0cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1262f0d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262f0d3 push eax */
  push32((uint32_t)(EAX));
  /* 1262f0d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262f0d6 call 0x12631a40 */
  push32(0x1262f0dbu); f_12631a40();
  /* 1262f0db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f0de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f0e0 jne 0x1262f0e7 */
  if (!C.zf) goto L_1262f0e7;
  /* 1262f0e2 jmp 0x1262f1d2 */
  goto L_1262f1d2;
L_1262f0e7:;
  /* 1262f0e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262f0ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1262f0ef cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f0f6 jle 0x1262f153 */
  if ((C.zf||C.sf!=C.of)) goto L_1262f153;
  /* 1262f0f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1262f0fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1262f0fe jmp 0x1262f109 */
  goto L_1262f109;
L_1262f100:;
  /* 1262f100 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f103 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f106 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1262f109:;
  /* 1262f109 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f10c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262f10e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1262f110 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262f112 je 0x1262f153 */
  if (C.zf) goto L_1262f153;
  /* 1262f114 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f117 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262f119 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1262f11c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262f11e je 0x1262f153 */
  if (C.zf) goto L_1262f153;
  /* 1262f120 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f125 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262f127 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1262f12a jmp 0x1262f135 */
  goto L_1262f135;
L_1262f12c:;
  /* 1262f12c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262f12f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f132 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1262f135:;
  /* 1262f135 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1262f138 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f13a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1262f13d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f140 jg 0x1262f151 */
  if ((!C.zf&&C.sf==C.of)) goto L_1262f151;
  /* 1262f142 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1262f145 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262f148 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1262f14f jmp 0x1262f12c */
  goto L_1262f12c;
L_1262f151:;
  /* 1262f151 jmp 0x1262f100 */
  goto L_1262f100;
L_1262f153:;
  /* 1262f153 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262f156 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f159 mov dword ptr [0x1264dc98], eax */
  w32((uint32_t)(0x1264dc98), (EAX));
  /* 1262f15e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262f161 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f164 mov dword ptr [0x1264dc9c], ecx */
  w32((uint32_t)(0x1264dc9c), (ECX));
  /* 1262f16a cmp dword ptr [0x1264f750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f171 je 0x1262f184 */
  if (C.zf) goto L_1262f184;
  /* 1262f173 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f175 mov edx, dword ptr [0x1264f750] */
  EDX = (r32((uint32_t)(0x1264f750)));
  /* 1262f17b push edx */
  push32((uint32_t)(EDX));
  /* 1262f17c call 0x12624070 */
  push32(0x1262f181u); f_12624070();
  /* 1262f181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262f184:;
  /* 1262f184 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262f187 mov dword ptr [0x1264f750], eax */
  w32((uint32_t)(0x1264f750), (EAX));
  /* 1262f18c cmp dword ptr [0x1264f754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f193 je 0x1262f1a6 */
  if (C.zf) goto L_1262f1a6;
  /* 1262f195 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f197 mov ecx, dword ptr [0x1264f754] */
  ECX = (r32((uint32_t)(0x1264f754)));
  /* 1262f19d push ecx */
  push32((uint32_t)(ECX));
  /* 1262f19e call 0x12624070 */
  push32(0x1262f1a3u); f_12624070();
  /* 1262f1a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262f1a6:;
  /* 1262f1a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262f1a9 mov dword ptr [0x1264f754], edx */
  w32((uint32_t)(0x1264f754), (EDX));
  /* 1262f1af push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f1b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262f1b4 push eax */
  push32((uint32_t)(EAX));
  /* 1262f1b5 call 0x12624070 */
  push32(0x1262f1bau); f_12624070();
  /* 1262f1ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f1bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f1bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262f1c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f1c3 call 0x12624070 */
  push32(0x1262f1c8u); f_12624070();
  /* 1262f1c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f1cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f1cd jmp 0x1262f25c */
  goto L_1262f25c;
L_1262f1d2:;
  /* 1262f1d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f1d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1262f1d7 push edx */
  push32((uint32_t)(EDX));
  /* 1262f1d8 call 0x12624070 */
  push32(0x1262f1ddu); f_12624070();
  /* 1262f1dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f1e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f1e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1262f1e5 push eax */
  push32((uint32_t)(EAX));
  /* 1262f1e6 call 0x12624070 */
  push32(0x1262f1ebu); f_12624070();
  /* 1262f1eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f1ee push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f1f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1262f1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f1f4 call 0x12624070 */
  push32(0x1262f1f9u); f_12624070();
  /* 1262f1f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f1fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f1fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262f201 push edx */
  push32((uint32_t)(EDX));
  /* 1262f202 call 0x12624070 */
  push32(0x1262f207u); f_12624070();
  /* 1262f207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f20a mov eax, 1 */
  EAX = (0x1u);
  /* 1262f20f jmp 0x1262f25c */
  goto L_1262f25c;
L_1262f211:;
  /* 1262f211 mov dword ptr [0x1264dc98], 0x1264dca2 */
  w32((uint32_t)(0x1264dc98), (0x1264dca2u));
  /* 1262f21b mov dword ptr [0x1264dc9c], 0x1264dca2 */
  w32((uint32_t)(0x1264dc9c), (0x1264dca2u));
  /* 1262f225 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f227 mov eax, dword ptr [0x1264f750] */
  EAX = (r32((uint32_t)(0x1264f750)));
  /* 1262f22c push eax */
  push32((uint32_t)(EAX));
  /* 1262f22d call 0x12624070 */
  push32(0x1262f232u); f_12624070();
  /* 1262f232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f235 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262f237 mov ecx, dword ptr [0x1264f754] */
  ECX = (r32((uint32_t)(0x1264f754)));
  /* 1262f23d push ecx */
  push32((uint32_t)(ECX));
  /* 1262f23e call 0x12624070 */
  push32(0x1262f243u); f_12624070();
  /* 1262f243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f246 mov dword ptr [0x1264f750], 0 */
  w32((uint32_t)(0x1264f750), (0x0u));
  /* 1262f250 mov dword ptr [0x1264f754], 0 */
  w32((uint32_t)(0x1264f754), (0x0u));
  /* 1262f25a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262f25c:;
  /* 1262f25c mov esp, ebp */
  ESP = (EBP);
  /* 1262f25e pop ebp */
  EBP = (pop32());
  /* 1262f25f ret  */
  ESPCHK(0x1262eec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f260 @ 0x1262f260 (7 bytes, 5 insns) */
void f_1262f260(void) {
  FTRACE(0x1262f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f260 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f261 mov ebp, esp */
  EBP = (ESP);
  /* 1262f263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f265 pop ebp */
  EBP = (pop32());
  /* 1262f266 ret  */
  ESPCHK(0x1262f260u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1262f270 (129 bytes, 56 insns) */
void f_1262f270(void) {
  FTRACE(0x1262f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f270 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1262f274 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1262f278 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1262f27e jne 0x1262f2bc */
  if (!C.zf) goto L_1262f2bc;
L_1262f280:;
  /* 1262f280 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1262f282 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f284 jne 0x1262f2b4 */
  if (!C.zf) goto L_1262f2b4;
  /* 1262f286 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f288 je 0x1262f2b0 */
  if (C.zf) goto L_1262f2b0;
  /* 1262f28a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f28d jne 0x1262f2b4 */
  if (!C.zf) goto L_1262f2b4;
  /* 1262f28f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1262f291 je 0x1262f2b0 */
  if (C.zf) goto L_1262f2b0;
  /* 1262f293 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1262f296 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f299 jne 0x1262f2b4 */
  if (!C.zf) goto L_1262f2b4;
  /* 1262f29b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f29d je 0x1262f2b0 */
  if (C.zf) goto L_1262f2b0;
  /* 1262f29f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f2a2 jne 0x1262f2b4 */
  if (!C.zf) goto L_1262f2b4;
  /* 1262f2a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f2a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f2aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1262f2ac jne 0x1262f280 */
  if (!C.zf) goto L_1262f280;
  /* 1262f2ae mov edi, edi */
  EDI = (EDI);
L_1262f2b0:;
  /* 1262f2b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f2b2 ret  */
  ESPCHK(0x1262f270u, _esp0);
  ESP += 4; return;
  /* 1262f2b3 nop  */
  /* nop */
L_1262f2b4:;
  /* 1262f2b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f2b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1262f2b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1262f2b9 ret  */
  ESPCHK(0x1262f270u, _esp0);
  ESP += 4; return;
  /* 1262f2ba mov edi, edi */
  EDI = (EDI);
L_1262f2bc:;
  /* 1262f2bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1262f2c2 je 0x1262f2d8 */
  if (C.zf) goto L_1262f2d8;
  /* 1262f2c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262f2c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1262f2c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f2c9 jne 0x1262f2b4 */
  if (!C.zf) goto L_1262f2b4;
  /* 1262f2cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1262f2cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f2ce je 0x1262f2b0 */
  if (C.zf) goto L_1262f2b0;
  /* 1262f2d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1262f2d6 je 0x1262f280 */
  if (C.zf) goto L_1262f280;
L_1262f2d8:;
  /* 1262f2d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1262f2db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f2de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f2e0 jne 0x1262f2b4 */
  if (!C.zf) goto L_1262f2b4;
  /* 1262f2e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f2e4 je 0x1262f2b0 */
  if (C.zf) goto L_1262f2b0;
  /* 1262f2e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f2e9 jne 0x1262f2b4 */
  if (!C.zf) goto L_1262f2b4;
  /* 1262f2eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1262f2ed je 0x1262f2b0 */
  if (C.zf) goto L_1262f2b0;
  /* 1262f2ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f2f2 jmp 0x1262f280 */
  goto L_1262f280;
}

/* FUN_1000f300 @ 0x1262f300 (62 bytes, 35 insns) */
void f_1262f300(void) {
  FTRACE(0x1262f300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f300 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f301 mov ebp, esp */
  EBP = (ESP);
  /* 1262f303 push esi */
  push32((uint32_t)(ESI));
  /* 1262f304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f306 push eax */
  push32((uint32_t)(EAX));
  /* 1262f307 push eax */
  push32((uint32_t)(EAX));
  /* 1262f308 push eax */
  push32((uint32_t)(EAX));
  /* 1262f309 push eax */
  push32((uint32_t)(EAX));
  /* 1262f30a push eax */
  push32((uint32_t)(EAX));
  /* 1262f30b push eax */
  push32((uint32_t)(EAX));
  /* 1262f30c push eax */
  push32((uint32_t)(EAX));
  /* 1262f30d push eax */
  push32((uint32_t)(EAX));
  /* 1262f30e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262f311 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262f314:;
  /* 1262f314 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262f316 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f318 je 0x1262f321 */
  if (C.zf) goto L_1262f321;
  /* 1262f31a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1262f31b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1262f31b");
  /* 1262f31f jmp 0x1262f314 */
  goto L_1262f314;
L_1262f321:;
  /* 1262f321 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f324 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262f327 nop  */
  /* nop */
L_1262f328:;
  /* 1262f328 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1262f329 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262f32b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f32d je 0x1262f336 */
  if (C.zf) goto L_1262f336;
  /* 1262f32f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1262f330 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1262f330");
  /* 1262f334 jae 0x1262f328 */
  if (!C.cf) goto L_1262f328;
L_1262f336:;
  /* 1262f336 mov eax, ecx */
  EAX = (ECX);
  /* 1262f338 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f33b pop esi */
  ESI = (pop32());
  /* 1262f33c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262f33d ret  */
  ESPCHK(0x1262f300u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1262f340 (56 bytes, 31 insns) */
void f_1262f340(void) {
  FTRACE(0x1262f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f340 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f341 mov ebp, esp */
  EBP = (ESP);
  /* 1262f343 push edi */
  push32((uint32_t)(EDI));
  /* 1262f344 push esi */
  push32((uint32_t)(ESI));
  /* 1262f345 push ebx */
  push32((uint32_t)(EBX));
  /* 1262f346 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262f349 jecxz 0x1262f371 */
  x86_unimpl("jecxz @ 0x1262f349");
  /* 1262f34b mov ebx, ecx */
  EBX = (ECX);
  /* 1262f34d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f350 mov esi, edi */
  ESI = (EDI);
  /* 1262f352 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f354 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1262f356 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262f358 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f35a mov edi, esi */
  EDI = (ESI);
  /* 1262f35c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1262f35f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1262f361 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1262f364 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262f366 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1262f369 ja 0x1262f36f */
  if ((!C.cf&&!C.zf)) goto L_1262f36f;
  /* 1262f36b je 0x1262f371 */
  if (C.zf) goto L_1262f371;
  /* 1262f36d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1262f36e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1262f36f:;
  /* 1262f36f not ecx */
  ECX = (~(ECX));
L_1262f371:;
  /* 1262f371 mov eax, ecx */
  EAX = (ECX);
  /* 1262f373 pop ebx */
  EBX = (pop32());
  /* 1262f374 pop esi */
  ESI = (pop32());
  /* 1262f375 pop edi */
  EDI = (pop32());
  /* 1262f376 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262f377 ret  */
  ESPCHK(0x1262f340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f380 @ 0x1262f380 (58 bytes, 32 insns) */
void f_1262f380(void) {
  FTRACE(0x1262f380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f380 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f381 mov ebp, esp */
  EBP = (ESP);
  /* 1262f383 push esi */
  push32((uint32_t)(ESI));
  /* 1262f384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f386 push eax */
  push32((uint32_t)(EAX));
  /* 1262f387 push eax */
  push32((uint32_t)(EAX));
  /* 1262f388 push eax */
  push32((uint32_t)(EAX));
  /* 1262f389 push eax */
  push32((uint32_t)(EAX));
  /* 1262f38a push eax */
  push32((uint32_t)(EAX));
  /* 1262f38b push eax */
  push32((uint32_t)(EAX));
  /* 1262f38c push eax */
  push32((uint32_t)(EAX));
  /* 1262f38d push eax */
  push32((uint32_t)(EAX));
  /* 1262f38e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262f391 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1262f394:;
  /* 1262f394 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1262f396 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f398 je 0x1262f3a1 */
  if (C.zf) goto L_1262f3a1;
  /* 1262f39a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1262f39b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1262f39b");
  /* 1262f39f jmp 0x1262f394 */
  goto L_1262f394;
L_1262f3a1:;
  /* 1262f3a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1262f3a4:;
  /* 1262f3a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1262f3a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1262f3a8 je 0x1262f3b4 */
  if (C.zf) goto L_1262f3b4;
  /* 1262f3aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1262f3ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1262f3ab");
  /* 1262f3af jae 0x1262f3a4 */
  if (!C.cf) goto L_1262f3a4;
  /* 1262f3b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1262f3b4:;
  /* 1262f3b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f3b7 pop esi */
  ESI = (pop32());
  /* 1262f3b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1262f3b9 ret  */
  ESPCHK(0x1262f380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3c0 @ 0x1262f3c0 (512 bytes, 147 insns) */
void f_1262f3c0(void) {
  FTRACE(0x1262f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1262f3c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f3c6 cmp dword ptr [0x1264f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f3cd jne 0x1262f3f2 */
  if (!C.zf) goto L_1262f3f2;
  /* 1262f3cf call 0x1262fe90 */
  push32(0x1262f3d4u); f_1262fe90();
  /* 1262f3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f3d6 je 0x1262f3e2 */
  if (C.zf) goto L_1262f3e2;
  /* 1262f3d8 mov eax, dword ptr [0x12652278] */
  EAX = (r32((uint32_t)(0x12652278)));
  /* 1262f3dd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262f3e0 jmp 0x1262f3e9 */
  goto L_1262f3e9;
L_1262f3e2:;
  /* 1262f3e2 mov dword ptr [ebp - 8], 0x1262fee0 */
  w32((uint32_t)(EBP + -0x8), (0x1262fee0u));
L_1262f3e9:;
  /* 1262f3e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262f3ec mov dword ptr [0x1264f79c], ecx */
  w32((uint32_t)(0x1264f79c), (ECX));
L_1262f3f2:;
  /* 1262f3f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f3f6 jne 0x1262f402 */
  if (!C.zf) goto L_1262f402;
  /* 1262f3f8 call 0x1262fce0 */
  push32(0x1262f3fdu); f_1262fce0();
  /* 1262f3fd jmp 0x1262f4ce */
  goto L_1262f4ce;
L_1262f402:;
  /* 1262f402 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f405 mov dword ptr [0x1264f78c], edx */
  w32((uint32_t)(0x1264f78c), (EDX));
  /* 1262f40b cmp dword ptr [0x1264f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f412 je 0x1262f434 */
  if (C.zf) goto L_1262f434;
  /* 1262f414 mov eax, dword ptr [0x1264f78c] */
  EAX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f419 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262f41c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262f41e je 0x1262f434 */
  if (C.zf) goto L_1262f434;
  /* 1262f420 push 0x1264f78c */
  push32((uint32_t)(0x1264f78cu));
  /* 1262f425 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1262f427 push 0x1264ea90 */
  push32((uint32_t)(0x1264ea90u));
  /* 1262f42c call 0x1262f5c0 */
  push32(0x1262f431u); f_1262f5c0();
  /* 1262f431 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262f434:;
  /* 1262f434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f437 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f43a mov dword ptr [0x1264f790], edx */
  w32((uint32_t)(0x1264f790), (EDX));
  /* 1262f440 cmp dword ptr [0x1264f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f447 je 0x1262f469 */
  if (C.zf) goto L_1262f469;
  /* 1262f449 mov eax, dword ptr [0x1264f790] */
  EAX = (r32((uint32_t)(0x1264f790)));
  /* 1262f44e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262f451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262f453 je 0x1262f469 */
  if (C.zf) goto L_1262f469;
  /* 1262f455 push 0x1264f790 */
  push32((uint32_t)(0x1264f790u));
  /* 1262f45a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1262f45c push 0x1264e9d8 */
  push32((uint32_t)(0x1264e9d8u));
  /* 1262f461 call 0x1262f5c0 */
  push32(0x1262f466u); f_1262f5c0();
  /* 1262f466 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262f469:;
  /* 1262f469 mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
  /* 1262f473 cmp dword ptr [0x1264f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f47a je 0x1262f4ad */
  if (C.zf) goto L_1262f4ad;
  /* 1262f47c mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f482 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1262f485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f487 je 0x1262f4ad */
  if (C.zf) goto L_1262f4ad;
  /* 1262f489 cmp dword ptr [0x1264f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f490 je 0x1262f4a6 */
  if (C.zf) goto L_1262f4a6;
  /* 1262f492 mov ecx, dword ptr [0x1264f790] */
  ECX = (r32((uint32_t)(0x1264f790)));
  /* 1262f498 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1262f49b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262f49d je 0x1262f4a6 */
  if (C.zf) goto L_1262f4a6;
  /* 1262f49f call 0x1262f650 */
  push32(0x1262f4a4u); f_1262f650();
  /* 1262f4a4 jmp 0x1262f4ab */
  goto L_1262f4ab;
L_1262f4a6:;
  /* 1262f4a6 call 0x1262fa40 */
  push32(0x1262f4abu); f_1262fa40();
L_1262f4ab:;
  /* 1262f4ab jmp 0x1262f4ce */
  goto L_1262f4ce;
L_1262f4ad:;
  /* 1262f4ad cmp dword ptr [0x1264f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f4b4 je 0x1262f4c9 */
  if (C.zf) goto L_1262f4c9;
  /* 1262f4b6 mov eax, dword ptr [0x1264f790] */
  EAX = (r32((uint32_t)(0x1264f790)));
  /* 1262f4bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262f4be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262f4c0 je 0x1262f4c9 */
  if (C.zf) goto L_1262f4c9;
  /* 1262f4c2 call 0x1262fbe0 */
  push32(0x1262f4c7u); f_1262fbe0();
  /* 1262f4c7 jmp 0x1262f4ce */
  goto L_1262f4ce;
L_1262f4c9:;
  /* 1262f4c9 call 0x1262fce0 */
  push32(0x1262f4ceu); f_1262fce0();
L_1262f4ce:;
  /* 1262f4ce cmp dword ptr [0x1264f794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f4d5 jne 0x1262f4de */
  if (!C.zf) goto L_1262f4de;
  /* 1262f4d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f4d9 jmp 0x1262f5bc */
  goto L_1262f5bc;
L_1262f4de:;
  /* 1262f4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f4e1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f4e7 push edx */
  push32((uint32_t)(EDX));
  /* 1262f4e8 call 0x1262fd10 */
  push32(0x1262f4edu); f_1262fd10();
  /* 1262f4ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f4f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262f4f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f4f7 je 0x1262f50c */
  if (C.zf) goto L_1262f50c;
  /* 1262f4f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262f4fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262f501 push eax */
  push32((uint32_t)(EAX));
  /* 1262f502 call dword ptr [0x1265227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265227c))), 0x1262f508u);
  /* 1262f508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f50a jne 0x1262f513 */
  if (!C.zf) goto L_1262f513;
L_1262f50c:;
  /* 1262f50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f50e jmp 0x1262f5bc */
  goto L_1262f5bc;
L_1262f513:;
  /* 1262f513 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262f515 mov ecx, dword ptr [0x1264f77c] */
  ECX = (r32((uint32_t)(0x1264f77c)));
  /* 1262f51b push ecx */
  push32((uint32_t)(ECX));
  /* 1262f51c call dword ptr [0x12652280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652280))), 0x1262f522u);
  /* 1262f522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f524 jne 0x1262f52d */
  if (!C.zf) goto L_1262f52d;
  /* 1262f526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f528 jmp 0x1262f5bc */
  goto L_1262f5bc;
L_1262f52d:;
  /* 1262f52d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f531 je 0x1262f558 */
  if (C.zf) goto L_1262f558;
  /* 1262f533 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262f536 mov ax, word ptr [0x1264f77c] */
  AX = (r16((uint32_t)(0x1264f77c)));
  /* 1262f53c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1262f53f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262f542 mov dx, word ptr [0x1264f798] */
  DX = (r16((uint32_t)(0x1264f798)));
  /* 1262f549 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1262f54d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262f550 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1262f554 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1262f558:;
  /* 1262f558 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f55c je 0x1262f5b7 */
  if (C.zf) goto L_1262f5b7;
  /* 1262f55e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1262f560 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262f563 push edx */
  push32((uint32_t)(EDX));
  /* 1262f564 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1262f569 mov eax, dword ptr [0x1264f77c] */
  EAX = (r32((uint32_t)(0x1264f77c)));
  /* 1262f56e push eax */
  push32((uint32_t)(EAX));
  /* 1262f56f call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262f575u);
  /* 1262f575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f577 jne 0x1262f57d */
  if (!C.zf) goto L_1262f57d;
  /* 1262f579 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f57b jmp 0x1262f5bc */
  goto L_1262f5bc;
L_1262f57d:;
  /* 1262f57d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1262f57f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262f582 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f585 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f586 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1262f58b mov edx, dword ptr [0x1264f798] */
  EDX = (r32((uint32_t)(0x1264f798)));
  /* 1262f591 push edx */
  push32((uint32_t)(EDX));
  /* 1262f592 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262f598u);
  /* 1262f598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f59a jne 0x1262f5a0 */
  if (!C.zf) goto L_1262f5a0;
  /* 1262f59c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262f59e jmp 0x1262f5bc */
  goto L_1262f5bc;
L_1262f5a0:;
  /* 1262f5a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1262f5a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262f5a5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f5aa push eax */
  push32((uint32_t)(EAX));
  /* 1262f5ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262f5ae push ecx */
  push32((uint32_t)(ECX));
  /* 1262f5af call 0x12626120 */
  push32(0x1262f5b4u); f_12626120();
  /* 1262f5b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262f5b7:;
  /* 1262f5b7 mov eax, 1 */
  EAX = (0x1u);
L_1262f5bc:;
  /* 1262f5bc mov esp, ebp */
  ESP = (EBP);
  /* 1262f5be pop ebp */
  EBP = (pop32());
  /* 1262f5bf ret  */
  ESPCHK(0x1262f3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5c0 @ 0x1262f5c0 (130 bytes, 47 insns) */
void f_1262f5c0(void) {
  FTRACE(0x1262f5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1262f5c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f5c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1262f5cd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1262f5d4:;
  /* 1262f5d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262f5d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f5da jg 0x1262f63e */
  if ((!C.zf&&C.sf==C.of)) goto L_1262f63e;
  /* 1262f5dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f5e0 je 0x1262f63e */
  if (C.zf) goto L_1262f63e;
  /* 1262f5e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262f5e5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f5e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262f5e9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f5eb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1262f5ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262f5f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262f5f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f5f6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1262f5f9 push eax */
  push32((uint32_t)(EAX));
  /* 1262f5fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262f5fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262f5ff push edx */
  push32((uint32_t)(EDX));
  /* 1262f600 call 0x12631cb0 */
  push32(0x1262f605u); f_12631cb0();
  /* 1262f605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f608 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262f60b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f60f jne 0x1262f622 */
  if (!C.zf) goto L_1262f622;
  /* 1262f611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262f614 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f617 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1262f61b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262f61e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1262f620 jmp 0x1262f63c */
  goto L_1262f63c;
L_1262f622:;
  /* 1262f622 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f626 jge 0x1262f633 */
  if ((C.sf==C.of)) goto L_1262f633;
  /* 1262f628 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262f62b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f62e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1262f631 jmp 0x1262f63c */
  goto L_1262f63c;
L_1262f633:;
  /* 1262f633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262f636 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f639 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1262f63c:;
  /* 1262f63c jmp 0x1262f5d4 */
  goto L_1262f5d4;
L_1262f63e:;
  /* 1262f63e mov esp, ebp */
  ESP = (EBP);
  /* 1262f640 pop ebp */
  EBP = (pop32());
  /* 1262f641 ret  */
  ESPCHK(0x1262f5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x1262f650 (186 bytes, 50 insns) */
void f_1262f650(void) {
  FTRACE(0x1262f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f650 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f651 mov ebp, esp */
  EBP = (ESP);
  /* 1262f653 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f654 mov eax, dword ptr [0x1264f78c] */
  EAX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f659 push eax */
  push32((uint32_t)(EAX));
  /* 1262f65a call 0x12626410 */
  push32(0x1262f65fu); f_12626410();
  /* 1262f65f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f662 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262f664 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f667 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1262f66a mov dword ptr [0x1264f788], ecx */
  w32((uint32_t)(0x1264f788), (ECX));
  /* 1262f670 mov edx, dword ptr [0x1264f790] */
  EDX = (r32((uint32_t)(0x1264f790)));
  /* 1262f676 push edx */
  push32((uint32_t)(EDX));
  /* 1262f677 call 0x12626410 */
  push32(0x1262f67cu); f_12626410();
  /* 1262f67c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f67f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262f681 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f684 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1262f687 mov dword ptr [0x1264f780], ecx */
  w32((uint32_t)(0x1264f780), (ECX));
  /* 1262f68d mov dword ptr [0x1264f77c], 0 */
  w32((uint32_t)(0x1264f77c), (0x0u));
  /* 1262f697 cmp dword ptr [0x1264f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f69e je 0x1262f6a9 */
  if (C.zf) goto L_1262f6a9;
  /* 1262f6a0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1262f6a7 jmp 0x1262f6bb */
  goto L_1262f6bb;
L_1262f6a9:;
  /* 1262f6a9 mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f6af push edx */
  push32((uint32_t)(EDX));
  /* 1262f6b0 call 0x126300f0 */
  push32(0x1262f6b5u); f_126300f0();
  /* 1262f6b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f6b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262f6bb:;
  /* 1262f6bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262f6be mov dword ptr [0x1264f784], eax */
  w32((uint32_t)(0x1264f784), (EAX));
  /* 1262f6c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262f6c5 push 0x1262f710 */
  push32((uint32_t)(0x1262f710u));
  /* 1262f6ca call dword ptr [0x12652274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652274))), 0x1262f6d0u);
  /* 1262f6d0 mov ecx, dword ptr [0x1264f794] */
  ECX = (r32((uint32_t)(0x1264f794)));
  /* 1262f6d6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1262f6dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262f6de je 0x1262f6fc */
  if (C.zf) goto L_1262f6fc;
  /* 1262f6e0 mov edx, dword ptr [0x1264f794] */
  EDX = (r32((uint32_t)(0x1264f794)));
  /* 1262f6e6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1262f6ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262f6ee je 0x1262f6fc */
  if (C.zf) goto L_1262f6fc;
  /* 1262f6f0 mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262f6f5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1262f6f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f6fa jne 0x1262f706 */
  if (!C.zf) goto L_1262f706;
L_1262f6fc:;
  /* 1262f6fc mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
L_1262f706:;
  /* 1262f706 mov esp, ebp */
  ESP = (EBP);
  /* 1262f708 pop ebp */
  EBP = (pop32());
  /* 1262f709 ret  */
  ESPCHK(0x1262f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f710 @ 0x1262f710 (804 bytes, 220 insns) */
void f_1262f710(void) {
  FTRACE(0x1262f710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262f710 push ebp */
  push32((uint32_t)(EBP));
  /* 1262f711 mov ebp, esp */
  EBP = (ESP);
  /* 1262f713 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262f719 push eax */
  push32((uint32_t)(EAX));
  /* 1262f71a call 0x12630070 */
  push32(0x1262f71fu); f_12630070();
  /* 1262f71f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f722 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1262f725 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1262f727 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1262f72a push ecx */
  push32((uint32_t)(ECX));
  /* 1262f72b mov edx, dword ptr [0x1264f780] */
  EDX = (r32((uint32_t)(0x1264f780)));
  /* 1262f731 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262f733 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f735 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1262f73b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f741 push edx */
  push32((uint32_t)(EDX));
  /* 1262f742 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f745 push eax */
  push32((uint32_t)(EAX));
  /* 1262f746 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262f74cu);
  /* 1262f74c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f74e jne 0x1262f764 */
  if (!C.zf) goto L_1262f764;
  /* 1262f750 mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
  /* 1262f75a mov eax, 1 */
  EAX = (0x1u);
  /* 1262f75f jmp 0x1262fa2e */
  goto L_1262fa2e;
L_1262f764:;
  /* 1262f764 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1262f767 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f768 mov edx, dword ptr [0x1264f790] */
  EDX = (r32((uint32_t)(0x1264f790)));
  /* 1262f76e push edx */
  push32((uint32_t)(EDX));
  /* 1262f76f call 0x12631cb0 */
  push32(0x1262f774u); f_12631cb0();
  /* 1262f774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f779 jne 0x1262f89f */
  if (!C.zf) goto L_1262f89f;
  /* 1262f77f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1262f781 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1262f784 push eax */
  push32((uint32_t)(EAX));
  /* 1262f785 mov ecx, dword ptr [0x1264f788] */
  ECX = (r32((uint32_t)(0x1264f788)));
  /* 1262f78b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262f78d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f78f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1262f795 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f79b push ecx */
  push32((uint32_t)(ECX));
  /* 1262f79c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f79f push edx */
  push32((uint32_t)(EDX));
  /* 1262f7a0 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262f7a6u);
  /* 1262f7a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f7a8 jne 0x1262f7be */
  if (!C.zf) goto L_1262f7be;
  /* 1262f7aa mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
  /* 1262f7b4 mov eax, 1 */
  EAX = (0x1u);
  /* 1262f7b9 jmp 0x1262fa2e */
  goto L_1262fa2e;
L_1262f7be:;
  /* 1262f7be lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1262f7c1 push eax */
  push32((uint32_t)(EAX));
  /* 1262f7c2 mov ecx, dword ptr [0x1264f78c] */
  ECX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f7c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f7c9 call 0x12631cb0 */
  push32(0x1262f7ceu); f_12631cb0();
  /* 1262f7ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f7d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f7d3 jne 0x1262f800 */
  if (!C.zf) goto L_1262f800;
  /* 1262f7d5 mov edx, dword ptr [0x1264f794] */
  EDX = (r32((uint32_t)(0x1264f794)));
  /* 1262f7db or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1262f7e1 mov dword ptr [0x1264f794], edx */
  w32((uint32_t)(0x1264f794), (EDX));
  /* 1262f7e7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f7ea mov dword ptr [0x1264f798], eax */
  w32((uint32_t)(0x1264f798), (EAX));
  /* 1262f7ef mov ecx, dword ptr [0x1264f798] */
  ECX = (r32((uint32_t)(0x1264f798)));
  /* 1262f7f5 mov dword ptr [0x1264f77c], ecx */
  w32((uint32_t)(0x1264f77c), (ECX));
  /* 1262f7fb jmp 0x1262f89f */
  goto L_1262f89f;
L_1262f800:;
  /* 1262f800 mov edx, dword ptr [0x1264f794] */
  EDX = (r32((uint32_t)(0x1264f794)));
  /* 1262f806 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1262f809 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262f80b jne 0x1262f89f */
  if (!C.zf) goto L_1262f89f;
  /* 1262f811 cmp dword ptr [0x1264f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f818 je 0x1262f86d */
  if (C.zf) goto L_1262f86d;
  /* 1262f81a mov eax, dword ptr [0x1264f784] */
  EAX = (r32((uint32_t)(0x1264f784)));
  /* 1262f81f push eax */
  push32((uint32_t)(EAX));
  /* 1262f820 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1262f823 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f824 mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f82a push edx */
  push32((uint32_t)(EDX));
  /* 1262f82b call 0x12631d80 */
  push32(0x1262f830u); f_12631d80();
  /* 1262f830 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f835 jne 0x1262f86d */
  if (!C.zf) goto L_1262f86d;
  /* 1262f837 mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262f83c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1262f83e mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
  /* 1262f843 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f846 mov dword ptr [0x1264f798], ecx */
  w32((uint32_t)(0x1264f798), (ECX));
  /* 1262f84c mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f852 push edx */
  push32((uint32_t)(EDX));
  /* 1262f853 call 0x12626410 */
  push32(0x1262f858u); f_12626410();
  /* 1262f858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f85b cmp eax, dword ptr [0x1264f784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264f784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f861 jne 0x1262f86b */
  if (!C.zf) goto L_1262f86b;
  /* 1262f863 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f866 mov dword ptr [0x1264f77c], eax */
  w32((uint32_t)(0x1264f77c), (EAX));
L_1262f86b:;
  /* 1262f86b jmp 0x1262f89f */
  goto L_1262f89f;
L_1262f86d:;
  /* 1262f86d mov ecx, dword ptr [0x1264f794] */
  ECX = (r32((uint32_t)(0x1264f794)));
  /* 1262f873 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1262f876 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262f878 jne 0x1262f89f */
  if (!C.zf) goto L_1262f89f;
  /* 1262f87a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f87d push edx */
  push32((uint32_t)(EDX));
  /* 1262f87e call 0x1262fdb0 */
  push32(0x1262f883u); f_1262fdb0();
  /* 1262f883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f888 je 0x1262f89f */
  if (C.zf) goto L_1262f89f;
  /* 1262f88a mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262f88f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1262f891 mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
  /* 1262f896 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f899 mov dword ptr [0x1264f798], ecx */
  w32((uint32_t)(0x1264f798), (ECX));
L_1262f89f:;
  /* 1262f89f mov edx, dword ptr [0x1264f794] */
  EDX = (r32((uint32_t)(0x1264f794)));
  /* 1262f8a5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1262f8ab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f8b1 je 0x1262fa21 */
  if (C.zf) goto L_1262fa21;
  /* 1262f8b7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1262f8b9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1262f8bc push eax */
  push32((uint32_t)(EAX));
  /* 1262f8bd mov ecx, dword ptr [0x1264f788] */
  ECX = (r32((uint32_t)(0x1264f788)));
  /* 1262f8c3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262f8c5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262f8c7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1262f8cd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f8d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f8d7 push edx */
  push32((uint32_t)(EDX));
  /* 1262f8d8 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262f8deu);
  /* 1262f8de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f8e0 jne 0x1262f8f6 */
  if (!C.zf) goto L_1262f8f6;
  /* 1262f8e2 mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
  /* 1262f8ec mov eax, 1 */
  EAX = (0x1u);
  /* 1262f8f1 jmp 0x1262fa2e */
  goto L_1262fa2e;
L_1262f8f6:;
  /* 1262f8f6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1262f8f9 push eax */
  push32((uint32_t)(EAX));
  /* 1262f8fa mov ecx, dword ptr [0x1264f78c] */
  ECX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f900 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f901 call 0x12631cb0 */
  push32(0x1262f906u); f_12631cb0();
  /* 1262f906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f90b jne 0x1262f9c0 */
  if (!C.zf) goto L_1262f9c0;
  /* 1262f911 mov edx, dword ptr [0x1264f794] */
  EDX = (r32((uint32_t)(0x1264f794)));
  /* 1262f917 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1262f91a mov dword ptr [0x1264f794], edx */
  w32((uint32_t)(0x1264f794), (EDX));
  /* 1262f920 cmp dword ptr [0x1264f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f927 je 0x1262f94a */
  if (C.zf) goto L_1262f94a;
  /* 1262f929 mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262f92e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1262f931 mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
  /* 1262f936 cmp dword ptr [0x1264f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f93d jne 0x1262f948 */
  if (!C.zf) goto L_1262f948;
  /* 1262f93f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f942 mov dword ptr [0x1264f77c], ecx */
  w32((uint32_t)(0x1264f77c), (ECX));
L_1262f948:;
  /* 1262f948 jmp 0x1262f9be */
  goto L_1262f9be;
L_1262f94a:;
  /* 1262f94a cmp dword ptr [0x1264f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f951 je 0x1262f99f */
  if (C.zf) goto L_1262f99f;
  /* 1262f953 mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f959 push edx */
  push32((uint32_t)(EDX));
  /* 1262f95a call 0x12626410 */
  push32(0x1262f95fu); f_12626410();
  /* 1262f95f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f962 cmp eax, dword ptr [0x1264f784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264f784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f968 jne 0x1262f99f */
  if (!C.zf) goto L_1262f99f;
  /* 1262f96a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262f96c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f96f push eax */
  push32((uint32_t)(EAX));
  /* 1262f970 call 0x1262fe00 */
  push32(0x1262f975u); f_1262fe00();
  /* 1262f975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f97a je 0x1262f99d */
  if (C.zf) goto L_1262f99d;
  /* 1262f97c mov ecx, dword ptr [0x1264f794] */
  ECX = (r32((uint32_t)(0x1264f794)));
  /* 1262f982 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1262f985 mov dword ptr [0x1264f794], ecx */
  w32((uint32_t)(0x1264f794), (ECX));
  /* 1262f98b cmp dword ptr [0x1264f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f992 jne 0x1262f99d */
  if (!C.zf) goto L_1262f99d;
  /* 1262f994 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f997 mov dword ptr [0x1264f77c], edx */
  w32((uint32_t)(0x1264f77c), (EDX));
L_1262f99d:;
  /* 1262f99d jmp 0x1262f9be */
  goto L_1262f9be;
L_1262f99f:;
  /* 1262f99f mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262f9a4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1262f9a7 mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
  /* 1262f9ac cmp dword ptr [0x1264f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f9b3 jne 0x1262f9be */
  if (!C.zf) goto L_1262f9be;
  /* 1262f9b5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f9b8 mov dword ptr [0x1264f77c], ecx */
  w32((uint32_t)(0x1264f77c), (ECX));
L_1262f9be:;
  /* 1262f9be jmp 0x1262fa21 */
  goto L_1262fa21;
L_1262f9c0:;
  /* 1262f9c0 cmp dword ptr [0x1264f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f9c7 jne 0x1262fa21 */
  if (!C.zf) goto L_1262fa21;
  /* 1262f9c9 cmp dword ptr [0x1264f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262f9d0 je 0x1262fa21 */
  if (C.zf) goto L_1262fa21;
  /* 1262f9d2 mov edx, dword ptr [0x1264f784] */
  EDX = (r32((uint32_t)(0x1264f784)));
  /* 1262f9d8 push edx */
  push32((uint32_t)(EDX));
  /* 1262f9d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1262f9dc push eax */
  push32((uint32_t)(EAX));
  /* 1262f9dd mov ecx, dword ptr [0x1264f78c] */
  ECX = (r32((uint32_t)(0x1264f78c)));
  /* 1262f9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1262f9e4 call 0x12631d80 */
  push32(0x1262f9e9u); f_12631d80();
  /* 1262f9e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262f9ee jne 0x1262fa21 */
  if (!C.zf) goto L_1262fa21;
  /* 1262f9f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262f9f2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262f9f5 push edx */
  push32((uint32_t)(EDX));
  /* 1262f9f6 call 0x1262fe00 */
  push32(0x1262f9fbu); f_1262fe00();
  /* 1262f9fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262f9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fa00 je 0x1262fa21 */
  if (C.zf) goto L_1262fa21;
  /* 1262fa02 mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262fa07 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1262fa0a mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
  /* 1262fa0f cmp dword ptr [0x1264f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fa16 jne 0x1262fa21 */
  if (!C.zf) goto L_1262fa21;
  /* 1262fa18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fa1b mov dword ptr [0x1264f77c], ecx */
  w32((uint32_t)(0x1264f77c), (ECX));
L_1262fa21:;
  /* 1262fa21 mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262fa26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1262fa29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262fa2b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fa2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1262fa2e:;
  /* 1262fa2e mov esp, ebp */
  ESP = (EBP);
  /* 1262fa30 pop ebp */
  EBP = (pop32());
  /* 1262fa31 ret 4 */
  ESPCHK(0x1262f710u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fa40 @ 0x1262fa40 (116 bytes, 33 insns) */
void f_1262fa40(void) {
  FTRACE(0x1262fa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fa40 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fa41 mov ebp, esp */
  EBP = (ESP);
  /* 1262fa43 push ecx */
  push32((uint32_t)(ECX));
  /* 1262fa44 mov eax, dword ptr [0x1264f78c] */
  EAX = (r32((uint32_t)(0x1264f78c)));
  /* 1262fa49 push eax */
  push32((uint32_t)(EAX));
  /* 1262fa4a call 0x12626410 */
  push32(0x1262fa4fu); f_12626410();
  /* 1262fa4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fa52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262fa54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fa57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1262fa5a mov dword ptr [0x1264f788], ecx */
  w32((uint32_t)(0x1264f788), (ECX));
  /* 1262fa60 cmp dword ptr [0x1264f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fa67 je 0x1262fa72 */
  if (C.zf) goto L_1262fa72;
  /* 1262fa69 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1262fa70 jmp 0x1262fa84 */
  goto L_1262fa84;
L_1262fa72:;
  /* 1262fa72 mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262fa78 push edx */
  push32((uint32_t)(EDX));
  /* 1262fa79 call 0x126300f0 */
  push32(0x1262fa7eu); f_126300f0();
  /* 1262fa7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fa81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262fa84:;
  /* 1262fa84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262fa87 mov dword ptr [0x1264f784], eax */
  w32((uint32_t)(0x1264f784), (EAX));
  /* 1262fa8c push 1 */
  push32((uint32_t)(0x1u));
  /* 1262fa8e push 0x1262fac0 */
  push32((uint32_t)(0x1262fac0u));
  /* 1262fa93 call dword ptr [0x12652274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652274))), 0x1262fa99u);
  /* 1262fa99 mov ecx, dword ptr [0x1264f794] */
  ECX = (r32((uint32_t)(0x1264f794)));
  /* 1262fa9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1262faa2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262faa4 jne 0x1262fab0 */
  if (!C.zf) goto L_1262fab0;
  /* 1262faa6 mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
L_1262fab0:;
  /* 1262fab0 mov esp, ebp */
  ESP = (EBP);
  /* 1262fab2 pop ebp */
  EBP = (pop32());
  /* 1262fab3 ret  */
  ESPCHK(0x1262fa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fac0 @ 0x1262fac0 (287 bytes, 86 insns) */
void f_1262fac0(void) {
  FTRACE(0x1262fac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fac1 mov ebp, esp */
  EBP = (ESP);
  /* 1262fac3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262fac9 push eax */
  push32((uint32_t)(EAX));
  /* 1262faca call 0x12630070 */
  push32(0x1262facfu); f_12630070();
  /* 1262facf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fad2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1262fad5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1262fad7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1262fada push ecx */
  push32((uint32_t)(ECX));
  /* 1262fadb mov edx, dword ptr [0x1264f788] */
  EDX = (r32((uint32_t)(0x1264f788)));
  /* 1262fae1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262fae3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fae5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1262faeb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262faf1 push edx */
  push32((uint32_t)(EDX));
  /* 1262faf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262faf5 push eax */
  push32((uint32_t)(EAX));
  /* 1262faf6 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262fafcu);
  /* 1262fafc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fafe jne 0x1262fb14 */
  if (!C.zf) goto L_1262fb14;
  /* 1262fb00 mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
  /* 1262fb0a mov eax, 1 */
  EAX = (0x1u);
  /* 1262fb0f jmp 0x1262fbd9 */
  goto L_1262fbd9;
L_1262fb14:;
  /* 1262fb14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1262fb17 push ecx */
  push32((uint32_t)(ECX));
  /* 1262fb18 mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262fb1e push edx */
  push32((uint32_t)(EDX));
  /* 1262fb1f call 0x12631cb0 */
  push32(0x1262fb24u); f_12631cb0();
  /* 1262fb24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fb27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fb29 jne 0x1262fb69 */
  if (!C.zf) goto L_1262fb69;
  /* 1262fb2b cmp dword ptr [0x1264f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fb32 jne 0x1262fb46 */
  if (!C.zf) goto L_1262fb46;
  /* 1262fb34 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262fb36 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fb39 push eax */
  push32((uint32_t)(EAX));
  /* 1262fb3a call 0x1262fe00 */
  push32(0x1262fb3fu); f_1262fe00();
  /* 1262fb3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fb42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fb44 je 0x1262fb67 */
  if (C.zf) goto L_1262fb67;
L_1262fb46:;
  /* 1262fb46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fb49 mov dword ptr [0x1264f798], ecx */
  w32((uint32_t)(0x1264f798), (ECX));
  /* 1262fb4f mov edx, dword ptr [0x1264f798] */
  EDX = (r32((uint32_t)(0x1264f798)));
  /* 1262fb55 mov dword ptr [0x1264f77c], edx */
  w32((uint32_t)(0x1264f77c), (EDX));
  /* 1262fb5b mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262fb60 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1262fb62 mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
L_1262fb67:;
  /* 1262fb67 jmp 0x1262fbcc */
  goto L_1262fbcc;
L_1262fb69:;
  /* 1262fb69 cmp dword ptr [0x1264f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fb70 jne 0x1262fbcc */
  if (!C.zf) goto L_1262fbcc;
  /* 1262fb72 cmp dword ptr [0x1264f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fb79 je 0x1262fbcc */
  if (C.zf) goto L_1262fbcc;
  /* 1262fb7b mov ecx, dword ptr [0x1264f784] */
  ECX = (r32((uint32_t)(0x1264f784)));
  /* 1262fb81 push ecx */
  push32((uint32_t)(ECX));
  /* 1262fb82 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1262fb85 push edx */
  push32((uint32_t)(EDX));
  /* 1262fb86 mov eax, dword ptr [0x1264f78c] */
  EAX = (r32((uint32_t)(0x1264f78c)));
  /* 1262fb8b push eax */
  push32((uint32_t)(EAX));
  /* 1262fb8c call 0x12631d80 */
  push32(0x1262fb91u); f_12631d80();
  /* 1262fb91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fb94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fb96 jne 0x1262fbcc */
  if (!C.zf) goto L_1262fbcc;
  /* 1262fb98 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262fb9a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fb9d push ecx */
  push32((uint32_t)(ECX));
  /* 1262fb9e call 0x1262fe00 */
  push32(0x1262fba3u); f_1262fe00();
  /* 1262fba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fba8 je 0x1262fbcc */
  if (C.zf) goto L_1262fbcc;
  /* 1262fbaa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fbad mov dword ptr [0x1264f798], edx */
  w32((uint32_t)(0x1264f798), (EDX));
  /* 1262fbb3 mov eax, dword ptr [0x1264f798] */
  EAX = (r32((uint32_t)(0x1264f798)));
  /* 1262fbb8 mov dword ptr [0x1264f77c], eax */
  w32((uint32_t)(0x1264f77c), (EAX));
  /* 1262fbbd mov ecx, dword ptr [0x1264f794] */
  ECX = (r32((uint32_t)(0x1264f794)));
  /* 1262fbc3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1262fbc6 mov dword ptr [0x1264f794], ecx */
  w32((uint32_t)(0x1264f794), (ECX));
L_1262fbcc:;
  /* 1262fbcc mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262fbd1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1262fbd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262fbd6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fbd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1262fbd9:;
  /* 1262fbd9 mov esp, ebp */
  ESP = (EBP);
  /* 1262fbdb pop ebp */
  EBP = (pop32());
  /* 1262fbdc ret 4 */
  ESPCHK(0x1262fac0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fbe0 @ 0x1262fbe0 (69 bytes, 20 insns) */
void f_1262fbe0(void) {
  FTRACE(0x1262fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1262fbe3 mov eax, dword ptr [0x1264f790] */
  EAX = (r32((uint32_t)(0x1264f790)));
  /* 1262fbe8 push eax */
  push32((uint32_t)(EAX));
  /* 1262fbe9 call 0x12626410 */
  push32(0x1262fbeeu); f_12626410();
  /* 1262fbee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fbf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262fbf3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fbf6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1262fbf9 mov dword ptr [0x1264f780], ecx */
  w32((uint32_t)(0x1264f780), (ECX));
  /* 1262fbff push 1 */
  push32((uint32_t)(0x1u));
  /* 1262fc01 push 0x1262fc30 */
  push32((uint32_t)(0x1262fc30u));
  /* 1262fc06 call dword ptr [0x12652274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652274))), 0x1262fc0cu);
  /* 1262fc0c mov edx, dword ptr [0x1264f794] */
  EDX = (r32((uint32_t)(0x1264f794)));
  /* 1262fc12 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1262fc15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262fc17 jne 0x1262fc23 */
  if (!C.zf) goto L_1262fc23;
  /* 1262fc19 mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
L_1262fc23:;
  /* 1262fc23 pop ebp */
  EBP = (pop32());
  /* 1262fc24 ret  */
  ESPCHK(0x1262fbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x1262fc30 (172 bytes, 54 insns) */
void f_1262fc30(void) {
  FTRACE(0x1262fc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fc31 mov ebp, esp */
  EBP = (ESP);
  /* 1262fc33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262fc39 push eax */
  push32((uint32_t)(EAX));
  /* 1262fc3a call 0x12630070 */
  push32(0x1262fc3fu); f_12630070();
  /* 1262fc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fc42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1262fc45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1262fc47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1262fc4a push ecx */
  push32((uint32_t)(ECX));
  /* 1262fc4b mov edx, dword ptr [0x1264f780] */
  EDX = (r32((uint32_t)(0x1264f780)));
  /* 1262fc51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262fc53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fc55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1262fc5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fc61 push edx */
  push32((uint32_t)(EDX));
  /* 1262fc62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fc65 push eax */
  push32((uint32_t)(EAX));
  /* 1262fc66 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262fc6cu);
  /* 1262fc6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fc6e jne 0x1262fc81 */
  if (!C.zf) goto L_1262fc81;
  /* 1262fc70 mov dword ptr [0x1264f794], 0 */
  w32((uint32_t)(0x1264f794), (0x0u));
  /* 1262fc7a mov eax, 1 */
  EAX = (0x1u);
  /* 1262fc7f jmp 0x1262fcd6 */
  goto L_1262fcd6;
L_1262fc81:;
  /* 1262fc81 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1262fc84 push ecx */
  push32((uint32_t)(ECX));
  /* 1262fc85 mov edx, dword ptr [0x1264f790] */
  EDX = (r32((uint32_t)(0x1264f790)));
  /* 1262fc8b push edx */
  push32((uint32_t)(EDX));
  /* 1262fc8c call 0x12631cb0 */
  push32(0x1262fc91u); f_12631cb0();
  /* 1262fc91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fc94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fc96 jne 0x1262fcc9 */
  if (!C.zf) goto L_1262fcc9;
  /* 1262fc98 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fc9b push eax */
  push32((uint32_t)(EAX));
  /* 1262fc9c call 0x1262fdb0 */
  push32(0x1262fca1u); f_1262fdb0();
  /* 1262fca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fca6 je 0x1262fcc9 */
  if (C.zf) goto L_1262fcc9;
  /* 1262fca8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1262fcab mov dword ptr [0x1264f798], ecx */
  w32((uint32_t)(0x1264f798), (ECX));
  /* 1262fcb1 mov edx, dword ptr [0x1264f798] */
  EDX = (r32((uint32_t)(0x1264f798)));
  /* 1262fcb7 mov dword ptr [0x1264f77c], edx */
  w32((uint32_t)(0x1264f77c), (EDX));
  /* 1262fcbd mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262fcc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1262fcc4 mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
L_1262fcc9:;
  /* 1262fcc9 mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262fcce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1262fcd1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262fcd3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fcd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1262fcd6:;
  /* 1262fcd6 mov esp, ebp */
  ESP = (EBP);
  /* 1262fcd8 pop ebp */
  EBP = (pop32());
  /* 1262fcd9 ret 4 */
  ESPCHK(0x1262fc30u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fce0 @ 0x1262fce0 (43 bytes, 11 insns) */
void f_1262fce0(void) {
  FTRACE(0x1262fce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fce1 mov ebp, esp */
  EBP = (ESP);
  /* 1262fce3 mov eax, dword ptr [0x1264f794] */
  EAX = (r32((uint32_t)(0x1264f794)));
  /* 1262fce8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1262fced mov dword ptr [0x1264f794], eax */
  w32((uint32_t)(0x1264f794), (EAX));
  /* 1262fcf2 call dword ptr [0x12652270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652270))), 0x1262fcf8u);
  /* 1262fcf8 mov dword ptr [0x1264f798], eax */
  w32((uint32_t)(0x1264f798), (EAX));
  /* 1262fcfd mov ecx, dword ptr [0x1264f798] */
  ECX = (r32((uint32_t)(0x1264f798)));
  /* 1262fd03 mov dword ptr [0x1264f77c], ecx */
  w32((uint32_t)(0x1264f77c), (ECX));
  /* 1262fd09 pop ebp */
  EBP = (pop32());
  /* 1262fd0a ret  */
  ESPCHK(0x1262fce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x1262fd10 (155 bytes, 57 insns) */
void f_1262fd10(void) {
  FTRACE(0x1262fd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fd11 mov ebp, esp */
  EBP = (ESP);
  /* 1262fd13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fd16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fd1a je 0x1262fd3b */
  if (C.zf) goto L_1262fd3b;
  /* 1262fd1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262fd1f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262fd22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262fd24 je 0x1262fd3b */
  if (C.zf) goto L_1262fd3b;
  /* 1262fd26 push 0x1264b7bc */
  push32((uint32_t)(0x1264b7bcu));
  /* 1262fd2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262fd2e push edx */
  push32((uint32_t)(EDX));
  /* 1262fd2f call 0x1262f270 */
  push32(0x1262fd34u); f_1262f270();
  /* 1262fd34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fd37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fd39 jne 0x1262fd63 */
  if (!C.zf) goto L_1262fd63;
L_1262fd3b:;
  /* 1262fd3b push 8 */
  push32((uint32_t)(0x8u));
  /* 1262fd3d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1262fd40 push eax */
  push32((uint32_t)(EAX));
  /* 1262fd41 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1262fd46 mov ecx, dword ptr [0x1264f798] */
  ECX = (r32((uint32_t)(0x1264f798)));
  /* 1262fd4c push ecx */
  push32((uint32_t)(ECX));
  /* 1262fd4d call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262fd53u);
  /* 1262fd53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fd55 jne 0x1262fd5b */
  if (!C.zf) goto L_1262fd5b;
  /* 1262fd57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262fd59 jmp 0x1262fda7 */
  goto L_1262fda7;
L_1262fd5b:;
  /* 1262fd5b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1262fd5e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1262fd61 jmp 0x1262fd9b */
  goto L_1262fd9b;
L_1262fd63:;
  /* 1262fd63 push 0x1264b7b8 */
  push32((uint32_t)(0x1264b7b8u));
  /* 1262fd68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262fd6b push eax */
  push32((uint32_t)(EAX));
  /* 1262fd6c call 0x1262f270 */
  push32(0x1262fd71u); f_1262f270();
  /* 1262fd71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fd74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fd76 jne 0x1262fd9b */
  if (!C.zf) goto L_1262fd9b;
  /* 1262fd78 push 8 */
  push32((uint32_t)(0x8u));
  /* 1262fd7a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1262fd7d push ecx */
  push32((uint32_t)(ECX));
  /* 1262fd7e push 0xb */
  push32((uint32_t)(0xbu));
  /* 1262fd80 mov edx, dword ptr [0x1264f798] */
  EDX = (r32((uint32_t)(0x1264f798)));
  /* 1262fd86 push edx */
  push32((uint32_t)(EDX));
  /* 1262fd87 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262fd8du);
  /* 1262fd8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fd8f jne 0x1262fd95 */
  if (!C.zf) goto L_1262fd95;
  /* 1262fd91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262fd93 jmp 0x1262fda7 */
  goto L_1262fda7;
L_1262fd95:;
  /* 1262fd95 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1262fd98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1262fd9b:;
  /* 1262fd9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262fd9e push ecx */
  push32((uint32_t)(ECX));
  /* 1262fd9f call 0x12631e90 */
  push32(0x1262fda4u); f_12631e90();
  /* 1262fda4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262fda7:;
  /* 1262fda7 mov esp, ebp */
  ESP = (EBP);
  /* 1262fda9 pop ebp */
  EBP = (pop32());
  /* 1262fdaa ret  */
  ESPCHK(0x1262fd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdb0 @ 0x1262fdb0 (79 bytes, 26 insns) */
void f_1262fdb0(void) {
  FTRACE(0x1262fdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1262fdb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fdb6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1262fdba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1262fdbe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262fdc5 jmp 0x1262fdd0 */
  goto L_1262fdd0;
L_1262fdc7:;
  /* 1262fdc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262fdca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fdcd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1262fdd0:;
  /* 1262fdd0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fdd4 jae 0x1262fdf6 */
  if (!C.cf) goto L_1262fdf6;
  /* 1262fdd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262fdd9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262fddf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262fde2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262fde4 mov cx, word ptr [eax*2 + 0x1264e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1264e9c4)));
  /* 1262fdec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fdee jne 0x1262fdf4 */
  if (!C.zf) goto L_1262fdf4;
  /* 1262fdf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262fdf2 jmp 0x1262fdfb */
  goto L_1262fdfb;
L_1262fdf4:;
  /* 1262fdf4 jmp 0x1262fdc7 */
  goto L_1262fdc7;
L_1262fdf6:;
  /* 1262fdf6 mov eax, 1 */
  EAX = (0x1u);
L_1262fdfb:;
  /* 1262fdfb mov esp, ebp */
  ESP = (EBP);
  /* 1262fdfd pop ebp */
  EBP = (pop32());
  /* 1262fdfe ret  */
  ESPCHK(0x1262fdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe00 @ 0x1262fe00 (135 bytes, 48 insns) */
void f_1262fe00(void) {
  FTRACE(0x1262fe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fe00 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fe01 mov ebp, esp */
  EBP = (ESP);
  /* 1262fe03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fe06 push esi */
  push32((uint32_t)(ESI));
  /* 1262fe07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262fe0a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262fe0f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262fe14 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262fe19 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1262fe1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262fe21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262fe24 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1262fe26 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1262fe29 push ecx */
  push32((uint32_t)(ECX));
  /* 1262fe2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262fe2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262fe2f push edx */
  push32((uint32_t)(EDX));
  /* 1262fe30 call dword ptr [0x1264f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f79c))), 0x1262fe36u);
  /* 1262fe36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262fe38 jne 0x1262fe3e */
  if (!C.zf) goto L_1262fe3e;
  /* 1262fe3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262fe3c jmp 0x1262fe82 */
  goto L_1262fe82;
L_1262fe3e:;
  /* 1262fe3e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1262fe41 push eax */
  push32((uint32_t)(EAX));
  /* 1262fe42 call 0x12630070 */
  push32(0x1262fe47u); f_12630070();
  /* 1262fe47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fe4a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fe4d je 0x1262fe7d */
  if (C.zf) goto L_1262fe7d;
  /* 1262fe4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fe53 je 0x1262fe7d */
  if (C.zf) goto L_1262fe7d;
  /* 1262fe55 mov ecx, dword ptr [0x1264f78c] */
  ECX = (r32((uint32_t)(0x1264f78c)));
  /* 1262fe5b push ecx */
  push32((uint32_t)(ECX));
  /* 1262fe5c call 0x126300f0 */
  push32(0x1262fe61u); f_126300f0();
  /* 1262fe61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fe64 mov esi, eax */
  ESI = (EAX);
  /* 1262fe66 mov edx, dword ptr [0x1264f78c] */
  EDX = (r32((uint32_t)(0x1264f78c)));
  /* 1262fe6c push edx */
  push32((uint32_t)(EDX));
  /* 1262fe6d call 0x12626410 */
  push32(0x1262fe72u); f_12626410();
  /* 1262fe72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262fe75 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fe77 jne 0x1262fe7d */
  if (!C.zf) goto L_1262fe7d;
  /* 1262fe79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262fe7b jmp 0x1262fe82 */
  goto L_1262fe82;
L_1262fe7d:;
  /* 1262fe7d mov eax, 1 */
  EAX = (0x1u);
L_1262fe82:;
  /* 1262fe82 pop esi */
  ESI = (pop32());
  /* 1262fe83 mov esp, ebp */
  ESP = (EBP);
  /* 1262fe85 pop ebp */
  EBP = (pop32());
  /* 1262fe86 ret  */
  ESPCHK(0x1262fe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x1262fe90 (77 bytes, 18 insns) */
void f_1262fe90(void) {
  FTRACE(0x1262fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fe91 mov ebp, esp */
  EBP = (ESP);
  /* 1262fe93 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fe99 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1262fea3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1262fea9 push eax */
  push32((uint32_t)(EAX));
  /* 1262feaa call dword ptr [0x1265226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265226c))), 0x1262feb0u);
  /* 1262feb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262feb2 je 0x1262fec9 */
  if (C.zf) goto L_1262fec9;
  /* 1262feb4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262febb jne 0x1262fec9 */
  if (!C.zf) goto L_1262fec9;
  /* 1262febd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1262fec7 jmp 0x1262fed3 */
  goto L_1262fed3;
L_1262fec9:;
  /* 1262fec9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1262fed3:;
  /* 1262fed3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1262fed9 mov esp, ebp */
  ESP = (EBP);
  /* 1262fedb pop ebp */
  EBP = (pop32());
  /* 1262fedc ret  */
  ESPCHK(0x1262fe90u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1262fee0 (388 bytes, 118 insns) */
void f_1262fee0(void) {
  FTRACE(0x1262fee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262fee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1262fee1 mov ebp, esp */
  EBP = (ESP);
  /* 1262fee3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fee6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1262feed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1262fef4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1262fefb:;
  /* 1262fefb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262fefe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff01 jg 0x12630048 */
  if ((!C.zf&&C.sf==C.of)) goto L_12630048;
  /* 1262ff07 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262ff0a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ff0d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1262ff0e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262ff10 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1262ff12 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1262ff15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ff18 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ff1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262ff1e cmp edx, dword ptr [ecx + 0x1264e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1264e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff24 jne 0x1263001e */
  if (!C.zf) goto L_1263001e;
  /* 1262ff2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262ff2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1262ff30 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff34 ja 0x1262ff57 */
  if ((!C.cf&&!C.zf)) goto L_1262ff57;
  /* 1262ff36 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff3a je 0x1262ffc9 */
  if (C.zf) goto L_1262ffc9;
  /* 1262ff40 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff44 je 0x1262ff74 */
  if (C.zf) goto L_1262ff74;
  /* 1262ff46 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff4a je 0x1262ff96 */
  if (C.zf) goto L_1262ff96;
  /* 1262ff4c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff50 je 0x1262ffb8 */
  if (C.zf) goto L_1262ffb8;
  /* 1262ff52 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ff57:;
  /* 1262ff57 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff5e je 0x1262ff85 */
  if (C.zf) goto L_1262ff85;
  /* 1262ff60 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff67 je 0x1262ffa7 */
  if (C.zf) goto L_1262ffa7;
  /* 1262ff69 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ff70 je 0x1262ffda */
  if (C.zf) goto L_1262ffda;
  /* 1262ff72 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ff74:;
  /* 1262ff74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ff77 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ff7a add ecx, 0x1264e524 */
  { uint32_t _a=(ECX),_b=(0x1264e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ff80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ff83 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ff85:;
  /* 1262ff85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ff88 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ff8b mov eax, dword ptr [edx + 0x1264e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1264e52c)));
  /* 1262ff91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262ff94 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ff96:;
  /* 1262ff96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ff99 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ff9c add ecx, 0x1264e530 */
  { uint32_t _a=(ECX),_b=(0x1264e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ffa2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ffa5 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ffa7:;
  /* 1262ffa7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ffaa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ffad mov eax, dword ptr [edx + 0x1264e534] */
  EAX = (r32((uint32_t)(EDX + 0x1264e534)));
  /* 1262ffb3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262ffb6 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ffb8:;
  /* 1262ffb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ffbb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ffbe add ecx, 0x1264e538 */
  { uint32_t _a=(ECX),_b=(0x1264e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ffc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1262ffc7 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ffc9:;
  /* 1262ffc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ffcc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ffcf add edx, 0x1264e53c */
  { uint32_t _a=(EDX),_b=(0x1264e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ffd5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1262ffd8 jmp 0x1262ffe8 */
  goto L_1262ffe8;
L_1262ffda:;
  /* 1262ffda mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262ffdd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1262ffe0 add eax, 0x1264e544 */
  { uint32_t _a=(EAX),_b=(0x1264e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262ffe5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1262ffe8:;
  /* 1262ffe8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262ffec je 0x1262fff4 */
  if (C.zf) goto L_1262fff4;
  /* 1262ffee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262fff2 jge 0x1262fff6 */
  if ((C.sf==C.of)) goto L_1262fff6;
L_1262fff4:;
  /* 1262fff4 jmp 0x12630048 */
  goto L_12630048;
L_1262fff6:;
  /* 1262fff6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262fff9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262fffc push ecx */
  push32((uint32_t)(ECX));
  /* 1262fffd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12630000 push edx */
  push32((uint32_t)(EDX));
  /* 12630001 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630004 push eax */
  push32((uint32_t)(EAX));
  /* 12630005 call 0x12626e00 */
  push32(0x1263000au); f_12626e00();
  /* 1263000a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263000d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12630010 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630013 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12630017 mov eax, 1 */
  EAX = (0x1u);
  /* 1263001c jmp 0x1263005e */
  goto L_1263005e;
L_1263001e:;
  /* 1263001e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630021 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12630024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630027 cmp eax, dword ptr [edx + 0x1264e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1264e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263002d jae 0x1263003a */
  if (!C.cf) goto L_1263003a;
  /* 1263002f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630032 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630035 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12630038 jmp 0x12630043 */
  goto L_12630043;
L_1263003a:;
  /* 1263003a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263003d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630040 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12630043:;
  /* 12630043 jmp 0x1262fefb */
  goto L_1262fefb;
L_12630048:;
  /* 12630048 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1263004b push eax */
  push32((uint32_t)(EAX));
  /* 1263004c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263004f push ecx */
  push32((uint32_t)(ECX));
  /* 12630050 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630053 push edx */
  push32((uint32_t)(EDX));
  /* 12630054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630057 push eax */
  push32((uint32_t)(EAX));
  /* 12630058 call dword ptr [0x12652278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652278))), 0x1263005eu);
L_1263005e:;
  /* 1263005e mov esp, ebp */
  ESP = (EBP);
  /* 12630060 pop ebp */
  EBP = (pop32());
  /* 12630061 ret 0x10 */
  ESPCHK(0x1262fee0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010070 @ 0x12630070 (118 bytes, 42 insns) */
void f_12630070(void) {
  FTRACE(0x12630070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630070 push ebp */
  push32((uint32_t)(EBP));
  /* 12630071 mov ebp, esp */
  EBP = (ESP);
  /* 12630073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630076 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1263007d:;
  /* 1263007d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630080 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12630082 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12630085 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12630089 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263008c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263008f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12630092 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12630094 je 0x126300df */
  if (C.zf) goto L_126300df;
  /* 12630096 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1263009a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263009d jl 0x126300b2 */
  if ((C.sf!=C.of)) goto L_126300b2;
  /* 1263009f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 126300a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126300a6 jg 0x126300b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_126300b2;
  /* 126300a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 126300ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 126300ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 126300b0 jmp 0x126300cc */
  goto L_126300cc;
L_126300b2:;
  /* 126300b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 126300b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126300b9 jl 0x126300cc */
  if ((C.sf!=C.of)) goto L_126300cc;
  /* 126300bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 126300bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126300c2 jg 0x126300cc */
  if ((!C.zf&&C.sf==C.of)) goto L_126300cc;
  /* 126300c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 126300c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 126300c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_126300cc:;
  /* 126300cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126300cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 126300d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 126300d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 126300da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126300dd jmp 0x1263007d */
  goto L_1263007d;
L_126300df:;
  /* 126300df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126300e2 mov esp, ebp */
  ESP = (EBP);
  /* 126300e4 pop ebp */
  EBP = (pop32());
  /* 126300e5 ret  */
  ESPCHK(0x12630070u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x126300f0 (101 bytes, 36 insns) */
void f_126300f0(void) {
  FTRACE(0x126300f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126300f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126300f1 mov ebp, esp */
  EBP = (ESP);
  /* 126300f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126300f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 126300fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630100 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12630102 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12630105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630108 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263010b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1263010e:;
  /* 1263010e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12630112 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630115 jl 0x12630120 */
  if ((C.sf!=C.of)) goto L_12630120;
  /* 12630117 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1263011b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263011e jle 0x12630132 */
  if ((C.zf||C.sf!=C.of)) goto L_12630132;
L_12630120:;
  /* 12630120 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12630124 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630127 jl 0x1263014e */
  if ((C.sf!=C.of)) goto L_1263014e;
  /* 12630129 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1263012d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630130 jg 0x1263014e */
  if ((!C.zf&&C.sf==C.of)) goto L_1263014e;
L_12630132:;
  /* 12630132 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12630135 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630138 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1263013b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263013e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12630140 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12630143 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630146 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630149 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1263014c jmp 0x1263010e */
  goto L_1263010e;
L_1263014e:;
  /* 1263014e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12630151 mov esp, ebp */
  ESP = (EBP);
  /* 12630153 pop ebp */
  EBP = (pop32());
  /* 12630154 ret  */
  ESPCHK(0x126300f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x12630160 (122 bytes, 39 insns) */
void f_12630160(void) {
  FTRACE(0x12630160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630160 push ebp */
  push32((uint32_t)(EBP));
  /* 12630161 mov ebp, esp */
  EBP = (ESP);
  /* 12630163 push ecx */
  push32((uint32_t)(ECX));
  /* 12630164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630167 cmp eax, dword ptr [0x1265101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1265101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263016d jae 0x12630191 */
  if (!C.cf) goto L_12630191;
  /* 1263016f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630172 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12630175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630178 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1263017b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1263017e mov eax, dword ptr [ecx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 12630185 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1263018a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1263018d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1263018f jne 0x126301ac */
  if (!C.zf) goto L_126301ac;
L_12630191:;
  /* 12630191 call 0x1262b4b0 */
  push32(0x12630196u); f_1262b4b0();
  /* 12630196 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1263019c call 0x1262b4c0 */
  push32(0x126301a1u); f_1262b4c0();
  /* 126301a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 126301a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126301aa jmp 0x126301d6 */
  goto L_126301d6;
L_126301ac:;
  /* 126301ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126301af push edx */
  push32((uint32_t)(EDX));
  /* 126301b0 call 0x1262ccd0 */
  push32(0x126301b5u); f_1262ccd0();
  /* 126301b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126301b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126301bb push eax */
  push32((uint32_t)(EAX));
  /* 126301bc call 0x126301e0 */
  push32(0x126301c1u); f_126301e0();
  /* 126301c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126301c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126301c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126301ca push ecx */
  push32((uint32_t)(ECX));
  /* 126301cb call 0x1262cd60 */
  push32(0x126301d0u); f_1262cd60();
  /* 126301d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126301d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_126301d6:;
  /* 126301d6 mov esp, ebp */
  ESP = (EBP);
  /* 126301d8 pop ebp */
  EBP = (pop32());
  /* 126301d9 ret  */
  ESPCHK(0x12630160u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x126301e0 (170 bytes, 59 insns) */
void f_126301e0(void) {
  FTRACE(0x126301e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126301e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126301e1 mov ebp, esp */
  EBP = (ESP);
  /* 126301e3 push ecx */
  push32((uint32_t)(ECX));
  /* 126301e4 push esi */
  push32((uint32_t)(ESI));
  /* 126301e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126301e8 push eax */
  push32((uint32_t)(EAX));
  /* 126301e9 call 0x1262cb50 */
  push32(0x126301eeu); f_1262cb50();
  /* 126301ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126301f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126301f4 je 0x12630233 */
  if (C.zf) goto L_12630233;
  /* 126301f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126301fa je 0x12630202 */
  if (C.zf) goto L_12630202;
  /* 126301fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630200 jne 0x1263021c */
  if (!C.zf) goto L_1263021c;
L_12630202:;
  /* 12630202 push 1 */
  push32((uint32_t)(0x1u));
  /* 12630204 call 0x1262cb50 */
  push32(0x12630209u); f_1262cb50();
  /* 12630209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263020c mov esi, eax */
  ESI = (EAX);
  /* 1263020e push 2 */
  push32((uint32_t)(0x2u));
  /* 12630210 call 0x1262cb50 */
  push32(0x12630215u); f_1262cb50();
  /* 12630215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630218 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263021a je 0x12630233 */
  if (C.zf) goto L_12630233;
L_1263021c:;
  /* 1263021c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263021f push ecx */
  push32((uint32_t)(ECX));
  /* 12630220 call 0x1262cb50 */
  push32(0x12630225u); f_1262cb50();
  /* 12630225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630228 push eax */
  push32((uint32_t)(EAX));
  /* 12630229 call dword ptr [0x12652268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652268))), 0x1263022fu);
  /* 1263022f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12630231 je 0x1263023c */
  if (C.zf) goto L_1263023c;
L_12630233:;
  /* 12630233 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1263023a jmp 0x12630245 */
  goto L_12630245;
L_1263023c:;
  /* 1263023c call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x12630242u);
  /* 12630242 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12630245:;
  /* 12630245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630248 push edx */
  push32((uint32_t)(EDX));
  /* 12630249 call 0x1262ca70 */
  push32(0x1263024eu); f_1262ca70();
  /* 1263024e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630254 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12630257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263025a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1263025d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12630260 mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 12630267 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1263026c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630270 je 0x12630283 */
  if (C.zf) goto L_12630283;
  /* 12630272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12630275 push eax */
  push32((uint32_t)(EAX));
  /* 12630276 call 0x1262b410 */
  push32(0x1263027bu); f_1262b410();
  /* 1263027b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263027e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12630281 jmp 0x12630285 */
  goto L_12630285;
L_12630283:;
  /* 12630283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12630285:;
  /* 12630285 pop esi */
  ESI = (pop32());
  /* 12630286 mov esp, ebp */
  ESP = (EBP);
  /* 12630288 pop ebp */
  EBP = (pop32());
  /* 12630289 ret  */
  ESPCHK(0x126301e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010290 @ 0x12630290 (146 bytes, 52 insns) */
void f_12630290(void) {
  FTRACE(0x12630290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630290 push ebp */
  push32((uint32_t)(EBP));
  /* 12630291 mov ebp, esp */
  EBP = (ESP);
  /* 12630293 push ebx */
  push32((uint32_t)(EBX));
  /* 12630294 push esi */
  push32((uint32_t)(ESI));
  /* 12630295 push edi */
  push32((uint32_t)(EDI));
L_12630296:;
  /* 12630296 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263029a jne 0x126302ba */
  if (!C.zf) goto L_126302ba;
  /* 1263029c push 0x1264b0f8 */
  push32((uint32_t)(0x1264b0f8u));
  /* 126302a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126302a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 126302a5 push 0x1264b7c0 */
  push32((uint32_t)(0x1264b7c0u));
  /* 126302aa push 2 */
  push32((uint32_t)(0x2u));
  /* 126302ac call 0x126226a0 */
  push32(0x126302b1u); f_126226a0();
  /* 126302b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126302b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126302b7 jne 0x126302ba */
  if (!C.zf) goto L_126302ba;
  /* 126302b9 int3  */
  x86_unimpl("int3 @ 0x126302b9");
L_126302ba:;
  /* 126302ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126302bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126302be jne 0x12630296 */
  if (!C.zf) goto L_12630296;
  /* 126302c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126302c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 126302c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 126302cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126302ce je 0x1263031d */
  if (C.zf) goto L_1263031d;
  /* 126302d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126302d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 126302d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 126302d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126302db je 0x1263031d */
  if (C.zf) goto L_1263031d;
  /* 126302dd push 2 */
  push32((uint32_t)(0x2u));
  /* 126302df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126302e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 126302e5 push eax */
  push32((uint32_t)(EAX));
  /* 126302e6 call 0x12624070 */
  push32(0x126302ebu); f_12624070();
  /* 126302eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126302ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126302f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 126302f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 126302fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126302fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12630300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630303 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12630309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1263030c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12630313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630316 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1263031d:;
  /* 1263031d pop edi */
  EDI = (pop32());
  /* 1263031e pop esi */
  ESI = (pop32());
  /* 1263031f pop ebx */
  EBX = (pop32());
  /* 12630320 pop ebp */
  EBP = (pop32());
  /* 12630321 ret  */
  ESPCHK(0x12630290u, _esp0);
  ESP += 4; return;
}

/* FUN_10010330 @ 0x12630330 (289 bytes, 97 insns) */
void f_12630330(void) {
  FTRACE(0x12630330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630330 push ebp */
  push32((uint32_t)(EBP));
  /* 12630331 mov ebp, esp */
  EBP = (ESP);
  /* 12630333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630336 push esi */
  push32((uint32_t)(ESI));
  /* 12630337 mov eax, dword ptr [0x1264ec98] */
  EAX = (r32((uint32_t)(0x1264ec98)));
  /* 1263033c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1263033f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12630346 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1263034d jmp 0x12630358 */
  goto L_12630358;
L_1263034f:;
  /* 1263034f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630352 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630355 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12630358:;
  /* 12630358 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263035c jae 0x12630391 */
  if (!C.cf) goto L_12630391;
  /* 1263035e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630361 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630364 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12630367 push ecx */
  push32((uint32_t)(ECX));
  /* 12630368 call 0x12626410 */
  push32(0x1263036du); f_12626410();
  /* 1263036d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630370 mov esi, eax */
  ESI = (EAX);
  /* 12630372 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630375 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630378 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1263037c push ecx */
  push32((uint32_t)(ECX));
  /* 1263037d call 0x12626410 */
  push32(0x12630382u); f_12626410();
  /* 12630382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630385 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630388 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1263038c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1263038f jmp 0x1263034f */
  goto L_1263034f;
L_12630391:;
  /* 12630391 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12630394 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630397 push eax */
  push32((uint32_t)(EAX));
  /* 12630398 call 0x126235c0 */
  push32(0x1263039du); f_126235c0();
  /* 1263039d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126303a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126303a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126303a7 je 0x12630449 */
  if (C.zf) goto L_12630449;
  /* 126303ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126303b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126303b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 126303ba jmp 0x126303c5 */
  goto L_126303c5;
L_126303bc:;
  /* 126303bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126303bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126303c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_126303c5:;
  /* 126303c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126303c9 jae 0x1263043a */
  if (!C.cf) goto L_1263043a;
  /* 126303cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126303ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 126303d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126303d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126303d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126303da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126303dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126303e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 126303e3 push ecx */
  push32((uint32_t)(ECX));
  /* 126303e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126303e7 push edx */
  push32((uint32_t)(EDX));
  /* 126303e8 call 0x12626590 */
  push32(0x126303edu); f_12626590();
  /* 126303ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126303f0 push eax */
  push32((uint32_t)(EAX));
  /* 126303f1 call 0x12626410 */
  push32(0x126303f6u); f_12626410();
  /* 126303f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126303f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126303fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126303fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12630401 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630404 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12630407 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263040a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263040d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12630410 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630413 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630416 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1263041a push eax */
  push32((uint32_t)(EAX));
  /* 1263041b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263041e push ecx */
  push32((uint32_t)(ECX));
  /* 1263041f call 0x12626590 */
  push32(0x12630424u); f_12626590();
  /* 12630424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630427 push eax */
  push32((uint32_t)(EAX));
  /* 12630428 call 0x12626410 */
  push32(0x1263042du); f_12626410();
  /* 1263042d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630430 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630433 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630435 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12630438 jmp 0x126303bc */
  goto L_126303bc;
L_1263043a:;
  /* 1263043a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263043d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12630440 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630443 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630446 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12630449:;
  /* 12630449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263044c pop esi */
  ESI = (pop32());
  /* 1263044d mov esp, ebp */
  ESP = (EBP);
  /* 1263044f pop ebp */
  EBP = (pop32());
  /* 12630450 ret  */
  ESPCHK(0x12630330u, _esp0);
  ESP += 4; return;
}

/* FUN_10010460 @ 0x12630460 (291 bytes, 97 insns) */
void f_12630460(void) {
  FTRACE(0x12630460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630460 push ebp */
  push32((uint32_t)(EBP));
  /* 12630461 mov ebp, esp */
  EBP = (ESP);
  /* 12630463 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630466 push esi */
  push32((uint32_t)(ESI));
  /* 12630467 mov eax, dword ptr [0x1264ec98] */
  EAX = (r32((uint32_t)(0x1264ec98)));
  /* 1263046c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1263046f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12630476 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1263047d jmp 0x12630488 */
  goto L_12630488;
L_1263047f:;
  /* 1263047f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630482 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630485 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12630488:;
  /* 12630488 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263048c jae 0x126304c2 */
  if (!C.cf) goto L_126304c2;
  /* 1263048e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630491 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630494 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12630498 push ecx */
  push32((uint32_t)(ECX));
  /* 12630499 call 0x12626410 */
  push32(0x1263049eu); f_12626410();
  /* 1263049e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126304a1 mov esi, eax */
  ESI = (EAX);
  /* 126304a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126304a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126304a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 126304ad push ecx */
  push32((uint32_t)(ECX));
  /* 126304ae call 0x12626410 */
  push32(0x126304b3u); f_12626410();
  /* 126304b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126304b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126304b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 126304bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 126304c0 jmp 0x1263047f */
  goto L_1263047f;
L_126304c2:;
  /* 126304c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126304c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126304c8 push eax */
  push32((uint32_t)(EAX));
  /* 126304c9 call 0x126235c0 */
  push32(0x126304ceu); f_126235c0();
  /* 126304ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126304d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126304d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126304d8 je 0x1263057b */
  if (C.zf) goto L_1263057b;
  /* 126304de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126304e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126304e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 126304eb jmp 0x126304f6 */
  goto L_126304f6;
L_126304ed:;
  /* 126304ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126304f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126304f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_126304f6:;
  /* 126304f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126304fa jae 0x1263056c */
  if (!C.cf) goto L_1263056c;
  /* 126304fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126304ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12630502 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630505 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630508 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1263050b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263050e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630511 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12630515 push ecx */
  push32((uint32_t)(ECX));
  /* 12630516 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630519 push edx */
  push32((uint32_t)(EDX));
  /* 1263051a call 0x12626590 */
  push32(0x1263051fu); f_12626590();
  /* 1263051f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630522 push eax */
  push32((uint32_t)(EAX));
  /* 12630523 call 0x12626410 */
  push32(0x12630528u); f_12626410();
  /* 12630528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263052b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263052e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630530 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12630533 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630536 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12630539 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263053c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263053f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12630542 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630545 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630548 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1263054c push eax */
  push32((uint32_t)(EAX));
  /* 1263054d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630550 push ecx */
  push32((uint32_t)(ECX));
  /* 12630551 call 0x12626590 */
  push32(0x12630556u); f_12626590();
  /* 12630556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630559 push eax */
  push32((uint32_t)(EAX));
  /* 1263055a call 0x12626410 */
  push32(0x1263055fu); f_12626410();
  /* 1263055f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630562 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630565 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630567 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1263056a jmp 0x126304ed */
  goto L_126304ed;
L_1263056c:;
  /* 1263056c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263056f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12630572 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630575 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630578 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1263057b:;
  /* 1263057b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1263057e pop esi */
  ESI = (pop32());
  /* 1263057f mov esp, ebp */
  ESP = (EBP);
  /* 12630581 pop ebp */
  EBP = (pop32());
  /* 12630582 ret  */
  ESPCHK(0x12630460u, _esp0);
  ESP += 4; return;
}

/* FUN_10010590 @ 0x12630590 (878 bytes, 273 insns) */
void f_12630590(void) {
  FTRACE(0x12630590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630590 push ebp */
  push32((uint32_t)(EBP));
  /* 12630591 mov ebp, esp */
  EBP = (ESP);
  /* 12630593 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12630596 push esi */
  push32((uint32_t)(ESI));
  /* 12630597 mov eax, dword ptr [0x1264ec98] */
  EAX = (r32((uint32_t)(0x1264ec98)));
  /* 1263059c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1263059f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 126305a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 126305ad jmp 0x126305b8 */
  goto L_126305b8;
L_126305af:;
  /* 126305af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126305b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126305b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_126305b8:;
  /* 126305b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126305bc jae 0x126305f1 */
  if (!C.cf) goto L_126305f1;
  /* 126305be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126305c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126305c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 126305c7 push ecx */
  push32((uint32_t)(ECX));
  /* 126305c8 call 0x12626410 */
  push32(0x126305cdu); f_12626410();
  /* 126305cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126305d0 mov esi, eax */
  ESI = (EAX);
  /* 126305d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126305d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126305d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 126305dc push ecx */
  push32((uint32_t)(ECX));
  /* 126305dd call 0x12626410 */
  push32(0x126305e2u); f_12626410();
  /* 126305e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126305e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126305e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 126305ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 126305ef jmp 0x126305af */
  goto L_126305af;
L_126305f1:;
  /* 126305f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 126305f8 jmp 0x12630603 */
  goto L_12630603;
L_126305fa:;
  /* 126305fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126305fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630600 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12630603:;
  /* 12630603 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12630607 jae 0x1263063d */
  if (!C.cf) goto L_1263063d;
  /* 12630609 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263060c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263060f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12630613 push eax */
  push32((uint32_t)(EAX));
  /* 12630614 call 0x12626410 */
  push32(0x12630619u); f_12626410();
  /* 12630619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263061c mov esi, eax */
  ESI = (EAX);
  /* 1263061e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630621 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630624 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12630628 push eax */
  push32((uint32_t)(EAX));
  /* 12630629 call 0x12626410 */
  push32(0x1263062eu); f_12626410();
  /* 1263062e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630631 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630634 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12630638 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1263063b jmp 0x126305fa */
  goto L_126305fa;
L_1263063d:;
  /* 1263063d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630640 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12630646 push eax */
  push32((uint32_t)(EAX));
  /* 12630647 call 0x12626410 */
  push32(0x1263064cu); f_12626410();
  /* 1263064c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263064f mov esi, eax */
  ESI = (EAX);
  /* 12630651 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630654 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1263065a push edx */
  push32((uint32_t)(EDX));
  /* 1263065b call 0x12626410 */
  push32(0x12630660u); f_12626410();
  /* 12630660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630663 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630666 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1263066a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1263066d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630670 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12630676 push edx */
  push32((uint32_t)(EDX));
  /* 12630677 call 0x12626410 */
  push32(0x1263067cu); f_12626410();
  /* 1263067c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263067f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12630682 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12630686 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12630689 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263068c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12630692 push ecx */
  push32((uint32_t)(ECX));
  /* 12630693 call 0x12626410 */
  push32(0x12630698u); f_12626410();
  /* 12630698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263069b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1263069e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 126306a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126306a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126306a8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 126306ae push edx */
  push32((uint32_t)(EDX));
  /* 126306af call 0x12626410 */
  push32(0x126306b4u); f_12626410();
  /* 126306b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126306b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126306ba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 126306be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 126306c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126306c4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126306c9 push eax */
  push32((uint32_t)(EAX));
  /* 126306ca call 0x126235c0 */
  push32(0x126306cfu); f_126235c0();
  /* 126306cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126306d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126306d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126306d9 je 0x126308f6 */
  if (C.zf) goto L_126308f6;
  /* 126306df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126306e2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 126306e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126306e8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126306ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126306f1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 126306f6 mov eax, dword ptr [0x1264ec98] */
  EAX = (r32((uint32_t)(0x1264ec98)));
  /* 126306fb push eax */
  push32((uint32_t)(EAX));
  /* 126306fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126306ff push ecx */
  push32((uint32_t)(ECX));
  /* 12630700 call 0x12629ec0 */
  push32(0x12630705u); f_12629ec0();
  /* 12630705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630708 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1263070f jmp 0x1263071a */
  goto L_1263071a;
L_12630711:;
  /* 12630711 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630714 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12630717 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1263071a:;
  /* 1263071a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1263071e jae 0x1263078e */
  if (!C.cf) goto L_1263078e;
  /* 12630720 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630723 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12630726 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630729 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1263072c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263072f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630732 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12630735 push edx */
  push32((uint32_t)(EDX));
  /* 12630736 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630739 push eax */
  push32((uint32_t)(EAX));
  /* 1263073a call 0x12626590 */
  push32(0x1263073fu); f_12626590();
  /* 1263073f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630742 push eax */
  push32((uint32_t)(EAX));
  /* 12630743 call 0x12626410 */
  push32(0x12630748u); f_12626410();
  /* 12630748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263074b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263074e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12630752 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12630755 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630758 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1263075b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263075e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12630762 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12630765 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630768 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1263076c push edx */
  push32((uint32_t)(EDX));
  /* 1263076d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630770 push eax */
  push32((uint32_t)(EAX));
  /* 12630771 call 0x12626590 */
  push32(0x12630776u); f_12626590();
  /* 12630776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630779 push eax */
  push32((uint32_t)(EAX));
  /* 1263077a call 0x12626410 */
  push32(0x1263077fu); f_12626410();
  /* 1263077f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630782 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630785 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12630789 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1263078c jmp 0x12630711 */
  goto L_12630711;
L_1263078e:;
  /* 1263078e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12630795 jmp 0x126307a0 */
  goto L_126307a0;
L_12630797:;
  /* 12630797 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1263079a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1263079d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_126307a0:;
  /* 126307a0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126307a4 jae 0x12630816 */
  if (!C.cf) goto L_12630816;
  /* 126307a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126307a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126307ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126307af mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 126307b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126307b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126307b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 126307bd push eax */
  push32((uint32_t)(EAX));
  /* 126307be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126307c1 push ecx */
  push32((uint32_t)(ECX));
  /* 126307c2 call 0x12626590 */
  push32(0x126307c7u); f_12626590();
  /* 126307c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126307ca push eax */
  push32((uint32_t)(EAX));
  /* 126307cb call 0x12626410 */
  push32(0x126307d0u); f_12626410();
  /* 126307d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126307d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126307d6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 126307da mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126307dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126307e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126307e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126307e6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 126307ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126307ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126307f0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 126307f4 push eax */
  push32((uint32_t)(EAX));
  /* 126307f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126307f8 push ecx */
  push32((uint32_t)(ECX));
  /* 126307f9 call 0x12626590 */
  push32(0x126307feu); f_12626590();
  /* 126307fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630801 push eax */
  push32((uint32_t)(EAX));
  /* 12630802 call 0x12626410 */
  push32(0x12630807u); f_12626410();
  /* 12630807 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263080a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263080d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12630811 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12630814 jmp 0x12630797 */
  goto L_12630797;
L_12630816:;
  /* 12630816 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12630819 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263081c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12630822 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12630825 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1263082b push ecx */
  push32((uint32_t)(ECX));
  /* 1263082c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1263082f push edx */
  push32((uint32_t)(EDX));
  /* 12630830 call 0x12626590 */
  push32(0x12630835u); f_12626590();
  /* 12630835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630838 push eax */
  push32((uint32_t)(EAX));
  /* 12630839 call 0x12626410 */
  push32(0x1263083eu); f_12626410();
  /* 1263083e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630841 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630844 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12630848 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1263084b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1263084e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630851 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12630857 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263085a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12630860 push eax */
  push32((uint32_t)(EAX));
  /* 12630861 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630864 push ecx */
  push32((uint32_t)(ECX));
  /* 12630865 call 0x12626590 */
  push32(0x1263086au); f_12626590();
  /* 1263086a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263086d push eax */
  push32((uint32_t)(EAX));
  /* 1263086e call 0x12626410 */
  push32(0x12630873u); f_12626410();
  /* 12630873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12630876 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630879 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1263087d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12630880 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12630883 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630886 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1263088c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1263088f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12630895 push ecx */
  push32((uint32_t)(ECX));
  /* 12630896 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12630899 push edx */
  push32((uint32_t)(EDX));
  /* 1263089a call 0x12626590 */
  push32(0x1263089fu); f_12626590();
  /* 1263089f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126308a2 push eax */
  push32((uint32_t)(EAX));
  /* 126308a3 call 0x12626410 */
  push32(0x126308a8u); f_12626410();
  /* 126308a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126308ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126308ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 126308b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126308b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126308b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126308bb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 126308c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126308c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 126308ca push eax */
  push32((uint32_t)(EAX));
  /* 126308cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126308ce push ecx */
  push32((uint32_t)(ECX));
  /* 126308cf call 0x12626590 */
  push32(0x126308d4u); f_12626590();
  /* 126308d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126308d7 push eax */
  push32((uint32_t)(EAX));
  /* 126308d8 call 0x12626410 */
  push32(0x126308ddu); f_12626410();
  /* 126308dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126308e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126308e3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 126308e7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126308ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126308ed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126308f0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_126308f6:;
  /* 126308f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126308f9 pop esi */
  ESI = (pop32());
  /* 126308fa mov esp, ebp */
  ESP = (EBP);
  /* 126308fc pop ebp */
  EBP = (pop32());
  /* 126308fd ret  */
  ESPCHK(0x12630590u, _esp0);
  ESP += 4; return;
}

/* FUN_10010900 @ 0x12630900 (31 bytes, 15 insns) */
void f_12630900(void) {
  FTRACE(0x12630900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12630900 push ebp */
  push32((uint32_t)(EBP));
  /* 12630901 mov ebp, esp */
  EBP = (ESP);
  /* 12630903 push 0 */
  push32((uint32_t)(0x0u));
  /* 12630905 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12630908 push eax */
  push32((uint32_t)(EAX));
  /* 12630909 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1263090c push ecx */
  push32((uint32_t)(ECX));
  /* 1263090d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12630910 push edx */
  push32((uint32_t)(EDX));
  /* 12630911 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12630914 push eax */
  push32((uint32_t)(EAX));
  /* 12630915 call 0x12630920 */
  push32(0x1263091au); f_12630920();
  /* 1263091a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1263091d pop ebp */
  EBP = (pop32());
  /* 1263091e ret  */
  ESPCHK(0x12630900u, _esp0);
  ESP += 4; return;
}

