#include "recomp.h"

/* FUN_100077c0 @ 0x112077c0 (10 bytes, 5 insns) */
void f_112077c0(void) {
  FTRACE(0x112077c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112077c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112077c1 mov ebp, esp */
  EBP = (ESP);
  /* 112077c3 mov eax, dword ptr [0x1122dc94] */
  EAX = (r32((uint32_t)(0x1122dc94)));
  /* 112077c8 pop ebp */
  EBP = (pop32());
  /* 112077c9 ret  */
  ESPCHK(0x112077c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077d0 @ 0x112077d0 (31 bytes, 11 insns) */
void f_112077d0(void) {
  FTRACE(0x112077d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112077d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112077d1 mov ebp, esp */
  EBP = (ESP);
  /* 112077d3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112077da jbe 0x112077e0 */
  if ((C.cf||C.zf)) goto L_112077e0;
  /* 112077dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112077de jmp 0x112077ed */
  goto L_112077ed;
L_112077e0:;
  /* 112077e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112077e3 mov dword ptr [0x1122dc94], eax */
  w32((uint32_t)(0x1122dc94), (EAX));
  /* 112077e8 mov eax, 1 */
  EAX = (0x1u);
L_112077ed:;
  /* 112077ed pop ebp */
  EBP = (pop32());
  /* 112077ee ret  */
  ESPCHK(0x112077d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077f0 @ 0x112077f0 (89 bytes, 20 insns) */
void f_112077f0(void) {
  FTRACE(0x112077f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112077f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112077f1 mov ebp, esp */
  EBP = (ESP);
  /* 112077f3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 112077f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112077fa mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 112077ff push eax */
  push32((uint32_t)(EAX));
  /* 11207800 call dword ptr [0x112312f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312f0))), 0x11207806u);
  /* 11207806 mov dword ptr [0x11230e08], eax */
  w32((uint32_t)(0x11230e08), (EAX));
  /* 1120780b cmp dword ptr [0x11230e08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230e08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207812 jne 0x11207818 */
  if (!C.zf) goto L_11207818;
  /* 11207814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11207816 jmp 0x11207847 */
  goto L_11207847;
L_11207818:;
  /* 11207818 mov ecx, dword ptr [0x11230e08] */
  ECX = (r32((uint32_t)(0x11230e08)));
  /* 1120781e mov dword ptr [0x11230dfc], ecx */
  w32((uint32_t)(0x11230dfc), (ECX));
  /* 11207824 mov dword ptr [0x11230e00], 0 */
  w32((uint32_t)(0x11230e00), (0x0u));
  /* 1120782e mov dword ptr [0x11230e04], 0 */
  w32((uint32_t)(0x11230e04), (0x0u));
  /* 11207838 mov dword ptr [0x11230de8], 0x10 */
  w32((uint32_t)(0x11230de8), (0x10u));
  /* 11207842 mov eax, 1 */
  EAX = (0x1u);
L_11207847:;
  /* 11207847 pop ebp */
  EBP = (pop32());
  /* 11207848 ret  */
  ESPCHK(0x112077f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007850 @ 0x11207850 (85 bytes, 29 insns) */
void f_11207850(void) {
  FTRACE(0x11207850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207850 push ebp */
  push32((uint32_t)(EBP));
  /* 11207851 mov ebp, esp */
  EBP = (ESP);
  /* 11207853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207856 mov eax, dword ptr [0x11230e04] */
  EAX = (r32((uint32_t)(0x11230e04)));
  /* 1120785b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120785e mov ecx, dword ptr [0x11230e08] */
  ECX = (r32((uint32_t)(0x11230e08)));
  /* 11207864 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207866 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11207869 mov edx, dword ptr [0x11230e08] */
  EDX = (r32((uint32_t)(0x11230e08)));
  /* 1120786f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11207872:;
  /* 11207872 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207875 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207878 jae 0x1120789f */
  if (!C.cf) goto L_1120789f;
  /* 1120787a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120787d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207880 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207883 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11207886 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120788d jae 0x11207894 */
  if (!C.cf) goto L_11207894;
  /* 1120788f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207892 jmp 0x112078a1 */
  goto L_112078a1;
L_11207894:;
  /* 11207894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207897 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120789a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120789d jmp 0x11207872 */
  goto L_11207872;
L_1120789f:;
  /* 1120789f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112078a1:;
  /* 112078a1 mov esp, ebp */
  ESP = (EBP);
  /* 112078a3 pop ebp */
  EBP = (pop32());
  /* 112078a4 ret  */
  ESPCHK(0x11207850u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x112078b0 (95 bytes, 33 insns) */
void f_112078b0(void) {
  FTRACE(0x112078b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112078b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112078b1 mov ebp, esp */
  EBP = (ESP);
  /* 112078b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112078b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112078b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112078bc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112078bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112078c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112078c5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 112078c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112078cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112078d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112078d3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112078d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112078d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112078db and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112078dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112078df jne 0x11207901 */
  if (!C.zf) goto L_11207901;
  /* 112078e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112078e4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 112078e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112078e9 jne 0x11207901 */
  if (!C.zf) goto L_11207901;
  /* 112078eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112078ee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 112078f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112078f6 je 0x11207901 */
  if (C.zf) goto L_11207901;
  /* 112078f8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 112078ff jmp 0x11207908 */
  goto L_11207908;
L_11207901:;
  /* 11207901 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11207908:;
  /* 11207908 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120790b mov esp, ebp */
  ESP = (EBP);
  /* 1120790d pop ebp */
  EBP = (pop32());
  /* 1120790e ret  */
  ESPCHK(0x112078b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x11207910 (1485 bytes, 453 insns) */
void f_11207910(void) {
  FTRACE(0x11207910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207910 push ebp */
  push32((uint32_t)(EBP));
  /* 11207911 mov ebp, esp */
  EBP = (ESP);
  /* 11207913 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207919 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1120791c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1120791f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207922 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11207925 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207928 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1120792b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120792e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11207931 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11207934 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207937 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120793d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207940 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11207947 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120794a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120794d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207950 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11207953 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207956 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11207958 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120795b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1120795e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207961 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207964 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11207967 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1120796a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120796c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1120796f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207972 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11207975 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11207978 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120797b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120797e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11207980 jne 0x11207aa8 */
  if (!C.zf) goto L_11207aa8;
  /* 11207986 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11207989 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1120798c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120798f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11207992 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207996 jbe 0x1120799f */
  if ((C.cf||C.zf)) goto L_1120799f;
  /* 11207998 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1120799f:;
  /* 1120799f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112079a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112079a5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112079a8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112079ab jne 0x11207a81 */
  if (!C.zf) goto L_11207a81;
  /* 112079b1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112079b5 jae 0x11207a16 */
  if (!C.cf) goto L_11207a16;
  /* 112079b7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112079bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112079bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112079c1 not eax */
  EAX = (~(EAX));
  /* 112079c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112079c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112079c9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112079cd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112079cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112079d2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112079d5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112079d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112079dc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112079df mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112079e2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112079e5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112079e8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112079eb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112079ee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112079f1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112079f4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112079f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112079fa jne 0x11207a14 */
  if (!C.zf) goto L_11207a14;
  /* 112079fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11207a01 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11207a04 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11207a06 not eax */
  EAX = (~(EAX));
  /* 11207a08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207a0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11207a0d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11207a0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207a12 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11207a14:;
  /* 11207a14 jmp 0x11207a81 */
  goto L_11207a81;
L_11207a16:;
  /* 11207a16 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11207a19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207a1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11207a21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207a23 not edx */
  EDX = (~(EDX));
  /* 11207a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207a28 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207a2b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11207a32 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11207a34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207a37 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207a3a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11207a41 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207a44 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207a47 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11207a4a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11207a4d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207a50 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207a53 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11207a56 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207a59 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207a5c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11207a60 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11207a62 jne 0x11207a81 */
  if (!C.zf) goto L_11207a81;
  /* 11207a64 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11207a67 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207a6a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11207a6f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207a71 not edx */
  EDX = (~(EDX));
  /* 11207a73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207a76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11207a79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11207a7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207a7e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11207a81:;
  /* 11207a81 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11207a84 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11207a87 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11207a8a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11207a8d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11207a90 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11207a93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11207a96 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11207a99 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11207a9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11207a9f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11207aa2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207aa5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11207aa8:;
  /* 11207aa8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11207aab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11207aae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207ab1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11207ab4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207ab8 jbe 0x11207ac1 */
  if ((C.cf||C.zf)) goto L_11207ac1;
  /* 11207aba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11207ac1:;
  /* 11207ac1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11207ac4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11207ac7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11207ac9 jne 0x11207c25 */
  if (!C.zf) goto L_11207c25;
  /* 11207acf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207ad2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207ad5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11207ad8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11207adb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11207ade sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207ae1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11207ae4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207ae8 jbe 0x11207af1 */
  if ((C.cf||C.zf)) goto L_11207af1;
  /* 11207aea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11207af1:;
  /* 11207af1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11207af4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207af7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11207afa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11207afd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11207b00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207b03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11207b06 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207b0a jbe 0x11207b13 */
  if ((C.cf||C.zf)) goto L_11207b13;
  /* 11207b0c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11207b13:;
  /* 11207b13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11207b16 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207b19 je 0x11207c1f */
  if (C.zf) goto L_11207c1f;
  /* 11207b1f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207b22 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207b25 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11207b28 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207b2b jne 0x11207c01 */
  if (!C.zf) goto L_11207c01;
  /* 11207b31 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207b35 jae 0x11207b96 */
  if (!C.cf) goto L_11207b96;
  /* 11207b37 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11207b3c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11207b3f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207b41 not edx */
  EDX = (~(EDX));
  /* 11207b43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207b46 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207b49 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11207b4d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11207b4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207b52 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207b55 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11207b59 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207b5c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207b5f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11207b62 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11207b65 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207b68 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207b6b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11207b6e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207b71 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207b74 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11207b78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11207b7a jne 0x11207b94 */
  if (!C.zf) goto L_11207b94;
  /* 11207b7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11207b81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11207b84 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207b86 not edx */
  EDX = (~(EDX));
  /* 11207b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207b8b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11207b8d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11207b8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207b92 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11207b94:;
  /* 11207b94 jmp 0x11207c01 */
  goto L_11207c01;
L_11207b96:;
  /* 11207b96 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11207b99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207b9c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11207ba1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11207ba3 not eax */
  EAX = (~(EAX));
  /* 11207ba5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207ba8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207bab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11207bb2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11207bb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207bb7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207bba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11207bc1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207bc4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207bc7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11207bca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11207bcd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207bd0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207bd3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11207bd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207bd9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207bdc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11207be0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11207be2 jne 0x11207c01 */
  if (!C.zf) goto L_11207c01;
  /* 11207be4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11207be7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207bea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11207bef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11207bf1 not eax */
  EAX = (~(EAX));
  /* 11207bf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207bf6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11207bf9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11207bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207bfe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11207c01:;
  /* 11207c01 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207c04 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11207c07 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207c0a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11207c0d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11207c10 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207c13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11207c16 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207c19 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11207c1c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11207c1f:;
  /* 11207c1f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207c22 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11207c25:;
  /* 11207c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11207c28 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11207c2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11207c2d jne 0x11207c3b */
  if (!C.zf) goto L_11207c3b;
  /* 11207c2f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11207c32 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207c35 je 0x11207d4b */
  if (C.zf) goto L_11207d4b;
L_11207c3b:;
  /* 11207c3b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11207c3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207c41 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11207c44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11207c47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207c4a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11207c4d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11207c50 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11207c53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207c56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11207c59 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11207c5c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11207c5f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207c62 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11207c65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207c68 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11207c6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207c6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11207c71 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207c74 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207c77 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11207c7a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207c7d jne 0x11207d4b */
  if (!C.zf) goto L_11207d4b;
  /* 11207c83 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207c87 jae 0x11207ce4 */
  if (!C.cf) goto L_11207ce4;
  /* 11207c89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207c8c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207c8f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11207c93 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207c96 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207c99 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11207c9c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11207c9f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207ca2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207ca5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11207ca8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11207caa jne 0x11207cc2 */
  if (!C.zf) goto L_11207cc2;
  /* 11207cac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11207cb1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11207cb4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207cb9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11207cbb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11207cbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207cc0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11207cc2:;
  /* 11207cc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11207cc7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11207cca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11207ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207ccf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207cd2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11207cd6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11207cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207cdb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207cde mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11207ce2 jmp 0x11207d4b */
  goto L_11207d4b;
L_11207ce4:;
  /* 11207ce4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207ce7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207cea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11207cee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207cf1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207cf4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11207cf7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11207cfa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207cfd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207d00 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11207d03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11207d05 jne 0x11207d22 */
  if (!C.zf) goto L_11207d22;
  /* 11207d07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11207d0a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207d0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11207d12 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207d17 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11207d1a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11207d1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207d1f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11207d22:;
  /* 11207d22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11207d25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207d28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11207d2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11207d2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207d32 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207d35 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11207d3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11207d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207d41 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11207d44 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11207d4b:;
  /* 11207d4b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207d4e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11207d51 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11207d53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11207d56 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207d59 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11207d5c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11207d5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207d62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11207d64 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207d67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207d6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11207d6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11207d6f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207d72 jne 0x11207ed9 */
  if (!C.zf) goto L_11207ed9;
  /* 11207d78 cmp dword ptr [0x11230e00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230e00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207d7f je 0x11207ec8 */
  if (C.zf) goto L_11207ec8;
  /* 11207d85 mov eax, dword ptr [0x11230df8] */
  EAX = (r32((uint32_t)(0x11230df8)));
  /* 11207d8a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11207d8d mov ecx, dword ptr [0x11230e00] */
  ECX = (r32((uint32_t)(0x11230e00)));
  /* 11207d93 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11207d96 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207d98 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11207d9b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11207da0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11207da5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207da8 push eax */
  push32((uint32_t)(EAX));
  /* 11207da9 call dword ptr [0x11231374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231374))), 0x11207dafu);
  /* 11207daf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11207db4 mov ecx, dword ptr [0x11230df8] */
  ECX = (r32((uint32_t)(0x11230df8)));
  /* 11207dba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207dbc mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11207dc1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11207dc4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11207dc6 mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11207dcc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11207dcf mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11207dd4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11207dd7 mov edx, dword ptr [0x11230df8] */
  EDX = (r32((uint32_t)(0x11230df8)));
  /* 11207ddd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11207de8 mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11207ded mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11207df0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11207df3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11207df6 mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11207dfb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11207dfe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11207e01 mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11207e07 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11207e0a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11207e0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11207e10 jne 0x11207e26 */
  if (!C.zf) goto L_11207e26;
  /* 11207e12 mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11207e18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11207e1b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11207e1d mov ecx, dword ptr [0x11230e00] */
  ECX = (r32((uint32_t)(0x11230e00)));
  /* 11207e23 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11207e26:;
  /* 11207e26 mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11207e2c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207e30 jne 0x11207ec8 */
  if (!C.zf) goto L_11207ec8;
  /* 11207e36 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11207e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11207e3d mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11207e42 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11207e45 push ecx */
  push32((uint32_t)(ECX));
  /* 11207e46 call dword ptr [0x11231374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231374))), 0x11207e4cu);
  /* 11207e4c mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11207e52 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11207e55 push eax */
  push32((uint32_t)(EAX));
  /* 11207e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11207e58 mov ecx, dword ptr [0x11230e0c] */
  ECX = (r32((uint32_t)(0x11230e0c)));
  /* 11207e5e push ecx */
  push32((uint32_t)(ECX));
  /* 11207e5f call dword ptr [0x11231384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231384))), 0x11207e65u);
  /* 11207e65 mov edx, dword ptr [0x11230e04] */
  EDX = (r32((uint32_t)(0x11230e04)));
  /* 11207e6b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11207e6e mov eax, dword ptr [0x11230e08] */
  EAX = (r32((uint32_t)(0x11230e08)));
  /* 11207e73 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207e75 mov ecx, dword ptr [0x11230e00] */
  ECX = (r32((uint32_t)(0x11230e00)));
  /* 11207e7b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207e7e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207e80 push eax */
  push32((uint32_t)(EAX));
  /* 11207e81 mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11207e87 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207e8a push edx */
  push32((uint32_t)(EDX));
  /* 11207e8b mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11207e90 push eax */
  push32((uint32_t)(EAX));
  /* 11207e91 call 0x1120b440 */
  push32(0x11207e96u); f_1120b440();
  /* 11207e96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11207e99 mov ecx, dword ptr [0x11230e04] */
  ECX = (r32((uint32_t)(0x11230e04)));
  /* 11207e9f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207ea2 mov dword ptr [0x11230e04], ecx */
  w32((uint32_t)(0x11230e04), (ECX));
  /* 11207ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207eab cmp edx, dword ptr [0x11230e00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11230e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207eb1 jbe 0x11207ebc */
  if ((C.cf||C.zf)) goto L_11207ebc;
  /* 11207eb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207eb6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207eb9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11207ebc:;
  /* 11207ebc mov ecx, dword ptr [0x11230e08] */
  ECX = (r32((uint32_t)(0x11230e08)));
  /* 11207ec2 mov dword ptr [0x11230dfc], ecx */
  w32((uint32_t)(0x11230dfc), (ECX));
L_11207ec8:;
  /* 11207ec8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207ecb mov dword ptr [0x11230e00], edx */
  w32((uint32_t)(0x11230e00), (EDX));
  /* 11207ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11207ed4 mov dword ptr [0x11230df8], eax */
  w32((uint32_t)(0x11230df8), (EAX));
L_11207ed9:;
  /* 11207ed9 mov esp, ebp */
  ESP = (EBP);
  /* 11207edb pop ebp */
  EBP = (pop32());
  /* 11207edc ret  */
  ESPCHK(0x11207910u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee0 @ 0x11207ee0 (1334 bytes, 427 insns) */
void f_11207ee0(void) {
  FTRACE(0x11207ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11207ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11207ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11207ee3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207ee6 push esi */
  push32((uint32_t)(ESI));
  /* 11207ee7 mov eax, dword ptr [0x11230e04] */
  EAX = (r32((uint32_t)(0x11230e04)));
  /* 11207eec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11207eef mov ecx, dword ptr [0x11230e08] */
  ECX = (r32((uint32_t)(0x11230e08)));
  /* 11207ef5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207ef7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11207efa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11207efd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207f00 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11207f03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11207f06 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11207f09 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11207f0c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207f0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11207f12 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207f16 jge 0x11207f2c */
  if ((C.sf==C.of)) goto L_11207f2c;
  /* 11207f18 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11207f1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11207f1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11207f20 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11207f23 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11207f2a jmp 0x11207f41 */
  goto L_11207f41;
L_11207f2c:;
  /* 11207f2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11207f33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11207f36 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11207f39 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11207f3c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11207f3e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11207f41:;
  /* 11207f41 mov ecx, dword ptr [0x11230dfc] */
  ECX = (r32((uint32_t)(0x11230dfc)));
  /* 11207f47 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11207f4a:;
  /* 11207f4a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207f4d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207f50 jae 0x11207f76 */
  if (!C.cf) goto L_11207f76;
  /* 11207f52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207f55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11207f58 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11207f5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207f5d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207f60 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11207f63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11207f65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11207f67 je 0x11207f6b */
  if (C.zf) goto L_11207f6b;
  /* 11207f69 jmp 0x11207f76 */
  goto L_11207f76;
L_11207f6b:;
  /* 11207f6b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207f6e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207f71 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11207f74 jmp 0x11207f4a */
  goto L_11207f4a;
L_11207f76:;
  /* 11207f76 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207f79 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207f7c jne 0x1120805d */
  if (!C.zf) goto L_1120805d;
  /* 11207f82 mov eax, dword ptr [0x11230e08] */
  EAX = (r32((uint32_t)(0x11230e08)));
  /* 11207f87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11207f8a:;
  /* 11207f8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207f8d cmp ecx, dword ptr [0x11230dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207f93 jae 0x11207fb9 */
  if (!C.cf) goto L_11207fb9;
  /* 11207f95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207f98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11207f9b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11207f9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207fa0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11207fa3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11207fa6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11207fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11207faa je 0x11207fae */
  if (C.zf) goto L_11207fae;
  /* 11207fac jmp 0x11207fb9 */
  goto L_11207fb9;
L_11207fae:;
  /* 11207fae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207fb1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207fb4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11207fb7 jmp 0x11207f8a */
  goto L_11207f8a;
L_11207fb9:;
  /* 11207fb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207fbc cmp ecx, dword ptr [0x11230dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207fc2 jne 0x1120805d */
  if (!C.zf) goto L_1120805d;
L_11207fc8:;
  /* 11207fc8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207fcb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207fce jae 0x11207fe6 */
  if (!C.cf) goto L_11207fe6;
  /* 11207fd0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207fd3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207fd7 je 0x11207fdb */
  if (C.zf) goto L_11207fdb;
  /* 11207fd9 jmp 0x11207fe6 */
  goto L_11207fe6;
L_11207fdb:;
  /* 11207fdb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207fde add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11207fe1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11207fe4 jmp 0x11207fc8 */
  goto L_11207fc8;
L_11207fe6:;
  /* 11207fe6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207fe9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207fec jne 0x11208037 */
  if (!C.zf) goto L_11208037;
  /* 11207fee mov eax, dword ptr [0x11230e08] */
  EAX = (r32((uint32_t)(0x11230e08)));
  /* 11207ff3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11207ff6:;
  /* 11207ff6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11207ff9 cmp ecx, dword ptr [0x11230dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11207fff jae 0x11208017 */
  if (!C.cf) goto L_11208017;
  /* 11208001 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208004 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208008 je 0x1120800c */
  if (C.zf) goto L_1120800c;
  /* 1120800a jmp 0x11208017 */
  goto L_11208017;
L_1120800c:;
  /* 1120800c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120800f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208012 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11208015 jmp 0x11207ff6 */
  goto L_11207ff6;
L_11208017:;
  /* 11208017 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120801a cmp ecx, dword ptr [0x11230dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208020 jne 0x11208037 */
  if (!C.zf) goto L_11208037;
  /* 11208022 call 0x11208420 */
  push32(0x11208027u); f_11208420();
  /* 11208027 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1120802a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120802e jne 0x11208037 */
  if (!C.zf) goto L_11208037;
  /* 11208030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11208032 jmp 0x11208411 */
  goto L_11208411;
L_11208037:;
  /* 11208037 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120803a push edx */
  push32((uint32_t)(EDX));
  /* 1120803b call 0x11208530 */
  push32(0x11208040u); f_11208530();
  /* 11208040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11208043 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208046 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11208049 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1120804b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120804e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11208051 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208054 jne 0x1120805d */
  if (!C.zf) goto L_1120805d;
  /* 11208056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11208058 jmp 0x11208411 */
  goto L_11208411;
L_1120805d:;
  /* 1120805d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208060 mov dword ptr [0x11230dfc], edx */
  w32((uint32_t)(0x11230dfc), (EDX));
  /* 11208066 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208069 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1120806c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1120806f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208072 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11208074 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11208077 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120807b je 0x112080a0 */
  if (C.zf) goto L_112080a0;
  /* 1120807d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208080 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208083 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11208086 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1120808a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120808d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208090 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11208093 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1120809a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1120809c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120809e jne 0x112080d5 */
  if (!C.zf) goto L_112080d5;
L_112080a0:;
  /* 112080a0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_112080a7:;
  /* 112080a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112080aa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112080ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112080b0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 112080b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112080b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112080ba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 112080bd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 112080c4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 112080c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112080c8 jne 0x112080d5 */
  if (!C.zf) goto L_112080d5;
  /* 112080ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112080cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112080d0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 112080d3 jmp 0x112080a7 */
  goto L_112080a7;
L_112080d5:;
  /* 112080d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112080d8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112080de mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112080e1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 112080e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112080eb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112080f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112080f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112080f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112080fb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 112080ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11208102 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208106 jne 0x11208122 */
  if (!C.zf) goto L_11208122;
  /* 11208108 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1120810f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208112 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208115 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11208118 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1120811f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11208122:;
  /* 11208122 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208126 jl 0x1120813b */
  if ((C.sf!=C.of)) goto L_1120813b;
  /* 11208128 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120812b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1120812d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11208130 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208133 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208136 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11208139 jmp 0x11208122 */
  goto L_11208122;
L_1120813b:;
  /* 1120813b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120813e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208141 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11208145 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11208148 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120814b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1120814d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208150 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11208153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11208156 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11208159 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120815c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1120815f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208163 jle 0x1120816c */
  if ((C.zf||C.sf!=C.of)) goto L_1120816c;
  /* 11208165 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1120816c:;
  /* 1120816c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120816f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208172 je 0x11208390 */
  if (C.zf) goto L_11208390;
  /* 11208178 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120817b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120817e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11208181 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208184 jne 0x1120825a */
  if (!C.zf) goto L_1120825a;
  /* 1120818a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120818e jge 0x112081ef */
  if ((C.sf==C.of)) goto L_112081ef;
  /* 11208190 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11208195 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208198 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1120819a not eax */
  EAX = (~(EAX));
  /* 1120819c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120819f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112081a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112081a6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112081a8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112081ab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112081ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112081b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112081b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112081b8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112081bb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112081be mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112081c1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112081c4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112081c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112081ca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112081cd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112081d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112081d3 jne 0x112081ed */
  if (!C.zf) goto L_112081ed;
  /* 112081d5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112081da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112081dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112081df not eax */
  EAX = (~(EAX));
  /* 112081e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112081e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112081e6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112081e8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112081eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112081ed:;
  /* 112081ed jmp 0x1120825a */
  goto L_1120825a;
L_112081ef:;
  /* 112081ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112081f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112081f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112081fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112081fc not edx */
  EDX = (~(EDX));
  /* 112081fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208201 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208204 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1120820b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1120820d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208210 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208213 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1120821a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1120821d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208220 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11208223 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11208226 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208229 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120822c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1120822f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208232 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208235 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11208239 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120823b jne 0x1120825a */
  if (!C.zf) goto L_1120825a;
  /* 1120823d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208240 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208243 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208248 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1120824a not edx */
  EDX = (~(EDX));
  /* 1120824c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120824f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11208252 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11208254 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208257 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1120825a:;
  /* 1120825a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120825d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11208260 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208263 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11208266 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11208269 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120826c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120826f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208272 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11208275 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11208278 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120827c je 0x11208390 */
  if (C.zf) goto L_11208390;
  /* 11208282 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208285 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208288 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1120828b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120828e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208291 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11208294 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11208297 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1120829a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120829d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112082a0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112082a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112082a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112082a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112082ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112082af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112082b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112082b5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112082b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112082bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112082be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112082c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112082c4 jne 0x11208390 */
  if (!C.zf) goto L_11208390;
  /* 112082ca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112082ce jge 0x1120832a */
  if ((C.sf==C.of)) goto L_1120832a;
  /* 112082d0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112082d3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112082d6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112082da mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112082dd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112082e0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 112082e3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112082e5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112082e8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112082eb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 112082ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112082f0 jne 0x11208308 */
  if (!C.zf) goto L_11208308;
  /* 112082f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112082f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112082fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112082fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112082ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11208301 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11208303 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208306 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11208308:;
  /* 11208308 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1120830d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208310 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208312 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208315 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208318 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1120831c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1120831e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208321 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208324 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11208328 jmp 0x11208390 */
  goto L_11208390;
L_1120832a:;
  /* 1120832a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1120832d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208330 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11208334 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208337 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120833a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1120833d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1120833f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208342 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208345 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11208348 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120834a jne 0x11208367 */
  if (!C.zf) goto L_11208367;
  /* 1120834c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120834f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208352 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11208357 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11208359 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120835c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120835f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11208361 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208364 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11208367:;
  /* 11208367 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120836a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120836d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208372 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208374 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208377 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1120837a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11208381 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11208383 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208386 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208389 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11208390:;
  /* 11208390 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208394 je 0x112083aa */
  if (C.zf) goto L_112083aa;
  /* 11208396 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208399 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120839c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1120839e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112083a1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112083a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112083a7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_112083aa:;
  /* 112083aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112083ad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112083b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112083b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112083b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112083b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112083bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112083be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112083c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112083c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112083c7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112083ca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 112083cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112083d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112083d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112083d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112083d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112083da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112083dd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112083df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112083e1 jne 0x11208403 */
  if (!C.zf) goto L_11208403;
  /* 112083e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112083e6 cmp eax, dword ptr [0x11230e00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112083ec jne 0x11208403 */
  if (!C.zf) goto L_11208403;
  /* 112083ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112083f1 cmp ecx, dword ptr [0x11230df8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230df8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112083f7 jne 0x11208403 */
  if (!C.zf) goto L_11208403;
  /* 112083f9 mov dword ptr [0x11230e00], 0 */
  w32((uint32_t)(0x11230e00), (0x0u));
L_11208403:;
  /* 11208403 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11208406 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208409 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1120840b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120840e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11208411:;
  /* 11208411 pop esi */
  ESI = (pop32());
  /* 11208412 mov esp, ebp */
  ESP = (EBP);
  /* 11208414 pop ebp */
  EBP = (pop32());
  /* 11208415 ret  */
  ESPCHK(0x11207ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008420 @ 0x11208420 (271 bytes, 78 insns) */
void f_11208420(void) {
  FTRACE(0x11208420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11208420 push ebp */
  push32((uint32_t)(EBP));
  /* 11208421 mov ebp, esp */
  EBP = (ESP);
  /* 11208423 push ecx */
  push32((uint32_t)(ECX));
  /* 11208424 mov eax, dword ptr [0x11230e04] */
  EAX = (r32((uint32_t)(0x11230e04)));
  /* 11208429 cmp eax, dword ptr [0x11230de8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230de8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120842f jne 0x1120847b */
  if (!C.zf) goto L_1120847b;
  /* 11208431 mov ecx, dword ptr [0x11230de8] */
  ECX = (r32((uint32_t)(0x11230de8)));
  /* 11208437 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120843a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120843d push ecx */
  push32((uint32_t)(ECX));
  /* 1120843e mov edx, dword ptr [0x11230e08] */
  EDX = (r32((uint32_t)(0x11230e08)));
  /* 11208444 push edx */
  push32((uint32_t)(EDX));
  /* 11208445 push 0 */
  push32((uint32_t)(0x0u));
  /* 11208447 mov eax, dword ptr [0x11230e0c] */
  EAX = (r32((uint32_t)(0x11230e0c)));
  /* 1120844c push eax */
  push32((uint32_t)(EAX));
  /* 1120844d call dword ptr [0x112312ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312ec))), 0x11208453u);
  /* 11208453 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11208456 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120845a jne 0x11208463 */
  if (!C.zf) goto L_11208463;
  /* 1120845c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120845e jmp 0x1120852b */
  goto L_1120852b;
L_11208463:;
  /* 11208463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208466 mov dword ptr [0x11230e08], ecx */
  w32((uint32_t)(0x11230e08), (ECX));
  /* 1120846c mov edx, dword ptr [0x11230de8] */
  EDX = (r32((uint32_t)(0x11230de8)));
  /* 11208472 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208475 mov dword ptr [0x11230de8], edx */
  w32((uint32_t)(0x11230de8), (EDX));
L_1120847b:;
  /* 1120847b mov eax, dword ptr [0x11230e04] */
  EAX = (r32((uint32_t)(0x11230e04)));
  /* 11208480 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11208483 mov ecx, dword ptr [0x11230e08] */
  ECX = (r32((uint32_t)(0x11230e08)));
  /* 11208489 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120848b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120848e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11208493 push 8 */
  push32((uint32_t)(0x8u));
  /* 11208495 mov edx, dword ptr [0x11230e0c] */
  EDX = (r32((uint32_t)(0x11230e0c)));
  /* 1120849b push edx */
  push32((uint32_t)(EDX));
  /* 1120849c call dword ptr [0x112312f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312f0))), 0x112084a2u);
  /* 112084a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112084a5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 112084a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112084ab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112084af jne 0x112084b5 */
  if (!C.zf) goto L_112084b5;
  /* 112084b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112084b3 jmp 0x1120852b */
  goto L_1120852b;
L_112084b5:;
  /* 112084b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 112084b7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 112084bc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 112084c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112084c3 call dword ptr [0x112312e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312e8))), 0x112084c9u);
  /* 112084c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112084cc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 112084cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112084d2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112084d6 jne 0x112084f2 */
  if (!C.zf) goto L_112084f2;
  /* 112084d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112084db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112084de push ecx */
  push32((uint32_t)(ECX));
  /* 112084df push 0 */
  push32((uint32_t)(0x0u));
  /* 112084e1 mov edx, dword ptr [0x11230e0c] */
  EDX = (r32((uint32_t)(0x11230e0c)));
  /* 112084e7 push edx */
  push32((uint32_t)(EDX));
  /* 112084e8 call dword ptr [0x11231384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231384))), 0x112084eeu);
  /* 112084ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112084f0 jmp 0x1120852b */
  goto L_1120852b;
L_112084f2:;
  /* 112084f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112084f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112084fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112084fe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11208505 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208508 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1120850f mov eax, dword ptr [0x11230e04] */
  EAX = (r32((uint32_t)(0x11230e04)));
  /* 11208514 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208517 mov dword ptr [0x11230e04], eax */
  w32((uint32_t)(0x11230e04), (EAX));
  /* 1120851c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120851f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11208522 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11208528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1120852b:;
  /* 1120852b mov esp, ebp */
  ESP = (EBP);
  /* 1120852d pop ebp */
  EBP = (pop32());
  /* 1120852e ret  */
  ESPCHK(0x11208420u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x11208530 (494 bytes, 149 insns) */
void f_11208530(void) {
  FTRACE(0x11208530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11208530 push ebp */
  push32((uint32_t)(EBP));
  /* 11208531 mov ebp, esp */
  EBP = (ESP);
  /* 11208533 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208539 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1120853c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1120853f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208542 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11208545 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11208548 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1120854f:;
  /* 1120854f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208553 jl 0x11208568 */
  if ((C.sf!=C.of)) goto L_11208568;
  /* 11208555 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11208558 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1120855a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120855d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208560 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208563 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11208566 jmp 0x1120854f */
  goto L_1120854f;
L_11208568:;
  /* 11208568 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120856b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11208571 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208574 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1120857b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1120857e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11208585 jmp 0x11208590 */
  goto L_11208590;
L_11208587:;
  /* 11208587 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120858a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120858d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11208590:;
  /* 11208590 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208594 jge 0x112085b6 */
  if ((C.sf==C.of)) goto L_112085b6;
  /* 11208596 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208599 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120859c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1120859f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112085a2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112085a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112085a8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112085ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112085ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112085b1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112085b4 jmp 0x11208587 */
  goto L_11208587;
L_112085b6:;
  /* 112085b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112085b9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 112085bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112085bf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112085c2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112085c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112085c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 112085c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112085ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112085d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112085d6 push edx */
  push32((uint32_t)(EDX));
  /* 112085d7 call dword ptr [0x112312e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312e8))), 0x112085ddu);
  /* 112085dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112085df jne 0x112085e9 */
  if (!C.zf) goto L_112085e9;
  /* 112085e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112085e4 jmp 0x1120871a */
  goto L_1120871a;
L_112085e9:;
  /* 112085e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112085ec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112085f1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112085f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112085f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112085fa jmp 0x11208608 */
  goto L_11208608;
L_112085fc:;
  /* 112085fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112085ff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208605 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11208608:;
  /* 11208608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120860b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120860e ja 0x1120866d */
  if ((!C.cf&&!C.zf)) goto L_1120866d;
  /* 11208610 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208613 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1120861a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120861d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11208627 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120862a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120862d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11208630 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208633 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11208639 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120863c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208642 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208645 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11208648 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120864b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208651 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208654 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11208657 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120865a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120865f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11208662 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11208665 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1120866b jmp 0x112085fc */
  goto L_112085fc;
L_1120866d:;
  /* 1120866d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11208670 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208676 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11208679 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120867c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120867f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208682 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11208685 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208688 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1120868b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1120868e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208691 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208694 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11208697 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120869a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120869d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112086a0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112086a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112086a6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112086a9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112086ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112086af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112086b2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112086b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112086b8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112086bb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 112086c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112086c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112086c9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 112086d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112086d7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 112086db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112086de mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 112086e1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112086e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112086e7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 112086ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112086ec jne 0x112086fd */
  if (!C.zf) goto L_112086fd;
  /* 112086ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112086f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112086f4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112086f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112086fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112086fd:;
  /* 112086fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208702 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208705 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208707 not edx */
  EDX = (~(EDX));
  /* 11208709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120870c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1120870f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11208711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208714 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11208717 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1120871a:;
  /* 1120871a mov esp, ebp */
  ESP = (EBP);
  /* 1120871c pop ebp */
  EBP = (pop32());
  /* 1120871d ret  */
  ESPCHK(0x11208530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008720 @ 0x11208720 (1515 bytes, 489 insns) */
void f_11208720(void) {
  FTRACE(0x11208720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11208720 push ebp */
  push32((uint32_t)(EBP));
  /* 11208721 mov ebp, esp */
  EBP = (ESP);
  /* 11208723 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208726 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11208729 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120872c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1120872e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11208731 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208734 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11208737 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1120873a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120873d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11208740 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208743 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11208746 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11208749 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1120874c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120874f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208752 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11208758 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120875b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11208762 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11208765 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11208768 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120876b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1120876e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208771 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11208773 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208776 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11208779 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120877c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120877f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11208782 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208785 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11208787 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1120878a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120878d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208790 jle 0x11208a46 */
  if ((C.zf||C.sf!=C.of)) goto L_11208a46;
  /* 11208796 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208799 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120879c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120879e jne 0x112087ab */
  if (!C.zf) goto L_112087ab;
  /* 112087a0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112087a3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112087a6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112087a9 jle 0x112087b2 */
  if ((C.zf||C.sf!=C.of)) goto L_112087b2;
L_112087ab:;
  /* 112087ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112087ad jmp 0x11208d07 */
  goto L_11208d07;
L_112087b2:;
  /* 112087b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112087b5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112087b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112087bb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112087be cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112087c2 jbe 0x112087cb */
  if ((C.cf||C.zf)) goto L_112087cb;
  /* 112087c4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_112087cb:;
  /* 112087cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112087ce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112087d1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112087d4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112087d7 jne 0x112088ad */
  if (!C.zf) goto L_112088ad;
  /* 112087dd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112087e1 jae 0x11208842 */
  if (!C.cf) goto L_11208842;
  /* 112087e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112087e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112087eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112087ed not edx */
  EDX = (~(EDX));
  /* 112087ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112087f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112087f5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 112087f9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112087fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112087fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208801 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11208805 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208808 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120880b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1120880e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11208811 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208814 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208817 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1120881a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120881d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208820 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11208824 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11208826 jne 0x11208840 */
  if (!C.zf) goto L_11208840;
  /* 11208828 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1120882d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208830 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208832 not edx */
  EDX = (~(EDX));
  /* 11208834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208837 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11208839 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1120883b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120883e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11208840:;
  /* 11208840 jmp 0x112088ad */
  goto L_112088ad;
L_11208842:;
  /* 11208842 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208845 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208848 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1120884d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1120884f not eax */
  EAX = (~(EAX));
  /* 11208851 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208854 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208857 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1120885e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11208860 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208863 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208866 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1120886d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208870 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208873 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11208876 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11208879 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120887c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120887f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11208882 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208885 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208888 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1120888c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120888e jne 0x112088ad */
  if (!C.zf) goto L_112088ad;
  /* 11208890 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208893 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208896 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1120889b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1120889d not eax */
  EAX = (~(EAX));
  /* 1120889f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112088a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112088a5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112088a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112088aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112088ad:;
  /* 112088ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112088b0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112088b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112088b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112088b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112088bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112088bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112088c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112088c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112088c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 112088cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112088ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112088d1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112088d4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112088d7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112088db jle 0x11208a27 */
  if ((C.zf||C.sf!=C.of)) goto L_11208a27;
  /* 112088e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112088e4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112088e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112088ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112088ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112088f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112088f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112088f6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112088fa jbe 0x11208903 */
  if ((C.cf||C.zf)) goto L_11208903;
  /* 112088fc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11208903:;
  /* 11208903 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208906 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11208909 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1120890c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1120890f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208912 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208915 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11208918 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1120891b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120891e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208921 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11208924 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208927 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120892a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1120892d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208930 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11208933 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208936 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11208939 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120893c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120893f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11208942 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208945 jne 0x11208a13 */
  if (!C.zf) goto L_11208a13;
  /* 1120894b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120894f jae 0x112089ac */
  if (!C.cf) goto L_112089ac;
  /* 11208951 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208954 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208957 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1120895b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120895e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208961 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11208964 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11208967 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120896a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120896d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11208970 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11208972 jne 0x1120898a */
  if (!C.zf) goto L_1120898a;
  /* 11208974 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208979 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120897c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1120897e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208981 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11208983 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11208985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208988 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1120898a:;
  /* 1120898a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1120898f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208992 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11208994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208997 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120899a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1120899e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112089a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112089a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112089a6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112089aa jmp 0x11208a13 */
  goto L_11208a13;
L_112089ac:;
  /* 112089ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112089af add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112089b2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112089b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112089b9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112089bc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112089bf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112089c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112089c5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112089c8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112089cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112089cd jne 0x112089ea */
  if (!C.zf) goto L_112089ea;
  /* 112089cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112089d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112089d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112089da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112089dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112089df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112089e2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112089e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112089e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_112089ea:;
  /* 112089ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112089ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112089f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112089f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112089f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112089fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112089fd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11208a04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11208a06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208a09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208a0c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11208a13:;
  /* 11208a13 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208a16 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208a19 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11208a1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208a1e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208a24 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11208a27:;
  /* 11208a27 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11208a2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a2d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208a30 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11208a32 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11208a35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208a3b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a3e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11208a41 jmp 0x11208d02 */
  goto L_11208d02;
L_11208a46:;
  /* 11208a46 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11208a49 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208a4c jge 0x11208d02 */
  if ((C.sf==C.of)) goto L_11208d02;
  /* 11208a52 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11208a55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208a5b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11208a5d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11208a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a63 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208a66 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a69 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11208a6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208a6f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208a72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11208a75 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208a78 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208a7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11208a7e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208a81 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11208a84 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208a87 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11208a8a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208a8e jbe 0x11208a97 */
  if ((C.cf||C.zf)) goto L_11208a97;
  /* 11208a90 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11208a97:;
  /* 11208a97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208a9a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11208a9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11208a9f jne 0x11208be0 */
  if (!C.zf) goto L_11208be0;
  /* 11208aa5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11208aa8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11208aab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208aae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11208ab1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208ab5 jbe 0x11208abe */
  if ((C.cf||C.zf)) goto L_11208abe;
  /* 11208ab7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11208abe:;
  /* 11208abe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208ac1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208ac4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11208ac7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208aca jne 0x11208ba0 */
  if (!C.zf) goto L_11208ba0;
  /* 11208ad0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208ad4 jae 0x11208b35 */
  if (!C.cf) goto L_11208b35;
  /* 11208ad6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208adb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208ade shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208ae0 not edx */
  EDX = (~(EDX));
  /* 11208ae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208ae5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208ae8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11208aec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11208aee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208af1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208af4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11208af8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208afb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208afe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11208b01 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11208b04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208b07 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208b0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11208b0d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208b10 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208b13 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11208b17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11208b19 jne 0x11208b33 */
  if (!C.zf) goto L_11208b33;
  /* 11208b1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208b20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208b23 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208b25 not edx */
  EDX = (~(EDX));
  /* 11208b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208b2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11208b2c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11208b2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208b31 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11208b33:;
  /* 11208b33 jmp 0x11208ba0 */
  goto L_11208ba0;
L_11208b35:;
  /* 11208b35 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208b38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208b3b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11208b40 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11208b42 not eax */
  EAX = (~(EAX));
  /* 11208b44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208b47 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208b4a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11208b51 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11208b53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208b56 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208b59 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11208b60 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208b63 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208b66 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11208b69 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11208b6c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208b6f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208b72 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11208b75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208b78 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208b7b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11208b7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11208b81 jne 0x11208ba0 */
  if (!C.zf) goto L_11208ba0;
  /* 11208b83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11208b86 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208b89 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11208b8e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11208b90 not eax */
  EAX = (~(EAX));
  /* 11208b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208b95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11208b98 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11208b9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208b9d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11208ba0:;
  /* 11208ba0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208ba3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11208ba6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208ba9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11208bac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11208baf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208bb2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11208bb5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11208bb8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11208bbb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11208bbe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208bc1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208bc4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11208bc7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208bca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11208bcd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208bd0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11208bd3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208bd7 jbe 0x11208be0 */
  if ((C.cf||C.zf)) goto L_11208be0;
  /* 11208bd9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11208be0:;
  /* 11208be0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11208be3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11208be6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11208be9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11208bec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208bef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208bf2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11208bf5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11208bf8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208bfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208bfe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11208c01 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11208c04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208c07 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11208c0a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208c0d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11208c10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208c13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11208c16 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208c19 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208c1c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11208c1f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208c22 jne 0x11208cee */
  if (!C.zf) goto L_11208cee;
  /* 11208c28 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208c2c jae 0x11208c88 */
  if (!C.cf) goto L_11208c88;
  /* 11208c2e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208c31 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208c34 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11208c38 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208c3b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208c3e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11208c41 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11208c43 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208c46 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208c49 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11208c4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11208c4e jne 0x11208c66 */
  if (!C.zf) goto L_11208c66;
  /* 11208c50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11208c55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11208c58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11208c5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11208c5f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11208c61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208c64 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11208c66:;
  /* 11208c66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208c6b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11208c6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208c70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208c73 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208c76 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11208c7a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11208c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208c7f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208c82 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11208c86 jmp 0x11208cee */
  goto L_11208cee;
L_11208c88:;
  /* 11208c88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208c8b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208c8e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11208c92 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208c95 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208c98 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11208c9b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11208c9d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208ca0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208ca3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11208ca6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11208ca8 jne 0x11208cc5 */
  if (!C.zf) goto L_11208cc5;
  /* 11208caa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11208cad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208cb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11208cb5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11208cb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208cba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11208cbd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11208cbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11208cc2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11208cc5:;
  /* 11208cc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11208cc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208ccb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208cd0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208cd5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208cd8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11208cdf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11208ce1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208ce4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11208ce7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11208cee:;
  /* 11208cee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208cf1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208cf4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11208cf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11208cf9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208cfc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11208cff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11208d02:;
  /* 11208d02 mov eax, 1 */
  EAX = (0x1u);
L_11208d07:;
  /* 11208d07 mov esp, ebp */
  ESP = (EBP);
  /* 11208d09 pop ebp */
  EBP = (pop32());
  /* 11208d0a ret  */
  ESPCHK(0x11208720u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x11208d10 (304 bytes, 79 insns) */
void f_11208d10(void) {
  FTRACE(0x11208d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11208d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11208d11 mov ebp, esp */
  EBP = (ESP);
  /* 11208d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11208d14 cmp dword ptr [0x11230e00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230e00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208d1b je 0x11208e3c */
  if (C.zf) goto L_11208e3c;
  /* 11208d21 mov eax, dword ptr [0x11230df8] */
  EAX = (r32((uint32_t)(0x11230df8)));
  /* 11208d26 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11208d29 mov ecx, dword ptr [0x11230e00] */
  ECX = (r32((uint32_t)(0x11230e00)));
  /* 11208d2f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11208d32 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208d34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11208d37 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11208d3c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11208d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11208d44 push eax */
  push32((uint32_t)(EAX));
  /* 11208d45 call dword ptr [0x11231374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231374))), 0x11208d4bu);
  /* 11208d4b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11208d50 mov ecx, dword ptr [0x11230df8] */
  ECX = (r32((uint32_t)(0x11230df8)));
  /* 11208d56 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11208d58 mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11208d5d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11208d60 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11208d62 mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11208d68 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11208d6b mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11208d70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11208d73 mov edx, dword ptr [0x11230df8] */
  EDX = (r32((uint32_t)(0x11230df8)));
  /* 11208d79 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11208d84 mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11208d89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11208d8c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11208d8f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11208d92 mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11208d97 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11208d9a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11208d9d mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11208da3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11208da6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11208daa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11208dac jne 0x11208dc2 */
  if (!C.zf) goto L_11208dc2;
  /* 11208dae mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11208db4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11208db7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11208db9 mov ecx, dword ptr [0x11230e00] */
  ECX = (r32((uint32_t)(0x11230e00)));
  /* 11208dbf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11208dc2:;
  /* 11208dc2 mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11208dc8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208dcc jne 0x11208e32 */
  if (!C.zf) goto L_11208e32;
  /* 11208dce cmp dword ptr [0x11230e04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11230e04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208dd5 jle 0x11208e32 */
  if ((C.zf||C.sf!=C.of)) goto L_11208e32;
  /* 11208dd7 mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11208ddc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11208ddf push ecx */
  push32((uint32_t)(ECX));
  /* 11208de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11208de2 mov edx, dword ptr [0x11230e0c] */
  EDX = (r32((uint32_t)(0x11230e0c)));
  /* 11208de8 push edx */
  push32((uint32_t)(EDX));
  /* 11208de9 call dword ptr [0x11231384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231384))), 0x11208defu);
  /* 11208def mov eax, dword ptr [0x11230e04] */
  EAX = (r32((uint32_t)(0x11230e04)));
  /* 11208df4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11208df7 mov ecx, dword ptr [0x11230e08] */
  ECX = (r32((uint32_t)(0x11230e08)));
  /* 11208dfd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208dff mov edx, dword ptr [0x11230e00] */
  EDX = (r32((uint32_t)(0x11230e00)));
  /* 11208e05 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208e08 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208e0a push ecx */
  push32((uint32_t)(ECX));
  /* 11208e0b mov eax, dword ptr [0x11230e00] */
  EAX = (r32((uint32_t)(0x11230e00)));
  /* 11208e10 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208e13 push eax */
  push32((uint32_t)(EAX));
  /* 11208e14 mov ecx, dword ptr [0x11230e00] */
  ECX = (r32((uint32_t)(0x11230e00)));
  /* 11208e1a push ecx */
  push32((uint32_t)(ECX));
  /* 11208e1b call 0x1120b440 */
  push32(0x11208e20u); f_1120b440();
  /* 11208e20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11208e23 mov edx, dword ptr [0x11230e04] */
  EDX = (r32((uint32_t)(0x11230e04)));
  /* 11208e29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208e2c mov dword ptr [0x11230e04], edx */
  w32((uint32_t)(0x11230e04), (EDX));
L_11208e32:;
  /* 11208e32 mov dword ptr [0x11230e00], 0 */
  w32((uint32_t)(0x11230e00), (0x0u));
L_11208e3c:;
  /* 11208e3c mov esp, ebp */
  ESP = (EBP);
  /* 11208e3e pop ebp */
  EBP = (pop32());
  /* 11208e3f ret  */
  ESPCHK(0x11208d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e40 @ 0x11208e40 (1565 bytes, 343 insns) */
void f_11208e40(void) {
  FTRACE(0x11208e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11208e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11208e41 mov ebp, esp */
  EBP = (ESP);
  /* 11208e43 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11208e49 mov eax, dword ptr [0x11230e04] */
  EAX = (r32((uint32_t)(0x11230e04)));
  /* 11208e4e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11208e51 push eax */
  push32((uint32_t)(EAX));
  /* 11208e52 mov ecx, dword ptr [0x11230e08] */
  ECX = (r32((uint32_t)(0x11230e08)));
  /* 11208e58 push ecx */
  push32((uint32_t)(ECX));
  /* 11208e59 call dword ptr [0x1123135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123135c))), 0x11208e5fu);
  /* 11208e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11208e61 je 0x11208e6b */
  if (C.zf) goto L_11208e6b;
  /* 11208e63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11208e66 jmp 0x11209459 */
  goto L_11209459;
L_11208e6b:;
  /* 11208e6b mov edx, dword ptr [0x11230e08] */
  EDX = (r32((uint32_t)(0x11230e08)));
  /* 11208e71 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11208e77 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11208e81 jmp 0x11208e92 */
  goto L_11208e92;
L_11208e83:;
  /* 11208e83 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11208e89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208e8c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11208e92:;
  /* 11208e92 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11208e98 cmp ecx, dword ptr [0x11230e04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230e04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208e9e jge 0x11209457 */
  if ((C.sf==C.of)) goto L_11209457;
  /* 11208ea4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11208eaa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11208ead mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11208eb3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11208eb8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11208ebe push ecx */
  push32((uint32_t)(ECX));
  /* 11208ebf call dword ptr [0x1123135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123135c))), 0x11208ec5u);
  /* 11208ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11208ec7 je 0x11208ed3 */
  if (C.zf) goto L_11208ed3;
  /* 11208ec9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11208ece jmp 0x11209459 */
  goto L_11209459;
L_11208ed3:;
  /* 11208ed3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11208ed9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11208edc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11208ee2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11208ee8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208eee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11208ef1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11208ef7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11208efa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11208efd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11208f07 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11208f11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11208f18 jmp 0x11208f23 */
  goto L_11208f23;
L_11208f1a:;
  /* 11208f1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11208f1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208f20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11208f23:;
  /* 11208f23 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208f27 jge 0x1120941b */
  if ((C.sf==C.of)) goto L_1120941b;
  /* 11208f2d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11208f37 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11208f41 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11208f4b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11208f55 jmp 0x11208f66 */
  goto L_11208f66;
L_11208f57:;
  /* 11208f57 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11208f5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208f60 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11208f66:;
  /* 11208f66 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208f6d jge 0x11208f82 */
  if ((C.sf==C.of)) goto L_11208f82;
  /* 11208f6f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11208f75 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11208f80 jmp 0x11208f57 */
  goto L_11208f57;
L_11208f82:;
  /* 11208f82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208f86 jl 0x112093bd */
  if ((C.sf!=C.of)) goto L_112093bd;
  /* 11208f8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11208f91 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11208f97 push ecx */
  push32((uint32_t)(ECX));
  /* 11208f98 call dword ptr [0x1123135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123135c))), 0x11208f9eu);
  /* 11208f9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11208fa0 je 0x11208fac */
  if (C.zf) goto L_11208fac;
  /* 11208fa2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11208fa7 jmp 0x11209459 */
  goto L_11209459;
L_11208fac:;
  /* 11208fac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11208fb2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11208fb5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11208fbf jmp 0x11208fd0 */
  goto L_11208fd0;
L_11208fc1:;
  /* 11208fc1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11208fc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208fca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11208fd0:;
  /* 11208fd0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11208fd7 jge 0x11209154 */
  if ((C.sf==C.of)) goto L_11209154;
  /* 11208fdd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11208fe0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208fe3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11208fe9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11208fef add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11208ff5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11208ffb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11209001 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209005 jne 0x11209012 */
  if (!C.zf) goto L_11209012;
  /* 11209007 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1120900d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209010 je 0x1120901c */
  if (C.zf) goto L_1120901c;
L_11209012:;
  /* 11209012 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11209017 jmp 0x11209459 */
  goto L_11209459;
L_1120901c:;
  /* 1120901c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11209022 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11209024 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1120902a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11209030 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11209036 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1120903c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1120903f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11209041 je 0x11209079 */
  if (C.zf) goto L_11209079;
  /* 11209043 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11209049 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120904c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11209052 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120905c jle 0x11209068 */
  if ((C.zf||C.sf!=C.of)) goto L_11209068;
  /* 1120905e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11209063 jmp 0x11209459 */
  goto L_11209459;
L_11209068:;
  /* 11209068 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1120906e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209071 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11209077 jmp 0x112090bb */
  goto L_112090bb;
L_11209079:;
  /* 11209079 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1120907f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11209082 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209085 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1120908b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209092 jle 0x1120909e */
  if ((C.zf||C.sf!=C.of)) goto L_1120909e;
  /* 11209094 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1120909e:;
  /* 1120909e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112090a4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 112090ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112090ae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112090b4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_112090bb:;
  /* 112090bb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112090c2 jl 0x112090dd */
  if ((C.sf!=C.of)) goto L_112090dd;
  /* 112090c4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 112090ca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 112090cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112090cf jne 0x112090dd */
  if (!C.zf) goto L_112090dd;
  /* 112090d1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112090db jle 0x112090e7 */
  if ((C.zf||C.sf!=C.of)) goto L_112090e7;
L_112090dd:;
  /* 112090dd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 112090e2 jmp 0x11209459 */
  goto L_11209459;
L_112090e7:;
  /* 112090e7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 112090ed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112090f3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 112090f6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112090fc je 0x11209108 */
  if (C.zf) goto L_11209108;
  /* 112090fe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11209103 jmp 0x11209459 */
  goto L_11209459;
L_11209108:;
  /* 11209108 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1120910e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209114 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1120911a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11209120 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209126 jb 0x1120901c */
  if (C.cf) goto L_1120901c;
  /* 1120912c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11209132 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209138 je 0x11209144 */
  if (C.zf) goto L_11209144;
  /* 1120913a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1120913f jmp 0x11209459 */
  goto L_11209459;
L_11209144:;
  /* 11209144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11209147 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120914c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120914f jmp 0x11208fc1 */
  goto L_11208fc1;
L_11209154:;
  /* 11209154 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11209157 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11209159 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120915f je 0x1120916b */
  if (C.zf) goto L_1120916b;
  /* 11209161 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11209166 jmp 0x11209459 */
  goto L_11209459;
L_1120916b:;
  /* 1120916b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120916e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11209174 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1120917b jmp 0x11209186 */
  goto L_11209186;
L_1120917d:;
  /* 1120917d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11209180 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209183 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11209186:;
  /* 11209186 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120918a jge 0x112093bd */
  if ((C.sf==C.of)) goto L_112093bd;
  /* 11209190 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1120919a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 112091a0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_112091a6:;
  /* 112091a6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 112091ac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112091af mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 112091b5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112091bb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112091c1 je 0x112092ea */
  if (C.zf) goto L_112092ea;
  /* 112091c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112091ca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 112091d0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112091d7 je 0x112092ea */
  if (C.zf) goto L_112092ea;
  /* 112091dd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112091e3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112091e9 jb 0x112091fe */
  if (C.cf) goto L_112091fe;
  /* 112091eb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 112091f1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112091f6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112091fc jb 0x11209208 */
  if (C.cf) goto L_11209208;
L_112091fe:;
  /* 112091fe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11209203 jmp 0x11209459 */
  goto L_11209459;
L_11209208:;
  /* 11209208 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1120920e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11209214 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1120921a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11209220 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209223 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11209226 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11209229 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120922e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11209234:;
  /* 11209234 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11209237 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120923d je 0x1120925e */
  if (C.zf) goto L_1120925e;
  /* 1120923f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11209242 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209248 jne 0x1120924c */
  if (!C.zf) goto L_1120924c;
  /* 1120924a jmp 0x1120925e */
  goto L_1120925e;
L_1120924c:;
  /* 1120924c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120924f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11209251 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11209254 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11209257 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209259 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1120925c jmp 0x11209234 */
  goto L_11209234;
L_1120925e:;
  /* 1120925e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11209261 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209267 jne 0x11209273 */
  if (!C.zf) goto L_11209273;
  /* 11209269 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1120926e jmp 0x11209459 */
  goto L_11209459;
L_11209273:;
  /* 11209273 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11209279 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120927b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1120927e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209281 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11209287 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120928e jle 0x1120929a */
  if ((C.zf||C.sf!=C.of)) goto L_1120929a;
  /* 11209290 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1120929a:;
  /* 1120929a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112092a0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112092a3 je 0x112092af */
  if (C.zf) goto L_112092af;
  /* 112092a5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 112092aa jmp 0x11209459 */
  goto L_11209459;
L_112092af:;
  /* 112092af mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112092b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112092b8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112092be je 0x112092ca */
  if (C.zf) goto L_112092ca;
  /* 112092c0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 112092c5 jmp 0x11209459 */
  goto L_11209459;
L_112092ca:;
  /* 112092ca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112092d0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 112092d6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 112092dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112092df mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 112092e5 jmp 0x112091a6 */
  goto L_112091a6;
L_112092ea:;
  /* 112092ea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112092f1 je 0x11209361 */
  if (C.zf) goto L_11209361;
  /* 112092f3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112092f7 jge 0x1120932b */
  if ((C.sf==C.of)) goto L_1120932b;
  /* 112092f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112092fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11209301 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11209303 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11209309 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1120930b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11209311 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11209316 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11209319 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1120931b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11209321 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11209323 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11209329 jmp 0x11209361 */
  goto L_11209361;
L_1120932b:;
  /* 1120932b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120932e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209331 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11209336 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11209338 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1120933e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11209340 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11209346 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11209349 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120934c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11209351 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11209353 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11209359 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1120935b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11209361:;
  /* 11209361 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11209367 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120936a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209370 jne 0x11209384 */
  if (!C.zf) goto L_11209384;
  /* 11209372 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11209375 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1120937b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209382 je 0x1120938e */
  if (C.zf) goto L_1120938e;
L_11209384:;
  /* 11209384 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11209389 jmp 0x11209459 */
  goto L_11209459;
L_1120938e:;
  /* 1120938e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11209394 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11209397 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120939d je 0x112093a9 */
  if (C.zf) goto L_112093a9;
  /* 1120939f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 112093a4 jmp 0x11209459 */
  goto L_11209459;
L_112093a9:;
  /* 112093a9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 112093af add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112093b2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 112093b8 jmp 0x1120917d */
  goto L_1120917d;
L_112093bd:;
  /* 112093bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112093c0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 112093c6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 112093cc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112093d0 jne 0x112093ea */
  if (!C.zf) goto L_112093ea;
  /* 112093d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112093d5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 112093db mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 112093e1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112093e8 je 0x112093f1 */
  if (C.zf) goto L_112093f1;
L_112093ea:;
  /* 112093ea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 112093ef jmp 0x11209459 */
  goto L_11209459;
L_112093f1:;
  /* 112093f1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 112093f7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112093fd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11209403 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11209406 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120940b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1120940e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209411 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11209413 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11209416 jmp 0x11208f1a */
  goto L_11208f1a;
L_1120941b:;
  /* 1120941b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11209421 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11209427 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209429 jne 0x1120943c */
  if (!C.zf) goto L_1120943c;
  /* 1120942b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11209431 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11209437 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120943a je 0x11209443 */
  if (C.zf) goto L_11209443;
L_1120943c:;
  /* 1120943c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11209441 jmp 0x11209459 */
  goto L_11209459;
L_11209443:;
  /* 11209443 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11209449 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120944c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11209452 jmp 0x11208e83 */
  goto L_11208e83;
L_11209457:;
  /* 11209457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11209459:;
  /* 11209459 mov esp, ebp */
  ESP = (EBP);
  /* 1120945b pop ebp */
  EBP = (pop32());
  /* 1120945c ret  */
  ESPCHK(0x11208e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009460 @ 0x11209460 (250 bytes, 92 insns) */
void f_11209460(void) {
  FTRACE(0x11209460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209460 push ebp */
  push32((uint32_t)(EBP));
  /* 11209461 mov ebp, esp */
  EBP = (ESP);
  /* 11209463 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209466 push ebx */
  push32((uint32_t)(EBX));
  /* 11209467 push esi */
  push32((uint32_t)(ESI));
  /* 11209468 push edi */
  push32((uint32_t)(EDI));
  /* 11209469 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1120946c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1120946f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11209472 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11209475:;
  /* 11209475 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209479 jne 0x11209499 */
  if (!C.zf) goto L_11209499;
  /* 1120947b push 0x1122ae68 */
  push32((uint32_t)(0x1122ae68u));
  /* 11209480 push 0 */
  push32((uint32_t)(0x0u));
  /* 11209482 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11209484 push 0x1122ae5c */
  push32((uint32_t)(0x1122ae5cu));
  /* 11209489 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120948b call 0x11202610 */
  push32(0x11209490u); f_11202610();
  /* 11209490 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209493 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209496 jne 0x11209499 */
  if (!C.zf) goto L_11209499;
  /* 11209498 int3  */
  x86_unimpl("int3 @ 0x11209498");
L_11209499:;
  /* 11209499 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120949b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120949d jne 0x11209475 */
  if (!C.zf) goto L_11209475;
L_1120949f:;
  /* 1120949f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112094a3 jne 0x112094c3 */
  if (!C.zf) goto L_112094c3;
  /* 112094a5 push 0x1122ae4c */
  push32((uint32_t)(0x1122ae4cu));
  /* 112094aa push 0 */
  push32((uint32_t)(0x0u));
  /* 112094ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 112094ae push 0x1122ae5c */
  push32((uint32_t)(0x1122ae5cu));
  /* 112094b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112094b5 call 0x11202610 */
  push32(0x112094bau); f_11202610();
  /* 112094ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112094bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112094c0 jne 0x112094c3 */
  if (!C.zf) goto L_112094c3;
  /* 112094c2 int3  */
  x86_unimpl("int3 @ 0x112094c2");
L_112094c3:;
  /* 112094c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112094c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112094c7 jne 0x1120949f */
  if (!C.zf) goto L_1120949f;
  /* 112094c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112094cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 112094d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112094d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112094d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112094dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112094df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112094e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112094e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112094e7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 112094ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112094f1 push ecx */
  push32((uint32_t)(ECX));
  /* 112094f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112094f5 push edx */
  push32((uint32_t)(EDX));
  /* 112094f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112094f9 push eax */
  push32((uint32_t)(EAX));
  /* 112094fa call 0x1120a4e0 */
  push32(0x112094ffu); f_1120a4e0();
  /* 112094ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209502 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11209505 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209508 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120950b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120950e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209511 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11209514 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209517 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120951b jl 0x1120953f */
  if ((C.sf!=C.of)) goto L_1120953f;
  /* 1120951d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209520 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11209522 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11209525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11209527 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120952d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11209530 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209533 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11209535 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209538 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120953b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1120953d jmp 0x11209550 */
  goto L_11209550;
L_1120953f:;
  /* 1120953f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209542 push edx */
  push32((uint32_t)(EDX));
  /* 11209543 push 0 */
  push32((uint32_t)(0x0u));
  /* 11209545 call 0x1120a260 */
  push32(0x1120954au); f_1120a260();
  /* 1120954a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120954d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11209550:;
  /* 11209550 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11209553 pop edi */
  EDI = (pop32());
  /* 11209554 pop esi */
  ESI = (pop32());
  /* 11209555 pop ebx */
  EBX = (pop32());
  /* 11209556 mov esp, ebp */
  ESP = (EBP);
  /* 11209558 pop ebp */
  EBP = (pop32());
  /* 11209559 ret  */
  ESPCHK(0x11209460u, _esp0);
  ESP += 4; return;
}

/* FUN_10009560 @ 0x11209560 (183 bytes, 58 insns) */
void f_11209560(void) {
  FTRACE(0x11209560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209560 push ebp */
  push32((uint32_t)(EBP));
  /* 11209561 mov ebp, esp */
  EBP = (ESP);
  /* 11209563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120956c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209571 ja 0x1120958a */
  if ((!C.cf&&!C.zf)) goto L_1120958a;
  /* 11209573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209576 mov edx, dword ptr [0x1122dc98] */
  EDX = (r32((uint32_t)(0x1122dc98)));
  /* 1120957c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120957e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11209582 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11209585 jmp 0x11209613 */
  goto L_11209613;
L_1120958a:;
  /* 1120958a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120958d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11209590 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11209596 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120959c mov edx, dword ptr [0x1122dc98] */
  EDX = (r32((uint32_t)(0x1122dc98)));
  /* 112095a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112095a4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 112095a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 112095ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112095af je 0x112095d3 */
  if (C.zf) goto L_112095d3;
  /* 112095b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112095b4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 112095b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112095bd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 112095c0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 112095c3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 112095c6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 112095ca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 112095d1 jmp 0x112095e4 */
  goto L_112095e4;
L_112095d3:;
  /* 112095d3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 112095d6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 112095d9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 112095dd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_112095e4:;
  /* 112095e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112095e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112095e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112095ea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 112095ed push ecx */
  push32((uint32_t)(ECX));
  /* 112095ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112095f1 push edx */
  push32((uint32_t)(EDX));
  /* 112095f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112095f5 push eax */
  push32((uint32_t)(EAX));
  /* 112095f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112095f8 call 0x1120b780 */
  push32(0x112095fdu); f_1120b780();
  /* 112095fd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11209602 jne 0x11209608 */
  if (!C.zf) goto L_11209608;
  /* 11209604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11209606 jmp 0x11209613 */
  goto L_11209613;
L_11209608:;
  /* 11209608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120960b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11209610 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11209613:;
  /* 11209613 mov esp, ebp */
  ESP = (EBP);
  /* 11209615 pop ebp */
  EBP = (pop32());
  /* 11209616 ret  */
  ESPCHK(0x11209560u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x11209620 (836 bytes, 238 insns) */
void f_11209620(void) {
  FTRACE(0x11209620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209620 push ebp */
  push32((uint32_t)(EBP));
  /* 11209621 mov ebp, esp */
  EBP = (ESP);
  /* 11209623 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209626 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11209628 call 0x11206f50 */
  push32(0x1120962du); f_11206f50();
  /* 1120962d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209633 push eax */
  push32((uint32_t)(EAX));
  /* 11209634 call 0x11209970 */
  push32(0x11209639u); f_11209970();
  /* 11209639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120963c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1120963f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209642 cmp ecx, dword ptr [0x11230b44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230b44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209648 jne 0x1120965b */
  if (!C.zf) goto L_1120965b;
  /* 1120964a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1120964c call 0x11206ff0 */
  push32(0x11209651u); f_11206ff0();
  /* 11209651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11209656 jmp 0x11209960 */
  goto L_11209960;
L_1120965b:;
  /* 1120965b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120965f jne 0x1120967c */
  if (!C.zf) goto L_1120967c;
  /* 11209661 call 0x11209a50 */
  push32(0x11209666u); f_11209a50();
  /* 11209666 call 0x11209ad0 */
  push32(0x1120966bu); f_11209ad0();
  /* 1120966b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1120966d call 0x11206ff0 */
  push32(0x11209672u); f_11206ff0();
  /* 11209672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209675 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11209677 jmp 0x11209960 */
  goto L_11209960;
L_1120967c:;
  /* 1120967c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11209683 jmp 0x1120968e */
  goto L_1120968e;
L_11209685:;
  /* 11209685 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209688 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120968b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1120968e:;
  /* 1120968e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209692 jae 0x112097df */
  if (!C.cf) goto L_112097df;
  /* 11209698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120969b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120969e mov ecx, dword ptr [eax + 0x1122deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1122deb8)));
  /* 112096a4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112096a7 jne 0x112097da */
  if (!C.zf) goto L_112097da;
  /* 112096ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112096b4 jmp 0x112096bf */
  goto L_112096bf;
L_112096b6:;
  /* 112096b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112096b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112096bc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_112096bf:;
  /* 112096bf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112096c6 jae 0x112096d4 */
  if (!C.cf) goto L_112096d4;
  /* 112096c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112096cb mov byte ptr [eax + 0x11230ce0], 0 */
  w8((uint32_t)(EAX + 0x11230ce0), (0x0u));
  /* 112096d2 jmp 0x112096b6 */
  goto L_112096b6;
L_112096d4:;
  /* 112096d4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112096db jmp 0x112096e6 */
  goto L_112096e6;
L_112096dd:;
  /* 112096dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112096e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112096e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112096e6:;
  /* 112096e6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112096ea jae 0x11209767 */
  if (!C.cf) goto L_11209767;
  /* 112096ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112096ef imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112096f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112096f5 lea ecx, [edx + eax*8 + 0x1122dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1122dec8));
  /* 112096fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112096ff jmp 0x1120970a */
  goto L_1120970a;
L_11209701:;
  /* 11209701 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11209704 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209707 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1120970a:;
  /* 1120970a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120970d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120970f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11209711 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11209713 je 0x11209762 */
  if (C.zf) goto L_11209762;
  /* 11209715 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11209718 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120971a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1120971d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120971f je 0x11209762 */
  if (C.zf) goto L_11209762;
  /* 11209721 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11209724 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11209726 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11209728 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1120972b jmp 0x11209736 */
  goto L_11209736;
L_1120972d:;
  /* 1120972d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209730 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209733 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11209736:;
  /* 11209736 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11209739 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120973b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1120973e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209741 ja 0x11209760 */
  if ((!C.cf&&!C.zf)) goto L_11209760;
  /* 11209743 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209746 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11209749 mov dl, byte ptr [eax + 0x11230ce1] */
  DL = (r8((uint32_t)(EAX + 0x11230ce1)));
  /* 1120974f or dl, byte ptr [ecx + 0x1122deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1122deb0))); DL = (_r); fl_logic(_r,8); }
  /* 11209755 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209758 mov byte ptr [eax + 0x11230ce1], dl */
  w8((uint32_t)(EAX + 0x11230ce1), (DL));
  /* 1120975e jmp 0x1120972d */
  goto L_1120972d;
L_11209760:;
  /* 11209760 jmp 0x11209701 */
  goto L_11209701;
L_11209762:;
  /* 11209762 jmp 0x112096dd */
  goto L_112096dd;
L_11209767:;
  /* 11209767 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120976a mov dword ptr [0x11230b44], ecx */
  w32((uint32_t)(0x11230b44), (ECX));
  /* 11209770 mov dword ptr [0x11230bcc], 1 */
  w32((uint32_t)(0x11230bcc), (0x1u));
  /* 1120977a mov edx, dword ptr [0x11230b44] */
  EDX = (r32((uint32_t)(0x11230b44)));
  /* 11209780 push edx */
  push32((uint32_t)(EDX));
  /* 11209781 call 0x112099d0 */
  push32(0x11209786u); f_112099d0();
  /* 11209786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209789 mov dword ptr [0x11230de4], eax */
  w32((uint32_t)(0x11230de4), (EAX));
  /* 1120978e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11209795 jmp 0x112097a0 */
  goto L_112097a0;
L_11209797:;
  /* 11209797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120979a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120979d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112097a0:;
  /* 112097a0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112097a4 jae 0x112097c4 */
  if (!C.cf) goto L_112097c4;
  /* 112097a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112097a9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112097ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112097af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112097b2 mov cx, word ptr [ecx + eax*2 + 0x1122debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1122debc)));
  /* 112097ba mov word ptr [edx*2 + 0x11230bc0], cx */
  w16((uint32_t)(EDX*2 + 0x11230bc0), (CX));
  /* 112097c2 jmp 0x11209797 */
  goto L_11209797;
L_112097c4:;
  /* 112097c4 call 0x11209ad0 */
  push32(0x112097c9u); f_11209ad0();
  /* 112097c9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112097cb call 0x11206ff0 */
  push32(0x112097d0u); f_11206ff0();
  /* 112097d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112097d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112097d5 jmp 0x11209960 */
  goto L_11209960;
L_112097da:;
  /* 112097da jmp 0x11209685 */
  goto L_11209685;
L_112097df:;
  /* 112097df lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 112097e2 push edx */
  push32((uint32_t)(EDX));
  /* 112097e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112097e6 push eax */
  push32((uint32_t)(EAX));
  /* 112097e7 call dword ptr [0x112312e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312e4))), 0x112097edu);
  /* 112097ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112097f0 jne 0x11209932 */
  if (!C.zf) goto L_11209932;
  /* 112097f6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112097fd jmp 0x11209808 */
  goto L_11209808;
L_112097ff:;
  /* 112097ff mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209805 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11209808:;
  /* 11209808 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120980f jae 0x1120981d */
  if (!C.cf) goto L_1120981d;
  /* 11209811 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209814 mov byte ptr [edx + 0x11230ce0], 0 */
  w8((uint32_t)(EDX + 0x11230ce0), (0x0u));
  /* 1120981b jmp 0x112097ff */
  goto L_112097ff;
L_1120981d:;
  /* 1120981d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209820 mov dword ptr [0x11230b44], eax */
  w32((uint32_t)(0x11230b44), (EAX));
  /* 11209825 mov dword ptr [0x11230de4], 0 */
  w32((uint32_t)(0x11230de4), (0x0u));
  /* 1120982f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209833 jbe 0x112098ee */
  if ((C.cf||C.zf)) goto L_112098ee;
  /* 11209839 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1120983c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1120983f jmp 0x1120984a */
  goto L_1120984a;
L_11209841:;
  /* 11209841 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11209844 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209847 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1120984a:;
  /* 1120984a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120984d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120984f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11209851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11209853 je 0x1120989c */
  if (C.zf) goto L_1120989c;
  /* 11209855 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11209858 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120985a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1120985d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120985f je 0x1120989c */
  if (C.zf) goto L_1120989c;
  /* 11209861 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11209864 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11209866 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11209868 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1120986b jmp 0x11209876 */
  goto L_11209876;
L_1120986d:;
  /* 1120986d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209870 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209873 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11209876:;
  /* 11209876 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11209879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120987b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1120987e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209881 ja 0x1120989a */
  if ((!C.cf&&!C.zf)) goto L_1120989a;
  /* 11209883 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209886 mov cl, byte ptr [eax + 0x11230ce1] */
  CL = (r8((uint32_t)(EAX + 0x11230ce1)));
  /* 1120988c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1120988f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11209892 mov byte ptr [edx + 0x11230ce1], cl */
  w8((uint32_t)(EDX + 0x11230ce1), (CL));
  /* 11209898 jmp 0x1120986d */
  goto L_1120986d;
L_1120989a:;
  /* 1120989a jmp 0x11209841 */
  goto L_11209841;
L_1120989c:;
  /* 1120989c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 112098a3 jmp 0x112098ae */
  goto L_112098ae;
L_112098a5:;
  /* 112098a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112098a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112098ab mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112098ae:;
  /* 112098ae cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112098b5 jae 0x112098ce */
  if (!C.cf) goto L_112098ce;
  /* 112098b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112098ba mov dl, byte ptr [ecx + 0x11230ce1] */
  DL = (r8((uint32_t)(ECX + 0x11230ce1)));
  /* 112098c0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 112098c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112098c6 mov byte ptr [eax + 0x11230ce1], dl */
  w8((uint32_t)(EAX + 0x11230ce1), (DL));
  /* 112098cc jmp 0x112098a5 */
  goto L_112098a5;
L_112098ce:;
  /* 112098ce mov ecx, dword ptr [0x11230b44] */
  ECX = (r32((uint32_t)(0x11230b44)));
  /* 112098d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112098d5 call 0x112099d0 */
  push32(0x112098dau); f_112099d0();
  /* 112098da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112098dd mov dword ptr [0x11230de4], eax */
  w32((uint32_t)(0x11230de4), (EAX));
  /* 112098e2 mov dword ptr [0x11230bcc], 1 */
  w32((uint32_t)(0x11230bcc), (0x1u));
  /* 112098ec jmp 0x112098f8 */
  goto L_112098f8;
L_112098ee:;
  /* 112098ee mov dword ptr [0x11230bcc], 0 */
  w32((uint32_t)(0x11230bcc), (0x0u));
L_112098f8:;
  /* 112098f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112098ff jmp 0x1120990a */
  goto L_1120990a;
L_11209901:;
  /* 11209901 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11209904 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209907 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1120990a:;
  /* 1120990a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120990e jae 0x1120991f */
  if (!C.cf) goto L_1120991f;
  /* 11209910 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11209913 mov word ptr [eax*2 + 0x11230bc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11230bc0), (0x0u));
  /* 1120991d jmp 0x11209901 */
  goto L_11209901;
L_1120991f:;
  /* 1120991f call 0x11209ad0 */
  push32(0x11209924u); f_11209ad0();
  /* 11209924 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11209926 call 0x11206ff0 */
  push32(0x1120992bu); f_11206ff0();
  /* 1120992b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120992e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11209930 jmp 0x11209960 */
  goto L_11209960;
L_11209932:;
  /* 11209932 cmp dword ptr [0x1122f648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209939 je 0x11209953 */
  if (C.zf) goto L_11209953;
  /* 1120993b call 0x11209a50 */
  push32(0x11209940u); f_11209a50();
  /* 11209940 call 0x11209ad0 */
  push32(0x11209945u); f_11209ad0();
  /* 11209945 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11209947 call 0x11206ff0 */
  push32(0x1120994cu); f_11206ff0();
  /* 1120994c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120994f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11209951 jmp 0x11209960 */
  goto L_11209960;
L_11209953:;
  /* 11209953 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11209955 call 0x11206ff0 */
  push32(0x1120995au); f_11206ff0();
  /* 1120995a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120995d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11209960:;
  /* 11209960 mov esp, ebp */
  ESP = (EBP);
  /* 11209962 pop ebp */
  EBP = (pop32());
  /* 11209963 ret  */
  ESPCHK(0x11209620u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11209970 (89 bytes, 21 insns) */
void f_11209970(void) {
  FTRACE(0x11209970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209970 push ebp */
  push32((uint32_t)(EBP));
  /* 11209971 mov ebp, esp */
  EBP = (ESP);
  /* 11209973 mov dword ptr [0x1122f648], 0 */
  w32((uint32_t)(0x1122f648), (0x0u));
  /* 1120997d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209981 jne 0x11209995 */
  if (!C.zf) goto L_11209995;
  /* 11209983 mov dword ptr [0x1122f648], 1 */
  w32((uint32_t)(0x1122f648), (0x1u));
  /* 1120998d call dword ptr [0x112312dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312dc))), 0x11209993u);
  /* 11209993 jmp 0x112099c7 */
  goto L_112099c7;
L_11209995:;
  /* 11209995 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209999 jne 0x112099ad */
  if (!C.zf) goto L_112099ad;
  /* 1120999b mov dword ptr [0x1122f648], 1 */
  w32((uint32_t)(0x1122f648), (0x1u));
  /* 112099a5 call dword ptr [0x112312e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312e0))), 0x112099abu);
  /* 112099ab jmp 0x112099c7 */
  goto L_112099c7;
L_112099ad:;
  /* 112099ad cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112099b1 jne 0x112099c4 */
  if (!C.zf) goto L_112099c4;
  /* 112099b3 mov dword ptr [0x1122f648], 1 */
  w32((uint32_t)(0x1122f648), (0x1u));
  /* 112099bd mov eax, dword ptr [0x1122f668] */
  EAX = (r32((uint32_t)(0x1122f668)));
  /* 112099c2 jmp 0x112099c7 */
  goto L_112099c7;
L_112099c4:;
  /* 112099c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_112099c7:;
  /* 112099c7 pop ebp */
  EBP = (pop32());
  /* 112099c8 ret  */
  ESPCHK(0x11209970u, _esp0);
  ESP += 4; return;
}

/* FUN_100099d0 @ 0x112099d0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_112099d0(void) {
  FTRACE(0x112099d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112099d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112099d1 mov ebp, esp */
  EBP = (ESP);
  /* 112099d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112099d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112099d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112099da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112099dd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112099e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112099e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112099ea ja 0x11209a1a */
  if ((!C.cf&&!C.zf)) goto L_11209a1a;
  /* 112099ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112099ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112099f1 mov dl, byte ptr [eax + 0x11209a34] */
  DL = (r8((uint32_t)(EAX + 0x11209a34)));
  /* 112099f7 jmp dword ptr [edx*4 + 0x11209a20] */
  switch (EDX) {
    case 0: goto L_112099fe;
    case 1: goto L_11209a05;
    case 2: goto L_11209a0c;
    case 3: goto L_11209a13;
    case 4: goto L_11209a1a;
    default: x86_unimpl("switch@0x112099f7 out of table"); return;
  }
L_112099fe:;
  /* 112099fe mov eax, 0x411 */
  EAX = (0x411u);
  /* 11209a03 jmp 0x11209a1c */
  goto L_11209a1c;
L_11209a05:;
  /* 11209a05 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11209a0a jmp 0x11209a1c */
  goto L_11209a1c;
L_11209a0c:;
  /* 11209a0c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11209a11 jmp 0x11209a1c */
  goto L_11209a1c;
L_11209a13:;
  /* 11209a13 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11209a18 jmp 0x11209a1c */
  goto L_11209a1c;
L_11209a1a:;
  /* 11209a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11209a1c:;
  /* 11209a1c mov esp, ebp */
  ESP = (EBP);
  /* 11209a1e pop ebp */
  EBP = (pop32());
  /* 11209a1f ret  */
  ESPCHK(0x112099d0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11209a50 (116 bytes, 29 insns) */
void f_11209a50(void) {
  FTRACE(0x11209a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11209a51 mov ebp, esp */
  EBP = (ESP);
  /* 11209a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11209a54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11209a5b jmp 0x11209a66 */
  goto L_11209a66;
L_11209a5d:;
  /* 11209a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209a63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11209a66:;
  /* 11209a66 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209a6d jge 0x11209a7b */
  if ((C.sf==C.of)) goto L_11209a7b;
  /* 11209a6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209a72 mov byte ptr [ecx + 0x11230ce0], 0 */
  w8((uint32_t)(ECX + 0x11230ce0), (0x0u));
  /* 11209a79 jmp 0x11209a5d */
  goto L_11209a5d;
L_11209a7b:;
  /* 11209a7b mov dword ptr [0x11230b44], 0 */
  w32((uint32_t)(0x11230b44), (0x0u));
  /* 11209a85 mov dword ptr [0x11230bcc], 0 */
  w32((uint32_t)(0x11230bcc), (0x0u));
  /* 11209a8f mov dword ptr [0x11230de4], 0 */
  w32((uint32_t)(0x11230de4), (0x0u));
  /* 11209a99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11209aa0 jmp 0x11209aab */
  goto L_11209aab;
L_11209aa2:;
  /* 11209aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209aa5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209aa8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11209aab:;
  /* 11209aab cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209aaf jge 0x11209ac0 */
  if ((C.sf==C.of)) goto L_11209ac0;
  /* 11209ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209ab4 mov word ptr [eax*2 + 0x11230bc0], 0 */
  w16((uint32_t)(EAX*2 + 0x11230bc0), (0x0u));
  /* 11209abe jmp 0x11209aa2 */
  goto L_11209aa2;
L_11209ac0:;
  /* 11209ac0 mov esp, ebp */
  ESP = (EBP);
  /* 11209ac2 pop ebp */
  EBP = (pop32());
  /* 11209ac3 ret  */
  ESPCHK(0x11209a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x11209ad0 (770 bytes, 175 insns) */
void f_11209ad0(void) {
  FTRACE(0x11209ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11209ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11209ad3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209ad9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11209adf push eax */
  push32((uint32_t)(EAX));
  /* 11209ae0 mov ecx, dword ptr [0x11230b44] */
  ECX = (r32((uint32_t)(0x11230b44)));
  /* 11209ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11209ae7 call dword ptr [0x112312e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312e4))), 0x11209aedu);
  /* 11209aed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209af0 jne 0x11209d09 */
  if (!C.zf) goto L_11209d09;
  /* 11209af6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11209b00 jmp 0x11209b11 */
  goto L_11209b11;
L_11209b02:;
  /* 11209b02 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209b08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209b0b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11209b11:;
  /* 11209b11 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209b1b jae 0x11209b32 */
  if (!C.cf) goto L_11209b32;
  /* 11209b1d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209b23 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11209b29 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11209b30 jmp 0x11209b02 */
  goto L_11209b02;
L_11209b32:;
  /* 11209b32 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11209b39 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11209b3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11209b42 jmp 0x11209b4d */
  goto L_11209b4d;
L_11209b44:;
  /* 11209b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209b47 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209b4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11209b4d:;
  /* 11209b4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209b50 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11209b52 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11209b54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11209b56 je 0x11209b98 */
  if (C.zf) goto L_11209b98;
  /* 11209b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209b5b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11209b5d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11209b5f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11209b65 jmp 0x11209b76 */
  goto L_11209b76;
L_11209b67:;
  /* 11209b67 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209b6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209b70 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11209b76:;
  /* 11209b76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11209b79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11209b7b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11209b7e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209b84 ja 0x11209b96 */
  if ((!C.cf&&!C.zf)) goto L_11209b96;
  /* 11209b86 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209b8c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11209b94 jmp 0x11209b67 */
  goto L_11209b67;
L_11209b96:;
  /* 11209b96 jmp 0x11209b44 */
  goto L_11209b44;
L_11209b98:;
  /* 11209b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11209b9a mov eax, dword ptr [0x11230de4] */
  EAX = (r32((uint32_t)(0x11230de4)));
  /* 11209b9f push eax */
  push32((uint32_t)(EAX));
  /* 11209ba0 mov ecx, dword ptr [0x11230b44] */
  ECX = (r32((uint32_t)(0x11230b44)));
  /* 11209ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 11209ba7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11209bad push edx */
  push32((uint32_t)(EDX));
  /* 11209bae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11209bb3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11209bb9 push eax */
  push32((uint32_t)(EAX));
  /* 11209bba push 1 */
  push32((uint32_t)(0x1u));
  /* 11209bbc call 0x1120b780 */
  push32(0x11209bc1u); f_1120b780();
  /* 11209bc1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11209bc6 mov ecx, dword ptr [0x11230b44] */
  ECX = (r32((uint32_t)(0x11230b44)));
  /* 11209bcc push ecx */
  push32((uint32_t)(ECX));
  /* 11209bcd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11209bd2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11209bd8 push edx */
  push32((uint32_t)(EDX));
  /* 11209bd9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11209bde lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11209be4 push eax */
  push32((uint32_t)(EAX));
  /* 11209be5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11209bea mov ecx, dword ptr [0x11230de4] */
  ECX = (r32((uint32_t)(0x11230de4)));
  /* 11209bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11209bf1 call 0x1120b940 */
  push32(0x11209bf6u); f_1120b940();
  /* 11209bf6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11209bfb mov edx, dword ptr [0x11230b44] */
  EDX = (r32((uint32_t)(0x11230b44)));
  /* 11209c01 push edx */
  push32((uint32_t)(EDX));
  /* 11209c02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11209c07 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11209c0d push eax */
  push32((uint32_t)(EAX));
  /* 11209c0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11209c13 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11209c19 push ecx */
  push32((uint32_t)(ECX));
  /* 11209c1a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11209c1f mov edx, dword ptr [0x11230de4] */
  EDX = (r32((uint32_t)(0x11230de4)));
  /* 11209c25 push edx */
  push32((uint32_t)(EDX));
  /* 11209c26 call 0x1120b940 */
  push32(0x11209c2bu); f_1120b940();
  /* 11209c2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209c2e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11209c38 jmp 0x11209c49 */
  goto L_11209c49;
L_11209c3a:;
  /* 11209c3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209c40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209c43 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11209c49:;
  /* 11209c49 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209c53 jae 0x11209d04 */
  if (!C.cf) goto L_11209d04;
  /* 11209c59 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209c5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11209c61 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11209c69 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11209c6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11209c6e je 0x11209ca6 */
  if (C.zf) goto L_11209ca6;
  /* 11209c70 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209c76 mov cl, byte ptr [eax + 0x11230ce1] */
  CL = (r8((uint32_t)(EAX + 0x11230ce1)));
  /* 11209c7c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11209c7f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209c85 mov byte ptr [edx + 0x11230ce1], cl */
  w8((uint32_t)(EDX + 0x11230ce1), (CL));
  /* 11209c8b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209c91 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209c97 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11209c9e mov byte ptr [eax + 0x11230be0], dl */
  w8((uint32_t)(EAX + 0x11230be0), (DL));
  /* 11209ca4 jmp 0x11209cff */
  goto L_11209cff;
L_11209ca6:;
  /* 11209ca6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209cac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11209cae mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11209cb6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11209cb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11209cbb je 0x11209cf2 */
  if (C.zf) goto L_11209cf2;
  /* 11209cbd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209cc3 mov al, byte ptr [edx + 0x11230ce1] */
  AL = (r8((uint32_t)(EDX + 0x11230ce1)));
  /* 11209cc9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11209ccb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209cd1 mov byte ptr [ecx + 0x11230ce1], al */
  w8((uint32_t)(ECX + 0x11230ce1), (AL));
  /* 11209cd7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209cdd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209ce3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11209cea mov byte ptr [edx + 0x11230be0], cl */
  w8((uint32_t)(EDX + 0x11230be0), (CL));
  /* 11209cf0 jmp 0x11209cff */
  goto L_11209cff;
L_11209cf2:;
  /* 11209cf2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209cf8 mov byte ptr [edx + 0x11230be0], 0 */
  w8((uint32_t)(EDX + 0x11230be0), (0x0u));
L_11209cff:;
  /* 11209cff jmp 0x11209c3a */
  goto L_11209c3a;
L_11209d04:;
  /* 11209d04 jmp 0x11209dce */
  goto L_11209dce;
L_11209d09:;
  /* 11209d09 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11209d13 jmp 0x11209d24 */
  goto L_11209d24;
L_11209d15:;
  /* 11209d15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209d1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209d1e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11209d24:;
  /* 11209d24 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209d2e jae 0x11209dce */
  if (!C.cf) goto L_11209dce;
  /* 11209d34 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209d3b jb 0x11209d78 */
  if (C.cf) goto L_11209d78;
  /* 11209d3d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209d44 ja 0x11209d78 */
  if ((!C.cf&&!C.zf)) goto L_11209d78;
  /* 11209d46 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209d4c mov dl, byte ptr [ecx + 0x11230ce1] */
  DL = (r8((uint32_t)(ECX + 0x11230ce1)));
  /* 11209d52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11209d55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209d5b mov byte ptr [eax + 0x11230ce1], dl */
  w8((uint32_t)(EAX + 0x11230ce1), (DL));
  /* 11209d61 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209d67 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209d6a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209d70 mov byte ptr [edx + 0x11230be0], cl */
  w8((uint32_t)(EDX + 0x11230be0), (CL));
  /* 11209d76 jmp 0x11209dc9 */
  goto L_11209dc9;
L_11209d78:;
  /* 11209d78 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209d7f jb 0x11209dbc */
  if (C.cf) goto L_11209dbc;
  /* 11209d81 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209d88 ja 0x11209dbc */
  if ((!C.cf&&!C.zf)) goto L_11209dbc;
  /* 11209d8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209d90 mov cl, byte ptr [eax + 0x11230ce1] */
  CL = (r8((uint32_t)(EAX + 0x11230ce1)));
  /* 11209d96 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11209d99 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209d9f mov byte ptr [edx + 0x11230ce1], cl */
  w8((uint32_t)(EDX + 0x11230ce1), (CL));
  /* 11209da5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209dab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209dae mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209db4 mov byte ptr [ecx + 0x11230be0], al */
  w8((uint32_t)(ECX + 0x11230be0), (AL));
  /* 11209dba jmp 0x11209dc9 */
  goto L_11209dc9;
L_11209dbc:;
  /* 11209dbc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11209dc2 mov byte ptr [edx + 0x11230be0], 0 */
  w8((uint32_t)(EDX + 0x11230be0), (0x0u));
L_11209dc9:;
  /* 11209dc9 jmp 0x11209d15 */
  goto L_11209d15;
L_11209dce:;
  /* 11209dce mov esp, ebp */
  ESP = (EBP);
  /* 11209dd0 pop ebp */
  EBP = (pop32());
  /* 11209dd1 ret  */
  ESPCHK(0x11209ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009de0 @ 0x11209de0 (23 bytes, 9 insns) */
void f_11209de0(void) {
  FTRACE(0x11209de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11209de1 mov ebp, esp */
  EBP = (ESP);
  /* 11209de3 cmp dword ptr [0x11230bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209dea je 0x11209df3 */
  if (C.zf) goto L_11209df3;
  /* 11209dec mov eax, dword ptr [0x11230b44] */
  EAX = (r32((uint32_t)(0x11230b44)));
  /* 11209df1 jmp 0x11209df5 */
  goto L_11209df5;
L_11209df3:;
  /* 11209df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11209df5:;
  /* 11209df5 pop ebp */
  EBP = (pop32());
  /* 11209df6 ret  */
  ESPCHK(0x11209de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e00 @ 0x11209e00 (34 bytes, 10 insns) */
void f_11209e00(void) {
  FTRACE(0x11209e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11209e01 mov ebp, esp */
  EBP = (ESP);
  /* 11209e03 cmp dword ptr [0x11230f90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230f90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209e0a jne 0x11209e20 */
  if (!C.zf) goto L_11209e20;
  /* 11209e0c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11209e0e call 0x11209620 */
  push32(0x11209e13u); f_11209620();
  /* 11209e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11209e16 mov dword ptr [0x11230f90], 1 */
  w32((uint32_t)(0x11230f90), (0x1u));
L_11209e20:;
  /* 11209e20 pop ebp */
  EBP = (pop32());
  /* 11209e21 ret  */
  ESPCHK(0x11209e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e30 @ 0x11209e30 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11209e30(void) {
  FTRACE(0x11209e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11209e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11209e31 mov ebp, esp */
  EBP = (ESP);
  /* 11209e33 push edi */
  push32((uint32_t)(EDI));
  /* 11209e34 push esi */
  push32((uint32_t)(ESI));
  /* 11209e35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11209e38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11209e3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11209e3e mov eax, ecx */
  EAX = (ECX);
  /* 11209e40 mov edx, ecx */
  EDX = (ECX);
  /* 11209e42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209e44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209e46 jbe 0x11209e50 */
  if ((C.cf||C.zf)) goto L_11209e50;
  /* 11209e48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209e4a jb 0x11209fc8 */
  if (C.cf) goto L_11209fc8;
L_11209e50:;
  /* 11209e50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11209e56 jne 0x11209e6c */
  if (!C.zf) goto L_11209e6c;
  /* 11209e58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11209e5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11209e5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209e61 jb 0x11209e8c */
  if (C.cf) goto L_11209e8c;
  /* 11209e63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11209e65 jmp dword ptr [edx*4 + 0x11209f78] */
  switch (EDX) {
    case 0: goto L_11209f88;
    case 1: goto L_11209f90;
    case 2: goto L_11209f9c;
    case 3: goto L_11209fb0;
    default: x86_unimpl("switch@0x11209e65 out of table"); return;
  }
L_11209e6c:;
  /* 11209e6c mov eax, edi */
  EAX = (EDI);
  /* 11209e6e mov edx, 3 */
  EDX = (0x3u);
  /* 11209e73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11209e76 jb 0x11209e84 */
  if (C.cf) goto L_11209e84;
  /* 11209e78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11209e7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11209e7d jmp dword ptr [eax*4 + 0x11209e90] */
  switch (EAX) {
    case 1: goto L_11209ea0;
    case 2: goto L_11209ecc;
    case 3: goto L_11209ef0;
    default: x86_unimpl("switch@0x11209e7d out of table"); return;
  }
L_11209e84:;
  /* 11209e84 jmp dword ptr [ecx*4 + 0x11209f88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11209f88)))); return;
  /* 11209e8b nop  */
  /* nop */
L_11209e8c:;
  /* 11209e8c jmp dword ptr [ecx*4 + 0x11209f0c] */
  switch (ECX) {
    case 0: goto L_11209f6f;
    case 1: goto L_11209f5c;
    case 2: goto L_11209f54;
    case 3: goto L_11209f4c;
    case 4: goto L_11209f44;
    case 5: goto L_11209f3c;
    case 6: goto L_11209f34;
    case 7: goto L_11209f2c;
    default: x86_unimpl("switch@0x11209e8c out of table"); return;
  }
  /* 11209e93 nop  */
  /* nop */
L_11209ea0:;
  /* 11209ea0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11209ea2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11209ea4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11209ea6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11209ea9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11209eac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11209eaf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11209eb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11209eb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11209eb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11209ebb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209ebe jb 0x11209e8c */
  if (C.cf) goto L_11209e8c;
  /* 11209ec0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11209ec2 jmp dword ptr [edx*4 + 0x11209f78] */
  switch (EDX) {
    case 0: goto L_11209f88;
    case 1: goto L_11209f90;
    case 2: goto L_11209f9c;
    case 3: goto L_11209fb0;
    default: x86_unimpl("switch@0x11209ec2 out of table"); return;
  }
  /* 11209ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11209ecc:;
  /* 11209ecc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11209ece mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11209ed0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11209ed2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11209ed5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11209ed8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11209edb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11209ede add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11209ee1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209ee4 jb 0x11209e8c */
  if (C.cf) goto L_11209e8c;
  /* 11209ee6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11209ee8 jmp dword ptr [edx*4 + 0x11209f78] */
  switch (EDX) {
    case 0: goto L_11209f88;
    case 1: goto L_11209f90;
    case 2: goto L_11209f9c;
    case 3: goto L_11209fb0;
    default: x86_unimpl("switch@0x11209ee8 out of table"); return;
  }
  /* 11209eef nop  */
  /* nop */
L_11209ef0:;
  /* 11209ef0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11209ef2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11209ef4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11209ef6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11209ef7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11209efa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11209efb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209efe jb 0x11209e8c */
  if (C.cf) goto L_11209e8c;
  /* 11209f00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11209f02 jmp dword ptr [edx*4 + 0x11209f78] */
  switch (EDX) {
    case 0: goto L_11209f88;
    case 1: goto L_11209f90;
    case 2: goto L_11209f9c;
    case 3: goto L_11209fb0;
    default: x86_unimpl("switch@0x11209f02 out of table"); return;
  }
  /* 11209f09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11209f2c:;
  /* 11209f2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11209f30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11209f34:;
  /* 11209f34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11209f38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11209f3c:;
  /* 11209f3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11209f40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11209f44:;
  /* 11209f44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11209f48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11209f4c:;
  /* 11209f4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11209f50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11209f54:;
  /* 11209f54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11209f58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11209f5c:;
  /* 11209f5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11209f60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11209f64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11209f6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11209f6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11209f6f:;
  /* 11209f6f jmp dword ptr [edx*4 + 0x11209f78] */
  switch (EDX) {
    case 0: goto L_11209f88;
    case 1: goto L_11209f90;
    case 2: goto L_11209f9c;
    case 3: goto L_11209fb0;
    default: x86_unimpl("switch@0x11209f6f out of table"); return;
  }
  /* 11209f76 mov edi, edi */
  EDI = (EDI);
L_11209f88:;
  /* 11209f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209f8b pop esi */
  ESI = (pop32());
  /* 11209f8c pop edi */
  EDI = (pop32());
  /* 11209f8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11209f8e ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
  /* 11209f8f nop  */
  /* nop */
L_11209f90:;
  /* 11209f90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11209f92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11209f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209f97 pop esi */
  ESI = (pop32());
  /* 11209f98 pop edi */
  EDI = (pop32());
  /* 11209f99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11209f9a ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
  /* 11209f9b nop  */
  /* nop */
L_11209f9c:;
  /* 11209f9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11209f9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11209fa0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11209fa3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11209fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209fa9 pop esi */
  ESI = (pop32());
  /* 11209faa pop edi */
  EDI = (pop32());
  /* 11209fab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11209fac ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
  /* 11209fad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11209fb0:;
  /* 11209fb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11209fb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11209fb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11209fb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11209fba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11209fbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11209fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11209fc3 pop esi */
  ESI = (pop32());
  /* 11209fc4 pop edi */
  EDI = (pop32());
  /* 11209fc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11209fc6 ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
  /* 11209fc7 nop  */
  /* nop */
L_11209fc8:;
  /* 11209fc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11209fcc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11209fd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11209fd6 jne 0x11209ffc */
  if (!C.zf) goto L_11209ffc;
  /* 11209fd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11209fdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11209fde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11209fe1 jb 0x11209ff0 */
  if (C.cf) goto L_11209ff0;
  /* 11209fe3 std  */
  C.df=1;
  /* 11209fe4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11209fe6 cld  */
  C.df=0;
  /* 11209fe7 jmp dword ptr [edx*4 + 0x1120a110] */
  switch (EDX) {
    case 0: goto L_1120a120;
    case 1: goto L_1120a128;
    case 2: goto L_1120a138;
    case 3: goto L_1120a14c;
    default: x86_unimpl("switch@0x11209fe7 out of table"); return;
  }
  /* 11209fee mov edi, edi */
  EDI = (EDI);
L_11209ff0:;
  /* 11209ff0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11209ff2 jmp dword ptr [ecx*4 + 0x1120a0c0] */
  switch (ECX) {
    case 0: goto L_1120a107;
    default: x86_unimpl("switch@0x11209ff2 out of table"); return;
  }
  /* 11209ff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11209ffc:;
  /* 11209ffc mov eax, edi */
  EAX = (EDI);
  /* 11209ffe mov edx, 3 */
  EDX = (0x3u);
  /* 1120a003 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a006 jb 0x1120a014 */
  if (C.cf) goto L_1120a014;
  /* 1120a008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1120a00b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a00d jmp dword ptr [eax*4 + 0x1120a018] */
  switch (EAX) {
    case 1: goto L_1120a028;
    case 2: goto L_1120a048;
    case 3: goto L_1120a070;
    default: x86_unimpl("switch@0x1120a00d out of table"); return;
  }
L_1120a014:;
  /* 1120a014 jmp dword ptr [ecx*4 + 0x1120a110] */
  switch (ECX) {
    case 0: goto L_1120a120;
    case 1: goto L_1120a128;
    case 2: goto L_1120a138;
    case 3: goto L_1120a14c;
    default: x86_unimpl("switch@0x1120a014 out of table"); return;
  }
  /* 1120a01b nop  */
  /* nop */
L_1120a028:;
  /* 1120a028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120a02b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120a02d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120a030 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1120a031 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120a034 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1120a035 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a038 jb 0x11209ff0 */
  if (C.cf) goto L_11209ff0;
  /* 1120a03a std  */
  C.df=1;
  /* 1120a03b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120a03d cld  */
  C.df=0;
  /* 1120a03e jmp dword ptr [edx*4 + 0x1120a110] */
  switch (EDX) {
    case 0: goto L_1120a120;
    case 1: goto L_1120a128;
    case 2: goto L_1120a138;
    case 3: goto L_1120a14c;
    default: x86_unimpl("switch@0x1120a03e out of table"); return;
  }
  /* 1120a045 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120a048:;
  /* 1120a048 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120a04b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120a04d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120a050 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120a053 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120a056 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120a059 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a05c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a05f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a062 jb 0x11209ff0 */
  if (C.cf) goto L_11209ff0;
  /* 1120a064 std  */
  C.df=1;
  /* 1120a065 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120a067 cld  */
  C.df=0;
  /* 1120a068 jmp dword ptr [edx*4 + 0x1120a110] */
  switch (EDX) {
    case 0: goto L_1120a120;
    case 1: goto L_1120a128;
    case 2: goto L_1120a138;
    case 3: goto L_1120a14c;
    default: x86_unimpl("switch@0x1120a068 out of table"); return;
  }
  /* 1120a06f nop  */
  /* nop */
L_1120a070:;
  /* 1120a070 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120a073 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120a075 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120a078 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120a07b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120a07e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120a081 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120a084 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120a087 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a08a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a08d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a090 jb 0x11209ff0 */
  if (C.cf) goto L_11209ff0;
  /* 1120a096 std  */
  C.df=1;
  /* 1120a097 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120a099 cld  */
  C.df=0;
  /* 1120a09a jmp dword ptr [edx*4 + 0x1120a110] */
  switch (EDX) {
    case 0: goto L_1120a120;
    case 1: goto L_1120a128;
    case 2: goto L_1120a138;
    case 3: goto L_1120a14c;
    default: x86_unimpl("switch@0x1120a09a out of table"); return;
  }
  /* 1120a0a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1120a0a4 les esp, ptr [eax - 0x5f33eee0] */
  x86_unimpl("les @ 0x1120a0a4");
  /* 1120a0aa and byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1120a0ac aam 0xa0 */
  x86_unimpl("aam @ 0x1120a0ac");
  /* 1120a0ae and byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1120a0b0 fsub qword ptr [eax - 0x5f1beee0] */
  FPU_ST(0) = FPU_ST(0) - (rf64((uint32_t)(EAX + -0x5f1beee0)));
  /* 1120a0b6 and byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1120a0b8 in al, dx */
  x86_unimpl("in @ 0x1120a0b8");
  /* 1120a0b9 mov al, byte ptr [0xa0f41120] */
  AL = (r8((uint32_t)(0xa0f41120)));
  /* 1120a0be and byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1120a0c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1120a0c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1120a0cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1120a0d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1120a0d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1120a0d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1120a0dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1120a0e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1120a0e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1120a0e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1120a0ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1120a0f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1120a0f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1120a0f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1120a0fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1120a103 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a105 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1120a107:;
  /* 1120a107 jmp dword ptr [edx*4 + 0x1120a110] */
  switch (EDX) {
    case 0: goto L_1120a120;
    case 1: goto L_1120a128;
    case 2: goto L_1120a138;
    case 3: goto L_1120a14c;
    default: x86_unimpl("switch@0x1120a107 out of table"); return;
  }
  /* 1120a10e mov edi, edi */
  EDI = (EDI);
L_1120a120:;
  /* 1120a120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120a123 pop esi */
  ESI = (pop32());
  /* 1120a124 pop edi */
  EDI = (pop32());
  /* 1120a125 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120a126 ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
  /* 1120a127 nop  */
  /* nop */
L_1120a128:;
  /* 1120a128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120a12b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120a12e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120a131 pop esi */
  ESI = (pop32());
  /* 1120a132 pop edi */
  EDI = (pop32());
  /* 1120a133 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120a134 ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
  /* 1120a135 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120a138:;
  /* 1120a138 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120a13b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120a13e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120a141 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120a144 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120a147 pop esi */
  ESI = (pop32());
  /* 1120a148 pop edi */
  EDI = (pop32());
  /* 1120a149 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120a14a ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
  /* 1120a14b nop  */
  /* nop */
L_1120a14c:;
  /* 1120a14c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120a14f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120a152 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120a155 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120a158 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120a15b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120a15e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120a161 pop esi */
  ESI = (pop32());
  /* 1120a162 pop edi */
  EDI = (pop32());
  /* 1120a163 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120a164 ret  */
  ESPCHK(0x11209e30u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1120a170 (104 bytes, 43 insns) */
void f_1120a170(void) {
  FTRACE(0x1120a170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120a170 push ebx */
  push32((uint32_t)(EBX));
  /* 1120a171 push esi */
  push32((uint32_t)(ESI));
  /* 1120a172 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1120a176 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120a178 jne 0x1120a192 */
  if (!C.zf) goto L_1120a192;
  /* 1120a17a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1120a17e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1120a182 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120a184 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1120a186 mov ebx, eax */
  EBX = (EAX);
  /* 1120a188 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1120a18c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1120a18e mov edx, ebx */
  EDX = (EBX);
  /* 1120a190 jmp 0x1120a1d3 */
  goto L_1120a1d3;
L_1120a192:;
  /* 1120a192 mov ecx, eax */
  ECX = (EAX);
  /* 1120a194 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1120a198 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1120a19c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1120a1a0:;
  /* 1120a1a0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1120a1a2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1120a1a4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1120a1a6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1120a1a8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120a1aa jne 0x1120a1a0 */
  if (!C.zf) goto L_1120a1a0;
  /* 1120a1ac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1120a1ae mov esi, eax */
  ESI = (EAX);
  /* 1120a1b0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1120a1b4 mov ecx, eax */
  ECX = (EAX);
  /* 1120a1b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1120a1ba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1120a1bc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a1be jb 0x1120a1ce */
  if (C.cf) goto L_1120a1ce;
  /* 1120a1c0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a1c4 ja 0x1120a1ce */
  if ((!C.cf&&!C.zf)) goto L_1120a1ce;
  /* 1120a1c6 jb 0x1120a1cf */
  if (C.cf) goto L_1120a1cf;
  /* 1120a1c8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a1cc jbe 0x1120a1cf */
  if ((C.cf||C.zf)) goto L_1120a1cf;
L_1120a1ce:;
  /* 1120a1ce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1120a1cf:;
  /* 1120a1cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120a1d1 mov eax, esi */
  EAX = (ESI);
L_1120a1d3:;
  /* 1120a1d3 pop esi */
  ESI = (pop32());
  /* 1120a1d4 pop ebx */
  EBX = (pop32());
  /* 1120a1d5 ret 0x10 */
  ESPCHK(0x1120a170u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1120a1e0 (117 bytes, 44 insns) */
void f_1120a1e0(void) {
  FTRACE(0x1120a1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120a1e0 push ebx */
  push32((uint32_t)(EBX));
  /* 1120a1e1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1120a1e5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120a1e7 jne 0x1120a201 */
  if (!C.zf) goto L_1120a201;
  /* 1120a1e9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1120a1ed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1120a1f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120a1f3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1120a1f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1120a1f9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1120a1fb mov eax, edx */
  EAX = (EDX);
  /* 1120a1fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120a1ff jmp 0x1120a251 */
  goto L_1120a251;
L_1120a201:;
  /* 1120a201 mov ecx, eax */
  ECX = (EAX);
  /* 1120a203 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1120a207 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1120a20b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1120a20f:;
  /* 1120a20f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1120a211 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1120a213 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1120a215 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1120a217 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120a219 jne 0x1120a20f */
  if (!C.zf) goto L_1120a20f;
  /* 1120a21b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1120a21d mov ecx, eax */
  ECX = (EAX);
  /* 1120a21f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1120a223 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1120a224 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1120a228 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a22a jb 0x1120a23a */
  if (C.cf) goto L_1120a23a;
  /* 1120a22c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a230 ja 0x1120a23a */
  if ((!C.cf&&!C.zf)) goto L_1120a23a;
  /* 1120a232 jb 0x1120a242 */
  if (C.cf) goto L_1120a242;
  /* 1120a234 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a238 jbe 0x1120a242 */
  if ((C.cf||C.zf)) goto L_1120a242;
L_1120a23a:;
  /* 1120a23a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a23e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1120a242:;
  /* 1120a242 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a246 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a24a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120a24c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120a24e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1120a251:;
  /* 1120a251 pop ebx */
  EBX = (pop32());
  /* 1120a252 ret 0x10 */
  ESPCHK(0x1120a1e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a260 @ 0x1120a260 (628 bytes, 214 insns) */
void f_1120a260(void) {
  FTRACE(0x1120a260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120a260 push ebp */
  push32((uint32_t)(EBP));
  /* 1120a261 mov ebp, esp */
  EBP = (ESP);
  /* 1120a263 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a266 push ebx */
  push32((uint32_t)(EBX));
  /* 1120a267 push esi */
  push32((uint32_t)(ESI));
  /* 1120a268 push edi */
  push32((uint32_t)(EDI));
L_1120a269:;
  /* 1120a269 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a26d jne 0x1120a28d */
  if (!C.zf) goto L_1120a28d;
  /* 1120a26f push 0x1122af14 */
  push32((uint32_t)(0x1122af14u));
  /* 1120a274 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120a276 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1120a278 push 0x1122af08 */
  push32((uint32_t)(0x1122af08u));
  /* 1120a27d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120a27f call 0x11202610 */
  push32(0x1120a284u); f_11202610();
  /* 1120a284 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a287 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a28a jne 0x1120a28d */
  if (!C.zf) goto L_1120a28d;
  /* 1120a28c int3  */
  x86_unimpl("int3 @ 0x1120a28c");
L_1120a28d:;
  /* 1120a28d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120a28f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a291 jne 0x1120a269 */
  if (!C.zf) goto L_1120a269;
  /* 1120a293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a296 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120a299 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a29c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1120a29f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1120a2a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120a2a8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1120a2ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120a2b0 je 0x1120a2bf */
  if (C.zf) goto L_1120a2bf;
  /* 1120a2b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120a2b8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1120a2bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120a2bd je 0x1120a2d5 */
  if (C.zf) goto L_1120a2d5;
L_1120a2bf:;
  /* 1120a2bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1120a2c5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1120a2c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2ca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1120a2cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120a2d0 jmp 0x1120a4cd */
  goto L_1120a4cd;
L_1120a2d5:;
  /* 1120a2d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2d8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1120a2db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1120a2de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a2e0 je 0x1120a32c */
  if (C.zf) goto L_1120a32c;
  /* 1120a2e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2e5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1120a2ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2ef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1120a2f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1120a2f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a2f7 je 0x1120a315 */
  if (C.zf) goto L_1120a315;
  /* 1120a2f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a2ff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1120a302 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1120a304 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a307 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120a30a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1120a30d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a310 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1120a313 jmp 0x1120a32c */
  goto L_1120a32c;
L_1120a315:;
  /* 1120a315 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a318 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120a31b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1120a31e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a321 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1120a324 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120a327 jmp 0x1120a4cd */
  goto L_1120a4cd;
L_1120a32c:;
  /* 1120a32c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a32f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120a332 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1120a335 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a338 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1120a33b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a33e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120a341 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1120a344 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a347 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1120a34a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a34d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1120a354 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120a35b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a35e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1120a361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a364 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120a367 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1120a36d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120a36f jne 0x1120a39f */
  if (!C.zf) goto L_1120a39f;
  /* 1120a371 cmp dword ptr [ebp - 8], 0x1122e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1122e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a378 je 0x1120a383 */
  if (C.zf) goto L_1120a383;
  /* 1120a37a cmp dword ptr [ebp - 8], 0x1122e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1122e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a381 jne 0x1120a393 */
  if (!C.zf) goto L_1120a393;
L_1120a383:;
  /* 1120a383 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120a386 push edx */
  push32((uint32_t)(EDX));
  /* 1120a387 call 0x1120c1d0 */
  push32(0x1120a38cu); f_1120c1d0();
  /* 1120a38c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a38f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a391 jne 0x1120a39f */
  if (!C.zf) goto L_1120a39f;
L_1120a393:;
  /* 1120a393 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a396 push eax */
  push32((uint32_t)(EAX));
  /* 1120a397 call 0x1120c100 */
  push32(0x1120a39cu); f_1120c100();
  /* 1120a39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120a39f:;
  /* 1120a39f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a3a2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120a3a5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1120a3ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120a3ad je 0x1120a48b */
  if (C.zf) goto L_1120a48b;
L_1120a3b3:;
  /* 1120a3b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a3b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a3b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1120a3bb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a3be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120a3c0 jge 0x1120a3e3 */
  if ((C.sf==C.of)) goto L_1120a3e3;
  /* 1120a3c2 push 0x1122aec8 */
  push32((uint32_t)(0x1122aec8u));
  /* 1120a3c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120a3c9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1120a3ce push 0x1122af08 */
  push32((uint32_t)(0x1122af08u));
  /* 1120a3d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120a3d5 call 0x11202610 */
  push32(0x1120a3dau); f_11202610();
  /* 1120a3da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a3dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a3e0 jne 0x1120a3e3 */
  if (!C.zf) goto L_1120a3e3;
  /* 1120a3e2 int3  */
  x86_unimpl("int3 @ 0x1120a3e2");
L_1120a3e3:;
  /* 1120a3e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120a3e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a3e7 jne 0x1120a3b3 */
  if (!C.zf) goto L_1120a3b3;
  /* 1120a3e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a3ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a3ef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1120a3f1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a3f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120a3f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a3fa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1120a3fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a400 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1120a405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a408 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1120a40b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a40e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a411 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1120a414 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a418 jle 0x1120a436 */
  if ((C.zf||C.sf!=C.of)) goto L_1120a436;
  /* 1120a41a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a41d push ecx */
  push32((uint32_t)(ECX));
  /* 1120a41e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a421 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1120a424 push eax */
  push32((uint32_t)(EAX));
  /* 1120a425 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120a428 push ecx */
  push32((uint32_t)(ECX));
  /* 1120a429 call 0x1120bdf0 */
  push32(0x1120a42eu); f_1120bdf0();
  /* 1120a42e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a431 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1120a434 jmp 0x1120a47e */
  goto L_1120a47e;
L_1120a436:;
  /* 1120a436 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a43a je 0x1120a459 */
  if (C.zf) goto L_1120a459;
  /* 1120a43c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120a43f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1120a442 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120a445 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1120a448 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120a44b mov ecx, dword ptr [edx*4 + 0x11230e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 1120a452 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a454 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1120a457 jmp 0x1120a460 */
  goto L_1120a460;
L_1120a459:;
  /* 1120a459 mov dword ptr [ebp - 0x14], 0x1122da60 */
  w32((uint32_t)(EBP + -0x14), (0x1122da60u));
L_1120a460:;
  /* 1120a460 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120a463 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1120a467 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1120a46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a46c je 0x1120a47e */
  if (C.zf) goto L_1120a47e;
  /* 1120a46e push 2 */
  push32((uint32_t)(0x2u));
  /* 1120a470 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120a472 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120a475 push ecx */
  push32((uint32_t)(ECX));
  /* 1120a476 call 0x1120bca0 */
  push32(0x1120a47bu); f_1120bca0();
  /* 1120a47b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120a47e:;
  /* 1120a47e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a481 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1120a484 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1120a487 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1120a489 jmp 0x1120a4a9 */
  goto L_1120a4a9;
L_1120a48b:;
  /* 1120a48b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1120a492 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a495 push edx */
  push32((uint32_t)(EDX));
  /* 1120a496 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1120a499 push eax */
  push32((uint32_t)(EAX));
  /* 1120a49a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120a49d push ecx */
  push32((uint32_t)(ECX));
  /* 1120a49e call 0x1120bdf0 */
  push32(0x1120a4a3u); f_1120bdf0();
  /* 1120a4a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a4a6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1120a4a9:;
  /* 1120a4a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120a4ac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a4af je 0x1120a4c5 */
  if (C.zf) goto L_1120a4c5;
  /* 1120a4b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a4b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120a4b7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1120a4ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a4bd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1120a4c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120a4c3 jmp 0x1120a4cd */
  goto L_1120a4cd;
L_1120a4c5:;
  /* 1120a4c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120a4c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1120a4cd:;
  /* 1120a4cd pop edi */
  EDI = (pop32());
  /* 1120a4ce pop esi */
  ESI = (pop32());
  /* 1120a4cf pop ebx */
  EBX = (pop32());
  /* 1120a4d0 mov esp, ebp */
  ESP = (EBP);
  /* 1120a4d2 pop ebp */
  EBP = (pop32());
  /* 1120a4d3 ret  */
  ESPCHK(0x1120a260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4e0 @ 0x1120a4e0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1120a4e0(void) {
  FTRACE(0x1120a4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120a4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120a4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1120a4e3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a4e9 push ebx */
  push32((uint32_t)(EBX));
  /* 1120a4ea push esi */
  push32((uint32_t)(ESI));
  /* 1120a4eb push edi */
  push32((uint32_t)(EDI));
  /* 1120a4ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1120a4f3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1120a4fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1120a504:;
  /* 1120a504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a507 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1120a509 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1120a50c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a510 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a513 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a516 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1120a519 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120a51b je 0x1120b0f7 */
  if (C.zf) goto L_1120b0f7;
  /* 1120a521 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a528 jl 0x1120b0f7 */
  if ((C.sf!=C.of)) goto L_1120b0f7;
  /* 1120a52e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a532 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a535 jl 0x1120a556 */
  if ((C.sf!=C.of)) goto L_1120a556;
  /* 1120a537 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a53b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a53e jg 0x1120a556 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120a556;
  /* 1120a540 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a544 movsx ecx, byte ptr [eax + 0x1122af00] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1122af00))));
  /* 1120a54b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1120a54e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1120a554 jmp 0x1120a560 */
  goto L_1120a560;
L_1120a556:;
  /* 1120a556 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1120a560:;
  /* 1120a560 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1120a566 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1120a569 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120a56c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120a56f movsx edx, byte ptr [ecx + eax*8 + 0x1122af20] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1122af20))));
  /* 1120a577 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1120a57a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1120a57d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120a580 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1120a586 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a58d ja 0x1120b0f2 */
  if ((!C.cf&&!C.zf)) goto L_1120b0f2;
  /* 1120a593 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1120a599 jmp dword ptr [ecx*4 + 0x1120b104] */
  switch (ECX) {
    case 0: goto L_1120a5a0;
    case 1: goto L_1120a63a;
    case 2: goto L_1120a67c;
    case 3: goto L_1120a6eb;
    case 4: goto L_1120a743;
    case 5: goto L_1120a752;
    case 6: goto L_1120a79e;
    case 7: goto L_1120a831;
    case 8: goto L_1120a6c8;
    case 9: goto L_1120a6d3;
    case 10: goto L_1120a6be;
    case 11: goto L_1120a6b3;
    case 12: goto L_1120a6de;
    case 13: goto L_1120a6e6;
    default: x86_unimpl("switch@0x1120a599 out of table"); return;
  }
L_1120a5a0:;
  /* 1120a5a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1120a5a7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120a5aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1120a5b0 mov eax, dword ptr [0x1122dc98] */
  EAX = (r32((uint32_t)(0x1122dc98)));
  /* 1120a5b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120a5b7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1120a5bb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1120a5c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120a5c3 je 0x1120a61d */
  if (C.zf) goto L_1120a61d;
  /* 1120a5c5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1120a5cb push edx */
  push32((uint32_t)(EDX));
  /* 1120a5cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120a5cf push eax */
  push32((uint32_t)(EAX));
  /* 1120a5d0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a5d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120a5d5 call 0x1120b210 */
  push32(0x1120a5dau); f_1120b210();
  /* 1120a5da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a5dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a5e0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120a5e2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1120a5e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a5e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a5eb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1120a5ee:;
  /* 1120a5ee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120a5f4 jne 0x1120a617 */
  if (!C.zf) goto L_1120a617;
  /* 1120a5f6 push 0x1122afa0 */
  push32((uint32_t)(0x1122afa0u));
  /* 1120a5fb push 0 */
  push32((uint32_t)(0x0u));
  /* 1120a5fd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1120a602 push 0x1122af94 */
  push32((uint32_t)(0x1122af94u));
  /* 1120a607 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120a609 call 0x11202610 */
  push32(0x1120a60eu); f_11202610();
  /* 1120a60e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a611 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a614 jne 0x1120a617 */
  if (!C.zf) goto L_1120a617;
  /* 1120a616 int3  */
  x86_unimpl("int3 @ 0x1120a616");
L_1120a617:;
  /* 1120a617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120a619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a61b jne 0x1120a5ee */
  if (!C.zf) goto L_1120a5ee;
L_1120a61d:;
  /* 1120a61d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1120a623 push ecx */
  push32((uint32_t)(ECX));
  /* 1120a624 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120a627 push edx */
  push32((uint32_t)(EDX));
  /* 1120a628 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a62c push eax */
  push32((uint32_t)(EAX));
  /* 1120a62d call 0x1120b210 */
  push32(0x1120a632u); f_1120b210();
  /* 1120a632 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a635 jmp 0x1120b0f2 */
  goto L_1120b0f2;
L_1120a63a:;
  /* 1120a63a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120a641 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120a644 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1120a64a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1120a650 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1120a656 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1120a65c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1120a65f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120a666 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1120a670 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1120a677 jmp 0x1120b0f2 */
  goto L_1120b0f2;
L_1120a67c:;
  /* 1120a67c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a680 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1120a686 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1120a68c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a68f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1120a695 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a69c ja 0x1120a6e6 */
  if ((!C.cf&&!C.zf)) goto L_1120a6e6;
  /* 1120a69e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1120a6a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120a6a6 mov al, byte ptr [ecx + 0x1120b13c] */
  AL = (r8((uint32_t)(ECX + 0x1120b13c)));
  /* 1120a6ac jmp dword ptr [eax*4 + 0x1120b124] */
  switch (EAX) {
    case 0: goto L_1120a6c8;
    case 1: goto L_1120a6d3;
    case 2: goto L_1120a6be;
    case 3: goto L_1120a6b3;
    case 4: goto L_1120a6de;
    case 5: goto L_1120a6e6;
    default: x86_unimpl("switch@0x1120a6ac out of table"); return;
  }
L_1120a6b3:;
  /* 1120a6b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a6b6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1120a6b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120a6bc jmp 0x1120a6e6 */
  goto L_1120a6e6;
L_1120a6be:;
  /* 1120a6be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a6c1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1120a6c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120a6c6 jmp 0x1120a6e6 */
  goto L_1120a6e6;
L_1120a6c8:;
  /* 1120a6c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a6cb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1120a6ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120a6d1 jmp 0x1120a6e6 */
  goto L_1120a6e6;
L_1120a6d3:;
  /* 1120a6d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a6d6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1120a6d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120a6dc jmp 0x1120a6e6 */
  goto L_1120a6e6;
L_1120a6de:;
  /* 1120a6de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a6e1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1120a6e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120a6e6:;
  /* 1120a6e6 jmp 0x1120b0f2 */
  goto L_1120b0f2;
L_1120a6eb:;
  /* 1120a6eb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a6ef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a6f2 jne 0x1120a727 */
  if (!C.zf) goto L_1120a727;
  /* 1120a6f4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1120a6f7 push edx */
  push32((uint32_t)(EDX));
  /* 1120a6f8 call 0x1120b320 */
  push32(0x1120a6fdu); f_1120b320();
  /* 1120a6fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a700 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1120a706 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a70d jge 0x1120a725 */
  if ((C.sf==C.of)) goto L_1120a725;
  /* 1120a70f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a712 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1120a714 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120a717 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1120a71d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120a71f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1120a725:;
  /* 1120a725 jmp 0x1120a73e */
  goto L_1120a73e;
L_1120a727:;
  /* 1120a727 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1120a72d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120a730 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a734 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1120a738 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1120a73e:;
  /* 1120a73e jmp 0x1120b0f2 */
  goto L_1120b0f2;
L_1120a743:;
  /* 1120a743 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1120a74d jmp 0x1120b0f2 */
  goto L_1120b0f2;
L_1120a752:;
  /* 1120a752 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a756 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a759 jne 0x1120a782 */
  if (!C.zf) goto L_1120a782;
  /* 1120a75b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1120a75e push eax */
  push32((uint32_t)(EAX));
  /* 1120a75f call 0x1120b320 */
  push32(0x1120a764u); f_1120b320();
  /* 1120a764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a767 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1120a76d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a774 jge 0x1120a780 */
  if ((C.sf==C.of)) goto L_1120a780;
  /* 1120a776 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1120a780:;
  /* 1120a780 jmp 0x1120a799 */
  goto L_1120a799;
L_1120a782:;
  /* 1120a782 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1120a788 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120a78b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a78f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1120a793 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1120a799:;
  /* 1120a799 jmp 0x1120b0f2 */
  goto L_1120b0f2;
L_1120a79e:;
  /* 1120a79e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a7a2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1120a7a8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1120a7ae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a7b1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1120a7b7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a7be ja 0x1120a82c */
  if ((!C.cf&&!C.zf)) goto L_1120a82c;
  /* 1120a7c0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1120a7c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120a7c8 mov al, byte ptr [ecx + 0x1120b161] */
  AL = (r8((uint32_t)(ECX + 0x1120b161)));
  /* 1120a7ce jmp dword ptr [eax*4 + 0x1120b14d] */
  switch (EAX) {
    case 0: goto L_1120a7e0;
    case 1: goto L_1120a819;
    case 2: goto L_1120a7d5;
    case 3: goto L_1120a823;
    case 4: goto L_1120a82c;
    default: x86_unimpl("switch@0x1120a7ce out of table"); return;
  }
L_1120a7d5:;
  /* 1120a7d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a7d8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1120a7db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120a7de jmp 0x1120a82c */
  goto L_1120a82c;
L_1120a7e0:;
  /* 1120a7e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a7e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120a7e6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a7e9 jne 0x1120a80b */
  if (!C.zf) goto L_1120a80b;
  /* 1120a7eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a7ee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1120a7f2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a7f5 jne 0x1120a80b */
  if (!C.zf) goto L_1120a80b;
  /* 1120a7f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120a7fa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a7fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1120a800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a803 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1120a806 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120a809 jmp 0x1120a817 */
  goto L_1120a817;
L_1120a80b:;
  /* 1120a80b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1120a812 jmp 0x1120a5a0 */
  goto L_1120a5a0;
L_1120a817:;
  /* 1120a817 jmp 0x1120a82c */
  goto L_1120a82c;
L_1120a819:;
  /* 1120a819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a81c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1120a81e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120a821 jmp 0x1120a82c */
  goto L_1120a82c;
L_1120a823:;
  /* 1120a823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a826 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1120a829 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1120a82c:;
  /* 1120a82c jmp 0x1120b0f2 */
  goto L_1120b0f2;
L_1120a831:;
  /* 1120a831 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120a835 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1120a83b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1120a841 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120a844 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1120a84a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a851 ja 0x1120af17 */
  if ((!C.cf&&!C.zf)) goto L_1120af17;
  /* 1120a857 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1120a85d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120a85f mov cl, byte ptr [edx + 0x1120b1cc] */
  CL = (r8((uint32_t)(EDX + 0x1120b1cc)));
  /* 1120a865 jmp dword ptr [ecx*4 + 0x1120b190] */
  switch (ECX) {
    case 0: goto L_1120a86c;
    case 1: goto L_1120ab00;
    case 2: goto L_1120a990;
    case 3: goto L_1120ac39;
    case 4: goto L_1120a8fb;
    case 5: goto L_1120a881;
    case 6: goto L_1120ac0b;
    case 7: goto L_1120ab10;
    case 8: goto L_1120aab5;
    case 9: goto L_1120ac85;
    case 10: goto L_1120ac2f;
    case 11: goto L_1120a9a6;
    case 12: goto L_1120ac23;
    case 13: goto L_1120ac45;
    case 14: goto L_1120af17;
    default: x86_unimpl("switch@0x1120a865 out of table"); return;
  }
L_1120a86c:;
  /* 1120a86c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a86f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1120a874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a876 jne 0x1120a881 */
  if (!C.zf) goto L_1120a881;
  /* 1120a878 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a87b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1120a87e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1120a881:;
  /* 1120a881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a884 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1120a88a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120a88c je 0x1120a8c7 */
  if (C.zf) goto L_1120a8c7;
  /* 1120a88e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1120a891 push eax */
  push32((uint32_t)(EAX));
  /* 1120a892 call 0x1120b360 */
  push32(0x1120a897u); f_1120b360();
  /* 1120a897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a89a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1120a89e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1120a8a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1120a8a3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1120a8a9 push edx */
  push32((uint32_t)(EDX));
  /* 1120a8aa call 0x1120c440 */
  push32(0x1120a8afu); f_1120c440();
  /* 1120a8af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a8b2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1120a8b5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a8b9 jge 0x1120a8c5 */
  if ((C.sf==C.of)) goto L_1120a8c5;
  /* 1120a8bb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1120a8c5:;
  /* 1120a8c5 jmp 0x1120a8ed */
  goto L_1120a8ed;
L_1120a8c7:;
  /* 1120a8c7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1120a8ca push eax */
  push32((uint32_t)(EAX));
  /* 1120a8cb call 0x1120b320 */
  push32(0x1120a8d0u); f_1120b320();
  /* 1120a8d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a8d3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1120a8da mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1120a8e0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1120a8e6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1120a8ed:;
  /* 1120a8ed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1120a8f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1120a8f6 jmp 0x1120af17 */
  goto L_1120af17;
L_1120a8fb:;
  /* 1120a8fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1120a8fe push eax */
  push32((uint32_t)(EAX));
  /* 1120a8ff call 0x1120b320 */
  push32(0x1120a904u); f_1120b320();
  /* 1120a904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a907 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1120a90d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a914 je 0x1120a922 */
  if (C.zf) goto L_1120a922;
  /* 1120a916 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1120a91c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a920 jne 0x1120a93c */
  if (!C.zf) goto L_1120a93c;
L_1120a922:;
  /* 1120a922 mov edx, dword ptr [0x1122dfb0] */
  EDX = (r32((uint32_t)(0x1122dfb0)));
  /* 1120a928 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1120a92b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120a92e push eax */
  push32((uint32_t)(EAX));
  /* 1120a92f call 0x11206380 */
  push32(0x1120a934u); f_11206380();
  /* 1120a934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a937 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1120a93a jmp 0x1120a98b */
  goto L_1120a98b;
L_1120a93c:;
  /* 1120a93c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a93f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1120a945 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120a947 je 0x1120a96c */
  if (C.zf) goto L_1120a96c;
  /* 1120a949 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1120a94f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1120a952 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1120a955 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1120a95b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1120a95e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1120a960 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1120a963 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1120a96a jmp 0x1120a98b */
  goto L_1120a98b;
L_1120a96c:;
  /* 1120a96c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1120a973 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1120a979 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1120a97c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1120a97f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1120a985 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1120a988 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1120a98b:;
  /* 1120a98b jmp 0x1120af17 */
  goto L_1120af17;
L_1120a990:;
  /* 1120a990 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a993 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1120a999 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120a99b jne 0x1120a9a6 */
  if (!C.zf) goto L_1120a9a6;
  /* 1120a99d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a9a0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1120a9a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1120a9a6:;
  /* 1120a9a6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a9ad jne 0x1120a9bb */
  if (!C.zf) goto L_1120a9bb;
  /* 1120a9af mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1120a9b9 jmp 0x1120a9c7 */
  goto L_1120a9c7;
L_1120a9bb:;
  /* 1120a9bb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1120a9c1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1120a9c7:;
  /* 1120a9c7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1120a9cd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1120a9d3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1120a9d6 push edx */
  push32((uint32_t)(EDX));
  /* 1120a9d7 call 0x1120b320 */
  push32(0x1120a9dcu); f_1120b320();
  /* 1120a9dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120a9df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1120a9e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120a9e5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1120a9ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120a9ec je 0x1120aa56 */
  if (C.zf) goto L_1120aa56;
  /* 1120a9ee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120a9f2 jne 0x1120a9fd */
  if (!C.zf) goto L_1120a9fd;
  /* 1120a9f4 mov ecx, dword ptr [0x1122dfb4] */
  ECX = (r32((uint32_t)(0x1122dfb4)));
  /* 1120a9fa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1120a9fd:;
  /* 1120a9fd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1120aa04 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120aa07 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1120aa0d:;
  /* 1120aa0d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1120aa13 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1120aa19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120aa1c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1120aa22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120aa24 je 0x1120aa46 */
  if (C.zf) goto L_1120aa46;
  /* 1120aa26 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1120aa2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120aa2e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1120aa31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120aa33 je 0x1120aa46 */
  if (C.zf) goto L_1120aa46;
  /* 1120aa35 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1120aa3b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120aa3e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1120aa44 jmp 0x1120aa0d */
  goto L_1120aa0d;
L_1120aa46:;
  /* 1120aa46 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1120aa4c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120aa4f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1120aa51 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1120aa54 jmp 0x1120aab0 */
  goto L_1120aab0;
L_1120aa56:;
  /* 1120aa56 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120aa5a jne 0x1120aa64 */
  if (!C.zf) goto L_1120aa64;
  /* 1120aa5c mov eax, dword ptr [0x1122dfb0] */
  EAX = (r32((uint32_t)(0x1122dfb0)));
  /* 1120aa61 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1120aa64:;
  /* 1120aa64 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120aa67 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1120aa6d:;
  /* 1120aa6d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1120aa73 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1120aa79 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120aa7c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1120aa82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120aa84 je 0x1120aaa4 */
  if (C.zf) goto L_1120aaa4;
  /* 1120aa86 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1120aa8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120aa8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120aa91 je 0x1120aaa4 */
  if (C.zf) goto L_1120aaa4;
  /* 1120aa93 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1120aa99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120aa9c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1120aaa2 jmp 0x1120aa6d */
  goto L_1120aa6d;
L_1120aaa4:;
  /* 1120aaa4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1120aaaa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120aaad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1120aab0:;
  /* 1120aab0 jmp 0x1120af17 */
  goto L_1120af17;
L_1120aab5:;
  /* 1120aab5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1120aab8 push edx */
  push32((uint32_t)(EDX));
  /* 1120aab9 call 0x1120b320 */
  push32(0x1120aabeu); f_1120b320();
  /* 1120aabe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120aac1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1120aac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120aaca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1120aacd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120aacf je 0x1120aae3 */
  if (C.zf) goto L_1120aae3;
  /* 1120aad1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1120aad7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1120aade mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1120aae1 jmp 0x1120aaf1 */
  goto L_1120aaf1;
L_1120aae3:;
  /* 1120aae3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1120aae9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1120aaef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1120aaf1:;
  /* 1120aaf1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1120aafb jmp 0x1120af17 */
  goto L_1120af17;
L_1120ab00:;
  /* 1120ab00 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1120ab07 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1120ab0a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1120ab0d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1120ab10:;
  /* 1120ab10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ab13 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1120ab15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120ab18 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1120ab1e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1120ab21 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ab28 jge 0x1120ab36 */
  if ((C.sf==C.of)) goto L_1120ab36;
  /* 1120ab2a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1120ab34 jmp 0x1120ab52 */
  goto L_1120ab52;
L_1120ab36:;
  /* 1120ab36 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ab3d jne 0x1120ab52 */
  if (!C.zf) goto L_1120ab52;
  /* 1120ab3f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120ab43 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ab46 jne 0x1120ab52 */
  if (!C.zf) goto L_1120ab52;
  /* 1120ab48 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1120ab52:;
  /* 1120ab52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120ab55 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ab58 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1120ab5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120ab5e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ab61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120ab63 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120ab66 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1120ab6c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1120ab72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ab75 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ab76 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1120ab7c push edx */
  push32((uint32_t)(EDX));
  /* 1120ab7d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120ab81 push eax */
  push32((uint32_t)(EAX));
  /* 1120ab82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120ab85 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ab86 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1120ab8c push edx */
  push32((uint32_t)(EDX));
  /* 1120ab8d call dword ptr [0x1122e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122e3a0))), 0x1120ab93u);
  /* 1120ab93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ab96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ab99 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1120ab9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120aba0 je 0x1120abb8 */
  if (C.zf) goto L_1120abb8;
  /* 1120aba2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120aba9 jne 0x1120abb8 */
  if (!C.zf) goto L_1120abb8;
  /* 1120abab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120abae push ecx */
  push32((uint32_t)(ECX));
  /* 1120abaf call dword ptr [0x1122e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122e3ac))), 0x1120abb5u);
  /* 1120abb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120abb8:;
  /* 1120abb8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1120abbc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120abbf jne 0x1120abda */
  if (!C.zf) goto L_1120abda;
  /* 1120abc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120abc4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1120abc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120abcb jne 0x1120abda */
  if (!C.zf) goto L_1120abda;
  /* 1120abcd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120abd0 push ecx */
  push32((uint32_t)(ECX));
  /* 1120abd1 call dword ptr [0x1122e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122e3a4))), 0x1120abd7u);
  /* 1120abd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120abda:;
  /* 1120abda mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120abdd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120abe0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120abe3 jne 0x1120abf7 */
  if (!C.zf) goto L_1120abf7;
  /* 1120abe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120abe8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1120abeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120abee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120abf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120abf4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1120abf7:;
  /* 1120abf7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120abfa push eax */
  push32((uint32_t)(EAX));
  /* 1120abfb call 0x11206380 */
  push32(0x1120ac00u); f_11206380();
  /* 1120ac00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ac03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1120ac06 jmp 0x1120af17 */
  goto L_1120af17;
L_1120ac0b:;
  /* 1120ac0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ac0e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1120ac11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120ac14 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1120ac1e jmp 0x1120aca5 */
  goto L_1120aca5;
L_1120ac23:;
  /* 1120ac23 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1120ac2d jmp 0x1120aca5 */
  goto L_1120aca5;
L_1120ac2f:;
  /* 1120ac2f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1120ac39:;
  /* 1120ac39 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1120ac43 jmp 0x1120ac4f */
  goto L_1120ac4f;
L_1120ac45:;
  /* 1120ac45 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1120ac4f:;
  /* 1120ac4f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1120ac59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ac5c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1120ac62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120ac64 je 0x1120ac83 */
  if (C.zf) goto L_1120ac83;
  /* 1120ac66 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1120ac6d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1120ac73 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ac76 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1120ac7c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1120ac83:;
  /* 1120ac83 jmp 0x1120aca5 */
  goto L_1120aca5;
L_1120ac85:;
  /* 1120ac85 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1120ac8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ac92 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1120ac98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120ac9a je 0x1120aca5 */
  if (C.zf) goto L_1120aca5;
  /* 1120ac9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ac9f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1120aca2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1120aca5:;
  /* 1120aca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120aca8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1120acad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120acaf je 0x1120acce */
  if (C.zf) goto L_1120acce;
  /* 1120acb1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1120acb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120acb5 call 0x1120b340 */
  push32(0x1120acbau); f_1120b340();
  /* 1120acba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120acbd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1120acc3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1120acc9 jmp 0x1120ad5f */
  goto L_1120ad5f;
L_1120acce:;
  /* 1120acce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120acd1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1120acd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120acd6 je 0x1120ad20 */
  if (C.zf) goto L_1120ad20;
  /* 1120acd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120acdb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1120acde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ace0 je 0x1120ad00 */
  if (C.zf) goto L_1120ad00;
  /* 1120ace2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1120ace5 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ace6 call 0x1120b320 */
  push32(0x1120acebu); f_1120b320();
  /* 1120aceb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120acee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1120acf1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120acf2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1120acf8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1120acfe jmp 0x1120ad1e */
  goto L_1120ad1e;
L_1120ad00:;
  /* 1120ad00 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1120ad03 push edx */
  push32((uint32_t)(EDX));
  /* 1120ad04 call 0x1120b320 */
  push32(0x1120ad09u); f_1120b320();
  /* 1120ad09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ad0c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120ad11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120ad12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1120ad18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1120ad1e:;
  /* 1120ad1e jmp 0x1120ad5f */
  goto L_1120ad5f;
L_1120ad20:;
  /* 1120ad20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ad23 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1120ad26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ad28 je 0x1120ad45 */
  if (C.zf) goto L_1120ad45;
  /* 1120ad2a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1120ad2d push ecx */
  push32((uint32_t)(ECX));
  /* 1120ad2e call 0x1120b320 */
  push32(0x1120ad33u); f_1120b320();
  /* 1120ad33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ad36 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120ad37 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1120ad3d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1120ad43 jmp 0x1120ad5f */
  goto L_1120ad5f;
L_1120ad45:;
  /* 1120ad45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1120ad48 push edx */
  push32((uint32_t)(EDX));
  /* 1120ad49 call 0x1120b320 */
  push32(0x1120ad4eu); f_1120b320();
  /* 1120ad4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ad51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ad53 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1120ad59 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1120ad5f:;
  /* 1120ad5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ad62 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1120ad65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120ad67 je 0x1120ada7 */
  if (C.zf) goto L_1120ada7;
  /* 1120ad69 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ad70 jg 0x1120ada7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120ada7;
  /* 1120ad72 jl 0x1120ad7d */
  if ((C.sf!=C.of)) goto L_1120ad7d;
  /* 1120ad74 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ad7b jae 0x1120ada7 */
  if (!C.cf) goto L_1120ada7;
L_1120ad7d:;
  /* 1120ad7d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1120ad83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120ad85 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1120ad8b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ad8e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120ad90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1120ad96 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1120ad9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ad9f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1120ada2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120ada5 jmp 0x1120adbf */
  goto L_1120adbf;
L_1120ada7:;
  /* 1120ada7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1120adad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1120adb3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1120adb9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1120adbf:;
  /* 1120adbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120adc2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1120adc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120adca jne 0x1120ade7 */
  if (!C.zf) goto L_1120ade7;
  /* 1120adcc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1120add2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1120add8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1120addb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1120ade1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1120ade7:;
  /* 1120ade7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120adee jge 0x1120adfc */
  if ((C.sf==C.of)) goto L_1120adfc;
  /* 1120adf0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1120adfa jmp 0x1120ae05 */
  goto L_1120ae05;
L_1120adfc:;
  /* 1120adfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120adff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1120ae02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1120ae05:;
  /* 1120ae05 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1120ae0b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1120ae11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ae13 jne 0x1120ae1c */
  if (!C.zf) goto L_1120ae1c;
  /* 1120ae15 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1120ae1c:;
  /* 1120ae1c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1120ae1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1120ae22:;
  /* 1120ae22 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1120ae28 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1120ae2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ae31 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1120ae37 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120ae39 jg 0x1120ae4f */
  if ((!C.zf&&C.sf==C.of)) goto L_1120ae4f;
  /* 1120ae3b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1120ae41 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1120ae47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120ae49 je 0x1120aed0 */
  if (C.zf) goto L_1120aed0;
L_1120ae4f:;
  /* 1120ae4f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1120ae55 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120ae56 push edx */
  push32((uint32_t)(EDX));
  /* 1120ae57 push eax */
  push32((uint32_t)(EAX));
  /* 1120ae58 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1120ae5e push edx */
  push32((uint32_t)(EDX));
  /* 1120ae5f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1120ae65 push eax */
  push32((uint32_t)(EAX));
  /* 1120ae66 call 0x1120a1e0 */
  push32(0x1120ae6bu); f_1120a1e0();
  /* 1120ae6b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ae6e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1120ae74 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1120ae7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120ae7b push edx */
  push32((uint32_t)(EDX));
  /* 1120ae7c push eax */
  push32((uint32_t)(EAX));
  /* 1120ae7d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1120ae83 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ae84 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1120ae8a push edx */
  push32((uint32_t)(EDX));
  /* 1120ae8b call 0x1120a170 */
  push32(0x1120ae90u); f_1120a170();
  /* 1120ae90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1120ae96 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1120ae9c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120aea3 jle 0x1120aeb7 */
  if ((C.zf||C.sf!=C.of)) goto L_1120aeb7;
  /* 1120aea5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1120aeab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120aeb1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1120aeb7:;
  /* 1120aeb7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120aeba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1120aec0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1120aec2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120aec5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120aec8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1120aecb jmp 0x1120ae22 */
  goto L_1120ae22;
L_1120aed0:;
  /* 1120aed0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1120aed3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120aed6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1120aed9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120aedc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120aedf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1120aee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120aee5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1120aeea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120aeec je 0x1120af17 */
  if (C.zf) goto L_1120af17;
  /* 1120aeee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120aef1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120aef4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120aef7 jne 0x1120aeff */
  if (!C.zf) goto L_1120aeff;
  /* 1120aef9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120aefd jne 0x1120af17 */
  if (!C.zf) goto L_1120af17;
L_1120aeff:;
  /* 1120aeff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120af02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120af05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1120af08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120af0b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1120af0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120af11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120af14 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1120af17:;
  /* 1120af17 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120af1e jne 0x1120b0f2 */
  if (!C.zf) goto L_1120b0f2;
  /* 1120af24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120af27 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1120af2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120af2c je 0x1120af7d */
  if (C.zf) goto L_1120af7d;
  /* 1120af2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120af31 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1120af37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120af39 je 0x1120af4b */
  if (C.zf) goto L_1120af4b;
  /* 1120af3b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1120af42 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1120af49 jmp 0x1120af7d */
  goto L_1120af7d;
L_1120af4b:;
  /* 1120af4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120af4e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1120af51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120af53 je 0x1120af65 */
  if (C.zf) goto L_1120af65;
  /* 1120af55 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1120af5c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1120af63 jmp 0x1120af7d */
  goto L_1120af7d;
L_1120af65:;
  /* 1120af65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120af68 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1120af6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120af6d je 0x1120af7d */
  if (C.zf) goto L_1120af7d;
  /* 1120af6f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1120af76 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1120af7d:;
  /* 1120af7d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1120af83 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120af86 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120af89 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1120af8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120af92 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1120af95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120af97 jne 0x1120afb5 */
  if (!C.zf) goto L_1120afb5;
  /* 1120af99 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1120af9f push eax */
  push32((uint32_t)(EAX));
  /* 1120afa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120afa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120afa4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1120afaa push edx */
  push32((uint32_t)(EDX));
  /* 1120afab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1120afad call 0x1120b290 */
  push32(0x1120afb2u); f_1120b290();
  /* 1120afb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120afb5:;
  /* 1120afb5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1120afbb push eax */
  push32((uint32_t)(EAX));
  /* 1120afbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120afbf push ecx */
  push32((uint32_t)(ECX));
  /* 1120afc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120afc3 push edx */
  push32((uint32_t)(EDX));
  /* 1120afc4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1120afca push eax */
  push32((uint32_t)(EAX));
  /* 1120afcb call 0x1120b2d0 */
  push32(0x1120afd0u); f_1120b2d0();
  /* 1120afd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120afd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120afd6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1120afd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120afdb je 0x1120b003 */
  if (C.zf) goto L_1120b003;
  /* 1120afdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120afe0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1120afe3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120afe5 jne 0x1120b003 */
  if (!C.zf) goto L_1120b003;
  /* 1120afe7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1120afed push eax */
  push32((uint32_t)(EAX));
  /* 1120afee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120aff1 push ecx */
  push32((uint32_t)(ECX));
  /* 1120aff2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1120aff8 push edx */
  push32((uint32_t)(EDX));
  /* 1120aff9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1120affb call 0x1120b290 */
  push32(0x1120b000u); f_1120b290();
  /* 1120b000 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120b003:;
  /* 1120b003 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b007 je 0x1120b0b1 */
  if (C.zf) goto L_1120b0b1;
  /* 1120b00d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b011 jle 0x1120b0b1 */
  if ((C.zf||C.sf!=C.of)) goto L_1120b0b1;
  /* 1120b017 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120b01a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1120b020 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120b023 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1120b029:;
  /* 1120b029 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1120b02f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1120b035 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b038 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1120b03e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120b040 je 0x1120b0af */
  if (C.zf) goto L_1120b0af;
  /* 1120b042 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1120b048 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1120b04b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1120b052 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1120b059 push eax */
  push32((uint32_t)(EAX));
  /* 1120b05a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1120b060 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b061 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1120b067 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b06a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1120b070 call 0x1120c440 */
  push32(0x1120b075u); f_1120c440();
  /* 1120b075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b078 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1120b07e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b085 jg 0x1120b089 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120b089;
  /* 1120b087 jmp 0x1120b0af */
  goto L_1120b0af;
L_1120b089:;
  /* 1120b089 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1120b08f push eax */
  push32((uint32_t)(EAX));
  /* 1120b090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b093 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b094 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1120b09a push edx */
  push32((uint32_t)(EDX));
  /* 1120b09b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1120b0a1 push eax */
  push32((uint32_t)(EAX));
  /* 1120b0a2 call 0x1120b2d0 */
  push32(0x1120b0a7u); f_1120b2d0();
  /* 1120b0a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b0aa jmp 0x1120b029 */
  goto L_1120b029;
L_1120b0af:;
  /* 1120b0af jmp 0x1120b0cc */
  goto L_1120b0cc;
L_1120b0b1:;
  /* 1120b0b1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1120b0b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b0b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b0bb push edx */
  push32((uint32_t)(EDX));
  /* 1120b0bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120b0bf push eax */
  push32((uint32_t)(EAX));
  /* 1120b0c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120b0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b0c4 call 0x1120b2d0 */
  push32(0x1120b0c9u); f_1120b2d0();
  /* 1120b0c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120b0cc:;
  /* 1120b0cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120b0cf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1120b0d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120b0d4 je 0x1120b0f2 */
  if (C.zf) goto L_1120b0f2;
  /* 1120b0d6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1120b0dc push eax */
  push32((uint32_t)(EAX));
  /* 1120b0dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b0e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b0e1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1120b0e7 push edx */
  push32((uint32_t)(EDX));
  /* 1120b0e8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1120b0ea call 0x1120b290 */
  push32(0x1120b0efu); f_1120b290();
  /* 1120b0ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120b0f2:;
  /* 1120b0f2 jmp 0x1120a504 */
  goto L_1120a504;
L_1120b0f7:;
  /* 1120b0f7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1120b0fd pop edi */
  EDI = (pop32());
  /* 1120b0fe pop esi */
  ESI = (pop32());
  /* 1120b0ff pop ebx */
  EBX = (pop32());
  /* 1120b100 mov esp, ebp */
  ESP = (EBP);
  /* 1120b102 pop ebp */
  EBP = (pop32());
  /* 1120b103 ret  */
  ESPCHK(0x1120a4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x1120b210 (119 bytes, 44 insns) */
void f_1120b210(void) {
  FTRACE(0x1120b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b210 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b211 mov ebp, esp */
  EBP = (ESP);
  /* 1120b213 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b214 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b217 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1120b21a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b21d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b220 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1120b223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b226 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b22a jl 0x1120b252 */
  if ((C.sf!=C.of)) goto L_1120b252;
  /* 1120b22c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b22f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120b231 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1120b234 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1120b236 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1120b23a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120b240 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120b243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b246 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1120b248 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b24b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b24e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1120b250 jmp 0x1120b265 */
  goto L_1120b265;
L_1120b252:;
  /* 1120b252 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b255 push edx */
  push32((uint32_t)(EDX));
  /* 1120b256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b259 push eax */
  push32((uint32_t)(EAX));
  /* 1120b25a call 0x1120a260 */
  push32(0x1120b25fu); f_1120a260();
  /* 1120b25f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b262 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120b265:;
  /* 1120b265 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b269 jne 0x1120b276 */
  if (!C.zf) goto L_1120b276;
  /* 1120b26b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b26e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1120b274 jmp 0x1120b283 */
  goto L_1120b283;
L_1120b276:;
  /* 1120b276 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b279 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1120b27b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b27e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b281 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1120b283:;
  /* 1120b283 mov esp, ebp */
  ESP = (EBP);
  /* 1120b285 pop ebp */
  EBP = (pop32());
  /* 1120b286 ret  */
  ESPCHK(0x1120b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x1120b290 (53 bytes, 23 insns) */
void f_1120b290(void) {
  FTRACE(0x1120b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b290 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b291 mov ebp, esp */
  EBP = (ESP);
L_1120b293:;
  /* 1120b293 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b296 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b299 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b29c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1120b29f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120b2a1 jle 0x1120b2c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1120b2c3;
  /* 1120b2a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b2a6 push edx */
  push32((uint32_t)(EDX));
  /* 1120b2a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b2aa push eax */
  push32((uint32_t)(EAX));
  /* 1120b2ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b2ae push ecx */
  push32((uint32_t)(ECX));
  /* 1120b2af call 0x1120b210 */
  push32(0x1120b2b4u); f_1120b210();
  /* 1120b2b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b2b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b2ba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b2bd jne 0x1120b2c1 */
  if (!C.zf) goto L_1120b2c1;
  /* 1120b2bf jmp 0x1120b2c3 */
  goto L_1120b2c3;
L_1120b2c1:;
  /* 1120b2c1 jmp 0x1120b293 */
  goto L_1120b293;
L_1120b2c3:;
  /* 1120b2c3 pop ebp */
  EBP = (pop32());
  /* 1120b2c4 ret  */
  ESPCHK(0x1120b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2d0 @ 0x1120b2d0 (74 bytes, 31 insns) */
void f_1120b2d0(void) {
  FTRACE(0x1120b2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1120b2d3 push ecx */
  push32((uint32_t)(ECX));
L_1120b2d4:;
  /* 1120b2d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b2d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b2da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b2dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1120b2e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120b2e2 jle 0x1120b316 */
  if ((C.zf||C.sf!=C.of)) goto L_1120b316;
  /* 1120b2e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b2e7 push edx */
  push32((uint32_t)(EDX));
  /* 1120b2e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b2eb push eax */
  push32((uint32_t)(EAX));
  /* 1120b2ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b2ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120b2f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120b2f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120b2f8 push eax */
  push32((uint32_t)(EAX));
  /* 1120b2f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b2fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b2ff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1120b302 call 0x1120b210 */
  push32(0x1120b307u); f_1120b210();
  /* 1120b307 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b30a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b30d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b310 jne 0x1120b314 */
  if (!C.zf) goto L_1120b314;
  /* 1120b312 jmp 0x1120b316 */
  goto L_1120b316;
L_1120b314:;
  /* 1120b314 jmp 0x1120b2d4 */
  goto L_1120b2d4;
L_1120b316:;
  /* 1120b316 mov esp, ebp */
  ESP = (EBP);
  /* 1120b318 pop ebp */
  EBP = (pop32());
  /* 1120b319 ret  */
  ESPCHK(0x1120b2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x1120b320 (26 bytes, 12 insns) */
void f_1120b320(void) {
  FTRACE(0x1120b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b321 mov ebp, esp */
  EBP = (ESP);
  /* 1120b323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b326 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120b328 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b32b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b32e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1120b330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b333 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120b335 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1120b338 pop ebp */
  EBP = (pop32());
  /* 1120b339 ret  */
  ESPCHK(0x1120b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x1120b340 (31 bytes, 14 insns) */
void f_1120b340(void) {
  FTRACE(0x1120b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b340 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b341 mov ebp, esp */
  EBP = (ESP);
  /* 1120b343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b346 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120b348 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b34b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b34e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1120b350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b353 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120b355 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b358 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1120b35a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120b35d pop ebp */
  EBP = (pop32());
  /* 1120b35e ret  */
  ESPCHK(0x1120b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b360 @ 0x1120b360 (27 bytes, 12 insns) */
void f_1120b360(void) {
  FTRACE(0x1120b360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b360 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b361 mov ebp, esp */
  EBP = (ESP);
  /* 1120b363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b366 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120b368 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b36b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b36e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1120b370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b373 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120b375 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1120b379 pop ebp */
  EBP = (pop32());
  /* 1120b37a ret  */
  ESPCHK(0x1120b360u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1120b380 (145 bytes, 42 insns) */
void f_1120b380(void) {
  FTRACE(0x1120b380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b380 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b381 mov ebp, esp */
  EBP = (ESP);
  /* 1120b383 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b384 call 0x1120b430 */
  push32(0x1120b389u); f_1120b430();
  /* 1120b389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b38c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1120b38e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120b395 jmp 0x1120b3a0 */
  goto L_1120b3a0;
L_1120b397:;
  /* 1120b397 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120b39a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b39d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1120b3a0:;
  /* 1120b3a0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b3a4 jae 0x1120b3ca */
  if (!C.cf) goto L_1120b3ca;
  /* 1120b3a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120b3a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b3ac cmp ecx, dword ptr [eax*8 + 0x1122dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1122dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b3b3 jne 0x1120b3c8 */
  if (!C.zf) goto L_1120b3c8;
  /* 1120b3b5 call 0x1120b420 */
  push32(0x1120b3bau); f_1120b420();
  /* 1120b3ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120b3bd mov ecx, dword ptr [edx*8 + 0x1122dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1122dfbc)));
  /* 1120b3c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1120b3c6 jmp 0x1120b40d */
  goto L_1120b40d;
L_1120b3c8:;
  /* 1120b3c8 jmp 0x1120b397 */
  goto L_1120b397;
L_1120b3ca:;
  /* 1120b3ca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b3ce jb 0x1120b3e3 */
  if (C.cf) goto L_1120b3e3;
  /* 1120b3d0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b3d4 ja 0x1120b3e3 */
  if ((!C.cf&&!C.zf)) goto L_1120b3e3;
  /* 1120b3d6 call 0x1120b420 */
  push32(0x1120b3dbu); f_1120b420();
  /* 1120b3db mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1120b3e1 jmp 0x1120b40d */
  goto L_1120b40d;
L_1120b3e3:;
  /* 1120b3e3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b3ea jb 0x1120b402 */
  if (C.cf) goto L_1120b402;
  /* 1120b3ec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b3f3 ja 0x1120b402 */
  if ((!C.cf&&!C.zf)) goto L_1120b402;
  /* 1120b3f5 call 0x1120b420 */
  push32(0x1120b3fau); f_1120b420();
  /* 1120b3fa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1120b400 jmp 0x1120b40d */
  goto L_1120b40d;
L_1120b402:;
  /* 1120b402 call 0x1120b420 */
  push32(0x1120b407u); f_1120b420();
  /* 1120b407 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1120b40d:;
  /* 1120b40d mov esp, ebp */
  ESP = (EBP);
  /* 1120b40f pop ebp */
  EBP = (pop32());
  /* 1120b410 ret  */
  ESPCHK(0x1120b380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b420 @ 0x1120b420 (13 bytes, 6 insns) */
void f_1120b420(void) {
  FTRACE(0x1120b420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b420 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b421 mov ebp, esp */
  EBP = (ESP);
  /* 1120b423 call 0x11202f90 */
  push32(0x1120b428u); f_11202f90();
  /* 1120b428 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b42b pop ebp */
  EBP = (pop32());
  /* 1120b42c ret  */
  ESPCHK(0x1120b420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b430 @ 0x1120b430 (13 bytes, 6 insns) */
void f_1120b430(void) {
  FTRACE(0x1120b430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b430 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b431 mov ebp, esp */
  EBP = (ESP);
  /* 1120b433 call 0x11202f90 */
  push32(0x1120b438u); f_11202f90();
  /* 1120b438 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b43b pop ebp */
  EBP = (pop32());
  /* 1120b43c ret  */
  ESPCHK(0x1120b430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b440 @ 0x1120b440 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1120b440(void) {
  FTRACE(0x1120b440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b440 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b441 mov ebp, esp */
  EBP = (ESP);
  /* 1120b443 push edi */
  push32((uint32_t)(EDI));
  /* 1120b444 push esi */
  push32((uint32_t)(ESI));
  /* 1120b445 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b448 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b44b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b44e mov eax, ecx */
  EAX = (ECX);
  /* 1120b450 mov edx, ecx */
  EDX = (ECX);
  /* 1120b452 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b454 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b456 jbe 0x1120b460 */
  if ((C.cf||C.zf)) goto L_1120b460;
  /* 1120b458 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b45a jb 0x1120b5d8 */
  if (C.cf) goto L_1120b5d8;
L_1120b460:;
  /* 1120b460 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1120b466 jne 0x1120b47c */
  if (!C.zf) goto L_1120b47c;
  /* 1120b468 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b46b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1120b46e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b471 jb 0x1120b49c */
  if (C.cf) goto L_1120b49c;
  /* 1120b473 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b475 jmp dword ptr [edx*4 + 0x1120b588] */
  switch (EDX) {
    case 0: goto L_1120b598;
    case 1: goto L_1120b5a0;
    case 2: goto L_1120b5ac;
    case 3: goto L_1120b5c0;
    default: x86_unimpl("switch@0x1120b475 out of table"); return;
  }
L_1120b47c:;
  /* 1120b47c mov eax, edi */
  EAX = (EDI);
  /* 1120b47e mov edx, 3 */
  EDX = (0x3u);
  /* 1120b483 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b486 jb 0x1120b494 */
  if (C.cf) goto L_1120b494;
  /* 1120b488 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1120b48b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b48d jmp dword ptr [eax*4 + 0x1120b4a0] */
  switch (EAX) {
    case 1: goto L_1120b4b0;
    case 2: goto L_1120b4dc;
    case 3: goto L_1120b500;
    default: x86_unimpl("switch@0x1120b48d out of table"); return;
  }
L_1120b494:;
  /* 1120b494 jmp dword ptr [ecx*4 + 0x1120b598] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1120b598)))); return;
  /* 1120b49b nop  */
  /* nop */
L_1120b49c:;
  /* 1120b49c jmp dword ptr [ecx*4 + 0x1120b51c] */
  switch (ECX) {
    case 0: goto L_1120b57f;
    case 1: goto L_1120b56c;
    case 2: goto L_1120b564;
    case 3: goto L_1120b55c;
    case 4: goto L_1120b554;
    case 5: goto L_1120b54c;
    case 6: goto L_1120b544;
    case 7: goto L_1120b53c;
    default: x86_unimpl("switch@0x1120b49c out of table"); return;
  }
  /* 1120b4a3 nop  */
  /* nop */
L_1120b4b0:;
  /* 1120b4b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120b4b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120b4b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1120b4b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120b4b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120b4bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120b4bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b4c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120b4c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b4c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b4cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b4ce jb 0x1120b49c */
  if (C.cf) goto L_1120b49c;
  /* 1120b4d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b4d2 jmp dword ptr [edx*4 + 0x1120b588] */
  switch (EDX) {
    case 0: goto L_1120b598;
    case 1: goto L_1120b5a0;
    case 2: goto L_1120b5ac;
    case 3: goto L_1120b5c0;
    default: x86_unimpl("switch@0x1120b4d2 out of table"); return;
  }
  /* 1120b4d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120b4dc:;
  /* 1120b4dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120b4de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120b4e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1120b4e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120b4e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b4e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120b4eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b4ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b4f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b4f4 jb 0x1120b49c */
  if (C.cf) goto L_1120b49c;
  /* 1120b4f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b4f8 jmp dword ptr [edx*4 + 0x1120b588] */
  switch (EDX) {
    case 0: goto L_1120b598;
    case 1: goto L_1120b5a0;
    case 2: goto L_1120b5ac;
    case 3: goto L_1120b5c0;
    default: x86_unimpl("switch@0x1120b4f8 out of table"); return;
  }
  /* 1120b4ff nop  */
  /* nop */
L_1120b500:;
  /* 1120b500 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120b502 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120b504 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1120b506 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1120b507 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b50a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1120b50b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b50e jb 0x1120b49c */
  if (C.cf) goto L_1120b49c;
  /* 1120b510 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b512 jmp dword ptr [edx*4 + 0x1120b588] */
  switch (EDX) {
    case 0: goto L_1120b598;
    case 1: goto L_1120b5a0;
    case 2: goto L_1120b5ac;
    case 3: goto L_1120b5c0;
    default: x86_unimpl("switch@0x1120b512 out of table"); return;
  }
  /* 1120b519 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120b53c:;
  /* 1120b53c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1120b540 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1120b544:;
  /* 1120b544 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1120b548 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1120b54c:;
  /* 1120b54c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1120b550 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1120b554:;
  /* 1120b554 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1120b558 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1120b55c:;
  /* 1120b55c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1120b560 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1120b564:;
  /* 1120b564 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1120b568 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1120b56c:;
  /* 1120b56c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1120b570 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1120b574 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1120b57b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b57d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1120b57f:;
  /* 1120b57f jmp dword ptr [edx*4 + 0x1120b588] */
  switch (EDX) {
    case 0: goto L_1120b598;
    case 1: goto L_1120b5a0;
    case 2: goto L_1120b5ac;
    case 3: goto L_1120b5c0;
    default: x86_unimpl("switch@0x1120b57f out of table"); return;
  }
  /* 1120b586 mov edi, edi */
  EDI = (EDI);
L_1120b598:;
  /* 1120b598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b59b pop esi */
  ESI = (pop32());
  /* 1120b59c pop edi */
  EDI = (pop32());
  /* 1120b59d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b59e ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
  /* 1120b59f nop  */
  /* nop */
L_1120b5a0:;
  /* 1120b5a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120b5a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1120b5a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b5a7 pop esi */
  ESI = (pop32());
  /* 1120b5a8 pop edi */
  EDI = (pop32());
  /* 1120b5a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b5aa ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
  /* 1120b5ab nop  */
  /* nop */
L_1120b5ac:;
  /* 1120b5ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120b5ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1120b5b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120b5b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120b5b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b5b9 pop esi */
  ESI = (pop32());
  /* 1120b5ba pop edi */
  EDI = (pop32());
  /* 1120b5bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b5bc ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
  /* 1120b5bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120b5c0:;
  /* 1120b5c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120b5c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1120b5c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120b5c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120b5ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120b5cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120b5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b5d3 pop esi */
  ESI = (pop32());
  /* 1120b5d4 pop edi */
  EDI = (pop32());
  /* 1120b5d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b5d6 ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
  /* 1120b5d7 nop  */
  /* nop */
L_1120b5d8:;
  /* 1120b5d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1120b5dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1120b5e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1120b5e6 jne 0x1120b60c */
  if (!C.zf) goto L_1120b60c;
  /* 1120b5e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b5eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1120b5ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b5f1 jb 0x1120b600 */
  if (C.cf) goto L_1120b600;
  /* 1120b5f3 std  */
  C.df=1;
  /* 1120b5f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b5f6 cld  */
  C.df=0;
  /* 1120b5f7 jmp dword ptr [edx*4 + 0x1120b720] */
  switch (EDX) {
    case 0: goto L_1120b730;
    case 1: goto L_1120b738;
    case 2: goto L_1120b748;
    case 3: goto L_1120b75c;
    default: x86_unimpl("switch@0x1120b5f7 out of table"); return;
  }
  /* 1120b5fe mov edi, edi */
  EDI = (EDI);
L_1120b600:;
  /* 1120b600 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120b602 jmp dword ptr [ecx*4 + 0x1120b6d0] */
  switch (ECX) {
    case 0: goto L_1120b717;
    default: x86_unimpl("switch@0x1120b602 out of table"); return;
  }
  /* 1120b609 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120b60c:;
  /* 1120b60c mov eax, edi */
  EAX = (EDI);
  /* 1120b60e mov edx, 3 */
  EDX = (0x3u);
  /* 1120b613 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b616 jb 0x1120b624 */
  if (C.cf) goto L_1120b624;
  /* 1120b618 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1120b61b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b61d jmp dword ptr [eax*4 + 0x1120b628] */
  switch (EAX) {
    case 1: goto L_1120b638;
    case 2: goto L_1120b658;
    case 3: goto L_1120b680;
    default: x86_unimpl("switch@0x1120b61d out of table"); return;
  }
L_1120b624:;
  /* 1120b624 jmp dword ptr [ecx*4 + 0x1120b720] */
  switch (ECX) {
    case 0: goto L_1120b730;
    case 1: goto L_1120b738;
    case 2: goto L_1120b748;
    case 3: goto L_1120b75c;
    default: x86_unimpl("switch@0x1120b624 out of table"); return;
  }
  /* 1120b62b nop  */
  /* nop */
L_1120b638:;
  /* 1120b638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120b63b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120b63d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120b640 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1120b641 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b644 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1120b645 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b648 jb 0x1120b600 */
  if (C.cf) goto L_1120b600;
  /* 1120b64a std  */
  C.df=1;
  /* 1120b64b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b64d cld  */
  C.df=0;
  /* 1120b64e jmp dword ptr [edx*4 + 0x1120b720] */
  switch (EDX) {
    case 0: goto L_1120b730;
    case 1: goto L_1120b738;
    case 2: goto L_1120b748;
    case 3: goto L_1120b75c;
    default: x86_unimpl("switch@0x1120b64e out of table"); return;
  }
  /* 1120b655 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120b658:;
  /* 1120b658 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120b65b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120b65d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120b660 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120b663 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b666 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120b669 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b66c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b66f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b672 jb 0x1120b600 */
  if (C.cf) goto L_1120b600;
  /* 1120b674 std  */
  C.df=1;
  /* 1120b675 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b677 cld  */
  C.df=0;
  /* 1120b678 jmp dword ptr [edx*4 + 0x1120b720] */
  switch (EDX) {
    case 0: goto L_1120b730;
    case 1: goto L_1120b738;
    case 2: goto L_1120b748;
    case 3: goto L_1120b75c;
    default: x86_unimpl("switch@0x1120b678 out of table"); return;
  }
  /* 1120b67f nop  */
  /* nop */
L_1120b680:;
  /* 1120b680 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120b683 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1120b685 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120b688 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120b68b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120b68e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120b691 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1120b694 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120b697 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b69a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b69d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b6a0 jb 0x1120b600 */
  if (C.cf) goto L_1120b600;
  /* 1120b6a6 std  */
  C.df=1;
  /* 1120b6a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1120b6a9 cld  */
  C.df=0;
  /* 1120b6aa jmp dword ptr [edx*4 + 0x1120b720] */
  switch (EDX) {
    case 0: goto L_1120b730;
    case 1: goto L_1120b738;
    case 2: goto L_1120b748;
    case 3: goto L_1120b75c;
    default: x86_unimpl("switch@0x1120b6aa out of table"); return;
  }
  /* 1120b6b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1120b6b4 aam 0xb6 */
  x86_unimpl("aam @ 0x1120b6b4");
  /* 1120b6b6 and byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1120b6b8 fdiv qword ptr [esi - 0x491beee0] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(ESI + -0x491beee0)));
  /* 1120b6be and byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1120b6c0 in al, dx */
  x86_unimpl("in @ 0x1120b6c0");
  /* 1120b6c1 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1120b6c3 adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b6c5 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1120b6c7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b6c9 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1120b6cb adc dword ptr [edi + esi*4], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1120b6ce and byte ptr [ecx], dl */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(DL); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1120b6d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1120b6d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1120b6dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1120b6e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1120b6e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1120b6e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1120b6ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1120b6f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1120b6f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1120b6f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1120b6fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1120b700 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1120b704 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1120b708 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1120b70c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1120b713 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b715 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1120b717:;
  /* 1120b717 jmp dword ptr [edx*4 + 0x1120b720] */
  switch (EDX) {
    case 0: goto L_1120b730;
    case 1: goto L_1120b738;
    case 2: goto L_1120b748;
    case 3: goto L_1120b75c;
    default: x86_unimpl("switch@0x1120b717 out of table"); return;
  }
  /* 1120b71e mov edi, edi */
  EDI = (EDI);
L_1120b730:;
  /* 1120b730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b733 pop esi */
  ESI = (pop32());
  /* 1120b734 pop edi */
  EDI = (pop32());
  /* 1120b735 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b736 ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
  /* 1120b737 nop  */
  /* nop */
L_1120b738:;
  /* 1120b738 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120b73b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120b73e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b741 pop esi */
  ESI = (pop32());
  /* 1120b742 pop edi */
  EDI = (pop32());
  /* 1120b743 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b744 ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
  /* 1120b745 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120b748:;
  /* 1120b748 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120b74b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120b74e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120b751 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120b754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b757 pop esi */
  ESI = (pop32());
  /* 1120b758 pop edi */
  EDI = (pop32());
  /* 1120b759 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b75a ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
  /* 1120b75b nop  */
  /* nop */
L_1120b75c:;
  /* 1120b75c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1120b75f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1120b762 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1120b765 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1120b768 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1120b76b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1120b76e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b771 pop esi */
  ESI = (pop32());
  /* 1120b772 pop edi */
  EDI = (pop32());
  /* 1120b773 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120b774 ret  */
  ESPCHK(0x1120b440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b780 @ 0x1120b780 (421 bytes, 148 insns) */
void f_1120b780(void) {
  FTRACE(0x1120b780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b780 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b781 mov ebp, esp */
  EBP = (ESP);
  /* 1120b783 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1120b785 push 0x1122afb8 */
  push32((uint32_t)(0x1122afb8u));
  /* 1120b78a push 0x1120c658 */
  push32((uint32_t)(0x1120c658u));
  /* 1120b78f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1120b795 push eax */
  push32((uint32_t)(EAX));
  /* 1120b796 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1120b79d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b7a0 push ebx */
  push32((uint32_t)(EBX));
  /* 1120b7a1 push esi */
  push32((uint32_t)(ESI));
  /* 1120b7a2 push edi */
  push32((uint32_t)(EDI));
  /* 1120b7a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1120b7a6 cmp dword ptr [0x1122f64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b7ad jne 0x1120b7fe */
  if (!C.zf) goto L_1120b7fe;
  /* 1120b7af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1120b7b2 push eax */
  push32((uint32_t)(EAX));
  /* 1120b7b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120b7b5 push 0x1122afb4 */
  push32((uint32_t)(0x1122afb4u));
  /* 1120b7ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1120b7bc call dword ptr [0x112312d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d0))), 0x1120b7c2u);
  /* 1120b7c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120b7c4 je 0x1120b7d2 */
  if (C.zf) goto L_1120b7d2;
  /* 1120b7c6 mov dword ptr [0x1122f64c], 1 */
  w32((uint32_t)(0x1122f64c), (0x1u));
  /* 1120b7d0 jmp 0x1120b7fe */
  goto L_1120b7fe;
L_1120b7d2:;
  /* 1120b7d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1120b7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b7d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120b7d8 push 0x1122afb0 */
  push32((uint32_t)(0x1122afb0u));
  /* 1120b7dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1120b7df push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b7e1 call dword ptr [0x112312d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d4))), 0x1120b7e7u);
  /* 1120b7e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120b7e9 je 0x1120b7f7 */
  if (C.zf) goto L_1120b7f7;
  /* 1120b7eb mov dword ptr [0x1122f64c], 2 */
  w32((uint32_t)(0x1122f64c), (0x2u));
  /* 1120b7f5 jmp 0x1120b7fe */
  goto L_1120b7fe;
L_1120b7f7:;
  /* 1120b7f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120b7f9 jmp 0x1120b928 */
  goto L_1120b928;
L_1120b7fe:;
  /* 1120b7fe cmp dword ptr [0x1122f64c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1122f64c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b805 jne 0x1120b835 */
  if (!C.zf) goto L_1120b835;
  /* 1120b807 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b80b jne 0x1120b816 */
  if (!C.zf) goto L_1120b816;
  /* 1120b80d mov edx, dword ptr [0x1122f658] */
  EDX = (r32((uint32_t)(0x1122f658)));
  /* 1120b813 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1120b816:;
  /* 1120b816 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b819 push eax */
  push32((uint32_t)(EAX));
  /* 1120b81a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b81d push ecx */
  push32((uint32_t)(ECX));
  /* 1120b81e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b821 push edx */
  push32((uint32_t)(EDX));
  /* 1120b822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b825 push eax */
  push32((uint32_t)(EAX));
  /* 1120b826 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1120b829 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b82a call dword ptr [0x112312d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d4))), 0x1120b830u);
  /* 1120b830 jmp 0x1120b928 */
  goto L_1120b928;
L_1120b835:;
  /* 1120b835 cmp dword ptr [0x1122f64c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f64c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b83c jne 0x1120b926 */
  if (!C.zf) goto L_1120b926;
  /* 1120b842 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b846 jne 0x1120b851 */
  if (!C.zf) goto L_1120b851;
  /* 1120b848 mov edx, dword ptr [0x1122f668] */
  EDX = (r32((uint32_t)(0x1122f668)));
  /* 1120b84e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1120b851:;
  /* 1120b851 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b853 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b855 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b858 push eax */
  push32((uint32_t)(EAX));
  /* 1120b859 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b85c push ecx */
  push32((uint32_t)(ECX));
  /* 1120b85d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1120b860 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120b862 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120b864 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1120b867 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b86a push edx */
  push32((uint32_t)(EDX));
  /* 1120b86b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120b86e push eax */
  push32((uint32_t)(EAX));
  /* 1120b86f call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x1120b875u);
  /* 1120b875 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1120b878 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b87c jne 0x1120b885 */
  if (!C.zf) goto L_1120b885;
  /* 1120b87e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120b880 jmp 0x1120b928 */
  goto L_1120b928;
L_1120b885:;
  /* 1120b885 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120b88c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120b88f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1120b891 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b894 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1120b896 call 0x112066f0 */
  push32(0x1120b89bu); f_112066f0();
  /* 1120b89b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1120b89e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1120b8a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120b8a4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1120b8a7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120b8aa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1120b8ac push edx */
  push32((uint32_t)(EDX));
  /* 1120b8ad push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b8af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120b8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1120b8b3 call 0x112072c0 */
  push32(0x1120b8b8u); f_112072c0();
  /* 1120b8b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b8bb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1120b8c2 jmp 0x1120b8db */
  goto L_1120b8db;
  /* 1120b8c4 mov eax, 1 */
  EAX = (0x1u);
  /* 1120b8c9 ret  */
  ESPCHK(0x1120b780u, _esp0);
  ESP += 4; return;
  /* 1120b8ca mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1120b8cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1120b8d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1120b8db:;
  /* 1120b8db cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b8df jne 0x1120b8e5 */
  if (!C.zf) goto L_1120b8e5;
  /* 1120b8e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120b8e3 jmp 0x1120b928 */
  goto L_1120b928;
L_1120b8e5:;
  /* 1120b8e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120b8e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b8e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120b8ec push edx */
  push32((uint32_t)(EDX));
  /* 1120b8ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b8f0 push eax */
  push32((uint32_t)(EAX));
  /* 1120b8f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b8f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120b8f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120b8fa push edx */
  push32((uint32_t)(EDX));
  /* 1120b8fb call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x1120b901u);
  /* 1120b901 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1120b904 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b908 jne 0x1120b90e */
  if (!C.zf) goto L_1120b90e;
  /* 1120b90a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120b90c jmp 0x1120b928 */
  goto L_1120b928;
L_1120b90e:;
  /* 1120b90e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b911 push eax */
  push32((uint32_t)(EAX));
  /* 1120b912 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120b915 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b916 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120b919 push edx */
  push32((uint32_t)(EDX));
  /* 1120b91a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b91d push eax */
  push32((uint32_t)(EAX));
  /* 1120b91e call dword ptr [0x112312d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d0))), 0x1120b924u);
  /* 1120b924 jmp 0x1120b928 */
  goto L_1120b928;
L_1120b926:;
  /* 1120b926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120b928:;
  /* 1120b928 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1120b92b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120b92e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1120b935 pop edi */
  EDI = (pop32());
  /* 1120b936 pop esi */
  ESI = (pop32());
  /* 1120b937 pop ebx */
  EBX = (pop32());
  /* 1120b938 mov esp, ebp */
  ESP = (EBP);
  /* 1120b93a pop ebp */
  EBP = (pop32());
  /* 1120b93b ret  */
  ESPCHK(0x1120b780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b940 @ 0x1120b940 (727 bytes, 263 insns) */
void f_1120b940(void) {
  FTRACE(0x1120b940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120b940 push ebp */
  push32((uint32_t)(EBP));
  /* 1120b941 mov ebp, esp */
  EBP = (ESP);
  /* 1120b943 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1120b945 push 0x1122afc8 */
  push32((uint32_t)(0x1122afc8u));
  /* 1120b94a push 0x1120c658 */
  push32((uint32_t)(0x1120c658u));
  /* 1120b94f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1120b955 push eax */
  push32((uint32_t)(EAX));
  /* 1120b956 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1120b95d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b960 push ebx */
  push32((uint32_t)(EBX));
  /* 1120b961 push esi */
  push32((uint32_t)(ESI));
  /* 1120b962 push edi */
  push32((uint32_t)(EDI));
  /* 1120b963 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1120b966 cmp dword ptr [0x1122f670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b96d jne 0x1120b9c6 */
  if (!C.zf) goto L_1120b9c6;
  /* 1120b96f push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b973 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120b975 push 0x1122afb4 */
  push32((uint32_t)(0x1122afb4u));
  /* 1120b97a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1120b97f push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b981 call dword ptr [0x112312c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312c8))), 0x1120b987u);
  /* 1120b987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120b989 je 0x1120b997 */
  if (C.zf) goto L_1120b997;
  /* 1120b98b mov dword ptr [0x1122f670], 1 */
  w32((uint32_t)(0x1122f670), (0x1u));
  /* 1120b995 jmp 0x1120b9c6 */
  goto L_1120b9c6;
L_1120b997:;
  /* 1120b997 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b99b push 1 */
  push32((uint32_t)(0x1u));
  /* 1120b99d push 0x1122afb0 */
  push32((uint32_t)(0x1122afb0u));
  /* 1120b9a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1120b9a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120b9a9 call dword ptr [0x112312cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312cc))), 0x1120b9afu);
  /* 1120b9af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120b9b1 je 0x1120b9bf */
  if (C.zf) goto L_1120b9bf;
  /* 1120b9b3 mov dword ptr [0x1122f670], 2 */
  w32((uint32_t)(0x1122f670), (0x2u));
  /* 1120b9bd jmp 0x1120b9c6 */
  goto L_1120b9c6;
L_1120b9bf:;
  /* 1120b9bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120b9c1 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120b9c6:;
  /* 1120b9c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b9ca jle 0x1120b9df */
  if ((C.zf||C.sf!=C.of)) goto L_1120b9df;
  /* 1120b9cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b9cf push eax */
  push32((uint32_t)(EAX));
  /* 1120b9d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b9d4 call 0x1120bc50 */
  push32(0x1120b9d9u); f_1120bc50();
  /* 1120b9d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120b9dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1120b9df:;
  /* 1120b9df cmp dword ptr [0x1122f670], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1122f670))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120b9e6 jne 0x1120ba0b */
  if (!C.zf) goto L_1120ba0b;
  /* 1120b9e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1120b9eb push edx */
  push32((uint32_t)(EDX));
  /* 1120b9ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120b9ef push eax */
  push32((uint32_t)(EAX));
  /* 1120b9f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120b9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120b9f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120b9f7 push edx */
  push32((uint32_t)(EDX));
  /* 1120b9f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120b9fb push eax */
  push32((uint32_t)(EAX));
  /* 1120b9fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120b9ff push ecx */
  push32((uint32_t)(ECX));
  /* 1120ba00 call dword ptr [0x112312cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312cc))), 0x1120ba06u);
  /* 1120ba06 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120ba0b:;
  /* 1120ba0b cmp dword ptr [0x1122f670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ba12 jne 0x1120bc2f */
  if (!C.zf) goto L_1120bc2f;
  /* 1120ba18 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ba1c jne 0x1120ba27 */
  if (!C.zf) goto L_1120ba27;
  /* 1120ba1e mov edx, dword ptr [0x1122f668] */
  EDX = (r32((uint32_t)(0x1122f668)));
  /* 1120ba24 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1120ba27:;
  /* 1120ba27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ba29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ba2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120ba2e push eax */
  push32((uint32_t)(EAX));
  /* 1120ba2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120ba32 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ba33 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1120ba36 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120ba38 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ba3a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1120ba3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ba40 push edx */
  push32((uint32_t)(EDX));
  /* 1120ba41 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1120ba44 push eax */
  push32((uint32_t)(EAX));
  /* 1120ba45 call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x1120ba4bu);
  /* 1120ba4b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1120ba4e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ba52 jne 0x1120ba5b */
  if (!C.zf) goto L_1120ba5b;
  /* 1120ba54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120ba56 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120ba5b:;
  /* 1120ba5b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120ba62 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120ba65 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1120ba67 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ba6a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1120ba6c call 0x112066f0 */
  push32(0x1120ba71u); f_112066f0();
  /* 1120ba71 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1120ba74 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1120ba77 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120ba7a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1120ba7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1120ba84 jmp 0x1120ba9d */
  goto L_1120ba9d;
  /* 1120ba86 mov eax, 1 */
  EAX = (0x1u);
  /* 1120ba8b ret  */
  ESPCHK(0x1120b940u, _esp0);
  ESP += 4; return;
  /* 1120ba8c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1120ba8f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1120ba96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1120ba9d:;
  /* 1120ba9d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120baa1 jne 0x1120baaa */
  if (!C.zf) goto L_1120baaa;
  /* 1120baa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120baa5 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120baaa:;
  /* 1120baaa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120baad push edx */
  push32((uint32_t)(EDX));
  /* 1120baae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120bab1 push eax */
  push32((uint32_t)(EAX));
  /* 1120bab2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120bab5 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bab6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120bab9 push edx */
  push32((uint32_t)(EDX));
  /* 1120baba push 1 */
  push32((uint32_t)(0x1u));
  /* 1120babc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1120babf push eax */
  push32((uint32_t)(EAX));
  /* 1120bac0 call dword ptr [0x112312d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312d8))), 0x1120bac6u);
  /* 1120bac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120bac8 jne 0x1120bad1 */
  if (!C.zf) goto L_1120bad1;
  /* 1120baca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bacc jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bad1:;
  /* 1120bad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bad5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120bad8 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bad9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120badc push edx */
  push32((uint32_t)(EDX));
  /* 1120badd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bae0 push eax */
  push32((uint32_t)(EAX));
  /* 1120bae1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bae4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bae5 call dword ptr [0x112312c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312c8))), 0x1120baebu);
  /* 1120baeb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1120baee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120baf2 jne 0x1120bafb */
  if (!C.zf) goto L_1120bafb;
  /* 1120baf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120baf6 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bafb:;
  /* 1120bafb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bafe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1120bb04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120bb06 je 0x1120bb4b */
  if (C.zf) goto L_1120bb4b;
  /* 1120bb08 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bb0c je 0x1120bb46 */
  if (C.zf) goto L_1120bb46;
  /* 1120bb0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120bb11 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bb14 jle 0x1120bb1d */
  if ((C.zf||C.sf!=C.of)) goto L_1120bb1d;
  /* 1120bb16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bb18 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bb1d:;
  /* 1120bb1d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1120bb20 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bb21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120bb24 push edx */
  push32((uint32_t)(EDX));
  /* 1120bb25 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120bb28 push eax */
  push32((uint32_t)(EAX));
  /* 1120bb29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120bb2c push ecx */
  push32((uint32_t)(ECX));
  /* 1120bb2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bb30 push edx */
  push32((uint32_t)(EDX));
  /* 1120bb31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bb34 push eax */
  push32((uint32_t)(EAX));
  /* 1120bb35 call dword ptr [0x112312c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312c8))), 0x1120bb3bu);
  /* 1120bb3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120bb3d jne 0x1120bb46 */
  if (!C.zf) goto L_1120bb46;
  /* 1120bb3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bb41 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bb46:;
  /* 1120bb46 jmp 0x1120bc2a */
  goto L_1120bc2a;
L_1120bb4b:;
  /* 1120bb4b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120bb4e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1120bb51 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1120bb58 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120bb5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1120bb5d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bb60 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1120bb62 call 0x112066f0 */
  push32(0x1120bb67u); f_112066f0();
  /* 1120bb67 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1120bb6a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1120bb6d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1120bb70 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1120bb73 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1120bb7a jmp 0x1120bb93 */
  goto L_1120bb93;
  /* 1120bb7c mov eax, 1 */
  EAX = (0x1u);
  /* 1120bb81 ret  */
  ESPCHK(0x1120b940u, _esp0);
  ESP += 4; return;
  /* 1120bb82 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1120bb85 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1120bb8c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1120bb93:;
  /* 1120bb93 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bb97 jne 0x1120bba0 */
  if (!C.zf) goto L_1120bba0;
  /* 1120bb99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bb9b jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bba0:;
  /* 1120bba0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120bba3 push eax */
  push32((uint32_t)(EAX));
  /* 1120bba4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120bba7 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bba8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120bbab push edx */
  push32((uint32_t)(EDX));
  /* 1120bbac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120bbaf push eax */
  push32((uint32_t)(EAX));
  /* 1120bbb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bbb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bbb7 push edx */
  push32((uint32_t)(EDX));
  /* 1120bbb8 call dword ptr [0x112312c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312c8))), 0x1120bbbeu);
  /* 1120bbbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120bbc0 jne 0x1120bbc6 */
  if (!C.zf) goto L_1120bbc6;
  /* 1120bbc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bbc4 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bbc6:;
  /* 1120bbc6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bbca jne 0x1120bbfa */
  if (!C.zf) goto L_1120bbfa;
  /* 1120bbcc push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bbce push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bbd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bbd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bbd4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120bbd7 push eax */
  push32((uint32_t)(EAX));
  /* 1120bbd8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120bbdb push ecx */
  push32((uint32_t)(ECX));
  /* 1120bbdc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1120bbe1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1120bbe4 push edx */
  push32((uint32_t)(EDX));
  /* 1120bbe5 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x1120bbebu);
  /* 1120bbeb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1120bbee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bbf2 jne 0x1120bbf8 */
  if (!C.zf) goto L_1120bbf8;
  /* 1120bbf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bbf6 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bbf8:;
  /* 1120bbf8 jmp 0x1120bc2a */
  goto L_1120bc2a;
L_1120bbfa:;
  /* 1120bbfa push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bbfc push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bbfe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1120bc01 push eax */
  push32((uint32_t)(EAX));
  /* 1120bc02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1120bc05 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bc06 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120bc09 push edx */
  push32((uint32_t)(EDX));
  /* 1120bc0a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120bc0d push eax */
  push32((uint32_t)(EAX));
  /* 1120bc0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1120bc13 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1120bc16 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bc17 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x1120bc1du);
  /* 1120bc1d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1120bc20 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bc24 jne 0x1120bc2a */
  if (!C.zf) goto L_1120bc2a;
  /* 1120bc26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bc28 jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bc2a:;
  /* 1120bc2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120bc2d jmp 0x1120bc31 */
  goto L_1120bc31;
L_1120bc2f:;
  /* 1120bc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120bc31:;
  /* 1120bc31 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1120bc34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120bc37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1120bc3e pop edi */
  EDI = (pop32());
  /* 1120bc3f pop esi */
  ESI = (pop32());
  /* 1120bc40 pop ebx */
  EBX = (pop32());
  /* 1120bc41 mov esp, ebp */
  ESP = (EBP);
  /* 1120bc43 pop ebp */
  EBP = (pop32());
  /* 1120bc44 ret  */
  ESPCHK(0x1120b940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1120bc50 (80 bytes, 32 insns) */
void f_1120bc50(void) {
  FTRACE(0x1120bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1120bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1120bc53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bc56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bc59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120bc5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bc5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1120bc62:;
  /* 1120bc62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bc65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bc68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bc6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120bc6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120bc70 je 0x1120bc87 */
  if (C.zf) goto L_1120bc87;
  /* 1120bc72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bc75 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120bc78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120bc7a je 0x1120bc87 */
  if (C.zf) goto L_1120bc87;
  /* 1120bc7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bc7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bc82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120bc85 jmp 0x1120bc62 */
  goto L_1120bc62;
L_1120bc87:;
  /* 1120bc87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bc8a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120bc8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120bc8f jne 0x1120bc99 */
  if (!C.zf) goto L_1120bc99;
  /* 1120bc91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bc94 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bc97 jmp 0x1120bc9c */
  goto L_1120bc9c;
L_1120bc99:;
  /* 1120bc99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1120bc9c:;
  /* 1120bc9c mov esp, ebp */
  ESP = (EBP);
  /* 1120bc9e pop ebp */
  EBP = (pop32());
  /* 1120bc9f ret  */
  ESPCHK(0x1120bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bca0 @ 0x1120bca0 (130 bytes, 43 insns) */
void f_1120bca0(void) {
  FTRACE(0x1120bca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120bca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120bca1 mov ebp, esp */
  EBP = (ESP);
  /* 1120bca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bca7 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bcad jae 0x1120bcd1 */
  if (!C.cf) goto L_1120bcd1;
  /* 1120bcaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bcb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120bcb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bcb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120bcbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120bcbe mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120bcc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1120bcca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120bccd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120bccf jne 0x1120bcec */
  if (!C.zf) goto L_1120bcec;
L_1120bcd1:;
  /* 1120bcd1 call 0x1120b420 */
  push32(0x1120bcd6u); f_1120b420();
  /* 1120bcd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120bcdc call 0x1120b430 */
  push32(0x1120bce1u); f_1120b430();
  /* 1120bce1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1120bce7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120bcea jmp 0x1120bd1e */
  goto L_1120bd1e;
L_1120bcec:;
  /* 1120bcec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bcef push edx */
  push32((uint32_t)(EDX));
  /* 1120bcf0 call 0x1120cc40 */
  push32(0x1120bcf5u); f_1120cc40();
  /* 1120bcf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bcf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120bcfb push eax */
  push32((uint32_t)(EAX));
  /* 1120bcfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bcff push ecx */
  push32((uint32_t)(ECX));
  /* 1120bd00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bd03 push edx */
  push32((uint32_t)(EDX));
  /* 1120bd04 call 0x1120bd30 */
  push32(0x1120bd09u); f_1120bd30();
  /* 1120bd09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bd0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120bd0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bd12 push eax */
  push32((uint32_t)(EAX));
  /* 1120bd13 call 0x1120ccd0 */
  push32(0x1120bd18u); f_1120ccd0();
  /* 1120bd18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bd1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1120bd1e:;
  /* 1120bd1e mov esp, ebp */
  ESP = (EBP);
  /* 1120bd20 pop ebp */
  EBP = (pop32());
  /* 1120bd21 ret  */
  ESPCHK(0x1120bca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd30 @ 0x1120bd30 (178 bytes, 56 insns) */
void f_1120bd30(void) {
  FTRACE(0x1120bd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120bd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1120bd31 mov ebp, esp */
  EBP = (ESP);
  /* 1120bd33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bd36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bd39 push eax */
  push32((uint32_t)(EAX));
  /* 1120bd3a call 0x1120cac0 */
  push32(0x1120bd3fu); f_1120cac0();
  /* 1120bd3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bd42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1120bd45 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bd49 jne 0x1120bd5e */
  if (!C.zf) goto L_1120bd5e;
  /* 1120bd4b call 0x1120b420 */
  push32(0x1120bd50u); f_1120b420();
  /* 1120bd50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120bd56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120bd59 jmp 0x1120bdde */
  goto L_1120bdde;
L_1120bd5e:;
  /* 1120bd5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120bd61 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bd62 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bd64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bd67 push edx */
  push32((uint32_t)(EDX));
  /* 1120bd68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120bd6b push eax */
  push32((uint32_t)(EAX));
  /* 1120bd6c call dword ptr [0x112312c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312c4))), 0x1120bd72u);
  /* 1120bd72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120bd75 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bd79 jne 0x1120bd86 */
  if (!C.zf) goto L_1120bd86;
  /* 1120bd7b call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x1120bd81u);
  /* 1120bd81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120bd84 jmp 0x1120bd8d */
  goto L_1120bd8d;
L_1120bd86:;
  /* 1120bd86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1120bd8d:;
  /* 1120bd8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bd91 je 0x1120bda4 */
  if (C.zf) goto L_1120bda4;
  /* 1120bd93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bd96 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bd97 call 0x1120b380 */
  push32(0x1120bd9cu); f_1120b380();
  /* 1120bd9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bd9f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120bda2 jmp 0x1120bdde */
  goto L_1120bdde;
L_1120bda4:;
  /* 1120bda4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bda7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1120bdaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bdad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1120bdb0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120bdb3 mov ecx, dword ptr [edx*4 + 0x11230e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 1120bdba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1120bdbe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1120bdc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bdc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120bdc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bdca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120bdcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120bdd0 mov eax, dword ptr [eax*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120bdd7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1120bddb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1120bdde:;
  /* 1120bdde mov esp, ebp */
  ESP = (EBP);
  /* 1120bde0 pop ebp */
  EBP = (pop32());
  /* 1120bde1 ret  */
  ESPCHK(0x1120bd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdf0 @ 0x1120bdf0 (130 bytes, 43 insns) */
void f_1120bdf0(void) {
  FTRACE(0x1120bdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120bdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120bdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1120bdf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120bdf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bdf7 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bdfd jae 0x1120be21 */
  if (!C.cf) goto L_1120be21;
  /* 1120bdff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120be02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120be05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120be08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120be0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120be0e mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120be15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1120be1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120be1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120be1f jne 0x1120be3c */
  if (!C.zf) goto L_1120be3c;
L_1120be21:;
  /* 1120be21 call 0x1120b420 */
  push32(0x1120be26u); f_1120b420();
  /* 1120be26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120be2c call 0x1120b430 */
  push32(0x1120be31u); f_1120b430();
  /* 1120be31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1120be37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120be3a jmp 0x1120be6e */
  goto L_1120be6e;
L_1120be3c:;
  /* 1120be3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120be3f push edx */
  push32((uint32_t)(EDX));
  /* 1120be40 call 0x1120cc40 */
  push32(0x1120be45u); f_1120cc40();
  /* 1120be45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120be48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120be4b push eax */
  push32((uint32_t)(EAX));
  /* 1120be4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120be4f push ecx */
  push32((uint32_t)(ECX));
  /* 1120be50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120be53 push edx */
  push32((uint32_t)(EDX));
  /* 1120be54 call 0x1120be80 */
  push32(0x1120be59u); f_1120be80();
  /* 1120be59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120be5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120be5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120be62 push eax */
  push32((uint32_t)(EAX));
  /* 1120be63 call 0x1120ccd0 */
  push32(0x1120be68u); f_1120ccd0();
  /* 1120be68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120be6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1120be6e:;
  /* 1120be6e mov esp, ebp */
  ESP = (EBP);
  /* 1120be70 pop ebp */
  EBP = (pop32());
  /* 1120be71 ret  */
  ESPCHK(0x1120bdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x1120be80 (627 bytes, 182 insns) */
void f_1120be80(void) {
  FTRACE(0x1120be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120be80 push ebp */
  push32((uint32_t)(EBP));
  /* 1120be81 mov ebp, esp */
  EBP = (ESP);
  /* 1120be83 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120be89 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1120be90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120be93 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1120be99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120be9d jne 0x1120bea6 */
  if (!C.zf) goto L_1120bea6;
  /* 1120be9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120bea1 jmp 0x1120c0ef */
  goto L_1120c0ef;
L_1120bea6:;
  /* 1120bea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bea9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120beac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120beaf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120beb2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120beb5 mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120bebc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1120bec1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1120bec4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120bec6 je 0x1120bed8 */
  if (C.zf) goto L_1120bed8;
  /* 1120bec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120beca push 0 */
  push32((uint32_t)(0x0u));
  /* 1120becc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120becf push edx */
  push32((uint32_t)(EDX));
  /* 1120bed0 call 0x1120bd30 */
  push32(0x1120bed5u); f_1120bd30();
  /* 1120bed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120bed8:;
  /* 1120bed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bedb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120bede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bee1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120bee4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120bee7 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120beee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1120bef3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1120bef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120befa je 0x1120c00c */
  if (C.zf) goto L_1120c00c;
  /* 1120bf00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120bf03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120bf06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1120bf0d:;
  /* 1120bf0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bf10 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bf13 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bf16 jae 0x1120c00a */
  if (!C.cf) goto L_1120c00a;
  /* 1120bf1c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1120bf22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1120bf25:;
  /* 1120bf25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bf28 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1120bf2e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bf30 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bf36 jge 0x1120bf97 */
  if ((C.sf==C.of)) goto L_1120bf97;
  /* 1120bf38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bf3b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bf3e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bf41 jae 0x1120bf97 */
  if (!C.cf) goto L_1120bf97;
  /* 1120bf43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bf46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1120bf48 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1120bf4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120bf51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bf54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120bf57 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1120bf5e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bf61 jne 0x1120bf81 */
  if (!C.zf) goto L_1120bf81;
  /* 1120bf63 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1120bf69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bf6c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1120bf72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bf75 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1120bf78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bf7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bf7e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1120bf81:;
  /* 1120bf81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bf84 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1120bf8a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1120bf8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bf8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bf92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120bf95 jmp 0x1120bf25 */
  goto L_1120bf25;
L_1120bf97:;
  /* 1120bf97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120bf99 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1120bf9f push edx */
  push32((uint32_t)(EDX));
  /* 1120bfa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bfa3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1120bfa9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bfab push eax */
  push32((uint32_t)(EAX));
  /* 1120bfac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1120bfb2 push edx */
  push32((uint32_t)(EDX));
  /* 1120bfb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bfb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120bfb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120bfbc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120bfbf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120bfc2 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120bfc9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1120bfcc push eax */
  push32((uint32_t)(EAX));
  /* 1120bfcd call dword ptr [0x11231304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231304))), 0x1120bfd3u);
  /* 1120bfd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120bfd5 je 0x1120bffa */
  if (C.zf) goto L_1120bffa;
  /* 1120bfd7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120bfda add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120bfe0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1120bfe3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120bfe6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1120bfec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120bfee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120bff4 jge 0x1120bff8 */
  if ((C.sf==C.of)) goto L_1120bff8;
  /* 1120bff6 jmp 0x1120c00a */
  goto L_1120c00a;
L_1120bff8:;
  /* 1120bff8 jmp 0x1120c005 */
  goto L_1120c005;
L_1120bffa:;
  /* 1120bffa call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x1120c000u);
  /* 1120c000 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1120c003 jmp 0x1120c00a */
  goto L_1120c00a;
L_1120c005:;
  /* 1120c005 jmp 0x1120bf0d */
  goto L_1120bf0d;
L_1120c00a:;
  /* 1120c00a jmp 0x1120c05c */
  goto L_1120c05c;
L_1120c00c:;
  /* 1120c00c push 0 */
  push32((uint32_t)(0x0u));
  /* 1120c00e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1120c014 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c015 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120c018 push edx */
  push32((uint32_t)(EDX));
  /* 1120c019 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c01c push eax */
  push32((uint32_t)(EAX));
  /* 1120c01d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c020 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c026 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120c029 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120c02c mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120c033 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1120c036 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c037 call dword ptr [0x11231304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231304))), 0x1120c03du);
  /* 1120c03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120c03f je 0x1120c053 */
  if (C.zf) goto L_1120c053;
  /* 1120c041 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1120c048 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1120c04e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1120c051 jmp 0x1120c05c */
  goto L_1120c05c;
L_1120c053:;
  /* 1120c053 call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x1120c059u);
  /* 1120c059 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1120c05c:;
  /* 1120c05c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c060 jne 0x1120c0e6 */
  if (!C.zf) goto L_1120c0e6;
  /* 1120c066 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c06a je 0x1120c09a */
  if (C.zf) goto L_1120c09a;
  /* 1120c06c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c070 jne 0x1120c089 */
  if (!C.zf) goto L_1120c089;
  /* 1120c072 call 0x1120b420 */
  push32(0x1120c077u); f_1120b420();
  /* 1120c077 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120c07d call 0x1120b430 */
  push32(0x1120c082u); f_1120b430();
  /* 1120c082 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c085 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1120c087 jmp 0x1120c095 */
  goto L_1120c095;
L_1120c089:;
  /* 1120c089 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c08c push edx */
  push32((uint32_t)(EDX));
  /* 1120c08d call 0x1120b380 */
  push32(0x1120c092u); f_1120b380();
  /* 1120c092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120c095:;
  /* 1120c095 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120c098 jmp 0x1120c0ef */
  goto L_1120c0ef;
L_1120c09a:;
  /* 1120c09a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c09d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120c0a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c0a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120c0a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120c0a9 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120c0b0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1120c0b5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1120c0b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120c0ba je 0x1120c0cb */
  if (C.zf) goto L_1120c0cb;
  /* 1120c0bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c0bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120c0c2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c0c5 jne 0x1120c0cb */
  if (!C.zf) goto L_1120c0cb;
  /* 1120c0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120c0c9 jmp 0x1120c0ef */
  goto L_1120c0ef;
L_1120c0cb:;
  /* 1120c0cb call 0x1120b420 */
  push32(0x1120c0d0u); f_1120b420();
  /* 1120c0d0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1120c0d6 call 0x1120b430 */
  push32(0x1120c0dbu); f_1120b430();
  /* 1120c0db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1120c0e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120c0e4 jmp 0x1120c0ef */
  goto L_1120c0ef;
L_1120c0e6:;
  /* 1120c0e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120c0e9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1120c0ef:;
  /* 1120c0ef mov esp, ebp */
  ESP = (EBP);
  /* 1120c0f1 pop ebp */
  EBP = (pop32());
  /* 1120c0f2 ret  */
  ESPCHK(0x1120be80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c100 @ 0x1120c100 (199 bytes, 68 insns) */
void f_1120c100(void) {
  FTRACE(0x1120c100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c100 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c101 mov ebp, esp */
  EBP = (ESP);
  /* 1120c103 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c104 push ebx */
  push32((uint32_t)(EBX));
  /* 1120c105 push esi */
  push32((uint32_t)(ESI));
  /* 1120c106 push edi */
  push32((uint32_t)(EDI));
L_1120c107:;
  /* 1120c107 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c10b jne 0x1120c12b */
  if (!C.zf) goto L_1120c12b;
  /* 1120c10d push 0x1122af14 */
  push32((uint32_t)(0x1122af14u));
  /* 1120c112 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120c114 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1120c116 push 0x1122afe0 */
  push32((uint32_t)(0x1122afe0u));
  /* 1120c11b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120c11d call 0x11202610 */
  push32(0x1120c122u); f_11202610();
  /* 1120c122 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c125 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c128 jne 0x1120c12b */
  if (!C.zf) goto L_1120c12b;
  /* 1120c12a int3  */
  x86_unimpl("int3 @ 0x1120c12a");
L_1120c12b:;
  /* 1120c12b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120c12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120c12f jne 0x1120c107 */
  if (!C.zf) goto L_1120c107;
  /* 1120c131 mov ecx, dword ptr [0x1122f674] */
  ECX = (r32((uint32_t)(0x1122f674)));
  /* 1120c137 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c13a mov dword ptr [0x1122f674], ecx */
  w32((uint32_t)(0x1122f674), (ECX));
  /* 1120c140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c143 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120c146 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1120c148 push 0x1122afe0 */
  push32((uint32_t)(0x1122afe0u));
  /* 1120c14d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120c14f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1120c154 call 0x11203550 */
  push32(0x1120c159u); f_11203550();
  /* 1120c159 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c15c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c15f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1120c162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c165 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c169 je 0x1120c186 */
  if (C.zf) goto L_1120c186;
  /* 1120c16b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c16e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120c171 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1120c174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c177 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1120c17a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c17d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1120c184 jmp 0x1120c1ab */
  goto L_1120c1ab;
L_1120c186:;
  /* 1120c186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c189 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120c18c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1120c18f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c192 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1120c195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c198 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c19b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c19e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1120c1a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c1a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1120c1ab:;
  /* 1120c1ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c1ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c1b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1120c1b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1120c1b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c1b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1120c1c0 pop edi */
  EDI = (pop32());
  /* 1120c1c1 pop esi */
  ESI = (pop32());
  /* 1120c1c2 pop ebx */
  EBX = (pop32());
  /* 1120c1c3 mov esp, ebp */
  ESP = (EBP);
  /* 1120c1c5 pop ebp */
  EBP = (pop32());
  /* 1120c1c6 ret  */
  ESPCHK(0x1120c100u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1120c1d0 (50 bytes, 17 insns) */
void f_1120c1d0(void) {
  FTRACE(0x1120c1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1120c1d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c1d6 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c1dc jb 0x1120c1e2 */
  if (C.cf) goto L_1120c1e2;
  /* 1120c1de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120c1e0 jmp 0x1120c200 */
  goto L_1120c200;
L_1120c1e2:;
  /* 1120c1e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c1e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c1e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c1eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120c1ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120c1f1 mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120c1f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1120c1fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1120c200:;
  /* 1120c200 pop ebp */
  EBP = (pop32());
  /* 1120c201 ret  */
  ESPCHK(0x1120c1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c210 @ 0x1120c210 (300 bytes, 80 insns) */
void f_1120c210(void) {
  FTRACE(0x1120c210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c210 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c211 mov ebp, esp */
  EBP = (ESP);
  /* 1120c213 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c214 cmp dword ptr [0x11230b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11230b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c21b jne 0x1120c229 */
  if (!C.zf) goto L_1120c229;
  /* 1120c21d mov dword ptr [0x11230b40], 0x200 */
  w32((uint32_t)(0x11230b40), (0x200u));
  /* 1120c227 jmp 0x1120c23c */
  goto L_1120c23c;
L_1120c229:;
  /* 1120c229 cmp dword ptr [0x11230b40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11230b40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c230 jge 0x1120c23c */
  if ((C.sf==C.of)) goto L_1120c23c;
  /* 1120c232 mov dword ptr [0x11230b40], 0x14 */
  w32((uint32_t)(0x11230b40), (0x14u));
L_1120c23c:;
  /* 1120c23c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1120c241 push 0x1122afec */
  push32((uint32_t)(0x1122afecu));
  /* 1120c246 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120c248 push 4 */
  push32((uint32_t)(0x4u));
  /* 1120c24a mov eax, dword ptr [0x11230b40] */
  EAX = (r32((uint32_t)(0x11230b40)));
  /* 1120c24f push eax */
  push32((uint32_t)(EAX));
  /* 1120c250 call 0x11203960 */
  push32(0x1120c255u); f_11203960();
  /* 1120c255 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c258 mov dword ptr [0x1122f7e8], eax */
  w32((uint32_t)(0x1122f7e8), (EAX));
  /* 1120c25d cmp dword ptr [0x1122f7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c264 jne 0x1120c2a5 */
  if (!C.zf) goto L_1120c2a5;
  /* 1120c266 mov dword ptr [0x11230b40], 0x14 */
  w32((uint32_t)(0x11230b40), (0x14u));
  /* 1120c270 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1120c275 push 0x1122afec */
  push32((uint32_t)(0x1122afecu));
  /* 1120c27a push 2 */
  push32((uint32_t)(0x2u));
  /* 1120c27c push 4 */
  push32((uint32_t)(0x4u));
  /* 1120c27e mov ecx, dword ptr [0x11230b40] */
  ECX = (r32((uint32_t)(0x11230b40)));
  /* 1120c284 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c285 call 0x11203960 */
  push32(0x1120c28au); f_11203960();
  /* 1120c28a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c28d mov dword ptr [0x1122f7e8], eax */
  w32((uint32_t)(0x1122f7e8), (EAX));
  /* 1120c292 cmp dword ptr [0x1122f7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c299 jne 0x1120c2a5 */
  if (!C.zf) goto L_1120c2a5;
  /* 1120c29b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1120c29d call 0x112024c0 */
  push32(0x1120c2a2u); f_112024c0();
  /* 1120c2a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120c2a5:;
  /* 1120c2a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120c2ac jmp 0x1120c2b7 */
  goto L_1120c2b7;
L_1120c2ae:;
  /* 1120c2ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c2b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c2b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1120c2b7:;
  /* 1120c2b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c2bb jge 0x1120c2d6 */
  if ((C.sf==C.of)) goto L_1120c2d6;
  /* 1120c2bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c2c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120c2c3 add eax, 0x1122e120 */
  { uint32_t _a=(EAX),_b=(0x1122e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c2c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c2cb mov edx, dword ptr [0x1122f7e8] */
  EDX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120c2d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1120c2d4 jmp 0x1120c2ae */
  goto L_1120c2ae;
L_1120c2d6:;
  /* 1120c2d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120c2dd jmp 0x1120c2e8 */
  goto L_1120c2e8;
L_1120c2df:;
  /* 1120c2df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c2e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c2e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120c2e8:;
  /* 1120c2e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c2ec jge 0x1120c338 */
  if ((C.sf==C.of)) goto L_1120c338;
  /* 1120c2ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c2f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c2f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c2f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120c2fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120c2fd mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120c304 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c308 je 0x1120c326 */
  if (C.zf) goto L_1120c326;
  /* 1120c30a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c30d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c310 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c313 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120c316 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120c319 mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120c320 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c324 jne 0x1120c336 */
  if (!C.zf) goto L_1120c336;
L_1120c326:;
  /* 1120c326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c329 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c32c mov dword ptr [ecx + 0x1122e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1122e130), (0xffffffffu));
L_1120c336:;
  /* 1120c336 jmp 0x1120c2df */
  goto L_1120c2df;
L_1120c338:;
  /* 1120c338 mov esp, ebp */
  ESP = (EBP);
  /* 1120c33a pop ebp */
  EBP = (pop32());
  /* 1120c33b ret  */
  ESPCHK(0x1120c210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c340 @ 0x1120c340 (26 bytes, 9 insns) */
void f_1120c340(void) {
  FTRACE(0x1120c340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c340 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c341 mov ebp, esp */
  EBP = (ESP);
  /* 1120c343 call 0x1120cf40 */
  push32(0x1120c348u); f_1120cf40();
  /* 1120c348 movsx eax, byte ptr [0x1122f48c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1122f48c))));
  /* 1120c34f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120c351 je 0x1120c358 */
  if (C.zf) goto L_1120c358;
  /* 1120c353 call 0x1120cd00 */
  push32(0x1120c358u); f_1120cd00();
L_1120c358:;
  /* 1120c358 pop ebp */
  EBP = (pop32());
  /* 1120c359 ret  */
  ESPCHK(0x1120c340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x1120c360 (61 bytes, 20 insns) */
void f_1120c360(void) {
  FTRACE(0x1120c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c360 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c361 mov ebp, esp */
  EBP = (ESP);
  /* 1120c363 cmp dword ptr [ebp + 8], 0x1122e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1122e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c36a jb 0x1120c38e */
  if (C.cf) goto L_1120c38e;
  /* 1120c36c cmp dword ptr [ebp + 8], 0x1122e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1122e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c373 ja 0x1120c38e */
  if ((!C.cf&&!C.zf)) goto L_1120c38e;
  /* 1120c375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c378 sub eax, 0x1122e120 */
  { uint32_t _a=(EAX),_b=(0x1122e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120c37d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120c380 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c383 push eax */
  push32((uint32_t)(EAX));
  /* 1120c384 call 0x11206f50 */
  push32(0x1120c389u); f_11206f50();
  /* 1120c389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c38c jmp 0x1120c39b */
  goto L_1120c39b;
L_1120c38e:;
  /* 1120c38e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c391 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c394 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c395 call dword ptr [0x11231390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231390))), 0x1120c39bu);
L_1120c39b:;
  /* 1120c39b pop ebp */
  EBP = (pop32());
  /* 1120c39c ret  */
  ESPCHK(0x1120c360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a0 @ 0x1120c3a0 (41 bytes, 16 insns) */
void f_1120c3a0(void) {
  FTRACE(0x1120c3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1120c3a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c3a7 jge 0x1120c3ba */
  if ((C.sf==C.of)) goto L_1120c3ba;
  /* 1120c3a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c3ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c3af push eax */
  push32((uint32_t)(EAX));
  /* 1120c3b0 call 0x11206f50 */
  push32(0x1120c3b5u); f_11206f50();
  /* 1120c3b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c3b8 jmp 0x1120c3c7 */
  goto L_1120c3c7;
L_1120c3ba:;
  /* 1120c3ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c3bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c3c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c3c1 call dword ptr [0x11231390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231390))), 0x1120c3c7u);
L_1120c3c7:;
  /* 1120c3c7 pop ebp */
  EBP = (pop32());
  /* 1120c3c8 ret  */
  ESPCHK(0x1120c3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x1120c3d0 (61 bytes, 20 insns) */
void f_1120c3d0(void) {
  FTRACE(0x1120c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1120c3d3 cmp dword ptr [ebp + 8], 0x1122e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1122e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c3da jb 0x1120c3fe */
  if (C.cf) goto L_1120c3fe;
  /* 1120c3dc cmp dword ptr [ebp + 8], 0x1122e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1122e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c3e3 ja 0x1120c3fe */
  if ((!C.cf&&!C.zf)) goto L_1120c3fe;
  /* 1120c3e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c3e8 sub eax, 0x1122e120 */
  { uint32_t _a=(EAX),_b=(0x1122e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120c3ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120c3f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c3f3 push eax */
  push32((uint32_t)(EAX));
  /* 1120c3f4 call 0x11206ff0 */
  push32(0x1120c3f9u); f_11206ff0();
  /* 1120c3f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c3fc jmp 0x1120c40b */
  goto L_1120c40b;
L_1120c3fe:;
  /* 1120c3fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c401 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c404 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c405 call dword ptr [0x11231394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231394))), 0x1120c40bu);
L_1120c40b:;
  /* 1120c40b pop ebp */
  EBP = (pop32());
  /* 1120c40c ret  */
  ESPCHK(0x1120c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c410 @ 0x1120c410 (41 bytes, 16 insns) */
void f_1120c410(void) {
  FTRACE(0x1120c410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c410 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c411 mov ebp, esp */
  EBP = (ESP);
  /* 1120c413 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c417 jge 0x1120c42a */
  if ((C.sf==C.of)) goto L_1120c42a;
  /* 1120c419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c41c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c41f push eax */
  push32((uint32_t)(EAX));
  /* 1120c420 call 0x11206ff0 */
  push32(0x1120c425u); f_11206ff0();
  /* 1120c425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c428 jmp 0x1120c437 */
  goto L_1120c437;
L_1120c42a:;
  /* 1120c42a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c42d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c430 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c431 call dword ptr [0x11231394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231394))), 0x1120c437u);
L_1120c437:;
  /* 1120c437 pop ebp */
  EBP = (pop32());
  /* 1120c438 ret  */
  ESPCHK(0x1120c410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c440 @ 0x1120c440 (119 bytes, 34 insns) */
void f_1120c440(void) {
  FTRACE(0x1120c440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c440 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c441 mov ebp, esp */
  EBP = (ESP);
  /* 1120c443 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120c446 push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 1120c44b call dword ptr [0x11231318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231318))), 0x1120c451u);
  /* 1120c451 cmp dword ptr [0x1122f7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c458 je 0x1120c478 */
  if (C.zf) goto L_1120c478;
  /* 1120c45a push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 1120c45f call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x1120c465u);
  /* 1120c465 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1120c467 call 0x11206f50 */
  push32(0x1120c46cu); f_11206f50();
  /* 1120c46c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c46f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1120c476 jmp 0x1120c47f */
  goto L_1120c47f;
L_1120c478:;
  /* 1120c478 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1120c47f:;
  /* 1120c47f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1120c483 push eax */
  push32((uint32_t)(EAX));
  /* 1120c484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c487 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c488 call 0x1120c4c0 */
  push32(0x1120c48du); f_1120c4c0();
  /* 1120c48d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c490 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120c493 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c497 je 0x1120c4a5 */
  if (C.zf) goto L_1120c4a5;
  /* 1120c499 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1120c49b call 0x11206ff0 */
  push32(0x1120c4a0u); f_11206ff0();
  /* 1120c4a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c4a3 jmp 0x1120c4b0 */
  goto L_1120c4b0;
L_1120c4a5:;
  /* 1120c4a5 push 0x1122f7e4 */
  push32((uint32_t)(0x1122f7e4u));
  /* 1120c4aa call dword ptr [0x11231308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231308))), 0x1120c4b0u);
L_1120c4b0:;
  /* 1120c4b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120c4b3 mov esp, ebp */
  ESP = (EBP);
  /* 1120c4b5 pop ebp */
  EBP = (pop32());
  /* 1120c4b6 ret  */
  ESPCHK(0x1120c440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c0 @ 0x1120c4c0 (160 bytes, 50 insns) */
void f_1120c4c0(void) {
  FTRACE(0x1120c4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1120c4c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120c4c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c4ca jne 0x1120c4d3 */
  if (!C.zf) goto L_1120c4d3;
  /* 1120c4cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120c4ce jmp 0x1120c55c */
  goto L_1120c55c;
L_1120c4d3:;
  /* 1120c4d3 cmp dword ptr [0x1122f658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c4da jne 0x1120c50a */
  if (!C.zf) goto L_1120c50a;
  /* 1120c4dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c4df and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120c4e4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c4e9 jle 0x1120c4fb */
  if ((C.zf||C.sf!=C.of)) goto L_1120c4fb;
  /* 1120c4eb call 0x1120b420 */
  push32(0x1120c4f0u); f_1120b420();
  /* 1120c4f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1120c4f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120c4f9 jmp 0x1120c55c */
  goto L_1120c55c;
L_1120c4fb:;
  /* 1120c4fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c4fe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1120c501 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1120c503 mov eax, 1 */
  EAX = (0x1u);
  /* 1120c508 jmp 0x1120c55c */
  goto L_1120c55c;
L_1120c50a:;
  /* 1120c50a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120c511 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1120c514 push eax */
  push32((uint32_t)(EAX));
  /* 1120c515 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120c517 mov ecx, dword ptr [0x1122dea4] */
  ECX = (r32((uint32_t)(0x1122dea4)));
  /* 1120c51d push ecx */
  push32((uint32_t)(ECX));
  /* 1120c51e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c521 push edx */
  push32((uint32_t)(EDX));
  /* 1120c522 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120c524 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1120c527 push eax */
  push32((uint32_t)(EAX));
  /* 1120c528 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1120c52d mov ecx, dword ptr [0x1122f668] */
  ECX = (r32((uint32_t)(0x1122f668)));
  /* 1120c533 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c534 call dword ptr [0x11231370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231370))), 0x1120c53au);
  /* 1120c53a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120c53d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c541 je 0x1120c549 */
  if (C.zf) goto L_1120c549;
  /* 1120c543 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c547 je 0x1120c559 */
  if (C.zf) goto L_1120c559;
L_1120c549:;
  /* 1120c549 call 0x1120b420 */
  push32(0x1120c54eu); f_1120b420();
  /* 1120c54e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1120c554 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120c557 jmp 0x1120c55c */
  goto L_1120c55c;
L_1120c559:;
  /* 1120c559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1120c55c:;
  /* 1120c55c mov esp, ebp */
  ESP = (EBP);
  /* 1120c55e pop ebp */
  EBP = (pop32());
  /* 1120c55f ret  */
  ESPCHK(0x1120c4c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1120c560 (32 bytes, 18 insns) */
void f_1120c560(void) {
  FTRACE(0x1120c560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c560 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c561 mov ebp, esp */
  EBP = (ESP);
  /* 1120c563 push ebx */
  push32((uint32_t)(EBX));
  /* 1120c564 push esi */
  push32((uint32_t)(ESI));
  /* 1120c565 push edi */
  push32((uint32_t)(EDI));
  /* 1120c566 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c567 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120c569 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120c56b push 0x1120c578 */
  push32((uint32_t)(0x1120c578u));
  /* 1120c570 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1120c573 call 0x11213cac */
  push32(0x1120c578u); f_11213cac();
  /* 1120c578 pop ebp */
  EBP = (pop32());
  /* 1120c579 pop edi */
  EDI = (pop32());
  /* 1120c57a pop esi */
  ESI = (pop32());
  /* 1120c57b pop ebx */
  EBX = (pop32());
  /* 1120c57c mov esp, ebp */
  ESP = (EBP);
  /* 1120c57e pop ebp */
  EBP = (pop32());
  /* 1120c57f ret  */
  ESPCHK(0x1120c560u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1120c5a2 (104 bytes, 33 insns) */
void f_1120c5a2(void) {
  FTRACE(0x1120c5a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c5a2 push ebx */
  push32((uint32_t)(EBX));
  /* 1120c5a3 push esi */
  push32((uint32_t)(ESI));
  /* 1120c5a4 push edi */
  push32((uint32_t)(EDI));
  /* 1120c5a5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1120c5a9 push eax */
  push32((uint32_t)(EAX));
  /* 1120c5aa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1120c5ac push 0x1120c580 */
  push32((uint32_t)(0x1120c580u));
  /* 1120c5b1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1120c5b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1120c5bf:;
  /* 1120c5bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1120c5c3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1120c5c6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1120c5c9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c5cc je 0x1120c5fc */
  if (C.zf) goto L_1120c5fc;
  /* 1120c5ce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c5d2 je 0x1120c5fc */
  if (C.zf) goto L_1120c5fc;
  /* 1120c5d4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1120c5d7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1120c5da mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1120c5de mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1120c5e1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c5e6 jne 0x1120c5fa */
  if (!C.zf) goto L_1120c5fa;
  /* 1120c5e8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1120c5ed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1120c5f1 call 0x1120c636 */
  push32(0x1120c5f6u); f_1120c636();
  /* 1120c5f6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1120c5fau);
L_1120c5fa:;
  /* 1120c5fa jmp 0x1120c5bf */
  goto L_1120c5bf;
L_1120c5fc:;
  /* 1120c5fc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1120c603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c606 pop edi */
  EDI = (pop32());
  /* 1120c607 pop esi */
  ESI = (pop32());
  /* 1120c608 pop ebx */
  EBX = (pop32());
  /* 1120c609 ret  */
  ESPCHK(0x1120c5a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c636 @ 0x1120c636 (24 bytes, 10 insns) */
void f_1120c636(void) {
  FTRACE(0x1120c636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c636 push ebx */
  push32((uint32_t)(EBX));
  /* 1120c637 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c638 mov ebx, 0x1122e3b8 */
  EBX = (0x1122e3b8u);
  /* 1120c63d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c640 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1120c643 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1120c646 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1120c649 pop ecx */
  ECX = (pop32());
  /* 1120c64a pop ebx */
  EBX = (pop32());
  /* 1120c64b ret 4 */
  ESPCHK(0x1120c636u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c715 @ 0x1120c715 (27 bytes, 11 insns) */
void f_1120c715(void) {
  FTRACE(0x1120c715u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c715 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c716 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1120c71a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1120c71c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1120c71f push eax */
  push32((uint32_t)(EAX));
  /* 1120c720 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1120c723 push eax */
  push32((uint32_t)(EAX));
  /* 1120c724 call 0x1120c5a2 */
  push32(0x1120c729u); f_1120c5a2();
  /* 1120c729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c72c pop ebp */
  EBP = (pop32());
  /* 1120c72d ret 4 */
  ESPCHK(0x1120c715u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c730 @ 0x1120c730 (482 bytes, 138 insns) */
void f_1120c730(void) {
  FTRACE(0x1120c730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c730 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c731 mov ebp, esp */
  EBP = (ESP);
  /* 1120c733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120c736 push esi */
  push32((uint32_t)(ESI));
  /* 1120c737 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1120c73e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1120c740 call 0x11206f50 */
  push32(0x1120c745u); f_11206f50();
  /* 1120c745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c748 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1120c74f jmp 0x1120c75a */
  goto L_1120c75a;
L_1120c751:;
  /* 1120c751 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c754 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c757 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1120c75a:;
  /* 1120c75a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c75e jge 0x1120c900 */
  if ((C.sf==C.of)) goto L_1120c900;
  /* 1120c764 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c767 cmp dword ptr [ecx*4 + 0x11230e40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11230e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c76f je 0x1120c866 */
  if (C.zf) goto L_1120c866;
  /* 1120c775 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c778 mov eax, dword ptr [edx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 1120c77f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120c782 jmp 0x1120c78d */
  goto L_1120c78d;
L_1120c784:;
  /* 1120c784 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c787 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c78a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1120c78d:;
  /* 1120c78d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c790 mov eax, dword ptr [edx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 1120c797 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c79c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c79f jae 0x1120c856 */
  if (!C.cf) goto L_1120c856;
  /* 1120c7a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c7a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1120c7ac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1120c7af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120c7b1 jne 0x1120c851 */
  if (!C.zf) goto L_1120c851;
  /* 1120c7b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c7ba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c7be jne 0x1120c7f9 */
  if (!C.zf) goto L_1120c7f9;
  /* 1120c7c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1120c7c2 call 0x11206f50 */
  push32(0x1120c7c7u); f_11206f50();
  /* 1120c7c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c7ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c7cd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c7d1 jne 0x1120c7ef */
  if (!C.zf) goto L_1120c7ef;
  /* 1120c7d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c7d6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c7d9 push edx */
  push32((uint32_t)(EDX));
  /* 1120c7da call dword ptr [0x1123138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123138c))), 0x1120c7e0u);
  /* 1120c7e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c7e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1120c7e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c7e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c7ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1120c7ef:;
  /* 1120c7ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1120c7f1 call 0x11206ff0 */
  push32(0x1120c7f6u); f_11206ff0();
  /* 1120c7f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120c7f9:;
  /* 1120c7f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c7fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c7ff push eax */
  push32((uint32_t)(EAX));
  /* 1120c800 call dword ptr [0x11231390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231390))), 0x1120c806u);
  /* 1120c806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c809 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1120c80d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1120c810 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120c812 je 0x1120c826 */
  if (C.zf) goto L_1120c826;
  /* 1120c814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c817 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c81a push eax */
  push32((uint32_t)(EAX));
  /* 1120c81b call dword ptr [0x11231394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231394))), 0x1120c821u);
  /* 1120c821 jmp 0x1120c784 */
  goto L_1120c784;
L_1120c826:;
  /* 1120c826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c829 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1120c82f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c832 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c835 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c83b sub eax, dword ptr [edx*4 + 0x11230e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11230e40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120c842 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120c843 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1120c848 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1120c84a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c84c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120c84f jmp 0x1120c856 */
  goto L_1120c856;
L_1120c851:;
  /* 1120c851 jmp 0x1120c784 */
  goto L_1120c784;
L_1120c856:;
  /* 1120c856 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c85a je 0x1120c861 */
  if (C.zf) goto L_1120c861;
  /* 1120c85c jmp 0x1120c900 */
  goto L_1120c900;
L_1120c861:;
  /* 1120c861 jmp 0x1120c8fb */
  goto L_1120c8fb;
L_1120c866:;
  /* 1120c866 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1120c868 push 0x1122aff4 */
  push32((uint32_t)(0x1122aff4u));
  /* 1120c86d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120c86f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1120c874 call 0x11203550 */
  push32(0x1120c879u); f_11203550();
  /* 1120c879 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c87c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120c87f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c883 je 0x1120c8f9 */
  if (C.zf) goto L_1120c8f9;
  /* 1120c885 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c88b mov dword ptr [eax*4 + 0x11230e40], ecx */
  w32((uint32_t)(EAX*4 + 0x11230e40), (ECX));
  /* 1120c892 mov edx, dword ptr [0x11230f7c] */
  EDX = (r32((uint32_t)(0x11230f7c)));
  /* 1120c898 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c89b mov dword ptr [0x11230f7c], edx */
  w32((uint32_t)(0x11230f7c), (EDX));
  /* 1120c8a1 jmp 0x1120c8ac */
  goto L_1120c8ac;
L_1120c8a3:;
  /* 1120c8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c8a6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c8a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120c8ac:;
  /* 1120c8ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c8af mov edx, dword ptr [ecx*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120c8b6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c8bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c8bf jae 0x1120c8e4 */
  if (!C.cf) goto L_1120c8e4;
  /* 1120c8c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c8c4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1120c8c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c8cb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1120c8d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c8d4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1120c8d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120c8db mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1120c8e2 jmp 0x1120c8a3 */
  goto L_1120c8a3;
L_1120c8e4:;
  /* 1120c8e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120c8e7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c8ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120c8ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120c8f0 push edx */
  push32((uint32_t)(EDX));
  /* 1120c8f1 call 0x1120cc40 */
  push32(0x1120c8f6u); f_1120cc40();
  /* 1120c8f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120c8f9:;
  /* 1120c8f9 jmp 0x1120c900 */
  goto L_1120c900;
L_1120c8fb:;
  /* 1120c8fb jmp 0x1120c751 */
  goto L_1120c751;
L_1120c900:;
  /* 1120c900 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1120c902 call 0x11206ff0 */
  push32(0x1120c907u); f_11206ff0();
  /* 1120c907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120c90a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120c90d pop esi */
  ESI = (pop32());
  /* 1120c90e mov esp, ebp */
  ESP = (EBP);
  /* 1120c910 pop ebp */
  EBP = (pop32());
  /* 1120c911 ret  */
  ESPCHK(0x1120c730u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1120c920 (183 bytes, 57 insns) */
void f_1120c920(void) {
  FTRACE(0x1120c920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c920 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c921 mov ebp, esp */
  EBP = (ESP);
  /* 1120c923 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c927 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c92d jae 0x1120c9ba */
  if (!C.cf) goto L_1120c9ba;
  /* 1120c933 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c936 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c93c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120c93f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120c942 mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120c949 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c94d jne 0x1120c9ba */
  if (!C.zf) goto L_1120c9ba;
  /* 1120c94f cmp dword ptr [0x1122f44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c956 jne 0x1120c99a */
  if (!C.zf) goto L_1120c99a;
  /* 1120c958 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c95b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120c95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c962 je 0x1120c972 */
  if (C.zf) goto L_1120c972;
  /* 1120c964 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c968 je 0x1120c980 */
  if (C.zf) goto L_1120c980;
  /* 1120c96a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c96e je 0x1120c98e */
  if (C.zf) goto L_1120c98e;
  /* 1120c970 jmp 0x1120c99a */
  goto L_1120c99a;
L_1120c972:;
  /* 1120c972 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c975 push edx */
  push32((uint32_t)(EDX));
  /* 1120c976 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1120c978 call dword ptr [0x112312bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312bc))), 0x1120c97eu);
  /* 1120c97e jmp 0x1120c99a */
  goto L_1120c99a;
L_1120c980:;
  /* 1120c980 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c983 push eax */
  push32((uint32_t)(EAX));
  /* 1120c984 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1120c986 call dword ptr [0x112312bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312bc))), 0x1120c98cu);
  /* 1120c98c jmp 0x1120c99a */
  goto L_1120c99a;
L_1120c98e:;
  /* 1120c98e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c991 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c992 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1120c994 call dword ptr [0x112312bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312bc))), 0x1120c99au);
L_1120c99a:;
  /* 1120c99a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c99d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1120c9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c9a3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1120c9a6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120c9a9 mov ecx, dword ptr [edx*4 + 0x11230e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 1120c9b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120c9b3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1120c9b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120c9b8 jmp 0x1120c9d3 */
  goto L_1120c9d3;
L_1120c9ba:;
  /* 1120c9ba call 0x1120b420 */
  push32(0x1120c9bfu); f_1120b420();
  /* 1120c9bf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120c9c5 call 0x1120b430 */
  push32(0x1120c9cau); f_1120b430();
  /* 1120c9ca mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1120c9d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1120c9d3:;
  /* 1120c9d3 mov esp, ebp */
  ESP = (EBP);
  /* 1120c9d5 pop ebp */
  EBP = (pop32());
  /* 1120c9d6 ret  */
  ESPCHK(0x1120c920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9e0 @ 0x1120c9e0 (216 bytes, 63 insns) */
void f_1120c9e0(void) {
  FTRACE(0x1120c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1120c9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120c9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c9e7 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120c9ed jae 0x1120ca9b */
  if (!C.cf) goto L_1120ca9b;
  /* 1120c9f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c9f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120c9f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120c9fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120c9ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ca02 mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120ca09 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1120ca0e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120ca11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120ca13 je 0x1120ca9b */
  if (C.zf) goto L_1120ca9b;
  /* 1120ca19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ca1c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1120ca1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ca22 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1120ca25 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ca28 mov ecx, dword ptr [edx*4 + 0x11230e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 1120ca2f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ca33 je 0x1120ca9b */
  if (C.zf) goto L_1120ca9b;
  /* 1120ca35 cmp dword ptr [0x1122f44c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122f44c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ca3c jne 0x1120ca7a */
  if (!C.zf) goto L_1120ca7a;
  /* 1120ca3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ca41 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120ca44 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ca48 je 0x1120ca58 */
  if (C.zf) goto L_1120ca58;
  /* 1120ca4a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ca4e je 0x1120ca64 */
  if (C.zf) goto L_1120ca64;
  /* 1120ca50 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ca54 je 0x1120ca70 */
  if (C.zf) goto L_1120ca70;
  /* 1120ca56 jmp 0x1120ca7a */
  goto L_1120ca7a;
L_1120ca58:;
  /* 1120ca58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ca5a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1120ca5c call dword ptr [0x112312bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312bc))), 0x1120ca62u);
  /* 1120ca62 jmp 0x1120ca7a */
  goto L_1120ca7a;
L_1120ca64:;
  /* 1120ca64 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ca66 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1120ca68 call dword ptr [0x112312bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312bc))), 0x1120ca6eu);
  /* 1120ca6e jmp 0x1120ca7a */
  goto L_1120ca7a;
L_1120ca70:;
  /* 1120ca70 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ca72 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1120ca74 call dword ptr [0x112312bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312bc))), 0x1120ca7au);
L_1120ca7a:;
  /* 1120ca7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ca7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120ca80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ca83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120ca86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ca89 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120ca90 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1120ca97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120ca99 jmp 0x1120cab4 */
  goto L_1120cab4;
L_1120ca9b:;
  /* 1120ca9b call 0x1120b420 */
  push32(0x1120caa0u); f_1120b420();
  /* 1120caa0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120caa6 call 0x1120b430 */
  push32(0x1120caabu); f_1120b430();
  /* 1120caab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1120cab1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1120cab4:;
  /* 1120cab4 mov esp, ebp */
  ESP = (EBP);
  /* 1120cab6 pop ebp */
  EBP = (pop32());
  /* 1120cab7 ret  */
  ESPCHK(0x1120c9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cac0 @ 0x1120cac0 (102 bytes, 30 insns) */
void f_1120cac0(void) {
  FTRACE(0x1120cac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120cac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120cac1 mov ebp, esp */
  EBP = (ESP);
  /* 1120cac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cac6 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cacc jae 0x1120cb0b */
  if (!C.cf) goto L_1120cb0b;
  /* 1120cace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cad1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120cad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cad7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120cada imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120cadd mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120cae4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1120cae9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120caec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120caee je 0x1120cb0b */
  if (C.zf) goto L_1120cb0b;
  /* 1120caf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120caf3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1120caf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120caf9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1120cafc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120caff mov ecx, dword ptr [edx*4 + 0x11230e40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11230e40)));
  /* 1120cb06 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1120cb09 jmp 0x1120cb24 */
  goto L_1120cb24;
L_1120cb0b:;
  /* 1120cb0b call 0x1120b420 */
  push32(0x1120cb10u); f_1120b420();
  /* 1120cb10 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120cb16 call 0x1120b430 */
  push32(0x1120cb1bu); f_1120b430();
  /* 1120cb1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1120cb21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1120cb24:;
  /* 1120cb24 pop ebp */
  EBP = (pop32());
  /* 1120cb25 ret  */
  ESPCHK(0x1120cac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb30 @ 0x1120cb30 (260 bytes, 83 insns) */
void f_1120cb30(void) {
  FTRACE(0x1120cb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120cb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1120cb31 mov ebp, esp */
  EBP = (ESP);
  /* 1120cb33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120cb36 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1120cb3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120cb3d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1120cb40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120cb42 je 0x1120cb4d */
  if (C.zf) goto L_1120cb4d;
  /* 1120cb44 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1120cb47 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1120cb4a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1120cb4d:;
  /* 1120cb4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120cb50 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1120cb56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120cb58 je 0x1120cb62 */
  if (C.zf) goto L_1120cb62;
  /* 1120cb5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1120cb5d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1120cb5f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1120cb62:;
  /* 1120cb62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120cb65 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1120cb6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120cb6d je 0x1120cb78 */
  if (C.zf) goto L_1120cb78;
  /* 1120cb6f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1120cb72 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1120cb75 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1120cb78:;
  /* 1120cb78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cb7b push eax */
  push32((uint32_t)(EAX));
  /* 1120cb7c call dword ptr [0x11231350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231350))), 0x1120cb82u);
  /* 1120cb82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120cb85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cb89 jne 0x1120cba2 */
  if (!C.zf) goto L_1120cba2;
  /* 1120cb8b call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x1120cb91u);
  /* 1120cb91 push eax */
  push32((uint32_t)(EAX));
  /* 1120cb92 call 0x1120b380 */
  push32(0x1120cb97u); f_1120b380();
  /* 1120cb97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cb9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120cb9d jmp 0x1120cc30 */
  goto L_1120cc30;
L_1120cba2:;
  /* 1120cba2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cba6 jne 0x1120cbb3 */
  if (!C.zf) goto L_1120cbb3;
  /* 1120cba8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1120cbab or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1120cbae mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1120cbb1 jmp 0x1120cbc2 */
  goto L_1120cbc2;
L_1120cbb3:;
  /* 1120cbb3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cbb7 jne 0x1120cbc2 */
  if (!C.zf) goto L_1120cbc2;
  /* 1120cbb9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1120cbbc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1120cbbf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1120cbc2:;
  /* 1120cbc2 call 0x1120c730 */
  push32(0x1120cbc7u); f_1120c730();
  /* 1120cbc7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120cbca cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cbce jne 0x1120cbeb */
  if (!C.zf) goto L_1120cbeb;
  /* 1120cbd0 call 0x1120b420 */
  push32(0x1120cbd5u); f_1120b420();
  /* 1120cbd5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1120cbdb call 0x1120b430 */
  push32(0x1120cbe0u); f_1120b430();
  /* 1120cbe0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1120cbe6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120cbe9 jmp 0x1120cc30 */
  goto L_1120cc30;
L_1120cbeb:;
  /* 1120cbeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cbee push eax */
  push32((uint32_t)(EAX));
  /* 1120cbef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cbf2 push ecx */
  push32((uint32_t)(ECX));
  /* 1120cbf3 call 0x1120c920 */
  push32(0x1120cbf8u); f_1120c920();
  /* 1120cbf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cbfb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1120cbfe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1120cc01 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1120cc04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cc07 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120cc0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cc0d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120cc10 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120cc13 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120cc1a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1120cc1d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1120cc21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cc24 push ecx */
  push32((uint32_t)(ECX));
  /* 1120cc25 call 0x1120ccd0 */
  push32(0x1120cc2au); f_1120ccd0();
  /* 1120cc2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cc2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1120cc30:;
  /* 1120cc30 mov esp, ebp */
  ESP = (EBP);
  /* 1120cc32 pop ebp */
  EBP = (pop32());
  /* 1120cc33 ret  */
  ESPCHK(0x1120cb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc40 @ 0x1120cc40 (134 bytes, 44 insns) */
void f_1120cc40(void) {
  FTRACE(0x1120cc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120cc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1120cc41 mov ebp, esp */
  EBP = (ESP);
  /* 1120cc43 push ecx */
  push32((uint32_t)(ECX));
  /* 1120cc44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cc47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120cc4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cc4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120cc50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120cc53 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120cc5a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cc5c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1120cc5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cc62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cc66 jne 0x1120cca1 */
  if (!C.zf) goto L_1120cca1;
  /* 1120cc68 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1120cc6a call 0x11206f50 */
  push32(0x1120cc6fu); f_11206f50();
  /* 1120cc6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cc72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cc75 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cc79 jne 0x1120cc97 */
  if (!C.zf) goto L_1120cc97;
  /* 1120cc7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cc7e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cc81 push edx */
  push32((uint32_t)(EDX));
  /* 1120cc82 call dword ptr [0x1123138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123138c))), 0x1120cc88u);
  /* 1120cc88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cc8b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1120cc8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cc91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cc94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1120cc97:;
  /* 1120cc97 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1120cc99 call 0x11206ff0 */
  push32(0x1120cc9eu); f_11206ff0();
  /* 1120cc9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120cca1:;
  /* 1120cca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cca4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120cca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ccaa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120ccad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ccb0 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120ccb7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1120ccbb push eax */
  push32((uint32_t)(EAX));
  /* 1120ccbc call dword ptr [0x11231390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231390))), 0x1120ccc2u);
  /* 1120ccc2 mov esp, ebp */
  ESP = (EBP);
  /* 1120ccc4 pop ebp */
  EBP = (pop32());
  /* 1120ccc5 ret  */
  ESPCHK(0x1120cc40u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1120ccd0 (38 bytes, 13 insns) */
void f_1120ccd0(void) {
  FTRACE(0x1120ccd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120ccd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120ccd1 mov ebp, esp */
  EBP = (ESP);
  /* 1120ccd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ccd6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120ccd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ccdc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120ccdf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120cce2 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120cce9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1120cced push eax */
  push32((uint32_t)(EAX));
  /* 1120ccee call dword ptr [0x11231394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231394))), 0x1120ccf4u);
  /* 1120ccf4 pop ebp */
  EBP = (pop32());
  /* 1120ccf5 ret  */
  ESPCHK(0x1120ccd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x1120cd00 (218 bytes, 63 insns) */
void f_1120cd00(void) {
  FTRACE(0x1120cd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120cd00 push ebp */
  push32((uint32_t)(EBP));
  /* 1120cd01 mov ebp, esp */
  EBP = (ESP);
  /* 1120cd03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120cd06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120cd0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120cd0f call 0x11206f50 */
  push32(0x1120cd14u); f_11206f50();
  /* 1120cd14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cd17 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1120cd1e jmp 0x1120cd29 */
  goto L_1120cd29;
L_1120cd20:;
  /* 1120cd20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cd23 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cd26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1120cd29:;
  /* 1120cd29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cd2c cmp ecx, dword ptr [0x11230b40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cd32 jge 0x1120cdc9 */
  if ((C.sf==C.of)) goto L_1120cdc9;
  /* 1120cd38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cd3b mov eax, dword ptr [0x1122f7e8] */
  EAX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cd40 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cd44 je 0x1120cdc4 */
  if (C.zf) goto L_1120cdc4;
  /* 1120cd46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cd49 mov edx, dword ptr [0x1122f7e8] */
  EDX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cd4f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1120cd52 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120cd55 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1120cd5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120cd5d je 0x1120cd81 */
  if (C.zf) goto L_1120cd81;
  /* 1120cd5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cd62 mov eax, dword ptr [0x1122f7e8] */
  EAX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cd67 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1120cd6a push ecx */
  push32((uint32_t)(ECX));
  /* 1120cd6b call 0x1120daf0 */
  push32(0x1120cd70u); f_1120daf0();
  /* 1120cd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cd73 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cd76 je 0x1120cd81 */
  if (C.zf) goto L_1120cd81;
  /* 1120cd78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cd7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cd7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1120cd81:;
  /* 1120cd81 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cd85 jl 0x1120cdc4 */
  if ((C.sf!=C.of)) goto L_1120cdc4;
  /* 1120cd87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cd8a mov ecx, dword ptr [0x1122f7e8] */
  ECX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cd90 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1120cd93 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cd96 push edx */
  push32((uint32_t)(EDX));
  /* 1120cd97 call dword ptr [0x11231358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231358))), 0x1120cd9du);
  /* 1120cd9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120cd9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cda2 mov ecx, dword ptr [0x1122f7e8] */
  ECX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cda8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1120cdab push edx */
  push32((uint32_t)(EDX));
  /* 1120cdac call 0x11203fe0 */
  push32(0x1120cdb1u); f_11203fe0();
  /* 1120cdb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cdb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cdb7 mov ecx, dword ptr [0x1122f7e8] */
  ECX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cdbd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1120cdc4:;
  /* 1120cdc4 jmp 0x1120cd20 */
  goto L_1120cd20;
L_1120cdc9:;
  /* 1120cdc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120cdcb call 0x11206ff0 */
  push32(0x1120cdd0u); f_11206ff0();
  /* 1120cdd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cdd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cdd6 mov esp, ebp */
  ESP = (EBP);
  /* 1120cdd8 pop ebp */
  EBP = (pop32());
  /* 1120cdd9 ret  */
  ESPCHK(0x1120cd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cde0 @ 0x1120cde0 (68 bytes, 26 insns) */
void f_1120cde0(void) {
  FTRACE(0x1120cde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120cde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120cde1 mov ebp, esp */
  EBP = (ESP);
  /* 1120cde3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120cde4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cde8 jne 0x1120cdf6 */
  if (!C.zf) goto L_1120cdf6;
  /* 1120cdea push 0 */
  push32((uint32_t)(0x0u));
  /* 1120cdec call 0x1120cf50 */
  push32(0x1120cdf1u); f_1120cf50();
  /* 1120cdf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cdf4 jmp 0x1120ce20 */
  goto L_1120ce20;
L_1120cdf6:;
  /* 1120cdf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120cdf9 push eax */
  push32((uint32_t)(EAX));
  /* 1120cdfa call 0x1120c360 */
  push32(0x1120cdffu); f_1120c360();
  /* 1120cdff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ce02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ce05 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ce06 call 0x1120ce30 */
  push32(0x1120ce0bu); f_1120ce30();
  /* 1120ce0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ce0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120ce11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ce14 push edx */
  push32((uint32_t)(EDX));
  /* 1120ce15 call 0x1120c3d0 */
  push32(0x1120ce1au); f_1120c3d0();
  /* 1120ce1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ce1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1120ce20:;
  /* 1120ce20 mov esp, ebp */
  ESP = (EBP);
  /* 1120ce22 pop ebp */
  EBP = (pop32());
  /* 1120ce23 ret  */
  ESPCHK(0x1120cde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce30 @ 0x1120ce30 (65 bytes, 26 insns) */
void f_1120ce30(void) {
  FTRACE(0x1120ce30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120ce30 push ebp */
  push32((uint32_t)(EBP));
  /* 1120ce31 mov ebp, esp */
  EBP = (ESP);
  /* 1120ce33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ce36 push eax */
  push32((uint32_t)(EAX));
  /* 1120ce37 call 0x1120ce80 */
  push32(0x1120ce3cu); f_1120ce80();
  /* 1120ce3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ce3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ce41 je 0x1120ce48 */
  if (C.zf) goto L_1120ce48;
  /* 1120ce43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120ce46 jmp 0x1120ce6f */
  goto L_1120ce6f;
L_1120ce48:;
  /* 1120ce48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ce4b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120ce4e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1120ce54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120ce56 je 0x1120ce6d */
  if (C.zf) goto L_1120ce6d;
  /* 1120ce58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ce5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1120ce5e push ecx */
  push32((uint32_t)(ECX));
  /* 1120ce5f call 0x1120dc40 */
  push32(0x1120ce64u); f_1120dc40();
  /* 1120ce64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ce67 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120ce69 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ce6b jmp 0x1120ce6f */
  goto L_1120ce6f;
L_1120ce6d:;
  /* 1120ce6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120ce6f:;
  /* 1120ce6f pop ebp */
  EBP = (pop32());
  /* 1120ce70 ret  */
  ESPCHK(0x1120ce30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x1120ce80 (183 bytes, 62 insns) */
void f_1120ce80(void) {
  FTRACE(0x1120ce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120ce80 push ebp */
  push32((uint32_t)(EBP));
  /* 1120ce81 mov ebp, esp */
  EBP = (ESP);
  /* 1120ce83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ce86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120ce8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ce90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120ce93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ce96 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120ce99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1120ce9c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ce9f jne 0x1120cf1b */
  if (!C.zf) goto L_1120cf1b;
  /* 1120cea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cea4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120cea7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1120cead test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120ceaf je 0x1120cf1b */
  if (C.zf) goto L_1120cf1b;
  /* 1120ceb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ceb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ceb7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1120ceb9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120cebc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120cebf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cec3 jle 0x1120cf1b */
  if ((C.zf||C.sf!=C.of)) goto L_1120cf1b;
  /* 1120cec5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cec8 push edx */
  push32((uint32_t)(EDX));
  /* 1120cec9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cecc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1120cecf push ecx */
  push32((uint32_t)(ECX));
  /* 1120ced0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ced3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1120ced6 push eax */
  push32((uint32_t)(EAX));
  /* 1120ced7 call 0x1120bdf0 */
  push32(0x1120cedcu); f_1120bdf0();
  /* 1120cedc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cedf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cee2 jne 0x1120cf05 */
  if (!C.zf) goto L_1120cf05;
  /* 1120cee4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cee7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120ceea and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1120cef0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120cef2 je 0x1120cf03 */
  if (C.zf) goto L_1120cf03;
  /* 1120cef4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cef7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120cefa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1120cefd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cf00 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1120cf03:;
  /* 1120cf03 jmp 0x1120cf1b */
  goto L_1120cf1b;
L_1120cf05:;
  /* 1120cf05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cf08 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120cf0b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1120cf0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cf11 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1120cf14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1120cf1b:;
  /* 1120cf1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cf1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cf21 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1120cf24 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1120cf26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120cf29 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1120cf30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120cf33 mov esp, ebp */
  ESP = (EBP);
  /* 1120cf35 pop ebp */
  EBP = (pop32());
  /* 1120cf36 ret  */
  ESPCHK(0x1120ce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x1120cf40 (15 bytes, 7 insns) */
void f_1120cf40(void) {
  FTRACE(0x1120cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1120cf41 mov ebp, esp */
  EBP = (ESP);
  /* 1120cf43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120cf45 call 0x1120cf50 */
  push32(0x1120cf4au); f_1120cf50();
  /* 1120cf4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cf4d pop ebp */
  EBP = (pop32());
  /* 1120cf4e ret  */
  ESPCHK(0x1120cf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf50 @ 0x1120cf50 (319 bytes, 94 insns) */
void f_1120cf50(void) {
  FTRACE(0x1120cf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120cf50 push ebp */
  push32((uint32_t)(EBP));
  /* 1120cf51 mov ebp, esp */
  EBP = (ESP);
  /* 1120cf53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120cf56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120cf5d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120cf64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120cf66 call 0x11206f50 */
  push32(0x1120cf6bu); f_11206f50();
  /* 1120cf6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cf6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1120cf75 jmp 0x1120cf80 */
  goto L_1120cf80;
L_1120cf77:;
  /* 1120cf77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cf7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cf7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1120cf80:;
  /* 1120cf80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cf83 cmp ecx, dword ptr [0x11230b40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11230b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cf89 jge 0x1120d073 */
  if ((C.sf==C.of)) goto L_1120d073;
  /* 1120cf8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cf92 mov eax, dword ptr [0x1122f7e8] */
  EAX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cf97 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cf9b je 0x1120d06e */
  if (C.zf) goto L_1120d06e;
  /* 1120cfa1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cfa4 mov edx, dword ptr [0x1122f7e8] */
  EDX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cfaa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1120cfad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1120cfb0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1120cfb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120cfb8 je 0x1120d06e */
  if (C.zf) goto L_1120d06e;
  /* 1120cfbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cfc1 mov eax, dword ptr [0x1122f7e8] */
  EAX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cfc6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1120cfc9 push ecx */
  push32((uint32_t)(ECX));
  /* 1120cfca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cfcd push edx */
  push32((uint32_t)(EDX));
  /* 1120cfce call 0x1120c3a0 */
  push32(0x1120cfd3u); f_1120c3a0();
  /* 1120cfd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120cfd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cfd9 mov ecx, dword ptr [0x1122f7e8] */
  ECX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cfdf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1120cfe2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1120cfe5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1120cfea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120cfec je 0x1120d055 */
  if (C.zf) goto L_1120d055;
  /* 1120cfee cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120cff2 jne 0x1120d019 */
  if (!C.zf) goto L_1120d019;
  /* 1120cff4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120cff7 mov edx, dword ptr [0x1122f7e8] */
  EDX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120cffd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1120d000 push eax */
  push32((uint32_t)(EAX));
  /* 1120d001 call 0x1120ce30 */
  push32(0x1120d006u); f_1120ce30();
  /* 1120d006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d009 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d00c je 0x1120d017 */
  if (C.zf) goto L_1120d017;
  /* 1120d00e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d011 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d014 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1120d017:;
  /* 1120d017 jmp 0x1120d055 */
  goto L_1120d055;
L_1120d019:;
  /* 1120d019 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d01d jne 0x1120d055 */
  if (!C.zf) goto L_1120d055;
  /* 1120d01f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d022 mov eax, dword ptr [0x1122f7e8] */
  EAX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120d027 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1120d02a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120d02d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1120d030 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120d032 je 0x1120d055 */
  if (C.zf) goto L_1120d055;
  /* 1120d034 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d037 mov ecx, dword ptr [0x1122f7e8] */
  ECX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120d03d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1120d040 push edx */
  push32((uint32_t)(EDX));
  /* 1120d041 call 0x1120ce30 */
  push32(0x1120d046u); f_1120ce30();
  /* 1120d046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d049 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d04c jne 0x1120d055 */
  if (!C.zf) goto L_1120d055;
  /* 1120d04e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1120d055:;
  /* 1120d055 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d058 mov ecx, dword ptr [0x1122f7e8] */
  ECX = (r32((uint32_t)(0x1122f7e8)));
  /* 1120d05e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1120d061 push edx */
  push32((uint32_t)(EDX));
  /* 1120d062 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d065 push eax */
  push32((uint32_t)(EAX));
  /* 1120d066 call 0x1120c410 */
  push32(0x1120d06bu); f_1120c410();
  /* 1120d06b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120d06e:;
  /* 1120d06e jmp 0x1120cf77 */
  goto L_1120cf77;
L_1120d073:;
  /* 1120d073 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d075 call 0x11206ff0 */
  push32(0x1120d07au); f_11206ff0();
  /* 1120d07a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d07d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d081 jne 0x1120d088 */
  if (!C.zf) goto L_1120d088;
  /* 1120d083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d086 jmp 0x1120d08b */
  goto L_1120d08b;
L_1120d088:;
  /* 1120d088 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1120d08b:;
  /* 1120d08b mov esp, ebp */
  ESP = (EBP);
  /* 1120d08d pop ebp */
  EBP = (pop32());
  /* 1120d08e ret  */
  ESPCHK(0x1120cf50u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1120d090 (15 bytes, 7 insns) */
void f_1120d090(void) {
  FTRACE(0x1120d090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d090 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d091 mov ebp, esp */
  EBP = (ESP);
  /* 1120d093 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d095 call 0x112024c0 */
  push32(0x1120d09au); f_112024c0();
  /* 1120d09a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d09d pop ebp */
  EBP = (pop32());
  /* 1120d09e ret  */
  ESPCHK(0x1120d090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x1120d0a0 (1007 bytes, 269 insns) */
void f_1120d0a0(void) {
  FTRACE(0x1120d0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1120d0a3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d0a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d0ad jl 0x1120d0b5 */
  if ((C.sf!=C.of)) goto L_1120d0b5;
  /* 1120d0af cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d0b3 jle 0x1120d0bc */
  if ((C.zf||C.sf!=C.of)) goto L_1120d0bc;
L_1120d0b5:;
  /* 1120d0b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d0b7 jmp 0x1120d48b */
  goto L_1120d48b;
L_1120d0bc:;
  /* 1120d0bc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1120d0be call 0x11206f50 */
  push32(0x1120d0c3u); f_11206f50();
  /* 1120d0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d0c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1120d0cd mov eax, dword ptr [0x1122f7d4] */
  EAX = (r32((uint32_t)(0x1122f7d4)));
  /* 1120d0d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d0d5 mov dword ptr [0x1122f7d4], eax */
  w32((uint32_t)(0x1122f7d4), (EAX));
L_1120d0da:;
  /* 1120d0da cmp dword ptr [0x1122f7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d0e1 je 0x1120d0ed */
  if (C.zf) goto L_1120d0ed;
  /* 1120d0e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120d0e5 call dword ptr [0x112312b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312b8))), 0x1120d0ebu);
  /* 1120d0eb jmp 0x1120d0da */
  goto L_1120d0da;
L_1120d0ed:;
  /* 1120d0ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d0f1 je 0x1120d131 */
  if (C.zf) goto L_1120d131;
  /* 1120d0f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d0f7 je 0x1120d111 */
  if (C.zf) goto L_1120d111;
  /* 1120d0f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d0fc push ecx */
  push32((uint32_t)(ECX));
  /* 1120d0fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d100 push edx */
  push32((uint32_t)(EDX));
  /* 1120d101 call 0x1120d490 */
  push32(0x1120d106u); f_1120d490();
  /* 1120d106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d109 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1120d10f jmp 0x1120d123 */
  goto L_1120d123;
L_1120d111:;
  /* 1120d111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d114 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d117 mov ecx, dword ptr [eax + 0x1122e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1122e4dc)));
  /* 1120d11d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1120d123:;
  /* 1120d123 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1120d129 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1120d12c jmp 0x1120d46b */
  goto L_1120d46b;
L_1120d131:;
  /* 1120d131 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1120d138 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1120d13f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d143 je 0x1120d463 */
  if (C.zf) goto L_1120d463;
  /* 1120d149 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d14c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120d14f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d152 jne 0x1120d374 */
  if (!C.zf) goto L_1120d374;
  /* 1120d158 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d15b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1120d15f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d162 jne 0x1120d374 */
  if (!C.zf) goto L_1120d374;
  /* 1120d168 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d16b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1120d16f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d172 jne 0x1120d374 */
  if (!C.zf) goto L_1120d374;
  /* 1120d178 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d17b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1120d181:;
  /* 1120d181 push 0x1122b044 */
  push32((uint32_t)(0x1122b044u));
  /* 1120d186 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1120d18c push ecx */
  push32((uint32_t)(ECX));
  /* 1120d18d call 0x1120f2f0 */
  push32(0x1120d192u); f_1120f2f0();
  /* 1120d192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d195 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1120d19b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d1a2 je 0x1120d1cd */
  if (C.zf) goto L_1120d1cd;
  /* 1120d1a4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d1aa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d1b0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1120d1b6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d1bd je 0x1120d1cd */
  if (C.zf) goto L_1120d1cd;
  /* 1120d1bf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d1c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120d1c8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d1cb jne 0x1120d1f3 */
  if (!C.zf) goto L_1120d1f3;
L_1120d1cd:;
  /* 1120d1cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d1d1 je 0x1120d1ec */
  if (C.zf) goto L_1120d1ec;
  /* 1120d1d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1120d1d5 call 0x11206ff0 */
  push32(0x1120d1dau); f_11206ff0();
  /* 1120d1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d1dd mov edx, dword ptr [0x1122f7d4] */
  EDX = (r32((uint32_t)(0x1122f7d4)));
  /* 1120d1e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d1e6 mov dword ptr [0x1122f7d4], edx */
  w32((uint32_t)(0x1122f7d4), (EDX));
L_1120d1ec:;
  /* 1120d1ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d1ee jmp 0x1120d48b */
  goto L_1120d48b;
L_1120d1f3:;
  /* 1120d1f3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1120d1fa jmp 0x1120d205 */
  goto L_1120d205;
L_1120d1fc:;
  /* 1120d1fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120d1ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d202 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1120d205:;
  /* 1120d205 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d209 jg 0x1120d253 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120d253;
  /* 1120d20b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1120d211 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d212 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1120d218 push edx */
  push32((uint32_t)(EDX));
  /* 1120d219 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120d21c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d21f mov ecx, dword ptr [eax + 0x1122e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1122e4d8)));
  /* 1120d225 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d226 call 0x1120f2b0 */
  push32(0x1120d22bu); f_1120f2b0();
  /* 1120d22b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d22e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d230 jne 0x1120d251 */
  if (!C.zf) goto L_1120d251;
  /* 1120d232 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120d235 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d238 mov eax, dword ptr [edx + 0x1122e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1122e4d8)));
  /* 1120d23e push eax */
  push32((uint32_t)(EAX));
  /* 1120d23f call 0x11206380 */
  push32(0x1120d244u); f_11206380();
  /* 1120d244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d247 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d24d jne 0x1120d251 */
  if (!C.zf) goto L_1120d251;
  /* 1120d24f jmp 0x1120d253 */
  goto L_1120d253;
L_1120d251:;
  /* 1120d251 jmp 0x1120d1fc */
  goto L_1120d1fc;
L_1120d253:;
  /* 1120d253 push 0x1122b040 */
  push32((uint32_t)(0x1122b040u));
  /* 1120d258 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d25e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d261 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1120d267 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d26d push edx */
  push32((uint32_t)(EDX));
  /* 1120d26e call 0x1120f270 */
  push32(0x1120d273u); f_1120f270();
  /* 1120d273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d276 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1120d27c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d283 jne 0x1120d2b9 */
  if (!C.zf) goto L_1120d2b9;
  /* 1120d285 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d28b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120d28e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d291 je 0x1120d2b9 */
  if (C.zf) goto L_1120d2b9;
  /* 1120d293 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d297 je 0x1120d2b2 */
  if (C.zf) goto L_1120d2b2;
  /* 1120d299 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1120d29b call 0x11206ff0 */
  push32(0x1120d2a0u); f_11206ff0();
  /* 1120d2a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d2a3 mov edx, dword ptr [0x1122f7d4] */
  EDX = (r32((uint32_t)(0x1122f7d4)));
  /* 1120d2a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d2ac mov dword ptr [0x1122f7d4], edx */
  w32((uint32_t)(0x1122f7d4), (EDX));
L_1120d2b2:;
  /* 1120d2b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d2b4 jmp 0x1120d48b */
  goto L_1120d48b;
L_1120d2b9:;
  /* 1120d2b9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d2bd jg 0x1120d30a */
  if ((!C.zf&&C.sf==C.of)) goto L_1120d30a;
  /* 1120d2bf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1120d2c5 push eax */
  push32((uint32_t)(EAX));
  /* 1120d2c6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d2cc push ecx */
  push32((uint32_t)(ECX));
  /* 1120d2cd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1120d2d3 push edx */
  push32((uint32_t)(EDX));
  /* 1120d2d4 call 0x11206d70 */
  push32(0x1120d2d9u); f_11206d70();
  /* 1120d2d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d2dc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1120d2e2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1120d2ea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1120d2f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d2f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120d2f4 push edx */
  push32((uint32_t)(EDX));
  /* 1120d2f5 call 0x1120d490 */
  push32(0x1120d2fau); f_1120d490();
  /* 1120d2fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d2ff je 0x1120d30a */
  if (C.zf) goto L_1120d30a;
  /* 1120d301 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d304 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d307 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1120d30a:;
  /* 1120d30a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d310 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d316 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1120d31c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1120d322 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120d325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d327 je 0x1120d338 */
  if (C.zf) goto L_1120d338;
  /* 1120d329 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1120d32f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d332 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1120d338:;
  /* 1120d338 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1120d33e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120d341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d343 jne 0x1120d181 */
  if (!C.zf) goto L_1120d181;
  /* 1120d349 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d34d je 0x1120d35c */
  if (C.zf) goto L_1120d35c;
  /* 1120d34f call 0x1120d630 */
  push32(0x1120d354u); f_1120d630();
  /* 1120d354 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1120d35a jmp 0x1120d366 */
  goto L_1120d366;
L_1120d35c:;
  /* 1120d35c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1120d366:;
  /* 1120d366 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1120d36c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120d36f jmp 0x1120d461 */
  goto L_1120d461;
L_1120d374:;
  /* 1120d374 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d377 push edx */
  push32((uint32_t)(EDX));
  /* 1120d378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120d37a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120d37c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1120d382 push eax */
  push32((uint32_t)(EAX));
  /* 1120d383 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d386 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d387 call 0x1120d730 */
  push32(0x1120d38cu); f_1120d730();
  /* 1120d38c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d38f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120d392 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d396 je 0x1120d461 */
  if (C.zf) goto L_1120d461;
  /* 1120d39c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1120d3a3 jmp 0x1120d3ae */
  goto L_1120d3ae;
L_1120d3a5:;
  /* 1120d3a5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120d3a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d3ab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1120d3ae:;
  /* 1120d3ae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d3b2 jg 0x1120d410 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120d410;
  /* 1120d3b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d3b8 je 0x1120d40e */
  if (C.zf) goto L_1120d40e;
  /* 1120d3ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120d3bd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d3c0 mov ecx, dword ptr [eax + 0x1122e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1122e4dc)));
  /* 1120d3c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d3c7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1120d3cd push edx */
  push32((uint32_t)(EDX));
  /* 1120d3ce call 0x1120f1e0 */
  push32(0x1120d3d3u); f_1120f1e0();
  /* 1120d3d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d3d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d3d8 je 0x1120d405 */
  if (C.zf) goto L_1120d405;
  /* 1120d3da lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1120d3e0 push eax */
  push32((uint32_t)(EAX));
  /* 1120d3e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120d3e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d3e5 call 0x1120d490 */
  push32(0x1120d3eau); f_1120d490();
  /* 1120d3ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d3ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d3ef je 0x1120d3fc */
  if (C.zf) goto L_1120d3fc;
  /* 1120d3f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d3f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d3f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1120d3fa jmp 0x1120d403 */
  goto L_1120d403;
L_1120d3fc:;
  /* 1120d3fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1120d403:;
  /* 1120d403 jmp 0x1120d40e */
  goto L_1120d40e;
L_1120d405:;
  /* 1120d405 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d408 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d40b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1120d40e:;
  /* 1120d40e jmp 0x1120d3a5 */
  goto L_1120d3a5;
L_1120d410:;
  /* 1120d410 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d414 je 0x1120d43b */
  if (C.zf) goto L_1120d43b;
  /* 1120d416 call 0x1120d630 */
  push32(0x1120d41bu); f_1120d630();
  /* 1120d41b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120d41e push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d420 mov ecx, dword ptr [0x1122e4dc] */
  ECX = (r32((uint32_t)(0x1122e4dc)));
  /* 1120d426 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d427 call 0x11203fe0 */
  push32(0x1120d42cu); f_11203fe0();
  /* 1120d42c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d42f mov dword ptr [0x1122e4dc], 0 */
  w32((uint32_t)(0x1122e4dc), (0x0u));
  /* 1120d439 jmp 0x1120d461 */
  goto L_1120d461;
L_1120d43b:;
  /* 1120d43b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d43f je 0x1120d44e */
  if (C.zf) goto L_1120d44e;
  /* 1120d441 call 0x1120d630 */
  push32(0x1120d446u); f_1120d630();
  /* 1120d446 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1120d44c jmp 0x1120d458 */
  goto L_1120d458;
L_1120d44e:;
  /* 1120d44e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1120d458:;
  /* 1120d458 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1120d45e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1120d461:;
  /* 1120d461 jmp 0x1120d46b */
  goto L_1120d46b;
L_1120d463:;
  /* 1120d463 call 0x1120d630 */
  push32(0x1120d468u); f_1120d630();
  /* 1120d468 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1120d46b:;
  /* 1120d46b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d46f je 0x1120d488 */
  if (C.zf) goto L_1120d488;
  /* 1120d471 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1120d473 call 0x11206ff0 */
  push32(0x1120d478u); f_11206ff0();
  /* 1120d478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d47b mov eax, dword ptr [0x1122f7d4] */
  EAX = (r32((uint32_t)(0x1122f7d4)));
  /* 1120d480 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d483 mov dword ptr [0x1122f7d4], eax */
  w32((uint32_t)(0x1122f7d4), (EAX));
L_1120d488:;
  /* 1120d488 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1120d48b:;
  /* 1120d48b mov esp, ebp */
  ESP = (EBP);
  /* 1120d48d pop ebp */
  EBP = (pop32());
  /* 1120d48e ret  */
  ESPCHK(0x1120d0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x1120d490 (403 bytes, 117 insns) */
void f_1120d490(void) {
  FTRACE(0x1120d490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d490 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d491 mov ebp, esp */
  EBP = (ESP);
  /* 1120d493 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d499 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d49c push eax */
  push32((uint32_t)(EAX));
  /* 1120d49d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1120d4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d4a4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1120d4aa push edx */
  push32((uint32_t)(EDX));
  /* 1120d4ab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1120d4b1 push eax */
  push32((uint32_t)(EAX));
  /* 1120d4b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d4b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d4b6 call 0x1120d730 */
  push32(0x1120d4bbu); f_1120d730();
  /* 1120d4bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d4be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d4c0 jne 0x1120d4c9 */
  if (!C.zf) goto L_1120d4c9;
  /* 1120d4c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d4c4 jmp 0x1120d61f */
  goto L_1120d61f;
L_1120d4c9:;
  /* 1120d4c9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1120d4ce push 0x1122b048 */
  push32((uint32_t)(0x1122b048u));
  /* 1120d4d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d4d5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1120d4db push edx */
  push32((uint32_t)(EDX));
  /* 1120d4dc call 0x11206380 */
  push32(0x1120d4e1u); f_11206380();
  /* 1120d4e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d4e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d4e7 push eax */
  push32((uint32_t)(EAX));
  /* 1120d4e8 call 0x11203550 */
  push32(0x1120d4edu); f_11203550();
  /* 1120d4ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d4f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120d4f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d4f7 jne 0x1120d500 */
  if (!C.zf) goto L_1120d500;
  /* 1120d4f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d4fb jmp 0x1120d61f */
  goto L_1120d61f;
L_1120d500:;
  /* 1120d500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d503 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d506 mov ecx, dword ptr [eax + 0x1122e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1122e4dc)));
  /* 1120d50c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120d50f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d512 mov eax, dword ptr [edx*4 + 0x1122f650] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1122f650)));
  /* 1120d519 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120d51c push 6 */
  push32((uint32_t)(0x6u));
  /* 1120d51e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d521 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d524 add ecx, 0x1122f6a0 */
  { uint32_t _a=(ECX),_b=(0x1122f6a0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d52a push ecx */
  push32((uint32_t)(ECX));
  /* 1120d52b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1120d52e push edx */
  push32((uint32_t)(EDX));
  /* 1120d52f call 0x11209e30 */
  push32(0x1120d534u); f_11209e30();
  /* 1120d534 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d537 mov eax, dword ptr [0x1122f668] */
  EAX = (r32((uint32_t)(0x1122f668)));
  /* 1120d53c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1120d53f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1120d545 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d546 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120d549 push edx */
  push32((uint32_t)(EDX));
  /* 1120d54a call 0x11206500 */
  push32(0x1120d54fu); f_11206500();
  /* 1120d54f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d555 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d558 mov dword ptr [ecx + 0x1122e4dc], eax */
  w32((uint32_t)(ECX + 0x1122e4dc), (EAX));
  /* 1120d55e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1120d564 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1120d56a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d56d mov dword ptr [eax*4 + 0x1122f650], edx */
  w32((uint32_t)(EAX*4 + 0x1122f650), (EDX));
  /* 1120d574 push 6 */
  push32((uint32_t)(0x6u));
  /* 1120d576 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1120d57c push ecx */
  push32((uint32_t)(ECX));
  /* 1120d57d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d580 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d583 add edx, 0x1122f6a0 */
  { uint32_t _a=(EDX),_b=(0x1122f6a0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d589 push edx */
  push32((uint32_t)(EDX));
  /* 1120d58a call 0x11209e30 */
  push32(0x1120d58fu); f_11209e30();
  /* 1120d58f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d592 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d596 jne 0x1120d5a3 */
  if (!C.zf) goto L_1120d5a3;
  /* 1120d598 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d59e mov dword ptr [0x1122f668], eax */
  w32((uint32_t)(0x1122f668), (EAX));
L_1120d5a3:;
  /* 1120d5a3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d5a7 jne 0x1120d5b5 */
  if (!C.zf) goto L_1120d5b5;
  /* 1120d5a9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1120d5af mov dword ptr [0x1122f66c], ecx */
  w32((uint32_t)(0x1122f66c), (ECX));
L_1120d5b5:;
  /* 1120d5b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d5b8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d5bb call dword ptr [edx + 0x1122e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1122e4e0))), 0x1120d5c1u);
  /* 1120d5c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d5c3 je 0x1120d5fc */
  if (C.zf) goto L_1120d5fc;
  /* 1120d5c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d5c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d5cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d5ce mov dword ptr [eax + 0x1122e4dc], ecx */
  w32((uint32_t)(EAX + 0x1122e4dc), (ECX));
  /* 1120d5d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d5d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120d5d9 push edx */
  push32((uint32_t)(EDX));
  /* 1120d5da call 0x11203fe0 */
  push32(0x1120d5dfu); f_11203fe0();
  /* 1120d5df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d5e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d5e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d5e8 mov dword ptr [eax*4 + 0x1122f650], ecx */
  w32((uint32_t)(EAX*4 + 0x1122f650), (ECX));
  /* 1120d5ef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120d5f2 mov dword ptr [0x1122f668], edx */
  w32((uint32_t)(0x1122f668), (EDX));
  /* 1120d5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d5fa jmp 0x1120d61f */
  goto L_1120d61f;
L_1120d5fc:;
  /* 1120d5fc cmp dword ptr [ebp - 0xc], 0x1122e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1122e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d603 je 0x1120d613 */
  if (C.zf) goto L_1120d613;
  /* 1120d605 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d607 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d60a push eax */
  push32((uint32_t)(EAX));
  /* 1120d60b call 0x11203fe0 */
  push32(0x1120d610u); f_11203fe0();
  /* 1120d610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120d613:;
  /* 1120d613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d616 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d619 mov eax, dword ptr [ecx + 0x1122e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1122e4dc)));
L_1120d61f:;
  /* 1120d61f mov esp, ebp */
  ESP = (EBP);
  /* 1120d621 pop ebp */
  EBP = (pop32());
  /* 1120d622 ret  */
  ESPCHK(0x1120d490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d630 @ 0x1120d630 (256 bytes, 72 insns) */
void f_1120d630(void) {
  FTRACE(0x1120d630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d630 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d631 mov ebp, esp */
  EBP = (ESP);
  /* 1120d633 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d636 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1120d63d cmp dword ptr [0x1122e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d644 jne 0x1120d664 */
  if (!C.zf) goto L_1120d664;
  /* 1120d646 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1120d64b push 0x1122b048 */
  push32((uint32_t)(0x1122b048u));
  /* 1120d650 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d652 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1120d657 call 0x11203550 */
  push32(0x1120d65cu); f_11203550();
  /* 1120d65c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d65f mov dword ptr [0x1122e4dc], eax */
  w32((uint32_t)(0x1122e4dc), (EAX));
L_1120d664:;
  /* 1120d664 mov eax, dword ptr [0x1122e4dc] */
  EAX = (r32((uint32_t)(0x1122e4dc)));
  /* 1120d669 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1120d66c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1120d673 jmp 0x1120d67e */
  goto L_1120d67e;
L_1120d675:;
  /* 1120d675 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d678 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d67b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1120d67e:;
  /* 1120d67e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d681 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d684 mov eax, dword ptr [edx + 0x1122e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1122e4dc)));
  /* 1120d68a push eax */
  push32((uint32_t)(EAX));
  /* 1120d68b push 0x1122b054 */
  push32((uint32_t)(0x1122b054u));
  /* 1120d690 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d693 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d696 mov edx, dword ptr [ecx + 0x1122e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1122e4d8)));
  /* 1120d69c push edx */
  push32((uint32_t)(EDX));
  /* 1120d69d push 3 */
  push32((uint32_t)(0x3u));
  /* 1120d69f mov eax, dword ptr [0x1122e4dc] */
  EAX = (r32((uint32_t)(0x1122e4dc)));
  /* 1120d6a4 push eax */
  push32((uint32_t)(EAX));
  /* 1120d6a5 call 0x1120d8d0 */
  push32(0x1120d6aau); f_1120d8d0();
  /* 1120d6aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d6ad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d6b1 jge 0x1120d6f9 */
  if ((C.sf==C.of)) goto L_1120d6f9;
  /* 1120d6b3 push 0x1122b040 */
  push32((uint32_t)(0x1122b040u));
  /* 1120d6b8 mov ecx, dword ptr [0x1122e4dc] */
  ECX = (r32((uint32_t)(0x1122e4dc)));
  /* 1120d6be push ecx */
  push32((uint32_t)(ECX));
  /* 1120d6bf call 0x11206510 */
  push32(0x1120d6c4u); f_11206510();
  /* 1120d6c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d6c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d6ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d6cd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d6d0 mov eax, dword ptr [edx + 0x1122e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1122e4dc)));
  /* 1120d6d6 push eax */
  push32((uint32_t)(EAX));
  /* 1120d6d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d6da imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120d6dd mov edx, dword ptr [ecx + 0x1122e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1122e4dc)));
  /* 1120d6e3 push edx */
  push32((uint32_t)(EDX));
  /* 1120d6e4 call 0x1120f1e0 */
  push32(0x1120d6e9u); f_1120f1e0();
  /* 1120d6e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d6ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d6ee je 0x1120d6f7 */
  if (C.zf) goto L_1120d6f7;
  /* 1120d6f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1120d6f7:;
  /* 1120d6f7 jmp 0x1120d727 */
  goto L_1120d727;
L_1120d6f9:;
  /* 1120d6f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d6fd jne 0x1120d706 */
  if (!C.zf) goto L_1120d706;
  /* 1120d6ff mov eax, dword ptr [0x1122e4dc] */
  EAX = (r32((uint32_t)(0x1122e4dc)));
  /* 1120d704 jmp 0x1120d72c */
  goto L_1120d72c;
L_1120d706:;
  /* 1120d706 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120d708 mov eax, dword ptr [0x1122e4dc] */
  EAX = (r32((uint32_t)(0x1122e4dc)));
  /* 1120d70d push eax */
  push32((uint32_t)(EAX));
  /* 1120d70e call 0x11203fe0 */
  push32(0x1120d713u); f_11203fe0();
  /* 1120d713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d716 mov dword ptr [0x1122e4dc], 0 */
  w32((uint32_t)(0x1122e4dc), (0x0u));
  /* 1120d720 mov eax, dword ptr [0x1122e4f4] */
  EAX = (r32((uint32_t)(0x1122e4f4)));
  /* 1120d725 jmp 0x1120d72c */
  goto L_1120d72c;
L_1120d727:;
  /* 1120d727 jmp 0x1120d675 */
  goto L_1120d675;
L_1120d72c:;
  /* 1120d72c mov esp, ebp */
  ESP = (EBP);
  /* 1120d72e pop ebp */
  EBP = (pop32());
  /* 1120d72f ret  */
  ESPCHK(0x1120d630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x1120d730 (388 bytes, 115 insns) */
void f_1120d730(void) {
  FTRACE(0x1120d730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d730 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d731 mov ebp, esp */
  EBP = (ESP);
  /* 1120d733 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d739 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d73d jne 0x1120d746 */
  if (!C.zf) goto L_1120d746;
  /* 1120d73f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d741 jmp 0x1120d8b0 */
  goto L_1120d8b0;
L_1120d746:;
  /* 1120d746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d749 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120d74c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d74f jne 0x1120d7a0 */
  if (!C.zf) goto L_1120d7a0;
  /* 1120d751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d754 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1120d758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d75a jne 0x1120d7a0 */
  if (!C.zf) goto L_1120d7a0;
  /* 1120d75c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d75f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1120d762 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d765 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1120d769 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d76d je 0x1120d789 */
  if (C.zf) goto L_1120d789;
  /* 1120d76f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120d772 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1120d777 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120d77a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1120d780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120d783 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1120d789:;
  /* 1120d789 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d78d je 0x1120d798 */
  if (C.zf) goto L_1120d798;
  /* 1120d78f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120d792 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1120d798:;
  /* 1120d798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d79b jmp 0x1120d8b0 */
  goto L_1120d8b0;
L_1120d7a0:;
  /* 1120d7a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d7a4 push 0x1122e450 */
  push32((uint32_t)(0x1122e450u));
  /* 1120d7a9 call 0x1120f1e0 */
  push32(0x1120d7aeu); f_1120f1e0();
  /* 1120d7ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d7b3 je 0x1120d868 */
  if (C.zf) goto L_1120d868;
  /* 1120d7b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d7bc push edx */
  push32((uint32_t)(EDX));
  /* 1120d7bd push 0x1122e3cc */
  push32((uint32_t)(0x1122e3ccu));
  /* 1120d7c2 call 0x1120f1e0 */
  push32(0x1120d7c7u); f_1120f1e0();
  /* 1120d7c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d7ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d7cc je 0x1120d868 */
  if (C.zf) goto L_1120d868;
  /* 1120d7d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d7d5 push eax */
  push32((uint32_t)(EAX));
  /* 1120d7d6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1120d7dc push ecx */
  push32((uint32_t)(ECX));
  /* 1120d7dd call 0x1120d920 */
  push32(0x1120d7e2u); f_1120d920();
  /* 1120d7e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d7e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d7e7 je 0x1120d7f0 */
  if (C.zf) goto L_1120d7f0;
  /* 1120d7e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d7eb jmp 0x1120d8b0 */
  goto L_1120d8b0;
L_1120d7f0:;
  /* 1120d7f0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1120d7f6 push edx */
  push32((uint32_t)(EDX));
  /* 1120d7f7 push 0x1122f678 */
  push32((uint32_t)(0x1122f678u));
  /* 1120d7fc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1120d802 push eax */
  push32((uint32_t)(EAX));
  /* 1120d803 call 0x1120f330 */
  push32(0x1120d808u); f_1120f330();
  /* 1120d808 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d80b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d80d jne 0x1120d816 */
  if (!C.zf) goto L_1120d816;
  /* 1120d80f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d811 jmp 0x1120d8b0 */
  goto L_1120d8b0;
L_1120d816:;
  /* 1120d816 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120d818 mov cx, word ptr [0x1122f67c] */
  CX = (r16((uint32_t)(0x1122f67c)));
  /* 1120d81f mov dword ptr [0x1122f680], ecx */
  w32((uint32_t)(0x1122f680), (ECX));
  /* 1120d825 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1120d82b push edx */
  push32((uint32_t)(EDX));
  /* 1120d82c push 0x1122e450 */
  push32((uint32_t)(0x1122e450u));
  /* 1120d831 call 0x1120da80 */
  push32(0x1120d836u); f_1120da80();
  /* 1120d836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d83c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120d83f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120d841 je 0x1120d856 */
  if (C.zf) goto L_1120d856;
  /* 1120d843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d846 push edx */
  push32((uint32_t)(EDX));
  /* 1120d847 push 0x1122e3cc */
  push32((uint32_t)(0x1122e3ccu));
  /* 1120d84c call 0x11206500 */
  push32(0x1120d851u); f_11206500();
  /* 1120d851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d854 jmp 0x1120d868 */
  goto L_1120d868;
L_1120d856:;
  /* 1120d856 push 0x1122e450 */
  push32((uint32_t)(0x1122e450u));
  /* 1120d85b push 0x1122e3cc */
  push32((uint32_t)(0x1122e3ccu));
  /* 1120d860 call 0x11206500 */
  push32(0x1120d865u); f_11206500();
  /* 1120d865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120d868:;
  /* 1120d868 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d86c je 0x1120d881 */
  if (C.zf) goto L_1120d881;
  /* 1120d86e push 6 */
  push32((uint32_t)(0x6u));
  /* 1120d870 push 0x1122f678 */
  push32((uint32_t)(0x1122f678u));
  /* 1120d875 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120d878 push eax */
  push32((uint32_t)(EAX));
  /* 1120d879 call 0x11209e30 */
  push32(0x1120d87eu); f_11209e30();
  /* 1120d87e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120d881:;
  /* 1120d881 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d885 je 0x1120d89a */
  if (C.zf) goto L_1120d89a;
  /* 1120d887 push 4 */
  push32((uint32_t)(0x4u));
  /* 1120d889 push 0x1122f680 */
  push32((uint32_t)(0x1122f680u));
  /* 1120d88e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120d891 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d892 call 0x11209e30 */
  push32(0x1120d897u); f_11209e30();
  /* 1120d897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120d89a:;
  /* 1120d89a push 0x1122e450 */
  push32((uint32_t)(0x1122e450u));
  /* 1120d89f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d8a2 push edx */
  push32((uint32_t)(EDX));
  /* 1120d8a3 call 0x11206500 */
  push32(0x1120d8a8u); f_11206500();
  /* 1120d8a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d8ab mov eax, 0x1122e450 */
  EAX = (0x1122e450u);
L_1120d8b0:;
  /* 1120d8b0 mov esp, ebp */
  ESP = (EBP);
  /* 1120d8b2 pop ebp */
  EBP = (pop32());
  /* 1120d8b3 ret  */
  ESPCHK(0x1120d730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x1120d8c0 (7 bytes, 5 insns) */
void f_1120d8c0(void) {
  FTRACE(0x1120d8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1120d8c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d8c5 pop ebp */
  EBP = (pop32());
  /* 1120d8c6 ret  */
  ESPCHK(0x1120d8c0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1120d8d0 (79 bytes, 28 insns) */
void f_1120d8d0(void) {
  FTRACE(0x1120d8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1120d8d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d8d6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1120d8d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120d8dc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120d8e3 jmp 0x1120d8ee */
  goto L_1120d8ee;
L_1120d8e5:;
  /* 1120d8e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120d8e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d8eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1120d8ee:;
  /* 1120d8ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120d8f1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d8f4 jge 0x1120d914 */
  if ((C.sf==C.of)) goto L_1120d914;
  /* 1120d8f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d8f9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d8fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120d8ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d902 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1120d905 push edx */
  push32((uint32_t)(EDX));
  /* 1120d906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d909 push eax */
  push32((uint32_t)(EAX));
  /* 1120d90a call 0x11206510 */
  push32(0x1120d90fu); f_11206510();
  /* 1120d90f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d912 jmp 0x1120d8e5 */
  goto L_1120d8e5;
L_1120d914:;
  /* 1120d914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120d91b mov esp, ebp */
  ESP = (EBP);
  /* 1120d91d pop ebp */
  EBP = (pop32());
  /* 1120d91e ret  */
  ESPCHK(0x1120d8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d920 @ 0x1120d920 (349 bytes, 122 insns) */
void f_1120d920(void) {
  FTRACE(0x1120d920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120d920 push ebp */
  push32((uint32_t)(EBP));
  /* 1120d921 mov ebp, esp */
  EBP = (ESP);
  /* 1120d923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120d926 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1120d92b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120d92d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d930 push eax */
  push32((uint32_t)(EAX));
  /* 1120d931 call 0x112072c0 */
  push32(0x1120d936u); f_112072c0();
  /* 1120d936 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d939 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d93c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120d93f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120d941 jne 0x1120d94a */
  if (!C.zf) goto L_1120d94a;
  /* 1120d943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d945 jmp 0x1120da79 */
  goto L_1120da79;
L_1120d94a:;
  /* 1120d94a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d94d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120d950 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d953 jne 0x1120d980 */
  if (!C.zf) goto L_1120d980;
  /* 1120d955 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d958 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1120d95c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120d95e je 0x1120d980 */
  if (C.zf) goto L_1120d980;
  /* 1120d960 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d963 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d966 push ecx */
  push32((uint32_t)(ECX));
  /* 1120d967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d96a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d970 push edx */
  push32((uint32_t)(EDX));
  /* 1120d971 call 0x11206500 */
  push32(0x1120d976u); f_11206500();
  /* 1120d976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120d97b jmp 0x1120da79 */
  goto L_1120da79;
L_1120d980:;
  /* 1120d980 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1120d987 jmp 0x1120d992 */
  goto L_1120d992;
L_1120d989:;
  /* 1120d989 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120d98c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d98f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120d992:;
  /* 1120d992 push 0x1122b058 */
  push32((uint32_t)(0x1122b058u));
  /* 1120d997 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d99a push ecx */
  push32((uint32_t)(ECX));
  /* 1120d99b call 0x1120f270 */
  push32(0x1120d9a0u); f_1120f270();
  /* 1120d9a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d9a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1120d9a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d9aa jne 0x1120d9b4 */
  if (!C.zf) goto L_1120d9b4;
  /* 1120d9ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120d9af jmp 0x1120da79 */
  goto L_1120da79;
L_1120d9b4:;
  /* 1120d9b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d9b7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d9ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120d9bc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1120d9bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d9c3 jne 0x1120d9ea */
  if (!C.zf) goto L_1120d9ea;
  /* 1120d9c5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d9c9 jge 0x1120d9ea */
  if ((C.sf==C.of)) goto L_1120d9ea;
  /* 1120d9cb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1120d9cf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d9d2 je 0x1120d9ea */
  if (C.zf) goto L_1120d9ea;
  /* 1120d9d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120d9d7 push edx */
  push32((uint32_t)(EDX));
  /* 1120d9d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120d9db push eax */
  push32((uint32_t)(EAX));
  /* 1120d9dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120d9df push ecx */
  push32((uint32_t)(ECX));
  /* 1120d9e0 call 0x11206d70 */
  push32(0x1120d9e5u); f_11206d70();
  /* 1120d9e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120d9e8 jmp 0x1120da50 */
  goto L_1120da50;
L_1120d9ea:;
  /* 1120d9ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d9ee jne 0x1120da18 */
  if (!C.zf) goto L_1120da18;
  /* 1120d9f0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d9f4 jge 0x1120da18 */
  if ((C.sf==C.of)) goto L_1120da18;
  /* 1120d9f6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1120d9fa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120d9fd je 0x1120da18 */
  if (C.zf) goto L_1120da18;
  /* 1120d9ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120da02 push eax */
  push32((uint32_t)(EAX));
  /* 1120da03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120da06 push ecx */
  push32((uint32_t)(ECX));
  /* 1120da07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120da0a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120da0d push edx */
  push32((uint32_t)(EDX));
  /* 1120da0e call 0x11206d70 */
  push32(0x1120da13u); f_11206d70();
  /* 1120da13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120da16 jmp 0x1120da50 */
  goto L_1120da50;
L_1120da18:;
  /* 1120da18 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120da1c jne 0x1120da4b */
  if (!C.zf) goto L_1120da4b;
  /* 1120da1e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1120da22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120da24 je 0x1120da2f */
  if (C.zf) goto L_1120da2f;
  /* 1120da26 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1120da2a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120da2d jne 0x1120da4b */
  if (!C.zf) goto L_1120da4b;
L_1120da2f:;
  /* 1120da2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120da32 push edx */
  push32((uint32_t)(EDX));
  /* 1120da33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120da36 push eax */
  push32((uint32_t)(EAX));
  /* 1120da37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120da3a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120da40 push ecx */
  push32((uint32_t)(ECX));
  /* 1120da41 call 0x11206d70 */
  push32(0x1120da46u); f_11206d70();
  /* 1120da46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120da49 jmp 0x1120da50 */
  goto L_1120da50;
L_1120da4b:;
  /* 1120da4b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120da4e jmp 0x1120da79 */
  goto L_1120da79;
L_1120da50:;
  /* 1120da50 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1120da54 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120da57 jne 0x1120da5b */
  if (!C.zf) goto L_1120da5b;
  /* 1120da59 jmp 0x1120da77 */
  goto L_1120da77;
L_1120da5b:;
  /* 1120da5b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1120da5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120da61 jne 0x1120da65 */
  if (!C.zf) goto L_1120da65;
  /* 1120da63 jmp 0x1120da77 */
  goto L_1120da77;
L_1120da65:;
  /* 1120da65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120da68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120da6b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1120da6f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1120da72 jmp 0x1120d989 */
  goto L_1120d989;
L_1120da77:;
  /* 1120da77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120da79:;
  /* 1120da79 mov esp, ebp */
  ESP = (EBP);
  /* 1120da7b pop ebp */
  EBP = (pop32());
  /* 1120da7c ret  */
  ESPCHK(0x1120d920u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1120da80 (101 bytes, 36 insns) */
void f_1120da80(void) {
  FTRACE(0x1120da80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120da80 push ebp */
  push32((uint32_t)(EBP));
  /* 1120da81 mov ebp, esp */
  EBP = (ESP);
  /* 1120da83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120da86 push eax */
  push32((uint32_t)(EAX));
  /* 1120da87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120da8a push ecx */
  push32((uint32_t)(ECX));
  /* 1120da8b call 0x11206500 */
  push32(0x1120da90u); f_11206500();
  /* 1120da90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120da93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120da96 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1120da9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120da9c je 0x1120dab8 */
  if (C.zf) goto L_1120dab8;
  /* 1120da9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120daa1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120daa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120daa5 push 0x1122b060 */
  push32((uint32_t)(0x1122b060u));
  /* 1120daaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1120daac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120daaf push edx */
  push32((uint32_t)(EDX));
  /* 1120dab0 call 0x1120d8d0 */
  push32(0x1120dab5u); f_1120d8d0();
  /* 1120dab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120dab8:;
  /* 1120dab8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120dabb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1120dac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120dac4 je 0x1120dae3 */
  if (C.zf) goto L_1120dae3;
  /* 1120dac6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120dac9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dacf push edx */
  push32((uint32_t)(EDX));
  /* 1120dad0 push 0x1122b05c */
  push32((uint32_t)(0x1122b05cu));
  /* 1120dad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120dad7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dada push eax */
  push32((uint32_t)(EAX));
  /* 1120dadb call 0x1120d8d0 */
  push32(0x1120dae0u); f_1120d8d0();
  /* 1120dae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120dae3:;
  /* 1120dae3 pop ebp */
  EBP = (pop32());
  /* 1120dae4 ret  */
  ESPCHK(0x1120da80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daf0 @ 0x1120daf0 (130 bytes, 50 insns) */
void f_1120daf0(void) {
  FTRACE(0x1120daf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120daf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120daf1 mov ebp, esp */
  EBP = (ESP);
  /* 1120daf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120daf4 push ebx */
  push32((uint32_t)(EBX));
  /* 1120daf5 push esi */
  push32((uint32_t)(ESI));
  /* 1120daf6 push edi */
  push32((uint32_t)(EDI));
  /* 1120daf7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1120dafe:;
  /* 1120dafe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120db02 jne 0x1120db22 */
  if (!C.zf) goto L_1120db22;
  /* 1120db04 push 0x1122b070 */
  push32((uint32_t)(0x1122b070u));
  /* 1120db09 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120db0b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1120db0d push 0x1122b064 */
  push32((uint32_t)(0x1122b064u));
  /* 1120db12 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120db14 call 0x11202610 */
  push32(0x1120db19u); f_11202610();
  /* 1120db19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120db1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120db1f jne 0x1120db22 */
  if (!C.zf) goto L_1120db22;
  /* 1120db21 int3  */
  x86_unimpl("int3 @ 0x1120db21");
L_1120db22:;
  /* 1120db22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120db24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120db26 jne 0x1120dafe */
  if (!C.zf) goto L_1120dafe;
  /* 1120db28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120db2b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120db2e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1120db31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120db33 je 0x1120db41 */
  if (C.zf) goto L_1120db41;
  /* 1120db35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120db38 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1120db3f jmp 0x1120db68 */
  goto L_1120db68;
L_1120db41:;
  /* 1120db41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120db44 push ecx */
  push32((uint32_t)(ECX));
  /* 1120db45 call 0x1120c360 */
  push32(0x1120db4au); f_1120c360();
  /* 1120db4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120db4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120db50 push edx */
  push32((uint32_t)(EDX));
  /* 1120db51 call 0x1120db80 */
  push32(0x1120db56u); f_1120db80();
  /* 1120db56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120db59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120db5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120db5f push eax */
  push32((uint32_t)(EAX));
  /* 1120db60 call 0x1120c3d0 */
  push32(0x1120db65u); f_1120c3d0();
  /* 1120db65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120db68:;
  /* 1120db68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120db6b pop edi */
  EDI = (pop32());
  /* 1120db6c pop esi */
  ESI = (pop32());
  /* 1120db6d pop ebx */
  EBX = (pop32());
  /* 1120db6e mov esp, ebp */
  ESP = (EBP);
  /* 1120db70 pop ebp */
  EBP = (pop32());
  /* 1120db71 ret  */
  ESPCHK(0x1120daf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x1120db80 (190 bytes, 67 insns) */
void f_1120db80(void) {
  FTRACE(0x1120db80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120db80 push ebp */
  push32((uint32_t)(EBP));
  /* 1120db81 mov ebp, esp */
  EBP = (ESP);
  /* 1120db83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120db86 push ebx */
  push32((uint32_t)(EBX));
  /* 1120db87 push esi */
  push32((uint32_t)(ESI));
  /* 1120db88 push edi */
  push32((uint32_t)(EDI));
  /* 1120db89 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1120db90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120db93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1120db96:;
  /* 1120db96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120db9a jne 0x1120dbba */
  if (!C.zf) goto L_1120dbba;
  /* 1120db9c push 0x1122af14 */
  push32((uint32_t)(0x1122af14u));
  /* 1120dba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120dba3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1120dba5 push 0x1122b064 */
  push32((uint32_t)(0x1122b064u));
  /* 1120dbaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1120dbac call 0x11202610 */
  push32(0x1120dbb1u); f_11202610();
  /* 1120dbb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dbb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120dbb7 jne 0x1120dbba */
  if (!C.zf) goto L_1120dbba;
  /* 1120dbb9 int3  */
  x86_unimpl("int3 @ 0x1120dbb9");
L_1120dbba:;
  /* 1120dbba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120dbbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120dbbe jne 0x1120db96 */
  if (!C.zf) goto L_1120db96;
  /* 1120dbc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dbc3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1120dbc6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1120dbcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120dbcd je 0x1120dc2a */
  if (C.zf) goto L_1120dc2a;
  /* 1120dbcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dbd2 push ecx */
  push32((uint32_t)(ECX));
  /* 1120dbd3 call 0x1120ce80 */
  push32(0x1120dbd8u); f_1120ce80();
  /* 1120dbd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dbdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120dbde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dbe1 push edx */
  push32((uint32_t)(EDX));
  /* 1120dbe2 call 0x11210200 */
  push32(0x1120dbe7u); f_11210200();
  /* 1120dbe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dbea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dbed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1120dbf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1120dbf1 call 0x112100d0 */
  push32(0x1120dbf6u); f_112100d0();
  /* 1120dbf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dbf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120dbfb jge 0x1120dc06 */
  if ((C.sf==C.of)) goto L_1120dc06;
  /* 1120dbfd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1120dc04 jmp 0x1120dc2a */
  goto L_1120dc2a;
L_1120dc06:;
  /* 1120dc06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dc09 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120dc0d je 0x1120dc2a */
  if (C.zf) goto L_1120dc2a;
  /* 1120dc0f push 2 */
  push32((uint32_t)(0x2u));
  /* 1120dc11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dc14 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1120dc17 push ecx */
  push32((uint32_t)(ECX));
  /* 1120dc18 call 0x11203fe0 */
  push32(0x1120dc1du); f_11203fe0();
  /* 1120dc1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dc20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dc23 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1120dc2a:;
  /* 1120dc2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120dc2d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1120dc34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dc37 pop edi */
  EDI = (pop32());
  /* 1120dc38 pop esi */
  ESI = (pop32());
  /* 1120dc39 pop ebx */
  EBX = (pop32());
  /* 1120dc3a mov esp, ebp */
  ESP = (EBP);
  /* 1120dc3c pop ebp */
  EBP = (pop32());
  /* 1120dc3d ret  */
  ESPCHK(0x1120db80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc40 @ 0x1120dc40 (210 bytes, 63 insns) */
void f_1120dc40(void) {
  FTRACE(0x1120dc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120dc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1120dc41 mov ebp, esp */
  EBP = (ESP);
  /* 1120dc43 push ecx */
  push32((uint32_t)(ECX));
  /* 1120dc44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dc47 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120dc4d jae 0x1120dc71 */
  if (!C.cf) goto L_1120dc71;
  /* 1120dc4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dc52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1120dc55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dc58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1120dc5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120dc5e mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 1120dc65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1120dc6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120dc6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120dc6f jne 0x1120dc84 */
  if (!C.zf) goto L_1120dc84;
L_1120dc71:;
  /* 1120dc71 call 0x1120b420 */
  push32(0x1120dc76u); f_1120b420();
  /* 1120dc76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120dc7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120dc7f jmp 0x1120dd0e */
  goto L_1120dd0e;
L_1120dc84:;
  /* 1120dc84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dc87 push edx */
  push32((uint32_t)(EDX));
  /* 1120dc88 call 0x1120cc40 */
  push32(0x1120dc8du); f_1120cc40();
  /* 1120dc8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dc90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dc93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1120dc96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dc99 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1120dc9c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120dc9f mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 1120dca6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1120dcab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1120dcae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120dcb0 je 0x1120dced */
  if (C.zf) goto L_1120dced;
  /* 1120dcb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dcb5 push ecx */
  push32((uint32_t)(ECX));
  /* 1120dcb6 call 0x1120cac0 */
  push32(0x1120dcbbu); f_1120cac0();
  /* 1120dcbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dcbe push eax */
  push32((uint32_t)(EAX));
  /* 1120dcbf call dword ptr [0x112312b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312b4))), 0x1120dcc5u);
  /* 1120dcc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120dcc7 jne 0x1120dcd4 */
  if (!C.zf) goto L_1120dcd4;
  /* 1120dcc9 call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x1120dccfu);
  /* 1120dccf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120dcd2 jmp 0x1120dcdb */
  goto L_1120dcdb;
L_1120dcd4:;
  /* 1120dcd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1120dcdb:;
  /* 1120dcdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120dcdf jne 0x1120dce3 */
  if (!C.zf) goto L_1120dce3;
  /* 1120dce1 jmp 0x1120dcff */
  goto L_1120dcff;
L_1120dce3:;
  /* 1120dce3 call 0x1120b430 */
  push32(0x1120dce8u); f_1120b430();
  /* 1120dce8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dceb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1120dced:;
  /* 1120dced call 0x1120b420 */
  push32(0x1120dcf2u); f_1120b420();
  /* 1120dcf2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1120dcf8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1120dcff:;
  /* 1120dcff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dd02 push eax */
  push32((uint32_t)(EAX));
  /* 1120dd03 call 0x1120ccd0 */
  push32(0x1120dd08u); f_1120ccd0();
  /* 1120dd08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dd0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1120dd0e:;
  /* 1120dd0e mov esp, ebp */
  ESP = (EBP);
  /* 1120dd10 pop ebp */
  EBP = (pop32());
  /* 1120dd11 ret  */
  ESPCHK(0x1120dc40u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1120dd20 (219 bytes, 64 insns) */
void f_1120dd20(void) {
  FTRACE(0x1120dd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120dd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1120dd21 mov ebp, esp */
  EBP = (ESP);
  /* 1120dd23 push ecx */
  push32((uint32_t)(ECX));
  /* 1120dd24 cmp dword ptr [0x1122f664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120dd2b je 0x1120ddc1 */
  if (C.zf) goto L_1120ddc1;
  /* 1120dd31 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1120dd33 push 0x1122b080 */
  push32((uint32_t)(0x1122b080u));
  /* 1120dd38 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120dd3a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1120dd3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1120dd41 call 0x11203960 */
  push32(0x1120dd46u); f_11203960();
  /* 1120dd46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dd49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120dd4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120dd50 jne 0x1120dd5c */
  if (!C.zf) goto L_1120dd5c;
  /* 1120dd52 mov eax, 1 */
  EAX = (0x1u);
  /* 1120dd57 jmp 0x1120ddf7 */
  goto L_1120ddf7;
L_1120dd5c:;
  /* 1120dd5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dd5f push eax */
  push32((uint32_t)(EAX));
  /* 1120dd60 call 0x1120de00 */
  push32(0x1120dd65u); f_1120de00();
  /* 1120dd65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dd68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120dd6a je 0x1120dd8d */
  if (C.zf) goto L_1120dd8d;
  /* 1120dd6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dd6f push ecx */
  push32((uint32_t)(ECX));
  /* 1120dd70 call 0x1120e390 */
  push32(0x1120dd75u); f_1120e390();
  /* 1120dd75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dd78 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120dd7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dd7d push edx */
  push32((uint32_t)(EDX));
  /* 1120dd7e call 0x11203fe0 */
  push32(0x1120dd83u); f_11203fe0();
  /* 1120dd83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dd86 mov eax, 1 */
  EAX = (0x1u);
  /* 1120dd8b jmp 0x1120ddf7 */
  goto L_1120ddf7;
L_1120dd8d:;
  /* 1120dd8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dd90 mov dword ptr [0x1122ec98], eax */
  w32((uint32_t)(0x1122ec98), (EAX));
  /* 1120dd95 mov ecx, dword ptr [0x1122f684] */
  ECX = (r32((uint32_t)(0x1122f684)));
  /* 1120dd9b push ecx */
  push32((uint32_t)(ECX));
  /* 1120dd9c call 0x1120e390 */
  push32(0x1120dda1u); f_1120e390();
  /* 1120dda1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dda4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120dda6 mov edx, dword ptr [0x1122f684] */
  EDX = (r32((uint32_t)(0x1122f684)));
  /* 1120ddac push edx */
  push32((uint32_t)(EDX));
  /* 1120ddad call 0x11203fe0 */
  push32(0x1120ddb2u); f_11203fe0();
  /* 1120ddb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ddb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ddb8 mov dword ptr [0x1122f684], eax */
  w32((uint32_t)(0x1122f684), (EAX));
  /* 1120ddbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120ddbf jmp 0x1120ddf7 */
  goto L_1120ddf7;
L_1120ddc1:;
  /* 1120ddc1 mov dword ptr [0x1122ec98], 0x1122eca0 */
  w32((uint32_t)(0x1122ec98), (0x1122eca0u));
  /* 1120ddcb mov ecx, dword ptr [0x1122f684] */
  ECX = (r32((uint32_t)(0x1122f684)));
  /* 1120ddd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ddd2 call 0x1120e390 */
  push32(0x1120ddd7u); f_1120e390();
  /* 1120ddd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ddda push 2 */
  push32((uint32_t)(0x2u));
  /* 1120dddc mov edx, dword ptr [0x1122f684] */
  EDX = (r32((uint32_t)(0x1122f684)));
  /* 1120dde2 push edx */
  push32((uint32_t)(EDX));
  /* 1120dde3 call 0x11203fe0 */
  push32(0x1120dde8u); f_11203fe0();
  /* 1120dde8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ddeb mov dword ptr [0x1122f684], 0 */
  w32((uint32_t)(0x1122f684), (0x0u));
  /* 1120ddf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120ddf7:;
  /* 1120ddf7 mov esp, ebp */
  ESP = (EBP);
  /* 1120ddf9 pop ebp */
  EBP = (pop32());
  /* 1120ddfa ret  */
  ESPCHK(0x1120dd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x1120de00 (1423 bytes, 533 insns) */
void f_1120de00(void) {
  FTRACE(0x1120de00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120de00 push ebp */
  push32((uint32_t)(EBP));
  /* 1120de01 mov ebp, esp */
  EBP = (ESP);
  /* 1120de03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120de06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1120de0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120de0f mov ax, word ptr [0x1122f6be] */
  AX = (r16((uint32_t)(0x1122f6be)));
  /* 1120de15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120de18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120de1a mov cx, word ptr [0x1122f6c0] */
  CX = (r16((uint32_t)(0x1122f6c0)));
  /* 1120de21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120de24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120de28 jne 0x1120de32 */
  if (!C.zf) goto L_1120de32;
  /* 1120de2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120de2d jmp 0x1120e38b */
  goto L_1120e38b;
L_1120de32:;
  /* 1120de32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120de35 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120de38 push edx */
  push32((uint32_t)(EDX));
  /* 1120de39 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1120de3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120de3e push eax */
  push32((uint32_t)(EAX));
  /* 1120de3f push 1 */
  push32((uint32_t)(0x1u));
  /* 1120de41 call 0x11211710 */
  push32(0x1120de46u); f_11211710();
  /* 1120de46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120de49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120de4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120de4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120de51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120de54 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120de57 push edx */
  push32((uint32_t)(EDX));
  /* 1120de58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1120de5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120de5d push eax */
  push32((uint32_t)(EAX));
  /* 1120de5e push 1 */
  push32((uint32_t)(0x1u));
  /* 1120de60 call 0x11211710 */
  push32(0x1120de65u); f_11211710();
  /* 1120de65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120de68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120de6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120de6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120de70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120de73 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120de76 push edx */
  push32((uint32_t)(EDX));
  /* 1120de77 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1120de79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120de7c push eax */
  push32((uint32_t)(EAX));
  /* 1120de7d push 1 */
  push32((uint32_t)(0x1u));
  /* 1120de7f call 0x11211710 */
  push32(0x1120de84u); f_11211710();
  /* 1120de84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120de87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120de8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120de8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120de8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120de92 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120de95 push edx */
  push32((uint32_t)(EDX));
  /* 1120de96 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1120de98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120de9b push eax */
  push32((uint32_t)(EAX));
  /* 1120de9c push 1 */
  push32((uint32_t)(0x1u));
  /* 1120de9e call 0x11211710 */
  push32(0x1120dea3u); f_11211710();
  /* 1120dea3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dea6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120dea9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120deab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120deae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120deb1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120deb4 push edx */
  push32((uint32_t)(EDX));
  /* 1120deb5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1120deb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120deba push eax */
  push32((uint32_t)(EAX));
  /* 1120debb push 1 */
  push32((uint32_t)(0x1u));
  /* 1120debd call 0x11211710 */
  push32(0x1120dec2u); f_11211710();
  /* 1120dec2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dec5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120dec8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120deca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120decd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ded0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ded3 push edx */
  push32((uint32_t)(EDX));
  /* 1120ded4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1120ded6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ded9 push eax */
  push32((uint32_t)(EAX));
  /* 1120deda push 1 */
  push32((uint32_t)(0x1u));
  /* 1120dedc call 0x11211710 */
  push32(0x1120dee1u); f_11211710();
  /* 1120dee1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dee4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120dee7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120dee9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120deec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120deef push edx */
  push32((uint32_t)(EDX));
  /* 1120def0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1120def2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120def5 push eax */
  push32((uint32_t)(EAX));
  /* 1120def6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120def8 call 0x11211710 */
  push32(0x1120defdu); f_11211710();
  /* 1120defd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120df03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120df05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120df08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120df0b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df0e push edx */
  push32((uint32_t)(EDX));
  /* 1120df0f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1120df11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120df14 push eax */
  push32((uint32_t)(EAX));
  /* 1120df15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120df17 call 0x11211710 */
  push32(0x1120df1cu); f_11211710();
  /* 1120df1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120df22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120df24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120df27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120df2a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df2d push edx */
  push32((uint32_t)(EDX));
  /* 1120df2e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1120df30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120df33 push eax */
  push32((uint32_t)(EAX));
  /* 1120df34 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120df36 call 0x11211710 */
  push32(0x1120df3bu); f_11211710();
  /* 1120df3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120df41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120df43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120df46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120df49 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df4c push edx */
  push32((uint32_t)(EDX));
  /* 1120df4d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1120df4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120df52 push eax */
  push32((uint32_t)(EAX));
  /* 1120df53 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120df55 call 0x11211710 */
  push32(0x1120df5au); f_11211710();
  /* 1120df5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120df60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120df62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120df65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120df68 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df6b push edx */
  push32((uint32_t)(EDX));
  /* 1120df6c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1120df6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120df71 push eax */
  push32((uint32_t)(EAX));
  /* 1120df72 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120df74 call 0x11211710 */
  push32(0x1120df79u); f_11211710();
  /* 1120df79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120df7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120df81 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120df84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120df87 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df8a push edx */
  push32((uint32_t)(EDX));
  /* 1120df8b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1120df8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120df90 push eax */
  push32((uint32_t)(EAX));
  /* 1120df91 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120df93 call 0x11211710 */
  push32(0x1120df98u); f_11211710();
  /* 1120df98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120df9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120df9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120dfa0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120dfa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dfa6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dfa9 push edx */
  push32((uint32_t)(EDX));
  /* 1120dfaa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1120dfac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dfaf push eax */
  push32((uint32_t)(EAX));
  /* 1120dfb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120dfb2 call 0x11211710 */
  push32(0x1120dfb7u); f_11211710();
  /* 1120dfb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dfba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120dfbd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120dfbf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120dfc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dfc5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dfc8 push edx */
  push32((uint32_t)(EDX));
  /* 1120dfc9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1120dfcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dfce push eax */
  push32((uint32_t)(EAX));
  /* 1120dfcf push 1 */
  push32((uint32_t)(0x1u));
  /* 1120dfd1 call 0x11211710 */
  push32(0x1120dfd6u); f_11211710();
  /* 1120dfd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dfd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120dfdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120dfde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120dfe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120dfe4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dfe7 push edx */
  push32((uint32_t)(EDX));
  /* 1120dfe8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1120dfea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120dfed push eax */
  push32((uint32_t)(EAX));
  /* 1120dfee push 1 */
  push32((uint32_t)(0x1u));
  /* 1120dff0 call 0x11211710 */
  push32(0x1120dff5u); f_11211710();
  /* 1120dff5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120dff8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120dffb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120dffd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e003 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e006 push edx */
  push32((uint32_t)(EDX));
  /* 1120e007 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1120e009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e00c push eax */
  push32((uint32_t)(EAX));
  /* 1120e00d push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e00f call 0x11211710 */
  push32(0x1120e014u); f_11211710();
  /* 1120e014 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e017 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e01a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e01c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e01f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e022 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e025 push edx */
  push32((uint32_t)(EDX));
  /* 1120e026 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1120e028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e02b push eax */
  push32((uint32_t)(EAX));
  /* 1120e02c push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e02e call 0x11211710 */
  push32(0x1120e033u); f_11211710();
  /* 1120e033 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e039 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e03b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e041 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e044 push edx */
  push32((uint32_t)(EDX));
  /* 1120e045 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1120e047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e04a push eax */
  push32((uint32_t)(EAX));
  /* 1120e04b push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e04d call 0x11211710 */
  push32(0x1120e052u); f_11211710();
  /* 1120e052 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e058 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e05a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e05d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e060 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e063 push edx */
  push32((uint32_t)(EDX));
  /* 1120e064 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1120e066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e069 push eax */
  push32((uint32_t)(EAX));
  /* 1120e06a push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e06c call 0x11211710 */
  push32(0x1120e071u); f_11211710();
  /* 1120e071 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e074 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e077 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e079 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e07c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e07f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e082 push edx */
  push32((uint32_t)(EDX));
  /* 1120e083 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1120e085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e088 push eax */
  push32((uint32_t)(EAX));
  /* 1120e089 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e08b call 0x11211710 */
  push32(0x1120e090u); f_11211710();
  /* 1120e090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e093 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e096 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e098 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e09b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e09e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e0a1 push edx */
  push32((uint32_t)(EDX));
  /* 1120e0a2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1120e0a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e0a7 push eax */
  push32((uint32_t)(EAX));
  /* 1120e0a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e0aa call 0x11211710 */
  push32(0x1120e0afu); f_11211710();
  /* 1120e0af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e0b2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e0b5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e0b7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e0ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e0bd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e0c0 push edx */
  push32((uint32_t)(EDX));
  /* 1120e0c1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1120e0c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e0c6 push eax */
  push32((uint32_t)(EAX));
  /* 1120e0c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e0c9 call 0x11211710 */
  push32(0x1120e0ceu); f_11211710();
  /* 1120e0ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e0d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e0d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e0d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e0d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e0dc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e0df push edx */
  push32((uint32_t)(EDX));
  /* 1120e0e0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1120e0e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e0e5 push eax */
  push32((uint32_t)(EAX));
  /* 1120e0e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e0e8 call 0x11211710 */
  push32(0x1120e0edu); f_11211710();
  /* 1120e0ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e0f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e0f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e0f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e0f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e0fb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e0fe push edx */
  push32((uint32_t)(EDX));
  /* 1120e0ff push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1120e101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e104 push eax */
  push32((uint32_t)(EAX));
  /* 1120e105 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e107 call 0x11211710 */
  push32(0x1120e10cu); f_11211710();
  /* 1120e10c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e10f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e112 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e114 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e117 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e11a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e11d push edx */
  push32((uint32_t)(EDX));
  /* 1120e11e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1120e120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e123 push eax */
  push32((uint32_t)(EAX));
  /* 1120e124 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e126 call 0x11211710 */
  push32(0x1120e12bu); f_11211710();
  /* 1120e12b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e12e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e131 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e133 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e136 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e139 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e13c push edx */
  push32((uint32_t)(EDX));
  /* 1120e13d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1120e13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e142 push eax */
  push32((uint32_t)(EAX));
  /* 1120e143 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e145 call 0x11211710 */
  push32(0x1120e14au); f_11211710();
  /* 1120e14a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e14d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e150 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e152 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e158 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e15b push edx */
  push32((uint32_t)(EDX));
  /* 1120e15c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1120e15e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e161 push eax */
  push32((uint32_t)(EAX));
  /* 1120e162 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e164 call 0x11211710 */
  push32(0x1120e169u); f_11211710();
  /* 1120e169 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e16c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e16f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e171 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e177 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e17a push edx */
  push32((uint32_t)(EDX));
  /* 1120e17b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1120e17d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e180 push eax */
  push32((uint32_t)(EAX));
  /* 1120e181 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e183 call 0x11211710 */
  push32(0x1120e188u); f_11211710();
  /* 1120e188 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e18b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e18e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e190 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e196 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e199 push edx */
  push32((uint32_t)(EDX));
  /* 1120e19a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1120e19c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e19f push eax */
  push32((uint32_t)(EAX));
  /* 1120e1a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e1a2 call 0x11211710 */
  push32(0x1120e1a7u); f_11211710();
  /* 1120e1a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e1aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e1ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e1af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e1b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e1b5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e1b8 push edx */
  push32((uint32_t)(EDX));
  /* 1120e1b9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1120e1bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e1be push eax */
  push32((uint32_t)(EAX));
  /* 1120e1bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e1c1 call 0x11211710 */
  push32(0x1120e1c6u); f_11211710();
  /* 1120e1c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e1c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e1cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e1ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e1d4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e1d7 push edx */
  push32((uint32_t)(EDX));
  /* 1120e1d8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1120e1da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e1dd push eax */
  push32((uint32_t)(EAX));
  /* 1120e1de push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e1e0 call 0x11211710 */
  push32(0x1120e1e5u); f_11211710();
  /* 1120e1e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e1e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e1eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e1ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e1f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e1f3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e1f6 push edx */
  push32((uint32_t)(EDX));
  /* 1120e1f7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1120e1f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e1fc push eax */
  push32((uint32_t)(EAX));
  /* 1120e1fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e1ff call 0x11211710 */
  push32(0x1120e204u); f_11211710();
  /* 1120e204 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e20a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e20c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e20f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e212 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e218 push edx */
  push32((uint32_t)(EDX));
  /* 1120e219 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1120e21b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e21e push eax */
  push32((uint32_t)(EAX));
  /* 1120e21f push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e221 call 0x11211710 */
  push32(0x1120e226u); f_11211710();
  /* 1120e226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e229 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e22c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e22e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e234 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e23a push edx */
  push32((uint32_t)(EDX));
  /* 1120e23b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1120e23d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e240 push eax */
  push32((uint32_t)(EAX));
  /* 1120e241 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e243 call 0x11211710 */
  push32(0x1120e248u); f_11211710();
  /* 1120e248 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e24b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e24e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e250 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e253 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e256 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e25c push edx */
  push32((uint32_t)(EDX));
  /* 1120e25d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1120e25f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e262 push eax */
  push32((uint32_t)(EAX));
  /* 1120e263 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e265 call 0x11211710 */
  push32(0x1120e26au); f_11211710();
  /* 1120e26a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e26d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e270 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e272 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e278 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e27e push edx */
  push32((uint32_t)(EDX));
  /* 1120e27f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1120e281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e284 push eax */
  push32((uint32_t)(EAX));
  /* 1120e285 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e287 call 0x11211710 */
  push32(0x1120e28cu); f_11211710();
  /* 1120e28c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e28f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e292 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e294 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e29a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e2a0 push edx */
  push32((uint32_t)(EDX));
  /* 1120e2a1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1120e2a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e2a6 push eax */
  push32((uint32_t)(EAX));
  /* 1120e2a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e2a9 call 0x11211710 */
  push32(0x1120e2aeu); f_11211710();
  /* 1120e2ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e2b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e2b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e2b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e2b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e2bc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e2c2 push edx */
  push32((uint32_t)(EDX));
  /* 1120e2c3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1120e2c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e2c8 push eax */
  push32((uint32_t)(EAX));
  /* 1120e2c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e2cb call 0x11211710 */
  push32(0x1120e2d0u); f_11211710();
  /* 1120e2d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e2d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e2d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e2d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e2db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e2de add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e2e4 push edx */
  push32((uint32_t)(EDX));
  /* 1120e2e5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1120e2e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e2ea push eax */
  push32((uint32_t)(EAX));
  /* 1120e2eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e2ed call 0x11211710 */
  push32(0x1120e2f2u); f_11211710();
  /* 1120e2f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e2f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e2f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e2fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e2fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e300 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e306 push edx */
  push32((uint32_t)(EDX));
  /* 1120e307 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1120e309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e30c push eax */
  push32((uint32_t)(EAX));
  /* 1120e30d push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e30f call 0x11211710 */
  push32(0x1120e314u); f_11211710();
  /* 1120e314 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e317 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e31a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e31c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e31f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e322 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e328 push edx */
  push32((uint32_t)(EDX));
  /* 1120e329 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1120e32b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120e32e push eax */
  push32((uint32_t)(EAX));
  /* 1120e32f push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e331 call 0x11211710 */
  push32(0x1120e336u); f_11211710();
  /* 1120e336 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e339 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e33c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e33e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e344 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e34a push edx */
  push32((uint32_t)(EDX));
  /* 1120e34b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1120e34d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120e350 push eax */
  push32((uint32_t)(EAX));
  /* 1120e351 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e353 call 0x11211710 */
  push32(0x1120e358u); f_11211710();
  /* 1120e358 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e35b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e35e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e360 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e363 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e366 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e36c push edx */
  push32((uint32_t)(EDX));
  /* 1120e36d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1120e372 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120e375 push eax */
  push32((uint32_t)(EAX));
  /* 1120e376 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e378 call 0x11211710 */
  push32(0x1120e37du); f_11211710();
  /* 1120e37d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e380 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120e383 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e385 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1120e388 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1120e38b:;
  /* 1120e38b mov esp, ebp */
  ESP = (EBP);
  /* 1120e38d pop ebp */
  EBP = (pop32());
  /* 1120e38e ret  */
  ESPCHK(0x1120de00u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1120e390 (779 bytes, 265 insns) */
void f_1120e390(void) {
  FTRACE(0x1120e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120e390 push ebp */
  push32((uint32_t)(EBP));
  /* 1120e391 mov ebp, esp */
  EBP = (ESP);
  /* 1120e393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e397 jne 0x1120e39e */
  if (!C.zf) goto L_1120e39e;
  /* 1120e399 jmp 0x1120e699 */
  goto L_1120e699;
L_1120e39e:;
  /* 1120e39e push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e3a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e3a3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1120e3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e3a7 call 0x11203fe0 */
  push32(0x1120e3acu); f_11203fe0();
  /* 1120e3ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e3af push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e3b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1120e3b7 push eax */
  push32((uint32_t)(EAX));
  /* 1120e3b8 call 0x11203fe0 */
  push32(0x1120e3bdu); f_11203fe0();
  /* 1120e3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e3c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e3c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e3c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120e3c8 push edx */
  push32((uint32_t)(EDX));
  /* 1120e3c9 call 0x11203fe0 */
  push32(0x1120e3ceu); f_11203fe0();
  /* 1120e3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e3d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e3d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e3d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1120e3d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e3da call 0x11203fe0 */
  push32(0x1120e3dfu); f_11203fe0();
  /* 1120e3df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e3e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e3e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e3e7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1120e3ea push eax */
  push32((uint32_t)(EAX));
  /* 1120e3eb call 0x11203fe0 */
  push32(0x1120e3f0u); f_11203fe0();
  /* 1120e3f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e3f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e3f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e3f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1120e3fb push edx */
  push32((uint32_t)(EDX));
  /* 1120e3fc call 0x11203fe0 */
  push32(0x1120e401u); f_11203fe0();
  /* 1120e401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e404 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e409 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120e40b push ecx */
  push32((uint32_t)(ECX));
  /* 1120e40c call 0x11203fe0 */
  push32(0x1120e411u); f_11203fe0();
  /* 1120e411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e414 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e416 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e419 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1120e41c push eax */
  push32((uint32_t)(EAX));
  /* 1120e41d call 0x11203fe0 */
  push32(0x1120e422u); f_11203fe0();
  /* 1120e422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e425 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e427 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e42a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1120e42d push edx */
  push32((uint32_t)(EDX));
  /* 1120e42e call 0x11203fe0 */
  push32(0x1120e433u); f_11203fe0();
  /* 1120e433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e436 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e43b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1120e43e push ecx */
  push32((uint32_t)(ECX));
  /* 1120e43f call 0x11203fe0 */
  push32(0x1120e444u); f_11203fe0();
  /* 1120e444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e447 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e44c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1120e44f push eax */
  push32((uint32_t)(EAX));
  /* 1120e450 call 0x11203fe0 */
  push32(0x1120e455u); f_11203fe0();
  /* 1120e455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e458 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e45a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e45d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1120e460 push edx */
  push32((uint32_t)(EDX));
  /* 1120e461 call 0x11203fe0 */
  push32(0x1120e466u); f_11203fe0();
  /* 1120e466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e46b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e46e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1120e471 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e472 call 0x11203fe0 */
  push32(0x1120e477u); f_11203fe0();
  /* 1120e477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e47a push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e47c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e47f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1120e482 push eax */
  push32((uint32_t)(EAX));
  /* 1120e483 call 0x11203fe0 */
  push32(0x1120e488u); f_11203fe0();
  /* 1120e488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e48b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e48d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e490 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1120e493 push edx */
  push32((uint32_t)(EDX));
  /* 1120e494 call 0x11203fe0 */
  push32(0x1120e499u); f_11203fe0();
  /* 1120e499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e49c push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e49e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e4a1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1120e4a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e4a5 call 0x11203fe0 */
  push32(0x1120e4aau); f_11203fe0();
  /* 1120e4aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e4ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e4af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e4b2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1120e4b5 push eax */
  push32((uint32_t)(EAX));
  /* 1120e4b6 call 0x11203fe0 */
  push32(0x1120e4bbu); f_11203fe0();
  /* 1120e4bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e4be push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e4c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e4c3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1120e4c6 push edx */
  push32((uint32_t)(EDX));
  /* 1120e4c7 call 0x11203fe0 */
  push32(0x1120e4ccu); f_11203fe0();
  /* 1120e4cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e4cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e4d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e4d4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1120e4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e4d8 call 0x11203fe0 */
  push32(0x1120e4ddu); f_11203fe0();
  /* 1120e4dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e4e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e4e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e4e5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1120e4e8 push eax */
  push32((uint32_t)(EAX));
  /* 1120e4e9 call 0x11203fe0 */
  push32(0x1120e4eeu); f_11203fe0();
  /* 1120e4ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e4f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e4f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e4f6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1120e4f9 push edx */
  push32((uint32_t)(EDX));
  /* 1120e4fa call 0x11203fe0 */
  push32(0x1120e4ffu); f_11203fe0();
  /* 1120e4ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e502 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e507 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1120e50a push ecx */
  push32((uint32_t)(ECX));
  /* 1120e50b call 0x11203fe0 */
  push32(0x1120e510u); f_11203fe0();
  /* 1120e510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e513 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e518 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1120e51b push eax */
  push32((uint32_t)(EAX));
  /* 1120e51c call 0x11203fe0 */
  push32(0x1120e521u); f_11203fe0();
  /* 1120e521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e524 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e526 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e529 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1120e52c push edx */
  push32((uint32_t)(EDX));
  /* 1120e52d call 0x11203fe0 */
  push32(0x1120e532u); f_11203fe0();
  /* 1120e532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e535 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e53a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1120e53d push ecx */
  push32((uint32_t)(ECX));
  /* 1120e53e call 0x11203fe0 */
  push32(0x1120e543u); f_11203fe0();
  /* 1120e543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e546 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e54b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1120e54e push eax */
  push32((uint32_t)(EAX));
  /* 1120e54f call 0x11203fe0 */
  push32(0x1120e554u); f_11203fe0();
  /* 1120e554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e557 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e559 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e55c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1120e55f push edx */
  push32((uint32_t)(EDX));
  /* 1120e560 call 0x11203fe0 */
  push32(0x1120e565u); f_11203fe0();
  /* 1120e565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e568 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e56a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e56d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1120e570 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e571 call 0x11203fe0 */
  push32(0x1120e576u); f_11203fe0();
  /* 1120e576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e579 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e57b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e57e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1120e581 push eax */
  push32((uint32_t)(EAX));
  /* 1120e582 call 0x11203fe0 */
  push32(0x1120e587u); f_11203fe0();
  /* 1120e587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e58a push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e58c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e58f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1120e592 push edx */
  push32((uint32_t)(EDX));
  /* 1120e593 call 0x11203fe0 */
  push32(0x1120e598u); f_11203fe0();
  /* 1120e598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e59b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e59d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e5a0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1120e5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e5a4 call 0x11203fe0 */
  push32(0x1120e5a9u); f_11203fe0();
  /* 1120e5a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e5ac push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e5ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e5b1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1120e5b4 push eax */
  push32((uint32_t)(EAX));
  /* 1120e5b5 call 0x11203fe0 */
  push32(0x1120e5bau); f_11203fe0();
  /* 1120e5ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e5bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e5bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e5c2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1120e5c8 push edx */
  push32((uint32_t)(EDX));
  /* 1120e5c9 call 0x11203fe0 */
  push32(0x1120e5ceu); f_11203fe0();
  /* 1120e5ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e5d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e5d6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1120e5dc push ecx */
  push32((uint32_t)(ECX));
  /* 1120e5dd call 0x11203fe0 */
  push32(0x1120e5e2u); f_11203fe0();
  /* 1120e5e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e5e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e5e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e5ea mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1120e5f0 push eax */
  push32((uint32_t)(EAX));
  /* 1120e5f1 call 0x11203fe0 */
  push32(0x1120e5f6u); f_11203fe0();
  /* 1120e5f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e5f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e5fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e5fe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1120e604 push edx */
  push32((uint32_t)(EDX));
  /* 1120e605 call 0x11203fe0 */
  push32(0x1120e60au); f_11203fe0();
  /* 1120e60a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e60d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e60f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e612 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1120e618 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e619 call 0x11203fe0 */
  push32(0x1120e61eu); f_11203fe0();
  /* 1120e61e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e621 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e626 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1120e62c push eax */
  push32((uint32_t)(EAX));
  /* 1120e62d call 0x11203fe0 */
  push32(0x1120e632u); f_11203fe0();
  /* 1120e632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e635 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e637 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e63a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1120e640 push edx */
  push32((uint32_t)(EDX));
  /* 1120e641 call 0x11203fe0 */
  push32(0x1120e646u); f_11203fe0();
  /* 1120e646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e649 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e64b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e64e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1120e654 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e655 call 0x11203fe0 */
  push32(0x1120e65au); f_11203fe0();
  /* 1120e65a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e65d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e65f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e662 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1120e668 push eax */
  push32((uint32_t)(EAX));
  /* 1120e669 call 0x11203fe0 */
  push32(0x1120e66eu); f_11203fe0();
  /* 1120e66e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e671 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e676 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1120e67c push edx */
  push32((uint32_t)(EDX));
  /* 1120e67d call 0x11203fe0 */
  push32(0x1120e682u); f_11203fe0();
  /* 1120e682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e685 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e687 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e68a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1120e690 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e691 call 0x11203fe0 */
  push32(0x1120e696u); f_11203fe0();
  /* 1120e696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120e699:;
  /* 1120e699 pop ebp */
  EBP = (pop32());
  /* 1120e69a ret  */
  ESPCHK(0x1120e390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x1120e6a0 (678 bytes, 180 insns) */
void f_1120e6a0(void) {
  FTRACE(0x1120e6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120e6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120e6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1120e6a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120e6a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120e6ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120e6af mov ax, word ptr [0x1122f6ba] */
  AX = (r16((uint32_t)(0x1122f6ba)));
  /* 1120e6b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120e6b8 cmp dword ptr [0x1122f660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e6bf je 0x1120e81a */
  if (C.zf) goto L_1120e81a;
  /* 1120e6c5 push 0x1122f688 */
  push32((uint32_t)(0x1122f688u));
  /* 1120e6ca push 0xe */
  push32((uint32_t)(0xeu));
  /* 1120e6cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e6cf push ecx */
  push32((uint32_t)(ECX));
  /* 1120e6d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e6d2 call 0x11211710 */
  push32(0x1120e6d7u); f_11211710();
  /* 1120e6d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e6da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120e6dd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1120e6df mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1120e6e2 push 0x1122f68c */
  push32((uint32_t)(0x1122f68cu));
  /* 1120e6e7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1120e6e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e6ec push eax */
  push32((uint32_t)(EAX));
  /* 1120e6ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e6ef call 0x11211710 */
  push32(0x1120e6f4u); f_11211710();
  /* 1120e6f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e6f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120e6fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e6fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120e6ff push 0x1122f690 */
  push32((uint32_t)(0x1122f690u));
  /* 1120e704 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1120e706 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e709 push edx */
  push32((uint32_t)(EDX));
  /* 1120e70a push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e70c call 0x11211710 */
  push32(0x1120e711u); f_11211710();
  /* 1120e711 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e714 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120e717 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120e719 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120e71c mov edx, dword ptr [0x1122f690] */
  EDX = (r32((uint32_t)(0x1122f690)));
  /* 1120e722 push edx */
  push32((uint32_t)(EDX));
  /* 1120e723 call 0x1120e950 */
  push32(0x1120e728u); f_1120e950();
  /* 1120e728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e72b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e72f je 0x1120e789 */
  if (C.zf) goto L_1120e789;
  /* 1120e731 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e733 mov eax, dword ptr [0x1122f688] */
  EAX = (r32((uint32_t)(0x1122f688)));
  /* 1120e738 push eax */
  push32((uint32_t)(EAX));
  /* 1120e739 call 0x11203fe0 */
  push32(0x1120e73eu); f_11203fe0();
  /* 1120e73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e741 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e743 mov ecx, dword ptr [0x1122f68c] */
  ECX = (r32((uint32_t)(0x1122f68c)));
  /* 1120e749 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e74a call 0x11203fe0 */
  push32(0x1120e74fu); f_11203fe0();
  /* 1120e74f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e752 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e754 mov edx, dword ptr [0x1122f690] */
  EDX = (r32((uint32_t)(0x1122f690)));
  /* 1120e75a push edx */
  push32((uint32_t)(EDX));
  /* 1120e75b call 0x11203fe0 */
  push32(0x1120e760u); f_11203fe0();
  /* 1120e760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e763 mov dword ptr [0x1122f688], 0 */
  w32((uint32_t)(0x1122f688), (0x0u));
  /* 1120e76d mov dword ptr [0x1122f68c], 0 */
  w32((uint32_t)(0x1122f68c), (0x0u));
  /* 1120e777 mov dword ptr [0x1122f690], 0 */
  w32((uint32_t)(0x1122f690), (0x0u));
  /* 1120e781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120e784 jmp 0x1120e942 */
  goto L_1120e942;
L_1120e789:;
  /* 1120e789 mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e78e cmp dword ptr [eax], 0x1122ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1122ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e794 je 0x1120e7d0 */
  if (C.zf) goto L_1120e7d0;
  /* 1120e796 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e798 mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e79e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120e7a0 push edx */
  push32((uint32_t)(EDX));
  /* 1120e7a1 call 0x11203fe0 */
  push32(0x1120e7a6u); f_11203fe0();
  /* 1120e7a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e7a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e7ab mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e7b0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1120e7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e7b4 call 0x11203fe0 */
  push32(0x1120e7b9u); f_11203fe0();
  /* 1120e7b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e7bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e7be mov edx, dword ptr [0x1122ed88] */
  EDX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e7c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1120e7c7 push eax */
  push32((uint32_t)(EAX));
  /* 1120e7c8 call 0x11203fe0 */
  push32(0x1120e7cdu); f_11203fe0();
  /* 1120e7cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120e7d0:;
  /* 1120e7d0 mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e7d6 mov edx, dword ptr [0x1122f688] */
  EDX = (r32((uint32_t)(0x1122f688)));
  /* 1120e7dc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1120e7de mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e7e3 mov ecx, dword ptr [0x1122f68c] */
  ECX = (r32((uint32_t)(0x1122f68c)));
  /* 1120e7e9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1120e7ec mov edx, dword ptr [0x1122ed88] */
  EDX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e7f2 mov eax, dword ptr [0x1122f690] */
  EAX = (r32((uint32_t)(0x1122f690)));
  /* 1120e7f7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1120e7fa mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e800 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120e802 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120e804 mov byte ptr [0x1122dea8], al */
  w8((uint32_t)(0x1122dea8), (AL));
  /* 1120e809 mov dword ptr [0x1122deac], 1 */
  w32((uint32_t)(0x1122deac), (0x1u));
  /* 1120e813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120e815 jmp 0x1120e942 */
  goto L_1120e942;
L_1120e81a:;
  /* 1120e81a push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e81c mov ecx, dword ptr [0x1122f688] */
  ECX = (r32((uint32_t)(0x1122f688)));
  /* 1120e822 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e823 call 0x11203fe0 */
  push32(0x1120e828u); f_11203fe0();
  /* 1120e828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e82b push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e82d mov edx, dword ptr [0x1122f68c] */
  EDX = (r32((uint32_t)(0x1122f68c)));
  /* 1120e833 push edx */
  push32((uint32_t)(EDX));
  /* 1120e834 call 0x11203fe0 */
  push32(0x1120e839u); f_11203fe0();
  /* 1120e839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e83c push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e83e mov eax, dword ptr [0x1122f690] */
  EAX = (r32((uint32_t)(0x1122f690)));
  /* 1120e843 push eax */
  push32((uint32_t)(EAX));
  /* 1120e844 call 0x11203fe0 */
  push32(0x1120e849u); f_11203fe0();
  /* 1120e849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e84c mov dword ptr [0x1122f688], 0 */
  w32((uint32_t)(0x1122f688), (0x0u));
  /* 1120e856 mov dword ptr [0x1122f68c], 0 */
  w32((uint32_t)(0x1122f68c), (0x0u));
  /* 1120e860 mov dword ptr [0x1122f690], 0 */
  w32((uint32_t)(0x1122f690), (0x0u));
  /* 1120e86a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1120e86f push 0x1122b08c */
  push32((uint32_t)(0x1122b08cu));
  /* 1120e874 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e876 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e878 call 0x11203550 */
  push32(0x1120e87du); f_11203550();
  /* 1120e87d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e880 mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e886 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1120e888 mov edx, dword ptr [0x1122ed88] */
  EDX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e88e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e891 jne 0x1120e89b */
  if (!C.zf) goto L_1120e89b;
  /* 1120e893 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120e896 jmp 0x1120e942 */
  goto L_1120e942;
L_1120e89b:;
  /* 1120e89b push 0x1122b05c */
  push32((uint32_t)(0x1122b05cu));
  /* 1120e8a0 mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e8a5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1120e8a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e8a8 call 0x11206500 */
  push32(0x1120e8adu); f_11206500();
  /* 1120e8ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e8b0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1120e8b5 push 0x1122b08c */
  push32((uint32_t)(0x1122b08cu));
  /* 1120e8ba push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e8bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e8be call 0x11203550 */
  push32(0x1120e8c3u); f_11203550();
  /* 1120e8c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e8c6 mov edx, dword ptr [0x1122ed88] */
  EDX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e8cc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1120e8cf mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e8d4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e8d8 jne 0x1120e8df */
  if (!C.zf) goto L_1120e8df;
  /* 1120e8da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120e8dd jmp 0x1120e942 */
  goto L_1120e942;
L_1120e8df:;
  /* 1120e8df mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e8e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120e8e8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1120e8eb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1120e8f0 push 0x1122b08c */
  push32((uint32_t)(0x1122b08cu));
  /* 1120e8f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e8f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e8f9 call 0x11203550 */
  push32(0x1120e8feu); f_11203550();
  /* 1120e8fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e901 mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e907 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1120e90a mov edx, dword ptr [0x1122ed88] */
  EDX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e910 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e914 jne 0x1120e91b */
  if (!C.zf) goto L_1120e91b;
  /* 1120e916 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120e919 jmp 0x1120e942 */
  goto L_1120e942;
L_1120e91b:;
  /* 1120e91b mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e920 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1120e923 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1120e926 mov edx, dword ptr [0x1122ed88] */
  EDX = (r32((uint32_t)(0x1122ed88)));
  /* 1120e92c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1120e92e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1120e930 mov byte ptr [0x1122dea8], cl */
  w8((uint32_t)(0x1122dea8), (CL));
  /* 1120e936 mov dword ptr [0x1122deac], 1 */
  w32((uint32_t)(0x1122deac), (0x1u));
  /* 1120e940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120e942:;
  /* 1120e942 mov esp, ebp */
  ESP = (EBP);
  /* 1120e944 pop ebp */
  EBP = (pop32());
  /* 1120e945 ret  */
  ESPCHK(0x1120e6a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1120e950 (125 bytes, 49 insns) */
void f_1120e950(void) {
  FTRACE(0x1120e950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120e950 push ebp */
  push32((uint32_t)(EBP));
  /* 1120e951 mov ebp, esp */
  EBP = (ESP);
  /* 1120e953 push ecx */
  push32((uint32_t)(ECX));
L_1120e954:;
  /* 1120e954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e957 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120e95a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120e95c je 0x1120e9c9 */
  if (C.zf) goto L_1120e9c9;
  /* 1120e95e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e961 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120e964 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e967 jl 0x1120e98d */
  if ((C.sf!=C.of)) goto L_1120e98d;
  /* 1120e969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e96c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120e96f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e972 jg 0x1120e98d */
  if ((!C.zf&&C.sf==C.of)) goto L_1120e98d;
  /* 1120e974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e977 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120e97a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120e97d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e980 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1120e982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e985 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e988 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1120e98b jmp 0x1120e9c7 */
  goto L_1120e9c7;
L_1120e98d:;
  /* 1120e98d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e990 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120e993 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e996 jne 0x1120e9be */
  if (!C.zf) goto L_1120e9be;
  /* 1120e998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e99b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120e99e:;
  /* 1120e99e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e9a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e9a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1120e9a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1120e9a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e9ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e9af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120e9b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120e9b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120e9b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120e9ba jne 0x1120e99e */
  if (!C.zf) goto L_1120e99e;
  /* 1120e9bc jmp 0x1120e9c7 */
  goto L_1120e9c7;
L_1120e9be:;
  /* 1120e9be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120e9c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e9c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1120e9c7:;
  /* 1120e9c7 jmp 0x1120e954 */
  goto L_1120e954;
L_1120e9c9:;
  /* 1120e9c9 mov esp, ebp */
  ESP = (EBP);
  /* 1120e9cb pop ebp */
  EBP = (pop32());
  /* 1120e9cc ret  */
  ESPCHK(0x1120e950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9d0 @ 0x1120e9d0 (304 bytes, 85 insns) */
void f_1120e9d0(void) {
  FTRACE(0x1120e9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120e9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120e9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1120e9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120e9d4 cmp dword ptr [0x1122f65c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f65c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e9db je 0x1120ea9c */
  if (C.zf) goto L_1120ea9c;
  /* 1120e9e1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1120e9e3 push 0x1122b098 */
  push32((uint32_t)(0x1122b098u));
  /* 1120e9e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120e9ea push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1120e9ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1120e9ee call 0x11203960 */
  push32(0x1120e9f3u); f_11203960();
  /* 1120e9f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120e9f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120e9f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120e9fd jne 0x1120ea09 */
  if (!C.zf) goto L_1120ea09;
  /* 1120e9ff mov eax, 1 */
  EAX = (0x1u);
  /* 1120ea04 jmp 0x1120eafc */
  goto L_1120eafc;
L_1120ea09:;
  /* 1120ea09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea0c push eax */
  push32((uint32_t)(EAX));
  /* 1120ea0d call 0x1120eb00 */
  push32(0x1120ea12u); f_1120eb00();
  /* 1120ea12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ea15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ea17 je 0x1120ea3d */
  if (C.zf) goto L_1120ea3d;
  /* 1120ea19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea1c push ecx */
  push32((uint32_t)(ECX));
  /* 1120ea1d call 0x1120ed90 */
  push32(0x1120ea22u); f_1120ed90();
  /* 1120ea22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ea25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120ea27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea2a push edx */
  push32((uint32_t)(EDX));
  /* 1120ea2b call 0x11203fe0 */
  push32(0x1120ea30u); f_11203fe0();
  /* 1120ea30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ea33 mov eax, 1 */
  EAX = (0x1u);
  /* 1120ea38 jmp 0x1120eafc */
  goto L_1120eafc;
L_1120ea3d:;
  /* 1120ea3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea40 mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120ea46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120ea48 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1120ea4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea4d mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120ea53 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1120ea56 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1120ea59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea5c mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120ea62 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1120ea65 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1120ea68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea6b mov dword ptr [0x1122ed88], eax */
  w32((uint32_t)(0x1122ed88), (EAX));
  /* 1120ea70 mov ecx, dword ptr [0x1122f694] */
  ECX = (r32((uint32_t)(0x1122f694)));
  /* 1120ea76 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ea77 call 0x1120ed90 */
  push32(0x1120ea7cu); f_1120ed90();
  /* 1120ea7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ea7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1120ea81 mov edx, dword ptr [0x1122f694] */
  EDX = (r32((uint32_t)(0x1122f694)));
  /* 1120ea87 push edx */
  push32((uint32_t)(EDX));
  /* 1120ea88 call 0x11203fe0 */
  push32(0x1120ea8du); f_11203fe0();
  /* 1120ea8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ea90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ea93 mov dword ptr [0x1122f694], eax */
  w32((uint32_t)(0x1122f694), (EAX));
  /* 1120ea98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120ea9a jmp 0x1120eafc */
  goto L_1120eafc;
L_1120ea9c:;
  /* 1120ea9c mov ecx, dword ptr [0x1122ed88] */
  ECX = (r32((uint32_t)(0x1122ed88)));
  /* 1120eaa2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120eaa4 mov dword ptr [0x1122ed58], edx */
  w32((uint32_t)(0x1122ed58), (EDX));
  /* 1120eaaa mov eax, dword ptr [0x1122ed88] */
  EAX = (r32((uint32_t)(0x1122ed88)));
  /* 1120eaaf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1120eab2 mov dword ptr [0x1122ed5c], ecx */
  w32((uint32_t)(0x1122ed5c), (ECX));
  /* 1120eab8 mov edx, dword ptr [0x1122ed88] */
  EDX = (r32((uint32_t)(0x1122ed88)));
  /* 1120eabe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1120eac1 mov dword ptr [0x1122ed60], eax */
  w32((uint32_t)(0x1122ed60), (EAX));
  /* 1120eac6 mov dword ptr [0x1122ed88], 0x1122ed58 */
  w32((uint32_t)(0x1122ed88), (0x1122ed58u));
  /* 1120ead0 mov ecx, dword ptr [0x1122f694] */
  ECX = (r32((uint32_t)(0x1122f694)));
  /* 1120ead6 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ead7 call 0x1120ed90 */
  push32(0x1120eadcu); f_1120ed90();
  /* 1120eadc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eadf push 2 */
  push32((uint32_t)(0x2u));
  /* 1120eae1 mov edx, dword ptr [0x1122f694] */
  EDX = (r32((uint32_t)(0x1122f694)));
  /* 1120eae7 push edx */
  push32((uint32_t)(EDX));
  /* 1120eae8 call 0x11203fe0 */
  push32(0x1120eaedu); f_11203fe0();
  /* 1120eaed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eaf0 mov dword ptr [0x1122f694], 0 */
  w32((uint32_t)(0x1122f694), (0x0u));
  /* 1120eafa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120eafc:;
  /* 1120eafc mov esp, ebp */
  ESP = (EBP);
  /* 1120eafe pop ebp */
  EBP = (pop32());
  /* 1120eaff ret  */
  ESPCHK(0x1120e9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb00 @ 0x1120eb00 (525 bytes, 200 insns) */
void f_1120eb00(void) {
  FTRACE(0x1120eb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120eb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1120eb01 mov ebp, esp */
  EBP = (ESP);
  /* 1120eb03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120eb06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120eb0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120eb0f mov ax, word ptr [0x1122f6b4] */
  AX = (r16((uint32_t)(0x1122f6b4)));
  /* 1120eb15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120eb18 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120eb1c jne 0x1120eb26 */
  if (!C.zf) goto L_1120eb26;
  /* 1120eb1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120eb21 jmp 0x1120ed09 */
  goto L_1120ed09;
L_1120eb26:;
  /* 1120eb26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120eb29 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb2c push ecx */
  push32((uint32_t)(ECX));
  /* 1120eb2d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1120eb2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120eb32 push edx */
  push32((uint32_t)(EDX));
  /* 1120eb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120eb35 call 0x11211710 */
  push32(0x1120eb3au); f_11211710();
  /* 1120eb3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120eb40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120eb42 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120eb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120eb48 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb4b push edx */
  push32((uint32_t)(EDX));
  /* 1120eb4c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1120eb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120eb51 push eax */
  push32((uint32_t)(EAX));
  /* 1120eb52 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120eb54 call 0x11211710 */
  push32(0x1120eb59u); f_11211710();
  /* 1120eb59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120eb5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120eb61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120eb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120eb67 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb6a push edx */
  push32((uint32_t)(EDX));
  /* 1120eb6b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1120eb6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120eb70 push eax */
  push32((uint32_t)(EAX));
  /* 1120eb71 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120eb73 call 0x11211710 */
  push32(0x1120eb78u); f_11211710();
  /* 1120eb78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120eb7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120eb80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120eb83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120eb86 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb89 push edx */
  push32((uint32_t)(EDX));
  /* 1120eb8a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1120eb8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120eb8f push eax */
  push32((uint32_t)(EAX));
  /* 1120eb90 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120eb92 call 0x11211710 */
  push32(0x1120eb97u); f_11211710();
  /* 1120eb97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eb9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120eb9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120eb9f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120eba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120eba5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eba8 push edx */
  push32((uint32_t)(EDX));
  /* 1120eba9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1120ebab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ebae push eax */
  push32((uint32_t)(EAX));
  /* 1120ebaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1120ebb1 call 0x11211710 */
  push32(0x1120ebb6u); f_11211710();
  /* 1120ebb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ebb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ebbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ebbe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ebc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ebc4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1120ebc7 push eax */
  push32((uint32_t)(EAX));
  /* 1120ebc8 call 0x1120ed10 */
  push32(0x1120ebcdu); f_1120ed10();
  /* 1120ebcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ebd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ebd3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ebd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1120ebd7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1120ebd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ebdc push edx */
  push32((uint32_t)(EDX));
  /* 1120ebdd push 1 */
  push32((uint32_t)(0x1u));
  /* 1120ebdf call 0x11211710 */
  push32(0x1120ebe4u); f_11211710();
  /* 1120ebe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ebe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ebea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ebec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ebef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ebf2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ebf5 push edx */
  push32((uint32_t)(EDX));
  /* 1120ebf6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1120ebf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ebfb push eax */
  push32((uint32_t)(EAX));
  /* 1120ebfc push 1 */
  push32((uint32_t)(0x1u));
  /* 1120ebfe call 0x11211710 */
  push32(0x1120ec03u); f_11211710();
  /* 1120ec03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ec09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ec0b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ec0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ec11 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec14 push edx */
  push32((uint32_t)(EDX));
  /* 1120ec15 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1120ec17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ec1a push eax */
  push32((uint32_t)(EAX));
  /* 1120ec1b push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ec1d call 0x11211710 */
  push32(0x1120ec22u); f_11211710();
  /* 1120ec22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ec28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ec2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ec2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ec30 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec33 push edx */
  push32((uint32_t)(EDX));
  /* 1120ec34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1120ec36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ec39 push eax */
  push32((uint32_t)(EAX));
  /* 1120ec3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ec3c call 0x11211710 */
  push32(0x1120ec41u); f_11211710();
  /* 1120ec41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ec47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ec49 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ec4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ec4f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec52 push edx */
  push32((uint32_t)(EDX));
  /* 1120ec53 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1120ec55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ec58 push eax */
  push32((uint32_t)(EAX));
  /* 1120ec59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ec5b call 0x11211710 */
  push32(0x1120ec60u); f_11211710();
  /* 1120ec60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ec66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ec68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ec6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ec6e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec71 push edx */
  push32((uint32_t)(EDX));
  /* 1120ec72 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1120ec74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ec77 push eax */
  push32((uint32_t)(EAX));
  /* 1120ec78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ec7a call 0x11211710 */
  push32(0x1120ec7fu); f_11211710();
  /* 1120ec7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ec85 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ec87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ec8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ec8d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ec90 push edx */
  push32((uint32_t)(EDX));
  /* 1120ec91 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1120ec93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ec96 push eax */
  push32((uint32_t)(EAX));
  /* 1120ec97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ec99 call 0x11211710 */
  push32(0x1120ec9eu); f_11211710();
  /* 1120ec9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eca1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120eca4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120eca6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120eca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ecac add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ecaf push edx */
  push32((uint32_t)(EDX));
  /* 1120ecb0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1120ecb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ecb5 push eax */
  push32((uint32_t)(EAX));
  /* 1120ecb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ecb8 call 0x11211710 */
  push32(0x1120ecbdu); f_11211710();
  /* 1120ecbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ecc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ecc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ecc5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ecc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120eccb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ecce push edx */
  push32((uint32_t)(EDX));
  /* 1120eccf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1120ecd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ecd4 push eax */
  push32((uint32_t)(EAX));
  /* 1120ecd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ecd7 call 0x11211710 */
  push32(0x1120ecdcu); f_11211710();
  /* 1120ecdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ecdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ece2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ece4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ece7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ecea add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eced push edx */
  push32((uint32_t)(EDX));
  /* 1120ecee push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1120ecf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ecf3 push eax */
  push32((uint32_t)(EAX));
  /* 1120ecf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ecf6 call 0x11211710 */
  push32(0x1120ecfbu); f_11211710();
  /* 1120ecfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ecfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ed01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ed03 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ed06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1120ed09:;
  /* 1120ed09 mov esp, ebp */
  ESP = (EBP);
  /* 1120ed0b pop ebp */
  EBP = (pop32());
  /* 1120ed0c ret  */
  ESPCHK(0x1120eb00u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1120ed10 (125 bytes, 49 insns) */
void f_1120ed10(void) {
  FTRACE(0x1120ed10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120ed10 push ebp */
  push32((uint32_t)(EBP));
  /* 1120ed11 mov ebp, esp */
  EBP = (ESP);
  /* 1120ed13 push ecx */
  push32((uint32_t)(ECX));
L_1120ed14:;
  /* 1120ed14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120ed1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120ed1c je 0x1120ed89 */
  if (C.zf) goto L_1120ed89;
  /* 1120ed1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120ed24 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ed27 jl 0x1120ed4d */
  if ((C.sf!=C.of)) goto L_1120ed4d;
  /* 1120ed29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120ed2f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ed32 jg 0x1120ed4d */
  if ((!C.zf&&C.sf==C.of)) goto L_1120ed4d;
  /* 1120ed34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120ed3a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ed3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed40 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1120ed42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ed48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1120ed4b jmp 0x1120ed87 */
  goto L_1120ed87;
L_1120ed4d:;
  /* 1120ed4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120ed53 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ed56 jne 0x1120ed7e */
  if (!C.zf) goto L_1120ed7e;
  /* 1120ed58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120ed5e:;
  /* 1120ed5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ed61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ed64 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1120ed67 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1120ed69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ed6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ed6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120ed72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120ed75 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120ed78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ed7a jne 0x1120ed5e */
  if (!C.zf) goto L_1120ed5e;
  /* 1120ed7c jmp 0x1120ed87 */
  goto L_1120ed87;
L_1120ed7e:;
  /* 1120ed7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ed81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ed84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1120ed87:;
  /* 1120ed87 jmp 0x1120ed14 */
  goto L_1120ed14;
L_1120ed89:;
  /* 1120ed89 mov esp, ebp */
  ESP = (EBP);
  /* 1120ed8b pop ebp */
  EBP = (pop32());
  /* 1120ed8c ret  */
  ESPCHK(0x1120ed10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x1120ed90 (147 bytes, 52 insns) */
void f_1120ed90(void) {
  FTRACE(0x1120ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1120ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1120ed93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ed97 jne 0x1120ed9e */
  if (!C.zf) goto L_1120ed9e;
  /* 1120ed99 jmp 0x1120ee21 */
  goto L_1120ee21;
L_1120ed9e:;
  /* 1120ed9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120eda1 cmp dword ptr [eax + 0xc], 0x1122f6f0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1122f6f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120eda8 je 0x1120ee21 */
  if (C.zf) goto L_1120ee21;
  /* 1120edaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1120edac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120edaf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1120edb2 push edx */
  push32((uint32_t)(EDX));
  /* 1120edb3 call 0x11203fe0 */
  push32(0x1120edb8u); f_11203fe0();
  /* 1120edb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120edbb push 2 */
  push32((uint32_t)(0x2u));
  /* 1120edbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120edc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1120edc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120edc4 call 0x11203fe0 */
  push32(0x1120edc9u); f_11203fe0();
  /* 1120edc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120edcc push 2 */
  push32((uint32_t)(0x2u));
  /* 1120edce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120edd1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1120edd4 push eax */
  push32((uint32_t)(EAX));
  /* 1120edd5 call 0x11203fe0 */
  push32(0x1120eddau); f_11203fe0();
  /* 1120edda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eddd push 2 */
  push32((uint32_t)(0x2u));
  /* 1120eddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ede2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1120ede5 push edx */
  push32((uint32_t)(EDX));
  /* 1120ede6 call 0x11203fe0 */
  push32(0x1120edebu); f_11203fe0();
  /* 1120edeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120edee push 2 */
  push32((uint32_t)(0x2u));
  /* 1120edf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120edf3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1120edf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1120edf7 call 0x11203fe0 */
  push32(0x1120edfcu); f_11203fe0();
  /* 1120edfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120edff push 2 */
  push32((uint32_t)(0x2u));
  /* 1120ee01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ee04 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1120ee07 push eax */
  push32((uint32_t)(EAX));
  /* 1120ee08 call 0x11203fe0 */
  push32(0x1120ee0du); f_11203fe0();
  /* 1120ee0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ee10 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120ee12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ee15 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1120ee18 push edx */
  push32((uint32_t)(EDX));
  /* 1120ee19 call 0x11203fe0 */
  push32(0x1120ee1eu); f_11203fe0();
  /* 1120ee1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120ee21:;
  /* 1120ee21 pop ebp */
  EBP = (pop32());
  /* 1120ee22 ret  */
  ESPCHK(0x1120ed90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x1120ee30 (928 bytes, 284 insns) */
void f_1120ee30(void) {
  FTRACE(0x1120ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 1120ee31 mov ebp, esp */
  EBP = (ESP);
  /* 1120ee33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ee36 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1120ee3d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1120ee44 cmp dword ptr [0x1122f658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ee4b je 0x1120f181 */
  if (C.zf) goto L_1120f181;
  /* 1120ee51 cmp dword ptr [0x1122f668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ee58 jne 0x1120ee80 */
  if (!C.zf) goto L_1120ee80;
  /* 1120ee5a push 0x1122f668 */
  push32((uint32_t)(0x1122f668u));
  /* 1120ee5f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1120ee64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120ee66 mov ax, word ptr [0x1122f6ac] */
  AX = (r16((uint32_t)(0x1122f6ac)));
  /* 1120ee6c push eax */
  push32((uint32_t)(EAX));
  /* 1120ee6d push 0 */
  push32((uint32_t)(0x0u));
  /* 1120ee6f call 0x11211710 */
  push32(0x1120ee74u); f_11211710();
  /* 1120ee74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ee77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ee79 je 0x1120ee80 */
  if (C.zf) goto L_1120ee80;
  /* 1120ee7b jmp 0x1120f142 */
  goto L_1120f142;
L_1120ee80:;
  /* 1120ee80 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1120ee82 push 0x1122b0a4 */
  push32((uint32_t)(0x1122b0a4u));
  /* 1120ee87 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120ee89 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1120ee8e call 0x11203550 */
  push32(0x1120ee93u); f_11203550();
  /* 1120ee93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ee96 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1120ee99 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1120ee9b push 0x1122b0a4 */
  push32((uint32_t)(0x1122b0a4u));
  /* 1120eea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120eea2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1120eea7 call 0x11203550 */
  push32(0x1120eeacu); f_11203550();
  /* 1120eeac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eeaf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1120eeb2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1120eeb4 push 0x1122b0a4 */
  push32((uint32_t)(0x1122b0a4u));
  /* 1120eeb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120eebb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1120eec0 call 0x11203550 */
  push32(0x1120eec5u); f_11203550();
  /* 1120eec5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eec8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1120eecb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1120eecd push 0x1122b0a4 */
  push32((uint32_t)(0x1122b0a4u));
  /* 1120eed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120eed4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1120eed9 call 0x11203550 */
  push32(0x1120eedeu); f_11203550();
  /* 1120eede add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120eee1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1120eee4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120eee8 je 0x1120eefc */
  if (C.zf) goto L_1120eefc;
  /* 1120eeea cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120eeee je 0x1120eefc */
  if (C.zf) goto L_1120eefc;
  /* 1120eef0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120eef4 je 0x1120eefc */
  if (C.zf) goto L_1120eefc;
  /* 1120eef6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120eefa jne 0x1120ef01 */
  if (!C.zf) goto L_1120ef01;
L_1120eefc:;
  /* 1120eefc jmp 0x1120f142 */
  goto L_1120f142;
L_1120ef01:;
  /* 1120ef01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120ef04 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1120ef07 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1120ef0e jmp 0x1120ef19 */
  goto L_1120ef19;
L_1120ef10:;
  /* 1120ef10 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120ef13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ef16 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1120ef19:;
  /* 1120ef19 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ef20 jge 0x1120ef35 */
  if ((C.sf==C.of)) goto L_1120ef35;
  /* 1120ef22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120ef25 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1120ef28 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1120ef2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120ef2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ef30 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1120ef33 jmp 0x1120ef10 */
  goto L_1120ef10;
L_1120ef35:;
  /* 1120ef35 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1120ef38 push eax */
  push32((uint32_t)(EAX));
  /* 1120ef39 mov ecx, dword ptr [0x1122f668] */
  ECX = (r32((uint32_t)(0x1122f668)));
  /* 1120ef3f push ecx */
  push32((uint32_t)(ECX));
  /* 1120ef40 call dword ptr [0x112312e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312e4))), 0x1120ef46u);
  /* 1120ef46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ef48 jne 0x1120ef4f */
  if (!C.zf) goto L_1120ef4f;
  /* 1120ef4a jmp 0x1120f142 */
  goto L_1120f142;
L_1120ef4f:;
  /* 1120ef4f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ef53 jbe 0x1120ef5a */
  if ((C.cf||C.zf)) goto L_1120ef5a;
  /* 1120ef55 jmp 0x1120f142 */
  goto L_1120f142;
L_1120ef5a:;
  /* 1120ef5a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1120ef5d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1120ef63 mov dword ptr [0x1122dea4], edx */
  w32((uint32_t)(0x1122dea4), (EDX));
  /* 1120ef69 cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ef70 jle 0x1120efc9 */
  if ((C.zf||C.sf!=C.of)) goto L_1120efc9;
  /* 1120ef72 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1120ef75 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1120ef78 jmp 0x1120ef83 */
  goto L_1120ef83;
L_1120ef7a:;
  /* 1120ef7a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120ef7d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ef80 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1120ef83:;
  /* 1120ef83 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120ef86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120ef88 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120ef8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120ef8c je 0x1120efc9 */
  if (C.zf) goto L_1120efc9;
  /* 1120ef8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120ef91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120ef93 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1120ef96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120ef98 je 0x1120efc9 */
  if (C.zf) goto L_1120efc9;
  /* 1120ef9a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120ef9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120ef9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1120efa1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1120efa4 jmp 0x1120efaf */
  goto L_1120efaf;
L_1120efa6:;
  /* 1120efa6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120efa9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120efac mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1120efaf:;
  /* 1120efaf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120efb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120efb4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1120efb7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120efba jg 0x1120efc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120efc7;
  /* 1120efbc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120efbf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120efc2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1120efc5 jmp 0x1120efa6 */
  goto L_1120efa6;
L_1120efc7:;
  /* 1120efc7 jmp 0x1120ef7a */
  goto L_1120ef7a;
L_1120efc9:;
  /* 1120efc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120efcb push 0 */
  push32((uint32_t)(0x0u));
  /* 1120efcd push 0 */
  push32((uint32_t)(0x0u));
  /* 1120efcf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120efd2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120efd5 push eax */
  push32((uint32_t)(EAX));
  /* 1120efd6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1120efdb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120efde push ecx */
  push32((uint32_t)(ECX));
  /* 1120efdf push 1 */
  push32((uint32_t)(0x1u));
  /* 1120efe1 call 0x1120b780 */
  push32(0x1120efe6u); f_1120b780();
  /* 1120efe6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120efe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120efeb jne 0x1120eff2 */
  if (!C.zf) goto L_1120eff2;
  /* 1120efed jmp 0x1120f142 */
  goto L_1120f142;
L_1120eff2:;
  /* 1120eff2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120eff5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1120effa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120effd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1120f000 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1120f007 jmp 0x1120f012 */
  goto L_1120f012;
L_1120f009:;
  /* 1120f009 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120f00c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f00f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1120f012:;
  /* 1120f012 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f019 jge 0x1120f030 */
  if ((C.sf==C.of)) goto L_1120f030;
  /* 1120f01b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120f01e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1120f022 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1120f025 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1120f028 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f02b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1120f02e jmp 0x1120f009 */
  goto L_1120f009;
L_1120f030:;
  /* 1120f030 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120f032 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120f034 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120f037 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f03a push edx */
  push32((uint32_t)(EDX));
  /* 1120f03b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1120f040 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120f043 push eax */
  push32((uint32_t)(EAX));
  /* 1120f044 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120f046 call 0x112119b0 */
  push32(0x1120f04bu); f_112119b0();
  /* 1120f04b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f04e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f050 jne 0x1120f057 */
  if (!C.zf) goto L_1120f057;
  /* 1120f052 jmp 0x1120f142 */
  goto L_1120f142;
L_1120f057:;
  /* 1120f057 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120f05a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1120f05f cmp dword ptr [0x1122dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1122dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f066 jle 0x1120f0c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1120f0c3;
  /* 1120f068 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1120f06b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1120f06e jmp 0x1120f079 */
  goto L_1120f079;
L_1120f070:;
  /* 1120f070 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120f073 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f076 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1120f079:;
  /* 1120f079 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120f07c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1120f07e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1120f080 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120f082 je 0x1120f0c3 */
  if (C.zf) goto L_1120f0c3;
  /* 1120f084 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120f087 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120f089 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1120f08c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120f08e je 0x1120f0c3 */
  if (C.zf) goto L_1120f0c3;
  /* 1120f090 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120f093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f095 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120f097 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1120f09a jmp 0x1120f0a5 */
  goto L_1120f0a5;
L_1120f09c:;
  /* 1120f09c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120f09f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f0a2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1120f0a5:;
  /* 1120f0a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1120f0a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f0aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1120f0ad cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f0b0 jg 0x1120f0c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120f0c1;
  /* 1120f0b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1120f0b5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120f0b8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1120f0bf jmp 0x1120f09c */
  goto L_1120f09c;
L_1120f0c1:;
  /* 1120f0c1 jmp 0x1120f070 */
  goto L_1120f070;
L_1120f0c3:;
  /* 1120f0c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120f0c6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f0c9 mov dword ptr [0x1122dc98], eax */
  w32((uint32_t)(0x1122dc98), (EAX));
  /* 1120f0ce mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120f0d1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f0d4 mov dword ptr [0x1122dc9c], ecx */
  w32((uint32_t)(0x1122dc9c), (ECX));
  /* 1120f0da cmp dword ptr [0x1122f698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f0e1 je 0x1120f0f4 */
  if (C.zf) goto L_1120f0f4;
  /* 1120f0e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f0e5 mov edx, dword ptr [0x1122f698] */
  EDX = (r32((uint32_t)(0x1122f698)));
  /* 1120f0eb push edx */
  push32((uint32_t)(EDX));
  /* 1120f0ec call 0x11203fe0 */
  push32(0x1120f0f1u); f_11203fe0();
  /* 1120f0f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120f0f4:;
  /* 1120f0f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120f0f7 mov dword ptr [0x1122f698], eax */
  w32((uint32_t)(0x1122f698), (EAX));
  /* 1120f0fc cmp dword ptr [0x1122f69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f103 je 0x1120f116 */
  if (C.zf) goto L_1120f116;
  /* 1120f105 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f107 mov ecx, dword ptr [0x1122f69c] */
  ECX = (r32((uint32_t)(0x1122f69c)));
  /* 1120f10d push ecx */
  push32((uint32_t)(ECX));
  /* 1120f10e call 0x11203fe0 */
  push32(0x1120f113u); f_11203fe0();
  /* 1120f113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120f116:;
  /* 1120f116 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120f119 mov dword ptr [0x1122f69c], edx */
  w32((uint32_t)(0x1122f69c), (EDX));
  /* 1120f11f push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f121 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120f124 push eax */
  push32((uint32_t)(EAX));
  /* 1120f125 call 0x11203fe0 */
  push32(0x1120f12au); f_11203fe0();
  /* 1120f12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f12d push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f12f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120f132 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f133 call 0x11203fe0 */
  push32(0x1120f138u); f_11203fe0();
  /* 1120f138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f13b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f13d jmp 0x1120f1cc */
  goto L_1120f1cc;
L_1120f142:;
  /* 1120f142 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f144 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1120f147 push edx */
  push32((uint32_t)(EDX));
  /* 1120f148 call 0x11203fe0 */
  push32(0x1120f14du); f_11203fe0();
  /* 1120f14d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f150 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f152 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1120f155 push eax */
  push32((uint32_t)(EAX));
  /* 1120f156 call 0x11203fe0 */
  push32(0x1120f15bu); f_11203fe0();
  /* 1120f15b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f15e push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f160 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1120f163 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f164 call 0x11203fe0 */
  push32(0x1120f169u); f_11203fe0();
  /* 1120f169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f16c push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f16e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1120f171 push edx */
  push32((uint32_t)(EDX));
  /* 1120f172 call 0x11203fe0 */
  push32(0x1120f177u); f_11203fe0();
  /* 1120f177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f17a mov eax, 1 */
  EAX = (0x1u);
  /* 1120f17f jmp 0x1120f1cc */
  goto L_1120f1cc;
L_1120f181:;
  /* 1120f181 mov dword ptr [0x1122dc98], 0x1122dca2 */
  w32((uint32_t)(0x1122dc98), (0x1122dca2u));
  /* 1120f18b mov dword ptr [0x1122dc9c], 0x1122dca2 */
  w32((uint32_t)(0x1122dc9c), (0x1122dca2u));
  /* 1120f195 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f197 mov eax, dword ptr [0x1122f698] */
  EAX = (r32((uint32_t)(0x1122f698)));
  /* 1120f19c push eax */
  push32((uint32_t)(EAX));
  /* 1120f19d call 0x11203fe0 */
  push32(0x1120f1a2u); f_11203fe0();
  /* 1120f1a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f1a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1120f1a7 mov ecx, dword ptr [0x1122f69c] */
  ECX = (r32((uint32_t)(0x1122f69c)));
  /* 1120f1ad push ecx */
  push32((uint32_t)(ECX));
  /* 1120f1ae call 0x11203fe0 */
  push32(0x1120f1b3u); f_11203fe0();
  /* 1120f1b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f1b6 mov dword ptr [0x1122f698], 0 */
  w32((uint32_t)(0x1122f698), (0x0u));
  /* 1120f1c0 mov dword ptr [0x1122f69c], 0 */
  w32((uint32_t)(0x1122f69c), (0x0u));
  /* 1120f1ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1120f1cc:;
  /* 1120f1cc mov esp, ebp */
  ESP = (EBP);
  /* 1120f1ce pop ebp */
  EBP = (pop32());
  /* 1120f1cf ret  */
  ESPCHK(0x1120ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1d0 @ 0x1120f1d0 (7 bytes, 5 insns) */
void f_1120f1d0(void) {
  FTRACE(0x1120f1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1120f1d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f1d5 pop ebp */
  EBP = (pop32());
  /* 1120f1d6 ret  */
  ESPCHK(0x1120f1d0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1120f1e0 (129 bytes, 56 insns) */
void f_1120f1e0(void) {
  FTRACE(0x1120f1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f1e0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1120f1e4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1120f1e8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1120f1ee jne 0x1120f22c */
  if (!C.zf) goto L_1120f22c;
L_1120f1f0:;
  /* 1120f1f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1120f1f2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f1f4 jne 0x1120f224 */
  if (!C.zf) goto L_1120f224;
  /* 1120f1f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f1f8 je 0x1120f220 */
  if (C.zf) goto L_1120f220;
  /* 1120f1fa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f1fd jne 0x1120f224 */
  if (!C.zf) goto L_1120f224;
  /* 1120f1ff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1120f201 je 0x1120f220 */
  if (C.zf) goto L_1120f220;
  /* 1120f203 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1120f206 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f209 jne 0x1120f224 */
  if (!C.zf) goto L_1120f224;
  /* 1120f20b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f20d je 0x1120f220 */
  if (C.zf) goto L_1120f220;
  /* 1120f20f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f212 jne 0x1120f224 */
  if (!C.zf) goto L_1120f224;
  /* 1120f214 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f217 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f21a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1120f21c jne 0x1120f1f0 */
  if (!C.zf) goto L_1120f1f0;
  /* 1120f21e mov edi, edi */
  EDI = (EDI);
L_1120f220:;
  /* 1120f220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f222 ret  */
  ESPCHK(0x1120f1e0u, _esp0);
  ESP += 4; return;
  /* 1120f223 nop  */
  /* nop */
L_1120f224:;
  /* 1120f224 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f226 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1120f228 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1120f229 ret  */
  ESPCHK(0x1120f1e0u, _esp0);
  ESP += 4; return;
  /* 1120f22a mov edi, edi */
  EDI = (EDI);
L_1120f22c:;
  /* 1120f22c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1120f232 je 0x1120f248 */
  if (C.zf) goto L_1120f248;
  /* 1120f234 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120f236 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1120f237 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f239 jne 0x1120f224 */
  if (!C.zf) goto L_1120f224;
  /* 1120f23b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1120f23c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f23e je 0x1120f220 */
  if (C.zf) goto L_1120f220;
  /* 1120f240 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1120f246 je 0x1120f1f0 */
  if (C.zf) goto L_1120f1f0;
L_1120f248:;
  /* 1120f248 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1120f24b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f24e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f250 jne 0x1120f224 */
  if (!C.zf) goto L_1120f224;
  /* 1120f252 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f254 je 0x1120f220 */
  if (C.zf) goto L_1120f220;
  /* 1120f256 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f259 jne 0x1120f224 */
  if (!C.zf) goto L_1120f224;
  /* 1120f25b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1120f25d je 0x1120f220 */
  if (C.zf) goto L_1120f220;
  /* 1120f25f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f262 jmp 0x1120f1f0 */
  goto L_1120f1f0;
}

/* FUN_1000f270 @ 0x1120f270 (62 bytes, 35 insns) */
void f_1120f270(void) {
  FTRACE(0x1120f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f271 mov ebp, esp */
  EBP = (ESP);
  /* 1120f273 push esi */
  push32((uint32_t)(ESI));
  /* 1120f274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f276 push eax */
  push32((uint32_t)(EAX));
  /* 1120f277 push eax */
  push32((uint32_t)(EAX));
  /* 1120f278 push eax */
  push32((uint32_t)(EAX));
  /* 1120f279 push eax */
  push32((uint32_t)(EAX));
  /* 1120f27a push eax */
  push32((uint32_t)(EAX));
  /* 1120f27b push eax */
  push32((uint32_t)(EAX));
  /* 1120f27c push eax */
  push32((uint32_t)(EAX));
  /* 1120f27d push eax */
  push32((uint32_t)(EAX));
  /* 1120f27e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120f281 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120f284:;
  /* 1120f284 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120f286 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f288 je 0x1120f291 */
  if (C.zf) goto L_1120f291;
  /* 1120f28a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1120f28b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1120f28b");
  /* 1120f28f jmp 0x1120f284 */
  goto L_1120f284;
L_1120f291:;
  /* 1120f291 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f294 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1120f297 nop  */
  /* nop */
L_1120f298:;
  /* 1120f298 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1120f299 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120f29b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f29d je 0x1120f2a6 */
  if (C.zf) goto L_1120f2a6;
  /* 1120f29f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1120f2a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1120f2a0");
  /* 1120f2a4 jae 0x1120f298 */
  if (!C.cf) goto L_1120f298;
L_1120f2a6:;
  /* 1120f2a6 mov eax, ecx */
  EAX = (ECX);
  /* 1120f2a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f2ab pop esi */
  ESI = (pop32());
  /* 1120f2ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120f2ad ret  */
  ESPCHK(0x1120f270u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1120f2b0 (56 bytes, 31 insns) */
void f_1120f2b0(void) {
  FTRACE(0x1120f2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1120f2b3 push edi */
  push32((uint32_t)(EDI));
  /* 1120f2b4 push esi */
  push32((uint32_t)(ESI));
  /* 1120f2b5 push ebx */
  push32((uint32_t)(EBX));
  /* 1120f2b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120f2b9 jecxz 0x1120f2e1 */
  x86_unimpl("jecxz @ 0x1120f2b9");
  /* 1120f2bb mov ebx, ecx */
  EBX = (ECX);
  /* 1120f2bd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f2c0 mov esi, edi */
  ESI = (EDI);
  /* 1120f2c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f2c4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1120f2c6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120f2c8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f2ca mov edi, esi */
  EDI = (ESI);
  /* 1120f2cc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1120f2cf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1120f2d1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1120f2d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120f2d6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1120f2d9 ja 0x1120f2df */
  if ((!C.cf&&!C.zf)) goto L_1120f2df;
  /* 1120f2db je 0x1120f2e1 */
  if (C.zf) goto L_1120f2e1;
  /* 1120f2dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1120f2de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1120f2df:;
  /* 1120f2df not ecx */
  ECX = (~(ECX));
L_1120f2e1:;
  /* 1120f2e1 mov eax, ecx */
  EAX = (ECX);
  /* 1120f2e3 pop ebx */
  EBX = (pop32());
  /* 1120f2e4 pop esi */
  ESI = (pop32());
  /* 1120f2e5 pop edi */
  EDI = (pop32());
  /* 1120f2e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120f2e7 ret  */
  ESPCHK(0x1120f2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2f0 @ 0x1120f2f0 (58 bytes, 32 insns) */
void f_1120f2f0(void) {
  FTRACE(0x1120f2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1120f2f3 push esi */
  push32((uint32_t)(ESI));
  /* 1120f2f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f2f6 push eax */
  push32((uint32_t)(EAX));
  /* 1120f2f7 push eax */
  push32((uint32_t)(EAX));
  /* 1120f2f8 push eax */
  push32((uint32_t)(EAX));
  /* 1120f2f9 push eax */
  push32((uint32_t)(EAX));
  /* 1120f2fa push eax */
  push32((uint32_t)(EAX));
  /* 1120f2fb push eax */
  push32((uint32_t)(EAX));
  /* 1120f2fc push eax */
  push32((uint32_t)(EAX));
  /* 1120f2fd push eax */
  push32((uint32_t)(EAX));
  /* 1120f2fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120f301 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1120f304:;
  /* 1120f304 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1120f306 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f308 je 0x1120f311 */
  if (C.zf) goto L_1120f311;
  /* 1120f30a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1120f30b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1120f30b");
  /* 1120f30f jmp 0x1120f304 */
  goto L_1120f304;
L_1120f311:;
  /* 1120f311 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1120f314:;
  /* 1120f314 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1120f316 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1120f318 je 0x1120f324 */
  if (C.zf) goto L_1120f324;
  /* 1120f31a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1120f31b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1120f31b");
  /* 1120f31f jae 0x1120f314 */
  if (!C.cf) goto L_1120f314;
  /* 1120f321 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1120f324:;
  /* 1120f324 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f327 pop esi */
  ESI = (pop32());
  /* 1120f328 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1120f329 ret  */
  ESPCHK(0x1120f2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f330 @ 0x1120f330 (512 bytes, 147 insns) */
void f_1120f330(void) {
  FTRACE(0x1120f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f330 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f331 mov ebp, esp */
  EBP = (ESP);
  /* 1120f333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f336 cmp dword ptr [0x1122f6e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f33d jne 0x1120f362 */
  if (!C.zf) goto L_1120f362;
  /* 1120f33f call 0x1120fe00 */
  push32(0x1120f344u); f_1120fe00();
  /* 1120f344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f346 je 0x1120f352 */
  if (C.zf) goto L_1120f352;
  /* 1120f348 mov eax, dword ptr [0x112312a8] */
  EAX = (r32((uint32_t)(0x112312a8)));
  /* 1120f34d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120f350 jmp 0x1120f359 */
  goto L_1120f359;
L_1120f352:;
  /* 1120f352 mov dword ptr [ebp - 8], 0x1120fe50 */
  w32((uint32_t)(EBP + -0x8), (0x1120fe50u));
L_1120f359:;
  /* 1120f359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120f35c mov dword ptr [0x1122f6e4], ecx */
  w32((uint32_t)(0x1122f6e4), (ECX));
L_1120f362:;
  /* 1120f362 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f366 jne 0x1120f372 */
  if (!C.zf) goto L_1120f372;
  /* 1120f368 call 0x1120fc50 */
  push32(0x1120f36du); f_1120fc50();
  /* 1120f36d jmp 0x1120f43e */
  goto L_1120f43e;
L_1120f372:;
  /* 1120f372 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f375 mov dword ptr [0x1122f6d4], edx */
  w32((uint32_t)(0x1122f6d4), (EDX));
  /* 1120f37b cmp dword ptr [0x1122f6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f382 je 0x1120f3a4 */
  if (C.zf) goto L_1120f3a4;
  /* 1120f384 mov eax, dword ptr [0x1122f6d4] */
  EAX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f389 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120f38c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120f38e je 0x1120f3a4 */
  if (C.zf) goto L_1120f3a4;
  /* 1120f390 push 0x1122f6d4 */
  push32((uint32_t)(0x1122f6d4u));
  /* 1120f395 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1120f397 push 0x1122ea90 */
  push32((uint32_t)(0x1122ea90u));
  /* 1120f39c call 0x1120f530 */
  push32(0x1120f3a1u); f_1120f530();
  /* 1120f3a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120f3a4:;
  /* 1120f3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f3a7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f3aa mov dword ptr [0x1122f6d8], edx */
  w32((uint32_t)(0x1122f6d8), (EDX));
  /* 1120f3b0 cmp dword ptr [0x1122f6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f3b7 je 0x1120f3d9 */
  if (C.zf) goto L_1120f3d9;
  /* 1120f3b9 mov eax, dword ptr [0x1122f6d8] */
  EAX = (r32((uint32_t)(0x1122f6d8)));
  /* 1120f3be movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120f3c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120f3c3 je 0x1120f3d9 */
  if (C.zf) goto L_1120f3d9;
  /* 1120f3c5 push 0x1122f6d8 */
  push32((uint32_t)(0x1122f6d8u));
  /* 1120f3ca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1120f3cc push 0x1122e9d8 */
  push32((uint32_t)(0x1122e9d8u));
  /* 1120f3d1 call 0x1120f530 */
  push32(0x1120f3d6u); f_1120f530();
  /* 1120f3d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120f3d9:;
  /* 1120f3d9 mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
  /* 1120f3e3 cmp dword ptr [0x1122f6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f3ea je 0x1120f41d */
  if (C.zf) goto L_1120f41d;
  /* 1120f3ec mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f3f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1120f3f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f3f7 je 0x1120f41d */
  if (C.zf) goto L_1120f41d;
  /* 1120f3f9 cmp dword ptr [0x1122f6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f400 je 0x1120f416 */
  if (C.zf) goto L_1120f416;
  /* 1120f402 mov ecx, dword ptr [0x1122f6d8] */
  ECX = (r32((uint32_t)(0x1122f6d8)));
  /* 1120f408 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1120f40b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120f40d je 0x1120f416 */
  if (C.zf) goto L_1120f416;
  /* 1120f40f call 0x1120f5c0 */
  push32(0x1120f414u); f_1120f5c0();
  /* 1120f414 jmp 0x1120f41b */
  goto L_1120f41b;
L_1120f416:;
  /* 1120f416 call 0x1120f9b0 */
  push32(0x1120f41bu); f_1120f9b0();
L_1120f41b:;
  /* 1120f41b jmp 0x1120f43e */
  goto L_1120f43e;
L_1120f41d:;
  /* 1120f41d cmp dword ptr [0x1122f6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f424 je 0x1120f439 */
  if (C.zf) goto L_1120f439;
  /* 1120f426 mov eax, dword ptr [0x1122f6d8] */
  EAX = (r32((uint32_t)(0x1122f6d8)));
  /* 1120f42b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120f42e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120f430 je 0x1120f439 */
  if (C.zf) goto L_1120f439;
  /* 1120f432 call 0x1120fb50 */
  push32(0x1120f437u); f_1120fb50();
  /* 1120f437 jmp 0x1120f43e */
  goto L_1120f43e;
L_1120f439:;
  /* 1120f439 call 0x1120fc50 */
  push32(0x1120f43eu); f_1120fc50();
L_1120f43e:;
  /* 1120f43e cmp dword ptr [0x1122f6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f445 jne 0x1120f44e */
  if (!C.zf) goto L_1120f44e;
  /* 1120f447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f449 jmp 0x1120f52c */
  goto L_1120f52c;
L_1120f44e:;
  /* 1120f44e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f451 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f457 push edx */
  push32((uint32_t)(EDX));
  /* 1120f458 call 0x1120fc80 */
  push32(0x1120f45du); f_1120fc80();
  /* 1120f45d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f460 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120f463 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f467 je 0x1120f47c */
  if (C.zf) goto L_1120f47c;
  /* 1120f469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f46c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120f471 push eax */
  push32((uint32_t)(EAX));
  /* 1120f472 call dword ptr [0x112312ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312ac))), 0x1120f478u);
  /* 1120f478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f47a jne 0x1120f483 */
  if (!C.zf) goto L_1120f483;
L_1120f47c:;
  /* 1120f47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f47e jmp 0x1120f52c */
  goto L_1120f52c;
L_1120f483:;
  /* 1120f483 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120f485 mov ecx, dword ptr [0x1122f6c4] */
  ECX = (r32((uint32_t)(0x1122f6c4)));
  /* 1120f48b push ecx */
  push32((uint32_t)(ECX));
  /* 1120f48c call dword ptr [0x112312b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312b0))), 0x1120f492u);
  /* 1120f492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f494 jne 0x1120f49d */
  if (!C.zf) goto L_1120f49d;
  /* 1120f496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f498 jmp 0x1120f52c */
  goto L_1120f52c;
L_1120f49d:;
  /* 1120f49d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f4a1 je 0x1120f4c8 */
  if (C.zf) goto L_1120f4c8;
  /* 1120f4a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120f4a6 mov ax, word ptr [0x1122f6c4] */
  AX = (r16((uint32_t)(0x1122f6c4)));
  /* 1120f4ac mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1120f4af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120f4b2 mov dx, word ptr [0x1122f6e0] */
  DX = (r16((uint32_t)(0x1122f6e0)));
  /* 1120f4b9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1120f4bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120f4c0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1120f4c4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1120f4c8:;
  /* 1120f4c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f4cc je 0x1120f527 */
  if (C.zf) goto L_1120f527;
  /* 1120f4ce push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1120f4d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120f4d3 push edx */
  push32((uint32_t)(EDX));
  /* 1120f4d4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1120f4d9 mov eax, dword ptr [0x1122f6c4] */
  EAX = (r32((uint32_t)(0x1122f6c4)));
  /* 1120f4de push eax */
  push32((uint32_t)(EAX));
  /* 1120f4df call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120f4e5u);
  /* 1120f4e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f4e7 jne 0x1120f4ed */
  if (!C.zf) goto L_1120f4ed;
  /* 1120f4e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f4eb jmp 0x1120f52c */
  goto L_1120f52c;
L_1120f4ed:;
  /* 1120f4ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1120f4ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120f4f2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f4f6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1120f4fb mov edx, dword ptr [0x1122f6e0] */
  EDX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120f501 push edx */
  push32((uint32_t)(EDX));
  /* 1120f502 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120f508u);
  /* 1120f508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f50a jne 0x1120f510 */
  if (!C.zf) goto L_1120f510;
  /* 1120f50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120f50e jmp 0x1120f52c */
  goto L_1120f52c;
L_1120f510:;
  /* 1120f510 push 0xa */
  push32((uint32_t)(0xau));
  /* 1120f512 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120f515 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f51a push eax */
  push32((uint32_t)(EAX));
  /* 1120f51b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f51e push ecx */
  push32((uint32_t)(ECX));
  /* 1120f51f call 0x11206090 */
  push32(0x1120f524u); f_11206090();
  /* 1120f524 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120f527:;
  /* 1120f527 mov eax, 1 */
  EAX = (0x1u);
L_1120f52c:;
  /* 1120f52c mov esp, ebp */
  ESP = (EBP);
  /* 1120f52e pop ebp */
  EBP = (pop32());
  /* 1120f52f ret  */
  ESPCHK(0x1120f330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f530 @ 0x1120f530 (130 bytes, 47 insns) */
void f_1120f530(void) {
  FTRACE(0x1120f530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f530 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f531 mov ebp, esp */
  EBP = (ESP);
  /* 1120f533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f536 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1120f53d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1120f544:;
  /* 1120f544 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120f547 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f54a jg 0x1120f5ae */
  if ((!C.zf&&C.sf==C.of)) goto L_1120f5ae;
  /* 1120f54c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f550 je 0x1120f5ae */
  if (C.zf) goto L_1120f5ae;
  /* 1120f552 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120f555 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f558 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120f559 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f55b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1120f55d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120f560 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f566 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1120f569 push eax */
  push32((uint32_t)(EAX));
  /* 1120f56a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120f56d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1120f56f push edx */
  push32((uint32_t)(EDX));
  /* 1120f570 call 0x11211c20 */
  push32(0x1120f575u); f_11211c20();
  /* 1120f575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f578 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120f57b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f57f jne 0x1120f592 */
  if (!C.zf) goto L_1120f592;
  /* 1120f581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f587 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1120f58b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120f58e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1120f590 jmp 0x1120f5ac */
  goto L_1120f5ac;
L_1120f592:;
  /* 1120f592 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f596 jge 0x1120f5a3 */
  if ((C.sf==C.of)) goto L_1120f5a3;
  /* 1120f598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f59b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f59e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1120f5a1 jmp 0x1120f5ac */
  goto L_1120f5ac;
L_1120f5a3:;
  /* 1120f5a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f5a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f5a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1120f5ac:;
  /* 1120f5ac jmp 0x1120f544 */
  goto L_1120f544;
L_1120f5ae:;
  /* 1120f5ae mov esp, ebp */
  ESP = (EBP);
  /* 1120f5b0 pop ebp */
  EBP = (pop32());
  /* 1120f5b1 ret  */
  ESPCHK(0x1120f530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5c0 @ 0x1120f5c0 (186 bytes, 50 insns) */
void f_1120f5c0(void) {
  FTRACE(0x1120f5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1120f5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f5c4 mov eax, dword ptr [0x1122f6d4] */
  EAX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f5c9 push eax */
  push32((uint32_t)(EAX));
  /* 1120f5ca call 0x11206380 */
  push32(0x1120f5cfu); f_11206380();
  /* 1120f5cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f5d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120f5d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f5d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1120f5da mov dword ptr [0x1122f6d0], ecx */
  w32((uint32_t)(0x1122f6d0), (ECX));
  /* 1120f5e0 mov edx, dword ptr [0x1122f6d8] */
  EDX = (r32((uint32_t)(0x1122f6d8)));
  /* 1120f5e6 push edx */
  push32((uint32_t)(EDX));
  /* 1120f5e7 call 0x11206380 */
  push32(0x1120f5ecu); f_11206380();
  /* 1120f5ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f5ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120f5f1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f5f4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1120f5f7 mov dword ptr [0x1122f6c8], ecx */
  w32((uint32_t)(0x1122f6c8), (ECX));
  /* 1120f5fd mov dword ptr [0x1122f6c4], 0 */
  w32((uint32_t)(0x1122f6c4), (0x0u));
  /* 1120f607 cmp dword ptr [0x1122f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f60e je 0x1120f619 */
  if (C.zf) goto L_1120f619;
  /* 1120f610 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1120f617 jmp 0x1120f62b */
  goto L_1120f62b;
L_1120f619:;
  /* 1120f619 mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f61f push edx */
  push32((uint32_t)(EDX));
  /* 1120f620 call 0x11210060 */
  push32(0x1120f625u); f_11210060();
  /* 1120f625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f628 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120f62b:;
  /* 1120f62b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f62e mov dword ptr [0x1122f6cc], eax */
  w32((uint32_t)(0x1122f6cc), (EAX));
  /* 1120f633 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120f635 push 0x1120f680 */
  push32((uint32_t)(0x1120f680u));
  /* 1120f63a call dword ptr [0x112312a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a4))), 0x1120f640u);
  /* 1120f640 mov ecx, dword ptr [0x1122f6dc] */
  ECX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f646 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1120f64c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120f64e je 0x1120f66c */
  if (C.zf) goto L_1120f66c;
  /* 1120f650 mov edx, dword ptr [0x1122f6dc] */
  EDX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f656 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1120f65c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120f65e je 0x1120f66c */
  if (C.zf) goto L_1120f66c;
  /* 1120f660 mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f665 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1120f668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f66a jne 0x1120f676 */
  if (!C.zf) goto L_1120f676;
L_1120f66c:;
  /* 1120f66c mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
L_1120f676:;
  /* 1120f676 mov esp, ebp */
  ESP = (EBP);
  /* 1120f678 pop ebp */
  EBP = (pop32());
  /* 1120f679 ret  */
  ESPCHK(0x1120f5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f680 @ 0x1120f680 (804 bytes, 220 insns) */
void f_1120f680(void) {
  FTRACE(0x1120f680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f680 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f681 mov ebp, esp */
  EBP = (ESP);
  /* 1120f683 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120f689 push eax */
  push32((uint32_t)(EAX));
  /* 1120f68a call 0x1120ffe0 */
  push32(0x1120f68fu); f_1120ffe0();
  /* 1120f68f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f692 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1120f695 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1120f697 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1120f69a push ecx */
  push32((uint32_t)(ECX));
  /* 1120f69b mov edx, dword ptr [0x1122f6c8] */
  EDX = (r32((uint32_t)(0x1122f6c8)));
  /* 1120f6a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120f6a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f6a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1120f6ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f6b1 push edx */
  push32((uint32_t)(EDX));
  /* 1120f6b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f6b5 push eax */
  push32((uint32_t)(EAX));
  /* 1120f6b6 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120f6bcu);
  /* 1120f6bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f6be jne 0x1120f6d4 */
  if (!C.zf) goto L_1120f6d4;
  /* 1120f6c0 mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
  /* 1120f6ca mov eax, 1 */
  EAX = (0x1u);
  /* 1120f6cf jmp 0x1120f99e */
  goto L_1120f99e;
L_1120f6d4:;
  /* 1120f6d4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1120f6d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f6d8 mov edx, dword ptr [0x1122f6d8] */
  EDX = (r32((uint32_t)(0x1122f6d8)));
  /* 1120f6de push edx */
  push32((uint32_t)(EDX));
  /* 1120f6df call 0x11211c20 */
  push32(0x1120f6e4u); f_11211c20();
  /* 1120f6e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f6e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f6e9 jne 0x1120f80f */
  if (!C.zf) goto L_1120f80f;
  /* 1120f6ef push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1120f6f1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1120f6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1120f6f5 mov ecx, dword ptr [0x1122f6d0] */
  ECX = (r32((uint32_t)(0x1122f6d0)));
  /* 1120f6fb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120f6fd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f6ff and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1120f705 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f70b push ecx */
  push32((uint32_t)(ECX));
  /* 1120f70c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f70f push edx */
  push32((uint32_t)(EDX));
  /* 1120f710 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120f716u);
  /* 1120f716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f718 jne 0x1120f72e */
  if (!C.zf) goto L_1120f72e;
  /* 1120f71a mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
  /* 1120f724 mov eax, 1 */
  EAX = (0x1u);
  /* 1120f729 jmp 0x1120f99e */
  goto L_1120f99e;
L_1120f72e:;
  /* 1120f72e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1120f731 push eax */
  push32((uint32_t)(EAX));
  /* 1120f732 mov ecx, dword ptr [0x1122f6d4] */
  ECX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f738 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f739 call 0x11211c20 */
  push32(0x1120f73eu); f_11211c20();
  /* 1120f73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f741 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f743 jne 0x1120f770 */
  if (!C.zf) goto L_1120f770;
  /* 1120f745 mov edx, dword ptr [0x1122f6dc] */
  EDX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f74b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1120f751 mov dword ptr [0x1122f6dc], edx */
  w32((uint32_t)(0x1122f6dc), (EDX));
  /* 1120f757 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f75a mov dword ptr [0x1122f6e0], eax */
  w32((uint32_t)(0x1122f6e0), (EAX));
  /* 1120f75f mov ecx, dword ptr [0x1122f6e0] */
  ECX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120f765 mov dword ptr [0x1122f6c4], ecx */
  w32((uint32_t)(0x1122f6c4), (ECX));
  /* 1120f76b jmp 0x1120f80f */
  goto L_1120f80f;
L_1120f770:;
  /* 1120f770 mov edx, dword ptr [0x1122f6dc] */
  EDX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f776 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1120f779 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120f77b jne 0x1120f80f */
  if (!C.zf) goto L_1120f80f;
  /* 1120f781 cmp dword ptr [0x1122f6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f788 je 0x1120f7dd */
  if (C.zf) goto L_1120f7dd;
  /* 1120f78a mov eax, dword ptr [0x1122f6cc] */
  EAX = (r32((uint32_t)(0x1122f6cc)));
  /* 1120f78f push eax */
  push32((uint32_t)(EAX));
  /* 1120f790 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1120f793 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f794 mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f79a push edx */
  push32((uint32_t)(EDX));
  /* 1120f79b call 0x11211cf0 */
  push32(0x1120f7a0u); f_11211cf0();
  /* 1120f7a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f7a5 jne 0x1120f7dd */
  if (!C.zf) goto L_1120f7dd;
  /* 1120f7a7 mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f7ac or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1120f7ae mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
  /* 1120f7b3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f7b6 mov dword ptr [0x1122f6e0], ecx */
  w32((uint32_t)(0x1122f6e0), (ECX));
  /* 1120f7bc mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f7c2 push edx */
  push32((uint32_t)(EDX));
  /* 1120f7c3 call 0x11206380 */
  push32(0x1120f7c8u); f_11206380();
  /* 1120f7c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f7cb cmp eax, dword ptr [0x1122f6cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122f6cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f7d1 jne 0x1120f7db */
  if (!C.zf) goto L_1120f7db;
  /* 1120f7d3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f7d6 mov dword ptr [0x1122f6c4], eax */
  w32((uint32_t)(0x1122f6c4), (EAX));
L_1120f7db:;
  /* 1120f7db jmp 0x1120f80f */
  goto L_1120f80f;
L_1120f7dd:;
  /* 1120f7dd mov ecx, dword ptr [0x1122f6dc] */
  ECX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f7e3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1120f7e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120f7e8 jne 0x1120f80f */
  if (!C.zf) goto L_1120f80f;
  /* 1120f7ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f7ed push edx */
  push32((uint32_t)(EDX));
  /* 1120f7ee call 0x1120fd20 */
  push32(0x1120f7f3u); f_1120fd20();
  /* 1120f7f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f7f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f7f8 je 0x1120f80f */
  if (C.zf) goto L_1120f80f;
  /* 1120f7fa mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f7ff or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1120f801 mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
  /* 1120f806 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f809 mov dword ptr [0x1122f6e0], ecx */
  w32((uint32_t)(0x1122f6e0), (ECX));
L_1120f80f:;
  /* 1120f80f mov edx, dword ptr [0x1122f6dc] */
  EDX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f815 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1120f81b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f821 je 0x1120f991 */
  if (C.zf) goto L_1120f991;
  /* 1120f827 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1120f829 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1120f82c push eax */
  push32((uint32_t)(EAX));
  /* 1120f82d mov ecx, dword ptr [0x1122f6d0] */
  ECX = (r32((uint32_t)(0x1122f6d0)));
  /* 1120f833 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120f835 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f837 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1120f83d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f843 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f844 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f847 push edx */
  push32((uint32_t)(EDX));
  /* 1120f848 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120f84eu);
  /* 1120f84e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f850 jne 0x1120f866 */
  if (!C.zf) goto L_1120f866;
  /* 1120f852 mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
  /* 1120f85c mov eax, 1 */
  EAX = (0x1u);
  /* 1120f861 jmp 0x1120f99e */
  goto L_1120f99e;
L_1120f866:;
  /* 1120f866 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1120f869 push eax */
  push32((uint32_t)(EAX));
  /* 1120f86a mov ecx, dword ptr [0x1122f6d4] */
  ECX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f870 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f871 call 0x11211c20 */
  push32(0x1120f876u); f_11211c20();
  /* 1120f876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f87b jne 0x1120f930 */
  if (!C.zf) goto L_1120f930;
  /* 1120f881 mov edx, dword ptr [0x1122f6dc] */
  EDX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f887 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1120f88a mov dword ptr [0x1122f6dc], edx */
  w32((uint32_t)(0x1122f6dc), (EDX));
  /* 1120f890 cmp dword ptr [0x1122f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f897 je 0x1120f8ba */
  if (C.zf) goto L_1120f8ba;
  /* 1120f899 mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f89e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1120f8a1 mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
  /* 1120f8a6 cmp dword ptr [0x1122f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f8ad jne 0x1120f8b8 */
  if (!C.zf) goto L_1120f8b8;
  /* 1120f8af mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f8b2 mov dword ptr [0x1122f6c4], ecx */
  w32((uint32_t)(0x1122f6c4), (ECX));
L_1120f8b8:;
  /* 1120f8b8 jmp 0x1120f92e */
  goto L_1120f92e;
L_1120f8ba:;
  /* 1120f8ba cmp dword ptr [0x1122f6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f8c1 je 0x1120f90f */
  if (C.zf) goto L_1120f90f;
  /* 1120f8c3 mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f8c9 push edx */
  push32((uint32_t)(EDX));
  /* 1120f8ca call 0x11206380 */
  push32(0x1120f8cfu); f_11206380();
  /* 1120f8cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f8d2 cmp eax, dword ptr [0x1122f6cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1122f6cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f8d8 jne 0x1120f90f */
  if (!C.zf) goto L_1120f90f;
  /* 1120f8da push 1 */
  push32((uint32_t)(0x1u));
  /* 1120f8dc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f8df push eax */
  push32((uint32_t)(EAX));
  /* 1120f8e0 call 0x1120fd70 */
  push32(0x1120f8e5u); f_1120fd70();
  /* 1120f8e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f8e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f8ea je 0x1120f90d */
  if (C.zf) goto L_1120f90d;
  /* 1120f8ec mov ecx, dword ptr [0x1122f6dc] */
  ECX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f8f2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1120f8f5 mov dword ptr [0x1122f6dc], ecx */
  w32((uint32_t)(0x1122f6dc), (ECX));
  /* 1120f8fb cmp dword ptr [0x1122f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f902 jne 0x1120f90d */
  if (!C.zf) goto L_1120f90d;
  /* 1120f904 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f907 mov dword ptr [0x1122f6c4], edx */
  w32((uint32_t)(0x1122f6c4), (EDX));
L_1120f90d:;
  /* 1120f90d jmp 0x1120f92e */
  goto L_1120f92e;
L_1120f90f:;
  /* 1120f90f mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f914 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1120f917 mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
  /* 1120f91c cmp dword ptr [0x1122f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f923 jne 0x1120f92e */
  if (!C.zf) goto L_1120f92e;
  /* 1120f925 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f928 mov dword ptr [0x1122f6c4], ecx */
  w32((uint32_t)(0x1122f6c4), (ECX));
L_1120f92e:;
  /* 1120f92e jmp 0x1120f991 */
  goto L_1120f991;
L_1120f930:;
  /* 1120f930 cmp dword ptr [0x1122f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f937 jne 0x1120f991 */
  if (!C.zf) goto L_1120f991;
  /* 1120f939 cmp dword ptr [0x1122f6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f940 je 0x1120f991 */
  if (C.zf) goto L_1120f991;
  /* 1120f942 mov edx, dword ptr [0x1122f6cc] */
  EDX = (r32((uint32_t)(0x1122f6cc)));
  /* 1120f948 push edx */
  push32((uint32_t)(EDX));
  /* 1120f949 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1120f94c push eax */
  push32((uint32_t)(EAX));
  /* 1120f94d mov ecx, dword ptr [0x1122f6d4] */
  ECX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f953 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f954 call 0x11211cf0 */
  push32(0x1120f959u); f_11211cf0();
  /* 1120f959 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f95c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f95e jne 0x1120f991 */
  if (!C.zf) goto L_1120f991;
  /* 1120f960 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120f962 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f965 push edx */
  push32((uint32_t)(EDX));
  /* 1120f966 call 0x1120fd70 */
  push32(0x1120f96bu); f_1120fd70();
  /* 1120f96b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f96e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120f970 je 0x1120f991 */
  if (C.zf) goto L_1120f991;
  /* 1120f972 mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f977 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1120f97a mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
  /* 1120f97f cmp dword ptr [0x1122f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f986 jne 0x1120f991 */
  if (!C.zf) goto L_1120f991;
  /* 1120f988 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120f98b mov dword ptr [0x1122f6c4], ecx */
  w32((uint32_t)(0x1122f6c4), (ECX));
L_1120f991:;
  /* 1120f991 mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120f996 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1120f999 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120f99b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120f99d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1120f99e:;
  /* 1120f99e mov esp, ebp */
  ESP = (EBP);
  /* 1120f9a0 pop ebp */
  EBP = (pop32());
  /* 1120f9a1 ret 4 */
  ESPCHK(0x1120f680u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f9b0 @ 0x1120f9b0 (116 bytes, 33 insns) */
void f_1120f9b0(void) {
  FTRACE(0x1120f9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120f9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120f9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1120f9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1120f9b4 mov eax, dword ptr [0x1122f6d4] */
  EAX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f9b9 push eax */
  push32((uint32_t)(EAX));
  /* 1120f9ba call 0x11206380 */
  push32(0x1120f9bfu); f_11206380();
  /* 1120f9bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f9c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120f9c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f9c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1120f9ca mov dword ptr [0x1122f6d0], ecx */
  w32((uint32_t)(0x1122f6d0), (ECX));
  /* 1120f9d0 cmp dword ptr [0x1122f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120f9d7 je 0x1120f9e2 */
  if (C.zf) goto L_1120f9e2;
  /* 1120f9d9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1120f9e0 jmp 0x1120f9f4 */
  goto L_1120f9f4;
L_1120f9e2:;
  /* 1120f9e2 mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120f9e8 push edx */
  push32((uint32_t)(EDX));
  /* 1120f9e9 call 0x11210060 */
  push32(0x1120f9eeu); f_11210060();
  /* 1120f9ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120f9f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1120f9f4:;
  /* 1120f9f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120f9f7 mov dword ptr [0x1122f6cc], eax */
  w32((uint32_t)(0x1122f6cc), (EAX));
  /* 1120f9fc push 1 */
  push32((uint32_t)(0x1u));
  /* 1120f9fe push 0x1120fa30 */
  push32((uint32_t)(0x1120fa30u));
  /* 1120fa03 call dword ptr [0x112312a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a4))), 0x1120fa09u);
  /* 1120fa09 mov ecx, dword ptr [0x1122f6dc] */
  ECX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fa0f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1120fa12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120fa14 jne 0x1120fa20 */
  if (!C.zf) goto L_1120fa20;
  /* 1120fa16 mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
L_1120fa20:;
  /* 1120fa20 mov esp, ebp */
  ESP = (EBP);
  /* 1120fa22 pop ebp */
  EBP = (pop32());
  /* 1120fa23 ret  */
  ESPCHK(0x1120f9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa30 @ 0x1120fa30 (287 bytes, 86 insns) */
void f_1120fa30(void) {
  FTRACE(0x1120fa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fa31 mov ebp, esp */
  EBP = (ESP);
  /* 1120fa33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fa36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fa39 push eax */
  push32((uint32_t)(EAX));
  /* 1120fa3a call 0x1120ffe0 */
  push32(0x1120fa3fu); f_1120ffe0();
  /* 1120fa3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fa42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1120fa45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1120fa47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1120fa4a push ecx */
  push32((uint32_t)(ECX));
  /* 1120fa4b mov edx, dword ptr [0x1122f6d0] */
  EDX = (r32((uint32_t)(0x1122f6d0)));
  /* 1120fa51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120fa53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fa55 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1120fa5b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fa61 push edx */
  push32((uint32_t)(EDX));
  /* 1120fa62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120fa65 push eax */
  push32((uint32_t)(EAX));
  /* 1120fa66 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120fa6cu);
  /* 1120fa6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fa6e jne 0x1120fa84 */
  if (!C.zf) goto L_1120fa84;
  /* 1120fa70 mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
  /* 1120fa7a mov eax, 1 */
  EAX = (0x1u);
  /* 1120fa7f jmp 0x1120fb49 */
  goto L_1120fb49;
L_1120fa84:;
  /* 1120fa84 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1120fa87 push ecx */
  push32((uint32_t)(ECX));
  /* 1120fa88 mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120fa8e push edx */
  push32((uint32_t)(EDX));
  /* 1120fa8f call 0x11211c20 */
  push32(0x1120fa94u); f_11211c20();
  /* 1120fa94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fa97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fa99 jne 0x1120fad9 */
  if (!C.zf) goto L_1120fad9;
  /* 1120fa9b cmp dword ptr [0x1122f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120faa2 jne 0x1120fab6 */
  if (!C.zf) goto L_1120fab6;
  /* 1120faa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1120faa6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120faa9 push eax */
  push32((uint32_t)(EAX));
  /* 1120faaa call 0x1120fd70 */
  push32(0x1120faafu); f_1120fd70();
  /* 1120faaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fab4 je 0x1120fad7 */
  if (C.zf) goto L_1120fad7;
L_1120fab6:;
  /* 1120fab6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120fab9 mov dword ptr [0x1122f6e0], ecx */
  w32((uint32_t)(0x1122f6e0), (ECX));
  /* 1120fabf mov edx, dword ptr [0x1122f6e0] */
  EDX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120fac5 mov dword ptr [0x1122f6c4], edx */
  w32((uint32_t)(0x1122f6c4), (EDX));
  /* 1120facb mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fad0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1120fad2 mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
L_1120fad7:;
  /* 1120fad7 jmp 0x1120fb3c */
  goto L_1120fb3c;
L_1120fad9:;
  /* 1120fad9 cmp dword ptr [0x1122f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fae0 jne 0x1120fb3c */
  if (!C.zf) goto L_1120fb3c;
  /* 1120fae2 cmp dword ptr [0x1122f6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1122f6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fae9 je 0x1120fb3c */
  if (C.zf) goto L_1120fb3c;
  /* 1120faeb mov ecx, dword ptr [0x1122f6cc] */
  ECX = (r32((uint32_t)(0x1122f6cc)));
  /* 1120faf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1120faf2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1120faf5 push edx */
  push32((uint32_t)(EDX));
  /* 1120faf6 mov eax, dword ptr [0x1122f6d4] */
  EAX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120fafb push eax */
  push32((uint32_t)(EAX));
  /* 1120fafc call 0x11211cf0 */
  push32(0x1120fb01u); f_11211cf0();
  /* 1120fb01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fb04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fb06 jne 0x1120fb3c */
  if (!C.zf) goto L_1120fb3c;
  /* 1120fb08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1120fb0a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120fb0d push ecx */
  push32((uint32_t)(ECX));
  /* 1120fb0e call 0x1120fd70 */
  push32(0x1120fb13u); f_1120fd70();
  /* 1120fb13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fb16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fb18 je 0x1120fb3c */
  if (C.zf) goto L_1120fb3c;
  /* 1120fb1a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120fb1d mov dword ptr [0x1122f6e0], edx */
  w32((uint32_t)(0x1122f6e0), (EDX));
  /* 1120fb23 mov eax, dword ptr [0x1122f6e0] */
  EAX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120fb28 mov dword ptr [0x1122f6c4], eax */
  w32((uint32_t)(0x1122f6c4), (EAX));
  /* 1120fb2d mov ecx, dword ptr [0x1122f6dc] */
  ECX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fb33 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1120fb36 mov dword ptr [0x1122f6dc], ecx */
  w32((uint32_t)(0x1122f6dc), (ECX));
L_1120fb3c:;
  /* 1120fb3c mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fb41 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1120fb44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120fb46 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fb48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1120fb49:;
  /* 1120fb49 mov esp, ebp */
  ESP = (EBP);
  /* 1120fb4b pop ebp */
  EBP = (pop32());
  /* 1120fb4c ret 4 */
  ESPCHK(0x1120fa30u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fb50 @ 0x1120fb50 (69 bytes, 20 insns) */
void f_1120fb50(void) {
  FTRACE(0x1120fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fb51 mov ebp, esp */
  EBP = (ESP);
  /* 1120fb53 mov eax, dword ptr [0x1122f6d8] */
  EAX = (r32((uint32_t)(0x1122f6d8)));
  /* 1120fb58 push eax */
  push32((uint32_t)(EAX));
  /* 1120fb59 call 0x11206380 */
  push32(0x1120fb5eu); f_11206380();
  /* 1120fb5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fb61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120fb63 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fb66 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1120fb69 mov dword ptr [0x1122f6c8], ecx */
  w32((uint32_t)(0x1122f6c8), (ECX));
  /* 1120fb6f push 1 */
  push32((uint32_t)(0x1u));
  /* 1120fb71 push 0x1120fba0 */
  push32((uint32_t)(0x1120fba0u));
  /* 1120fb76 call dword ptr [0x112312a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a4))), 0x1120fb7cu);
  /* 1120fb7c mov edx, dword ptr [0x1122f6dc] */
  EDX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fb82 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1120fb85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1120fb87 jne 0x1120fb93 */
  if (!C.zf) goto L_1120fb93;
  /* 1120fb89 mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
L_1120fb93:;
  /* 1120fb93 pop ebp */
  EBP = (pop32());
  /* 1120fb94 ret  */
  ESPCHK(0x1120fb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x1120fba0 (172 bytes, 54 insns) */
void f_1120fba0(void) {
  FTRACE(0x1120fba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fba1 mov ebp, esp */
  EBP = (ESP);
  /* 1120fba3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fba9 push eax */
  push32((uint32_t)(EAX));
  /* 1120fbaa call 0x1120ffe0 */
  push32(0x1120fbafu); f_1120ffe0();
  /* 1120fbaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fbb2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1120fbb5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1120fbb7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1120fbba push ecx */
  push32((uint32_t)(ECX));
  /* 1120fbbb mov edx, dword ptr [0x1122f6c8] */
  EDX = (r32((uint32_t)(0x1122f6c8)));
  /* 1120fbc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120fbc3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fbc5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1120fbcb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fbd1 push edx */
  push32((uint32_t)(EDX));
  /* 1120fbd2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120fbd5 push eax */
  push32((uint32_t)(EAX));
  /* 1120fbd6 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120fbdcu);
  /* 1120fbdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fbde jne 0x1120fbf1 */
  if (!C.zf) goto L_1120fbf1;
  /* 1120fbe0 mov dword ptr [0x1122f6dc], 0 */
  w32((uint32_t)(0x1122f6dc), (0x0u));
  /* 1120fbea mov eax, 1 */
  EAX = (0x1u);
  /* 1120fbef jmp 0x1120fc46 */
  goto L_1120fc46;
L_1120fbf1:;
  /* 1120fbf1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1120fbf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1120fbf5 mov edx, dword ptr [0x1122f6d8] */
  EDX = (r32((uint32_t)(0x1122f6d8)));
  /* 1120fbfb push edx */
  push32((uint32_t)(EDX));
  /* 1120fbfc call 0x11211c20 */
  push32(0x1120fc01u); f_11211c20();
  /* 1120fc01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fc04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fc06 jne 0x1120fc39 */
  if (!C.zf) goto L_1120fc39;
  /* 1120fc08 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120fc0b push eax */
  push32((uint32_t)(EAX));
  /* 1120fc0c call 0x1120fd20 */
  push32(0x1120fc11u); f_1120fd20();
  /* 1120fc11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fc14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fc16 je 0x1120fc39 */
  if (C.zf) goto L_1120fc39;
  /* 1120fc18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1120fc1b mov dword ptr [0x1122f6e0], ecx */
  w32((uint32_t)(0x1122f6e0), (ECX));
  /* 1120fc21 mov edx, dword ptr [0x1122f6e0] */
  EDX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120fc27 mov dword ptr [0x1122f6c4], edx */
  w32((uint32_t)(0x1122f6c4), (EDX));
  /* 1120fc2d mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fc32 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1120fc34 mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
L_1120fc39:;
  /* 1120fc39 mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fc3e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1120fc41 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1120fc43 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fc45 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1120fc46:;
  /* 1120fc46 mov esp, ebp */
  ESP = (EBP);
  /* 1120fc48 pop ebp */
  EBP = (pop32());
  /* 1120fc49 ret 4 */
  ESPCHK(0x1120fba0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fc50 @ 0x1120fc50 (43 bytes, 11 insns) */
void f_1120fc50(void) {
  FTRACE(0x1120fc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fc51 mov ebp, esp */
  EBP = (ESP);
  /* 1120fc53 mov eax, dword ptr [0x1122f6dc] */
  EAX = (r32((uint32_t)(0x1122f6dc)));
  /* 1120fc58 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1120fc5d mov dword ptr [0x1122f6dc], eax */
  w32((uint32_t)(0x1122f6dc), (EAX));
  /* 1120fc62 call dword ptr [0x112312a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a0))), 0x1120fc68u);
  /* 1120fc68 mov dword ptr [0x1122f6e0], eax */
  w32((uint32_t)(0x1122f6e0), (EAX));
  /* 1120fc6d mov ecx, dword ptr [0x1122f6e0] */
  ECX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120fc73 mov dword ptr [0x1122f6c4], ecx */
  w32((uint32_t)(0x1122f6c4), (ECX));
  /* 1120fc79 pop ebp */
  EBP = (pop32());
  /* 1120fc7a ret  */
  ESPCHK(0x1120fc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc80 @ 0x1120fc80 (155 bytes, 57 insns) */
void f_1120fc80(void) {
  FTRACE(0x1120fc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fc81 mov ebp, esp */
  EBP = (ESP);
  /* 1120fc83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fc86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fc8a je 0x1120fcab */
  if (C.zf) goto L_1120fcab;
  /* 1120fc8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fc8f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1120fc92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1120fc94 je 0x1120fcab */
  if (C.zf) goto L_1120fcab;
  /* 1120fc96 push 0x1122b734 */
  push32((uint32_t)(0x1122b734u));
  /* 1120fc9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fc9e push edx */
  push32((uint32_t)(EDX));
  /* 1120fc9f call 0x1120f1e0 */
  push32(0x1120fca4u); f_1120f1e0();
  /* 1120fca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fca9 jne 0x1120fcd3 */
  if (!C.zf) goto L_1120fcd3;
L_1120fcab:;
  /* 1120fcab push 8 */
  push32((uint32_t)(0x8u));
  /* 1120fcad lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1120fcb0 push eax */
  push32((uint32_t)(EAX));
  /* 1120fcb1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1120fcb6 mov ecx, dword ptr [0x1122f6e0] */
  ECX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120fcbc push ecx */
  push32((uint32_t)(ECX));
  /* 1120fcbd call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120fcc3u);
  /* 1120fcc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fcc5 jne 0x1120fccb */
  if (!C.zf) goto L_1120fccb;
  /* 1120fcc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120fcc9 jmp 0x1120fd17 */
  goto L_1120fd17;
L_1120fccb:;
  /* 1120fccb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1120fcce mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1120fcd1 jmp 0x1120fd0b */
  goto L_1120fd0b;
L_1120fcd3:;
  /* 1120fcd3 push 0x1122b730 */
  push32((uint32_t)(0x1122b730u));
  /* 1120fcd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fcdb push eax */
  push32((uint32_t)(EAX));
  /* 1120fcdc call 0x1120f1e0 */
  push32(0x1120fce1u); f_1120f1e0();
  /* 1120fce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fce6 jne 0x1120fd0b */
  if (!C.zf) goto L_1120fd0b;
  /* 1120fce8 push 8 */
  push32((uint32_t)(0x8u));
  /* 1120fcea lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1120fced push ecx */
  push32((uint32_t)(ECX));
  /* 1120fcee push 0xb */
  push32((uint32_t)(0xbu));
  /* 1120fcf0 mov edx, dword ptr [0x1122f6e0] */
  EDX = (r32((uint32_t)(0x1122f6e0)));
  /* 1120fcf6 push edx */
  push32((uint32_t)(EDX));
  /* 1120fcf7 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120fcfdu);
  /* 1120fcfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fcff jne 0x1120fd05 */
  if (!C.zf) goto L_1120fd05;
  /* 1120fd01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120fd03 jmp 0x1120fd17 */
  goto L_1120fd17;
L_1120fd05:;
  /* 1120fd05 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1120fd08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1120fd0b:;
  /* 1120fd0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fd0e push ecx */
  push32((uint32_t)(ECX));
  /* 1120fd0f call 0x11211e00 */
  push32(0x1120fd14u); f_11211e00();
  /* 1120fd14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1120fd17:;
  /* 1120fd17 mov esp, ebp */
  ESP = (EBP);
  /* 1120fd19 pop ebp */
  EBP = (pop32());
  /* 1120fd1a ret  */
  ESPCHK(0x1120fc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd20 @ 0x1120fd20 (79 bytes, 26 insns) */
void f_1120fd20(void) {
  FTRACE(0x1120fd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fd21 mov ebp, esp */
  EBP = (ESP);
  /* 1120fd23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fd26 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1120fd2a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1120fd2e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1120fd35 jmp 0x1120fd40 */
  goto L_1120fd40;
L_1120fd37:;
  /* 1120fd37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120fd3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fd3d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1120fd40:;
  /* 1120fd40 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fd44 jae 0x1120fd66 */
  if (!C.cf) goto L_1120fd66;
  /* 1120fd46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120fd49 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1120fd4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120fd52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1120fd54 mov cx, word ptr [eax*2 + 0x1122e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1122e9c4)));
  /* 1120fd5c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fd5e jne 0x1120fd64 */
  if (!C.zf) goto L_1120fd64;
  /* 1120fd60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120fd62 jmp 0x1120fd6b */
  goto L_1120fd6b;
L_1120fd64:;
  /* 1120fd64 jmp 0x1120fd37 */
  goto L_1120fd37;
L_1120fd66:;
  /* 1120fd66 mov eax, 1 */
  EAX = (0x1u);
L_1120fd6b:;
  /* 1120fd6b mov esp, ebp */
  ESP = (EBP);
  /* 1120fd6d pop ebp */
  EBP = (pop32());
  /* 1120fd6e ret  */
  ESPCHK(0x1120fd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd70 @ 0x1120fd70 (135 bytes, 48 insns) */
void f_1120fd70(void) {
  FTRACE(0x1120fd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fd71 mov ebp, esp */
  EBP = (ESP);
  /* 1120fd73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fd76 push esi */
  push32((uint32_t)(ESI));
  /* 1120fd77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fd7a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120fd7f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120fd84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120fd89 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1120fd8c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1120fd91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1120fd94 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1120fd96 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1120fd99 push ecx */
  push32((uint32_t)(ECX));
  /* 1120fd9a push 1 */
  push32((uint32_t)(0x1u));
  /* 1120fd9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1120fd9f push edx */
  push32((uint32_t)(EDX));
  /* 1120fda0 call dword ptr [0x1122f6e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1122f6e4))), 0x1120fda6u);
  /* 1120fda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fda8 jne 0x1120fdae */
  if (!C.zf) goto L_1120fdae;
  /* 1120fdaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120fdac jmp 0x1120fdf2 */
  goto L_1120fdf2;
L_1120fdae:;
  /* 1120fdae lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1120fdb1 push eax */
  push32((uint32_t)(EAX));
  /* 1120fdb2 call 0x1120ffe0 */
  push32(0x1120fdb7u); f_1120ffe0();
  /* 1120fdb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fdba cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fdbd je 0x1120fded */
  if (C.zf) goto L_1120fded;
  /* 1120fdbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fdc3 je 0x1120fded */
  if (C.zf) goto L_1120fded;
  /* 1120fdc5 mov ecx, dword ptr [0x1122f6d4] */
  ECX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120fdcb push ecx */
  push32((uint32_t)(ECX));
  /* 1120fdcc call 0x11210060 */
  push32(0x1120fdd1u); f_11210060();
  /* 1120fdd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fdd4 mov esi, eax */
  ESI = (EAX);
  /* 1120fdd6 mov edx, dword ptr [0x1122f6d4] */
  EDX = (r32((uint32_t)(0x1122f6d4)));
  /* 1120fddc push edx */
  push32((uint32_t)(EDX));
  /* 1120fddd call 0x11206380 */
  push32(0x1120fde2u); f_11206380();
  /* 1120fde2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fde5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fde7 jne 0x1120fded */
  if (!C.zf) goto L_1120fded;
  /* 1120fde9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1120fdeb jmp 0x1120fdf2 */
  goto L_1120fdf2;
L_1120fded:;
  /* 1120fded mov eax, 1 */
  EAX = (0x1u);
L_1120fdf2:;
  /* 1120fdf2 pop esi */
  ESI = (pop32());
  /* 1120fdf3 mov esp, ebp */
  ESP = (EBP);
  /* 1120fdf5 pop ebp */
  EBP = (pop32());
  /* 1120fdf6 ret  */
  ESPCHK(0x1120fd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe00 @ 0x1120fe00 (77 bytes, 18 insns) */
void f_1120fe00(void) {
  FTRACE(0x1120fe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fe00 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fe01 mov ebp, esp */
  EBP = (ESP);
  /* 1120fe03 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fe09 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1120fe13 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1120fe19 push eax */
  push32((uint32_t)(EAX));
  /* 1120fe1a call dword ptr [0x1123129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1123129c))), 0x1120fe20u);
  /* 1120fe20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1120fe22 je 0x1120fe39 */
  if (C.zf) goto L_1120fe39;
  /* 1120fe24 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fe2b jne 0x1120fe39 */
  if (!C.zf) goto L_1120fe39;
  /* 1120fe2d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1120fe37 jmp 0x1120fe43 */
  goto L_1120fe43;
L_1120fe39:;
  /* 1120fe39 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1120fe43:;
  /* 1120fe43 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1120fe49 mov esp, ebp */
  ESP = (EBP);
  /* 1120fe4b pop ebp */
  EBP = (pop32());
  /* 1120fe4c ret  */
  ESPCHK(0x1120fe00u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1120fe50 (388 bytes, 118 insns) */
void f_1120fe50(void) {
  FTRACE(0x1120fe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120fe50 push ebp */
  push32((uint32_t)(EBP));
  /* 1120fe51 mov ebp, esp */
  EBP = (ESP);
  /* 1120fe53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fe56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1120fe5d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1120fe64 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1120fe6b:;
  /* 1120fe6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120fe6e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fe71 jg 0x1120ffb8 */
  if ((!C.zf&&C.sf==C.of)) goto L_1120ffb8;
  /* 1120fe77 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1120fe7a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fe7d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1120fe7e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120fe80 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1120fe82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1120fe85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120fe88 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120fe8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fe8e cmp edx, dword ptr [ecx + 0x1122e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1122e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fe94 jne 0x1120ff8e */
  if (!C.zf) goto L_1120ff8e;
  /* 1120fe9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120fe9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1120fea0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fea4 ja 0x1120fec7 */
  if ((!C.cf&&!C.zf)) goto L_1120fec7;
  /* 1120fea6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120feaa je 0x1120ff39 */
  if (C.zf) goto L_1120ff39;
  /* 1120feb0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120feb4 je 0x1120fee4 */
  if (C.zf) goto L_1120fee4;
  /* 1120feb6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120feba je 0x1120ff06 */
  if (C.zf) goto L_1120ff06;
  /* 1120febc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fec0 je 0x1120ff28 */
  if (C.zf) goto L_1120ff28;
  /* 1120fec2 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120fec7:;
  /* 1120fec7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fece je 0x1120fef5 */
  if (C.zf) goto L_1120fef5;
  /* 1120fed0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fed7 je 0x1120ff17 */
  if (C.zf) goto L_1120ff17;
  /* 1120fed9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120fee0 je 0x1120ff4a */
  if (C.zf) goto L_1120ff4a;
  /* 1120fee2 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120fee4:;
  /* 1120fee4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120fee7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120feea add ecx, 0x1122e524 */
  { uint32_t _a=(ECX),_b=(0x1122e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120fef0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120fef3 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120fef5:;
  /* 1120fef5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120fef8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120fefb mov eax, dword ptr [edx + 0x1122e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1122e52c)));
  /* 1120ff01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120ff04 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120ff06:;
  /* 1120ff06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ff09 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ff0c add ecx, 0x1122e530 */
  { uint32_t _a=(ECX),_b=(0x1122e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ff12 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ff15 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120ff17:;
  /* 1120ff17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ff1a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ff1d mov eax, dword ptr [edx + 0x1122e534] */
  EAX = (r32((uint32_t)(EDX + 0x1122e534)));
  /* 1120ff23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1120ff26 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120ff28:;
  /* 1120ff28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ff2b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ff2e add ecx, 0x1122e538 */
  { uint32_t _a=(ECX),_b=(0x1122e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ff34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1120ff37 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120ff39:;
  /* 1120ff39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ff3c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ff3f add edx, 0x1122e53c */
  { uint32_t _a=(EDX),_b=(0x1122e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ff45 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1120ff48 jmp 0x1120ff58 */
  goto L_1120ff58;
L_1120ff4a:;
  /* 1120ff4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ff4d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ff50 add eax, 0x1122e544 */
  { uint32_t _a=(EAX),_b=(0x1122e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ff55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1120ff58:;
  /* 1120ff58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ff5c je 0x1120ff64 */
  if (C.zf) goto L_1120ff64;
  /* 1120ff5e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ff62 jge 0x1120ff66 */
  if ((C.sf==C.of)) goto L_1120ff66;
L_1120ff64:;
  /* 1120ff64 jmp 0x1120ffb8 */
  goto L_1120ffb8;
L_1120ff66:;
  /* 1120ff66 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120ff69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ff6c push ecx */
  push32((uint32_t)(ECX));
  /* 1120ff6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1120ff70 push edx */
  push32((uint32_t)(EDX));
  /* 1120ff71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120ff74 push eax */
  push32((uint32_t)(EAX));
  /* 1120ff75 call 0x11206d70 */
  push32(0x1120ff7au); f_11206d70();
  /* 1120ff7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ff7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120ff80 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ff83 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1120ff87 mov eax, 1 */
  EAX = (0x1u);
  /* 1120ff8c jmp 0x1120ffce */
  goto L_1120ffce;
L_1120ff8e:;
  /* 1120ff8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ff91 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1120ff94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ff97 cmp eax, dword ptr [edx + 0x1122e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1122e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1120ff9d jae 0x1120ffaa */
  if (!C.cf) goto L_1120ffaa;
  /* 1120ff9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ffa2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ffa5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1120ffa8 jmp 0x1120ffb3 */
  goto L_1120ffb3;
L_1120ffaa:;
  /* 1120ffaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1120ffad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ffb0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1120ffb3:;
  /* 1120ffb3 jmp 0x1120fe6b */
  goto L_1120fe6b;
L_1120ffb8:;
  /* 1120ffb8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1120ffbb push eax */
  push32((uint32_t)(EAX));
  /* 1120ffbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1120ffbf push ecx */
  push32((uint32_t)(ECX));
  /* 1120ffc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1120ffc3 push edx */
  push32((uint32_t)(EDX));
  /* 1120ffc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120ffc7 push eax */
  push32((uint32_t)(EAX));
  /* 1120ffc8 call dword ptr [0x112312a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112312a8))), 0x1120ffceu);
L_1120ffce:;
  /* 1120ffce mov esp, ebp */
  ESP = (EBP);
  /* 1120ffd0 pop ebp */
  EBP = (pop32());
  /* 1120ffd1 ret 0x10 */
  ESPCHK(0x1120fe50u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ffe0 @ 0x1120ffe0 (118 bytes, 42 insns) */
void f_1120ffe0(void) {
  FTRACE(0x1120ffe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1120ffe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1120ffe1 mov ebp, esp */
  EBP = (ESP);
  /* 1120ffe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1120ffe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1120ffed:;
  /* 1120ffed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fff0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1120fff2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1120fff5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1120fff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1120fffc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1120ffff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11210002 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11210004 je 0x1121004f */
  if (C.zf) goto L_1121004f;
  /* 11210006 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1121000a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121000d jl 0x11210022 */
  if ((C.sf!=C.of)) goto L_11210022;
  /* 1121000f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11210013 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210016 jg 0x11210022 */
  if ((!C.zf&&C.sf==C.of)) goto L_11210022;
  /* 11210018 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1121001b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1121001d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11210020 jmp 0x1121003c */
  goto L_1121003c;
L_11210022:;
  /* 11210022 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11210026 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210029 jl 0x1121003c */
  if ((C.sf!=C.of)) goto L_1121003c;
  /* 1121002b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1121002f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210032 jg 0x1121003c */
  if ((!C.zf&&C.sf==C.of)) goto L_1121003c;
  /* 11210034 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11210037 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11210039 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1121003c:;
  /* 1121003c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121003f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11210042 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11210046 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1121004a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1121004d jmp 0x1120ffed */
  goto L_1120ffed;
L_1121004f:;
  /* 1121004f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210052 mov esp, ebp */
  ESP = (EBP);
  /* 11210054 pop ebp */
  EBP = (pop32());
  /* 11210055 ret  */
  ESPCHK(0x1120ffe0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11210060 (101 bytes, 36 insns) */
void f_11210060(void) {
  FTRACE(0x11210060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11210060 push ebp */
  push32((uint32_t)(EBP));
  /* 11210061 mov ebp, esp */
  EBP = (ESP);
  /* 11210063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210066 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1121006d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210070 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11210072 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11210075 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210078 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121007b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1121007e:;
  /* 1121007e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11210082 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210085 jl 0x11210090 */
  if ((C.sf!=C.of)) goto L_11210090;
  /* 11210087 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1121008b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121008e jle 0x112100a2 */
  if ((C.zf||C.sf!=C.of)) goto L_112100a2;
L_11210090:;
  /* 11210090 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11210094 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210097 jl 0x112100be */
  if ((C.sf!=C.of)) goto L_112100be;
  /* 11210099 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1121009d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112100a0 jg 0x112100be */
  if ((!C.zf&&C.sf==C.of)) goto L_112100be;
L_112100a2:;
  /* 112100a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112100a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112100a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112100ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112100ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112100b0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 112100b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112100b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112100b9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112100bc jmp 0x1121007e */
  goto L_1121007e;
L_112100be:;
  /* 112100be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112100c1 mov esp, ebp */
  ESP = (EBP);
  /* 112100c3 pop ebp */
  EBP = (pop32());
  /* 112100c4 ret  */
  ESPCHK(0x11210060u, _esp0);
  ESP += 4; return;
}

/* FUN_100100d0 @ 0x112100d0 (122 bytes, 39 insns) */
void f_112100d0(void) {
  FTRACE(0x112100d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112100d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112100d1 mov ebp, esp */
  EBP = (ESP);
  /* 112100d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112100d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112100d7 cmp eax, dword ptr [0x11230f7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11230f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112100dd jae 0x11210101 */
  if (!C.cf) goto L_11210101;
  /* 112100df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112100e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112100e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112100e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112100eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112100ee mov eax, dword ptr [ecx*4 + 0x11230e40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11230e40)));
  /* 112100f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112100fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112100fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112100ff jne 0x1121011c */
  if (!C.zf) goto L_1121011c;
L_11210101:;
  /* 11210101 call 0x1120b420 */
  push32(0x11210106u); f_1120b420();
  /* 11210106 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1121010c call 0x1120b430 */
  push32(0x11210111u); f_1120b430();
  /* 11210111 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11210117 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1121011a jmp 0x11210146 */
  goto L_11210146;
L_1121011c:;
  /* 1121011c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121011f push edx */
  push32((uint32_t)(EDX));
  /* 11210120 call 0x1120cc40 */
  push32(0x11210125u); f_1120cc40();
  /* 11210125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121012b push eax */
  push32((uint32_t)(EAX));
  /* 1121012c call 0x11210150 */
  push32(0x11210131u); f_11210150();
  /* 11210131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210134 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11210137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121013a push ecx */
  push32((uint32_t)(ECX));
  /* 1121013b call 0x1120ccd0 */
  push32(0x11210140u); f_1120ccd0();
  /* 11210140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11210146:;
  /* 11210146 mov esp, ebp */
  ESP = (EBP);
  /* 11210148 pop ebp */
  EBP = (pop32());
  /* 11210149 ret  */
  ESPCHK(0x112100d0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11210150 (170 bytes, 59 insns) */
void f_11210150(void) {
  FTRACE(0x11210150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11210150 push ebp */
  push32((uint32_t)(EBP));
  /* 11210151 mov ebp, esp */
  EBP = (ESP);
  /* 11210153 push ecx */
  push32((uint32_t)(ECX));
  /* 11210154 push esi */
  push32((uint32_t)(ESI));
  /* 11210155 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210158 push eax */
  push32((uint32_t)(EAX));
  /* 11210159 call 0x1120cac0 */
  push32(0x1121015eu); f_1120cac0();
  /* 1121015e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210161 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210164 je 0x112101a3 */
  if (C.zf) goto L_112101a3;
  /* 11210166 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121016a je 0x11210172 */
  if (C.zf) goto L_11210172;
  /* 1121016c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210170 jne 0x1121018c */
  if (!C.zf) goto L_1121018c;
L_11210172:;
  /* 11210172 push 1 */
  push32((uint32_t)(0x1u));
  /* 11210174 call 0x1120cac0 */
  push32(0x11210179u); f_1120cac0();
  /* 11210179 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121017c mov esi, eax */
  ESI = (EAX);
  /* 1121017e push 2 */
  push32((uint32_t)(0x2u));
  /* 11210180 call 0x1120cac0 */
  push32(0x11210185u); f_1120cac0();
  /* 11210185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210188 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121018a je 0x112101a3 */
  if (C.zf) goto L_112101a3;
L_1121018c:;
  /* 1121018c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121018f push ecx */
  push32((uint32_t)(ECX));
  /* 11210190 call 0x1120cac0 */
  push32(0x11210195u); f_1120cac0();
  /* 11210195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210198 push eax */
  push32((uint32_t)(EAX));
  /* 11210199 call dword ptr [0x11231298] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231298))), 0x1121019fu);
  /* 1121019f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112101a1 je 0x112101ac */
  if (C.zf) goto L_112101ac;
L_112101a3:;
  /* 112101a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112101aa jmp 0x112101b5 */
  goto L_112101b5;
L_112101ac:;
  /* 112101ac call dword ptr [0x11231280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11231280))), 0x112101b2u);
  /* 112101b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112101b5:;
  /* 112101b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112101b8 push edx */
  push32((uint32_t)(EDX));
  /* 112101b9 call 0x1120c9e0 */
  push32(0x112101beu); f_1120c9e0();
  /* 112101be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112101c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112101c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112101c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112101ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112101cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112101d0 mov edx, dword ptr [eax*4 + 0x11230e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11230e40)));
  /* 112101d7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 112101dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112101e0 je 0x112101f3 */
  if (C.zf) goto L_112101f3;
  /* 112101e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112101e5 push eax */
  push32((uint32_t)(EAX));
  /* 112101e6 call 0x1120b380 */
  push32(0x112101ebu); f_1120b380();
  /* 112101eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112101ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112101f1 jmp 0x112101f5 */
  goto L_112101f5;
L_112101f3:;
  /* 112101f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112101f5:;
  /* 112101f5 pop esi */
  ESI = (pop32());
  /* 112101f6 mov esp, ebp */
  ESP = (EBP);
  /* 112101f8 pop ebp */
  EBP = (pop32());
  /* 112101f9 ret  */
  ESPCHK(0x11210150u, _esp0);
  ESP += 4; return;
}

/* FUN_10010200 @ 0x11210200 (146 bytes, 52 insns) */
void f_11210200(void) {
  FTRACE(0x11210200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11210200 push ebp */
  push32((uint32_t)(EBP));
  /* 11210201 mov ebp, esp */
  EBP = (ESP);
  /* 11210203 push ebx */
  push32((uint32_t)(EBX));
  /* 11210204 push esi */
  push32((uint32_t)(ESI));
  /* 11210205 push edi */
  push32((uint32_t)(EDI));
L_11210206:;
  /* 11210206 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121020a jne 0x1121022a */
  if (!C.zf) goto L_1121022a;
  /* 1121020c push 0x1122b070 */
  push32((uint32_t)(0x1122b070u));
  /* 11210211 push 0 */
  push32((uint32_t)(0x0u));
  /* 11210213 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11210215 push 0x1122b738 */
  push32((uint32_t)(0x1122b738u));
  /* 1121021a push 2 */
  push32((uint32_t)(0x2u));
  /* 1121021c call 0x11202610 */
  push32(0x11210221u); f_11202610();
  /* 11210221 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210224 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210227 jne 0x1121022a */
  if (!C.zf) goto L_1121022a;
  /* 11210229 int3  */
  x86_unimpl("int3 @ 0x11210229");
L_1121022a:;
  /* 1121022a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1121022c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1121022e jne 0x11210206 */
  if (!C.zf) goto L_11210206;
  /* 11210230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210233 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11210236 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1121023c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1121023e je 0x1121028d */
  if (C.zf) goto L_1121028d;
  /* 11210240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210243 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11210246 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11210249 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1121024b je 0x1121028d */
  if (C.zf) goto L_1121028d;
  /* 1121024d push 2 */
  push32((uint32_t)(0x2u));
  /* 1121024f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210252 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11210255 push eax */
  push32((uint32_t)(EAX));
  /* 11210256 call 0x11203fe0 */
  push32(0x1121025bu); f_11203fe0();
  /* 1121025b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121025e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210261 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11210264 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1121026a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121026d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11210270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210273 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11210279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1121027c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11210283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210286 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1121028d:;
  /* 1121028d pop edi */
  EDI = (pop32());
  /* 1121028e pop esi */
  ESI = (pop32());
  /* 1121028f pop ebx */
  EBX = (pop32());
  /* 11210290 pop ebp */
  EBP = (pop32());
  /* 11210291 ret  */
  ESPCHK(0x11210200u, _esp0);
  ESP += 4; return;
}

/* FUN_100102a0 @ 0x112102a0 (289 bytes, 97 insns) */
void f_112102a0(void) {
  FTRACE(0x112102a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112102a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112102a1 mov ebp, esp */
  EBP = (ESP);
  /* 112102a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112102a6 push esi */
  push32((uint32_t)(ESI));
  /* 112102a7 mov eax, dword ptr [0x1122ec98] */
  EAX = (r32((uint32_t)(0x1122ec98)));
  /* 112102ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112102af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112102b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112102bd jmp 0x112102c8 */
  goto L_112102c8;
L_112102bf:;
  /* 112102bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112102c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112102c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112102c8:;
  /* 112102c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112102cc jae 0x11210301 */
  if (!C.cf) goto L_11210301;
  /* 112102ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112102d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112102d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 112102d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112102d8 call 0x11206380 */
  push32(0x112102ddu); f_11206380();
  /* 112102dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112102e0 mov esi, eax */
  ESI = (EAX);
  /* 112102e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112102e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112102e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 112102ec push ecx */
  push32((uint32_t)(ECX));
  /* 112102ed call 0x11206380 */
  push32(0x112102f2u); f_11206380();
  /* 112102f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112102f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112102f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112102fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112102ff jmp 0x112102bf */
  goto L_112102bf;
L_11210301:;
  /* 11210301 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11210304 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210307 push eax */
  push32((uint32_t)(EAX));
  /* 11210308 call 0x11203530 */
  push32(0x1121030du); f_11203530();
  /* 1121030d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210310 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11210313 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210317 je 0x112103b9 */
  if (C.zf) goto L_112103b9;
  /* 1121031d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210320 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11210323 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1121032a jmp 0x11210335 */
  goto L_11210335;
L_1121032c:;
  /* 1121032c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121032f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210332 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11210335:;
  /* 11210335 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210339 jae 0x112103aa */
  if (!C.cf) goto L_112103aa;
  /* 1121033b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121033e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11210341 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210344 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210347 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1121034a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121034d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210350 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11210353 push ecx */
  push32((uint32_t)(ECX));
  /* 11210354 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210357 push edx */
  push32((uint32_t)(EDX));
  /* 11210358 call 0x11206500 */
  push32(0x1121035du); f_11206500();
  /* 1121035d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210360 push eax */
  push32((uint32_t)(EAX));
  /* 11210361 call 0x11206380 */
  push32(0x11210366u); f_11206380();
  /* 11210366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210369 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121036c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121036e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11210371 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210374 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11210377 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121037a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121037d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11210380 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210383 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210386 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1121038a push eax */
  push32((uint32_t)(EAX));
  /* 1121038b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121038e push ecx */
  push32((uint32_t)(ECX));
  /* 1121038f call 0x11206500 */
  push32(0x11210394u); f_11206500();
  /* 11210394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210397 push eax */
  push32((uint32_t)(EAX));
  /* 11210398 call 0x11206380 */
  push32(0x1121039du); f_11206380();
  /* 1121039d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112103a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112103a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112103a5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112103a8 jmp 0x1121032c */
  goto L_1121032c;
L_112103aa:;
  /* 112103aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112103ad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112103b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112103b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112103b6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112103b9:;
  /* 112103b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112103bc pop esi */
  ESI = (pop32());
  /* 112103bd mov esp, ebp */
  ESP = (EBP);
  /* 112103bf pop ebp */
  EBP = (pop32());
  /* 112103c0 ret  */
  ESPCHK(0x112102a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103d0 @ 0x112103d0 (291 bytes, 97 insns) */
void f_112103d0(void) {
  FTRACE(0x112103d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112103d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112103d1 mov ebp, esp */
  EBP = (ESP);
  /* 112103d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112103d6 push esi */
  push32((uint32_t)(ESI));
  /* 112103d7 mov eax, dword ptr [0x1122ec98] */
  EAX = (r32((uint32_t)(0x1122ec98)));
  /* 112103dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112103df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112103e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112103ed jmp 0x112103f8 */
  goto L_112103f8;
L_112103ef:;
  /* 112103ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112103f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112103f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112103f8:;
  /* 112103f8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112103fc jae 0x11210432 */
  if (!C.cf) goto L_11210432;
  /* 112103fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210401 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210404 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11210408 push ecx */
  push32((uint32_t)(ECX));
  /* 11210409 call 0x11206380 */
  push32(0x1121040eu); f_11206380();
  /* 1121040e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210411 mov esi, eax */
  ESI = (EAX);
  /* 11210413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210416 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210419 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1121041d push ecx */
  push32((uint32_t)(ECX));
  /* 1121041e call 0x11206380 */
  push32(0x11210423u); f_11206380();
  /* 11210423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210426 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210429 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1121042d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11210430 jmp 0x112103ef */
  goto L_112103ef;
L_11210432:;
  /* 11210432 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11210435 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210438 push eax */
  push32((uint32_t)(EAX));
  /* 11210439 call 0x11203530 */
  push32(0x1121043eu); f_11203530();
  /* 1121043e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210441 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11210444 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210448 je 0x112104eb */
  if (C.zf) goto L_112104eb;
  /* 1121044e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210451 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11210454 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1121045b jmp 0x11210466 */
  goto L_11210466;
L_1121045d:;
  /* 1121045d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210460 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210463 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11210466:;
  /* 11210466 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121046a jae 0x112104dc */
  if (!C.cf) goto L_112104dc;
  /* 1121046c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121046f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11210472 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210475 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210478 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1121047b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121047e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210481 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11210485 push ecx */
  push32((uint32_t)(ECX));
  /* 11210486 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210489 push edx */
  push32((uint32_t)(EDX));
  /* 1121048a call 0x11206500 */
  push32(0x1121048fu); f_11206500();
  /* 1121048f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210492 push eax */
  push32((uint32_t)(EAX));
  /* 11210493 call 0x11206380 */
  push32(0x11210498u); f_11206380();
  /* 11210498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121049b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121049e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112104a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112104a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112104a6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 112104a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112104ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112104af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112104b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112104b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112104b8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 112104bc push eax */
  push32((uint32_t)(EAX));
  /* 112104bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112104c0 push ecx */
  push32((uint32_t)(ECX));
  /* 112104c1 call 0x11206500 */
  push32(0x112104c6u); f_11206500();
  /* 112104c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112104c9 push eax */
  push32((uint32_t)(EAX));
  /* 112104ca call 0x11206380 */
  push32(0x112104cfu); f_11206380();
  /* 112104cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112104d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112104d5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112104d7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112104da jmp 0x1121045d */
  goto L_1121045d;
L_112104dc:;
  /* 112104dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112104df mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112104e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112104e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112104e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112104eb:;
  /* 112104eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112104ee pop esi */
  ESI = (pop32());
  /* 112104ef mov esp, ebp */
  ESP = (EBP);
  /* 112104f1 pop ebp */
  EBP = (pop32());
  /* 112104f2 ret  */
  ESPCHK(0x112103d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010500 @ 0x11210500 (878 bytes, 273 insns) */
void f_11210500(void) {
  FTRACE(0x11210500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11210500 push ebp */
  push32((uint32_t)(EBP));
  /* 11210501 mov ebp, esp */
  EBP = (ESP);
  /* 11210503 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11210506 push esi */
  push32((uint32_t)(ESI));
  /* 11210507 mov eax, dword ptr [0x1122ec98] */
  EAX = (r32((uint32_t)(0x1122ec98)));
  /* 1121050c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1121050f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11210516 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1121051d jmp 0x11210528 */
  goto L_11210528;
L_1121051f:;
  /* 1121051f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210522 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210525 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11210528:;
  /* 11210528 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121052c jae 0x11210561 */
  if (!C.cf) goto L_11210561;
  /* 1121052e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210531 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210534 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11210537 push ecx */
  push32((uint32_t)(ECX));
  /* 11210538 call 0x11206380 */
  push32(0x1121053du); f_11206380();
  /* 1121053d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210540 mov esi, eax */
  ESI = (EAX);
  /* 11210542 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210545 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210548 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1121054c push ecx */
  push32((uint32_t)(ECX));
  /* 1121054d call 0x11206380 */
  push32(0x11210552u); f_11206380();
  /* 11210552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210555 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210558 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1121055c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1121055f jmp 0x1121051f */
  goto L_1121051f;
L_11210561:;
  /* 11210561 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11210568 jmp 0x11210573 */
  goto L_11210573;
L_1121056a:;
  /* 1121056a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121056d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210570 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11210573:;
  /* 11210573 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210577 jae 0x112105ad */
  if (!C.cf) goto L_112105ad;
  /* 11210579 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121057c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1121057f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11210583 push eax */
  push32((uint32_t)(EAX));
  /* 11210584 call 0x11206380 */
  push32(0x11210589u); f_11206380();
  /* 11210589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121058c mov esi, eax */
  ESI = (EAX);
  /* 1121058e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210591 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210594 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11210598 push eax */
  push32((uint32_t)(EAX));
  /* 11210599 call 0x11206380 */
  push32(0x1121059eu); f_11206380();
  /* 1121059e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112105a1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112105a4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112105a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112105ab jmp 0x1121056a */
  goto L_1121056a;
L_112105ad:;
  /* 112105ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112105b0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 112105b6 push eax */
  push32((uint32_t)(EAX));
  /* 112105b7 call 0x11206380 */
  push32(0x112105bcu); f_11206380();
  /* 112105bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112105bf mov esi, eax */
  ESI = (EAX);
  /* 112105c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112105c4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 112105ca push edx */
  push32((uint32_t)(EDX));
  /* 112105cb call 0x11206380 */
  push32(0x112105d0u); f_11206380();
  /* 112105d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112105d3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112105d6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112105da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112105dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112105e0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 112105e6 push edx */
  push32((uint32_t)(EDX));
  /* 112105e7 call 0x11206380 */
  push32(0x112105ecu); f_11206380();
  /* 112105ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112105ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112105f2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112105f6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112105f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112105fc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11210602 push ecx */
  push32((uint32_t)(ECX));
  /* 11210603 call 0x11206380 */
  push32(0x11210608u); f_11206380();
  /* 11210608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121060b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121060e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11210612 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11210615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210618 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1121061e push edx */
  push32((uint32_t)(EDX));
  /* 1121061f call 0x11206380 */
  push32(0x11210624u); f_11206380();
  /* 11210624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210627 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1121062a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1121062e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11210631 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11210634 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210639 push eax */
  push32((uint32_t)(EAX));
  /* 1121063a call 0x11203530 */
  push32(0x1121063fu); f_11203530();
  /* 1121063f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11210645 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210649 je 0x11210866 */
  if (C.zf) goto L_11210866;
  /* 1121064f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210652 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11210655 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210658 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121065e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11210661 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11210666 mov eax, dword ptr [0x1122ec98] */
  EAX = (r32((uint32_t)(0x1122ec98)));
  /* 1121066b push eax */
  push32((uint32_t)(EAX));
  /* 1121066c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1121066f push ecx */
  push32((uint32_t)(ECX));
  /* 11210670 call 0x11209e30 */
  push32(0x11210675u); f_11209e30();
  /* 11210675 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210678 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1121067f jmp 0x1121068a */
  goto L_1121068a;
L_11210681:;
  /* 11210681 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210684 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11210687 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1121068a:;
  /* 1121068a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1121068e jae 0x112106fe */
  if (!C.cf) goto L_112106fe;
  /* 11210690 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210693 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11210696 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210699 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1121069c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121069f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112106a2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112106a5 push edx */
  push32((uint32_t)(EDX));
  /* 112106a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112106a9 push eax */
  push32((uint32_t)(EAX));
  /* 112106aa call 0x11206500 */
  push32(0x112106afu); f_11206500();
  /* 112106af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112106b2 push eax */
  push32((uint32_t)(EAX));
  /* 112106b3 call 0x11206380 */
  push32(0x112106b8u); f_11206380();
  /* 112106b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112106bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112106be lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112106c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112106c5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112106c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112106cb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112106ce mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 112106d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112106d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112106d8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 112106dc push edx */
  push32((uint32_t)(EDX));
  /* 112106dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112106e0 push eax */
  push32((uint32_t)(EAX));
  /* 112106e1 call 0x11206500 */
  push32(0x112106e6u); f_11206500();
  /* 112106e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112106e9 push eax */
  push32((uint32_t)(EAX));
  /* 112106ea call 0x11206380 */
  push32(0x112106efu); f_11206380();
  /* 112106ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112106f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112106f5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112106f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112106fc jmp 0x11210681 */
  goto L_11210681;
L_112106fe:;
  /* 112106fe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11210705 jmp 0x11210710 */
  goto L_11210710;
L_11210707:;
  /* 11210707 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121070a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1121070d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11210710:;
  /* 11210710 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11210714 jae 0x11210786 */
  if (!C.cf) goto L_11210786;
  /* 11210716 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210719 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1121071c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121071f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11210723 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210726 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210729 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1121072d push eax */
  push32((uint32_t)(EAX));
  /* 1121072e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210731 push ecx */
  push32((uint32_t)(ECX));
  /* 11210732 call 0x11206500 */
  push32(0x11210737u); f_11206500();
  /* 11210737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121073a push eax */
  push32((uint32_t)(EAX));
  /* 1121073b call 0x11206380 */
  push32(0x11210740u); f_11206380();
  /* 11210740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210743 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210746 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1121074a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1121074d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11210750 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11210753 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210756 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1121075a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1121075d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210760 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11210764 push eax */
  push32((uint32_t)(EAX));
  /* 11210765 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210768 push ecx */
  push32((uint32_t)(ECX));
  /* 11210769 call 0x11206500 */
  push32(0x1121076eu); f_11206500();
  /* 1121076e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210771 push eax */
  push32((uint32_t)(EAX));
  /* 11210772 call 0x11206380 */
  push32(0x11210777u); f_11206380();
  /* 11210777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121077a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121077d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11210781 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11210784 jmp 0x11210707 */
  goto L_11210707;
L_11210786:;
  /* 11210786 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11210789 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121078c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11210792 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210795 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1121079b push ecx */
  push32((uint32_t)(ECX));
  /* 1121079c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121079f push edx */
  push32((uint32_t)(EDX));
  /* 112107a0 call 0x11206500 */
  push32(0x112107a5u); f_11206500();
  /* 112107a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112107a8 push eax */
  push32((uint32_t)(EAX));
  /* 112107a9 call 0x11206380 */
  push32(0x112107aeu); f_11206380();
  /* 112107ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112107b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112107b4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112107b8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112107bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112107be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112107c1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 112107c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112107ca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 112107d0 push eax */
  push32((uint32_t)(EAX));
  /* 112107d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112107d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112107d5 call 0x11206500 */
  push32(0x112107dau); f_11206500();
  /* 112107da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112107dd push eax */
  push32((uint32_t)(EAX));
  /* 112107de call 0x11206380 */
  push32(0x112107e3u); f_11206380();
  /* 112107e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112107e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112107e9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 112107ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112107f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112107f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112107f6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 112107fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112107ff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11210805 push ecx */
  push32((uint32_t)(ECX));
  /* 11210806 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210809 push edx */
  push32((uint32_t)(EDX));
  /* 1121080a call 0x11206500 */
  push32(0x1121080fu); f_11206500();
  /* 1121080f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210812 push eax */
  push32((uint32_t)(EAX));
  /* 11210813 call 0x11206380 */
  push32(0x11210818u); f_11206380();
  /* 11210818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121081b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121081e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11210822 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11210825 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11210828 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121082b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11210831 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11210834 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1121083a push eax */
  push32((uint32_t)(EAX));
  /* 1121083b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1121083e push ecx */
  push32((uint32_t)(ECX));
  /* 1121083f call 0x11206500 */
  push32(0x11210844u); f_11206500();
  /* 11210844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210847 push eax */
  push32((uint32_t)(EAX));
  /* 11210848 call 0x11206380 */
  push32(0x1121084du); f_11206380();
  /* 1121084d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11210850 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210853 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11210857 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1121085a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1121085d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11210860 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11210866:;
  /* 11210866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11210869 pop esi */
  ESI = (pop32());
  /* 1121086a mov esp, ebp */
  ESP = (EBP);
  /* 1121086c pop ebp */
  EBP = (pop32());
  /* 1121086d ret  */
  ESPCHK(0x11210500u, _esp0);
  ESP += 4; return;
}

/* FUN_10010870 @ 0x11210870 (31 bytes, 15 insns) */
void f_11210870(void) {
  FTRACE(0x11210870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11210870 push ebp */
  push32((uint32_t)(EBP));
  /* 11210871 mov ebp, esp */
  EBP = (ESP);
  /* 11210873 push 0 */
  push32((uint32_t)(0x0u));
  /* 11210875 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11210878 push eax */
  push32((uint32_t)(EAX));
  /* 11210879 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1121087c push ecx */
  push32((uint32_t)(ECX));
  /* 1121087d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11210880 push edx */
  push32((uint32_t)(EDX));
  /* 11210881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11210884 push eax */
  push32((uint32_t)(EAX));
  /* 11210885 call 0x11210890 */
  push32(0x1121088au); f_11210890();
  /* 1121088a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1121088d pop ebp */
  EBP = (pop32());
  /* 1121088e ret  */
  ESPCHK(0x11210870u, _esp0);
  ESP += 4; return;
}

